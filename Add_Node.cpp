// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Add_Node.h"

//
// Add_Node
//
Add_Node::Add_Node ()
: left_   (nullptr),
  right_  (nullptr)
{ }

//
// accept
//
void Add_Node::accept (Calc_Node_Vistior & v){
    v.visit_add_node(*this);
}