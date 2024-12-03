#include "ABR.h"
#include <iostream>
#include <cmath>
using namespace std;

ABR::ABR::ABR(noeud* racine) : racine(racine) {}

ABR::ABR::~ABR()
{
    supprimeTout(racine);
}

void ABR::supprimeTout(noeud* racine)
{
    if (racine)
    {
        supprimeTout(racine->droit);
        supprimeTout(racine->gauche);
        delete racine;
    }
}

void ABR::ABR::Inserer(noeud* racine, int d)
{
    noeud* noeudTemp = nullptr;
    noeudTemp->valeur = d;
    
    if (racine)
    {
        if (d < racine->valeur)
        {
            if (racine->gauche)
            {
                Inserer(racine->gauche, d);
            }
            racine->gauche = noeudTemp;
        }
        else if (d == racine->valeur)
        {
            cout << d << " existe deja" << endl;
        }
        else 
        {
            if (d < racine->valeur)
            {
                if (racine->droit)
                {
                    Inserer(racine->droit, d);
                }
                racine->droit = noeudTemp;
            }
        }
    }
}

void ABR::ABR::Supprimer(noeud* racine, int d)
{
    noeud* noeudTemp = nullptr;
    noeudTemp->valeur = d;
    
    if (racine)
    {
        if (d < racine->valeur)
        {
            if (racine->gauche)
            {
                Supprimer(racine->gauche, d);
            }
        }
        else if (d == racine->valeur)
        {
           delete racine;
        }
        else 
        {
            if (d < racine->valeur)
            {
                if (racine->droit)
                {
                    Supprimer(racine->droit, d);
                }
            }
        }
    }
    
}

void ABR::ABR::Afficher_Arbre(noeud* racine)
{
    
}

int ABR::ABR::Afficher_hauteur(noeud* racine)
{
    if (racine)
        return 0;
  
    int left = Afficher_hauteur(racine->gauche);
    int right = Afficher_hauteur(racine->droit);
    
    return ((left > right ? left : right) + 1);
}

int ABR::ABR::Desequilibre(noeud* racine)
{
    
}

void ABR::ABR::Afficher_Ascendant(noeud* racine, int d)
{
}

void ABR::ABR::Archiver(noeud* racine)
{
}
