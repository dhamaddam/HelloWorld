#include <iostream>
int main()
{
    int x,y ;
    x = 1;
    y = 0;

    std::cout << "" << std::endl;
    std::cout << "Operator Penambahan dan Pengurang" << std::endl;
    std::cout << "__________________________________" << std::endl;
    std::cout << "Operator Di belakang Variabel" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Nilai x = " << x << "\t" << "y = " << y << std::endl;
    std::cout << "Nilai x = " << x++ << "\t" << "y = " << y-- << std::endl;
    std::cout << "Nilai x = " << x++ << "\t" << "y = " << y-- << std::endl;   
    std::cout << "" << std::endl;

    std::cout << "Operator Di depan Variabel" << std::endl;
    std::cout << "" << std::endl;

    std::cout << "Nilai x = " << x << "\t" << "y = " << y << std::endl;
    std::cout << "Nilai x = " << ++x << "\t" << "y = " << --y << std::endl;
    std::cout << "Nilai x = " << ++x << "\t" << "y = " << --y << std::endl;   
    std::cout << "" << std::endl;  
}
