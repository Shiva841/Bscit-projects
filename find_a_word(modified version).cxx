#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream input;
	size_t pos;
	string line;
    string word;
    cout<<"Enter a word:";
    cin>>word;
	input.open("Shiva.txt");

	if (input.is_open())
	{
		while (getline(input, line))
		{
			pos = line.find(word);
			
			if (pos != -1) // string::npos is returned if string is not found
			{
				cout << "Found! at "<<pos;
				return 0;
				break;
			}
		}
		cout<<"Not Found";
	}

	system("pause");
	return 0;
}