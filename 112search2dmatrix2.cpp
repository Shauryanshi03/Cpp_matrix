#include<iostream>
#include<vector>
using namespace std;

bool searchmatrix(vector<vector<int>>& matrix,int target){

    int row=matrix.size();
    int col=matrix[0].size();
    int rowindex=0;
    int colindex=col-1;

    while(rowindex<row && colindex>=0){
        int element=matrix[rowindex][colindex];
        if(element==target){
            return 1;
        }
        if(element<target){
            rowindex++;
        }
        else{
            colindex--;
        }
    }
    return false;
}

int main(){
    vector<vector<int>> matrix={{1,4,7,11,15},{2,5,8,12,19},{10,13,14,17,24},{18,21,23,26,30}};
    int target=5;
    cout<<searchmatrix(matrix,target);

    return 0;
}