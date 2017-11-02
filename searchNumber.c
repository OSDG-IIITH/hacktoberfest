#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/***
Search the number in a given filename.
Returns the CR of the enrolled if it finds, otherwise returns -1.
***/
float search(char*filename, char* number){
    FILE *file;
    char matricul[10];
    float cr;
    float flag=-1;
    file=fopen(filename, "r");
    if(file==0){
        printf("ERROR\n");
        return -2;
    }else{
        while(!feof(file)){
                fscanf(file, "%d %d %s", matricul, &cr);
                fflush(stdin);
                if(strcmpi(number, matricul)==0)
                    flag=cr;
        }
    }
    fclose(file);
    return flag;
}



int main(){
    int choose, i;
    char arquivo[100], matricula[10];
    float cr;
    do{
        printf("1 - Consul\n0 - Exit\n");
        scanf("%d", &choose);
         setbuf(stdin,NULL);
        if(choose==0)
            break;
        else{
            printf("Enter the name of the file where it refers:");
            fgets(arquivo, 100, stdin);
            for(i=0; i<100; i++)
            	if(arquivo[i]=='\n'){
					   arquivo[i]='\0';
					   break;
				}
            setbuf(stdin,NULL);
            printf ("Enter the registration number you want to see:");
            fgets(matricula, 10, stdin);
            for(i=0; i<10; i++)
            	if(matricula[i]=='\n'){
					   arquivo[i]='\0';
					   break;
				}
            setbuf(stdin,NULL);
            cr=search(arquivo, matricula);
            if(cr==-1){
                printf("Could not find the registration number %s in file '%s'\n",matricula, arquivo);
            }else if(cr>0){
                printf("Registration Number: %s\nCR: %.1f\n",matricula, cr);
            }
        }
    }while(1);
    return 0;
}
