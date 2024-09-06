#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void login();
void registration();
void forget();
void member();
void record();

int main()
{

int C;
cout<<"\t\t\t=================================\n\n\n";
cout<<"\t\t\t  Welcome to Sports Login Page    \n\n\n";
cout<<"\t\t\t==============Menu================\n\n";
cout<<"                                         \n\n";
cout<<"\t |Press 1 to login            | "<<endl;
cout<<"\t |Press 2 to Register         | "<<endl;
cout<<"\t |Press 3 to Forget Password  | "<<endl;
cout<<"\t |Press 4 to Exit             | "<<endl;
cout<<"\n\t\t\t Please enter your choice:";
cin>>C;
cout<<endl;
while(C!=4){
switch(C)

{
case 1:
login();
break;

case 2:
registration();
break;

case 3:
forget();
break;

case 4:
cout<<"\t\t\tThank You!\n\n";

default:
system("cls");
cout<<"Please Select from the option given above \n"<<endl;
main();
}

}



}
void login()
{
int count;
string userID, password, id, pass;
system("cls");
cout<<"\t\t\t Please enter the username and password: "<<endl;
cout<<"\t\t\t Username: ";
cin>>userID;
cout<<"\t\t\t Password";
cin>>password;
ifstream input("username.txt");
while(input>>id>>pass)
{
if(id==userID && pass==password)
{
count=1;
system("cls");
}

} 
input.close();

if(count==1)
{
cout<<userID<<"\n Your LOGIN is successfull \n Thanks for logging !";
}
else{
cout<<"Incorrect UserId or Password";
}

}

void registration()
{
string ruserId,rpassword,rid,rpass;
system("cls");
cout<<"\t\t\t Enter the Username : ";
cin>>ruserId;
cout<<"\t\t\t Enter the Password : ";
cin>>rpassword;

ofstream f1("username.txt", ios::app);
f1<<ruserId<<"  "<<rpassword<<endl;
system("cls");
cout<<"\n\t\t\t Registration is successfull \n";
}

void forget()
{
int option;
system("cls");
cout<<"\t\t\t You forget the password! No Worries\n";
cout<<"Press 1 to search your ID by username"<<endl;
cout<<"Press 2 to go back to the main menu"<<endl;
cout<<"\t\t\t Enter your choice : ";

switch(option)
{
case 1:
{
int count=0;
string suserId,sId,spass;
cout<<"\n\t\t\t Enter the username which you remembered :";
cin>>suserId;

ifstream f2("username.txt");
while(f2>>sId>>spass){
if(sId==suserId)
{
count=1;
}
}
f2.close();

if(count==1)
{
cout<<"\n\n Your account is found! \n";
cout<<"\n\n Your password is : "<<spass;
}

else
{
cout<<"\n\t Account not found!";
main();
}
break;
}

case 2:
{
main();
}
 
 default:
 cout<<"\t\t\t Wrong choice ! Please try again"<<endl;
 forget();
 
 
}

}


