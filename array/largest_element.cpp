#include <iostream>
using namespace std;
int main(){
    int arr[5], i ;
    cout<<"enter the elements of the array"<<endl;
    for(i=0; i<5 ; i++){
        cin >> arr[i];
    }
    for(i=0;i<5;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
            cout<<"the largest element is "<<arr[0];
        }
    }
    return 0;
}