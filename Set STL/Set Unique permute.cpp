#include <iostream>
#include<set>
#include<string>
using namespace std;

void permute(char a[],int i,set<string> &s){
    if(a[i]=='\0'){
        string t(a);
        s.insert(t);
        return;
    }
    else{
        for(int j=i;a[j]!='\0';j++){
            swap(a[i],a[j]);
            permute(a,i+1,s);
            swap(a[i],a[j]);
        }
    }
}

int main() {

    char a[100];
    cin>>a;
    set<string> s;
    permute(a,0,s);

    for(auto str:s){
        cout<<str<<",";
    }
}
