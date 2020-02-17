number = int(input())

for index in range(1, number + 1):
    print('%d %d %d' %(index, index*index, index*index*index))
    print('%d %d %d' %(index, (index*index)+1, (index*index*index)+1))