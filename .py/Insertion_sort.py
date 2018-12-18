#insertion sort program
def insertion_sort(list):
    for index in range(1,len(list)):
        value=list[index]
        i=index-1
