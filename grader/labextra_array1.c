/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,s;
    scanf("%i %i",&n,&s);
    if(n>100 || s>100){
        return 0;
    }
    int arrays[n];
    for(int i=1;i<=n;i++){
        scanf("%i", &arrays[i]);
    }
    
    for(int i=1;i<=n;i++){
        if(arrays[i]==s){
            printf("%i
",i);
        }
    }

    return 0;
}
