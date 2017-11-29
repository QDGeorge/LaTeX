Шаблонные функции
Перегрузка функций (overload)
Полиморфизм - много разных функций с одним именем. Т.е. один интерфейс и много реализаций.
#include <iostream>
using namespace std

int8_t absolute(int_8t x) {
	return (x < 0) ? -x: x;
}

int16_t absolute(int_16t x) {
	return (x < 0) ? -x: x;
}
int32_t absolute(int_32t x) {
	return (x < 0) ? -x: x;
}
int64_t absolute(int_64t x) {
	return (x < 0) ? -x: x;
}
double absolute(double x) {
	return (x < 0.0) ? -x: x;
}
float absolute(float x) {
	return (x < 0.0) ? -x: x;
}

int main() {
	int8_t x8 = -1;
	int16_t x16 = 1;
	int32_t x32 = -1;
	int64_t x64 = -1;
	double xd = -1.1;
	float xf = -1.1;
	cout << absolute(x8) << endl;
	cout << absolute(x16) << endl;
	cout << absolute(x32) << endl;
	cout << absolute(x64) << endl;
	cout << absolute(xd) << endl;
	cout << absolute(xf) << endl;
	return 0;
}

1. Точное совпадение типов
2. Приведение методом повышения разрядности числа
3. Стандартное приведение типов
4. Пользовательское приведение типов
5. Эллипсис
void printf(char *s, ...)
////
template<typename T>

Односвязный список 2.0
template<typename DataType>
struct tNode{
	DataType data;
	tNode* next;
}










