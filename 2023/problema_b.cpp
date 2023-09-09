#include <stdio.h>
#include <iostream>
#include <vector>

int main( )
{
    int n;
    std::vector< int > baralho;
    std::vector< int > esquerda{ 0 };
    std::vector< int > direita{ 0 };
    int embaralhamentos{ 0 };
    int arrumado{ 0 };

    std::cin >> n;


    for( int i{ 0 }; i < n; i++ )
    {
        int num;
        std::cin >> num;
        baralho.push_back( num );
    }

    int sequencia_atual{ 0 };
    int id_ultimo_sequencia{ 0 };
    
    while( !direita.empty( ) )
    {
        esquerda.clear( );
        direita.clear( );

        for( int i{ 0 }; i < n; i++ )
        {
            if( baralho[ i ] == sequencia_atual + 1 )
            {
                sequencia_atual++;
                id_ultimo_sequencia = i;
                esquerda.push_back( baralho[ i ] );
            }
        }

        sequencia_atual = baralho[ id_ultimo_sequencia + 1 ];

        if( !( id_ultimo_sequencia == n - 1 ) )
        {
            for( int i{ id_ultimo_sequencia }; i < n; i++ )
            {
                
            }
        }

        baralho.insert( baralho.begin( ), esquerda.begin( ), esquerda.end( ) );
        baralho.insert( baralho.end( ), direita.begin( ), direita.end( ) );
    }


    return 0;
}