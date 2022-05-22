#include<iostream>
#include<string>
using namespace std;

class Dokan{
    int itemId[100];
    int itemPrice[100];
    int counter =0;
public:
    void incrsecounter(void){counter += 1;};
    void setPrise(void){
        cout<<"inter item id for "<<counter+1<<"no item"<<endl;
        cin>>itemId[counter];
        cout<<"inter item price for "<<counter+1<<"no item"<<endl;
        cin>>itemPrice[counter];
        incrsecounter();
    };
    void display(void);


};

void Dokan :: display(void){

    for(int i=0;i<counter;i++){
        cout<<"id number :"<<itemId[i]<<" price is : "<<itemPrice[i]<<endl;
    }

}

int main(){

    Dokan e,e2,e3;
    e.setPrise();
    e2.setPrise();
    e3.setPrise();
    e.display();


    return 0 ;

}
