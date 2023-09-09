#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>

int main( )
{
    std::string s;
    int k;
    std::vector< std::vector< char > > s_separado;

    std::cin >> s;
    std::cin >> k;

    int qtd_separacoes = std::tolower( s.length( ) / k );

    for ( int i{ 0 }; i < qtd_separacoes; i++ )
    {
        std::vector< char > separacao;
        s_separado.push_back( separacao );
    }

    for ( int i{ 0 }; i < qtd_separacoes; i++ )
        s_separado[ i % qtd_separacoes ].push_back( s[ i ] );

    for ( int i{ 0 }; i < k; i++ )
        std::sort( s_separado[ i ].begin( ), s_separado[ i ].end( ) );

    s = "";

    for ( int i{ 0 }; i < k; i++ )
    {
        for ( int j{ 0 }; j < qtd_separacoes; j++ )
        {
            s += s_separado[ i ][ j ];
            s += s_separado[ i ][ j ];
            s += s_separado[ i ][ j ];
            s += s_separado[ i ][ j ];
        }
    }

    std::cout << s;

    return 0;
}