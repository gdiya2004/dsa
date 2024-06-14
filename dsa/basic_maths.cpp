#include<bits/stdc++.h>
using namespace std;
//count of digits:
// int count(int n){
//     int cnt=0;
//     while(n>0){
//         cnt++;
//         n=n/10;
//     }
//     return cnt;
// }

//count by 2nd method:
int count(int n){
    int cnt=(int)(log10(n)+1);
    return cnt;
}