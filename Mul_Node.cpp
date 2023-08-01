// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Mul_Node.h"

//
// Mul_Node
//
Mul_Node::Mul_Node ()
: left_   (nullptr),
  right_  (nullptr)
{ }

//
// accept
//
void Mul_Node::accept (Calc_Node_Vistior & v){
    v.visit_mul_node(*this);
}