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

    dynamicArray.Resize(2);


    cout << "\nafter resize to 2\nthe new array size is " << dynamicArray.Size()<<endl;
    dynamicArray.Print();

    dynamicArray.Resize(10);

    cout << "\nafter resize to 10 \nthe new array size is " << dynamicArray.Size() << endl;
    dynamicArray.Print();
    
    return 0;
}
