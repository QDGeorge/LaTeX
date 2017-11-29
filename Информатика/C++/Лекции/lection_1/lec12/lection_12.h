Виртуальные методы
struct A {
	char x;
	void bar() {
		std::cout << "A";
	}
};

struct B:A {
	int y;
	void bar() {
		std::cout << "B";
	}
};

struct C:A {
	double z;
	void bar() {
		std::cout << "C";
	}
};

void foo(A* p) {
	p.bar;
}

A a;
B b;
C c;