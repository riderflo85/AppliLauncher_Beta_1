#coding:utf-8

import json

# Création de fichier json avec son contenu voulu
with open('configTest.json', 'x') as fichierconfig:
	profil_1 = {"bouton1": "putty", "bouton2": "discord", "bouton3": "googleChrome"}
	json.dump(profil_1, fichierconfig, indent = 3, ensure_ascii = False)

# Lecture d'un fichier json et récuperation de son contenu dans un dictionnaire (data)
with open('configTest.json', 'r') as fichierconfig:
    data = json.load(fichierconfig)

print(data["test0"])
print(data["test1"])
print(data["test1"]["test2"])
data["test1"]["test2"] = 56 # Modification des valeurs du dictionnaire/fichier json
print(data["test1"]["test2"])

# Enregistrement des modifications sur le dictionnaire, dans le fichier json
with open('configTest.json', 'w') as fichierconfig:
	json.dump(data, fichierconfig, indent = 3, ensure_ascii = False)