// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Sub_Node.h"

//
// Sub_Node
//
Sub_Node::Sub_Node ()
: left_   (nullptr),
  right_  (nullptr)
{ }

//
// accept
//
void Sub_Node::accept (Calc_Node_Vistior & v){
    v.visit_sub_node(*this);
}