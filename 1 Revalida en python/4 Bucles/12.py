#coeficiente bimodal
n=int(input("ingrese un numero"))
m=int(input("ingrese un numero"))
x=1
y=1
for i in [m]:
	x=x*(n+1-i)
	y=y*i
coef=x/y
print coef