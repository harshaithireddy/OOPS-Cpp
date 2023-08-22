#include <bits/stdc++.h>
using namespace std;

// 22A91A12A1 
class Student {
	private:
		string name;
		int marks;

	public:
        void setDetails(string n, int m) {
            name = n;
            marks = m;
        }

		void getDetails() {
			cout << "Marks of " << name << " is: " << marks << endl;
		}
};

int main() {
    Student s1, s2;
    s1.setDetails("Harsha", 100);
    s1.getDetails();

    s2.setDetails("Ayyappa", 99);
    s2.getDetails();

    return 0;
}
