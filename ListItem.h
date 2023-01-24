#pragma once
class ListItem {
	int data;
	ListItem* next;

public:
	ListItem() : data(0), next(nullptr) {};
	
	ListItem(int d, ListItem* n) : data(d), next(n) {};

	ListItem(ListItem& it) : data(it.getData()), next(it.getNext()) {};

	virtual ~ListItem();

	void setData(int d) {
		data = d;
	}

	int getData() {
		return data;
	}

	void setNext(ListItem* n) {
		next = n;
	}

	ListItem* getNext() {
		return next;
	}
};

