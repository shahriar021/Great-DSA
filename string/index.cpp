#include<bits/stdc++.h>

using namespace std;

class myString {
    char* data;
    int length;

    public:
        myString(const char* str){
            length=strlen(str);
            data=new char(length+1);
            strcpy(data,str);
        }

        ~myString(){
            delete[] data;
        }

        void print() const {
            cout<<data<<endl;
        }
};

int main(){

    myString s="hellow";
    s.print();

    return 0;
}