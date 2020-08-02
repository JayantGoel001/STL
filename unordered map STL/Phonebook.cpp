#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    unordered_map<string,vector<string>> phonebook;
    phonebook["rahul"].push_back("9110");
    phonebook["rahul"].push_back("9112");
    phonebook["rahul"].push_back("9113");
    phonebook["rahul"].push_back("9115");

    phonebook["kajal"].push_back("8115");
    phonebook["kajal"].push_back("8112");
    phonebook["kajal"].push_back("8113");
    phonebook["kajal"].push_back("8110");

    for(auto p:phonebook){
        cout<<"Name "<<p.first<<"->";
        for(auto i:p.second){
            cout<<i<<",";
        }
        cout<<endl;
    }
    string name;
    cin>>name;
    if(!phonebook.count(name)){
        cout<<"Absent";
    }
    else{
        for(auto s:phonebook[name]){
            cout<<s<<",";
        }
    }
}
