#include <iostream> 
#include <vector> 

#define pi 3.14
#define g 10

int main (int argc, char* argv[])
{
    float Luas;
    float Gaya;
    int massa = 10;

    Luas = pi*10*10;

    Gaya = massa*g;

    std::cout << "Luas Lingkaran =  " << Luas << std::endl;

    std::cout << "Gaya =  " << Gaya << std::endl;

    getchar();
    
    return(0);

}
