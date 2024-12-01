#include <iostream>
using namespace std;

int main() {
    
    
    
    int arr[14] = {1,4,17,19,20,22,25,28,32,35,38,42,47,50};
    
    int item ;
    cin>>item;
    
    int left =0, right = 8;
                                 // Binary Search
    int flag = 0;
    while(left<= right){
        
        int mid = (left+right)/2;
        
        if(arr[mid] == item ){
            flag = 1;
            cout<<"Found "<<mid<<endl;
            break;
        }else if(arr[mid]< item){
            left = mid+1;
        }else {
            right = mid-1;
        }
    }
    
    if(flag == 0){
        cout<<"Not Found "<<endl;
    }
   

    return 0;
}
