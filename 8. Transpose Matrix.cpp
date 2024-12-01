#include <iostream>
using namespace std;
int main() {
    int arr[3][3] = {{10,20,30}, 
                     {40,50,60},
                     {70,80,90}};
                     
    int arr2[3][3];
    
    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){
                                     // Transpose Matrix
            arr2[i][j] = arr[j][i];
            cout<<arr2[i][j]<<" ";
            
        }
        
        cout<<endl;
    }
                     
    
    

    return 0;
}
