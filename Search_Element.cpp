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
    for(int i=0; i<rows; i++){  //array input
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    int found;
    cout<<"Enter the key element : ";
    cin>>found;

    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(found==arr[i][j]){
                cout<<i<<" "<<j;
                break;
            }
        }
    }

    // for(int i=0; i<rows; i++){  //output
    //     for(int j=0; j<col; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

}