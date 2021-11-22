

numeros = [10]
for i in range (0, 10, 1):
    x = int(input('Digite dez número: '))
    numeros.append(x)
print('Os números que você digitou em ordem inversa são: ')
for i in range (10, 0, -1):
    print(numeros[i])
