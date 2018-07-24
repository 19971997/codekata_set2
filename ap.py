a = 0
n = int(input())
d = 1
for i in range(1,n):
 sum=a+d
 a=d
 d=sum
print(sum)
