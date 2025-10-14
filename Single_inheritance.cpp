//single inheritance
#include<bits/stdc++.h>
using namespace std;
class Person{
	public:
	string name;
	int age;
	Person(string name,int age){
		cout<<"Base class"<<endl;
		this->name=name;
		this->age=age;
	}
};
class student : public Person{
	public:
		int rollno;
		student(string name,int age,int roll):Person(name,age){
			cout<<"Student class"<<endl;
			rollno=roll;
		}
};
int main(){
	student s1("Alice",20,151);
	cout<<s1.name;
}
