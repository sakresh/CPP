#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter the values for n and m: ";
    cin>>n>>m;
    vector<int> v(n);
    cout<<"Enter the values for the array: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=i;j<v.size();j+=m){
            sum+=v[j];
        }
        cout<<"\t"<<sum<<endl;
    }
}