#include "iostream"
using namespace std;

int main(){

    // this code works for sorted array

    // int arr[]={1,2,3,4,5,34,34};

    // int n=7;

    // int largest = arr[0];
    // int slargest = -1;

    // for(int i=1;i<n;i++){
    //     if(arr[i]>largest){
    //         slargest = largest;
    //         largest = arr[i];
    //     }
    // }
    // cout<<slargest<<endl;
    //     return slargest;

    int arr[] = {3,2,4,5,1,2};
    int n =6 ;

    int largest = arr[0];
    int slargest = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
           
        }
         if(slargest > arr[i] && slargest!=largest){
                slargest =arr[i];
            }
    }

    cout<<largest<<endl;
    cout<<slargest<<endl;

    
}