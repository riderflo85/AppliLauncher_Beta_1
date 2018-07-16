#coding:utf-8

"""
Title: Script de communication entre Arduino et PC (python)
Date: 04/07/2018
Create by: Florent
"""

import os
from serial import *

with Serial(port = "/dev/ttyUSB1", baudrate = 9600, timeout = 0.2) as port_serie:
	if port_serie.isOpen():	# Vérification de l'ouverture du port série
		print("Port ouvert et connecter avec succés !!!")
		progBouton1 = input("Saisissez le nom du programme à attitrer au bouton 1 (ou son chemin): \n")
		while True:
			data = port_serie.readline(1) # Lire le contenue du port série | l'argument 1 permet de lire uniquement UN seul caractère du port série | pour éviter les erreurs avec les retours de ligne utiliser readline().rstrip('\n')
			donnes = data.decode("utf-8")
			if donnes == "1":
				os.system(progBouton1)
			else:
				pass
	else:
		print("Port non trouver")

