#include<iostream>
#include<string>
using namespace std;

class binary{
    private:
    string s;
    void chk_binary(void);
    public:
    void read(void);
    void one_zero_interchange(void);
};

void binary:: read(void){
    cout<<"Enter your number"<<endl;
    cin>>s;
}

void binary:: chk_binary(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!=1 && s.at(i)!=0)
        {
            cout<<"The number isn't binary";
            exit(1);
        } 
    }  
}

void binary:: one_zero_interchange(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)==0)
        {
            s.at(i)= 1;
        }
        else{
            s.at(i)= 0;
        }
    }
    
}

int main(){
    
    return 0;
}