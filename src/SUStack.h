// Author for SUStackList: Leomar Olivares
// Author for SUStackArray: Billy Romansky
// Specification file for the SUStack Class
// SUStack Class using LINKED LIST
#ifndef SUSTACKLIST_H
#define SUSTACKLIST_H
#include "SUList.h"

template <class DataType>
class SUStackList
{
    private:
        SUList<DataType> list;               // Linked list method
    public:
        SUStackList();                       // Default Constructor
        SUStackList(const SUStackList &);    // Copy Constructor
        ~SUStackList();                      // Destructor
        int size() const;                    // get the number of elements in the stack
        bool isEmpty() const;                // Check if the stack is empty
        void push(const DataType&);          // Pushes an object onto the stack
        void pop(DataType&);                 // Pop an object off the stack and store it
        void printStack() const;             // Prints the stack from the top, down
        SUStackList<DataType>& operator=(const SUStackList<DataType>&); // Assignment operator
        void display();
};
#endif
//=========================================================================

// SUStack Class using ARRAYS
#ifndef SUSTACKARRAY_H
#define SUSTACKARRAY_H
#include "SUList.h"

template <class DataType>
class SUStackArray
{
    private:
        DataType* arr;                         // The array of items
        int capacity;                          // Size of current array
        int top;                               // Location of the top element
        void full();                           // Notifies if stack array is full
    public:
        SUStackArray();                        // Default Constructor
        SUStackArray(const SUStackArray &);    // Copy Constructor
        ~SUStackArray();                       // Destructor
        int size() const;                      // Get the number of elements in the stack
        bool isEmpty() const;                  // Check if the stack is empty
        void push(const DataType&);            // Pushes an object onto the stack
        void pop(DataType&);                   // Pop an object off the stack and store it
        void printStack() const;               // Prints the stack from the top, down
        SUStackArray<DataType>& operator=(const SUStackArray<DataType>&); // Assignment operator
};
#include "SUStack.cpp"
#endif
