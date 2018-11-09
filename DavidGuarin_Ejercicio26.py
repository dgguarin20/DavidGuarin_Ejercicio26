import numpy as np
import matplotlib.pyplot as plt

data = np.loadtxt('tiempo.txt')
d1 =[]
d2 = []
d3 = []
d4=[]
c = 0
for i in range(1,len(data)):

    if(data[i]< 500 and data[i]>0):
	d4.append(int(data[i]))
	c = 4
    if(c==2):
        if(data[i]==0):
		c==3
	else:
		d3.append(int(data[i]))
    if(c==1):
        if(data[i]==0):
		c=2
		print(i)
	else:
		d2.append(int(data[i]))
    if(c==0):
        if(data[i]==0):
		c=1
		
	else:
		d1.append(int(data[i]))


	
d1 = np.asarray(d1)
d2 = np.asarray(d2)
d3 = np.asarray(d3)
d4 = np.asarray(d4)

g = [np.mean(d1),np.mean(d2),np.mean(d3),np.mean(d4) ]
x = [10, 20, 50, 100]
print(g)
print(d1)
print(d2)
print(d3)
print(d4)
plt.plot(x,g)
plt.scatter(x,g)
plt.show()
