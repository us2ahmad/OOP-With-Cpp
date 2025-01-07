#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"

using namespace std;

int main()
{
    clsEmployee Employee1(10, "Ahmad", "Yassin","A@a.com", "8298982", "CEO", "TECH", 5000);

    Employee1.Print();

    system("pause>0");
    return 0;
}