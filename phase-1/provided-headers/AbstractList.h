#ifndef ABS_LIST_H
#define ABS_LIST_H
/**
 * Pure virtual abstract class
 * @author Student
 */
#include <stdexcept>

class AbstractList 
{
public:

   /**
    * Appends the specified data to the end of this list
    * param  int  data element to insert
    * return bool 1 success
    */ 
    virtual bool add(int) = 0;
 
   /** 
    * Appends the specified data to the list at the 
    * specified index. Valid indexes are 0 to size.
    * @param int   index position to insert data
    * @param data  element to insert
    * @return bool success
    */ 
    virtual bool add(int index, int data) = 0;
		
   /**
    * Removes all of the Objects from this list leaving
    * capacity the same.
    */
    virtual void clear() = 0;

   /**
    * Returns true if this list contains the specified Object
    * @param data
    * @return bool 1 success
    */
    virtual bool contains(int data) = 0;

   /**
    * Returns the Object at the specified position in this list
    * @param index
    * @return Object
    * @throws invalid_argument if index out of range
    */
    virtual int get(int index) = 0;

   /**
    * Returns the Object at the specified position in this list and
    * deletes it from the list
    * @param index element to remove
    * @throws invalid_argument if index out of range
    */
    virtual int remove(int index) = 0;

   /**
    * Removes all occurences of the Object in this list 
    * @param data element(s) to remove
    * @return 1 success
    */
    virtual bool removeAll(int data) = 0;

   /**
    * Returns the index of the first occurrence of the 
    * specified Object in this list, or -1 if this list 
    * does not contain the Object
    * @param data element to search for
    * @return int position of data if found, else -1
    */
    virtual int indexOf(int data) = 0;

   /**
    * Returns true if this list contains no Objects
    * @return bool
    */
    virtual bool isEmpty() = 0;

   /**
    * Returns the number of Objects in this list
    * @return int
    */
    virtual int size() = 0;

   /**
    * Trims the capacity of this instance to be the list's 
    * current size.  An application can use this
    * operation to minimize the storage of an instance.
    */
    virtual void trimToSize() = 0;

    /**
     * Returns the minimum integer in the list
     * 
     * @return int 
     */
    virtual int getMin() = 0;

    /**
     * Returns the maximum integer in the list
     * 
     * @return int 
     */
    virtual int getMax() = 0;

    /**
     * Creates a new list and copies elements from start to end index into that new list
     * 
     * @param startIndex 
     * @param endIndex 
     * @return AbstractList* 
     */
    virtual AbstractList* getSublist(int startIndex, int endIndex) = 0;

    /**
     *  Creates a deep copy of the list
     *  
     * @return AbstractList* 
     */
    virtual AbstractList* copy() = 0;

protected:
    int currentSize;
};
#endif
