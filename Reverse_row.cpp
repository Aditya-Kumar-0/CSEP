#include<iostream>
using namespace std;
int main(){
    int rows, col;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    cout<<"Enter the number of column : ";
    cin>>col;
    int arr[rows][col];

    cout<<"Enter all elements of matrix : ";
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        int start = 0, end = col-1;
        while(start<=end){
            swap(arr[i][start],arr[i][end]);
            start++;
            end--;
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}