### Primary Memory
------------------

RAM is known as Primary memory and it is divided into 3 parts,
-   Stack Block [Static Allocation]
-   Heap Block [Dynamic Allocation]
-   Text Block [Instruction Loader]



#### Stack Block [Static Allocation]

-   Variables, Functions will be created inside the stack with a virtual diision between them.
-   This portion is known as Stack Frame/Activation Record and the required memory is calculated at compiletime and allocated at runtime. Hence it is called **Static**.
-   Each frame is independant of itself and doesnot allow any direct access to its data-members.
-   This memory is utilised in a sequential manner,look at the below code. 
    -   The code itself will be loaded onto Text-Block, then, execution starts at main() which becomes the first frame in the stack contains the variables a,b.
    -   Then function1() is executed[called from main()], which will create a second frame in the stack and contains variable a which is absolutely different from the variable created in main().
    -   Then function2() is executed[called from function1()], which will create a third frame in the stack and contains variable i,x.
    -   After the execution of a FUNCTION all of its Data/Variables will be destroyed automatically in a sequential order starting from the last created Function first, making it more organized and dosent require any external entity/code to do manage.
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

#### Heap Block [Dynamic Allocation]

-   Heap memory is un-organized memory which is not owned by the executing program so it cannot be accessed directly, but indirectly by allocating memory using (malloc,calloc or new) and returning the pointer to an specific data-type variable. 
-   This memory should be deemed as a shared resource in the system, which is availavle to multiple other programs/scripts/rotines/functions.
-   All the memory which has been allocated should be deallocated with the use of functions like free(), delete() or by de-initializing through a distructor.
-   THe memory consumed by a pointer is equal to the integer **sizeOf(int)** which is different for different architectures. And it will be created inside the stack-frame of the function which initialized it.

        // Cpp  syntax, 'new' keyword creates an integer array of size 5 in Heap memory, then saves its first(starting) address in pointerToIntegerArray variable.
            pointerToIntegerArray = new int[5] ; // explicitly request for allocation
            delete []pointerToIntegerArray; // explicitly request for de-allocation

        // C syntax: There multiple different ways to create heap variables in C, checkout 
            https://github.com/knagadevara/cBaseSystems/tree/master/01Prog

