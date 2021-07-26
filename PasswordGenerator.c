// this program will veryfi if the password have he requists and generate a randon password
#include <stdio.h>
#include <ctype.h>

int main(void)
{   
    char password[21];
    char aux;
    int size = 0;

    int haveNumber = 0;
    int haveEspecialChar = 0;
    int haveUpper = 0;

    printf("Wellcome to the password verificator!\n");
    printf("Digit your password and it will veryfi if it has:\n 1 - 8 to 20 characters.\n 2 - One number\n 3 - One especial character\n Password:");
    scanf("%s", password);

    do
    {
        aux = password[size];

    //If the password have the requistis the following one will have the value 1

        if(isupper(password[size]) != 0){
            haveUpper = 1;
        } if(isdigit(password[size]) != 0){
            haveNumber = 1;
        } if(ispunct(password[size]) != 0){
            haveEspecialChar = 1;
        }
        size++;
    } while(aux != '\0');

    //Compare if the password have the requisits

    if(size <= 8){printf("Your password dont have enough words\n");}
    if(size >= 20){printf("Your password have to much words\n");}
    if(haveUpper == 0){printf ("Your password dont have a Uppercase please include it!\n");}
    if(haveNumber == 0){printf ("Your password dont have a Number please include it!\n");}
    if(haveEspecialChar == 0){printf ("Your password dont have a Especial Character please include it!\n");}

    //If the passoword have every requist it pass

    if(haveUpper == 1 && haveNumber == 1 && haveEspecialChar == 1 && size >= 8 && size <= 20){printf("\nCongratulation your password is: %s and it has passed!\n", password);}

    return 0;  
}
