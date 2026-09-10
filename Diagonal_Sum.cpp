#include<iostream>
using namespace std;
int main(){
    int rows, col;
    cout<<"Enter the number of rows : ";
    cin>>rows;

    cout<<"Enter the number of column : ";
    cin>>col;
    int arr[rows][col];
    int first = 0, second = 0;

    cout<<"Enter all elements of matrix : ";
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                first+=arr[i][j];
            }
            if((i+j)==(rows-1))
            second+=arr[i][j];
        }
    }
    cout<<first<<" "<<second;

}