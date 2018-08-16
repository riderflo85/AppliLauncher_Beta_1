#coding:utf-8

"""
Title: Script pour faire des tests
Date: 04/07/2018
Create by: Florent
"""
import json

configFile = open('config_Linux.json', 'r')
data_configFile = json.load(configFile)
print(data_configFile)
print(type(data_configFile))