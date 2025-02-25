#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    int min;
    for(int i=0; i<n-1; i++){
        min = i;
    
        for(int j= i+1; j<n; j++){

            if(arr[j] < arr[min]){      //  Ascending order . // If Deccending order then modify this condition (arr[j] > arr[min]);
                min = j;
            }
        }

        if(min != i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    SelectionSort(arr, n);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }



}