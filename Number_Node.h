//==============================================================================
/**
 * @file       Number_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _NUMBER_NODE_H_
#define _NUMBER_NODE_H_

/**
 * @brief provides numbers to the calculator
 * 
 */
class Number_Node : public Calc_Node {
public:
    /**
     * @brief Construct a new Number_Node object
     * 
     */
    Number_Node (int num);

    /**
     * @brief visits the number node
     * 
     * @param v 
     */
    virtual void accept (Calc_Node_Vistior & v);


    int value_;

};

#include "Number_Node.cpp"

#endif   // !defined _NUMBER_NODE_H_
