max = None
min = None
while True:
    try:
        nums = input("enter nums: ")
        if(nums == 'done'):
            break
        nums = int(nums)
        if min is None:
            min = nums
        elif(nums < min):
           min = nums
        if max is None:
            max = nums
        elif(nums > max):
            max = nums
    except:
        print("Invalid input")
print("Maximum is", max)
print("Minimum is", min)