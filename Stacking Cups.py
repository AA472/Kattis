number = int(input())
new_dict = {}
for i in range(number):
    var1, var2 = input().split()
    if var1.isnumeric():
        value = int(var1)
        value = int(value/2)
        color = var2
    else:
        value = int(var2)
        color = var1
    new_dict[color] = value
for j in sorted(new_dict,key=new_dict.get):
    print (j)

