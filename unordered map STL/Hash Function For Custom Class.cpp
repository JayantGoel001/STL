#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;
class Student{
public:
    string firstname;
    string lastname;
    string rollno;

    Student(string f,string l,string no){
        firstname = f;
        lastname = l;
        rollno = no;
    }
    bool operator==(const Student &s) const{
        return rollno == s.rollno;
    }
};
class HashFn{
public:
    size_t operator()(const Student &s) const{
        return s.firstname.length() + s.lastname.length();
    }
};
int main(){
    unordered_map<Student,int,HashFn> m;
    Student s1("Prateek","Narang","010");
    Student s2("Rahul","Kumar","023");
    Student s3("Prateek","Gupta","030");
    Student s4("Rahul","Kumar","120");

    m[s1] = 100;
    m[s2] = 120;
    m[s3] = 11;
    m[s4] = 40;

    for(x:m){
        cout<<x.first.firstname<<" "<<x.first.lastname<<"-"<<x.first.rollno<<endl;
        cout<<x.second<<endl;
    }
}

