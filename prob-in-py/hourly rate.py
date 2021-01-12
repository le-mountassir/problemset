hrs = input("Enter Hours:")
rate = input("Enter Rate:")
try:
    h = float(hrs)
    r = float(rate)
except:
    print("you entered a wrong number")
if(h > 40):
    y = h - 40
    t = 40 * r + y *1.5*r
else:
    t=t
print(t)
