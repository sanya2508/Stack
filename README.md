# Stack

* A Data Structure which maintains information in the Last In First Out (LIFO) order.
* Example: Stack of books, Pile of plates.
* It can be implemented using array, linked-list, or vector.

<hr/>

## Important Operations:
* Pop

* Push

* Top

* Empty

<hr/>

## <a href="https://github.com/sanya2508/Stack/blob/master/stackImplementationByVector.cpp">Stack Implementation</a>

## <a href="https://github.com/sanya2508/Stack/blob/master/stackTemplate.cpp">Stack Implementation using Templates </a>

## <a href="https://github.com/sanya2508/Stack/blob/master/stack%20STL.cpp">Stack STL </a>

<hr/>

## Reverse a Stack
 * This can be done in three ways.
   1. Using two stacks.
      * Let s1 be the given stack and s2 and s3 are two other stacks.
      * Transfer(s1, s2).
      * Transfer(s2,s3).
      * Transfer(s3,s1).

   2. <a href="https://github.com/sanya2508/Stack/blob/master/ReverseStackUsingOneExtraStack.cpp">Using one stack.</a>
      * Let s1 be the given stack and s2 be the other stack.
      * Store the top most element of s1 in a variable.
      * Transfer the remaining elements of s1 to s2.
      * Push the element stored in variable to s1.
      * Transfer the elements from s2 to s1.
      * Repeat.

   3. <a href="https://github.com/sanya2508/Stack/blob/master/reverseStackByRecursion.cpp">By recursion.</a>
      * Pop and store the top most element.
      * By recursion reverse the remaining stack.
      * Insert the element popped at bottom.

<hr/>
