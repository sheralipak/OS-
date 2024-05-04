#include<iostream>
using namespace std;
struct process{
	int processid;
	int processparentid;
	int processchildid;
	int memoryreq;
	string device;
	string name;
	string state="created";
	int priority=0;
	int *memoryadd=&memoryreq;
	string processregister="CPU Register";
	string processorname="Intel800";
	string io;
}
p[5];
int main(){
	int a,b;
	char c;
cout<<"Welcome to Doors OS"<<endl<<endl; 
jump:
		for(int i=0;i<5;++i){
cout<<"Choose your option"<<endl;
cout<<"Press 1 for Process Management"<<endl;
cout<<"Press 2 for Memory Management"<<endl;
cout<<"Press 3 for I/O Management"<<endl;
cout<<"Press 4 for Other operations"<<endl<<endl;
cin>>a;
cout<<endl;
if(a=1){
	cout<<"Welcome to Process Management"<<endl<<endl;
	cout<<"Choose your suitable option \n"<<endl;
	cout<<"Press 1 to create a process"<<endl;
	cout<<"Press 2 to destroy a process"<<endl;
	cout<<"Press 3 to suspend a process"<<endl;
	cout<<"Press 4 to resume a process"<<endl;
	cout<<"Press 5 to block a process"<<endl;
	cout<<"Press 6 to wakeup a process"<<endl;
	cout<<"Press 7 to dispatch a process"<<endl;
	cout<<"Press 8 to change process priority"<<endl;
	cout<<"Press 9 for process communication with other processes\n"<<endl;
	cin>>b;
	cout<<"\n";
}
if(b=1){
	cout<<"Welcome In Process Creation World\n";
	cout<<"Do you want to create a process\n";
	cout<<"Click y for yes n for no\n";
	cin>>c;
}
if(char c='y'){

	cout<<"Process id\n";
	p[0].processid=i+1;
	cout<<p[0].processid;cout<<endl;
	cout<<"Enter your name\n";
	cin>>p[0].name;
	cout<<"Enter the processid of parent process\n";
	cin>>p[0].processparentid;
	cout<<"Enter the processid of child process\n";
	cin>>p[0].processchildid;
	cout<<"The process requires how many memory in kb\n";
	cin>>p[0].memoryreq;
	cout<<"The address of memory will be\n";
	cout<<p[0].memoryadd;cout<<endl;
	cout<<"The register for the process will be\n"<<p[0].processregister;cout<<endl;
	cout<<"The processor is \n"<<p[0].processorname;cout<<endl;
	cout<<"WHich I/O state it is\n"<<p[0].device;cout<<endl;
	cin>>p[0].device;
cout<<"Process 1\n";
cout<<p[0].processid;cout<<endl;
cout<<p[0].state;cout<<endl;
cout<<p[0].name;cout<<endl;
cout<<p[0].priority;cout<<endl;
cout<<p[0].processchildid;cout<<endl;
cout<<p[0].processparentid;cout<<endl;
cout<<p[0].memoryreq;cout<<endl;
cout<<p[0].memoryadd;cout<<endl;
cout<<p[0].processregister;cout<<endl;
cout<<p[0].processorname;cout<<endl;
cout<<p[0].io;
cout<<"Process 2\n";
cout<<p[1].processid;cout<<endl;
cout<<p[1].state;cout<<endl;
cout<<p[1].name;cout<<endl;
cout<<p[1].priority;cout<<endl;
cout<<p[1].processchildid;cout<<endl;
cout<<p[1].processparentid;cout<<endl;
cout<<p[1].memoryreq;cout<<endl;
cout<<p[1].memoryadd;cout<<endl;
cout<<p[1].processregister;cout<<endl;
cout<<p[1].processorname;cout<<endl;
cout<<p[1].io;}
}
}



