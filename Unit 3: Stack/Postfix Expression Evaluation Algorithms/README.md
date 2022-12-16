# Postfix Expression Evaluation Algorithms

#### Scan the symbols of the given postfix expression from left to right and for each symbol, do the following:

     1. If symbol is an operand
        ■ Push it on the stack.
     2. If symbol is an operator
        ■ Pop two symbols out of the stack and apply the operator on these symbols.
        ■ Push the result on the stack
     3. After scanning all the symbols of the postfix expression,
        pop the remaining symbol out of the stack and print it on the screen.
        The remaining symbol is the result obtained after evaluating the postfix expression.
