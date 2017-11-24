
# coding: utf-8

# In[1]:


import math
#標本平均
def average(list):
    sum = 0
    for length in list:
       sum += length
    return (sum / len(list))


# In[2]:


#標本分散
def variance(list):
    v = 0
    a = average(list)
    for x in list:
            v += (x - a) ** 2
    return (v / len(list))


# In[3]:


#偏差平方和
def varsum(list):
    v = variance(list)
    return (v * len(list))


# In[4]:


#推定母分散
def pvar_est(list1,list2):
    p = varsum(list1) + varsum(list2)
    l1 = len(list1) - 1
    l2 = len(list2) - 1
    return (p / (l1 + l2))


# In[5]:


#差の標準誤差（対応なし）
def se(list1, list2):
    p = pvar_est(list1, list2)
    return (math.sqrt(p * ((1 / len(list1)) + (1 / len(list2)))))


# In[6]:


#不偏分散
def Uvar(list):
    v = 0
    a = average(list)
    for x in list:
            v += (x - a) ** 2
    return (v / (len(list)-1))


# In[7]:


#標準誤差
def SE(list):
    se = Uvar(list)
    return math.sqrt(se / len(list))

