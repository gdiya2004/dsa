#include<bits/stdc++.h>
using namespace std;

//Given list of integers find sum of all integers:
// int main()
// {
// vector<int> v1{1,5,6,3,9,2};
// int sum=0;
// while(!v1.empty()){
//     int num=v1.back();
//     sum+=num;
//     v1.pop_back();
// }
// cout<<sum;
// return 0;
// }

//potent error by using size():
// int main(){
//     vector<string> vec = { "Geeks", "For", "Geeks" };
//     for (int i = 0 ; i <= vec.size() - 1 ; i++)
//         cout << vec[i] << ' ';
//     return 0;
// }

/////////////////////v/s//////////////////////
///Segmentation Fault SIGEGV
// int main()
// {
// 	vector<string> vec = { "Geeks", "For", "Geeks" };
// 	vec.clear();
// 	for (int i = 0; i <= vec.size() - 1; i++)
// 		cout << vec[i] << ' ';
// 	cout << "Geeks For Geeks";
// 	return 0;
// }

//Given a vector of integers, print all integers present at odd positions.
// int main(){
// vector<int> v2{1,2,3,4,5,6,7,8,9};
// for(int i=0;i<v2.size();i++){
//     if(i%2!=0){
//         cout<<v2[i]<<"\n";
//     }
//     else{
//         continue;
//     }
// }
// }

//Given an empty vector , add integers to it using push_back and then calculate its size
// int main(){
//     vector<int>v3{};
//     v3.push_back(1);
//     v3.push_back(2);
//     v3.push_back(3);
//     v3.push_back(4);
//     v3.push_back(5);
//     int count=0;
//     while(!v3.empty()){
//         count++;
//         v3.pop_back();
//     }
//     for(auto it:v3){
//         cout<<it;
//     }
//     cout<<count;
// return 0;
// }

//use of emplace()::
// int main() {
//     array<int,6> a={1,2,4,5};
//     vector<int>  v={1,2,4,5};
//     for(int i=3;i>=0;i--)
//     {
//       if(i!=1)
//         a[i+1]=a[i];//{1,2,4,4,5}
//       else {        
//         a[i+1]=3;//{1,2,3,4,5}
//         break;
//         }
//     }   // Time complexity is high 
//     cout<<"Content of a: ";
//     for(int i=0;i<5;i++)
//        cout<<a[i]<<" ";
//     v.emplace( v.begin() + 2 , 3);//{1,2,3,4,5}
//     cout<<"\nContent of v: ";          
//     for(int i=0;i<v.size();i++)
//        cout<<v[i]<<" ";
//     return 0;
// }

//removing a particular element:using find()
// int main(){
    // int target=7;
    // vector<int> v1={1,2,3,4,7,5,3,9};
    // auto it = find(v1.begin(),v1.end(),target);
    // if(it!=v1.end()){
    //     v1.erase(it);
    // }
    // for (auto i:v1){
    //     cout<<i<<" ";
    // }
    // return 0;
    // }

//Removing vector pair elements
// int main(){
// vector<pair<int,string>>v{ { 1, "apple" },{ 2, "banana" },{ 3, "cherry" },{ 4, "Guava" } };
// v.erase(v.begin());
// v.erase(v.begin(),v.begin()+1);
// for(auto it:v){
//     // cout<<it;//wrong way to access pair
//     cout<<it.first<<" "<<it.second;
// }
// return 0;
// }

//Given list of integres remove all even elements from vector and print vector:
// int main(){
//     vector<int>v1{1,2,3,4,5,6,7,8,9};
//     for(int i=0;i<v1.size();i++){
//         if(v1[i]%2==0){
//             cout<<v1[i]<<" ";
//         }
//         else{
//             continue;
//         }
//     }
//     return 0;
// }

//use of priority queue:
// int main(){
//     int arr[6]={10,4,8,6,9};
//     priority_queue<int> pq;
//     for(int i=0;i<6;i++){
//         pq.push(arr[i]);
//     }
//     cout<<"pq"<<" ";
//     while(!pq.empty()){
//         cout<<pq.top()<<" ";
//         pq.pop();
//     }
//         return 0;
// }

//Given set of integers, remove all even elements from set 
// int main(){
//     set<int> s1={1,2,3,4,5,6,7,8,9};
//     for(auto it:s1){
//         if(it%2==0){
//             continue;
//         }
//         else{
//             cout<<it;
//         }
//     }
//  return 0;
// }

// Given an array(list) of integers, find all the duplicates among them

// int main(){
// int arr[20]={1,5,2,1,4,3,1,7,2,8,9,5};
// unordered_set<int>intset={};
// unordered_set<int>duplicate={};
// int n= sizeof(arr) / sizeof(int);
// for(int i=0;i<n;i++){
//     if (intset.find(arr[i])==intset.end()){
//         intset.insert(arr[i]);
//     }
//     else{
//         duplicate.insert(arr[i]);
//     }
// }
// for(auto it:duplicate){
//     cout<<it<<endl;
// }
// return 0;
// }