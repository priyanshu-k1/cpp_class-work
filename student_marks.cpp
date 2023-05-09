#include<iostream>
using namespace std;

int main(){
    int std_data[5][5],total_marks[5];
    string sub_name[8]={"cpp","maths","data structure","computer networking","computer architecture","Total","Average"};
    for(int i=0;i<5;i++){
        cout<<"Enter marks of student "<<i+1<<endl;
        for(int j=0;j<5;j++){
            cout<<"Enter  marks in "<<sub_name[j]<<":\n";
            cin>>std_data[i][j];}}

    int sum=0;
    for(int k=0;k<5;k++){
        for(int l=0;l<5;l++){
            sum=sum+std_data[k][l];
        }
        total_marks[k]=sum;
        sum=0;
    }
for(int i=0;i<50;i++)
{cout<<"*";}
    cout<<endl;
    cout<<"Roll No  | ";
    for(int i=0;i<8;i++){
       
        cout<<sub_name[i]<<" | ";
    }
    cout<<endl;

    for(int i=0;i<5;i++){
        cout<<i+1<<" | ";
        cout<<"\t";
        for(int j=0;j<5;j++){
            cout<<std_data[i][j]<<"   |     ";
        }
        cout<<" "<<total_marks[i];
        cout<<" "<<total_marks[i]/5;
        cout<<endl;
    }

}