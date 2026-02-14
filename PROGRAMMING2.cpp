#include <iostream>
using namespace std;

string user;
string password;

int main(){
	cout<<"Username: ";
	cin>>user;
	cout<<"Password: ";
	cin>>password;
	if(user=="CARL" || user== "carl" && password== "ALBERTO" || password == "alberto"){
		cout<<"Welcome "<<user<<password;
	}
	else{
		cout<<"Invalid user or Password"<<endl;
	}
	return 0;
}
