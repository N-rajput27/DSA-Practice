#include<iostream>
using namespace std;

// loops and patterns 
// int main(){
    // int a, b;
    // cin >> a;
    // cin >> b;
    // if(a> b){
    //     cout << "A biggest number " << a << endl;
        
    // } else {
    //     cout << "b is greater" << b << endl;
    // }
// int a = 2;
// int b = a + 1;
// if((a =3) == b)
// {
//     cout << a << endl;
// } else {
//     cout  << a +1 << endl;
// }

// int a = 9;
// if(a==9){
//     cout <<"NINEY";
// } else {
//     cout << "NEGATIVE";
// }
// int a = 9;
// if(a==9) {
//     cout << "NINEY";
// } 
// if(a>0) {
//     cout << "POSITIVE";
// }
// else {
//     cout << "NEGATIVE";
// }
// char ch;
// cin >> ch;
// if('a'<= ch && ch <= 'z'){
//     cout << "lowercase" << ch << endl;
// } 
//  else if('A' <= ch && ch <='Z'){
//     cout << " this is upper case" << ch << endl;
// } else if ( '0' <= ch && ch <= '9'){
//     cout << "this is numeric number" << ch << endl;
// }

// int i = 1;
// int N;
// cin >> N;
// while(i <= N){
//     cout << i << " " ;
//     i = i + 1;
// }
// 1+2+3+4+5+6 = 21
// int i = 1;
// int n;
// int sum = 0;
// cin >> n;
// while(i <= n){
//     sum = sum + i;
//     i++;
// }
// cout << sum << endl;

// int i = 1;
// int n;
// int sum = 0;
// cin >> n;
// while(i <= n){
//     if(i % 2 == 0){
//         sum = sum + i;
//         // i++;
//         i = i + 1;
//     } else {
//         i = i + 1;
//     }

// }
// cout << sum << endl;
// prime number
// int n;
// int i = 2;
// cin >> n;
 
// while(i < n){
//     if( n % i == 0)
//     { 
//         cout << "Not prime " << i << endl;
//         // break;
//     } else {
//         cout << "Prime " << i << endl;
//     }
//     i = i + 1;
// }
// int n;
// cin >> n;

// for(int i = 1; i <= n; i++){
//     for(int j = 1; j <= n; j++){
//         cout << "*";
//     }
//     cout << endl;
// }
// patterns
// int n;
// cin >> n;
// int i = 1;                              12345
//                                         12345
//                                         12345
//                                         12345
//                                         12345
// while(i <= n){
//     int j = 1;
//     while(j <= n) {
//         cout << j;
//         j++;
//     }
//     cout << endl;
//     i = i + 1;
// }
// int n;
// cin >> n;

// int i = 1;

// while ( i <= n){
//     int j = 1;
//     while(j <= n){
//         cout << n-j+1;              4321
//                                     4321
//                                     4321
//                                     4321
//         j++;
//     }
//     cout << endl;
//     i++;
// }
// int n;
// n = 3;

// int i = 1;
// int toprint = 9;                          9 8 7 
//                                           6 5 4 
//                                           3 2 1
// while(i <= n){
//     int j = 1;
//     while(j <= n){
//         cout << toprint << " ";
//         toprint = toprint - 1;
//         // cout << i + j - 1 << " ";
//         j++;
//     }
//     cout << endl;
//     i++;
// }


// int n ;
// cin >> n;
// int i = 1;
// int startingPoint = n * n;
// while(i <= n){
//    int  j = 1; 
//    while(j <= n){
//     cout << startingPoint << " ";
//     startingPoint = startingPoint - 1;
//     j++;
//    }
//    cout << endl;
//    i++;
// }int n;
// int n;
// cin >> n;
// int i = 1;                              * 
                                        // * * 
                                        // * * * 
                                        // * * * * 
                                        // * * * * *

// while(i<=n){
//     int j = 1;
//     while(j <= i){
//         cout << "*" << " ";
//         j++;
//     }
//     cout << endl;
//     i++;

// }
int main() {
// int n;
// cin >> n;
// int i = 1;
//                                    1 
//                                    2 2 
//                                    3 3 3 
//                                    4 4 4 4 
// while(i<=n){
//     int j = 1;
//     while(j <= i){
//         cout << i << " ";
//         j++;
//     }
//     cout << endl;
//     i++;

// }


// int n;
// cin >> n;
// int i = 1;
// // int toPrint = 1;
// while(i <= n){
//     int j = i;
//     // int i + i = i*2;
//     // toPrint = i;
//     while(j < i*2){
//         // i + i = i * 2;
//         cout << j <<  " ";
//         cout << j << " ";


//         j++;
        
//     }
//     cout << endl;
//     i++;

// }
int n;
cin >> n;
int row = 1;
while(row<=n){
    int col = 1;
    while(col <= row){
       cout << (row-col+1) << " ";
       col = col + 1;
    }
    cout << endl;
    row = row + 1;
}


return 0;
}