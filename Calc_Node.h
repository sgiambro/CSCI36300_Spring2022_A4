//==============================================================================
/**
 * @file       Calc_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CALC_NODE_H_
#define _CALC_NODE_H_

/**
 * @brief base node for calculator operation nodes
 * 
 */
class Calc_Node {
public:
    /**
     * @brief Construct a new Calc_Node object
     * 
     */
    Calc_Node (void);

    /**
     * @brief Destroy the Calc_Node object
     * 
     */
    virtual ~Calc_Node (void);

    /**
     * @brief selects which traveral method to use
     * 
     * @param v 
     */
    virtual void accept (Calc_Node_Vistior & v) = 0;


};

#include "Calc_Node.cpp"

#endif   // !defined _CALC_NODE_H_
