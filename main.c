#include <stdio.h>

struct Article {
    char nom[20];
    float prix;
    int quantite;
};

float total(struct Article article) {
    return article.prix * article.quantite;
}

float calculerTaxe(struct Article articles[3], float tauxTVA) {
    float totalTaxe = 0;
    for (int i = 0; i < 3; i++) {
        totalTaxe += tauxTVA * total(articles[i]);
    }
    return totalTaxe;
}

void fonction3(float ht, float tva){
    float ttc;
    ttc= ht+ (ht*tva)/100;

}

int main() {

    char client[20];
    char paiement[20];


    printf("Entrer le nom du client: ");
    scanf("%s", client);

    printf("Entrer le mode de paiement: ");
    scanf("%s", paiement);

    struct Article articles[3];
    for (int i = 0; i < 3; i++) {
        printf("\nEntrer les details pour l'article %d:\n", i+1);
        printf("Nom: ");
        scanf("%s", articles[i].nom);
        printf("Prix: ");
        scanf("%f", &articles[i].prix);
        printf("Quantite: ");
        scanf("%d", &articles[i].quantite);
        fonction3(articles[i].prix, 0.20);
    }

    float totalHT = 0;
    for (int i = 0; i < 3; i++) {
        totalHT += total(articles[i]);
    }
    float taxe = calculerTaxe(articles, 0.20);
    float totalTTC = totalHT + taxe;

    printf("\n\n**** FACTURE ****\n");
    printf("Client: %s\n", client);
    printf("Payment Mode: %s\n", paiement);
    printf("\nArticles:\n");
    for (int i = 0; i < 3; i++) {
        printf("\n%s - %d x %.2f = %.2f", articles[i].nom, articles[i].quantite, articles[i].prix, total(articles[i]));
    }
    printf("\n\nTotal HT: %.2f", totalHT);
    printf("\nTVA 20 % : %.2f", taxe);
    printf("\nTotal TTC: %.2f", totalTTC);
    printf("\n");

    return 0;
}
