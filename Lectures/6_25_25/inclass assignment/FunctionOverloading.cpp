#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


const double pi = M_PI;
double calculateArea(double radius); // Calculate are of a Circle pi * r^2
double calculateArea(double length, double width); // Calculate area of a Rectangle l*w
void logMessage(const std::string& message, const std::string& level = "INFO");

int main() {
    cout << "Area of a circle: "    << calculateArea(4) << endl;
    cout << "Area of a rectangle: " << calculateArea(4, 5) << endl;

    logMessage("User logged out");
    cout << endl;
    logMessage("File not found", "WARNING");
}

double calculateArea(double radius) {
    return pi * pow(radius, 2);
}

double calculateArea(double length, double width) {
    return length * width;
}

void logMessage(const std::string& message, const std::string& level) {
    cout << '[' << level << "]: " << message;
}
