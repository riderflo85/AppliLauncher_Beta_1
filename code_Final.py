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
		
		 # Lire le contenue du port série | l'argument 1 permet de lire uniquement UN seul caractère du port série | pour éviter les erreurs avec les retours de ligne utiliser readline().rstrip('\n')
		while True:
			data = port_serie.readline(2)
			donnes = data.decode("utf-8")
			if donnes == "wi":
				os.system(python3 configure_Profile_Win.py)
				configFile = open('config_Windows.json', 'r')
				data_configFile = json.load(configFile)

				if donnes == "p1":
					pass:
				
			elif donnes == "li":
				os.system(python3 configure_Profile_Lin.py)
				configFile = open('config_Linux.json', 'r')
				data_configFile = json.load(configFile)
				
				if donnes == "p1"
					pass:
	else:
		print("Port non trouver")

