//sort + next_permutation +max_element +min_element + builtin_popcount() + builtin_popcountll()

#include<bits/stdc++.h>
using namespace std;
// bool comp(pair<int,int> p1,pair<int,int>p2){
//     if(p1.second<p2.second){
//         return true;
//     }
//     else if (p1.second==p2.second){
//         if(p1.first>p2.first){
//             return true;c
//         }
//         else{
//             return false;
//         }
//     }
//     else{
//         return false;
//     }
// }
// bool comp(char ch1,char ch2){
//     if ('ch1'<'ch2'){
//         return true;
//     }
// }
void explainExtra(){
    // //sort
    // sort(a,a+n);
    // sort(v.begin(),v.end());
    // sort(a+2,a+4);
    // sort(a,a+n,gretaer<int>);
    // pair<int,int> a[]={{1,2},{2,1},{4,1}};

//_builtin_popcount:returns number of set bits i.e. 1
// int num=7;
// int cnt=__builtin_popcount(7);//111
// cout<<cnt;
// long long n=1e15;
// cout<<__builtin_popcountll(n);

//permutation:always sort it
//lexicographically next permutation should be greater than previous
// string s="123";
// sort(s.begin(),s.end());
// do{
//     cout<<s<<endl;
// }while(next_permutation(s.begin(),s.end()));

// max_element:
 int v[] = { 'a', 'c', 'k', 'd', 'e', 'f', 'h' }; 
//  auto i1 = max_element(v, v + 4,comp); 
 auto i1 = max_element(v, v + 4); 
 cout<< char(*i1) << "\n"; 
}
int main(){
    explainExtra();
    return 0;
}