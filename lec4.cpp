#include<iostream>
using namespace std;
// closes to n and divisble by m


// id increasedBy10(int *num) 
//   *num += 10;
// {
//     num += 10;
// 
int closestNum(int n , int m){

    int r = n % m;
    int q  = n / m;
    if(r >= m/2) {
        return m *(q+1);
    } else {
        return m*q;
    }


//  if n1 = m * q ......... this is closest multiple of m <= n
// if n2 = m * (q + 1)(q-1) ......... baswd on signs of n
// for(int i = 1; i <= n; i++){
//     if(n % m == 0) {
//         cout << n << "this number is divisble by m" << endl;
//     } else {

//     }

// }

}

int main() {
    int r, q;
    int n = 13;
    int m = 4;
cout << r << endl;
return 0;
}