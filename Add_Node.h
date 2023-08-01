//==============================================================================
/**
 * @file       Add_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _ADD_NODE_H_
#define _ADD_NODE_H_

/**
 * @brief provides addition to the calculator
 * 
 */
class Add_Node : public Binary_Node {
public:
    /**
     * @brief Construct a new Add_Node object
     * 
     */
    Add_Node (void);

    /**
     * @brief visits the add node
     * 
     * @param v 
     */
    virtual void accept (Calc_Node_Vistior & v);

};

#include "Add_Node.cpp"

#endif   // !defined _ADD_NODE_H_
