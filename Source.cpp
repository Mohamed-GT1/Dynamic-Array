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


    int index = dynamicArray.Find(20);
    if (index == -1)
        cout << "\nnot found\n";
    else
        cout << "\n found and the index is " << index << endl;

    cout << endl;
    cout << "\nafter deleting item 40 \n";
    dynamicArray.DeleteItem(40);
    dynamicArray.Print();
    cout << "\n the size is " << dynamicArray.Size();
    
    return 0;
}
