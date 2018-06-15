#ifndef __QUEUE_H__
#define __QUEUE_H__

#include <queue>

class Queue{
	protected:
		std::queue<char*> queue;
		std::mutex mutex;
	public:
		Queue() {}
		
		~Queue() {}
		
		virtual bool isEmpty() = 0;
		
		virtual void empty() = 0;
		
		virtual void push(const char* entry) = 0;
		
		virtual char* pop() = 0;
};

#endif
