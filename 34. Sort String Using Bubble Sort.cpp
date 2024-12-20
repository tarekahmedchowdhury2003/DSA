#include <iostream>
using namespace std;

int main (){
    int size ;
    cin>>size;

    char ch[size];

    for(int i=0; i<size; i++){
        cin>>ch[i];
    }


    for(int i=0; i<size; i++){

        for(int j =0; j< size -i-1; j++){

            if(ch[j] > ch[j+1]){
                swap(ch[j], ch[j+1]);
            }

        }
    }
    for(int i=0; i<size; i++){
        cout<<ch[i];
    }



    return 0;
}
