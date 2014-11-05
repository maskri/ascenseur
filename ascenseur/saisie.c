int main(){

int etage = saisie();
printf("%i",etage);
}


int saisie(){

int etage ;

printf("Veuillez saisir l'etage ou vous souhaitez vous rendre\n");
scanf("%i",&etage);

return etage; //On retourne l'étage saisie par l'usager

}
