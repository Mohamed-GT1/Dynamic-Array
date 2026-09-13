#include <iostream>
#include"MyDynamicArray.h"
using namespace std;
int main() {
    MyDynamicArray<int> dynamicArray(5);

    dynamicArray.SetItem(0, 10);
    dynamicArray.SetItem(1, 20);
    dynamicArray.SetItem(2, 30);
    dynamicArray.SetItem(3, 40);
    dynamicArray.SetItem(4, 50);

    dynamicArray.Print();

    cout << "\n the size is " << dynamicArray.Size();
    cout << "\nis the array empty ? " << dynamicArray.IsEmpty();
    cout << endl;


  
    cout << endl;
    cout << "\nafter inserting item 400 at beginning \n";
    dynamicArray.InsertAtBeginning(400);
    dynamicArray.Print();
    cout << "\n the size is " << dynamicArray.Size();

    cout << endl;
    cout << "\nafter inserting item 800 at end \n";
    dynamicArray.InsertAtEnd(800);
    dynamicArray.Print();
    cout << "\n the size is " << dynamicArray.Size();

    cout << endl;
    cout << "\nafter inserting item 77 after index 2 \n";
    dynamicArray.InsertAfter(2,77);
    dynamicArray.Print();
    cout << "\n the size is " << dynamicArray.Size();

    cout << endl;
    cout << "\nafter inserting item 22 before index 5 \n";
    dynamicArray.InsertBefore(5,22);
    dynamicArray.Print();
    cout << "\n the size is " << dynamicArray.Size();
    
    return 0;
}
