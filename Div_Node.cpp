// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Div_Node.h"

//
// Div_Node
//
Div_Node::Div_Node ()
: left_   (nullptr),
  right_  (nullptr)
{ }

//
// accept
//
void Div_Node::accept (Calc_Node_Vistior & v){
    v.visit_div_node(*this);
}