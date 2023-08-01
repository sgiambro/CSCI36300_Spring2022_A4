//==============================================================================
/**
 * @file       Unary_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _UNARY_NODE_H_
#define _UNARY_NODE_H_

/**
 * @brief provides unary operations to the calculator
 * 
 */
class Unary_Node : public Calc_Node {
public:
    /**
     * @brief Construct a new Unary_Node object
     * 
     */
    Unary_Node (Calc_Node * n1);

    /**
     * @brief Destroy the Unary_Node object
     * 
     */
    virtual ~Unary_Node (void);

    /**
     * @brief visits the unary node
     * 
     * @param v 
     */
    virtual void accept (Calc_Node_Vistior & v);

protected:
    Calc_Node * child_;

};

#include "Unary_Node.cpp"

#endif   // !defined _UNARY_NODE_H_
