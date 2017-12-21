#funcion para en contrar el area bajo una curva
#f(x)=x^2senx f(a)=0 f(b)=3.14159
import math
def trap(a,b,n):
	h=(b-a)/n
	suma=0
	i=1
	for i in (1,(n-1)):
		x=a+i*h
		suma =suma+((x*x)*(math.sin(x)))
	t=0.5*h*(0+3.1415+2*suma)
	return t
a=float(input("ingrese un numero a:"))
b=float(input("ingrese un numero b:"))
n=float(input("ingrese un numero n:"))
print trap(a,b,n)