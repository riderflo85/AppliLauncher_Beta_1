#coding:utf-8

"""
Title: Script de communication entre Arduino et PC (python)
Date: 04/07/2018
Create by: Florent
"""

import os
from serial import *

with Serial(port = "/dev/ttyUSB0", baudrate = 9600, timeout = 0.2) as port_serie:
	if port_serie.isOpen():	# Vérification de l'ouverture du port série
		print("Port ouvert et connecter avec succés !!!")
		while True:
			progBouton1 = input("Saisissez le nom du programme à attitrer au bouton 1 (ou son chemin)")
			data = port_serie.readline(1)
			donnes = data.decode("utf-8")
			if donnes == "1":
				os.system(progBouton1)
			else:
				pass
	else:
		print("Port non trouver")

