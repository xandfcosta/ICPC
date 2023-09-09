#include <stdio.h>
#include <iostream>
#include <vector>

int main( )
{
    int qtd_digitos;
    std::vector< int > sequencia_biaria;
    int qtd_uns{ 0 };
    int qtd_subvetores{ 0 };

    std::cin >> qtd_digitos;

    for ( int i{ 0 }; i < qtd_digitos; i++ )
    {   
        int num;
        std::cin >> num;
        sequencia_biaria.push_back( num );

        if ( num == 1 )
            qtd_uns++;

        if ( qtd_uns % 2 == 1 )
            qtd_subvetores++;
    }

    for ( int i{ 1 }; i < qtd_digitos; i++ )
    {
        qtd_uns = 0;

        for ( int j{ i }; j < qtd_digitos; j++ )
        {
            if ( sequencia_biaria[ j ] == 1 )
                qtd_uns++;

            if ( qtd_uns % 2 == 1 )
                qtd_subvetores++;
        }
    }

    std::cout << qtd_subvetores;

    return 0;
}