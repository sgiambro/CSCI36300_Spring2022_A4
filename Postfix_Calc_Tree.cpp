// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

//
// Postfix_Calc_Tree
//
Eval_Calc_Tree::Postfix_Calc_Tree (void) { }

//
// visit_add_node
//
void Eval_Calc_Tree::visit_add_node (const Add_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    std::cout << " + ";
}

//
// visit_sub_node
//
void Eval_Calc_Tree::visit_sub_node (const Sub_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    std::cout << " - ";
}

//
// visit_mod_node
//
void Eval_Calc_Tree::visit_mod_node (const Mod_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    std::cout << " % ";
}

//
// visit_mul_node
//
void Eval_Calc_Tree::visit_mul_node (const Mul_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    std::cout << " * ";
}

//
// visit_div_node
//
void Eval_Calc_Tree::visit_div_node (const Div_Node & node){
    this->visit_num_node(node->left_);
    this->visit_num_node(node->right_);
    std::cout << " / ";
}

//
// visit_num_node
//
int Eval_Calc_Tree::visit_num_node (const Number_Node & node){
    cout << node->value_;
    return 0;
}
