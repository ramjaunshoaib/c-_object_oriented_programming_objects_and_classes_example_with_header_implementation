//main.cpp
//shoaib ramjaun @ 2018
// learning classes and objects
#include <iostream>
#include <string>
#include "main.h"
using namespace std;
using namespace alpha;

int main(){
    shoaib object1;
    object1.getInfo(14, "Shoaib", 34.44424);
    object1.display();
    
    shoaib object2;
    object2.getInfo(13, "Samayya", 1200.89);
    object2.display();
    return 0;
}
