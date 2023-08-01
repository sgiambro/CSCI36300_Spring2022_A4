//==============================================================================
/**
 * @file       Eval_Calc_Tree.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _EVAL_CALC_TREE_H_
#define _EVAL_CALC_TREE_H_

/**
 * @brief evaluates the expression tree
 * 
 */
class Eval_Calc_Tree : public Calc_Node_Vistior {
public:

    /**
     * @brief Construct a new Eval_Calc_Tree object
     * 
     */
    Eval_Calc_Tree (void);

    /**
     * @brief Destroy the Eval_Calc_Tree object
     * 
     */
    virtual ~Eval_Calc_Tree (void);

    /**
     * @brief preforms the add node
     * 
     * @param node 
     */
    virtual void visit_add_node (const Add_Node & node);

     /**
     * @brief preforms the subtract node
     * 
     * @param node 
     */
    virtual void visit_sub_node (const Sub_Node & node);

     /**
     * @brief preforms the modular division node
     * 
     * @param node 
     */
    virtual void visit_mod_node (const Mod_Node & node);

     /**
     * @brief preforms the multiply node
     * 
     * @param node 
     */
    virtual void visit_mul_node (const Mul_Node & node);

     /**
     * @brief preforms the division node
     * 
     * @param node 
     */
    virtual void visit_div_node (const Div_Node & node);

    // COMMENT: Do not return a value from the accept () or visit () methods
    // in the Visitor pattern. This approach implies that all visit and accept
    // methods must return a value, which may not always be the case. Instead,
    // accumulate state in the visitor object, and access the state as needed.
    //
    // Solution: Switched the return value from int to void

     /**
      * @brief visits the number node
      * 
      * @param node 
      * @return int 
      */
    virtual void visit_num_node (const Number_Node & node);

    /**
     * @brief prints the result of the calculation
     * 
     * @return int 
     */
    int result (void);


private:
    int result_;
    int leftVal_;
    int rightVal_;



};

#include "Eval_Calc_Tree.cpp"

#endif   // !defined _EVAL_CALC_TREE_H_
