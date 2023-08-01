//==============================================================================
/**
 * @file       Infix_Calc_Tree.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _INFIX_CALC_TREE_H_
#define _INFIX_CALC_TREE_H_

/**
 * @brief prints expression in infix
 * 
 */
class Infix_Calc_Tree : public Calc_Node_Vistior {
public:

    /**
     * @brief Construct a new Infix_Calc_Tree object
     * 
     */
    Infix_Calc_Tree (void);

    /**
     * @brief Destroy the Infix_Calc_Tree object
     * 
     */
    virtual ~Infix_Calc_Tree (void);

    /**
     * @brief Prints the add node
     * 
     * @param node 
     */
    virtual void visit_add_node (const Add_Node & node);

     /**
     * @brief Prints the subtract node
     * 
     * @param node 
     */
    virtual void visit_sub_node (const Sub_Node & node);

     /**
     * @brief Prints the modular division node
     * 
     * @param node 
     */
    virtual void visit_mod_node (const Mod_Node & node);

     /**
     * @brief Prints the multiply node
     * 
     * @param node 
     */
    virtual void visit_mul_node (const Mul_Node & node);

     /**
     * @brief Prints the division node
     * 
     * @param node 
     */
    virtual void visit_div_node (const Div_Node & node);

     /**
     * @brief Prints the number node
     * 
     * @param node 
     */
    virtual int visit_num_node (const Number_Node & node);


};

#include "Infix_Calc_Tree.cpp"

#endif   // !defined _INFIX_CALC_TREE_H_
