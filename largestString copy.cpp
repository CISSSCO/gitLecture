#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.get();
    int larLen = 0;
    char larStr[1000];
    while(t--){
        char s[1000];
        cin.getline(s, 1000);
        int len = strlen(s);
        if(len > larLen){
            larLen = len;
            strcpy(larStr, s);
        }
        
    }
    cout<<"Largest String is : "<<larStr<<endl;
    cout<<"Length : "<<larLen<<endl;
    return 0;
}
