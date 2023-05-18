#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5,res=12;
    // cin>>n;
    vector<int> v={1,2,3,7,6};
    int i=0,j=0;
    int sum=v[0];
    vector<int> r;
    while(j<n){
        if(sum==res){
            r.push_back(i+1);
            r.push_back(j+1);
            break;
        }
        if(sum<res){
            j++;
            sum+=v[j];
            continue;
        }
        if(sum>res){
            sum-=v[i];
            i++;
            continue;
        }
    }
    vector<int>::iterator a=r.begin();
    for(a;a!=r.end();a++){
        cout<<*a<<endl;
    }
}