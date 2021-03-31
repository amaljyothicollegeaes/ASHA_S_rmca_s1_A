import csv
with open('temp.csv', newline='') as csvfile:
 data = csv.DictReader(csvfile)
 print("ID Name")
 for row in data:
   print(row['id'], row['Column1'])