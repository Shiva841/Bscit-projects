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
			
			if (pos != -1) //if no matches returns -1
			{
				cout << "Found! at "<<pos<<endl;
				break;
			}
		}
		cout<<"Not Found";
	}

	system("pause");
	return 0;
}
