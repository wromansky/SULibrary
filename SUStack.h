#ifndef SUSTACKLIST_H
#define SUSTACKLIST_H
template <class DataType>
class SUStackList{
    private:
        /**
         * For the list-backed implementation:
         *
         * SUList<DataType> list;
         *
         * For the array-based:
         *
         * DataType* arr;        // The array of items
         * int       capacity;   // The size of the current array
         * int       top;        // The location of the top element
         */
    public:
        SUStackList();                   // Constructor
        SUStackList(const SUStackList &); // Copy Constructor
        ~SUStackList();                  // Destructor
        int size() const;               // get the number of elements in the stack
        bool isEmpty() const;           // Check if the stack is empty
        void push(const DataType&);     // Pushes an object onto the stack
        void pop(DataType&);            // Pop an object off the stack and store it
        void printStack() const;        // Prints the stack from the top, down
        SUStackList<DataType>& operator=(const SUStackList<DataType>&); // Assignment operator
};
#endif

#ifndef SUSTACKARRAY_H
#define SUSTACKARRAY_H
template <class DataType>
class SUStackArray{
    private:
        /**
         * For the list-backed implementation:
         *
         * SUList<DataType> list;
         *
         * For the array-based:
         *
         * DataType* arr;        // The array of items
         * int       capacity;   // The size of the current array
         * int       top;        // The location of the top element
         */
    public:
        SUStackArray();                   // Constructor
        SUStackArray(const SUStackArray &); // Copy Constructor
        ~SUStackArray();                  // Destructor
        int size() const;               // get the number of elements in the stack
        bool isEmpty() const;           // Check if the stack is empty
        void push(const DataType&);     // Pushes an object onto the stack
        void pop(DataType&);            // Pop an object off the stack and store it
        void printStack() const;        // Prints the stack from the top, down
        SUStackArray<DataType>& operator=(const SUStackArray<DataType>&); // Assignment operator
};
#endif
