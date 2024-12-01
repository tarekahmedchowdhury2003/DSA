#include <iostream>
using namespace std;

int main() {
    
    
    
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    
    int item = 7;
    
    int left =0, right = 8;
                                 // Binary Search
    
    while(left<= right){
        
        int mid = (left+right)/2;
        
        if(arr[mid] == item ){
            cout<<"Found "<<mid<<endl;
            break;
        }else if(arr[mid]< item){
            left = mid+1;
        }else {
            right = mid-1;
        }
    }
   

    return 0;
}
