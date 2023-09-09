#include <stdio.h>
#include <iostream>
#include <vector>

int main( )
{
    int qtd_reinos{ 0 };
    std::vector< std::vector< int > > coordenadas;
    int maior_x{ -1 };
    int maior_y{ -1 };
    int menor_x{ INT_MAX };
    int menor_y{ INT_MAX };

    std::cin >> qtd_reinos;

    for ( int i{ 0 }; i < qtd_reinos; i++ )
    {
        int x{ 0 };
        int y{ 0 };
        std::vector< int > coordenada;
        
        std::cin >> x;
        std::cin >> y;
        coordenada.push_back( x );
        coordenada.push_back( y );

        coordenadas.push_back( coordenada );

        if ( menor_x > x )
            menor_x = x;
        if ( menor_y > y )
            menor_y = y;
        if ( maior_x < x )
            maior_x = x;
        if ( maior_y < y )
            maior_y = y;
    }

    std::string output{""};
    for ( int i{ 0 }; i < qtd_reinos; i++)
    {
        if( ( coordenadas[ i ][ 0 ] >= maior_x || coordenadas[ i ][ 0 ] <= menor_x ) || ( coordenadas[ i ][ 1 ] >= maior_y || coordenadas[ i ][ 1 ] <= menor_y ) )
            output += std::to_string( i + 1 ) + " ";
    }

    std::cout << output;
    return 0;
}