#include<iostream>
using namespace std;

string word_extract(char x){
    if(x=='A'||x=='a'){return "Adorable";}
    else if(x=='B'||x=='b'){return "Bubbly";}
    else if(x=='C'||x=='c'){return "Compassion";}
    else if(x=='D'||x=='d'){return "Daring";}
    else if(x=='E'||x=='e'){return "Eager";}
    else if(x=='F'||x=='f'){return "Fabulous";}
    else if(x=='G'||x=='g'){return "Generous";}
    else if(x=='H'||x=='h'){return "Humble";}
    else if(x=='I'||x=='i'){return "Inspiring";}
    else if(x=='J'||x=='j'){return "Joyful";}
    else if(x=='K'||x=='k'){return "Kind";}
    else if(x=='L'||x=='l'){return "Loving";}
    else if(x=='M'||x=='m'){return "Mystical";}
    else if(x=='N'||x=='n'){return "Nurturing";}
    else if(x=='O'||x=='o'){return "Optimistic";}
    else if(x=='P'||x=='p'){return "Passionate";}
    else if(x=='Q'||x=='q'){return "Quiet";}
    else if(x=='R'||x=='r'){return "Respectful";}
    else if(x=='S'||x=='s'){return "Sparkling";}
    else if(x=='T'||x=='t'){return "Trusting";}
    else if(x=='U'||x=='u'){return "Uplifting";}
    else if(x=='V'||x=='v'){return "Vibrant";}
    else if(x=='W'||x=='w'){return "Wise";}
    else if(x=='X'||x=='x'){return "Xenial";}
    else if(x=='Y'||x=='y'){return "Youthful";}
    else if(x=='Z'||x=='z'){return "Zestful";}
    else{return "Invalid entry\n";}
}
void meaning(string x){
    char word;
    int len=x.length();
    for(int i=0; i<len; i++){
        word=x[i];
        cout<<word<<" = "<<word_extract(word)<<endl;
    }
}
  
int main(){
    string name;
    cout<<"Enter your name: "<<endl;
    cin>>name;
    meaning(name);


return 0;
}