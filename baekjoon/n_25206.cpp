#include <iostream>
#include <map>

int main()
{
    std::map<std::string, double> gradeMap;
    gradeMap["A+"] = 4.5;
    gradeMap["A0"] = 4.0;
    gradeMap["B+"] = 3.5;
    gradeMap["B0"] = 3.0;
    gradeMap["C+"] = 2.5;
    gradeMap["C0"] = 2.0;
    gradeMap["D+"] = 1.5;
    gradeMap["D0"] = 1.0;
    gradeMap["F"]  = 0.0;

    double result = 0;
    double credit_count = 0;
    std::string subject_name, grade;
    float credit;


    for (int16_t i = 0; i < 20; ++i)
    {
        std::cin >> subject_name >> credit >> grade;

        if (grade == "P")
            continue;

        credit_count += credit;
        if (grade != "F")
            result += (int)credit * gradeMap[grade];
    }
    std::cout << result / credit_count;
    return 0;
}