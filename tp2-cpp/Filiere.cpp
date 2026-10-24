
#include "Filiere.hpp"
#include "Etudiant.hpp"
#include <iostream>

Filiere::Filiere()
    : nom("Inconnue"), code("000") {
}

Filiere::Filiere(std::string n, std::string c)
    : nom(n), code(c) {
}

std::string Filiere::getNom() const {
    return nom;
}

std::string Filiere::getCode() const {
    return code;
}

void Filiere::setNom(std::string n) {
    nom = n;
}

void Filiere::setCode(std::string c) {
    code = c;
}

void Filiere::ajouterEtudiant(Etudiant* e) {
    if (e != nullptr) {
        etudiants.push_back(e);
        e->setFiliere(this);
    }
}

void Filiere::afficherEtudiants() const {
    std::cout << "Filiere : " << nom << std::endl;
    std::cout << "Liste des etudiants :" << std::endl;

    for (const Etudiant* e : etudiants) {
        if (e != nullptr) {
            std::cout << "- " << e->getNom()
                      << " | CIN : " << e->getCin()
                      << " | Moyenne : " << e->calculerMoyenne()
                      << std::endl;
        }
    }
}

Filiere::~Filiere() {
}
