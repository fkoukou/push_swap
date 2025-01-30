# push_swap

Description

Push_swap est un projet d'algorithmie qui consiste à trier une liste de nombres entiers en utilisant un ensemble limité d'opérations sur deux piles, tout en minimisant le nombre d'instructions utilisées.

Objectifs

Manipuler des algorithmes de tri et optimiser leur complexité.

Implémenter un programme en C respectant des contraintes strictes.

Produire un algorithme efficace en termes de performance et d'utilisation mémoire.

Règles du projet

Deux piles : a (contenant les nombres à trier) et b (initialement vide).

Un ensemble d'instructions pour manipuler ces piles :

sa, sb, ss : Swap des deux premiers éléments de la pile concernée.

pa, pb : Push du premier élément de l'une des piles vers l'autre.

ra, rb, rr : Rotation vers le haut.

rra, rrb, rrr : Rotation vers le bas.

Compilation et Exécution

Compilation

make

Exécution

./push_swap <liste d'entiers>

Exemple :

./push_swap 2 1 3 6 5 8

Gestion des erreurs

Le programme doit afficher Error suivi d'un \n si :

Un paramètre n'est pas un nombre.

Un nombre dépasse les limites d'un int.

Il y a des doublons.

Performance

100 nombres triés en moins de 700 opérations.

500 nombres triés en moins de 5500 opérations.
