#include<iostream>
#include<cmath>
using namespace std;
// int main() {
// // problem 1
// // swap two numbers
// int a = 10;
// int b = 240;
// cout << "before swaping a = " << a << ", b = " << b << endl;

// // int temp = a;
// // a = b;
// // b = temp;
// swap(a, b);
// cout << "after swapping a = " << a << ", b = " << b << endl;
// return 0;
// }

// problem 2
// largest of three numbers
// int main() {
//     int a , b , c;
//     cin >> a >> b >> c;
//     if(a > b && a > c) {
//         cout << a << "is the largest number" << endl;
//     } else {
//         if(b > c) {
//             cout << b << "is the largest number" << endl;
//         } else {
//             cout << c << "is the largest number" << endl;
//         }
//     }


// }

// problem 3 
// even or odd and leap year

// int main() {
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//     int num;
//     cin >> num;

//     if(num % 2 == 0) {
//         cout << num << " is even number" << endl;
//     } else {
//         cout << num << " odd number" << endl;
//     }
// }
// }
// leap year problem
// int main() {
//     int year;
//     cin >> year;
//     if(year % 4 == 0) {
//         if(year % 100 == 0) {
//             if(year % 400 == 0) {
//                 cout << year << " is a leap year" << endl;
//             } else {
//                 cout << year << " is not a leap year" << endl;
//             }
//         } else {
//             cout << year << " is a leap year" << endl;
//         }
//     } else {
//         cout << year << " is not a leap year" << endl;
//     }       

    
    // int year;
    // cin >> year;
    // if(year % 4 == 0) {
    //     if(year % 100 == 0) {
    //         if(year % 400 == 0) {
    //             cout << year << "is a leap year" << endl;
    //         } else {
    //             cout << year << "is not a leap year" << endl;
    //         }
    //     }
    // }
// }

// int main() {
    
// cout << "Enter natural numbers: ";
// cin >> n;

//     if(n < 0) { 
//         cout << "enter  natural numbers only " << endl;
//     } else {
//         cout << "Sum of natural numbers is:" << (n * (n + 1)) / 2 << endl; 
//     }
//     return 0;
// int findSum(int n) {
//     int sum = 0;
//     for(int i = 0; i <= n; i++) {
//         sum = sum + i;
//     }
//         return sum;
    
    
// }
// int main() {
//     int n = 5;
//     // cin >> n;
//     cout << findSum(n);
//     return 0;
// }


//  program to check armstrong number
bool isArmstrong(int n) {
    int first = n;
    int digit = 0;
    int sum = 0;
    int temp = n;

    if(n == 0)
        digit = 1;

    while(temp > 0) {
        digit++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0) {
        int d = temp % 10;
        sum += static_cast<int>(pow(d, digit));
        temp /= 10;
    }

    return sum == first;
}

int main() {
    int n;
    cin >> n;

    cout << isArmstrong(n);

    return 0;
}




