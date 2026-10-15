#include <iostream>
#include <string>
using namespace std;
int main() {

    // task 1
    // int n;
    // cin >> n;
    // int i=0;
    // while (i<n){
    //     if (n%2==1) {
    //         cout << 'a';
    //         i++;
    //     }
    //     if (n%2==0) {
    //         char l=(i<n-1) ? 'a':'b';
    //         cout << l;
    //         i++;
    //     }
    //
    // }
    // return 0;

    // task 2
    // int x;
    // int r=0;
    // int i=0;
    // cin >>x;
    // int original=x;
    // if (x>0) {
    //     while (x>0) {
    //         int d=x%10;
    //         r = 10*r+d;
    //         x=x/10;
    //     }
    //     if (r==original) {
    //         cout<<"True";
    //     }
    //     else {
    //         cout<<"False";
    //     }
    // }
    // else if (x==0) {
    //     cout<<"True";
    // }
    // else {
    //     cout<<"False";
    // }

    // task 3
    // int n;
    // cin >> n;
    //
    // int x;
    // int c = 0;
    // int max = 0;
    // int i = 0;
    //
    // while (i < n) {
    //     cin >> x;
    //
    //     if (x == 1) {
    //         c++;
    //     }
    //     else {
    //         c = 0;
    //     }
    //
    //     if (c > max) {
    //         max = c;
    //     }
   //     i++;
//     }
//
//     cout << max;
// return 0;

    // task 4
// int d,e;
//     cin>>d>>e;
//     int count=d;
//     int empty=d;
//     while (empty>=e) {
//             int drin=empty/e;
//         int rem=empty%e;
//             int rec=drin+rem;
//
//         empty=rec;
//         count+=drin;
//     }
// cout<<count;
// return 0;

    // task 5

//
//         int num;
//         string s;
//         cin >> num >> s;
//
//         int b = 0;
//     int a = 0;
//     int l = 0;
//     int o = 0;
//     int n = 0;
//     char x;
// int i=0;
//        while (i < num) {
//            cin >> x;
//             switch (x) {
//                 case 'b': b++; break;
//                 case 'a': a++; break;
//                 case 'l': l++; break;
//                 case 'o': o++; break;
//                 case 'n': n++; break;
//                     default: break;
//             }
//            i++;
//         }
//
//         int result = b;
//         if (a < result)
//             result = a;
//         if (l / 2 < result)
//             result = l / 2;
//         if (o / 2 < result)
//             result = o / 2;
//         if (n < result)
//             result = n;
//
//         cout << result;
//         return 0;

    // task 7
    //
    // int n;
    // cin >> n;
    // int prev;
    // cin >> prev;
    // int count = 1;
    // int maxC = 1;
    // int i = 1;
    //
    // while (i < n) {
    //     int x;
    //     cin >> x;
    //     if (x > prev) {
    //         count++;
    //     } else {
    //         count = 1;
    //     }
    //     if (count > maxC) {
    //         maxC = count;
    //     }
    //     prev = x;
    //     i++;
    // }
    //
    // cout << maxC;
    //
    // return 0;

}