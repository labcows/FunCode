#include <iostream>

int n_9498(){
    int test_score;
    char grade;
    std::cin >> test_score;
    if (test_score >= 90)
        grade = 'A';
    else if (80 <= test_score && test_score < 90)
        grade = 'B';
    else if (70 <= test_score && test_score < 80)
        grade = 'C';
    else if (60 <= test_score && test_score < 70)
        grade = 'D';
    else
        grade = 'F';
    std::cout << grade;
    return 0;
}
