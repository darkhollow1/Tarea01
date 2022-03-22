#include <iostream>
#include <cmath>

int main(void) 
{
    double result = 0;
        int i = 0; //ordenador de suma de inversos de numeros impares n donde 10 < n < 100
        int NMAX = 99;
        int n = 0;
    for( n = 11; n <= NMAX ; n=n+2){ // sucesion de numeros impares n entre 10 y 100
    result = result +  1.0/n; // serie de la suma de los inversos de numeros impares entre 10 y 100
    i=i+1;
        std::cout   << i << "\t" << result << "\n";
    }
    return 0;
}
