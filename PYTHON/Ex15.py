p=float(input ('digite o seu peso  '))
h=float(input ('digite a sua altura   '))

imc=p/(h*h)


if(imc<20):
    print(f"abaixo do peso!")

elif(imc<25):
    print(f"peso ideal!")

else:
    print("acima do peso!")
