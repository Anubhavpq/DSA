#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[5], i , imax , i2max ;
    cout<<"enter the elements of the array"<<endl;
    for(i=0; i<5 ; i++){
        cin >> arr[i];
    }

    // find largest
    int imax = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > imax) {
            imax = arr[i];
        }
    }
    cout << "the largest element is " << imax;
    // find 2nd largest
    i2max = INT_MIN;
    for (i = 0; i < 5; i++) {
        if (arr[i] > i2max && arr[i] < imax) {
            i2max = arr[i];
        }
    }
    cout << "\nthe 2nd largest element is " << i2max;

    return 0;
}