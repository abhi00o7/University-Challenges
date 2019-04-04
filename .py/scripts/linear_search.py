def linear(array,x):
    for i in range(len(array)):
        if (array[i]==x):
            return 'present at',i+1
    return 'nahi hai ji'
array=[2,8,69,75,755,68,23]
print(linear(array,755))
