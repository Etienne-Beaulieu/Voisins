#pragma once

#include <vector>

#include "ListeVin.h"

class ResourceLoader
{
private:
	std::vector<Vin> data;
public:
	ResourceLoader();
	void Remplir();
	void Afficher();
	std::vector<Vin> GetTrainData(float);
	std::vector<Vin> GetTestData(float);
	ListeVin& GetTrainDataLinked(float);
	ListeVin& GetTestDataLinked(float);
};

/*
� acidit� fixe (grammes d�acide tartrique/dm3 )
� acide volatile (grammes d�acide ac�tique/dm3 )
� acide citrique (g/dm3 )
� sucre r�siduel (g/dm3 )
� chlorure de sodium (g/dm3 )
� dioxyde de soufre libre (mg/dm3 )
 � dioxyde de soufre total (mg/dm3 )
� densit� (g/cm3 )
� pH
� sulfate de potassium (g/dm3 )
� alcool (vol. %)
� bon 0 ou 1 (oui ou non) NE FAIT PAS PARTIE DU CALCUL DE DISTANCE
*/
