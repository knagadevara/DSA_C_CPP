### Primary Memory
------------------

RAM is known as Primary memory and it is divided into 3 parts,
-   Stack Block [Static Allocation]
-   Heap Block [Dynamic Allocation]
-   Text Block [Instruction Loader]



##### Stack Block [Static Allocation]
-   Variables, Functions will be created inside the stack with a virtual diision between them.
-   This portion is known as Stack Frame/Activation Record and the required memory is calculated at compiletime and allocated at runtime. Hence it is called **Static**.
-   Each frame is independant of itself and doesnot allow any direct access to its data-members.
-   This memory is utilised in a sequential manner,look at the below code. 
    -   The code itself will be loaded onto Text-Block, then, execution starts at main() which becomes the first frame in the stack contains the variables a,b.
    -   Then function1() is executed[called from main()], which will create a second frame in the stack and contains variable a which is absolutely different from the variable created in main().
    -   Then function2() is executed[called from function1()], which will create a third frame in the stack and contains variable i,x.
    -   After the execution of a FUNCTION all of its Data/Variables will be destroyed automatically in a sequential order started from the last created Function first.
    -   Basing on that fact, the order of distruction is function2() --> function1() --> main().

            example.c

                void function2(int i)
                {
                    int x,
                }

                void function1()
                {
                    int a;
                    function2(a);
                }

                void main()
                {
                    int a; 
                    float b;
                    finction1()
                }