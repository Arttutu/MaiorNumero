#include <stdio.h>

int maior (int, int, int);

int main (){
    
    int maiorNumero, primeiro, segundo, terceiro;
    scanf("%d %d %d", &primeiro, &segundo, &terceiro);
    maiorNumero  = maior (primeiro, segundo, terceiro);
    printf("%d\n", maiorNumero);
    
    
    return 0;
}

int maior ( int primeiro, int segundo, int terceiro){
    int maiorNumero;
    if ( primeiro >= segundo && primeiro >= terceiro){
        
      maiorNumero = primeiro;
    }
    else if ( segundo >= primeiro && segundo >= terceiro){
        
        maiorNumero  = segundo;
    
    }
    else {
        maiorNumero  = terceiro;
    }
    
    
    return maiorNumero;
}
