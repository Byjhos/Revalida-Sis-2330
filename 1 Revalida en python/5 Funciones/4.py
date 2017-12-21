 #funcion para clasificar la clase de barcos
def clase(c):
	if(c=='D'):
		print ("Destructor")
	elif(c=='F'or c=='f'):
		print("Fragata")
	elif(c=='M'or c=='m'):
		print("Misilera")
	elif(c=='B'or c=='b'):
		print("Buque")
	else:
		print ("No exixte es clase de barco")
c=raw_input("ingrese un caracter:")
print clase(c)