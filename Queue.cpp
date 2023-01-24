#include "Queue.h"

Queue::Queue(Queue& q) {}

void Queue::push_back(int d) {
	ListItem* newItem = new ListItem(d, nullptr);

	if (head == nullptr)
		head = newItem;
	else {
		ListItem* curr = head;

		while (curr->getNext() != nullptr) {
			curr = curr->getNext();
		}
		curr->setNext(newItem);
	}
}

void Queue::pop_front() {
	if (head == nullptr) return;
	ListItem* curr = head;
	head = head->getNext();
	delete curr;
}