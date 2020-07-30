#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    char str[] = "Today is a rainy day.";
    char* ptr = strtok(str," ");
    cout<<ptr<<endl;

    ptr = strtok(NULL," ");
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
}
