#programa para determinar las raices de una ecuacion
import math
a=int(input("Ingrese un numero"))
b=int(input("Ingrese un numero"))
c=int(input("Ingrese un numero"))
disc=(b*b)-4*a*c
if (disc>0):
	x1=(-b+math.sqrt(disc))/2*a
	x2=(-b-math.sqrt(disc))/2*a
	y1=0
	y2=0
else:
	x1=-b/2*a
	x2=-b/2*a
	y1=(math.sqrt(-disc))/2*a
	y2=-(math.sqrt(-disc))/2*a
print ("parte real"),x1,x2
print ("parte imaginaria"),y1,y2