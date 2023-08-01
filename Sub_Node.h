//==============================================================================
/**
 * @file       Sub_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _SUB_NODE_H_
#define _SUB_NODE_H_

/**
 * @brief provides subtraction to the calculator
 * 
 */
class Sub_Node : public Binary_Node {
public:
    /**
     * @brief Construct a new Sub_Node object
     * 
     */
    Sub_Node (void);

    /**
     * @brief visits the subract node
     * 
     * @param v 
     */
    virtual void accept (Calc_Node_Vistior & v);

};

#include "Sub_Node.cpp"

#endif   // !defined _SUB_NODE_H_
