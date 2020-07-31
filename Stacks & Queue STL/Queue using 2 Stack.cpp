#include<iostream>
#include<stack>
using namespace std;
template<typename T>
class Queue{
public:
    stack<T> s1;
    stack<T> s2;
    void push(T x){
        s1.push(x);
    }
    bool empty(){
        return s1.empty() && s2.empty();
    }
    void pop(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    T front(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        T topEle = s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return topEle;
    }

};
int main()
{
    Queue<int> q;
    for(int i=0;i<10;i++){
        q.push(i);
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}



