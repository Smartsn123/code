k=raw_input()
k=int(k)
ls=[]
for i in range(k):
   wrd=raw_input()
   ls.append(wrd)
n=raw_input()
new_ls=raw_input().split()
string=""
for wrd in new_ls:
    if wrd not in ls:
       string+=wrd[0].upper()+'.'


print string[0:len(string)-1]

