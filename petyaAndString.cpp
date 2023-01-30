#include<iostream>
#include<string>
using namespace std;

char lower(char s){
    int a;
    a = s;
    if(a < 97){
        a+=32;
    }
    s = a;
    return s;
}

int main(){
    string s1, s2;
    int temp = 0;
    cin>>s1>>s2;
    
    for(int i = 0; i < s1.length(); i++){
        if(lower(s1[i]) < lower(s2[i])){
            temp = -1;
            break;
        }
        else if(lower(s1[i]) > lower(s2[i])){
            temp = 1;
            break;
        }
        else{
            temp = 0;
        }
    }
    cout<<temp<<endl;

    return 0;
}
