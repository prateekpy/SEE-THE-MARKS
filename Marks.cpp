#include <iostream>
using namespace std;
int main(){
	
		cout<<" "<<" "<<" "<<"   "<<"  "<<" "<<" "<<" "<<"   "<<"  "<<" "<<" "<<"Marks"<<endl;
	int mak;
	
	string name[]={"blank","Student1","student 2","student3","blank1"}; //enter the names of the students
	int mark[]={0,7,6,7,0};  // enter the number of the students according to roll number
		
	cout<<"Enter Your Roll Number:";
	cin>>mak;
	
	cout<<name[mak]<<'-'<<mark[mak];
	
	return 0;
	
	
}
