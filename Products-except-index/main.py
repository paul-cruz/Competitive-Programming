
def get_products_of_all_ints_except_at_index(lis):
    lisr = list()
    lisl = list()
    aux=1
    n=len(lis)
    for i in lis[::-1]:
        aux*=i
        if(i!=lis[0]):
            lisr.insert(0,aux)
        else:
            lisr.append(1)
    aux=1
    for i in lis:
        aux*=i
        if(i!=lis[n-1]):
            lisl.append(aux)
        else:
            lisl.insert(0,1)

    for i in range(n):
            lis[i]=lisl[i]*lisr[i]
    
    return lis

if __name__ == '__main__':
    fptr = open('output.txt', 'w')
    with open('input.txt','r') as input:
        l = [int(i) for i in input.readline().split(',')]
    fptr.write(str(get_products_of_all_ints_except_at_index(l))+'\n')

    fptr.close()

