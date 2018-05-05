template <class DataType>
void SUQueueList<DataType>::enqueue(const DataType& n)
{
    list.putBack(n);
}
