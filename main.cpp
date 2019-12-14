#include <iostream>
#include <string>

void starfunction();
void createData();

struct product {
    int weight;
    double price;
    //string title;
} apple, banana, melon;




int main() {
    std::cout << "Hello, World!" << std::endl;
    starfunction ();


    apple.price = 10;
    std :: cout << "precio" << "\n" << apple.price;
   // std :: cout << apple.price;
    return 0;
}

void starfunction() {
    for  ( int  a = 1 ;  a <= 27 ;  a ++ )
        std :: cout << '*' ;
    std :: cout << "\n" ;
}


