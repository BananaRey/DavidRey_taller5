import numpy as np
import matplotlib.pyplot as plt
from wand.image import Image

archivo=np.loadtxt('onda.txt')

x=archivo[:,0]
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

with Image() as wand:
   	with Image(filename='0.png') as one:
       		wand.sequence.append(one)
    	with Image(filename='1.png') as two:
        	wand.sequence.append(two)
    	with Image(filename='2.png') as three:
        	wand.sequence.append(three)
  	with Image(filename='3.png') as four:
       		 wand.sequence.append(four)
    	with Image(filename='4.png') as five:
      	 	wand.sequence.append(five)
    	with Image(filename='5.png') as six:
     	  	wand.sequence.append(six)
    	with Image(filename='6.png') as seven:
  	 	wand.sequence.append(seven)
    	with Image(filename='7.png') as eight:
        	wand.sequence.append(eight)
    	with Image(filename='8.png') as nine:
      	 	wand.sequence.append(nine)
  	with Image(filename='9.png') as ten:
       		 wand.sequence.append(ten)
    	with Image(filename='10.png') as eleven:
     	  	wand.sequence.append(eleven)
	with Image(filename='11.png') as eleven:
    	   	wand.sequence.append(eleven)
	    	
    
    	for counter in range(11):
    	    with wand.sequence[counter] as frame:
    	        frame.delay = 10 * (cursor + 1)
   
    	wand.type = 'optimize'
    	wand.save(filename='animated.gif')




