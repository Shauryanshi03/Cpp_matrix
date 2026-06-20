#include<iostream>
#include<climits>
using namespace std;

void printsum(int arr[][4],int row,int col){
    cout<<" sum = "<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
}
cout<<endl;
}

int largestrowsum(int arr[][4],int row,int col){

    int maxi=INT_MIN;
    int rowindex=-1;

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=i;
        }
    }
        cout<<"the maximum sum is "<<maxi<<endl;
        return rowindex;
    }

    int main(){
    int arr[3][4];
    cout<<"enter the elements "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    printsum(arr,3,4);

    cout<<"max row sum is at index "<<largestrowsum(arr,3,4)<<endl;

    return 0;
}