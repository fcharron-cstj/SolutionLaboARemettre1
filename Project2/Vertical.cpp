//But : �crire un programme qui v�rifie que le nombre entr� est de 5 chiffre et qui va les placer sur 5 lignes verticalement
//Auteur : Fr�d�ric Charron
//Date : 08/09/2020

#include <iostream>
int main()
{
	setlocale(LC_ALL, "");		//Caract�res accentu�s

	int nombre;				

	std::cout << " Veuillez entrer un nombre entier de 5 chiffres : ";			//Le programme demande le nombre

	std::cin >> nombre;			//Le programme re�oit le nombre entr� par l'utilisateur

	if (nombre >= 10000)		//Si le nombre est �gal ou au dessus de 10 000, (5chiffres), alors il va �x�cuter la commande qui met le nombre sur une ligne verticale.

	{

		std::cout << nombre;			
		std::cout << "\n";				//	"\n"; va descendre � la prochaine ligne.
		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
		std::cout << "\n";
		std::cout << nombre;
	}
	else												//Si le chiffre est en dessous de 10 000, alors il va �x�cuter cette ligne de code et envoyer un message disant que le nombre n'est pas de 5 chiffres
	{
		std::cout << " Le nombre n'est pas compos� de 5 chiffres";


	}
}


/* Je n'ai pas compris comment mettre chaque chiffre sur une ligne diff�rente, j'aurais probablement pu le faire mais je ne voulais pas prendre trop de temps l�-dessus.

*/