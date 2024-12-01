#include <iostream>
using namespace std;

// Array insertion at any position

int main() {
    int arr[15];  

    int size;
    int num;
    int pos ;
    
    cin>>size;
    
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cin>>num;
    cin>>pos;

    for(int i=size-1; i>=pos; i--){
        
        arr[i+1] = arr[i];
        
    }
    arr[pos] = num;
    size++;
    
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    

    return 0;
}
