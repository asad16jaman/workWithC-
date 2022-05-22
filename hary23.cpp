#include<iostream>
#include <stdio.h>
#include<string>
#include<cmath>
using namespace std;

class Mydokan{
    int itemid[100];
    int itemprice[100];
    int counts = 0;
public:
    void setitem(void){
        cout<<"inter item id : "<<endl;
        cin>>itemid[counts];
        cout<<"inter item price "<<endl;
        cin>>itemprice[counts];
        counts++;
    }
    void displayitem(void);


};

void Mydokan :: displayitem(void){
    for(int i = 0;i<counts;i++){
        cout<<"item id is : "<<itemid[i]<<" and price is : "<<itemprice[i]<<endl;
    }
}


int main(){

    Mydokan dokan1;
    dokan1.setitem();
    dokan1.setitem();
    dokan1.setitem();
    dokan1.setitem();
    dokan1.setitem();
    dokan1.displayitem();





    return 0;
}

