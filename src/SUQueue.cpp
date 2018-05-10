template <class DataType>
int SUQueueList<DataType>::size() const
{
    return list.size();
}

template <class DataType>
bool SUQueueList<DataType>::isEmpty() const
{
    return list.isEmpty();
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
void SUQueueList<DataType>::printQueue() const
{
    //
}

template <class DataType>
SUQueueList<DataType>& SUQueueList<DataType>::operator=(const SUQueueList<DataType>& n)
{
    list = n;
}
