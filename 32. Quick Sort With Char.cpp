#include <iostream>
using namespace std;

int Partision(char arr[], int st, int en){

    char pivot = arr[st];
    int p = st+1;
    int q = en;

    while(p<=q){

        while(pivot>=arr[p]){
            p++;
        }
        while(pivot<arr[q]){
            q--;
        }

        if(p<q){
            swap(arr[p], arr[q]);
        }
    }
    swap(arr[st],arr[q]);
    return q;
}

void quicksort(char arr[], int st, int en){

    if(st<en){
        int loc = Partision(arr, st, en);
        quicksort(arr, st, loc-1);
        quicksort(arr, loc+1, en);
    }
}

int main() {

    char arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }



    quicksort(arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;






    return 0;
}
