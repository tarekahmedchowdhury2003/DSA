#include<iostream>
using namespace std;

int arr[] = {8,7,4,5,3,2};
int temp [] = {};

void Merge(int L, int mid, int H){

    int i = L, j = mid+1, k = L;

    while(i<= mid && j<= H){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            k++;
            j++;
            i++;
        }else{
            temp[k] = arr[j];
            k++;
            j++;
        }

    }
    for(; i<= mid; i++){
        temp[k] = arr[i];
        k++;
    }
    for(; j<=mid; j++){
        temp[k] = arr[j];
        k++;
    }
    for(int m=L; m<k; m++){
        arr[m] = temp[m];
    }
}
void MergeSort(int L, int H){

    if(L<H){
        int mid = (L+H)/2;
        MergeSort(L,mid);

        MergeSort(mid+1, H);

        Merge(L, mid, H);
    }
}

int main(){
    
    MergeSort(0,5);



    for(int i = 0; i<5; i++){
        cout<<arr[i];
    }
    

  
}