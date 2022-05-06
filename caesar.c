#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    if(!argv[1]){
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else{

        int key = atoi(argv[1]);
        string key_string = argv[1];

        if((argc > 2 || argc < 2) || key < 0){
            printf("Usage: ./caesar key\n");
            return 1;
        }else{
            for(int i = 0; i<strlen(key_string);i++){
                if(isdigit(argv[1][i]) == 0){
                    printf("Usage: ./caesar key\n");
                    return 1;
                    }
            }
        }

        while(key>26){
            key = key -26;
        }
        string plaintext = get_string("plaintext: ");
        char ciphertext[strlen(plaintext)-1];


    for(int i = 0; i< strlen(plaintext); i++){
            if(plaintext[i] <= 122 && plaintext[i]>= 97){
                int total = plaintext[i]+ key;
                ciphertext[i] = plaintext[i]+ key;
                if (total >=122){
                    ciphertext[i] = total - 26;
                }
                if(isspace(plaintext[i])){
                    ciphertext[i] = plaintext[i];
                    }
                }else if(plaintext[i] <= 90 && plaintext[i]>= 65){
                    int total = plaintext[i]+ key;
                    ciphertext[i] = plaintext[i]+ key;
                    if (total >=90){
                        ciphertext[i] = total - 26;
                    }
                    if(isspace(plaintext[i])){
                        ciphertext[i] = plaintext[i];
                    }
                }else{
                ciphertext[i] = plaintext[i];
                }
    }
    printf("ciphertext:%s\n",ciphertext);
    }
}
