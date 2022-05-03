// This program will output the perimeter and area
// of the rectangle with a given width and length
// David Bates
// April 11, 2022
#include <iostream>
using namespace std;

int main() {
    int lenRectangle = 8;
    int widRectangle = 3;
    
    // Definition of area for rectangle
    cout << "The area of a rectangle is the product of its length & width.\n";
    // Definition of perimeter for rectangle
    cout << "The perimeter of a rectangle is the sum of all four sides.\n"; 
    cout << endl;
    
    // Computes area of a rectangle
    int areaRectangle = lenRectangle * widRectangle;
    // Computes perimeter of a rectangle
    int perimRectangle = (2 * lenRectangle) + (2 * widRectangle);

    // Description & output for the area of the rectangle
    cout << "If the length of the rectangle is " << lenRectangle;
    cout << " and the width is " << widRectangle << ":\n";
    cout << "The area of the rectangle is " << areaRectangle << ".\n";

    // Output for the perimter of the rectangle
    cout << "The perimeter of the rectangle is " << perimRectangle << ".\n";
    cout << endl;
    
    return 0;
}
/*
The area of a rectangle is the product of its length & width.
The perimeter of a rectangle is the sum of all four sides.

If the length of the rectangle is 8 and the width is 3:
The area of the rectangle is 24.
The perimeter of the rectangle is 22.

*/
