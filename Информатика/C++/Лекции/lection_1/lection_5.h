Строки: С-строки, ANSI-строки, С++ строки
Конкатинация: #include <cstring>
int main() {
	char s1[10000], s2[1000];
	s1[0] = 0;
	cin.getline(s2, 1000);
	strcat(s1, s2);
}

while (cin >>s) {
	cout << s << "*";
}
Файловые потоки
#include <fstream>

void reas_array(int *A, int A_size, string f_name) {
	if stream fin(f_name);
	for (int k = 0; k < A_size; k++)
		fin >> A[k];
}
Строковые потоки
#include <sstream>
{
	std::stringstream sout;
	sout << "x = " << 7 << "." << true << std::endl;
	string s;
	s = sout.str();
}
Односвязный список
#include <iostream>
#include <string>
 
 typedef std::string DataType;
 
struct tNode(DataType data; tNode* next;)

tNode * indesert_node(tNode)

int main() {
	tNode *p_begin = nullptr;
	
	
	p = new tNode;
	p->data = "World";
	p->next = p_begin;
	p_begin = p;
	
	p = p_begin;
	while (p) {
		p = p->next;
	}
	
	return 0;
}

















