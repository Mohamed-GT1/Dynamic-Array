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

	~MyDynamicArray() {
		delete[]dynArray;
	}
};

