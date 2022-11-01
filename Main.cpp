// шаблон
#include<iostream>
#include<cmath>
#include<iostream>
using namespace std;

#if 3 < 10
#define PI 3.14
#define MSG "Hello world!"
#endif
#define forever while(true)
#define begin {
#define end }

#define sum(a, b) (a + b)
#define crtarr(t, n, s) t * n = new t[s]

#define ctrmx(t, n, s1, s2) t ** n = new t * [s1];\
for (int i = 0; i < s1; i++)\
n[i] = new t[s2]
#if 1 == 2
void hi() {
	cout << "Hello!\n";
}
#elif 2 == 2
void hi() {
	cout << "WOW!\n";
}
#else
void hi() {
	cout << "Bye!\n";
}
#endif

#ifdef sum
const int K = 10;
#else 
const int K = 11;
#error "ошибка! sum должно существовать."
#endif

#define print(v) cout << #v << " = " << v << '\n';// оператор превращения в строку

// оператор конкатинации кода
#define show(a, b) a##b

// встроенные объекты препроцессора


int main() begin
	setlocale(LC_ALL, "Russian");
	int n = 1, m = 2;

	print(n);
	print(m);

	int xy = 10;
	cout << show(x, y) << '\n';


	hi();

	cout << __LINE__ << endl;// 63

	cout << __FILE__ << endl;
	
	string date = __DATE__;
	cout << date << endl;

	// константы препроцессора
	/*cout << "PI = " << PI << '\n';
#undef PI // освобождает переменную PI

	cout << MSG << '\n';*/

	// програмные конструкции
	/*n = 0;
	forever{ cout << '.';
	n++;
	if (n >= 5)
		break;
	end

		cout << endl;*/

	// Макросы
	/*cout << sum(1, 5.7) << '\n';// 6.7
	crtarr(int, px, 5);
	px[0] = 1;
	delete[]px;

	ctrmx(int, mat, 5, 4);
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 4; x++) {
			mat[y][x] = y * x + 1;
			cout << mat[y][x] << '\t';
		}
		cout << '\n';
	}
	for (int i = 0; i < 4; i++)
		delete[]mat[i];
	delete[]mat;

	/*int** mx = int* [10];
	for (int i = 0; i < 10; i++)
		mx[i] = new int[7];*/

	return 0;
}