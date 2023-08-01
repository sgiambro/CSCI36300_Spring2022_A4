//==============================================================================
/**
 * @file       Div_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _DIV_NODE_H_
#define _DIV_NODE_H_

/**
 * @brief provides division to the calculator
 * 
 */
class Div_Node : public Binary_Node {
public:
    /**
     * @brief Construct a new Div_Node object
     * 
     */
    Div_Node (void);

    /**
     * @brief visits the divide node
     * 
     * @param v 
     */
    virtual void accept (Calc_Node_Vistior & v);

};

#include "Div_Node.cpp"

#endif   // !defined _DIV_NODE_H_
