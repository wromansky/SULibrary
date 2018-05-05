template <class DataType>
int SUQueueList<DataType>::size()
{
    return list.size();
}

template <class DataType>
bool SUQueueList<DataType>::isEmpty()
{
    //
    return false;
}

template <class DataType>
void SUQueueList<DataType>::enqueue(const DataType& n)
{
    list.putBack(n);
}

template <class DataType>
void SUQueueList<DataType>::dequeue(DataType& n)
{
    list.getFront();
}

template <class DataType>
void SUQueueList<DataType>::printQueue()
{
    //
}

template <class DataType>
SUQueueList<DataType>&::operator=(constSUQueueList<DataType>&)
{
    //
}
