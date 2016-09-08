//
//  sorteio.h
//  jogo
//
//  Created by Julio Novaes on 09/08/16.
//  Copyright © 2016 Julio Novaes. All rights reserved.
//

#ifndef sorteio_h_INCLUDED
#define sorteio_h_INCLUDED
#include <stdio.h>
#include "Header.h"


void sortNivel1 () {
    srand((unsigned)time(NULL));
    int a,b;
    int sinal;
    int cont;
    for (cont=0; cont<=10; cont++) {
    a= rand() % 10;
    b= rand() % 10;
    sinal = rand() % 4;
    
    switch (sinal) {
            
        case 0:
            soma(a, b);
            
            break;
        case 1:
            if (a<b)break;
            sub(a, b);
           
            break;
        case 2:
             muti(a, a);
           
        case 3:
            if (b==0) break;
            divi(a, b);
          
            break;
    
    }
    
    }
    cont = 0;
}
void sortNivel2 () {
    srand((unsigned)time(NULL));
    float a,b;
    int sinal;
    int cont;
    for (cont=0;cont<=10;cont++){
    a=(float)rand()/((RAND_MAX));
    b=(float)rand()/((RAND_MAX));
    sinal = rand()%4;
    
    switch (sinal) {
            
        case 0:
            soma2 (a, b);
           
            break;
        case 1:
            if (a<b)break;
            
            sub2(a, b);
          
            break;
        case 2:
            
            muti2(a, a);
          
        case 3:
            
            if (b==0) break;
            divi2(a, b);
           
            break;
            
    }
    
    }
    
    cont=0;

    
    
}




#endif /* sorteio_h */
