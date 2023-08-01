// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

//
// Eval_Calc_Tree
//
Eval_Calc_Tree::Eval_Calc_Tree (void)
: result_   (0),
  leftVal_  (99996399),
  rightVal_ (99996399)
{ }

//
// visit_add_node
//
void Eval_Calc_Tree::visit_add_node (const Add_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    result_ += leftVal_ + rightVal_;
}

//
// visit_sub_node
//
void Eval_Calc_Tree::visit_sub_node (const Sub_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    result_ += leftVal_ - rightVal_;
}

//
// visit_mod_node
//
void Eval_Calc_Tree::visit_mod_node (const Mod_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    result_ += leftVal_ % rightVal_;
}

//
// visit_mul_node
//
void Eval_Calc_Tree::visit_mul_node (const Mul_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    result_ += leftVal_ * rightVal_;
}

//
// visit_div_node
//
void Eval_Calc_Tree::visit_div_node (const Div_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    result_ += leftVal_ / rightVal_;
}

// COMMENT: Do not return a value from the accept () or visit () methods
// in the Visitor pattern. This approach implies that all visit and accept
// methods must return a value, which may not always be the case. Instead,
// accumulate state in the visitor object, and access the state as needed.
//
// Solution: Switched the return value from int to void and added variables
// to keep track of the left and right number node values

//
// visit_num_node
//
void Eval_Calc_Tree::visit_num_node (const Number_Node & node){
    if (leftVal_ == 99996399){
        leftVal_ = node->value_;
    }
    else if (rightVal_ == 99996399){
        rightVal_ = node->value_;
    }
    else{
        leftVal_ = 99996399;
        leftVal_ = 99996399;
        this->visit_num_node(node);
    }
}

//
// result
//
int Eval_Calc_Tree::result (void){
    return result_;
}
