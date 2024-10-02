// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;

struct stdInfo{
    string name;
    int id;
    float cgpa;
};
bool comp(stdInfo a, stdInfo b){
    return a.cgpa>b.cgpa;
}

int main() { 
    
    stdInfo st[2]= {{"Tarek",349,3.56},{"Sahabi",332,3.50}};
   
    sort(st,st+2,comp);
    for(int i=0; i<2; i++){
        cout<<st[i].name<<" "<<st[i].id<<" "<<st[i].cgpa<<endl;
    }
    

    return 0;
}
