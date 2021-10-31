//WAP to create print or display Student information containing in Student class by using pointers to object.
#include<bits/stdc++.h>
using namespace std;
class Test
{
private:
	string name;
	char sec;
	int rollno;
	public:
	void setX (string name,char sec,int rollno )
	{
		
		this->name = name;
		this->sec = sec;
		this->rollno = rollno;
	}
	void print() { cout << "Name,Section,Roll Number: " << name<<" "<<sec<<" "<<rollno<<" " << endl; }
};

int main()
{
Test obj;
int x = 20;
string n="Kunal ";
char c='B';
int roll=33;
obj.setX(n,c,roll);
obj.print();
return 0;
}
