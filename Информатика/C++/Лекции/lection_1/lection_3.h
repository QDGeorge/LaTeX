Адреса и указатели
void count(int n)
{
	int k = 1;
	while (k <= n)
	{
		cout << k << " ";
		k++;
	}
}
int k2 = 0; // глобальная переменная
void count2()
{
	k2++;
	cout << k2 << " ";
}
void count3()
{
	static k3 = 0;
	cout << k3++ << " ";
}
int main()
{
	count(5);
}
int* p = &x // указатель - переменная адресного типа