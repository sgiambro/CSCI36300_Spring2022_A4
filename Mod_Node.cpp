// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Mod_Node.h"

//
// Mod_Node
//
Mod_Node::Mod_Node ()
: left_   (nullptr),
  right_  (nullptr)
{ }

//
// accept
//
void Mod_Node::accept (Calc_Node_Vistior & v){
    v.visit_mod_node(*this);
}