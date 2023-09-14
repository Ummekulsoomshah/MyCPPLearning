# def leap_year(days):
#     leap=False
#     if days%400==0:
#         leap=True
#     elif days%100==0:
#         leap=False
#     elif days%4==0:
#         leap=False
#     return leap
# print(leap_year(400))

# n=int(input("enter no"))
# for i in range(1,n+1):
#     print(i,end="")
# N = int(input("enter"))
# students = []
# for i in range(2*N):
#     students.append(input("enter list items").split())
# print(students)
# grades = {}

# for j in range(0, len(students), 2):
#     grades[students[j][0]] = float(students[j + 1][0])
# result = []
# num_to_match = sorted(set(grades.values()))[1]
# for pupil in grades.keys():
#     if grades[pupil] == num_to_match:
#         result.append(pupil)
# for k in sorted(result):
#     print(k)
# r=[]
# n=int(input("enter"))
# for j in range(n):
#     nes=[]
#     name=input("enter name")
#     grade=int(input("enter grade"))

#     for i in range(1):
#         nes.append(name)
#         nes.append(grade)
#     r.append(nes)
# print(r)
# only_grades=[]
# for l in r:
   
#    only_grades.append(l[1])

# l=[]

# for k in range(len(r)):
#     for l in r:
#         if (l[1]<only_grades[k] or l[1]==only_grades[k]) and l[1]<only_grades[k] and l[1]>min(only_grades):
#             f=l[1]
#             l.append(l[1])
#             if l[0] in l:
                
                
#                 l.append(l[0][k])

# for y in l:
#     print(y)
        
# scores=set()
# records=[]
# for i in range(int(input())):
#     name=input()
#     score=float(input())
#     scores.add(score)
#     records.append([name,score])
# scores=list(scores)
# scores.sort()
# second_lowest=scores[1]
# second_lowest_scores=[]
# for name,score in records:
#     if score==second_lowest:
#         second_lowest_scores.append(name)
# second_lowest_scores.sort()
# for name in second_lowest_scores.sort():
#     for name in second_lowest_scores:
#         print(name)

# def count_factor(g_o):
#     factor=1
#     count=1
#     if g_o==0:
#         return 0
#     while factor<g_o:
#         if g_o%factor==0:
#             count+=1
#         factor+=1
#     return count
# print(count_factor(4))
# def if_power_2(no):
#     while no%2==0:
#         no=no/2
#     if no==1:
#         return True
#     return False
# print(if_power_2(0))
# print(is_power_of_two(9))
# print(1+2+3+4+6+9+12+18)
# multiplier = 1
# result = multiplier*5
# while result <= 50:
#   print(result)
#   multiplier += 1
#   result = multiplier*5
# print("done")
# for x in range(2):
#     print("This is the outer loop iteration number " + str(x))
#     for y in range(3+1):
#         print("Inner loop iteration number " + str(y))
#     print("Exit inner loop")

# def count_users(group):
#   count = 0
#   for member in get_members(group):
#     if is_group(member):
#       count += count_users(member)
#     else:
#       count += 1
#   return count

# print(count_users("sales")) # Should be 3
# print(count_users("engineering")) # Should be 8
# print(count_users("everyone")) # Should be 18
# def elevator_floor(enter,exit):
#   floor=enter
#   elevator_direction=""
#   if enter > exit:
#     elevator_direction="going down"
#     while floor>=exit:
#       elevator_direction+=str(floor)
#       if floor>exit:
#         elevator_direction+="|"
#       floor-=1
#   else:
      
#       while floor<=exit:
#         elevator_direction+=str(floor)
#         if floor<exit:
#           elevator_direction+="|"
#         floor+=1
#   return elevator_direction
# print(elevator_floor(1,4)) # Should print Going up: 1 | 2 | 3 | 4
# print(elevator_floor(6,2)) # Should print Going down: 6 | 5 | 4 | 3 | 2
# def replace_domain(email,old_domain,new_domain):
  
#   if "@"+old_domain in email:
#     index=email.index("@"+old_domain)
#     new_email=email[:index]+"@"+new_domain
#     return new_email
#   return email
# print(replace_domain("shanzayzara09@gmail.com","shanzayzara","shanzayzara89"))
# s="kulsoom is pushed by allah he is always be helping even he is seeing that kulsoom is not a good muslim she is always be forbiding the orders of allah"
# print(s.count("a"))
# print("....".join(["this" ,"kulsoom ","is" ,"pushed", "by", "allah", "he"," is ","always"]))
# print("1234".isnumeric())
# print("kulsoom".isnumeric())
# print("kulsoom is pushed by allah he is always be helping even he is seeing that kulsoom is not a good muslim she is always be forbiding the orders of allah".split())
# name="kulsoom"
# no=64
# relaion={"sister":"aelia","father":"shabbbir","mother":"shahzadi"}
# a_muslim=True
# # print("hey{},your no is{},i know your relations these are{},you are a mulsim?{}".format(name,no,relaion,a_muslim))
# print("hey{name},your no is{no},i know your relations these are{relation},you are a mulsim?{a_muslim}")
# def replace_date(shedule,old_date,new_date):
#     if old_date in shedule:
        
#         new_shedule=shedule.replace(old_date,new_date)
#         return new_shedule
#     return shedule
# print(replace_date("Last year’s annual report will be released in March 2023", "2023", "2024")) 
# # Should display "Last year’s annual report will be released in March 2024"
# print(replace_date("in April, the CEO will hold a conference", "April", "May")) 
# # Should display "In April, the CEO will hold a conference"
# print(replace_date("The convention is scheduled for October", "October", "June")) 
# # Should display "The convention is scheduled for June"
# k="The convention is scheduled for October"
# old_date="October"
# p=len(old_date)
# new_shedule=k[:-p]+k[-p:]
# print(new_shedule)
# print(k)
# def replace_ending(sentence,exist,new):
#     p=len(exist)
    
#     new1=sentence[:-p]+sentence[-p:].replace(exist,new)
#     return new1

    
# print(replace_ending("It's raining cats and cats", "cats", "dogs")) 
# # Should display "It's raining cats and dogs"
# print(replace_ending("She sells seashells by the seashore", "seashells", "donuts")) 
# # Should display "She sells seashells by the seashore"
# print(replace_ending("The weather is nice in May", "may", "april")) 
# # Should display "The weather is nice in May"
# print(replace_ending("The weather is nice in May", "May", "April")) 
# Should display "The weather is nice in April"
# sentence="It's raining cats and cats"
# old="cats"
# new="dog"
# i = len(old)
# nn=sentence[:-i]+sentence[-i:].replace(old,new)
# s=["jk","kl","io","hj"]
# s=["kulsooom", "is"," a"," good"," grls"]
# for indexi,person in enumerate(s):
#     print("{} -{}".format(indexi+1,person))
# def full_email(people):
#     result=[]
#     for email,name in people:
#         result.append("{} <{}>".format(name,email))
#     return result
# print(full_email([("kulsoom@gamil.com","umme kusloom"),("umme@gmail.com","kulsoom")]))
# def skip_elements(elements):
# 	for i,item in enumerate(elements):
# 		if i%2==0:
# 			elements.remove(item)
#             print(elements)
	
# 	return skip_elements

# print(skip_elements(["a", "b", "c", "d", "e", "f", "g"])) # Should be ['a', 'c', 'e', 'g']
# print(skip_elements(['Orange', 'Pineapple', 'Strawberry', 'Kiwi', 'Peach'])) # Should be ['Orange', 'Strawberry', 'Peach']
# scores=set()
# records=[]
# for i in range(int(input("enter range"))):
#     name=input("enetr name of player")
#     score=float(input("enter score"))

#     scores.add(score)
#     records.append([name,score])
# scores=list(scores)
# second_lowest=scores[1]
# second_lowest_scorers=[]
# for name,score in records:
#     if score==second_lowest:
#         second_lowest_scorers.append(name)
# second_lowest_scorers.sort()
# for name in second_lowest_scorers:
    # print(name)
# years = ["January 2023", "May 2025", "April 2023", "August 2024", "September 2025", "December 2023"]


# updated_years = [year.replace("2023","2024") if year[-4:] == "2023" else year for year in years]


# print(updated_years) 
# filenames = ["program.c", "stdio.hpp", "sample.hpp", "a.out", "math.hpp", "hpp.out"]
# Generate newfilenames as a list containing the new filenames
# using as many lines of code as your chosen method requires.
# newfilenames=[file.replace("hpp","h") if file[-3:]=="hpp" else file for file in filenames]  

# print(newfilenames) 
# Should be ["program.c", "stdio.h", "sample.h", "a.out", "math.h", "hpp.out"]
# def object(listname,elments):
#     return "the "+listname+" contain the elemnts "+",".join(elments)
# print(object("kulsoom",["n","8","dfhjk","6"]))
# def list_elements(list_name, elements):

    
#     return "The " + list_name + " list includes: " + ", ".join(elements)


# print(list_elements("Printers", ["Color Printer", "Black and White Printer", "3-D Printer"])) 
# s="kulsoom"

# print(s.replace("oom","kkom"))
# def pig_latin(text):
    

#     words=text.split()
#     b=[]
#     for word in words:
#         a=word[1:]+word[0]+"ay"
#         b.append(a)
#     return " ".join(b)
        
# text = "hello how are you"
# pig_latin_text = pig_latin(text)
# print(pig_latin_text)
# def octal_to_string(octal):
#     result=""
#     b=[]
#     value_letters=[(4,"r"),(2,"w"),(1,"x")]
#     for n in str(octal):
#         b.append(int(n))
#         for i in b:
#             for value,letter in value_letters:
#                 if i>=value:
#                     result+=letter
#                     i-=value
#                 else:
#                     result+="-"
#     return result
# print(octal_to_string(755)) # Should be rwxr-xr-x
# def count_letters(text):
#     result={}
#     for letter in text:#individual letter ange
#         if letter not in result:#phli br toh nh hoga phr agr koi reptitaion hogi to yh if nh execute hogs
#             result[letter]=0
#         result[letter]+=1#yh hoga execute if letters repet hore honge or ab dictionary ki form me result ayega
#     return result
# print(count_letters("kkkk"))
# p = { "value" : 3, "children" :[{ "value" : 5, "children" :[{ "value" : 1, "children" : [ { "value" : 4, "children" : [ ] }]},{ "value" : 9, "children" : [ ] },{ "value" : 7,"children" :[{ "value" : 8, "children" : [ ] }]}]}]}

# p["children"]["children"]="laiba"
# print(p)



# def list_full_names(employee_dic):
#     full_names=[]
#     for l_n,f_n in employee_dic.items():
#         for f_ns in f_n:
#             f_n.append(f_ns+" "+l_n)
#     return(full_names)
# print(list_full_names({"Ali": ["Muhammad", "Amir", "Malik"], "Devi": ["Ram", "Amaira"], "Chen": ["Feng", "Li"]}))
# def invert_resource_dict(resource_dic):
#     new_dic={}
#     for resource_grp,resources in resource_dic.items():
#         for resource in resources:
#             if resource in new_dic:
#                 new_dic[resource].append(resource_grp)
#             else:
#                 new_dic[resource]=[resource_grp]
                
#     return(new_dic)
# # print(invert_resource_dict({"Hard Drives": ["IDE HDDs", "SCSI HDDs"], "PC Parts":  ["IDE HDDs", "SCSI HDDs", "High-end video cards", "Basic video cards"], "Video Cards": ["High-end video cards", "Basic video cards"]}))
# def alter_dic(first_dic):
#     new_dic={}
#     for x,y in first_dic.items():
#         for i in y:
#             if i in new_dic:
#                 new_dic[i].append(x)
#             else:
#                 new_dic[i]=[x]
#     return new_dic
# print(alter_dic({"Hard Drives": ["IDE HDDs", "SCSI HDDs"],
#         "PC Parts":  ["IDE HDDs", "SCSI HDDs", "High-end video cards", "Basic video cards"], "Video Cards": ["High-end video cards", "Basic video cards"]}))
# def complet_users(mix_dict):
#     only_email=[]
#     for h_mail,users in mix_dict.items():
#         for user in users:
#             i=user+"@"+h_mail
#             only_email.append(i)
#     return only_email
# print(complet_users({"gmail.com": ["clark.kent", "diana.prince", "peter.parker"], "yahoo.com": ["barbara.gordon", "jean.grey"], "hotmail.com": ["bruce.wayne"]}))
# wardrobe = {'shirt': ['red', 'blue', 'white'], 'jeans': ['blue', 'black']}
# new_items = {'jeans': ['white'], 'scarf': ['yellow'], 'socks': ['black', 'brown']}
# wardrobe.update(new_items)
# print(wardrobe)
# def sale(stringg):
#     text=""
#     prize=""
#     x=stringg.split()
#     for i in x:
#         if i.isalpha():
#             text+=i+" "
#         else:
#             prize=i
#     return ("{} is on sale for rp {}".format(text,prize))
# print(sale("cofee brown jacket 56"))
# y=[3,2,4,5]
# y.reverse()
# print(y)
# y={"Africa": ["Kenya", "Egypt", "Nigeria"], "Asia":["China", "India", "Thailand"], "South America": ["Ecuador", "Bolivia", "Brazil"]}

# for i in y.values():
#         print(i)
#def combine_guests(guests1, guests2):
#   guests2.update(guests1) # Use a dictionary method to combine the dictionaries.
#   return guests2

# Ricks_guests = { "Adam":2, "Camila":3, "David":1, "Jamal":3, "Charley":2, "Titus":1, "Raj":4}
# Tessas_guests = { "David":4, "Noemi":1, "Raj":2, "Adam":1, "Sakira":3, "Chidi":5}

# print(combine_guests(Ricks_guests, Tessas_guests))
# # Should print:
# # {'David': 1, 'Noemi': 1, 'Raj': 4, 'Adam': 2, 'Sakira': 3, 'Chidi': 5, 'Camila': 3, 'Jamal': 3, 'Charley': 2, 'Titus': 1}
# x="Math is fun! 2+2=4"
# d={}
# for i in range(len(x)):
# teacher_names = {"Math": "Aniyah Cook", "Science": "Ines Bisset", "Engineering": "Wayne Branon"}
# print(teacher_names.values())
# def endangered_animals(animal_dict):
#     result = ""
#     for animal, number in animal_dict.items():
#         result += "{} ({})\n".format(animal, number)
#     return result

# print(endangered_animals({"Javan Rhinoceros":60, "Vaquita":10, "Mountain Gorilla":200, "Tiger":500}))
# def endangered_animals(animal_dict):
#     result = ""
#     # Complete the for loop to iterate through the key and value items 
#     # in the dictionary.    
#     for i,j in animal_dict.items():

#         # Use a string method to format the required string.
#         result +=i+"\n" 
#     return result


# print(endangered_animals({"Javan Rhinoceros":60, "Vaquita":10, "Mountain Gorilla":200, "Tiger":500}))
# def exchange_apples(you, me):
        
#         temp=you.apples
#         you.apples=me.apples
#         me.apples=temp
#         return you.apples, me.apples
    
# def exchange_ideas(you, me):
    
#     temp=you.ideas
#     you.ideas=me.ideas
#     me.ideas=temp
#     return you.ideas, me.ideas

# exchange_apples(johanna, martin)
# print("Johanna has {} apples and Martin has {} apples".format(johanna.apples, martin.apples))
# exchange_ideas(johanna, martin)
# # print("Johanna has {} ideas and Martin has {} ideas".format(johanna.ideas, martin.ideas))       
# n=int(input())
# d={}

# for i in range(int(input())):
#     name,*ass=input().split()
    
#     scores=[]
#     for i in ass:
#         ass=int(ass)

#     scores.append(ass)
#     d[name]=scores
    
# print(d)
# query=input()
# avg=sum(d[query])/len(query)
# v="{:.2f}".format(avg)
# print(v)
# take two integers as input on a single line
# a, b = input().split()
# a=int(a)
# b=int(b)

# # convert the inputs to integers

# print(a)
# print(b)
# n = int(input())  # number of students' records

# # create an empty dictionary to store the student records
# records = {}

# # read in the student records and store them in the dictionary
# for i in range(n):
#     name, *marks = input().split()
#     marks = list(map(float, marks))
#     records[name] = marks

# # read in the name of the student to query
# query_name = input()

# # calculate the average of the marks for the given student
# query_marks = records[query_name]
# query_avg = sum(query_marks) / len(query_marks)

# # print the average of the marks, rounded to 2 decimal places
# print("{:.2f}".format(query_avg))

# file=open("software.text","r")
# w=file.read()
# r=w.split()
# c=0
# for i in range(len(r)):
#     c+=1
# print(c)

# print(file.read())
# print(file.readlines())
# print(file.readline())
# word=file1.split()
# for i in word:
#     print(i)
#     for j in i:
#         print(j)

# n=int(input())
# d={}
# for i in range(n):
#     name=input()
#     n1=int(input())
#     l=[]
#     for i in range(n1):
#         name,a,a,a=input().split
#         a=int(a)
#         l.append(a)
#     d[name]=l
# print(d)
# def is_power_of_two(number):
#     while number%2==0:
#         number=number/2
#     if number==1:
#         return True
#     return False
# print(is_power_of_two(0))
# print("kulsoom")
# scores=[]
# records=[]
# for i in range(4):
#     name=input()
#     score=int(input())
#     scores.append(score)
#     records.append([name,score])
# scores.sort()
# s=[]
# second_lowest=scores[1]
# for name,score in records:
#     if score==second_lowest:
#         s.append(name)
# for i in s:
#     print(i)

# def count_factor(g_no):
#     factor=1
#     count=1
#     while factor<g_no:
#         if g_no%factor==0:
#             count+=1
#         factor+=1
#     return count
# print(count_factor(5))
# def power_of_2(no):
#     while no%2==0:
#         no=no/2
#     if no==1:
#         return False
#     return True
# # print(power_of_2(2))
# for i in range(1,5):
#     for j in range(2*i-1):
#         print(i[1:3])

# for i in range(1,5):
# for i in range(1,5):
    
    
# # for i in range(1,5):
#     for j in range(i,0,-1):
#         print(j,end=" ")
    
   
    
    # for j in range(2,i+1):
    #     print(j,end=" ")
    # print()
# n = int(input("Enter the number of rows: "))

# for i in range(1, n+1):
#     for j in range(1, n-i+1):
#         print(end=" ")

#     for j in range(i, 0, -1):
#         print(j, end=" ")

#     for j in range(2, i+1):
#         print(j, end=" ")

#     print()
# for i in range(1,6):
#     for j in range(1,i+1):
#         print(j,end=" ")
    
#     for j in range(i-1,0,-1):
#         print(j,end=" ")
#     print()
# for i in range(1,6):
#     for j in range(1,i+1):
#         print(j,end="")
#     for j in range(i-1,0,-1):
#         print(j,end="")
#     print()

# for i in range(1,6):
#     print("".join(str(j) for j in range(1,i+1)) + "".join(str(j) for j in range(i-1,0,-1) ))
# n=["i"," am"," umme"," kulsoom"]
# n1="".join(n)
# w=n1.split()
# w.sort()
# for i in w:
#     print(i)
# n=int(input())
# l=""
# for i in range(n):
#     i=input()
#     l+=i+" "
# l1=l.split()
# l1.sort()

# l2=list(filter(lambda x: x>10 and x<80,l))
# for i in l1:
#     l2.append(i)
# print(l2)
# import re
# def varify_email(email):
#     pattern=r'^[a-zA-Z0-9_-]+@[a-zA-Z0_9]+\.[a-zA-Z]{1,3}$'
#     return re.match(pattern,email)

# n=int(input())
# email=[input() for i in range(n)]
# x=sorted(filter(varify_email,email))
# print(x)
# import re

# def is_valid_email(email):
#     pattern = r'^[a-zA-Z0-9_-]+@[a-zA-Z0-9]+\.[a-zA-Z]{1,3}$'
#     return re.match(pattern, email)

# n = int(input())
# emails = [input().strip() for i in range(n)]
# valid_emails = sorted(filter(is_valid_email, emails))

#print(valid_emails)
# import re
# def varify_email(email):
#     pattern=r'^[a-zA-Z0-9_-]+@[a-zA-Z0-9]+\.[a-zA-Z]{1,3}$'
#     re.match(pattern,email)
# n=int(input())
# email=[input() for i in range(n)]
# x=sorted(filter(varify_email,email))
# # print(x)
# import re
# def fun(s):
#     emailed=[]
#     if bool(re.match(r'^([a-z0-9_\-]+)@([a-z0-9]+)\.([a-z]{1,3})$',s)):
#         emailed.append(s)
#     elif s=="":
#         return []
#     return emailed

# def filter_email(emails):
#     return(list(filter(fun,emails)))
# n=int(input())
# emails=[]
# for i in range(n):
#     emails.append(input())

# filtered=filter_email(emails)
# filtered.sort()
# print(filtered)
# import re
# def fun(s):
#     emailed=[]
#     if bool(re.match(r'^([a-z0-9_\-]+)@([a-z0-9]+)\.([a-z]{1,3})$',s)):
#         emailed.append(S)
#     elif s=="":
#         return []
#     return emailed



# def filter_mail(emails):
#     return list(filter(fun, emails))

# if __name__ == '__main__':
#     n = int(input())
#     emails = []
#     for _ in range(n):
#         emails.append(input())

# filtered_emails = filter_mail(emails)
# filtered_emails.sort()
# print(filtered_emails)
# if __name__ == '__main__':
#     # Read input
#     n, m = map(int, input().split())
#     arr = [list(map(int, input().split())) for _ in range(n)]
#     k = int(input().strip())

#     # Define comparison function
#     def compare(row):
#         return row[k]

#     # Sort rows based on comparison function
#     sorted_arr = sorted(arr, key=compare)

#     # Print sorted table
#     for row in sorted_arr:
#         print(*row)
# n,m=map(int,input().split())
# print(n)
# n,m=map(int,input().split())
# arr=[list(map(int,input().split()))for i in range(n)]
# k=int(input())
# def compare(row):
#     return row[k]
# sorted_list=sorted(arr,key=compare)
# for i in sorted_list:
#     print(*i)
# n=int(input())
# k=[]
# for i in range(n):
    
#     name,score=input().split()
#     score=int(score)
#     a=[name,score]
#     k.append(a)
# def compare(row):
#     return (-row[1],len(row[0]))

# sorted_l=sorted(k,key=compare)
# for i in sorted_l:
#     print(*i)
# n=int(input())
# k=[]
# for i in range(n):
#     name,score=input().split()
#     score=int(score)
#     a=[name,score]
#     k.append(a)
# def compare(row):
#     return (-row[1],len(row[0]))
# sorted_l=sorted(k,key=compare)
# for i in k:
#     print(*i)
# n=input()
# upper =[]
# lower=[]
# evendi=[]
# odddigi=[]

# for i in n:
#     if i.isupper():
#         upper.append(i)
#     elif i.islower():
#         lower.append(i)
#     elif i.isdigit():
#         if int(i)%2==0:
#            evendi.append(i)
#         else:
#             odddigi.append(i)

# w="".join(sorted(lower)+sorted(upper)+sorted(odddigi)+sorted(evendi))
# print(w)
# def minion_game(string):
#     k_s,s_s=0,0
#     voval=["A","E","I","O","U"]
#     for i in range(len(string)):
#         if string[i] in voval:
#             k_s+=len(string)-i
#         else:
#             s_s+=len(string)-i
# string=input()
# V=0
# C=0
# for i in string:
#     if i in 'aeiouAEIOU':
#         V+=1
#     else:
#         C+=1
# print(C)
# print(V)
# import numpy as np
# a=int(input())
# b=int(input())
# c=((a**2)+(b**2))**0.5
# print(c)
# c1=c/2
# angle=np.arccos(c1/b)
# deg=angle*57.2958
# ans="{:.0f}".format(deg)
# intt=int(ans)
# print ("%d°" % intt)
# importing the module
# import math

# # taking the input from user
# ab = float(input())
# bc = float(input())

# # finding the distance 
# ac = math.sqrt((ab*ab)+(bc*bc))

# angle=math.atan(ab/bc)

# print (str(int(round(math.degrees(angle))))+'°')


# # equalizing the sides 
# b = mc
# c = bm
# a = bc

# # where b=c
# # finding the angle in radian
# angel_b_radian = math.acos(a / (2*b))

# # converting the radian to degree
# angel_b_degree = int(round((180 * angel_b_radian) / math.pi))

# # printing with degree
# print(angel_b_degree,'\u00B0',sep='')

# from math import atan,degrees
# a=input()
# b=input()
# k=atan(1.0*a/b)
# print (str(int(round(degrees(k))))+'°')

# import math

# # Take the length of the two sides as input
# a = float(input())
# b = float(input())

# # Calculate the length of the hypotenuse
# c = math.sqrt(a**2 + b**2)

# # Calculate the cosine of the angle opposite to the smaller side
# cos_angle = (c**2 + b**2 - a**2) / (2 * c * b)

# # Calculate the angle in radians
# angle_rad = math.acos(cos_angle)

# # Convert the angle to degrees and round to the nearest integer
# angle_deg = round(math.degrees(angle_rad))

# # Print the angle in degrees
#print(f"{angle_deg}°")
# r=[[1,2],
#    [3,4],
#    [5,6]]

# # x=[]
# # y=[]
# # for i in range(len(r)):
# #     for j in range(len(r[i])):
# #         if j==0:
# #             x.append(r[i][j])
# #         else:
# #             y.append(r[i][j])
    
# z=[[r[i][0] for i in range(len(r))],[r[i][j] for i in range(len(r)) for j in range(1, len(r[i]))]]  
# print(z) 


# n = int(input())
# arr = list(map(int, input().split()))
# x=sorted(arr,reverse=True)
# print(x[1])
# n=input()
# arr=map(int,input().split())
# def find_runner_up_score(n, arr):
#     unique_scores = sorted(set(arr), reverse=True)
#     # Return the second highest score
#     print(find_runner_up_score(n,arr))
# n1=input()
# arr1=map(int,input().split())
# def find_runner_up_score(n, arr):
#     unique_scores = sorted(set(arr), reverse=True)
#     # Return the second highest score
# x=find_runner_up_score(n1, arr1)
# n=input()
# l=[]
# u=[]
# o=[]
# e=[]
# for i in n:
#     if i.islower():
#         l.append(i)
#     elif i.isupper():
#         u.append(i)
#     elif i.isdigit():
#         if int(i)%2!=0:
#             o.append(i)
#         else:
#             e.append(i)
            
# print(sorted(l))
# ans="".join(sorted(l)+sorted(u)+sorted(o)+sorted(e))
# print(ans)
# def ini(sen,old,new):
#     if sen.endswith(old):
#         i=len(old)
#         new=sen[1:-i]+sen[-i:].replace(old,new)
#         return new
#     return sen
# x=[]
# list=["sjdsjk.hpp","adksjh.hpp","hghf.hpp","hvghv.hpp"]
# for i in list:
#     if i[-3:]=="hpp":
#         x.append(i.replace("hpp","h"))
#     else:
#         x.append(i)
# print(x)

# def ss(string):
#     x=string[0:1]
#     y=string[-1:]
#     re=string.replace(x,y)+string[1:]
# x=[2,3,5,8]
# for i in x:
#     print(i)
# def print_full_name(first, last):
#     s="Hello "+first+" "+last+"! You just delved into python"

#     return s
#     # Write your code here

# if __name__ == '__main__':
#     first_name = input()
#     last_name = input()
#     print_full_name(first_name, last_name)
# def calculate_storage(filesize):
#     block_size = 4096
#     # Use floor division to calculate how many blocks are fully occupied
#     full_blocks = block_size//filesize
#     # Use the modulo operator to check whether there's any remainder
#     partial_block_remainder = block_size%filesize
#     # Depending on whether there's a remainder or not, return
#     # the total number of bytes required to allocate enough blocks
#     # to store your data.
#     if partial_block_remainder > 0:
#         return block_size*2
#     return block_size

# print(calculate_storage(1))    # Should be 4096
# print(calculate_storage(4096)) # Should be 4096
# print(calculate_storage(4097)) # Should be 8192
# print(calculate_storage(6000)) # Should be 8192
# def calculate_storage(filesize):
#     block_size = 4096
#     full_blocks = filesize // block_size
#     partial_block_remainder = filesize % block_size
#     if partial_block_remainder > 0:
#         return (full_blocks + 1) * block_size
#     else:
#         return full_blocks * block_size
# print(calculate_storage(1))    # Should be 4096
# print(calculate_storage(4096)) # Should be 4096
# print(calculate_storage(4097)) # Should be 8192
# print(calculate_storage(6000)) # Should be 8192
# def cl_st(filsize):
#     block=4096
#     no_o_blk=filsize//block
#     file_remin=filsize%block
#     if file_remin>0:
#         return (no_o_blk+1)*block
#     else:
#         return no_o_blk*block
# print(cl_st(90))
# def sumfac(no):
#     divi=1
#     total=0
#     if no==1:
#         return 0
#     while divi<no:
#         if no%divi==0:
#             total+=1
#         divi+=1
#     return total
# def ispower(n,b):
#     if n<b:
#         return n==1
#     else:
#         return ispower(n//b,b)
# def sumdivisors(n):
#     total=0
#     divi=1
#     if n<divi:
#         return 0
#     while divi<n:
#         if n%divi==0:
#             total+=1
#         divi+=1
#     return total

        

