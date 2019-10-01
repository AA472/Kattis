left, right = input().split()
left = int(left)
right = int(right)

if(right == left):
    if(right == 0):
        print("Not a moose")
    else:
        print("Even", right*2)
elif(right > left):
    print("Odd", 2*right)
elif (right < left):
    print("Odd", 2 * left)




