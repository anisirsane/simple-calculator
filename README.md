# simple-calculator

• Introduction :
On nous a donc demandé de créer un projet dans lequel nous mettons en
pratique les connaissances que nous avons acquises jusqu’à présent dans la
première session, y compris de nouvelles fonctionnalités et de nouveaux
concepts pour nous tester et en apprendre davantage. On nous a donc
demandé de créer une simple calculatrice avec le clavier matricielles, en
utilisant des simples fonctionnalités seulement.
• But de projet :
Donc le but de ce projet est de programmer une simple calculatrice qui fait
des opérations simples (plus, moins, multiplication, et division), et avec
seulement des nombres entre 0 et 9.
• Fonctionnement du projet :
Nous avons donc programmé les boutons de 0 à 9 pour représenter les
nombres de 0 à 9, le bouton D est division, le bouton C est multiplication, le
bouton B est soustraction, le bouton A est addition, le bouton Diaz est pour
égal et le bouton étoile est pour reinitialiser les variables. Et nous avons
créé la fonction qui contient le switch selon l’opérateur et nous avons écrit
cette fonction qui récupèrent les nombres et faire les calculs.
• Circuit (Diagramme) :
Nous avons donc branché les fils au broches 2,3,4,5 pour les colommes, et
7,8,9, et 10 pour les lignes(rows), puis on a branché
ces fils a notre clavier matricielle(clavier numerique).Le circuit etait assez
simple et n'avait des complexités, juste dans le code ou ca devenue un peu
complexe, mais on a cree une matrice et on a lié chaque touche a une valeur.
• Défis rencontrés :
Les difficultés rencontrées sont de manipuler les valeurs saisies par
l’utilisateur et de sortir les resultats après avoir obtenu ces données et aussi
de s’habituer à utiliser le clavier matricielle avec l’Arduino.
• Solutions :
La solution pour cela est de créer une fonction qui obtient les valeurs et
l’opérateur comme entrée et fait le calcul en appelant une autre fonction qui
a une instruction switch qui contient l’opérateur comme entrée et le résultat
qui doit être retourné selon l’opérateur après appeler cette fonction nous
renvoyons le résultat et le montrer sur le moniteur série.
• Conclusion (ce que j’ai appris) :
Dans ce projet, j’ai appris beaucoup de choses, l’une d’entre elles est de
s’habituer à la plateforme IO et l’environnement Arduino en général, j’ai
également appris à utiliser le Keypad. h et ses fonctions (comment obtenir
des données et les afficher sur le moniteur série avec cette bibliothèque...etc)
et également pratiqué en utilisant les algorithmes C++ et les structures de
données comme l’instruction switch, conditions, boucles...etc
