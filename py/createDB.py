import mysql.connector
mydb = mysql.connector.connect(
  host="localhost",
  user="myusername",
  passwd="mypassword"
)

mycursor = mydb.cursor()

mycursor.execute("CREATE DATABASE mydatabase")
