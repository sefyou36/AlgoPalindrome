#include <stdio.h>

int main() {
    int tentative = 0;
    double pret, taux, tauxMensuel, dure, paiement;

    while (tentative < 10) {
        tentative++;

        printf("Saisissez le montant du pret : ");
        scanf("%lf", &pret);

        printf("Saisissez le taux d'int�r�t (en pourcentage) : ");
        scanf("%lf", &taux);
        tauxMensuel = taux / 100 / 12;

        printf("Indiquez la dure du pret (en ann�es) : ");
        scanf("%lf", &dure);

        if (dure < 5) {
            printf("La dure du pret doit �tre d'au moins 5 ans.\n");
            continue;
        }
        paiement = (pret * tauxMensuel) / (1 - pow(1 + tauxMensuel, -dure * 12));
        printf("La mensualit� estim�e est de : %.2lf\n\n", paiement);
    }

    return 0;
}
