// main.h
//  c++ classes and objects
//
//  Created by shoaib ramjaun on 2018-08-03.
//  Copyright © 2018 shoaib ramjaun. All rights reserved.
#ifndef namespace_main_h
#define namespace_main_h

#include <iostream>

#include <string>
using namespace std;
namespace alpha{
    class shoaib{
    private:
        int age;
        string name;
        double salary;
    public:
        void getInfo(int m_age, string m_name, double m_salary);
        void display();
    };
};

#endif
