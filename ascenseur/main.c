/*DEFINTIONS DES BIBLIOTHEQUES */
#include <stdio.h>
#include <stdint.h>
#include <Windows.h>

/*DEFINITION DES PROTOTYPES DES FONCTIONS*/
int appel();
int selection();
int deplacement(int, int);

/*DEFINITION DES CONSTANTES*/
int MIN = -3, MAX = 11;

/* ENTREE DU PROGRAMME */
int main(int argc, char* argv[], char** envp){

    int etg = 0, selec;
    do{
        do
            selec = appel();
        while (selec < MIN || selec > MAX);
        if (selec != MAX){
            etg = deplacement(selec, etg);
            do
                selec = selection();
            while (selec < MIN || selec > MAX-1);
                etg = deplacement(selec, etg);
        }
    }
    while (selec != 11);
        printf("Arret ascenseur\n");
    return (0);
}

/*Fonction qui permet d'appeler l'ascenseur
  @return       etg   int :   �tage s�lectionn�*/
int appel(void){
    char chaine[50];
    sprintf(chaine, "A quel etage etes vous ?\n");
    printf("Appel ascenseur\n");
    return saisieEntier(chaine);
}

/*Fonction qui permet de s�l�ctionner l'�tage que l'on veut atteindre
  @return       selec   int :   �tage s�lectionn�*/
int selection(void){
    char chaine[50];
    sprintf(chaine, "Selection etage ? [de %d a %d] \n", MIN, MAX);
    return saisieEntier(chaine);
}

/*Fonction qui g�re les erreurs pour la saisie d'un entier
  @params       chaine  char[]:   texte � afficher
  @return       input   int  :    entier saisie par utilisateur*/
int saisieEntier(char chaine[]){
    int input, fini = 0;
    while (fini == 0 ){
         printf("%s\n",chaine);
        if(scanf("%d",&input)){
            fini = 1;
        }else{
            printf("Erreur de saisie !\n");
        }
        fflush(stdin);
    }
    return (input);
}

/*Fonction qui permet de d�placer l'ascenseur de puis l'�tage appellant jusqu'� l'�tage d�sir�
  @params       a     int :   �tage appelant
  @params       asc   int :   �tage d�sir�
  @return       asc   int :   �tage courant*/
int deplacement(int a, int asc){
    if (a > asc){
        do {
            printf("Etage:%d\n", asc);
            Sleep(2);
        } while (++asc < a);
        printf("Arrive etage %d\n", asc);
    } else {
        do{
            printf("Etage:%d\n", asc);
            Sleep(2);
        } while (--asc > a);
        printf("Arrivee etage %d\n", asc);
    }
    return (asc);
}

