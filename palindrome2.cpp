#include<iostream>
#include <string>
using namespace std;

class Palindrome{
public:
    string reversed = "";
    Palindrome(string shabd){
        for (int i= shabd.length()-1;i>= 0;i--){
            reversed+=shabd[i];
        }
        };
    void compare(string shabd){
        if(reversed==shabd){
            cout<<"The word is a palindrome\n";}
        else{
            cout<<"The word is not a palindrome\n";}
    };
};


int main(){
    string word;
    cout<<"Enter a word\n";
    cin >> word;
    Palindrome p1(word);
    p1.compare(word);
    return 0;
}




// for(int i=0;i<strlen(word);i++){
//         cout<<word[i]<<"\n";
//     }