#include <stdio.h>
#include <iostream>
#include <vector>

int pegar_polen( std::vector< int > &flores, int pos, int qnt )
{
    if ( flores[ pos ] - qnt >= 0 )
    {
        flores[ pos ] -= qnt;
        return qnt;
    }

    int resto_polen = flores[ pos ];
    flores[ pos ] = 0;

    return resto_polen;
}

int soma_digitos( int num )
{
    int soma{ 0 };

    std::string num_str = std::to_string( num );

    for ( int j{ 0 }; j < num_str.length( ); j++ )
        soma += num_str[ j ] - '0';

    return soma;
}

int main( )
{
    int n_flores{ 0 };
    int pos_gertrude{ 0 };
    int maior_qtd_polen{ 0 };
    int pos_maior{ 0 };
    std::vector< int > flores;

    std::cin >> n_flores;
    std::cin >> pos_gertrude;    

    for ( int i{ 0 }; i < n_flores; i++ )
    {
        int num{ 0 };
        std::cin >> num;
        flores.push_back( num );
                
        if ( maior_qtd_polen < num )
        {
            maior_qtd_polen = num;
            pos_maior = i;
        }        
    }

    int soma = soma_digitos( flores[ pos_maior ] );
    int polen_gertrude = pegar_polen( flores, pos_maior, soma );

    for ( int i{ 1 }; i < pos_gertrude; i++ )
    {
        maior_qtd_polen = 0;
        pos_maior = 0;

        for ( int j{ 0 }; j < n_flores; j++ )
        {
            if ( maior_qtd_polen < flores[ j ] )
            {
                maior_qtd_polen = soma;
                pos_maior = j;
            }        
        }

        soma = soma_digitos( flores[ pos_maior ] );
        polen_gertrude = pegar_polen( flores, pos_maior, soma );
    }

    std::cout << polen_gertrude;

    return 0;
}