// Author for this file: Leomar Olivares. Comments by Billy Romansky
// Implementation file for the SUQueue Class
#include <iostream>
using namespace std;

//Defined SUQueue using LINKED LIST

// Default Constructor
template <class DataType>
SUQueueList<DataType>::SUQueueList()
{
    SUList<DataType> list;
}

// Copy Constructor
template <class DataType>
SUQueueList<DataType>::SUQueueList(const SUQueueList &old)
{
   list = old.list;
}

// Destructor
template <class DataType>
SUQueueList<DataType>::~SUQueueList()
{
    list.~SUList();
}

// Reveals number of elements in the Queue Linked List
template <class DataType>
int SUQueueList<DataType>::size() const
{
   int x = list.size();
   return x;

    //return list.size();
}

// Check if the Queue linked list is empty
template <class DataType>
bool SUQueueList<DataType>::isEmpty() const
{
    int x = size();

    if (x == 0)
       return true;
    else
       return false;

    //return list.isEmpty();
}

// Inserts an element to the back of the linked list
template <class DataType>
void SUQueueList<DataType>::enqueue(const DataType &e)
{
    list.putBack(e);
}

// Removes the first element up front of the linked list
template <class DataType>
void SUQueueList<DataType>::dequeue(DataType &d)
{
    list.getFront(d);
}

// Assignment operation that takes a const argument to make no changes
template <class DataType>
SUQueueList<DataType>& SUQueueList<DataType>::operator=(const SUQueueList<DataType> &n)
{
    list.~SUList();
    list = n.list;
}


//Prints the queue linked list information from head to tail
template <class DataType>
void SUQueueList<DataType>::printQueue() const
{
    SUQueueList<DataType> copyList;
    copyList.list = list;

    cout << "======================\n";

    while(!copyList.isEmpty())
    {
       cout << copyList.list.getBack() << endl;
       cout << "============================\n";
    }
}

//==============================================================================

// Defined SUQueue using ARRAY

// // Default constructor
template <class DataType>
SUQueueArray<DataType>::SUQueueArray()
{
  capacity = 6;
  front = -1;
  rear = 0;
}

// Non-Default Copy Constructor
template <class DataType>
SUQueueArray<DataType>::SUQueueArray(const SUQueueArray &old)
{
   front = old.front;
   rear = old.rear;

   for(int i = 0; i < rear; i++)
   {
     arr[i] = old.arr[i];
   }
}

// Destructor
template <class DataType>
SUQueueArray<DataType>::~SUQueueArray()
{
   delete [] arr;
}

// Reveals number of elements in the Array
template <class DataType>
int SUQueueArray<DataType>::size() const
{
    int size;
    size = rear - (front + 1);
    return size;

    //return list.size();
}

// Check if the Array is empty
template <class DataType>
bool SUQueueArray<DataType>::isEmpty() const
{
    bool state;

    if(rear != 0)
       state = false;
    else
       state = true;

    return state;

    //return list.isEmpty();
}

// Adds an element to the back of the array
template <class DataType>
void SUQueueArray<DataType>::enqueue(const DataType &r)
{
   if(rear + 1 == capacity)
   {
      arr[rear] = r;
      rear++;
   }
   else
   {
      arr[rear] = r;
      rear++;
   }

    //list.putRear(r);
}

// Removes the first element of the array
template <class DataType>
void SUQueueArray<DataType>::dequeue(DataType &f)
{
    if(isEmpty())
    {
       cout << "The queue array is empty.\n";
    }
    else
    {
       front++;
       f = arr[front];
    }

    //list.getTop(f);
}

// Assignment operation that takes a const argument to make no changes
template <class DataType>
SUQueueArray<DataType>& SUQueueArray<DataType>::operator=(const SUQueueArray<DataType> &n)
{
    //delete arr[];

    arr = new DataType[n.capacity];
    capacity = n.capacity;
    front = n.front;
    rear = n.rear;

    for(int i = 0; i < capacity; i++)
    {
      arr[i] = n.arr[i];
    }

    //st = n;
}

// Notifies when the queue array is full and returns the information
template <class DataType>
int SUQueueArray<DataType>::getFull()
{
  return capacity;
}

// Notifies when the queue array is full and returns the information
template <class DataType>
void SUQueueArray<DataType>::full()
{
  DataType* oldArray = arr;
  capacity *= 2;
  arr = new DataType[capacity];

  for(int i = 0; i < rear; i++)
  {
    arr[i] = oldArray[i];
  }

  delete [] oldArray;
}


//Prints the array information from front to rear
template <class DataType>
void SUQueueArray<DataType>::printQueue() const
{
   int x = rear;

   cout << "===========================\n";

   for(int i = front + 1; i < x; i++)
   {
      cout << arr[i] << endl;
   }

   cout << "==================\n";

    //return printQueue();
}
