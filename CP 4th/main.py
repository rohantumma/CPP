from goto import with_goto
import os
j="E:/rohan/CSE 5/CP RPGRAM/CP 4th/dist"
jj="E:/rohan/CSE 5/CP RPGRAM/CP 4th/dist/"
p=os.listdir(j)
for i in p:
    print("\n",i)
string=input("ENTER FILE WANT TO RUN = ")
exe=string+".exe"
@with_goto
def find():
    for i in p:
        if exe==i:
            print("FILE FOUND")
            os.startfile(jj+string)
            goto .end
        else:
            print("FILE NOT FOUND")
    label .end
    return string
kkk=find()
print (kkk)