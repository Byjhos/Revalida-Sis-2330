#funcion para evaluar el area
def area (radio):
	a=3.14150*(radio*radio)
	return a
#implementaando la funcion en un problema
r1=int(input("ingrese un numero"))
r2=int(input("ingrese un numero"))
ass=area(r2)-area(r1)
print ass