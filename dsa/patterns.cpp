#include<bits/stdc++.h>
using namespace std;
//outer loop:rows/number of lines
//inner loop:columns+connect somehow to rows
//observe symmetry(optional)
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
//1
// for(int i=0;i<4;i++){
//     for (int j=0;j<4;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//2:test cases concept:
// int t;
// cin>>t;
// for(int i=0;i<t;i++){//test cases:t
//     int n;
//     cin>>n;
//     print1(n);
// }

//3:
// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//4:
// for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

//5:
// for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<i;
//     }
//     cout<<endl;
// }

//6:
// for(int i=5;i>0;i--){
//     for(int j=0;j<i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//7:
// for(int i=5;i>0;i--){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

//8:
// for(int i=0;i<=4;i++){
//     for(int j=0;j<5-i-1;j++){
//      cout<<" ";
//     }
//     for(int k=0;k<2*i+1;k++){
//         cout<<"*";
//     }
//     for(int j=0;j<5-i-1;j++){
//      cout<<" ";
//     }
//     cout<<endl;
// }

//9:
// for(int i=0;i<5;i++){
//     for(int k=0;k<i;k++){
//         cout<<" ";
//     }
//     for(int j=0;j<10-(2*i+1);j++){
//         cout<<"*";
//     }
//     for(int k=0;k<i;k++){
//         cout<<" ";
//     }
//     cout<<endl;
// }
//9,7,5,3,1:

//10:
// for(int i=0;i<=4;i++){
//     for(int j=0;j<5-i-1;j++){
//      cout<<" ";
//     }
//     for(int k=0;k<2*i+1;k++){
//         cout<<"*";
//     }
//     for(int j=0;j<5-i-1;j++){
//      cout<<" ";
//     }
//     cout<<endl;
// }
// for(int i=0;i<5;i++){
//     for(int k=0;k<i;k++){
//         cout<<" ";
//     }
//     for(int j=0;j<10-(2*i+1);j++){
//         cout<<"*";
//     }
//     for(int k=0;k<i;k++){
//         cout<<" ";
//     }
//     cout<<endl;
// }

//11:
// int n;
// cin>>n;
// for(int i=1;i<=2*n-1;i++)
// {
//     int stars;
//     if(i<=n){
//         stars=i;
//     for(int j=1;j<=stars;j++){
//          cout<<"*";
//     }
//     }
//     else{
//         stars=2*n-i;
//         for(int j=1;j<=stars;j++){
//         cout<<"*";
//     }
//     }
//     cout<<endl;
// }

//12:
// for(int i=1;i<=5;i++){
//     if(i%2!=0){
//         for (int j=1;j<=i;j++){
//             if(j%2==0){
//                 cout<<0;
//             }
//             else{
//                 cout<<1;
//             }
//         }
//     }
//     else{
//         for(int k=1;k<=i;k++){
//           if(k%2==0){
//                 cout<<1;
//             }
//             else{
//                 cout<<0;
//             }
//         }
//     }
//     cout<<endl;
// }

//12:
// int start;
// for(int i=0;i<5;i++){
//     if (i%2==0) start=1;
// else start=0;
// for(int j=0;j<=i;j++){
//     cout<<start;
//     start=1-start;
// }
// cout<<endl;
// }

//13:6,4,2=6+(i-1)(-2)=6-2i+2=8-2i
// for(int i=1;i<=4;i++){
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     for(int k=1;k<=8-2*i;k++){ //k<=2(n-1)
//         cout<<" ";
//     }
//     int m=i;
//     for(int l=1;l<=i;l++){
//         cout<<m;
//         m--;
//     }
//for(int k=i;k>=1;k--){
    // cout<<k;
//}
//     cout<<endl;
// }

//14:
// int count=1;
// for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<count<<" ";
//         count++;
//     }
//     cout<<endl;
// }

//15:
// for(int i=1;i<=5;i++){
//     char num='A';
//     for(int j=1;j<=i;j++){
//         cout<<num;
//         num++;
//     }
//     cout<<endl;
// }

//15:
// for(int i=0;i<5;i++){
//     for(char ch='A';ch<='A'+i;ch++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

//16:
// for(int i=1;i<=5;i++){
//     char num='A';
//     for(int j=5;j>=i;j--){
//         cout<<num;
//         num++;
//     }
//     cout<<endl;
// }

//16:
// for(int i=1;i<=5;i++){
//     for(char ch='A';ch<='A'+(5-i);ch++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

//17:
// char ch='A';
// for(int i=1;i<=5;i++){
//     for(int j=1;j<=i;j++){
//         cout<<ch;
//     }
//     ch++;
//     cout<<endl;
// }

//17:
// for(int i=0;i<5;i++){
//     char ch='A'+i;
//     for(int j=0;j<=i;j++){
//         cout<<ch;
//     }
//     cout<<endl;
// }

//18:3,2,1=3-i+1=4-i
// int n;
// cin>>n;
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-1-i;j++){
//         cout<<" ";
//     }
//     for(char ch='A';ch<='A'+i;ch++){
//         cout<<ch;
//     }
//     if(i!=0){
//     for(char ch='A'+i-1;ch>='A';ch--){
//         cout<<ch;
//     }
//     }
//     cout<<endl;
// }

//18:
// for(int i=0;i<n;i++){
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     char ch='A';
//     int breakpoint=(2*i+1)/2;
//     for( int j=0;j<2*i+1;j++){
//         cout<<ch;
//         if(j<=breakpoint){
//             ch++;
//         }
//         else ch--;
//     }
//     for(int j=0;j<n-i-1;j++){
//         cout<<" ";
//     }
//     cout<<endl;
// }

//19:
// for(int i=0;i<n;i++)
// {char count='E'-i;
//     for(int j=0;j<=i;j++){
// cout<<count<<" ";
// count++;
//     }cout<<endl;
// }

//20:
// for(int i=0;i<5;i++){
//     for(int j=5;j>i;j--){
//         cout<<'*';
//     }
//     for(int k=0;k<2*i;k++){
//         cout<<" ";
//     }
//     for(int l=5;l>i;l--){
//         cout<<'*';
//     }
//     cout<<endl;
// }
// for(int i=0;i<5;i++){
//     for(int j=0;j<=i;j++){
//         cout<<'*';
//     }//8,6,4,2,0-->
//     for(int k=8;k>2*i;k--){//i=0,i=1-->8,7,6,5,4,3
//         cout<<" ";//i=2-->8,7,6,5
//     }
//     for(int l=0;l<=i;l++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

//21:
// *        * //i=1 stars space stars
// **      ** //i=2   1    8     1
// ***    *** //i=3   2    6     2
// ****  **** //i=4   3    4     3
// ********** //i=5   4    2     4
// ****  **** //i=6   5    0     5
// ***    *** //i=7   4    2     4
// **      **  //i=8  3    4     3
// *        *  //i=9  2    6     2
                    //1    8     1


// int n=5;//
// int spaces=2*n-2;
// for(int i=1;i<=2*n-1;i++){
//     int stars=i;
//     if(i>n) stars=2*n-i;
//     for(int j=1;j<=stars;j++){
//         cout<<'*';
//     }
//     for(int j=1;j<=spaces;j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=stars;j++){
//         cout<<'*';
//     }
//     cout<<endl;
//     if(i<n) spaces-=2;
//     else spaces+=2;
// }

//22:
//****
//*  *
//*  *
//****
// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n;j++){
//         if(i==0||i==n-1||j==0||j==n-1) cout<<"*";
//         else cout<<" ";
//     }
//     cout<<endl;
// }

//23-->n=4
//n-all_values=new_matrix
//4 4 4 4 4 4 4   0 0 0 0 0 0 0
//4 3 3 3 3 3 4   0 1 1 1 1 1 0
//4 3 2 2 2 3 4   0 1 2 2 2 1 0
//4 3 2 1 2 3 4-->0 1 2 3 2 1 0
//4 3 2 2 2 3 4   0 1 2 2 2 1 0
//4 3 3 3 3 3 4   0 1 1 1 1 1 0
//4 4 4 4 4 4 4   0 0 0 0 0 0 0

// int n=4;
// for(int i=0;i<2*n-1;i++)
// {
//     for(int j=0;j<2*n-1;j++)
// {
//  int top=i;
//  int left=j;
//  int bottom=(2*n-2)-i;
//  int right=(2*n-2)-j;  
//  cout<<(n-min(min(top,bottom),min(left,right)));
// }
// cout<<endl;
// }

return 0;
}