#include<iostream>
using namespace std;
int main(){

    int arr[7];
    int sz=7;
    
    for(int i=0; i<sz; i++){
        cin>>arr[i];
    }
    
    int pass = 0;
    int steps = 0;
    
    for(int i=0; i<sz-1; i++){
        pass++;

        for(int j=0; j<sz-1-i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                steps++;

            }
        }
    
    }
    cout<<"Pass: "<<pass<<endl;
    cout<<"Steps: "<<steps<<endl;
   
    return  0;
}
