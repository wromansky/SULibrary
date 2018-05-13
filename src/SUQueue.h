// Author for this file: Leomar Olivares. Comments by Billy Romansky
// Specification file for the SUQueue Class
// SUQueue Class using LINKED LIST
#ifndef SUQUEUELIST_H
#define SUQUEUELIST_H
#include "SUList.h"

template <class DataType>
class SUQueueList
{
    private:
        SUList<DataType> list;              // Linked list method
    public:
        SUQueueList();                     // Default Constructor
        SUQueueList(const SUQueueList &);  // Copy Constructor
        ~SUQueueList();                    // Destructor
        int size() const;                  // Get the number of elements in the queue
        bool isEmpty() const;              // Check if the queue is empty
        void enqueue(const DataType&);     // Adds an element to the tail
        void dequeue(DataType&);           // Removes the first element from the head
        void printQueue() const;           // Prints the queue from the front to the rear
        SUQueueList<DataType>& operator=(const SUQueueList<DataType>&); // Assignment operator
};
#endif
//===========================================================================

// SUQueue Class using ARRAY
#ifndef SUQUEUEARRAY_H
#define SUQUEUEARRAY_H
#include "SUList.h"

template <class DataType>
class SUQueueArray
{
    private:
        DataType* arr;        // The array of items
        int capacity;         // The size of the current array
        int front;            // The location of the front element
        int rear;             // The location of the rear element
        void full();          // Notifies if queue array is full
    public:
        SUQueueArray();                       // Default Constructor
        SUQueueArray(const SUQueueArray &);   // Copy Constructor
        ~SUQueueArray();                      // Destructor
        int size() const;                     // Get the number of elements in the queue
        bool isEmpty() const;                 // Check if the queue is empty
        void enqueue(const DataType&);        // Enqueues some data
        void dequeue(DataType&);              // Get the front element and store it
        void printQueue() const;              // Prints the queue from the front to the rear
        SUQueueArray<DataType>& operator=(const SUQueueArray<DataType>&); // Assignment operator
        int getFull();                        // Notifies when the queue array if full and returns the info
};
#include "SUQueue.cpp"
#endif
