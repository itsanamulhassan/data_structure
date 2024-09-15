// a  Why do you think linked-list requires more memory than an array when storing the same number of elements?

/**
  linked list typically requires more memory than an array when storing the same number of elements for several reasons:

    Storage for Pointers:
        In a linked list, each element (node) contains additional memory for storing a pointer to the next node (and possibly a previous node in the case of a doubly linked list). This overhead increases the total memory usage compared to an array, which only stores the elements themselves.

    Non-contiguous Memory Allocation:
        Linked lists allocate memory for each node individually and nodes can be scattered across the heap. This non-contiguous allocation can lead to increased memory fragmentation and potentially less efficient memory usage.

    Node Structure:
        Each node in a linked list typically consists of the data and one or two pointers (for singly or doubly linked lists, respectively). For example, in a singly linked list, if the data is an integer and a pointer is 8 bytes (on a 64-bit system), each node would require 12 bytes (4 bytes for the integer and 8 bytes for the pointer). In contrast, an array of integers would only require 4 bytes per integer.

    Allocator Overhead:
        Memory allocators might add some overhead for each allocated block of memory to keep track of the allocation. When many small blocks are allocated for each node in a linked list, this overhead can accumulate, leading to higher memory usage compared to the single block allocation of an array.

Here’s a brief example to illustrate:

    Array of 100 integers:
        Memory usage: 100×4=400100×4=400 bytes (assuming 4 bytes per integer).

    Singly linked list with 100 integers:
        Memory usage: 100×(4+8)=1200100×(4+8)=1200 bytes (assuming 4 bytes per integer and 8 bytes per pointer on a 64-bit system).

Therefore, the linked list uses significantly more memory due to the additional storage required for pointers and potential allocator overhead.

 */

// Write down Three Limitations of the array which can be solved by the use of Linked List
// What is the value of Head?
// What is the value of ? marked address location?
// What will be the value of Head->Next->Next->Value?
// What will be the value of Sum following pseudocode snippets?
// Sum = 0
// Temp = Head
// While ( Temp -> Next!= 1020){
// 	Sum += Temp-> value
// 	Temp = Temp -> Next
// }
// Sum -= Temp -> value;
