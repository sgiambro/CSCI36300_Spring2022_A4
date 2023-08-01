// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Bin_Node.h"

//
// Bin_Node
//
Bin_Node::Bin_Node ()
: left_   (nullptr),
  right_  (nullptr)
{ }

//
// deconstructor
//
Bin_Node::~Bin_Node (){
    delete[] left_; 
    delete[] right_;
}
