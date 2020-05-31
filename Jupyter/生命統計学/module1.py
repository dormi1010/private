
# coding: utf-8

# In[1]:


import math


# In[2]:


def average(list):
    sum = 0
    for length in list:
        sum += length
    return (sum / len(list))


# In[3]:


def variance(list):
    v = 0
    a = average(list)
    for x in list:
            v += (x - a) ** 2
    return (v / len(list))


# In[4]:


def standard_deviation(list):
    v = variance(list)
    return(math.sqrt(v))


# In[5]:


def covariance(list1, list2):
    c1 = []
    c2 = []
    c3 = []
    s = 0
    for x in list1:
        c1.append(x - average(list1))
    for y in list2:
        c2.append(y - average(list2))
    c3 = [m * n for(m, n) in zip(c1, c2)]
    for z in c3:
        s += z
    return (s / len(list1))


# In[6]:


def correlation(list1, list2):
    c = covariance(list1, list2)
    d = standard_deviation(list1) * standard_deviation(list2)
    cor = c / d
    return (round(cor, 4))

