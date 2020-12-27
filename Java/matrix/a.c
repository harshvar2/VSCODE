#include <stdio.h>   
struct student{    
        char *c;   
         };    
         void main()    {        
             struct student *s;    
                 s->c = "hello";        
                 printf("%s", s->c);    }