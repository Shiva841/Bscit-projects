#include <iostream>

using namespace std;

void towerofhanoi(int n, char fromrod, char torod, char aux)
{
	if (n == 1)
	{
		cout << "Move Disk 1 "
			 << "from " << fromrod << " to " << torod << endl;

		return;
	}
	towerofhanoi(n - 1, fromrod, aux, torod);

	cout << "Move Disk " << n << " from " << fromrod << " to " << torod << endl;

	towerofhanoi(n - 1, aux, torod, fromrod);
}

int main(int argc, char *argv[])
{
	int n;
	cout << "Enter number of disks:" << endl;
	cin >> n;

	towerofhanoi(n, 'A', 'C', 'B');

	return 0;
}