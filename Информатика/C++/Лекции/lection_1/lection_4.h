Динамические массивы
double A[100];
A имеет типа const double*
double* p = A; или p = &A[5], но тогда лучше p = A + 5
double* p = new double(5); // new возвращает указатель
double* p = new double[50];
for (int k = 0; k < 50; k++) {
	p[k] = k*k;
}
delete[] p;
...

#include <iostream>
#include <string>;

struct Student{
	int8_t age;
	int16_t group;
	std::string name;
	
};

int main() {
	Student vasya = {17, 649, "Vasily Ivanov"};
	Student masha = {18, 649, "Maria Vasilyeva"};
	Student *p_student = nullptr;
	
	p_student = &vasya;
	
	std::cout << vasya.name << vasya.age << vasya.group << std::endl;
	std::cout << masha.name << masha.age << masha.group << std::endl;
	std::cout << p->name << p->age << p->group << std::endl;
	
	student_print(&vasya);
	student_print(&masha);
	student_print(p_student)
	
	Student *p_student = new Student[10];
	
	
	
	
	
	
	
	
	return 0;
}

void student_print(Student *x) {
	std::cout << x->name << " " << int(x->age) << " " << x->group << std::endl;
}


















