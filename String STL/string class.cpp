#include<iostream>
#include<string>
using namespace std;
int main(){
    string s0;
    string s1("Hello");

    string s2 = "Hello World";
    string s3(s2);

    string s4 = s3;

    char a[] = {'a','b','c','\0'};
    string s5(a);

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

    if(s0.empty()){
        cout<<"S0 is an empty string."<<endl;
    }

    s0.append("I like C++");
    cout<<s0<<endl;

    s0 += " and python.";
    cout<<s0<<endl;

    cout<<s0.length()<<endl;

    s0.clear();
    cout<<s0.length()<<endl;

    s0 = "Apple";
    s1 = "Mango";
    cout<<s0.compare(s1)<<endl;

    if(s0>s1){
        cout<<"Mango is greater than apple."<<endl;
    }
    cout<<s1[1]<<endl;
    s1 = "I want to have apple juice.";
    int idx = s1.find("apple");
    cout<<idx<<endl;

    string word = "apple";
    int len = word.length();
    cout<<s1<<endl;
    s1.erase(idx,len+1);
    cout<<s1<<endl;

    for(int i=0;i<s1.length();i++){
        cout<<s1[i];
    }
    cout<<endl;
    for(auto it=s1.begin();it!=s1.end();it++){
        cout<<*it;
    }
    cout<<endl;
    for(auto x:s1){
        cout<<x;
    }
}
