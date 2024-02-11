#ifndef ORD_ARRLIST_H
#define ORD_ARRLIST_H

#include "AbstractList.h"
#include "Process.h"        

class OrderedArrayList : public AbstractList {

private:
    Process** array;
    int capacity;
    int currentPos;

public:
    OrderedArrayList();
    OrderedArrayList(int initialCapacity) ;
   
    bool add(Process *p) ;
    bool add(int index, Process *p) ;
    void clear() ;
    bool contains(Process *p) ;
    Process* get(int index) ;
    int indexOf(Process *p) ;
    bool isEmpty() ;
    Process* remove(int index) ;
    bool removeAll(Process *p) ;
    int size() ;
    void trimToSize() ;
};
#endif
