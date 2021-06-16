# -*- coding: utf-8 -*-
"""
Created on Wed May 12 10:57:21 2021

@author: skukm
"""
import numpy as np

value= np.array([[137,255,74],[100,79,68],[200,179,202]])
rate=5
weight=np.arange(1,rate)/ np.arange(1,rate).sum()
size = len(value)
new_one = np.zeros((size*rate,(size*rate))) #초기화
new_size = len(new_one)


                
#Interpolation x
pixel=[]
for i in range(size):
    for j in range(size):
        if j==size-1:
            pixel.append(weight[::-1] * value[i][j])
        else:
            if value[i][j] <= value[i][j+1]:
                pixel.append(value[i][j] + weight * (value[i][j+1]-value[i][j]))
            elif value[i][j] > value[i][j+1]:
                pixel.append(value[i][j+1] + weight[::-1] * (value[i][j]-value[i][j+1]))
                
                
#Add value
for i in range(size):
    for j in range(size):
        new_one[i*rate][j*rate]=value[i][j]
        
#Add axis x
for i in range(size):
    for j in range(size):
        new_one[i*rate][1+j*rate:rate+j*rate]=pixel[j+i*size]
        
        
#Interpolation y
pixel=[]
for j in range(len(new_one)):
    for i in range(len(new_one)):
        if i%rate !=0: continue
        if i==len(new_one)-rate:
            pixel.append(weight[::-1] * new_one[i][j])
        else:
            if new_one[i][j] <= new_one[i+rate][j]:
                pixel.append(new_one[i][j] + weight * (new_one[i+rate][j]-new_one[i][j]))
            elif new_one[i][j] > new_one[i+rate][j]:
                pixel.append(new_one[i+rate][j] + weight[::-1] * (new_one[i][j]-new_one[i+rate][j]))

#Add axis y
for i in range(new_size):
    for j in range(size):
        new_one[:,i][1+j*rate:rate+j*rate]=pixel[j+i*size]

upsampling=new_one.astype(int)


#plot
import matplotlib.pyplot as plt

plt.plot(upsampling[0])
plt.show()