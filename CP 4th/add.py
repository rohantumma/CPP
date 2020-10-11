from goto import with_goto

print("************ADDITION*************")
a=int(input("ENTER  A = "))
b=int(input("ENTER  B = "))
print("ADDITION = ",a+b)

@with_goto
def goto():
    label .begin
    a=int(input("0 to exit"))
    if(a==0):
        print("Byeeeeeeeeeeeeeeee")
        return 
    else:goto .begin
        
goto()