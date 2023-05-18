#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    int arr[n]={5,7,6,2,3};
    for(int i=0;i<n-1;i++){
        int temp =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[temp]){
                temp=j;
            }
        }
        swap(arr[i],arr[temp]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}