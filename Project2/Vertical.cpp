//FR : But : Écrire un programme qui vérifie que le nombre entré est de 5 chiffre et qui va les placer sur 5 lignes verticalement
//Auteur : Frédéric Charron
//Date : 08/09/2020

#include <iostream>
int main()
{
	setlocale(LC_ALL, "");		//Caractères accentués

	int nombre;				

	std::cout << " Veuillez entrer un nombre entier de 5 chiffres : ";			//Le programme demande le nombre

	std::cin >> nombre;			//Le programme reçoit le nombre entré par l'utilisateur

	if (nombre >= 10000)		//Si le nombre est égal ou au dessus de 10 000, (5chiffres), alors il va éxécuter la commande qui met le nombre sur une ligne verticale.

	{
		// KM : La validation du nombre n'est pas complète, il peut avoir 6 chiffres ou plus
		
		// KM : C'est parfait ici, tu as montré que tu sais présenter l'information, il te manque juste l'idée du calcul
		std::cout << nombre;			
		std::cout << "\n";				//	"\n"; va descendre à la prochaine ligne.
		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
	}
	else												//Si le chiffre est en dessous de 10 000, alors il va éxécuter cette ligne de code et envoyer un message disant que le nombre n'est pas de 5 chiffres
	{
		std::cout << " Le nombre n'est pas composé de 5 chiffres";


	}
}

// KM : C'est parfait comme explication, je vois que tu as fourni l'effort que je demandais.
/* Je n'ai pas compris comment mettre chaque chiffre sur une ligne différente, j'aurais probablement pu le faire mais je ne voulais pas prendre trop de temps là-dessus.

*/
