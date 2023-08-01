// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Number_Node.h"

//
// Number_Node
//
Number_Node::Number_Node (int num)
: value_  (num)
{ }

//
// accept
//
void accept (Calc_Node_Vistior & v){
    v.visit_num_node(*this);
}