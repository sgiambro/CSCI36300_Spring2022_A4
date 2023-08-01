//==============================================================================
/**
 * @file       Mod_Node.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _MOD_NODE_H_
#define _MOD_NODE_H_

/**
 * @brief provides modular division to the calculator
 * 
 */
class Mod_Node : public Binary_Node {
public:
    /**
     * @brief Construct a new Mod_Node object
     * 
     */
    Mod_Node (void);

    /**
     * @brief visits the modular division node
     * 
     * @param v 
     */
    virtual void accept (Calc_Node_Vistior & v);
};

#include "Mod_Node.cpp"

#endif   // !defined _MOD_NODE_H_
