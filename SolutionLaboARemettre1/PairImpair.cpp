//But : Créer un programme qui peut déterminer si le nombre que l'utilisateur entre dans le programme est pair ou impair.
//Auteur : Frédéric Charron
//Date : 08/09/2020

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");		//Accents

	int nombre;

	std::cout << " Veuillez entrer un nombre entier :";	//Le programme demande d'entrer un nombre
	std::cin >> nombre;	//Le nombre qu'on entre dans le programme
	if (nombre % 2 == 0)		//Le programme calcule le nombre%2, si la réponse est 0, il envoie le message disant que le nombre est pair, sinon, il envoie que le nombre est impair.
		std::cout << nombre << " est pair";
	else
		std::cout << nombre << " est impair";
	// KM : Parfait !!!
	//Test1 :  12 --> est pair
	//Test2 :  13 --> est impair
	//Test3 :  0  --> est pair
	//Test4 : -17 --> est impair
	return 0;
}
