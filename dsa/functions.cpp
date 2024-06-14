#include<bits/stdc++.h>
using namespace std;

//void function
// void printName(){
//     cout<<"diya";
// }

//parameterised function:
// void printName(string n){
//     cout<<"Hey! "<<n;
// }

//return type:
// int add(int n1,int n2){
//     int s;
//     s=n1+n2;
//     return s;
// }
// int maxx(int num1,int num2){
//     //2>=4 as if staement is false so no return statem,nt
//     if(num1>=num2) return num1;
    //so gives garbage value as it will return something
    // else return num2;
// }

// void dosomething(int num){//copy of number goes but not id
// cout<<num<<endl;//10
// num+=5;
// cout<<num<<endl;//15
// num+=5;
// cout<<num<<endl;//20
// }

// void dosomething(string &str){
//     str[0]='p';
//     cout<<str<<endl;
// }
void dosomething(int arr[],int n){
    arr[0]+=100;
    cout<<"inside function"<<arr[0];
}
int main(){
    // string name;
    // cout<<"enter ur Name:";
    // cin>>name;
    // printName(name);
    // printName();

    // int num1,num2;
    // int sum;
    // cout<<"Enter the 2 numbers=";
    // cin>>num1>>num2;
    // int minimum=min(num1,num2);
    // cout<<minimum;
    // int maximum=maxx(num1,num2);
    // cout<<"\n"<<maximum;
    // sum=add(num1,num2);
    // cout<<"sum is="<<sum;

    //pass by value 
    // int num=10;
    // dosomething(num);
    // cout<<num<<endl;//10

    //pass by reference:
    // string s="diya";
    // dosomething(s);
    // cout<<s<<endl;

    //!!!!important:arrays are passed by references
    int arr[5];
    int n=5;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    dosomething(arr,n);
    cout<<"\noutside function"<<arr[0];
return 0;
}