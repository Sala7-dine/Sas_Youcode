#include <stdio.h>
#include <string.h>

char titres[100][100];
char descriptions[100][300];
char dates[100][12];
int nombre_taches = 0;

int main() {

    char titre[100];
    char description[300];
    char date[12];

    int choix;
    do {

        printf("\n\nMenu:\n");
        printf("1. Ajouter une tache\n");
        printf("2. Supprimer une tache\n");
        printf("3. Afficher toutes les taches\n");
        printf("4. Rechercher une tache\n");
        printf("5. Quitter\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
        getchar(); 

        switch (choix) {
            case 1:
                    // Ajouter
                    if (nombre_taches >= 100) {
                        printf("\nLa liste de taches est pleine.\n");
                        break;
                    }

                    printf("\nEntrez le titre de la tache : ");
                    scanf(" %[^\n]s" , titre);

                    printf("Entrez la description de la tache : ");
                    scanf(" %[^\n]s" , description);

                    printf("Entrez la date d'achaance (AAAA-MM-JJ) : ");
                    scanf(" %[^\n]s" , date);

                    strcpy(titres[nombre_taches], titre);
                    strcpy(descriptions[nombre_taches], description);
                    strcpy(dates[nombre_taches], date);
                    nombre_taches++;
                    printf("\nLa tache a ete ajouter.\n");
                    break;
            case 2:
                // Supprimer
                printf("\nEntrez le titre de la tache a supprimer : ");
                scanf(" %[^\n]s" , titre);

                for (int i = 0; i < nombre_taches; i++) {
                    if (strcmp(titres[i], titre) == 0) {
                        
                        for (int j = i; j < nombre_taches - 1; j++) {
                            strcpy(titres[j], titres[j + 1]);
                            strcpy(descriptions[j], descriptions[j + 1]);
                            strcpy(dates[j], dates[j + 1]);
                        }
                        nombre_taches--;
                        printf("La tache a ete supprimee.\n", titre);
                    }
                }
                break;
            case 3:
                // Aficher
                if (nombre_taches == 0) {
                    printf("\nAucune tache a afficher.\n");
                    break;
                }

                for (int i = 0; i < nombre_taches; i++) {
                    printf("\nTitre: %s\n", titres[i]);
                    printf("Description: %s\n", descriptions[i]);
                    printf("Date : %s\n", dates[i]);
                    printf("-------------------------\n");
                }
                break;
            case 4:
                // rechercher
                char tit[100];
                printf("\nEntrez le titre de la tache a rechercher : ");
                scanf(" %[^\n]s" , tit);

                for (int i = 0; i < nombre_taches; i++) {
                    if (strcmp(titres[i], tit) == 0) {
                        printf("Titre: %s\n", titres[i]);
                        printf("Description: %s\n", descriptions[i]);
                        printf("Date : %s\n", dates[i]);
                        break;
                    }
                }
            case 5:
                break;
            default:
                printf("\nChoix invalide.\n");
                break;
        }
    } while (choix != 5);

    return 0;
}
