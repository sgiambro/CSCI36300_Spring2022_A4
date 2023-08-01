//==============================================================================
/**
 * @file       Calc_Node_Vistior.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CALC_NODE_VISITOR_H_
#define _CALC_NODE_VISITOR_H_

/**
 * @brief provides visitor interface
 * 
 */
class Calc_Node_Vistior {
public:
    
    /**
     * @brief Destroy the Calc_Node_Vistior object
     * 
     */
    virtual ~Calc_Node_Vistior (void);

    /**
     * @brief visits the add node
     * 
     * @param node 
     */
    virtual void visit_add_node (const Add_Node & node);

     /**
     * @brief visits the subtract node
     * 
     * @param node 
     */
    virtual void visit_sub_node (const Sub_Node & node);

     /**
     * @brief visits the modular division node
     * 
     * @param node 
     */
    virtual void visit_mod_node (const Mod_Node & node);

     /**
     * @brief visits the multiply node
     * 
     * @param node 
     */
    virtual void visit_mul_node (const Mul_Node & node);

     /**
     * @brief visits the division node
     * 
     * @param node 
     */
    virtual void visit_div_node (const Div_Node & node);

     /**
      * @brief Returns the value of the number node
      * 
      * @param node 
      * @return int 
      */
    virtual int visit_num_node (const Number_Node & node);



};

#endif   // !defined _CALC_NODE_VISITOR_H_
