#include<iostream>
#include<fstream>
using namespace std;

string find_a_word(string word){
	
	string Text;
	
	ifstream fin("Shiva.txt");
	
    if(!fin){     //if file is not found
    	cout<<"Unable to open this file\n";
    	return "File Not Found";
    }
    
	 while(getline(fin,Text,' ')){ //read a line until it encounters space(' ')
	 	if(Text == word){    //if a word matches with user entered word
	 		cout<<Text<<endl;  //then it will print that word
	 		return "found";  //returns a message found.
	 	}
	 }	 
	 
	 fin.close();	//file will close
	 
	return "Nothing Found!!";  // if it doesnt found it will returns a message Nothing Found.
}

int main(int argc, char *argv[])
{
	string word;
	cout<<"Enter a word!:";
	cin>>word;
	
	cout<<find_a_word(word);
	
	return 0;
}