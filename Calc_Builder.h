//==============================================================================
/**
 * @file       Calc_Builder.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CALC_BUILDER_H_
#define _CALC_BUILDER_H_

/**
 * @brief provides builder interface
 * 
 */
class Calc_Builder {
public:
    
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
     * @brief command get the current expression
     * 
     */
    virtual Calc_Node * get_expression (void) = 0;

};

#endif   // !defined _CALC_BUILDER_H_
