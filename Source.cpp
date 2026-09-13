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

    cout << "\nafter deleting first item \n";
    dynamicArray.DeleteFirstItem();
    dynamicArray.Print();
    cout << "\n the size is " << dynamicArray.Size();

    cout << endl << endl;
    cout << "\nafter deleting last item \n";
    dynamicArray.DeleteLastItem();
    dynamicArray.Print();
    cout << "\n the size is " << dynamicArray.Size();
    
    return 0;
}
