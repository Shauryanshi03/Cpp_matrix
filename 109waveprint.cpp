#include<iostream>
#include<vector>
using namespace std;

int waveprint(int arr[3][4],int row,int col){
    int ans;
    for(int j=0;j<col;j++){
        if(j&1){
            for(int i=row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
                
            }
        }
        else{
            for(int i=0;i<3;i++){
                cout<<arr[i][j]<<" ";
                
            }
        }
    }
    
}

int main(){
    int arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    waveprint(arr,3,4);
    return 0;

}