#include<bits/stdc++.h>
using namespace std;
// void frequencyCount(vector<int>& arr, int N, int P) {
//     int hash[P] = {0}; 
//     for (int i = 0; i <N; i++) {
//             hash[arr[i]] += 1;
//     }
//     for (auto it : hash) {
//         cout << it << " ";
//     }
//     }

//selestion sort:
// void selection(int arr[],int N){
//     for(int i=0;i<=N-2;i++){
//         int min=i;
//         for(int j=i;j<=N-1;j++){
//             if(arr[j]<arr[min]){
//                 min=j;
//             }
//         }
//         int temp=arr[i];
//         arr[i]=arr[min];
//         arr[min]=temp;
//     }
//     for(int i=0;i<N;i++){
//         cout<<arr[i];
//     }
// }

//bubble sort
// void bubble(int arr[],int n){
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }

//             else continue;
//         }
//         }
//         for(int i=0; i<n;i++){
//             cout<<arr[i];
//     }
// }

//insertion sort:
void insertion(int a[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}
 void bubbleSort(int arr[], int n) {
        for(int i=0;i<n;i++){
            int swapped=0;
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=1;
                }
            }
            if(swapped==0) break;
        }
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    }
int main(){
    // vector<int> arr={1,3,2,2,4};
    int arr[5]={2,8,4,9,3};
    auto n=arr.find(arr[0],arr[4],2);
    cout<<n;
    // selection(arr,5);
    // bubble(arr,5);
    // insertion(arr,5);
    // bubbleSort(arr,5);
    // frequencyCount(arr,5,5);
}