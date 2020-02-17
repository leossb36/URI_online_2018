running = 'sim'

while running == 'sim':
    count, media, choice = 0, 0, 3
    
    while count < 2:
        number = float(input())
        if 0 <= number <= 10:
            count += 1
            media += number
        else:
            print("nota invalida")
    print('media = %.2f' %(media/2))
    
    while (choice != 1 and choice != 2):
        choice = int(input("novo calculo (1-sim 2-nao)\n"))
        if choice == 1:
            running = 'sim'
        elif choice == 2:
            running = 'nao'
        else:
            choice = int(input("novo calculo (1-sim 2-nao)\n"))