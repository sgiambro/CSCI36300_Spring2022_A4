//==============================================================================
/**
 * @file       Calculator.h
 *
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

/**
 * @brief Calculate the users expression
 * 
 */
class Calculator {

public:

    /**
     * @brief Construct a new Calculator object
     * 
     * @param builder 
     */
    Calculator (Calc_Builder & builder_);


    bool parser (const std::string & infix);

    /**
     * @brief Runs the calculator program until told to stop
     * 
     */
    void run (void);

    /**
     * @brief gets the results of a given infix string
     * 
     * @param infix 
     * @return int 
     */
    int Calculator::run_given (const std::string & infix);

private:
    Calc_Builder * builder_;

};

#include "Calculator.cpp"

#endif   // !defined _CALCULATOR_H_
