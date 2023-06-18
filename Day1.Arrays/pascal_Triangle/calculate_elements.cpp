#include<iostream>
#include<vector>
using namespace std;
long long int ncr(int n,int r){
    // Extreme brute force method.
    long long int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);

    }
    return res;

}

//Print the nth row of pascal's triangle
void printNthRow(int row){
    int ans=1;
    cout<<ans<<" ";
    for(int i=1;i<row;i++){
        ans=ans*(row-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
}
vector<int> GenerateRow(int row){
        long long int val=1;
        vector<int>ans;
        ans.push_back(1);
        for(int i=1;i<row;i++){
            val=val*(row-i);
            val=val/i;
            ans.push_back(val);
        }
        return ans;
    }
    // To print the entire pascal's triangle.
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> def;
        for(int i=1;i<=numRows;i++){
            def.push_back(GenerateRow(i));
        }

        return def;
    }
int main(){
    int row=6;
    //printNthRow(row);
    return 0;
}