import turtle
tutu=turtle.Turtle("turtle")
tutu.speed(1)
def pentagon(size,side):
    for i in range(side):
        tutu.forward(size)
        tutu.left(72)
# for i in range(0,100):
#     pentagon(150,5)
#     tutu.left(i)
    # pentagon(2*i,5)
    # tutu.right(i)
def randomShape(distance,angle=72):
    for shape in range (360):
        angle+=5
        #tutu.right(angle)
        for pentagon in range(6):
            tutu.forward(distance)
            tutu.left(angle)
randomShape(150)
turtle.exitonclick()
