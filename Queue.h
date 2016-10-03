#ifndef QUEUE
#define QUEUE
#include <iostream>

using namespace std;

const int QUEUE_CAPACITY = 128;
typedef char QueueElement;

class Queue
{
	public:
		Queue();//Constructor prototype
		bool empty() const;//checks if queue is empty
		void addQ(const QueueElement & value);//add element to queue
		QueueElement front() const;//return the value of the front element
		void removeQueue(); //remove element from the front of the queue
		void display(ostream & out);//display the state of the queue
		int size();//return the size of the queue


	private:
		QueueElement myArray[QUEUE_CAPACITY];
		int myFront;
		int myBack;
};

ostream & operator << (ostream & out, Queue q);


#endif