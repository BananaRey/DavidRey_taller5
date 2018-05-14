import numpy as np
import matplotlib.pyplot as plt

matrix=np.loadtxt('pub.txt')
t=matrix[:,0]
q=matrix[:,1]
plt.plot(t,q)
plt.show()
plt.savefig("caos.pdf")
