#ifndef atoi
    #include <stdlib.h>
#endif

int getint(char texto[])
{
     int i;
     int j;
     int cont;
     char numeros[11] = "0123456789";
     for(i = 0, cont = 0;texto[i] != 0;i++)
     {
         for(j = 0;j < 9;j++)
         {
               if(texto[i] != numeros[j])
               {
                    cont++;            
               }      
         }
         if(cont == 10)
         {
               return 0;        
         }
     }
     return atoi(texto);
}
