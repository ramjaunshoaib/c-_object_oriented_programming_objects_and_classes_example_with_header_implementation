//
//  implementation.cpp
//  c++ classes and objects
//
//  Created by shoaib ramjaun on 2018-08-03.
//  Copyright © 2018 shoaib ramjaun. All rights reserved.
//
#include <iostream>
#include <string>
#include "main.h"
using namespace std;
using namespace alpha;

void shoaib:: getInfo(int m_age, string m_name, double m_salary){
    age = m_age;
    name = m_name;
    salary = m_salary;
}
void shoaib:: display(){
    cout << "Name: " << name << endl << endl;
    cout << "Age: " << age <<endl << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Salary: $" << salary << endl <<endl;
 }
