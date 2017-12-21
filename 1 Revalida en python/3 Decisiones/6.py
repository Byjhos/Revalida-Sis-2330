#Hallar el valor intermedio de tres numeros
a=int(input("ingrese un numero"))
b=int(input("ingrese un numero"))
c=int(input("ingrese un numero"))
max=a
min=b
if a<b:
	max=b
	min=a
if max<c:
	max=c
if c<min:
	min=c
inter=a+b+c-max+min
print inter