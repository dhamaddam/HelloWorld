#include <iostream> 
#include <stdexcept>

int main(){
    float no1 = 0 , no2 = 0;
    int inc ;

    std::cout << "Pembagian untuk Menggunakan throw " << std::endl;
    std::cout << "Konsep Penerapan invalid_argument pada C++" << std::endl;
    std::cout << "****************************************" << std::endl;
 

    for (inc = 1; inc < 3; inc++) { //banyak proses yang akan diualang menjadi 2 kali

        std::cout << "Berikan angka untuk pembilang = " << std::endl;
        std::cin >> no1 ;
        getchar();

        std::cout << "Berikan angka untuk penyebut = " << std::endl;
        std::cin >> no2 ;
        getchar();

        try {
            if (no2 == 0){
                 throw std::invalid_argument( "Tidak boleh membagi dengan nilai kosong" );
            }
            else {
                if ( no1 < 0){
                    throw ("Angka haruslah positif nilainya \n");
                }
                else {
                    std::cout << no1 << "/" << no2 << "=" << no1/no2  << std::endl ; 
                }
            }
        }
        catch (const char * pesan){
            std::cout << pesan << std::endl ;
        }
        
    }
    std::cout << "Selesai" << std::endl ;
    return (0);
}
