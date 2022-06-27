#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H


/*
  Here is some example code for Program 1.  You don't have to use any of
  it, but if you are having trouble, it might get you started.
  The T used through this is the template class your need to create
  in this class, T means Example TYPE
*/
#include <cstdlib>  //This is for the exit command.

#include <iostream>
using namespace std;


/*
 *  In the class below, it declares a "queue<T>" array.     
 *  you don't need to use the STL queue (but you can), choose a data structure
 * that you think works.   If you choose to write you own queue class, then 
 * it has better follow all the requirements to a queue, to include the O time
 * minimum timing requirements of c++
*/


template <class T>
class QueueArray {
  public:
    QueueArray(int sz = 10);
    ~QueueArray();
    int Asize(); 
    T Dequeue();
    int Enqueue(const T &item,const int index);
    int QAsize(); 
    int Qsize(int index) ;
    T* Qstate(int index);

  private:
    int size;      //size of the array
    queue<T>* array;   //the array of queues.  It must be an array (NO not a vector)
    int totalItems; //total number of items stored in the queues
};

//Constructor for the queue array.  It sets the default size
//to 10, initializes the private variables size and totalItems
template <class T>
QueueArray<T>::QueueArray(int sz) {
  size=sz;
  totalItems=0;
  array = new queue<T>[size];
  if( array == NULL)
  {
    cout << "Not enough memory to create the array" << endl;
    exit(-1);
  }
}


#endif

