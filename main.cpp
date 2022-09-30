#include <iostream>
using namespace std;

// Reading 
//#include "read_st_employee_info.h"

// Printing
#include "print_st_employee_info.h"

/*
    * Take info from user using struct and calling by ref.

    # Steps
        * Struct stEmployeeInfo{}; 
        * ReadstEmployeeInfo(){};
        * PrintstEmployeeInfo(){};
*/

int main(){

    // Reading
      stEmployeeInfo empInfo =  ReadStEmployeeInfo();
      
    // Printing
    PrintStEmployeeInfo("", empInfo,"");


    return 0;
}