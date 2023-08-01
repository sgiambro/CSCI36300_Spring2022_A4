//==============================================================================
/**
 * @file       Mul_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MUL_NODE_H_
#define _MUL_NODE_H_

/**
 * @brief provides multiplication to the calculator
 * 
 */
class Mul_Node : public Binary_Node {
public:
    /**
     * @brief Construct a new Mul_Node object
     * 
     */
    Mul_Node (void);

    /**
     * @brief visits the multiplication node
     * 
     * @param v 
     */
    virtual void accept (Calc_Node_Vistior & v);

};

#include "Mul_Node.cpp"

#endif   // !defined _MUL_NODE_H_
