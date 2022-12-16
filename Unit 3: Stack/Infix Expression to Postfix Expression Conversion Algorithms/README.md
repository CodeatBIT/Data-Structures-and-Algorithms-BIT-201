# Infix Expression to Postfix Expression Conversion Algorithms

#### Scan the symbols of the expression from left to right and for each symbol, do the following:

    a. If symbol is an operand

         ■ Print that symbol onto the screen.

    b. If symbol is a left parenthesis

         ■ Push it on the stack.

    c. If symbol is a right parenthesis

         ■ Pop all the operators from the stack upto the first left parenthesis
           and print them on the screen.

         ■ Discard the left and right parentheses.

    d. If symbol is an operator

         ■ If the precedence of the operators in the stack are
           greater than or equal to the current operator,
           then
               Pop the operators out of the stack and print them onto the screen,
               and push the current operator onto the stack.

         ■ else
               Push the current operator onto the stack.
