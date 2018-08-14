#coding:utf-8

"""
Title: Script de communication entre Arduino et PC (python)
Date: 04/07/2018
Create by: Florent
"""
import json
import os
from serial import *



with Serial(port = "/dev/ttyUSB1", baudrate = 9600, timeout = 0.2) as port_serie:
	# Vérification de l'ouverture du port série
	if port_serie.isOpen():
		print("Port ouvert et connecter avec succés !!!")
		progBouton1 = input("Saisissez le nom du programme à attitrer au bouton 1 (ou son chemin): \n")
		
		 # Lire le contenue du port série | l'argument 1 permet de lire uniquement UN seul caractère du port série | pour éviter les erreurs avec les retours de ligne utiliser readline().rstrip('\n')
		while True:
			data = port_serie.readline(2)
			donnes = data.decode("utf-8")
			if donnes == "wi":
				if donnes == "p1":
					
					pass
				os.system(progBouton1)
			else:
				pass
	else:
		print("Port non trouver")

