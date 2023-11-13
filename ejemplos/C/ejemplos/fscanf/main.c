#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *f;
  char nom[20], ape[20];
  int i, n1, n2;
  
  if ( (f = fopen("datos.txt", "r"))!= NULL){
    
    for (i = 0 ; i < 3 ; i++ ){
        fscanf(f, "%s %s", nom, ape);    
        fscanf(f, "%d %d", &n1, &n2);
        
        printf("\nLeido: nom: %s ape: %s, n1: %d, n2: %d", nom, ape, n1, n2);
    } 
    fclose(f);   
       
  } else
    printf("\nError al abrir el fichero\n");
    
  printf("\n");
  system("PAUSE");	
  return 0;
}
