struct Student {
	int age;
	std::string name;
	void init(int _age, const std::string& _name) {
		this->name = _name; // можно написать name=_name
		age = _age;
	}
	void aging() {
		age++;
		std::cout << name << ": Мне исполнилось" << age << std::endl;
	}
	void print() const { // const - не меняет атрибуты класса
		std::cout << name << "-" << age << "\n";
	}
	~Student() {
		std::cout << "отчислен:";
		print();
	}
}	

struct Stack{
	double* s;
	int allocated;
	int top;
	Stack(int maxsize=100) {
		s = new double[maxsize];
		allocated = maxsize;
		top = 0;		
	}
	~Stack() {
		delete[] s;
	}
	void push(double x) {
		if (top < allocated) {
			s[top++] = x;
		}		
	}
	double pop() {
		if (top == 0) {
			return -1;
		}
		return s[--top];
	}
}

int main() {
	Student a, b;
	a.init(17, std::string("Вася");
	b = a; // опасная операция, но она определена
	a.aging();
	a.print();
	b.print();
	
}