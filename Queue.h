#include "ListItem.h"

#pragma once
class Queue {
	ListItem* head;

public:
	Queue() : head(nullptr) {};

	Queue(ListItem* h) : head(h) {};

	Queue(Queue& q);

	ListItem* getHead() { return head; }

	void push_back(int d);

	void pop_front();
};
