#include<iostream>
#include<cctype>
using namespace std;

class Strong_Password{         //data should be private
	int len;           //to check the length of a string
	int U ,L,D,C;  //to get status of each condition
	public:
	
	Strong_Password(){//constructor to initialize variable 
		U = 0;
		L = 0;
		D = 0;	
		C = 0;	
	}	
   bool SPchecker(string text){    //defined a function for checking the Password is secure or not
    len = text.length();//length of a String
        
    	for(int i=0;i<len;i++){//loop until string is available
    		if(isupper(text[i])){ U = 1;}//to check uppercase should be present
    		else if(islower(text[i])){L = 1;}//to check lowercase should be present
    		    else if(isdigit(text[i])){D = 1;}//to check whether the digit is present
    		       else if(text[i] == '@' || text[i]=='#'){C =1;}//special characters should contain
    	}
    	if(U && L && D && C && (len>=10))//if all the condition is satisfied then we have to print Yes password is strong
    	{return true;}else{return false;}					   
  }
  
  void UI(){
  	cout<<"Password constraints:"<<endl;
  	cout<<"1)Password should contain atleast one Uppercase [A - Z]"<<endl;
  	cout<<"2)Password should contain atleast one Lowercase [a - z]"<<endl;
  	cout<<"3)Password should contain atleast one Digit [0 -9]"<<endl;
  	cout<<"4)Password should contain atleast one Special Character ['#','@']"<<endl;
  	cout<<"5)Password should be equal or greater than 10 character"<<endl;
  	  	
  }
  
  void Status(int S){
  	if(S == 1){//if all condition is satisfied then it will show strong password
		cout<<"Strong Password"<<endl;
	}else if(S == 0){//if any of the condition is false then it will display the weak password
		cout<<"Weak Password"<<endl;
	} 	
  }
  
  string input(){
   string Text;
	cout<<"\nEnter a password:"<<endl;
	cin>>Text;
	return Text;
  }
};


int main(int argc, char *argv[])
{
	Strong_Password e; //creating the instance e
	e.UI();   //Display the constraints to User
    e.Status(e.SPchecker(e.input()));/*first ask input then it will check is all condition is satisfied or not then atlast it will show status is it strong or weak password*/
    
    return 0; //return 0 if program successfully executed.
}
