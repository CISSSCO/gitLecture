#include<iostream>
//#include<utility>
using namespace std;

int main(){
    

    pair<int, int> p1(10, 20);
    pair<int, int> p2;
    pair<int, string> p3;
    pair<int, string> p4;
    p3 = {10, "Abhishek"};
    p4 = make_pair(11, "Rishikesh");
    cout<<p1.first<<"\t"<<p1.second<<endl;
    cout<<p2.first<<"\t"<<p2.second<<endl;
    cout<<p3.first<<"\t"<<p3.second<<endl;
    cout<<p4.first<<"\t"<<p4.second<<endl;

    pair<int, int>p5 (1,12), p6(9, 12);
    cout<<(p1 == p2)<<endl;
    cout<<(p1 != p2)<<endl;
    cout<<(p1 > p2)<<endl;
    cout<<(p1 < p2)<<endl;
    
    return 0;
}
