#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
string extractStringAtKey(string str,int key){
    char* ptr = strtok((char*)str.c_str()," ");
    while(key>1){
        ptr = strtok(NULL," ");
        key--;
    }

    return (string)ptr;
}
bool numericCompare(pair<string,string> p1,pair<string,string> p2){
    string key1,key2;
    key1 = p1.first;
    key2 = p2.first;
    return stoi(key1) < stoi(key2);
}
bool lexiCompare(pair<string,string> p1,pair<string,string> p2){
    string key1,key2;
    key1 = p1.first;
    key2 = p2.first;
    return key1<key2;
}
int main(){
    int n;
    cin>>n;
    cin.get();

    string a[n];
    for(int i=0;i<n;i++){
        getline(cin,a[i]);
    }
    int key;
    cin>>key;
    cin.get();
    string reversal,ordering;
    getline(cin,reversal);
    getline(cin,ordering);
    pair<string,string> strPair[n];
    for(int i=0;i<n;i++){
        strPair[i].first = extractStringAtKey(a[i],key);
        strPair[i].second = a[i];
    }
    if(ordering=="numeric"){
        sort(strPair,strPair+n,numericCompare);
    }
    else{
        sort(strPair,strPair+n,lexiCompare);
    }

    if(reversal=="true"){
        for(int i=0;i<n/2;i++){
            swap(strPair[i],strPair[n-i-1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<strPair[i].second<<endl;
    }
}

