def computepay(h,r):
    ho = float(h)
    ra = float(r)
    if(ho > 40):
        y = ho - 40
        res = y * ra*1.5 + ra * 40
    else:
        res = ra * ho
    return res

hrs = input("Enter Hours:")
rt = input("Enter Rate:")
p = computepay(hrs,rt)
print("Pay",p)
