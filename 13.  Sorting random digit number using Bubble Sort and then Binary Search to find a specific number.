// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sz=10;
    
  
    int left =0;
    int right =sz-1;
    
    for(int i=0; i<sz; i++){
        cin>>arr[i];
    }
    int item;
    cin>>item;
   

    for(int i=0; i<sz-1; i++){
        for(int j=0; j<sz-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "Sorted Array: ";
    for(int i=0; i<sz; i++){
        cout<<arr[i]<<endl;
    }
    
    bool found = false;
    while(left<= right){
        
        int mid = (left+right)/2;
        
        if(arr[mid] == item ){
            cout<<"Found "<<mid<<endl;
            found = true;
            break;
        }else if(arr[mid]< item){
            left = mid+1;
        }else {
            right = mid-1;
        }
    }
    if(!found) {
        cout << "Not Found" << endl;
    }

    return 0;
}
