#coding:utf-8

import json
import sys
import time

creation = "init"

# Test si le fichier de config existe ou pas
try:
 	if open('configTest.json', 'r'):
 		print("fichier de config trouver !!!")

# Vérifie si une exception (erreur) est levé (retourner)
except FileNotFoundError:
 	print("Erreur, fichier de config non trouver\n")
 	creation = input("Voulez-vous créer un ficher de configuration ? (oui / non)\n")

if creation == "oui" or creation == "o":
	# Création de fichier de configuration vierge
	with open('configTest.json', 'x') as fichierconfig:
		profil_1 = {"bouton1": "NA", "bouton2": "NA", "bouton3": "NA"}
		json.dump(profil_1, fichierconfig, indent = 3, ensure_ascii = False)
	print("\nVeuillez completer votre configuration:")
	time.sleep(2)
	pr1bo1 = input("\ndéfinissez le programme a assigner au bouton 1 du profil 1: \n")
	pr1bo2 = input("\ndéfinissez le programme a assigner au bouton 2 du profil 1: \n")
	pr1bo3 = input("\ndéfinissez le programme a assigner au bouton 3 du profil 1: \n")
	pr1bo4 = input("\ndéfinissez le programme a assigner au bouton 4 du profil 1: \n")
	pr1bo5 = input("\ndéfinissez le programme a assigner au bouton 5 du profil 1: \n")
	pr1bo6 = input("\ndéfinissez le programme a assigner au bouton 6 du profil 1: \n")
	pr1bo7 = input("\ndéfinissez le programme a assigner au bouton 7 du profil 1: \n")
	pr1bo8 = input("\ndéfinissez le programme a assigner au bouton 8 du profil 1: \n")
	pr1bo9 = input("\ndéfinissez le programme a assigner au bouton 9 du profil 1: \n")
	pr2bo1 = input("\ndéfinissez le programme a assigner au bouton 1 du profil 2: \n")
	pr2bo2 = input("\ndéfinissez le programme a assigner au bouton 2 du profil 2: \n")
	pr2bo3 = input("\ndéfinissez le programme a assigner au bouton 3 du profil 2: \n")
	pr2bo4 = input("\ndéfinissez le programme a assigner au bouton 4 du profil 2: \n")
	pr2bo5 = input("\ndéfinissez le programme a assigner au bouton 5 du profil 2: \n")
	pr2bo6 = input("\ndéfinissez le programme a assigner au bouton 6 du profil 2: \n")
	pr2bo7 = input("\ndéfinissez le programme a assigner au bouton 7 du profil 2: \n")
	pr2bo8 = input("\ndéfinissez le programme a assigner au bouton 8 du profil 2: \n")
	pr2bo9 = input("\ndéfinissez le programme a assigner au bouton 9 du profil 2: \n")

	# Lecture d'un fichier json et récuperation de son contenu dans un dictionnaire (data)
	with open('configTest.json', 'r') as fichierconfig:
		data = json.load(fichierconfig)

	# Modification / Création du dictionnaire
	data = {"profil_1": {"bouton1": pr1bo1, "bouton2": pr1bo2, "bouton3": pr1bo3, "bouton4": pr1bo4, "bouton5": pr1bo5, "bouton6": pr1bo6, "bouton7": pr1bo7, "bouton8": pr1bo8, "bouton9": pr1bo9}, "profil_2": {"bouton1": pr2bo1, "bouton2": pr2bo2, "bouton3": pr2bo3, "bouton4": pr2bo4, "bouton5": pr2bo5, "bouton6": pr2bo6, "bouton7": pr2bo7, "bouton8": pr2bo8, "bouton9": pr2bo9}}
	
	# Enregistrement des modifications sur le dictionnaire, dans le fichier json
	with open('configTest.json', 'w') as fichierconfig:
		json.dump(data, fichierconfig, indent = 3, ensure_ascii = False)
	print(data)

elif creation != "non" or creation != "n":
	sys.exit()