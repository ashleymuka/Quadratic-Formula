
//Description: Calculate roots of a quadratic equation

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    const int WIDTH = 5;
    
    double a;
    double b;
    double c;
    
    double root1;
    double root2;
    double discriminant;
    
    int numRoots = 0;
    
    double x_vertex = 0;
    double y_vertex;
    
    cin >> a >> b >> c;
    
    discriminant = b* b - 4 * a * c;
    if (discriminant == 0){
        numRoots = 1;
    }
    if (discriminant > 1){
        numRoots = 2;
    }
    if(numRoots > 0){
        root1 = (-b - sqrt(discriminant))/(2*a);
        root2 = (-b + sqrt(discriminant))/(2*a);
        if (root1 == -0) root1 = 0;
        if (root2 == -0) root2 = 0;
    }
    
    if (b != 0){
        x_vertex = -b/(2*a);
    }
    y_vertex = a * pow(x_vertex,2) + b * x_vertex + c;
    
    
    cout << fixed << setprecision(2);
    
    if (numRoots == 0){
        cout << "NO REAL ROOTS";
    }
    else {
        cout << setw(WIDTH) << root1;
        if (numRoots > 1){
            cout << setw(WIDTH) << root2;
        }
    }

    cout << " (" << x_vertex << "," << y_vertex << ")" << endl;
    
    return 0;
}
