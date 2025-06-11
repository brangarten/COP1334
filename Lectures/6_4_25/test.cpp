#include <iostream>
#include <chrono>

int main() {

    auto start = std::chrono::high_resolution_clock::now();

    int score;
    char grade = 'F';


    std::cout << "Enter Score \n> ";
    std::cin >> score;

    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    std::cout << "Grade: " << grade << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    auto difference = end - start;


    return 0;
}