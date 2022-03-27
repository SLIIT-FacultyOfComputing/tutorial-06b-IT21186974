#include "Student.h"
#include <iostream>
#include <cstring>


// Assign studentId and name
void student::assignDetails(int stdId, char Name[]) {
  studentId=stdId;
  strcpy(name,Name);
  
}

// Display StudentId and Name
void student::display() {
  std::cout << "Student ID  : " << studentId << std::endl;
  std::cout << "Student Name  : " << name << std::endl;
}

