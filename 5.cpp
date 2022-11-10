// №4 Ввести два числа, вывести < если первое число меньше другого, > если первое больше другого, = если числа равны. Тут использовать if()

#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin >> a>>b;
	if (a < b) {
		cout << a << "<" << b;
}
	if (a == b) {
		cout << a << "=" << b;
	}
	if (a > b) {
		cout << a << ">" << b;
	}

}

