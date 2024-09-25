#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = {{10,20,30}, 
                     {40,50,60},
                     {70,80,90}};
                     
    int arr2[3][3] = {{1,2,3}, 
                     {4,5,6},
                     {7,8,9}};
                     
    int arr3[3][3];              // Matrix Multiplication 
    
    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){
            arr3[i][j] = 0;
            
            for(int k=0; k<3; k++){
                arr3[i][j] += arr[i][k] * arr2[k][j];
                
                
            }
            cout<<arr3[i][j]<<" ";
        }
        
        cout<<endl;
    }
                     
    
    

    return 0;
}
