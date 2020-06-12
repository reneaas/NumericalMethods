#include "solarsystem.hpp"
#include <cmath>
#include <iostream>

using namespace std;


int main(int argc, char const *argv[]) {
    int number_of_objects = 5;
    double total_time = 1;
    double stepsize = 0.001;

    SolarSystem my_system;
    my_system.Initialize(number_of_objects, stepsize);
    my_system.ReadInitialData();
    my_system.Solve(total_time);
    cout << "Main program completed..." << endl;
    return 0;
}
