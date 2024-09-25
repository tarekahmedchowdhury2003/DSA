#include <iostream>
using namespace std;

int main() {

    int arr[10] = {7,1,5,8,9,3,4,2,6,10};
    int size = 10;
    
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){   // Bubble Sort
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for(int i=0; i<size-1;i++){
         cout<<arr[i]<<endl;
    }

    return 0;
}
