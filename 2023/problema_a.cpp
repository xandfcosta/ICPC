#include <stdio.h>
#include <vector>
#include <iostream>

int main( )
{
    int qnt_brinquedos;
    int altura_carlinhos;
    int qnt_pode_ir;

    scanf( "%d %d", &qnt_brinquedos, &altura_carlinhos );
    
    for( int i = 0; i < qnt_brinquedos; i++ )
    {
        int altura;
        std::cin >> altura;

        if( altura <= altura_carlinhos )
            qnt_pode_ir++;
    }

    std::cout << qnt_pode_ir;

    return 0;
}