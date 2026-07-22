# write to a file called ayush.txt
# it should contain data about ayush

import string


f = open("ayush.txt", "w")
string = '''
ayush is nice guy . he live in nyc and he work with python . 
His favourite package is Pandas
'''
f.write(string)
f.close()