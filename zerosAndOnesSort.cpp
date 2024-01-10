#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {0,1,0,1,0,0,1,1,0,1,1,0};
    int numberOfOnes=0;
    int numberOfZeroes=0;
    int len = v.size();
    int i = 0;
    while(i<v.size()) {
        if(v[i]==1){
            numberOfOnes++;
        }
        else if(v[i]==0) numberOfZeroes++;
        i++;
    }
    vector<int> res;
    for(int i=0; i<numberOfZeroes; i++){
        res.push_back(0);
    }
    for(int i=0; i<numberOfOnes; i++){
        res.push_back(1);
    }
    for(int i = 0; i<res.size(); i++){
        cout<<res[i];
    }
    return 0;
}
