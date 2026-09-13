#pragma once
#include<iostream>

using namespace std;

template<class t>
class MyDynamicArray
{
private:
	int size=0;
	t *dynArray;

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

		t* temp = dynArray;

		dynArray = new t[newSize];

		int smallsize = (newSize < size) ? newSize : size;

		for (int i = 0; i < smallsize; i++) {
			dynArray[i] = temp[i];
		}

		delete []temp;
		size = newSize;
	}


	~MyDynamicArray() {
		delete[]dynArray;
	}
};

