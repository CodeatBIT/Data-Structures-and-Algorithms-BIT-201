# Bracket matching algorithm:

## To test whether phrase is well-bracketed:

    1.  Make bracket-stack empty.

    2.  For each symbol sym in phrase (scanning from left to right),
        repeat:

        2.1. If sym is a left bracket:

            2.1.1. Add sym to the top of bracket-stack.

        2.2. If sym is a right bracket:

            2.2.1. If bracket-stack is empty, terminate with false.

            2.2.2. Remove a bracket from the top of bracket-stack into left.

            2.2.3. If left and sym are not matched brackets, terminate with false.

    3. Terminate with true if bracket-stack is empty, or false otherwise.
