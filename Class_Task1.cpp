#include<bits/stdc++.h>
using namespace std;
// 22A91A12A1
class Student {
	public:
		string name;
		int marks;
		
		Students(string name, int marks) {
			this->name = name;
			this->marks = marks;
		}
		
		void display() {
			cout << name << " " << marks << endl;
		}
};

int main() {
	Student s1("Harsha", 100);
	s1.display();
	return 0;
}
