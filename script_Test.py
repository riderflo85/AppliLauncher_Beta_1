#coding:utf-8

"""
Title: Script de communication entre Arduino et PC (python)
Date: 04/07/2018
Create by: Florent
"""


from serial import *

with Serial(port = "/dev/ttyUSB0", baudrate = 9600, timeout = 3) as port_serie:
	if port_serie.isOpen():	# Vérification de l'ouverture du port série
		print("Port ouvert et connecter avec succés !!!")
		data = port_serie.readline()
		print(data)
		print(type(data))
		"""while True:	# Boucle de test. A retirer ???
			donnes = port_serie.readline()	# Lecture des données présentes sur le port série
			print(donnes)
			if donnes == "linux":
				print("L'OS est Linux")
			else:
				print("L'OS est différent")"""
