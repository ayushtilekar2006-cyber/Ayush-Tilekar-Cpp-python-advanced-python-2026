# append to an existing file called ayush.txt
# It should contain data about ayush's Hometown

f = open("ayush.txt", "a")
string = '''
ayush initially lived in India . He is a very nice guy and he is very good at programming . 
His favourite package is Pandas
'''
f.write(string)
f.close()