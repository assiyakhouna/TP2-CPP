
#include <iostream>
#include "Etudiant.hpp"
#include "Filiere.hpp"

int main() {
    Filiere f1("Informatique", "INFO01");

    Etudiant e1("Assiya", "AB123456", 15, 17, 13);
    Etudiant e2("Sara", "CD234567", 14, 16, 18);
    Etudiant e3("Amine", "EF345678", 12, 13, 15);

    f1.ajouterEtudiant(&e1);
    f1.ajouterEtudiant(&e2);
    f1.ajouterEtudiant(&e3);

    f1.afficherEtudiants();

    return 0;
}
