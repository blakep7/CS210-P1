#ifndef UNORD_PQ_H
#define UNORD_PQ_H

#include "PriorityQueue.h"
#include "UnorderedArrayList.h"
#include <stdexcept>

class UnorderedPQ : public PriorityQueue
{
private:
    UnorderedArrayList *pq;

    /**
     * @brief Finds the index of the object with the highest priority that has been in the PQ the longest
     * 
     * @return int 
     */
    int findMinIndex() ;

public:

    UnorderedPQ();
    UnorderedPQ(int capacity);

    bool insert(int object);
    int remove();
    bool deleteAll(int obj);
    int peek();
    bool contains(int obj);
    int size();
    void clear();
    bool isEmpty();   
    bool isFull();
};
#endif
