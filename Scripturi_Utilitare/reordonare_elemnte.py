with open("Siruri.txt", "r") as file:
    lines = file.readlines()

list1 = []
list2 = []

for line in lines:
    parts = line.strip().split()

    if len(parts) == 2:
        list1.append(parts[0])
        list2.append(parts[1])

list1.sort()
list2.sort()

output1 = ",".join(list1)
output2 = ",".join(list2)


with open("Siruri1.txt", "w") as file:
    file.write(output1 + "\n")
with open("Siruri2.txt", "w") as file:
    file.write(output2 + "\n")

print("Length of List1:", len(list1))
