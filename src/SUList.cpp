// Author: Billy Romansky
// Implementation file for the SUList Class
#include <iostream>
using namespace std;

//Default copy constructor
template <class DataType>
SUList<DataType>::SUList()
{
    // List starts with nothing
    head = nullptr;
    tail = nullptr;
}

// Non-Default copy constructor
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

//Desturctor
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

//Remove and return the front part of the linked list
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

    if(head==nullptr)
    {
        tail = nullptr;
    }

    return front;
}

//Remove and return the back part of the linked list
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

   if(tail==nullptr)
   {
       head = nullptr;
   }

   return back;
}

// Add content to the front of the linked list
template <class DataType>
void SUList<DataType>::putFront(const DataType& n)
{
    ListNode* newNode = new ListNode;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    newNode->data = n;

    if(head==nullptr)
    {
        head =  newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

//Add content to the back of the linked list
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
    }
    else
    {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
}

//Reveals the number of elements in the linked list
template <class DataType>
int SUList<DataType>::size()
{
    ListNode* cursor = head;
    int count = 0;
    while(cursor)
    {
        count++;
        cursor = cursor->next;
    }

    return cursor;
}

// Tests the condition with the bool data type
template <class DataType>
bool SUList<DataType>::contains(const DataType& query)
{
    ListNode* cursor = head;
    while(cursor)
    {
        if(cursor->data == query)
        {
            return true;
        }
    }

    return false;
}

//Overloaded assignment
template <class DataType>
SUList<DataType>& SUList<DataType>::operator=(const SUList<DataType>& old)
{
    if(this != &old)
    {
        ListNode* dCursor = this->head;
        ListNode* dTemp;
        while(dCursor)
        {
            dTemp = dCursor->next;
            delete dCursor;
            dCursor = dTemp;
        }

        this->head = nullptr;
        ListNode* oldCursor = old.head;
        while(oldCursor)
        {
            this->putFront(oldCursor->data);
            oldCursor = oldCursor->next;
        }
    }
    return *this;
}

template <class DataType>
void SUList<DataType>::display()
{
    ListNode* cursor = head;
    while(cursor != nullptr)
    {
        cout << cursor->data << endl;
        cursor = cursor->next;
    }
}
