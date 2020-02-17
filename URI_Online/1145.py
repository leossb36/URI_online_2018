x, y = list(map(int, input().split()))
contador = 1

for index in range(1, (int(y/x)+1)):
    resposta = ""
    for i in range(x):
        resposta += str(contador) + " "
        contador += 1
    print(resposta[:-1])
