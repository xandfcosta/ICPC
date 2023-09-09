#include <stdio.h>
#include <iostream>
#include <vector>

int main( )
{
    int grau_polinomio;
    int k;
    std::vector< int > t;
    std::vector< int > p;
    std::vector< int > q;

    std::cin >> grau_polinomio;
    std::cin >> k;

    for ( int i{ 0 }; i <= grau_polinomio; i++ )
    {
        int num;
        std::cin >> num;
        t.push_back( num ); 
    }

    for ( int i{ 0 }; i <= grau_polinomio; i++ )
    {
        int num;
        std::cin >> num;
        p.push_back( num ); 
    }

    for ( int i{ 0 }; i <= grau_polinomio; i++ )
    {
        if ( i == grau_polinomio )
            q.push_back( p[ i ] + t[ i ] );

        int soma = p[ i ] + ( p[ i + 1 ] * ( -k ) ) + t[ i ] + ( t[ i + 1 ] * k );
        q.push_back( soma );
    }

    std::string output{ "" };

    for ( int i{ 0 }; i <= grau_polinomio; i++ )
        output += std::to_string( q[ i ] ) + " ";

    std::cout << output;

    return 0;
}