//==============================================================================
/**
 * @file       Calc_Tree_Builder.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CALC_TREE_BUILDER_H_
#define _CALC_TREE_BUILDER_H_

/**
 * @brief provides tree builder function
 * 
 */
class Calc_Tree_Builder : public Calc_Builder {
public:
    
    /**
     * @brief Construct a new Calc_Tree_Builder object
     * 
     */
    Calc_Tree_Builder (void);

    /**
     * @brief Destroy the Calc_Tree_Builder object
     * 
     */
    virtual ~Calc_Tree_Builder (void);

    /**
     * @brief command to start the tree
     * 
     */
    virtual void start (void);

    /**
     * @brief command to build an add node
     * 
     */
    virtual void build_add (void) = 0;

    /**
     * @brief command to build an subtraction node
     * 
     */
    virtual void build_sub (void) = 0;

    /**
     * @brief command to build an modualer division node
     * 
     */
    virtual void build_mod (void) = 0;

    /**
     * @brief command to build an multiplication node
     * 
     */
    virtual void build_mul (void) = 0;

    /**
     * @brief command to build an divide node
     * 
     */
    virtual void build_div (void) = 0;

    /**
     * @brief command to build an num node
     * 
     */
    virtual void build_num (int num) = 0;

    /**
     * @brief command to build the last num node
     * 
     */
    virtual void build_end () = 0;

    /**
     * @brief command get the current expression
     * 
     */
    virtual Calc_Node * get_expression (void) = 0;


private:
    //root of the tree
    Calc_Node * tree_;

    //current node being build
    Calc_Node * curr_node_;

    //num node holder
    Calc_Node * num_;
    
};

#include "Calc_Tree_Builder.cpp"

#endif   // !defined _CALC_TREE_BUILDER_H_
