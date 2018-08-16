#coding:utf-8

"""
Title: Script pour faire des tests
Date: 04/07/2018
Create by: Florent
"""
import json
import sys

configFile = open('config_Windows.json', 'r')
data_configFile = json.load(configFile)
print(data_configFile)