#include <iostream>
#include <math.h>

// Rapertures v0.66 Beta by ReznoR

int main()
{
    float x;
    x = 1;

    std::cout << "Default lens aperture values: \n" << std::endl;

    std::cout << "f / " << x/sqrt(2) << std::endl; // f=0.7
    std::cout << "f / " << x << std::endl; // f=1.0
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=1.4
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=2.0
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=2.8
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=4
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=5.6
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=8
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=11
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=16
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=22
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=32
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=45
    x = x*(sqrt(2));
    std::cout << "f / " << x << std::endl; // f=64
    std::cout << "\n";

    // 1/3 stop

    std::cout << "1/3 stop values: \n" << std::endl;

    std::cout << "f / " << pow(2,0) << std::endl; // f=1.0
    std::cout << "f / " << pow(2,0.16667) << std::endl; // f=1.1
    std::cout << "f / " << pow(2,0.33333) << std::endl; // f=1.3
    std::cout << "\n";
    std::cout << "f / " << pow(2,0.5) << std::endl; // f=1.4
    std::cout << "f / " << pow(2,0.66667) << std::endl; // f=1.6
    std::cout << "f / " << pow(2,0.83333) << std::endl; // f=1.8
    std::cout << "\n";
    std::cout << "f / " << pow(2,1) << std::endl; // f=2.0
    std::cout << "f / " << pow(2,1.16667) << std::endl; // f=2.2
    std::cout << "f / " << pow(2,1.33333) << std::endl; // f=2.5
    std::cout << "\n";
    std::cout << "f / " << pow(2,1.5) << std::endl; // f=2.8
    std::cout << "f / " << pow(2,1.66667) << std::endl; // f=3.2
    std::cout << "f / " << pow(2,1.83333) << std::endl; // f=3.5
    std::cout << "\n";
    std::cout << "f / " << pow(2,2) << std::endl; // f=4.0
    std::cout << "f / " << pow(2,2.16667) << std::endl; // f=4.5
    std::cout << "f / " << pow(2,2.33333) << std::endl; // f=5.0
    std::cout << "\n";
    std::cout << "f / " << pow(2,2.5) << std::endl; // f=5.6
    std::cout << "f / " << pow(2,2.66667) << std::endl; // f=6.3
    std::cout << "f / " << pow(2,2.83333) << std::endl; // f=7.1
    std::cout << "\n";
    std::cout << "f / " << pow(2,3) << std::endl; // f=8.0
    std::cout << "f / " << pow(2,3.16667) << std::endl; // f=9.0
    std::cout << "f / " << pow(2,3.33333) << std::endl; // f=10
    std::cout << "\n";
    std::cout << "f / " << pow(2,3.5) << std::endl; // f=11
    std::cout << "f / " << pow(2,3.66667) << std::endl; // f=13
    std::cout << "f / " << pow(2,3.83333) << std::endl; // f=14
    std::cout << "\n";
    std::cout << "f / " << pow(2,4) << std::endl; // f=16
    std::cout << "f / " << pow(2,4.16667) << std::endl; // f=18
    std::cout << "f / " << pow(2,4.33333) << std::endl; // f=20
    std::cout << "\n";
    std::cout << "f / " << pow(2,4.5) << std::endl; // f=22
    std::cout << "f / " << pow(2,4.66667) << std::endl; // f=25
    std::cout << "f / " << pow(2,4.83333) << std::endl; // f=28
    std::cout << "\n";
    std::cout << "f / " << pow(2,5) << std::endl; // f=32
    std::cout << "f / " << pow(2,5.16667) << std::endl; // f=36
    std::cout << "f / " << pow(2,5.33333) << std::endl; // f=40
    std::cout << "\n";
    std::cout << "f / " << pow(2,5.5) << std::endl; // f=45
    std::cout << "f / " << pow(2,5.66667) << std::endl; // f=50
    std::cout << "f / " << pow(2,5.83333) << std::endl; // f=57
    std::cout << "f / " << pow(2,6) << std::endl; // f=64
    std::cout << "\n";

    // 1/2 stop

    std::cout << "\n";
    std::cout << "1/2 stop values: \n" << std::endl;

    std::cout << "f / " << pow(2,0) << std::endl; //f=1.0
    std::cout << "f / " << pow(2,0.25) << std::endl; // f=1.2
    std::cout << "\n";
    std::cout << "f / " << pow(2,0.5) << std::endl; // f=1.4
    std::cout << "f / " << pow(2,0.75) << std::endl; // f=1.7
    std::cout << "\n";
    std::cout << "f / " << pow(2,1) << std::endl; // f=2.0
    std::cout << "f / " << pow(2,1.25) << std::endl; // f=2.4
    std::cout << "\n";
    std::cout << "f / " << pow(2,1.5) << std::endl; // f=2.8
    std::cout << "f / " << pow(2,1.75) << std::endl; // f=3.4
    std::cout << "\n";
    std::cout << "f / " << pow(2,2) << std::endl; // f=4.0
    std::cout << "f / " << pow(2,2.25) << std::endl; // f=4.8
    std::cout << "\n";
    std::cout << "f / " << pow(2,2.5) << std::endl; // f=5.6
    std::cout << "f / " << pow(2,2.75) << std::endl; // f=6.7
    std::cout << "\n";
    std::cout << "f / " << pow(2,3) << std::endl; // f=8.0
    std::cout << "f / " << pow(2,3.25) << std::endl; // f=9.5
    std::cout << "\n";
    std::cout << "f / " << pow(2,3.5) << std::endl; // f=11
    std::cout << "f / " << pow(2,3.75) << std::endl; // f=13.5
    std::cout << "\n";
    std::cout << "f / " << pow(2,4) << std::endl; // f=16
    std::cout << "f / " << pow(2,4.25) << std::endl; // f=19
    std::cout << "\n";
    std::cout << "f / " << pow(2,4.5) << std::endl; // f=22
    std::cout << "f / " << pow(2,4.75) << std::endl; // f=27
    std::cout << "\n";
    std::cout << "f / " << pow(2,5) << std::endl; // f=32
    std::cout << "f / " << pow(2,5.25) << std::endl; // f=38
    std::cout << "\n";
    std::cout << "f / " << pow(2,5.5) << std::endl; // f=45
    std::cout << "f / " << pow(2,5.75) << std::endl; // f=54
    std::cout << "f / " << pow(2,6) << std::endl; // f=64
    std::cout << "\n";

    std::string enter;
    std::cout << "Press enter to close..." << std::endl;
    std::getline(std::cin, enter);
    return 0;
}
