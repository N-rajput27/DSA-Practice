#include <iostream>
using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int count = 0;

//     if (n <= 1) {
//         cout << n << " is not prime" << endl;
//     }
//     else {
//         for (int i = 1; i <= n; i++) {
//             if (n % i == 0) {
//                 count++;
//             }
//         }

//         if (count == 2) {
//             cout << n << " is prime" << endl;
//         }
//         else {
//             cout << n << " is not prime" << endl;
//         }
//     }

//     return 0;
// }

// *functions *//
// // factorial
// int factNum(int n) {
//     int ans = 1;
//     if(n <= 1)
//         // ans = 1;
//         return 1;
//     for(int i = 2; i <= n; i++){
//         ans = ans * i;
//     }
//     return ans;

// }
// int main() {
//     int n; 
//     cin >> n;
//     int returnValue  = factNum(n);
//     cout << "the factorial of " << n << " is: " << returnValue << endl;

// }

// code to print area of rectanglecehich length is float
double AreaOfRectangle(double l, double b) {
    return l * b;
}
int main() {
    double l , b;
    cin >> l >> b;
    cout << "area of rectangle is:" << AreaOfRectangle(l, b) << endl;
}

