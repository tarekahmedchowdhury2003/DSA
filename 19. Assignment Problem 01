#include <iostream>
using namespace std;

int main() {

    int arr[13] = {99, 111, 109, 112, 117, 116, 101, 114, 95, 99,108, 117, 98};
    int size = 13;
    int pass =0;
    int steps = 0;
    for(int i=0; i<size; i++){
        pass++;
        for(int j=0; j<size-1-i; j++){   // Bubble Sort
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            steps++;
        }
    }
    
    
    for(int i=0; i<size-1;i++){
         cout<<arr[i]<<endl;
    }
    
    cout<<"Pass: "<<pass<<endl;
    cout<<"Steps: "<<steps<<endl;

    return 0;
}
