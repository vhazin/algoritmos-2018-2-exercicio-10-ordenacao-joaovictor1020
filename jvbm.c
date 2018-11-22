#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    int quant, name, comportados, ncomportados;
    char vetor[name], aux[21], good;
    scanf("%i", &quant);
    while (quant--){
        scanf("%i", &name);
        if(good == '+'){
            comportados++;
        }
        else{
            ncomportados++;
        }
    }
    for(int i = 0; i < quant; i++){
        for(int j = i + 1; j < quant; j++){
            if(strcmp(vetor[j], vetor[i]) == -1){
                strcpy(aux, vetor[i]);
                strcpy(vetor[i], vetor[j]);
                strcpy(vetor[j], aux);
            }
        }
        for(int i=0;i<quant;i++){
            puts(vetor[i]);
    }
    printf("Se comportaram: %i | Não se comportaram: %i\n", comportados, ncomportados);

    return 0;
}
