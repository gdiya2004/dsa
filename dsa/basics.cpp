// #include<iostream>
#include<bits/stdc++.h>//includes all libararies
using namespace std;//organise std c++ library functions and objects. no need to use std:: prefix
// int main(){
//     // std::cout<<"Diya"<<"\n";
//     std::cout<<"Diya"<<"\t"<<"Gupta"<<std::endl;
//     std::cout<<"Diya";
//     return 0;
// }
int main(){
//  int x,y;
//  cout<<"enter the 2 numbers=";
//  cin>>x>>y;
//  cout<<"Value of x ="<<x<<" and y="<<y;

//data types:int,long,long long,double,float,string,char,getline
//used to store integers
// int x=10;
// long y=15;
// long long z=150000000;
// cout<<x<<","<<y<<","<<z;

//float,double:int can also be stored in them
// float a=5.6;
// float b=5;
// cout<<a<<","<<b;//b=5 not 5.0

//string 
// string s1,s2;
// cout<<"enter  2  strings:";//cout doesnot returns new line character
// cin>>s1>>s2;
// cout<<s1<<" "<<s2;

//getline:takes entire line with spaces but not next line
// string str;
// cout<<"enter the string:";
// getline(cin,str);
// cout<<str;

//character:255
// char ch;
// cin>>ch;
// cout<<ch;

//program taking input of ages and then printing adult
// float age;
// cout<<"Enter the age=";
// cin>>age;
// if(age>=18){
//     cout<<"adult";
// }
// else{
//     cout<<"not adult";
// }

//grading system:if instead of else if we write just if then all if staements will be checked
//but in case of else if one will be executed and other willl not be evaluated after getting true
// float marks;
// cout<<"Enter ur marks=";
// cin>>marks;
// if (marks<25){
//     cout<<"F";
// }
// else if(marks>=25 && marks<=44){
//     cout<<"E";
// }
// else if(marks>=45 && marks<=49){
//     cout<<"D";
// }
// else if(marks>=50 && marks<=59){
//     cout<<"C";
// }
// else if(marks>=60 && marks<=79){
//     cout<<"B";
// }
// else{
//     cout<<"A";
// }

// float age;
// cout<<"enter age=";
// cin>>age;
// if(age<18){
//     cout<<"not eligible for job";
// }
// else if(age>=54){
//     cout<<"eligible for job"
// ;}
// else if(age<=57){
//     cout<<"retirement soon";
// }
// else{
//     cout<<"retiremnt time";
// }

//switch statement:
// int day;
// cout<<"enter no. (1-7)=";
// cin>>day;
// switch(day){
//     case 1:
//     cout<<"Monday";
//     break;
//     case 2:
//     cout<<"Tuesday";
//     break;
//     case 3:
//     cout<<"Wednesday";
//     break;
//     case 4:
//     cout<<"Thursday";
//     break;
//     case 5:
//     cout<<"Friday";
//     break;
//     case 6:
//     cout<<"Saturday";
//     break;
//     case 7:
//     cout<<"Sunday";
//     break;
//     default:
//     cout<<"wrong number";
// }

//arrays:similar data types
//1 d array:
// int arr[5];//store integers
// cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
// arr[3]+=8;
// cout<<arr[3];

//2d array:matrix and graph problems
// int arr[3][5];//3 rows and 5 columns
// cout<<arr[1][2];//garbage value

//strings:stores charctyer in it
// string s="Strivre";
// cout<<s[2];
// int len=s.size();//to find lenght of string
// cout<<"\nlength is="<<len;
// s[len-1]='2';//write in single quote as character are stoerd in string
// cout<<"\n"<<s;

//loops:
// for(int i=0;i<=5;i++){
//     cout<<"diya\n";
// }

// int i=0;
// while (i<=5){
// cout<<"Diya\n";
// i++;
// }

// int i=0;
// do{
//     cout<<"diya";
//     i++;
// }
// while(i>=5);

//Program:
// char chr;
// 	cout<<"Enter the character=";
// 	cin>>chr;
// 	if(chr>=65 && chr<=90){
// 		cout<<"1";
// 	}
// 	else if (chr>=97 && chr<=122){
// 		cout<<"0";
// 	}
// 	else{
// 		cout<<"-1";
// 	}

//program:in c++ we cannot directly use strings in switch statement
//switch can only be used with integral types(char,int,long)
//cannot wrinte switch(string):
// char ch;
// cout<<"enter the character (i,l,f,d,c):";
// cin>>ch;
// switch(ch){
//     case 'i':
//     cout<<"size="<<sizeof(int)<<"bytes";
//     break;
//     case 'l':
//     cout<<"size="<<sizeof(long)<<"bytes";
//     break;
//     case 'f':
//     cout<<"size="<<sizeof(float)<<"bytes";
//     break;
//     case 'd':
//     cout<<"size="<<sizeof(double)<<"bytes";
//     break;
//     case 'c':
//     cout<<"size="<<sizeof(char)<<"bytes";
//     break;
//     default:
//     cout<<"wrong input";
// }

return 0;   
}

//Time complexity: not equal to time taken to run code. time taken depends upon machine on which it runs
//rate at which time taken increases wrt input size. 
//Big O Notation: O(time taken/steps)
//Time complexity should be taken in worst case.
//avoid constants: O(3n+1)=O(3n)
//avoid lower values:O(4n^15+3n^10)=O(4n^15)
//best case: time complexity is less
//Big O Notation: worst case, upper band
//Theta Notation: Average complexity
//Omega:lower band
//time complexity:
//1. O(n*n)
//for(int i=0;i<N;i++) will work for n times
// {
//     for(int j=0;j<n;j++){ work for n times

//     }
// }
//2. O(n*n)
// for(int i=0;i<n;i++)//n Times
// {
//     for(j=0;j<=i;j++){//1+2+....+n = n(n+1)/2 = (n*n+n)/2=n*n/2=O(n*n)
//     }
// }

//space complexity: memory taken by program + also shown by Big O notation
//auxilary space(space taken to solve problem)+input space(space taken to store the input)
//a,b:c=a+b:c is auxilary space and a,b are input space :::O(3)
//int array[n]--> O(n)
//never do anything to input:a,b and b=a+b though it saves space but not preferable.
//code-->sends to server-->1sec for 10^8 operations-->1sec=O(10^8)
//5sec-->5*10^8