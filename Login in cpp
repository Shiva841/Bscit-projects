#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;
void registration(){
	    		cout<<"_____________Register_____________\n";
	    ofstream g("Registration.txt");
     	
     	string Username,Password;
     	
     	if(!g.is_open()){
     		
     		cout<<"Wrong Username and password!";
     	}
     	cout<<"\n";
     	cout<<"Enter a Username:";cin>>Username;
         cout<<"Enter a password:";cin>>Password;
     	g<<Username;/*it says Whatever the Username is put into g (ie.(Registration.txt))*/
     	g<<"\n";/*it adds newline in g(Registration.txt)*/
     	g<<Password;/*it says Whatever the Password is  put into g (ie.(Registration.txt))*/  	
     	cout<<"\nRegister Successfully!!";
     	g.close();  /*always make sure you close the file, or else you might end up with some nasty stuff in the memory*/	 	
		cout<<"\n__________________________________\n";
}

int login(){
    	cout<<"__________Login___________\n";
    
    string Username,Password,UUsername,UPassword;
    
    
    ifstream f("Registration.txt");
    
    if(!f.is_open()){
    	
    	cout<<"File could not find!!\n";
    	return 0;
    }
    
	f>>Username;/*it reads the f(i.e Registration.txt)and puts in Username Variable*/
	f>>Password;/*it reads the next line of  f(i.e Registration.txt)and puts in Password Variable*/
	f.close();
	
	while(1){
	cout<<"\nUsername:";cin>>UUsername;
	cout<<"__________________________";
	cout<<"\nPassword:";cin>>UPassword;
	cout<<"__________________________\n";
	
	if(Username==UUsername&&Password==UPassword)/*We have to check both Username and password if both match of registered username and password then login will be successfull!!*/
	{
		cout<<"\nLogin Successfully!!"<<UUsername;
		break;/*once login success then we have to break the loop!*/
	}
	cout<<"incorrect Username and password!!\n";/*if any of the detail entered wrong then this message will be pop*/
	}
}

void UI(){
	cout<<"\n       \t\t1.Log in\n";
	cout<<"\n\n____________________OR________________________\n\n";
    cout<<"\n       "<<"\t\t2.Regiser"<<"         ";
    cout<<"\n\n____________________OR________________________\n\n";
    cout<<"\n       "<<"\t\t3.Exit"<<"         ";
    
}

int main(){	
	UI();
	int choice;
	while(1){
    cout<<"\n\nEnter choice:";
    cin>>choice;
     
     if(choice == 1){
          	login();
          	return 0;
     }
     else if(choice == 2){
     		registration();
     }
     else if(choice ==3){
     	return 0;
	}
	return 0;
	}
}
