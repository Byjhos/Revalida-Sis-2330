#serie de taylor
x=int(input("ingrese un numero"))
suma=1
i=1
t=1
while i<=15 or t>False:
	t=t*x/i
	suma=suma+1
	i=i+1
print suma