#include <stdio.h>
#include <windows.h>
#include <string>
#include <iostream>

using namespace std;

int fTest(int age)
{
    age += 10;

    return age;
}


int main()
{
    printf("Hello World\n");

    std::string name = "wangzhiwei";
    int age = 30;

    printf("name: %s, age: %d", name.c_str(), age);
    age = fTest(age);

    printf("name: %s, age: %d", name, age);
    printf("name[%s]", name.c_str());

    system("pause");
    return 0;
}