#include<iostream>
using namespace std;

class Item_list{
    public:
    int item_code;
    void get_item(){
        int index;
        cout<<"Enter 1 to shop for badmtion racquets\nEnter 2 to shop for badmtion shuttle\n";
        cin>>index;
        if(index==1){
          for(int i=0;i<=35;i++){
            if(i==17){cout<<"BADMINTION RACQUETS AVAILABLE";}
                cout<<"-";}
            cout<<endl;
            cout<<"Enter the index  of the racquet you want to buy\n";
            cout<<"1-Astrox 99\n2-Voltric Z-Force 2\n3-Duora 77\n4-Astrox 2 DG\n";
            for(int i=0;i<=50;i++){
                if(i==25){cout<<"ORDER";}
                cout<<"-";}
            cout<<endl;
            cin>>item_code;
        }
        else if(index==2){
          for(int i=0;i<=50;i++){
            if(i==25){cout<<"BADMINTION SHUTTLECOCK AVAILABLE";}
                cout<<"-";}
            cout<<endl;
            cout<<"Enter the index of the shuttle you want to buy\n";
            cout<<"5-Mavis 350\n6-Mavis 10\n7-Mavis 300\n8-Mavis 10i\n";
             for(int i=0;i<=50;i++){
                if(i==25){cout<<"ORDER";}
                cout<<"-";}
            cout<<endl;
            cin>>item_code;
        }
        else{
            cout<<"Invalid entry\n";
            item_code==0;}
    }
};
class Get_price:public Item_list{
public: 
    string item_name;
    int price;
    void get_price(){
        if(item_code==1){
            price=21000;
            item_name="Astrox 99";
        }
        else if(item_code==2){
            price=17500;
            item_name="Voltric Z-Force 2";
        }
        else if(item_code==3){
            price=15000;
            item_name="Duora 77";
        }
        else if(item_code==4){
            price=5000;
            item_name="Astrox 2 DG";
        }
        else if(item_code==5){
            price=1200;
            item_name="Mavis 350";
        }
        else if(item_code==6){
            price=1100;
            item_name="Mavis 10";
        }
        else if(item_code==7){
            price=1200;
            item_name="Mavis 300";
        }
        else if(item_code==8){
            price=900;
            item_name="Mavis 300";
        }
        else{
           price=0; 
           item_name="NONE";
        }

    }

};
class Customer_details{
    public:
    char first_name[20];
    char last_name[20];
    char contact[10];
    void get_details(){
        cout<<"Enter first name: "<<endl;
        cin>>first_name;
        cout<<"Enter last name: "<<endl;
        cin>>last_name;
        cout<<"Enter contact number: "<<endl;
        cin>>contact;
        
        }

};
class Bill:public Get_price,public Customer_details{
    public:
    void generate_bill(){
        for(int i=0;i<=50;i++){
            if(i==25){cout<<"RECEIPT";}
            cout<<"-";}
        cout<<endl;
        cout<<"Customer name :Mr/Mrs: "<<first_name<<" "<<last_name<<endl;
        cout<<"contact number : "<<contact<<endl;
        cout<<"Product name : "<<item_name<<endl;
        cout<<"Item cost: "<<price<<endl;
        cout<<"GST : 5%"<<endl;
        cout<<"Total cost : "<<price+((price/100)*5)<<endl;
        for(int i=0;i<=50;i++){
            if(i==25){cout<<"Thank you";}
            cout<<"-";
    }}
};

int main(){
    cout<<"This is a example of multi-level inheritance and multi inheritance"<<endl;
    for(int i=0;i<=50;i++){
        if(i==25){cout<<"BADMINTION SHOP";}
        cout<<"-";}
    cout<<endl;
    Bill b1;
    b1.get_item();
    b1.get_price();
    b1.get_details();
    b1.generate_bill();
    return 0;
}