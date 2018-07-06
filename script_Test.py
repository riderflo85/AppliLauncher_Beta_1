#coding:utf-8

"""
Title: Script de communication entre Arduino et PC (python)
Date: 04/07/2018
Create by: Florent
"""


from serial import *

with Serial(port = "/dev/ttyUSB0", baudrate = 9600, timeout = 1) as port_serie:
	if port_serie.isOpen():	# Vérification de l'ouverture du port série
		print("Port ouvert et connecter avec succés !!!")
		while True:	# Boucle de test. A retirer ???
			ligne = port_serie.readline()	# Lecture des données présentes sur le port série
			print (ligne)	# Affichage des données du port série