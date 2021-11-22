
 
p=float(input ('digite o seu peso:               '))

h=float(input ('digite a sua altura:             '))

s=input ('digite o sexo: [M] ou [F]:             ')


imc= (p/(h*h))

if(s =="M"):

                if (imc>=25):
                   print(f"acima do peso!")  
                elif (imc>=20):
                   print(f"peso ideal!")  
                else: 
                   print(f"abaixo do peso!")

else:
       
                if (imc>=24):
                   print(f"acima do peso!")  
                elif (imc>=19):
                   print(f"peso ideal!")  
                else: 
                   print(f"abaixo do peso!")