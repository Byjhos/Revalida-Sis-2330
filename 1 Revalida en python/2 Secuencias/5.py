#calcular el tercer lado de un triangulo
import math
b=int(input("Ingrese un numero") )
c=int(input("Ingrese un numero") )
alpha=int(input("Ingrese un numero") )
ang=alpha*3.14159/180
a=math.sqrt((b*b)+(c*c)-2*b*c*math.cos(ang))
print a