#import turtle module
import turtle
#give a name to your Turtle
tutu=turtle.Turtle()
tutu.speed(0)
#defining a turtle to make a circle
def shape(length,angle):
    for n in range(0,360):
        tutu.right(angle)
        tutu.forward(length)
        tutu.right(angle)
    for o in range(0,360):
        tutu.backward(length)
        tutu.left(angle)

shape(1,1)
shape(1,-1)
shape(2,-1)
shape(2,1)
shape(3,1)
shape(3,-1)

'''    for l in range(0,360):
        tutu.forward(length)
        tutu.left(angle)
    for m in range(0,360):
        tutu.forward(length)
        tutu.right(angle)'''
