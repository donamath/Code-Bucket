#Problem statement
'''
Hotel Wiring

A construction company has decided to let an inexperienced electrician work on power supply wiring for their newest hotel building. After the construction and wiring of the building has been completed, it was identified that the electrician has made a mistake in wiring and it will take a significant amount of time to fix the issue.


The hotel consists of MM floors and each floor has NN rooms. Power supply to rooms is controlled by one master switch on each floor. By design, power is supplied to all the rooms on a floor if and only if the master switch of that floor is on. However due to the electrician's mistake in wiring, some rooms have incorrect wiring and their power is supplied the other way around. A room with incorrect wiring receives power if and only if the master switch of its floor is off.


There can be both correctly and incorrectly wired rooms on a same floor. For example, consider a floor has 44 rooms with correct wiring and 22 rooms with incorrect wiring. If the master switch of that floor is on, 44 rooms will have power and 22 rooms will not have power. If the master switch is off, then, 44 rooms will not have power and 22 rooms will have power.


The company does not want to spend extra money to fix the wiring mistake. Instead, they decide to first turn on all the master switches, and then turn off exactly KK of them to maximize the total number of rooms across all floors that will receive power.


Standard input
The first line has a single integer TT, the number of test cases.

For each test case, the first line consists of there integers MM, NN and KK where MM is the number of floors in the hotel, NN is the number of rooms per floor, and KK is the exact number of master switches that will be turned off.

For each of the the next MM lines, there is a single integer between 00 and NN that indicates the number of rooms that are wired correctly on one floor.


Standard output
For each test case, output in a single line the maximum number of rooms that may receive power.
'''

#Solution
T = int(input())

result=[]
for i in range(T):
    M,N,K = map(int, input().split(' '))
    m=[]
    for j in range(M):
        a = int(input())
        m.append(a)

    m.sort()

    p=0
    if(K!=M):
        for x in range(K):
            p = p + (N - m[x])

        for y in range(K,M):
            p = p + m[y]

    else:
        for x in range(0,M):
            p = p + (N - m[x])

    result.append(p)

for i in result:
    print(i)
