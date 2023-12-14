# Stacks_in_cppds(Interview Bit)
 In computer science, a stack is a collection of elements with two main operations: push, which adds an element to the collection, and pop, which removes the most recently added element. Think of it like a stack of plates—you can only add or remove a plate from the top.

Now, in the realm of C++, you can implement stacks using the standard template library (STL). The std::stack container adapter provides a convenient and consistent interface. It's like a wrapper around other container classes, with a default underlying container of std::deque (double-ended queue).

The Last In, First Out (LIFO) principle governs stacks. Imagine a stack of books. The last book you put on the stack is the first one you take off. It's a simple and powerful concept.

Stacks support a few fundamental operations:

Push: This operation adds an element to the top of the stack.

Pop: This operation removes the element from the top of the stack. It's important to note that you can only remove the most recently added element.

Top (or Peek): This operation looks at the top element of the stack without removing it. It's like checking the top book on a stack without taking it off.

IsEmpty: This operation checks if the stack is empty. If it is, you might want to think twice before attempting to pop an element.

Size: This operation tells you how many elements are in the stack.

These operations are the basic building blocks for working with stacks in any programming language. They're simple but powerful, especially when you're dealing with situations where the order of operations matters
