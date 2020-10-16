def lapindrome(str,l):
   first_half=str[0:l//2]
   if l%2==0:
       second_half=str[l//2:l+1]
   else:
       second_half = str[l // 2 + 1:l + 1]
   left={}
   right={}

   for char in first_half:
       left[char]=left.get(char,0)+1
   

   for char in second_half:
       right[char] = right.get(char, 0) + 1
   
   if left==right:
       print("yes")
   else:
       print(("NO"))

str=input()
l=len(str)

lapindrome(str,l)

input  gadbad
output  no

input ghapaghap
output yes
