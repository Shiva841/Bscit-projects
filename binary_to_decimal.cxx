#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t-->=0){
	string s;
	cin>>s;
		int result =0;
    int power2 =1;
	for(int i=s.size()-1;i>=0;i--){
		 int bd = s[i] -'0';
		 result = result + (bd * power2);
		 power2*=2;
	}
       cout<<result<<endl;
	}
}
