#include <iostream>
using namespace std;
int main() {
    
    int arr[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5;j++){
            cin>>arr[i][j];
        }
    }                   // Identity matrix 
    int flag =0;
    for(int i=0; i<5; i++){
        for(int j=0;j<5; j++){       
            if(i==j && arr[i][j] !=1){
                flag = 1;
            }else if(i != j && arr[i][j] !=0){
                flag = 1;
            }
        }
    }
    
    if(flag == 1){
        cout<<"NO"<<endl;
    }else {
        cout<<"Yes"<<endl;
    }

    return 0;
}
