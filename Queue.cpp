#include <iostream>
#include "Queue.h"

using namespace std;

Queue::Queue(): myFront(0), myBack(0) {}//default queue constructor
bool Queue::empty() const//checks if queue is empty
{
	return (myFront == myBack);
}
void Queue::addQ(const QueueElement & value)//add element to queue
{
	if((myBack + 1) % QUEUE_CAPACITY == myFront)
	{}
	else
	{
		myArray[myBack] = value;
		myBack = (myBack + 1) % QUEUE_CAPACITY;
	}
}
QueueElement Queue::front() const//return the value of the front element
{
	char newFront = myArray[myFront];
	return newFront;
}
void Queue::removeQueue() //remove element from the front of the queue
{
	if(!empty())
	{
		myFront = (myFront + 1) % QUEUE_CAPACITY;
	}
}
void Queue::display(ostream & out)//display the state of the queue
{
	int i = myFront;
	int j = myBack;
	int k = i;//index for retrieval
	while ((k % QUEUE_CAPACITY) != (j % QUEUE_CAPACITY))
	{
		out << myArray[k % QUEUE_CAPACITY] << " ";
		k = (k + 1) % QUEUE_CAPACITY;
	}
}
int Queue::size()//return the size of the queue
{
	if(myBack < myFront)
	{
		return myBack + QUEUE_CAPACITY - myFront;
	}
	else 
	{
		return myBack - myFront;
	}
}

ostream & operator << (ostream & out, Queue q)
{
	q.display(out);
	return out;
}

