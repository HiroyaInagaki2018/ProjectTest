#include<stdio.h>
#include<string>

#include"Student.h"
#include"Inagaki.h"

Student m_student;
Inagaki m_name;

int main()
{
	//getchar();
	
	

	m_student.Render();
	m_name.Render();

	std::system("pause");
	return 0;
}