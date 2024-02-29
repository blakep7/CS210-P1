#ifndef ORD_PQ_H
#define ORD_PQ_H

#include "PriorityQueue.h"
#include "OrderedArrayList.h"

class OrderedPQ : public PriorityQueue
{
private:
    OrderedArrayList *pq;

    /**
     * @brief Finds the index of the object with the highest priority that has been in the PQ the longest
     * 
     * @return int 
     */
    int findMinIndex() ;

public:

    OrderedPQ() ;
    OrderedPQ(int capacity) ;

    bool insert(int object) ;
    int remove() ;
    bool deleteAll(int obj) ;
    int peek() ;
    bool contains(int obj) ;
    int size() ;
    void clear() ;   
    bool isEmpty() ;
    bool isFull() ;
    
};
#endif
