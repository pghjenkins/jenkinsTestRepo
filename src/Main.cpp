#include<iostream>
#include"core/dumcore.h"

int main(){
    dumcore mycore;
    std::cout << "dumvar member of mycore = " << mycore.dumvar << std::endl;

    return 0;
}
