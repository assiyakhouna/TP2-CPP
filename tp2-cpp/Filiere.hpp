
#ifndef FILIERE_HPP
#define FILIERE_HPP

#include <string>
#include <vector>

class Etudiant;

class Filiere {
private:
    std::string nom;
    std::string code;
    std::vector<Etudiant*> etudiants;

public:
    Filiere();
    Filiere(std::string n, std::string c);

    std::string getNom() const;
    std::string getCode() const;

    void setNom(std::string n);
    void setCode(std::string c);

    // Association 1-N
    void ajouterEtudiant(Etudiant* e);
    void afficherEtudiants() const;

    ~Filiere();
};

#endif
