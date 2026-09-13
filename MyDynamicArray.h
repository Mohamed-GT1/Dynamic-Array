#pragma once
#include<iostream>

using namespace std;

template<class t>
class MyDynamicArray
{
private:
	int size=0;
	t *dynArray;
	t* temp;

public:
	MyDynamicArray(int s=0) {
		if (s < 0)
			s = 0;

		size = s;
		dynArray = new t[size];
	}


	bool SetItem(int index, int value) {
		if (index < 0 || index > size - 1)
			return false;

		dynArray[index] = value;
		return true;
	}

	void Print() {
		for (int i = 0; i < size;i++) {
			cout << dynArray[i] << " ";
		}
	}

	int Size() {
		return size;
	}

	bool IsEmpty() {
		return size == 0;
	}

	void Resize(int newSize) {
		if (newSize < 0)
			newSize = 0;

		 temp = dynArray;

		dynArray = new t[newSize];

		int smallsize = (newSize < size) ? newSize : size;

		for (int i = 0; i < smallsize; i++) {
			dynArray[i] = temp[i];
		}

		delete []temp;
		size = newSize;
	}

	t GetItem(int index) {
		if (index < 0 || index > size - 1)
			return NULL;

		return dynArray[index];
	}

	void Reverse() {
		temp = dynArray;

		dynArray = new t[size];

		for (int i = 0; i < size; i++) {
			dynArray[i] = temp[(size - 1)- i];
		}

		delete[]temp;
	}

	void Clear() {
		delete[]dynArray;
		size = 0;

		dynArray = new t[0];
	}

	void DeleteItemAt(int index) {
		if (index < 0 || index > size - 1)
			return;

		temp = dynArray;
		size--;
		dynArray = new t[size];

		for (int i = 0; i < size; i++) {

			if (i < index) {
				
				dynArray[i] = temp[i];
			}
			else {
				dynArray[i] = temp[i + 1];
			}

		}

		delete []temp;
		
	}

	void DeleteFirstItem() {
		DeleteItemAt(0);
	}
	void DeleteLastItem() {
		DeleteItemAt(size-1);
	}

	int Find(t value) {
		for (int i = 0; i < size; i++) {
			if (dynArray[i] == value)
				return i;
		}

		return -1;
	}

	bool DeleteItem(t value) {
		int index = Find(value);

		if (index == -1)
			return false;

		DeleteItemAt(index);
		return true;
	}

	void InsertAt(int index, t value) {
		if (index < 0 || index > size )
			return;

		temp = dynArray;
		size++;

		dynArray = new t[size];

		for (int i = 0; i < index; i++) {
			dynArray[i] = temp[i];
		}

		dynArray[index] = value;

		for (int i = index+1; i < size; i++) {
			dynArray[i] = temp[i-1];
		}

		delete[]temp;

	}

	void InsertAtBeginning(t value) {
		InsertAt(0,value);
	}
	void InsertAtEnd(t value) {
		InsertAt(size,value);
	}
	void InsertAfter(int index,t value) {
		InsertAt(index+1,value);
	}
	void InsertBefore(int index,t value) {
		InsertAt(index,value);
	}
	
	~MyDynamicArray() {
		delete[]dynArray;
	}
};

