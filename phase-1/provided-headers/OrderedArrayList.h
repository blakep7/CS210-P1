#ifndef ORD_ARRLIST_H
#define ORD_ARRLIST_H

#include "AbstractList.h"
        
class OrderedArrayList : public AbstractList {

private:
    int* array;
    int capacity;
    int currentPos;

public:
    OrderedArrayList();
    OrderedArrayList(int initialCapacity) ;
   
    bool add(int data) ;
    bool add(int index, int data) ;
    void clear() ;
    bool contains(int data) ;
    int  get(int index) ;
    int  indexOf(int data) ;
    bool isEmpty() ;
    int  remove(int index) ;
    bool removeAll(int data) ;
    int  size() ;
    void trimToSize() ;
};
#endif
