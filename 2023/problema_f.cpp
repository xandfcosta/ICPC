#include <stdio.h>
#include <iostream>
#include <vector>

int main( )
{
    int disposicao{ 0 };
    int qnt_cansativas{ 0 };
    std::vector< int > cansativa;
    int qnt_revigorantes{ 0 };
    std::vector< int > revigorante;

    std::cin >> disposicao;
    std::cin >> qnt_cansativas;
    std::cin >> qnt_revigorantes;

    for ( int i{ 0 }; i < qnt_cansativas; i++ )
    {
        int num;
        std::cin >> num;
        cansativa.push_back( num );
    }
    for ( int i{ 0 }; i < qnt_revigorantes; i++ )
    {
        int num;
        std::cin >> num;
        revigorante.push_back( num );
    }

    int total_atividades{ 0 };

    while ( !revigorante.empty( ) )
    {
        if( disposicao >= cansativa[ 0 ] )
        {
            disposicao -= cansativa[ 0 ];
            cansativa.erase( cansativa.begin( ) );
        }
        else
        {
            disposicao += revigorante[ 0 ];
            revigorante.erase( revigorante.begin( ) );
        }

        total_atividades++;
    }

    std::cout << total_atividades;

    return 0;
}