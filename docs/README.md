# SULibrary
Authors: Leomar Olivares & Billy Romansky

www.github.com/wromansky/SULibrary

README by Billy Romansky

## Project Description
This project is comprised of a mostly-usable library that implements the List, Stack, and Queue functionality.

## Class Descriptions

### SUList
This class creates a doubly-linked list that allows the user to construct a list, get the front node (pop function), get the back (pop function for back node), put on the front (push function), put on the back (enqueue function), return the size of the list, check if the list is empty, and set the list equal to another (overloaded = operator).

### SUQueueArray
This class creates the functionality of a queue using a templated array. The default constructor of the queue array builds an array with a capacity of 6 with a front value of -1 and rear element value of 0. The array's enqueue and dequeue functions place at data at the index of the current value of front or rear.

### SUQueueList
This class simply contains one private member of SUList. The class then uses the putBack and getFront functions to create enqueue and dequeue functions as well as a display function. The class retains the rest of the same fundamental public member functions as SUList such as display, size, isEmpty, and the = operator.

### SUStackArray
This class creates the functionality of a stack using a templated array. The default constructor of the stack array builds an array with a capacity of 6 with a front value of -1.

### SUStackList
This class simply contains one private member of SUList. The class then uses the putFront and getFront functions to create the push and pop functionality of a stack. The class retains the rest of the same fundamental public member functions of SUList such as display, size, isEmpty, and the = operator.
