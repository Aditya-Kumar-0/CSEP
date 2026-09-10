#include<iostream>
using namespace std;
int main(){
    int rows, col;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    cout<<"Enter the number of column : ";
    cin>>col;
    int arr[rows][col];
    int maxSum = 0;
    int index;

    cout<<"Enter all elements of matrix : ";
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<rows; i++){
         int sum = 0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
            if(sum>maxSum){
                maxSum = sum;
                index = i;
            }
        }
    }

    cout<<maxSum<<" "<<index;
}