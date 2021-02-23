#include <iostream>
using namespace std;

string reverseString(string str){
    int n=str.length();
    for(int i=0;i<n;i++){
        int c=str.at(i);
        if(c>=97 && c<=122){
            int m=219-c;
            cout<<char(m);
        }
    }
}

int main() {
    string str;
    cin>>str;
    reverseString(str);
}
