#include <iostream>

using namespace std;

int main()
{
int n;
int a[5];
int b[3];
int c;
int *p;

p = &n;

cout << &n << endl;
cout << a << endl;
cout << &(a[4]) << endl;
cout << &(b[0]) << endl;
cout << &c << endl;
cout << &p << endl;

return 0;
}
