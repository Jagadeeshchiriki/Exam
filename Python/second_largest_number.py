# with own logic

numbers = [int(i) for i in [ x for x in input("Enter numbers separated by space: ").split() if x.isdigit()]]

if len(numbers) < 2:
    print("Error: need at least two numbers.")
else:
    second=0
    first =0      

    for n in numbers:
        if first is None or n > first:
            second = first
            first = n
        elif n != first and (second is None or n > second):
          
            second = n

    if second is None:
        print("All numbers are the same")
    else:
        print("Second largest:", second)



# # with python methods
numbers = [int(i) for i in [ x for x in input("Enter numbers separated by space: ").split() if x.isdigit()]]


unique = sorted(set(numbers))

if len(unique) < 2:                 
    print("Error: Need at least two distinct numbers.")
else:
    print("Second largest number:", unique[-2])
