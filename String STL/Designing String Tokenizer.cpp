#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char* mystrtok(char *str,char del){
    static char *input = NULL;
    if(str!=NULL){
        input = str;
    }
    char *output = new char[strlen(input)+1];
    int i=0;
    for(;input[i]!='\0';i++){
        if(input[i]!=del){
            output[i] = input[i];
        }
        else{
            output[i] = '\0';
            input = input +i+1;
            return output;
        }
    }
    if(input[i]=='\0'){
        output[i] = '\0';
        input = NULL;
        return output;
    }
    if(input==NULL){
        return NULL;
    }
}
int main(){
    char str[] = "Today is a rainy day.";
    char* ptr = mystrtok(str,' ');
    cout<<ptr<<endl;

    ptr = mystrtok(NULL,' ');
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr = mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }
}

