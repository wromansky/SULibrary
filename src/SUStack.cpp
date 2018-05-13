// Author for SUStackList: Leomar Olivares
// Author for SUStackArray: Billy Romansky
// Implementation file for the SUStack Class
#include <iostream>
using namespace std;

//Defined SUStack using LINKED LIST

//Default Constructor
template <class DataType>
SUStackList<DataType>::SUStackList()
{
   list = nullptr;
}

//Copy Constructor
template <class DataType>
SUStackList<DataType>::SUStackList(const SUStackList &old)
{
   list = old.list;
}

// Destructor
template <class DataType>
SUStackList<DataType>::~SUStackList()
{
   delete list;
}

// Reveal the number of elements in the stack list
template <class DataType>
int SUStackList<DataType>::size() const
{
  int x = list.size();
  return x;

  //return list.size();
}

//Reveal if the stack list is empty
template <class DataType>
bool SUStackList<DataType>::isEmpty() const
{
   int num = 0;
   num = list.size();

   if(num == 0)
      return true;
   else
      return false;

  //return list.isEmpty();
}

//Push function for the stack list
template <class DataType>
void SUStackList<DataType>::push(const DataType &pu)
{
  list.putFront(pu);
}

//Pop function for the stack list
template <class DataType>
void SUStackList<DataType>::pop(DataType &po)
{
  po = list.getFront();
}

// Assignment Overloader with arguments
template <class DataType>
SUStackList<DataType>& SUStackList<DataType>::operator=(const SUStackList<DataType> &n)
{
   list = n.list;
}

// Prints stack list information top to bottom
template <class DataType>
void SUStackList<DataType>::printStack() const
{
  SUStackList<DataType> copyList;
  copyList.list = list;

  cout << "======================\n";

  while(!copyList.isEmpty())
  {
    cout << copyList.list.getFront() << endl;
    cout << "=============================\n";
  }

  // return printStack();
}

//==========================================================================

// Defined SUStack using ARRAY

//Default Constructor
template <class DataType>
SUStackArray<DataType>::SUStackArray()
{
  top = -1;
  capacity = 6;
  arr = new DataType[capacity];
}

//Copy Constructor
template <class DataType>
SUStackArray<DataType>::SUStackArray(const SUStackArray &old)
{
  arr = new DataType[old.capacity];
  top = old.top;

  for(int i = 0; i < size() - 1; i++)
  {
    arr[i] = old.arr[i];
  }
}

// Destructor
template <class DataType>
SUStackArray<DataType>::~SUStackArray()
{
  delete [] arr;
}

// Reveal the number of elements in the stack array
template <class DataType>
int SUStackArray<DataType>::size() const
{
  return top+1;
  //return arr.size();
}

//Reveal if the stack array is empty
template <class DataType>
bool SUStackArray<DataType>::isEmpty() const
{
  bool status;

  if(top == -1)
    status = true;
  else
    status = false;

  return status;

  //return arr.isEmpty();
}

//Push function for the stack array
template <class DataType>
void SUStackArray<DataType>::push(const DataType &pu)
{
  if(top+1 == capacity)
  {
    full();
  }

  top++;
  arr[top] = pu;

}

//Pop function for the stack array
template <class DataType>
void SUStackArray<DataType>::pop(DataType &po)
{
  if(isEmpty())
  {
    cout << "The stack is empty.\n";
  }
  else
  {
    po = arr[top];
    top--;
  }
}

// Assignment Overloader with arguments
template <class DataType>
SUStackArray<DataType>& SUStackArray<DataType>::operator=(const SUStackArray<DataType> &n)
{
  arr = new DataType[n.capacity];
  top = n.top;

  for(int i = 0; i < size() - 1; i++)
  {
    arr[i] = n.arr[i];
  }
}

// Called for the push function if the stack array is full in capacity
template <class DataType>
void SUStackArray<DataType>::full()
{
  DataType* oldArray = arr;
  capacity *= 2;
  arr = new DataType[capacity];

  for(int i = 0; i < size(); i++)
  {
    arr[i] = oldArray[i];
  }

  delete [] oldArray;
}

// Prints stack array information top to bottom
template <class DataType>
void SUStackArray<DataType>::printStack() const
{
   cout << "===========================\n";

   for(int i = 0; i < top+1; i++)
   {
     cout << arr[i] << endl;
   }

   cout << "==========================\n";

   //return printStack();
}
