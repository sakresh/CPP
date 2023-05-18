#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> mat={
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    vector<int> res;
    int top,left,right,bottom,row,col;
    row=mat.size();
    col=mat[0].size();
    top=left=0;
    right=col-1;
    bottom=row-1;

    while(top<=bottom && left<=right){
        // top represents the starting row index
        // bottom represents the ending row index
        // left represents the starting col index
        // right represents the ending col index

        for(int i=left;i<=right;i++){
            res.push_back(mat[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            res.push_back(mat[i][right]);
        }
        right--;

        if(top<=bottom){
        for(int i=right;i>=left;i--){
            res.push_back(mat[bottom][i]);
        }
        bottom--;
        }

        if(left<=right){
        for(int i=bottom;i>=top;i--){
            res.push_back(mat[i][left]);
        }
        left++;
        }

    }


    for(int k=0;k<res.size();k++){
        cout<<res[k]<<endl;
    }
}