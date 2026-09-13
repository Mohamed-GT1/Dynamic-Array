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
    cout << "\nafter inserting item 400 at index 2 \n";
    dynamicArray.InsertAt(2, 400);
    dynamicArray.Print();
    cout << "\n the size is " << dynamicArray.Size();
    
    return 0;
}
