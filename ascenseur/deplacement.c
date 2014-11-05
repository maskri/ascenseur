int deplacement(int eDesire, int eCourant) {
 if(eDesire > eCourant) {
   do {
     printf("Etage : %d\n", eCourant);
     sleep(2);
   } while(++eCourant < eDesire)
   printf("Arrivee etage n°%d\n", eCourant);
 } else if(eDesire < eCourant) {
   do {
     printf("Etage : %d\n", &eCourant);
     sleep(2);
   } while(--eCourant < eDesire)
   printf("Arrivee etage n°%d\n", eCourant);
 } else {
   printf("***Ouverture des portes de l'ascenseur***");
 }
  return eCourant;
}