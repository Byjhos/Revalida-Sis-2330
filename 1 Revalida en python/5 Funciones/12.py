#funcion para coordenadas polares
import math
def complejo(a,b,n):
	rho=math.sqrt((a*a)+(b*b))
	ang=(math.asin((b/rho)))
	
	rhon=rho**n
	angn=n*ang
	
	an=rhon*(math.cos(angn))
	bn=rhon*(math.sin(angn))
	print an,bn
a=float(input("ingrese un numero"))
b=float(input("ingrese un numero"))
n=float(input("ingrese un numero"))
print complejo(a,b,n)