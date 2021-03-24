#include<iostream>
using namespace std;

class Security{
	string EncryptedText,Text;
	int n,choice;
	
	public:	
	int Encryption(string Text){	
	          
	         n = Text.length();                //Taking length of a string	
	 
	 	for(int i =0;i<n;i++){             //Encryption
		EncryptedText[i] = char(Text[i]+2);//Type-//cast every ascii code into a character(before that //we are adding 2 to every character )	
		}	  
	   cout<<"Your key :";			
		for(int i =0;i<n;i++){
		cout<<EncryptedText[i];          //Displaying //Encrypted Code	
		}
		cout<<endl<<endl;
	}
	
	
	int Decryption(string Text){
		cout<<"Original Data :";	
		n = Text.length();                 //Taking length of a string
		for(int i =0;i<n;i++){             //Decryption Starts...
		EncryptedText[i] = char(Text[i]-2);//again Type-casting by subtracting 2 from each character (which is in the integer form right now)	
		}
		for(int i =0;i<n;i++){
		cout<<EncryptedText[i];	
		}
			cout<<endl<<endl;
	}
	
	string Input(){              //input for Encryption
	cout<<"Encrypting!!!"<<endl;
	cout<<"Enter a Text:";
	cin>>Text;
	return Text;
	}
	
	string Input2(){             //input for Decryption
	cout<<"Decrypting!!!"<<endl;
	cout<<"Enter your Key:";
	cin>>Text;
	return Text;
	}
	int UI(){                     //This should be display the User
	cout<<"What you want to do:"<<endl;
	cout<<"1.Encryption!!!!"<<endl;
	cout<<"2.Decryption!!!"<<endl;
	cout<<"3.Quit!!!"<<endl;
	cin>>choice;	             //Here we are going to ask what you want to do
	return choice;              //return the choice as a integer to where the function is called
		
	}
	
};

int main(int argc, char *argv[])
{
	Security e;
	while(1){                      //loop will run until user return 0 to it
	switch(e.UI()){                //UI will return either 1 or 2 or 3
	case 1:                        //if return 1 then do encryption
	    cout<<endl<<endl;
	    e.Encryption(e.Input());   //Text is input
	    break;                     //break over here
	case 2:                        //if returns 2 then do decryption
	   cout<<endl<<endl;
	    e.Decryption(e.Input2());  //Text is input
	    break;                    //break over here
	case 3:
	    return 0;
	    break;
	default:                       //incase returns anything else
	     cout<<"\nInvalid Input";
	}
	}
	return 0;                      //return 0 to os
	
}
