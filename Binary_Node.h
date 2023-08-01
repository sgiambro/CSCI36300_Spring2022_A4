//==============================================================================
/**
 * @file       Binary_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _BINARY_NODE_H_
#define _BINARY_NODE_H_

/**
 * @brief provides binary operations to the calculator
 * 
 */
class Binary_Node : public Calc_Node {
public:
    /**
     * @brief Construct a new Binary_Node object
     * 
     */
    Binary_Node (void);

    /**
     * @brief Destroy the Binary_Node object
     * 
     */
    virtual ~Binary_Node (void);

    /**
     * @brief abstract visit node
     * 
     * @param v 
     */
    virtual void accept (Calc_Node_Vistior & v);


    Calc_Node * right_;
    Calc_Node * left_;

};

#include "Binary_Node.cpp"

#endif   // !defined _BINARY_NODE_H_
