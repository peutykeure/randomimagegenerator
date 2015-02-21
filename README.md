# randomimagegenerator 

## Compilation

Pour compiler le code, il faudra mettre le dossier SFML qui est téléchargle sur l'ENT dans le dossier racine du code ci dessus en le renommant SFML (SFML-2.1_x32)

Ensuite pour Windows, il faudra installer MinGW avec G++ et MSYS base avec les variables d'environnement suivant.

'C:\MinGW\msys\1.0\bin;C:\MinGW\bin;'

Ensuite lancer la console Windows et utiliser la commande make

## TO-DO

* Optimisation du code (avec une grille 500*500 c'est un peu long)
* Mélangeur d'image
* Ouverture d'image PPM
* Faire une meilleure fonction rand() (Algo. de Monte Carlo ?)
* Pouvoir choisir la taille de l'image en ligne de commande)