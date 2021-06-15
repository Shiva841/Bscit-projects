#include <iostream>  
#include <cstring>  
using namespace std;  
//strcmp() is used to compare two strings character by character it will return 3 possible value
/**
      a) 0 = it will return 0 if both string will be same
      b) negative value = it will return negative value first string has less ascii value compare to second string.
      c)positive value = it will return positive value first string has greater ascii value compare to second string.
*/
int main ()  
{  
  char key[] = "mango";  
  char User_Ans[50];  
  
  do {  
     cout<<"What is my favourite fruit? ";  
     cin>>User_Ans;  
  } while (strcmp (key,User_Ans) != 0);  
  
 cout<<"Answer is correct!!"<<endl;  
  return 0;  
}  