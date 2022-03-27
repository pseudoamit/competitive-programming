#include<bits/stdc++.h>
using namespace std;

int main(){

    // int arr[] = {8,4,3,5,90,21,2,45};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // sort(arr,arr+size,greater<int>());

    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }


    vector<int> v = {8,4,3,5,90,21,2,45};
    sort(v.rbegin(),v.rend());

    for(int i: v){
        cout<<i<<" ";
    }

    

    return 0;
}