//
//  main.c
//  jogo
//
//  Created by Julio Novaes on 02/08/16.
//  Copyright © 2016 Julio Novaes. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Header.h"
#include "sorteio.h"



int main() {
    int nivel;
    
    nivel=inicio();
    
    if (nivel == 01){
        sortNivel1();
    }else if (nivel==02){
        sortNivel2();
    }else if (nivel==00){
        EXIT_SUCCESS;
    }
    
    
    
    return 0;
}

