# -*- coding: utf-8 -*-
"""
Created on Fri May 14 09:45:47 2021

@author: skukm
"""

import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

#히스토그램
#histo=np.array([[0,2,4,3,25],[20,18,6,10,25],[7,7,8,12,10],[8,8,8,10,12],[8,8,9,10,12]])
histo=np.array([[2,4,4,3],[2,1,3,3],[1,0,1,2],[0,1,1,2]])
histo=histo.flatten()
i=7


plt.figure()
plt.xlim(0,i)
plt.hist(histo,bins=len(histo))
plt.show()

#히스토그램 누적합
histo_sum=[]
for i in range(i+1):
    tmp = list(histo).count(i)
    if len(histo_sum) ==0:
        histo_sum.append(tmp)
    else:
        histo_sum.append(histo_sum[-1]+tmp)

histo_sum=np.array(histo_sum)
plt.figure()
plt.bar(np.arange(len(histo_sum)), histo_sum)
plt.show()

#히스토그램 누적합 정규화
histo_normalize = histo_sum / len(histo) * i
plt.figure()
plt.bar(np.arange(len(histo_normalize)), histo_normalize)
plt.show()