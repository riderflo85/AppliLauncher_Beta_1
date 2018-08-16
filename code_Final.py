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
			donnees = data.decode("utf-8")
			if donnees == "wi":
				os.system(python3 configure_Profile_Win.py)
				configFile = open('config_Windows.json', 'r')
				data_configFile = json.load(configFile)

				if donnees == "p1":
					if donnees == "b1":
						os.system(data_configFile["profil_1"]["bouton1"])
					elif donnees == "b2":
						os.system(data_configFile["profil_1"]["bouton2"])
					elif donnees == "b3":
						os.system(data_configFile["profil_1"]["bouton3"])
					elif donnees == "b4":
						os.system(data_configFile["profil_1"]["bouton4"])
					elif donnees == "b5":
						os.system(data_configFile["profil_1"]["bouton5"])
					elif donnees == "b6":
						os.system(data_configFile["profil_1"]["bouton6"])
					elif donnees == "b7":
						os.system(data_configFile["profil_1"]["bouton7"])
					elif donnees == "b8":
						os.system(data_configFile["profil_1"]["bouton8"])
					elif donnees == "b9":
						os.system(data_configFile["profil_1"]["bouton9"])

				elif donnees == "p2":
					if donnees == "b1":
						os.system(data_configFile["profil_2"]["bouton1"])
					elif donnees == "b2":
						os.system(data_configFile["profil_2"]["bouton2"])
					elif donnees == "b3":
						os.system(data_configFile["profil_2"]["bouton3"])
					elif donnees == "b4":
						os.system(data_configFile["profil_2"]["bouton4"])
					elif donnees == "b5":
						os.system(data_configFile["profil_2"]["bouton5"])
					elif donnees == "b6":
						os.system(data_configFile["profil_2"]["bouton6"])
					elif donnees == "b7":
						os.system(data_configFile["profil_2"]["bouton7"])
					elif donnees == "b8":
						os.system(data_configFile["profil_2"]["bouton8"])
					elif donnees == "b9":
						os.system(data_configFile["profil_2"]["bouton9"])
					
				
			elif donnees == "li":
				os.system(python3 configure_Profile_Lin.py)
				configFile = open('config_Linux.json', 'r')
				data_configFile = json.load(configFile)

				if donnees == "p1"
					if donnees == "b1":
						os.system(data_configFile["profil_1"]["bouton1"])
					elif donnees == "b2":
						os.system(data_configFile["profil_1"]["bouton2"])
					elif donnees == "b3":
						os.system(data_configFile["profil_1"]["bouton3"])
					elif donnees == "b4":
						os.system(data_configFile["profil_1"]["bouton4"])
					elif donnees == "b5":
						os.system(data_configFile["profil_1"]["bouton5"])
					elif donnees == "b6":
						os.system(data_configFile["profil_1"]["bouton6"])
					elif donnees == "b7":
						os.system(data_configFile["profil_1"]["bouton7"])
					elif donnees == "b8":
						os.system(data_configFile["profil_1"]["bouton8"])
					elif donnees == "b9":
						os.system(data_configFile["profil_1"]["bouton9"])

				elif donnees == "p2":
					if donnees == "b1":
						os.system(data_configFile["profil_2"]["bouton1"])
					elif donnees == "b2":
						os.system(data_configFile["profil_2"]["bouton2"])
					elif donnees == "b3":
						os.system(data_configFile["profil_2"]["bouton3"])
					elif donnees == "b4":
						os.system(data_configFile["profil_2"]["bouton4"])
					elif donnees == "b5":
						os.system(data_configFile["profil_2"]["bouton5"])
					elif donnees == "b6":
						os.system(data_configFile["profil_2"]["bouton6"])
					elif donnees == "b7":
						os.system(data_configFile["profil_2"]["bouton7"])
					elif donnees == "b8":
						os.system(data_configFile["profil_2"]["bouton8"])
					elif donnees == "b9":
						os.system(data_configFile["profil_2"]["bouton9"])
					
	else:
		print("Port non trouver")

