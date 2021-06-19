There are two types of Data-Structures which are supported by multiple programming languages.

#### Physical
-------------
These are ment for holding/storing the data inside memory.

-   Array
    -   It is a static DS which creates a contigues block of memory of a similar data type.
    -   Size of array is fixed while getting created and it cannot be increased/decreased.
    -   Useful in cases where the usable size is already known.
    -   Can be created inside a Stack and Heap[with a pointer variable in stack pointing to first address in stack]

-   Linked List
    -   It is a dynamic DS which stores the location of next node in it.
    -   Size can be increased and decreased.
    -   All the nodes of LL are always created in a Heap with a pointer to Head node in stack.



#### Logical
------------
These are ment to articulate a the dicipline followed to insert/delete/search/sort data values in structures. Implemented by using Array, LinkedList's

-   Linear DS
    -   Stack - LIFO
    -   Queues - FIFO

-   Non-Linear DS
    -   Trees - Heirarchy
    -   Graph - Collection on Nodes, links between nodes.

-   Tabular
    -   Hash Table

#### Premitive Data Type
------------------------
-    character

Integer.

1.  Representation of Data. [How Data is stored]
    -   example: let us check how and integer is represented 

            int x;
            // takes 4 bytes, 1 byte is 8 bits
            // 4 * 8 = 32, it takes 32 bits of memory
            // the first bit is reserved to save the sign of the integer, rest is utilized to save any permited number.

2.  Operations on Data. [What are the allowed operations on Data.
    -   example: let us check how and integer is allowed to operate.

            int x = 10; // assignment is default for all.
            x = x + 1;  // but for int arthemtic operations are specific, 
            x >= 10 ;  // logical operators for comparission..
            x++ ; // increment decrement.

#### Abstract Data Type
-----------------------
Generally used in OOP Classes, where one can create a desired data-type with representation and set of valid operations.

List.

1.  Representation of Data. [How Data is stored]
- It can be done through an Array or a 'linked list' which satisfies the below,
  - Space for storing elements
  - Maximum Capacity

2.  Operations on Data. [What are the allowed operations on Data].
- Operations which can be performed.
 - adding/append elements
 - removing elements
 - searching elements
 - sorting elements