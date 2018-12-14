#coding:utf-8

"""
Title: Script pour faire des tests
Date: 04/07/2018
Create by: Florent
"""
import json
from tkinter import *
from tkinter.messagebox import *

# Configuration de la fenetre
fenetre = Tk()
fenetre.geometry("300x200-1-1500")
fenetre.title("Appli Launcher")

# Lecture et stockage du contenu du fichier de config
data = open('config_Linux.json', 'r')
config = json.load(data)

label = Label(fenetre, text="Votre configuration du profil 1", bg="white")
label.pack()

label_espacement = Label(fenetre, text=" ")
label_espacement.pack()


label1 = Label(fenetre, text="7: " + config["profil_1"]["bouton7"] + "\t8: " + config["profil_1"]["bouton8"] + "\t9: " + config["profil_1"]["bouton9"], bg="white")
label1.pack()

label2 = Label(fenetre, text="4: " + config["profil_1"]["bouton4"] + "\t5: " + config["profil_1"]["bouton5"] + "\t6: " + config["profil_1"]["bouton6"], bg="white")
label2.pack()

label3 = Label(fenetre, text="1: " + config["profil_1"]["bouton1"] + "\t2: " + config["profil_1"]["bouton2"] + "\t3: " + config["profil_1"]["bouton3"], bg="white")
label3.pack()

label_espacement2 = Label(fenetre, text=" ")
label_espacement2.pack()

bouton = Button(fenetre, activebackground="#1fb201", activeforeground="#ffffff", text="Quittez", command=fenetre.quit)
bouton.pack()

fenetre.mainloop()