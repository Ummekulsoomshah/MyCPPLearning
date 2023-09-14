// #include<iostream>
// #include<fstream>
// using namespace std;
// int main(){
//     // write operation  
//     // string st="kulsoom";
//     // ofstream out("myfile1.txt");
//     // out<<st;
//     // read operation 
//     // string st1;
//     // ifstream in("myfile2.txt");
//     // ignore();
//     // getline(in,st1);
//     // cout<<st1;


//     // ofstream hout("myfile4.txt");
//     // cout<<"enter your name";
//     // string name;
//     // cin>>name;
//     // hout<<"my name is "+name;


// }
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct student
{
   int roll;
   char name[25];
   int marks;	
};
int main()
{
	int test;
	string data;
student obj;
cout<<"Enter Your Roll Number: ";
cin>>obj.roll;
cout<<"Enter Your Name : ";
cin.ignore();
cin.getline(obj.name,25);
cout<<"Enter Your Marks : ";
cin>>obj.marks;
// I just wanna open write to the file
ofstream file1;
file1.open("abc.txt",ios::out|ios::app);
file1<<obj.roll<<"\t"<<obj.name<<"\t"<<obj.marks<<endl;
file1.close();
cout<<"Enter 0 to See All Record:";
cin>>test;
if(test==0){
system("CLS");
// How to read the All content from the txt file
ifstream file2;
file2.open("abc.txt",ios::in);
while(getline(file2,data))
{
  cout<<data<<endl;	
}
file2.close();
}else{
	cout<<"Thanks for Using Software!"<<endl;
}

return 0;
}