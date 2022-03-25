#include <iostream>

using namespace std;

int main()
{
 int a = 10;
 cout << a << endl;
 int *b = &a;
 cout << b << endl;
 cout << *b << endl;
 cout << &a << " " << &b << endl;

 int arr[10];
 arr[0] = 1;
 cout << "New level" << endl;
 cout << arr << endl; 
 cout << &arr << endl; 
 cout << *arr << endl;
 cout << &(arr[0]) << endl;
 cout << *(arr + 1) << endl;
 return 0;
}

