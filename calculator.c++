#include <iostream > 
using namespace std;

void calcalut()
{
	double x, x1, ruislt;
	char ch;
	cout << "this porgram is culcolutr " << endl;
	do {
		cout << " enter first number " << endl;
		cin >> x;
		cout << "enter second number " << endl;
		cin >> x1;

		cout << "enter opraetion you want " << endl;
		cin >> ch;
		if (ch == '-')
			ruislt = x - x1;
		if (ch == '+')
			ruislt = x + x1;
		if (ch == '/')
			ruislt = x / x1;
		if (ch == '*')
			ruislt = x * x1;
		cout << ruislt << endl;
	} while (ch != 'e');
}

int main()
{
	void(*ptr)();
	ptr = &calcalut;
	ptr();
	system("pause");
	return 0;

}
