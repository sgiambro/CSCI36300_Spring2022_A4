// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Calc_Tree_Builder.h"

//
// Calc_Tree_Builder
//
Calc_Tree_Builder () { }

//
// Destructor
//
~Calc_Tree_Builder (){
    delete [] tree_;
}

//
// start
//
void start (){
    this->tree_ = new Calc_Node ();
}

//
// build_add
//
void build_add (){
    Add_Node add ();
    curr_node_->right_ = add;
    curr_node_ = add;
    curr_node_->left_ = num_;

}

//
// build_sub
//
void build_sub (){
    Sub_Node sub ();
    curr_node_->right_ = sub;
    curr_node_ = sub;
    curr_node_->left_ = num_;

}

//
// build_mod
//
void build_mod (){
    Mod_Node mod ();
    curr_node_->right_ = mod;
    curr_node_ = mod;
    curr_node_->left_ = num_;

}

//
// build_mul
//
void build_mul (){
    Mul_Node mul ();
    curr_node_->right_ = mul;
    curr_node_ = mul;
    curr_node_->left_ = num_;

}

//
// build_div
//
void build_div (){
    Div_Node div ();
    curr_node_->right_ = div;
    curr_node_ = div;
    curr_node_->left_ = num_;

}

//
// build_num
//
void build_num (int num){
    Number_Node number (num);
    num_ = number;
}

//
// build_end
//
void build_end {
    curr_node_->right = num_;
}

//
// get_expression
//
Calc_Node * get_expression (void){
    return this->tree_;
}


