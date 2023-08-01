// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Calculator.h"

//
// Calculator
//
Calculator::Calculator (Calc_Builder & builder)
: builder_ (builder_)
{ }


//
// parser
//
bool Calculator::parser (const std::string & infix){

    std::istringstream input(infix);
    std::string token;
    std::string number;
    builder_.start();

    // COMMENT Your current design is using the builder pattern, but not fully
    // using it and going against its intent. The client should not be aware
    // of how anything is handled related to the construction of the complex
    // object. In your code below, you are "holding" off the numbers. Instead,
    // the concrete builder must handles these appropriately. Otherwise, you
    // are making the client somewhat aware of the build process.
    //
    // Solution: Moved the number logic to the tree builder to hide how the 
    // tree is being built 
    
    while(!input.eof()){
        input >> token;

        if(token == "+"){
            this->builder_.build_add ();
        }
        else if(token == "-"){
            this->builder_.build_sub ();
        }
        else if(token == "*"){
            this->builder_.build_mul ();
        }
        else if(token == "/"){
            this->builder_.build_div ();
        }
        else if(token == "%"){
            this->builder_.build_mod ();
        }
        else if(token == "("){
            Calculator cal;

            while (token != ")" || !input.eof()){
                input >> token;
                std::string expression;

                expression = expression + " " + token;
            }
            
            number = cal.run_given (expression);
            this->builder_.build_num (number);
        }
        else {
            this->builder_.build_num (std::stoi(token));
        }
      
        this->builder_.build_end ();

    }
    

    return true;
}


//
// run
//
void Calculator::run (void){
    std::string infix;
    Eval_Calc_Tree answer;

    std::cout << "Enter Expression (Type \"QUIT\" To Leave)):" << std::endl;
    std::cin >> infix;

    while(infix != "QUIT"){
        this->parser(infix);

        builder_->get_expression()->answer (answer);

        std::cout << answer.result() << endl;

        std::cout << "Enter Another Expression (Type \"QUIT\" To Leave)):" << std::endl;
        std::cin >> infix;

    }

}

//
// run_given
//
int Calculator::run_given (const std::string & infix){
    Eval_Calc_Tree answer;

    this->parser(infix);
    builder_->get_expression()->answer (answer);
    
    return answer.result();

}
