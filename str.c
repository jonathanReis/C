#ifndef Max
    #define Max 101
#endif

char Str(char *text, int TAM)
{
     char letra;
     int i = 0;
     while((letra = getchar()) != '\n' && i < TAM)
     {
          text[i] = letra;   
          i++;          
     }
     text[i] = '\0';
     setbuf(stdin,NULL);
}

char String(char *text)
{
     char letra;
     int i = 0;
     while((letra = getchar()) != '\n' && i < Max)
     {
          text[i] = letra;   
          i++;          
     }
     text[i] = '\0';
     setbuf(stdin,NULL);
}

char StringPause(char *text)
{
     char letra;
     int i = 0;
     while((letra = getchar()) != '\n' && letra != ' ' && i < Max)
     {
          text[i] = letra;   
          i++;          
     }
     text[i] = '\0';
     setbuf(stdin,NULL);
}
