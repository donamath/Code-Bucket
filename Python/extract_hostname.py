#Extracting hostname from an email id using regular expressions

import re

mail = input("Enter an email id: ") 

host_name = re.findall('@([^ ]*)' , mail)

print("Host name: " + host_name[0])
