#include <iostream>
int main() {

    int marks_sub1 = 90;
    int marks_sub2 = 91;
    int marks_sub3 = 92;
    int marks_sub4 = 93;
    int marks_sub5 = 94;

    float percentage = (marks_sub1 + marks_sub2 + marks_sub3 + marks_sub4 + marks_sub5) / 5;

    std::cout << "The percentage = " << percentage << std::endl;

    return 0;
}