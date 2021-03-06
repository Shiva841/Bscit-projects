#include<iostream>
using namespace std; 
// A Function to generate a unique OTP everytime 
string generateOTP(int len) 
{ 
    string str = "0123456789"; 
    int n = str.length();//here we can also use n= 10
    // String to hold my OTP 
    string OTP;     
    for (int i=0; i<len; i++) {
        OTP.push_back(str[rand() % n]); 
        //here push_back () is used to add a character at the end of the string!
        //which is OTP will keep accepting a character until the loop terminate.
    }
    return(OTP); 
}   

int main() 
{ 
    // For different values each time we run the code 
     srand(time(0)); 
    // Declare the length of OTP 
    cout<<"How many digits of Otp you want:"<<endl;
    int len ;
    cin>>len;
    cout<<"Your OTP is - "<<generateOTP(len);
    return 0; 
} 
