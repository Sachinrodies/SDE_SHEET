#include<iostream>
#include<vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int colo=1,row=matrix.size(),col=matrix[0].size();
    for(int i=0;i<row;i++){
        if(matrix[i][0]==0){
            col=0;
        }
        for(int j=1;j<col;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=matrix[0][j]=0;
            }
        }
    }
    for(int k=row-1;k>=0;k--){
        for(int j=col-1;j>=1;j--){
            if(matrix[k][0]==0||matrix[0][j]==0){
                matrix[k][j]=0;
            }

        }
        if(col==0){
            matrix[k][0]=0;
        }
    }
}
void vecPrint(vector<vector<int>> vect){
for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }    
        cout << endl;
    }
}
int main(){
    vector<vector<int>> matrix={{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);
    vecPrint(matrix);
    return 0;
    
    
}
