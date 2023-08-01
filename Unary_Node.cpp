// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Unary_Node.h"

//
// Unary_Node
//
Unary_Node::Unary_Node (Calc_Node * n1)
: child_  (n1)
{ }

//
// deconstructor
//
Unary_Node::~Unary_Node (){
    delete[] child_; 
}
