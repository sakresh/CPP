#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {10, 12 , 5, 40, 30, 7, 50, 9, 10};
    vector<int> res;
    int i = 0;
    while(i<v.size()){
        if(v[i]%10!=0) res.push_back(v[i]);
        i++;
    }
    int j = 0;
    while(j<v.size()){
        if(v[j]%10==0) res.push_back(v[j]);
        j++;
    }
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
}
