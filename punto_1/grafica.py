import numpy as np
import matplotlib.pyplot as plt

M=np.loadtxt('pub.txt')
print(np.shape(M))
V=M[0:511,:]
E_x=M[512:1022,:-2]
E_y=M[1025:1535,:-2]
rang=np.linspace(0,500,510)
plt.imshow(V)
plt.streamplot(rang,rang,E_x,E_y)
plt.savefig("placas.pdf")
plt.show()
plt.close()
