#funcion para resolver un acertijo
def sociedad(n1,n2):
	x=n1*2
	x=x+5
	y=x*50
	y=y+n2
	z=y+365
	z=z-615
	return z
n1=int(input("ingrese un numero"))
n2=int(input("ingrese un numero"))
print sociedad(n1,n2)