import numpy as np
import matplotlib.pyplot as plt
import numpy as np
import matplotlib.pyplot as plt
import numpy as np
from numpy import genfromtxt, size, shape
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

D=np.loadtxt('onda.txt')

x=D[:,0]
archivo=D[:,1:12]
"""
u_0=archivo[:,1]
u_1=archivo[:,2]
u_2=archivo[:,3]
u_3=archivo[:,4]
u_4=archivo[:,5]
u_5=archivo[:,6]
u_6=archivo[:,7]
u_7=archivo[:,8]
u_8=archivo[:,9]
u_9=archivo[:,10]
u_10=archivo[:,11]
u_11=archivo[:,12]

plt.plot(x,u_0 , label='u_0')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('0.png')
plt.close()

plt.plot(x,u_1, label='u_1')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('1.png')
plt.close()

plt.plot(x,u_2, label='u_2')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('2.png')
plt.close()

plt.plot(x,u_3, label='u_3')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('3.png')
plt.close()

plt.plot(x,u_4, label='u_4')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('4.png')
plt.close()

plt.plot(x,u_5, label='u_5')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('5.png')
plt.close()

plt.plot(x,u_6, label='u_6')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('6.png')
plt.close()

plt.plot(x,u_7, label='u_7')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('7.png')
plt.close()

plt.plot(x,u_8, label='u_8')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('8.png')
plt.close()

plt.plot(x,u_8, label='u_8')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('8.png')
plt.close()

plt.plot(x,u_9, label='u_9')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('9.png')
plt.close()

plt.plot(x,u_10, label='u_10')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('10.png')
plt.close()

plt.plot(x,u_11, label='u_11')
plt.title('Cuerda',fontsize=25)
plt.xlabel('x',fontsize=25)
plt.ylabel('u(x,t)',fontsize=25)
plt.savefig('11.png')
plt.close()
"""
frms=12
def metodo_pics(i):
    plt.cla()
    plt.plot(x ,archivo[:,i], c = "g")
    plt.ylim([-1.2,1.2])

imagen = plt.figure()
gif = FuncAnimation(imagen, metodo_pics, frames=int(frms/2), interval=12)
gif.save("cuerda.gif", writer = "imagemagick", fps = int(frms/4))

