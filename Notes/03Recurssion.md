### Recursion
--------------
-   Other operations if any are associated while calling the function, they will be executed while in returning.

Generally a function calling itself in one of the statements under a condition[ which eventually fails, to avoid infinite loop], there are five types of recurssion's

-   Tail Recursion: 
    -   Function will make a call to itself at the last after executing all the statements before it.

        func(a)
            {
                if(<condition to fail>)
                    {
                        statement 1;
                        statement 2;
                        statement 3;
                        statement N;
                        func(<direction/increment/decrement>)
                    }
            }

-   Head Recursion
    -   Function will first make a call to itself before executing all the statements under it.
    -   All the operations/statements will be executed at the time of returning.

        func(a)
            {
                if(<condition to fail>)
                    {
                        func(<direction/increment/decrement>)
                        statement 1;
                        statement 2;
                        statement 3;
                        statement N;
                    }
            }

-   Tree Recursion
    -   Function wll be make calls to itself more than once.

        func(a)
            {
                if(<condition to fail>)
                    {
                        statement 1;
                        func(<direction/increment/decrement>)
                        statement 2;
                        statement 3;
                        func(<direction/increment/decrement>)
                        statement N;
                    }
            }

-   Indirect Recursion
    -   Calling functions recursives through a different function.

        funcA(a)
            {
                if(<condition to fail>)
                    {
                        statement 1;
                        funcB(<direction/increment/decrement>)
                    }
            }

        funcB(a)
            {
                if(<condition to fail>)
                    {
                        statement 1;
                        funcA(<direction/increment/decrement>)
                    }
            }


-   Nested Recursion
    -   A function calling itself and has itself as a function argument

        func(a)
            {
                if(<condition to fail>)
                    {
                        statement 1;
                        statement 2;
                        statement 3;
                        statement N;
                        func(func(<direction/increment/decrement>))
                    }
            }