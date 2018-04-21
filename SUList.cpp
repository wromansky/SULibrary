#include "SUList.h"
#include <iostream>

using namespace std;

template <class DataType>
SUList<DataType>::SUList()
{
    // List starts with nothing
    head = nullptr;
    tail = nullptr;
}

template <class DataType>
SUList<DataType>::SUList(const SUList& old)
{
    this->head = nullptr;
    ListNode* oldCursor = old.head;
    while(oldCursor != nullptr)
    {
        this->putfront(oldCursor->data);
        oldCursor = oldCursor->next;
    }
    
}

template <class DataType>
SUList<DataType>::~SUList()
{
    ListNode* cursor = head;
    ListNode* temp;

    while(cursor)
    {
        temp = cursor -> next;
        delete cursor;
        cursor = temp;
    }

}

template <class DataType>
DataType SUList<DataType>::getFront()
{
    if(head == nullptr)
    {
        throw "List is empty...\n";
    }

    DataType front = head->data;
    ListNode* temp = head;
    head = head->next;
    delete temp;

    return front;
}

template <class DataType>
DataType SUList<DataType>::getBack()
{
   if(head == nullptr)
   {
       throw "List is empty...\n";
   }

   DataType back = tail->data;
   ListNode* temp = tail;
   tail = tail->prev;
   delete temp;

   return back;
}

template <class DataType>
void SUList<DataType>::putFront(const DataType& n)
{
    
    //
}

template <class DataType>
void SUList<DataType>::putBack(const DataType& n)
{
    ListNode* newNode = new ListNode;
    newNode->data = n;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if(head == nullptr)
    {
        head = tail = newNode;
        return;
    }
}

template <class DataType>
int SUList<DataType>::size()
{
    //
    //
    return 0;
}

template <class DataType>
bool SUList<DataType>::contains(const DataType&)
{
    //
    //
    return false;
}

template <class DataType>
SUList<DataType>& SUList<DataType>::operator=(const SUList<DataType>&)
{
    //
    //
}
