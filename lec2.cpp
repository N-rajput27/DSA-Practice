// *pointer problems *//


#include<iostream>
using namespace std;

int main() {
    int a;
    a = 10;
    int*ptr = &a;
int **nextptr = &ptr;
cout << "the value present at the address of ptr is: " << *ptr << endl;
cout << "the value present at the address of nextptr is: " << **nextptr << endl;

    

    // cout << "the address where a is stored is: " << &a << endl;

    // cout << "the address where a is stored is: " << ptr << endl;


// double a = 10.5;
// double*ptr = &a;
//     cout << "the address where a is stored is: " << &a << endl;
//     cout << "the address where a is stored is: " << ptr << endl;



    return 0;
}