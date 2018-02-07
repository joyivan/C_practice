
# coding: utf-8

# In[ ]:

import tensorflow as tf
#get_ipython().magic(u'matplotlib inline')


# In[ ]:

import numpy as np
x_data=np.float32(np.random.rand(2,200))
y_data=np.dot([0.1,0.2],x_data)+0.3
y=y_data

# In[ ]:

xx=x_data[0,:]


# In[ ]:

yy=x_data[1,:]


# In[ ]:

xx,yy=np.meshgrid(xx,yy)


# In[ ]:

xx.shape


# In[ ]:

from matplotlib import pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
fig=plt.figure()
ax=Axes3D(fig)
ax.plot_surface(xx, yy, y, rstride=1, cstride=1, cmap='rainbow')
plt.show()


# In[30]:


xx.shape


# In[32]:

yy.shape


# In[33]:

get_ipython().magic(u'matplotlib inline')


# In[ ]:

fig=plt.figure()
ax=Axes3D(fig)
ax.plot_surface(xx, yy, y, rstride=1, cstride=1, cmap='rainbow')
plt.show()


# In[ ]:




# In[21]:

x_data[1].shape


# In[21]:

x_data[1].shape


# In[21]:

x_data[1].shape

