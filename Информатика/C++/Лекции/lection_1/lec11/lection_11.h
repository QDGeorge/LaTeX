Наследование и реализация
class Base {
	public:
		void b_pub() {}
	private:
		void b_priv() {}
	protected:
		void b_prot() {}
};

class Deriative : public Base {
	public:
	void d_pub { b_pub(); b_prot();}
}

class Student
{protected:
	int age;
	std::string name;	
public:
	Student(int a, std::string x) {age = a; name x}
	void agging() {
		age++;
		std::cout << "Ура";
	}
	int get_age() const {return age} 
};

class ElserStudent : public Student {
	public:
	ElderStudent(int x, std::string s, int group_id):Student(x, s)
}