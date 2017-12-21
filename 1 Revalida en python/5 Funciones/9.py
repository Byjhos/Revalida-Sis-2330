#funcion para hallar la raiz cubica de un numero aplicando la  ley de newton
def cubic(a):
	x1=1
	while True: 
		x=x1
		x1=(2*x+a/x*x)/3
		if((x-x1)>=False):
			break 
	return x1
a=int(input("ingrese un numero:"))
print cubic(a)