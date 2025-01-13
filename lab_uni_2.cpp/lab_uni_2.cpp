#include <iostream>
#include <cmath>
using namespace std;

bool inside_area(double x, double y, double eps) {
    
    // y >= -1 
    // y <= 1 
    // x >= -2 and x <= 2
    
    return (y >= -1 - eps && x >= -1 - eps && x <= 1 + eps && y <= fabs(x) + eps);
}

int main() {
    
    double x, y;
    cout << "Input x: ";
    cin >> x;

    cout << "Input y: ";
    cin >> y;

    const double eps = 1e-8;
    cout << "--- Task #2 ---" << std::endl;

    if (inside_area(x, y, eps)) 
    {
        cout << "Point (" << x << ", " << y << ") inside area." << std::endl;
    }
    else 
    {
        cout << "Point (" << x << ", " << y << ") outside area." << std::endl;
    }

}

/*
--- Task #2 ---
Test 1:
input: x = 0, y = 0.5, eps = 1e-8
output: Point (0, 0.5) outside area

Test 2:
input: x = -2, y = -1, eps = 1e-8
output: Point (-2, -1) inside area

Test 3:
input: x = 3, y = 0, eps = 1e-8
output: Point (3, 0) outside area

Test 4:
input: x = 0, y = 1.1, eps = 1e-8
output: Point (0, 1.1) outside area

Test 5:
Input: x = 1, y = 0.5, eps = 1e-8
Output: Point (1, 0.5) inside area

Test 6:
Input: x = 2, y = 1, eps = 1e-8
Output: Point (2, 1) inside area

Test 7:
Input: x = 1.5, y = 1.5, eps = 1e-8
Output: Point (1.5, 1.5) outside area
*/


