#include <queue>
#include <mutex>
#include "queue.h"

#ifndef __PROTECTED_QUEUE_H__
#define __PROTECTED_QUEUE_H__

class ProtectedQueue: public Queue{
	public:
		ProtectedQueue();
		
		ProtectedQueue(ProtectedQueue&& other);
		
		~ProtectedQueue();
		
		virtual bool isEmpty(); 
  
		virtual void empty();
  
		virtual void push(char* entry);

		virtual char* pop();
};

#endif
		
		
