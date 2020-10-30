'''
Wolf of Codestreet

It's that time of year. The wolves are assembling in the Codestreet. The coder wolves are specialized in different programming languages. You are the organizer. It is your duty to divide the wolves into a pack of 2. You must determine the maximum number of programming languages (M) a pack can know. Also, find out how many ways a pack can be formed that knows M number of programming languages. The list of programming languages is [L1, L2, L3, ... ].
+ means the programming language is known by the wolf, - for otherwise.
For example, given three wolves' data as follows:

+-+-+
++++-
---+-

Possible teams: (Here W->Wolf, L-> Programming Language)
(W1,W2)-> [L1, L2, L3, L4, L5]
(W1,W3)->[L1, L3, L4, L5]
(W2,W3)->[L1, L2, L3, L4]
In this case, the first team will know all 5 languages. They are the only team that can be created knowing that many languages.

Input Format

The first line contains two space-separated integers N and M, where N represents the total number of wolves and M represents the number of programming languages.
Each of the next lines contains a binary string of length M. If the ith line's jth character is "+", then the ith wolf knows the jth programming language.

Constraints

2 ≤ N ≤ 500
1 ≤ M ≤ 500

Output Format

On the first line, print the maximum number of programming language a pack of two wolves can know(i.e. M).
On the second line, print the number of ways to form a 2-wolf team that knows the maximum number of programming languages.
'''

#Solution is the implementation of XOR function


a,b=map(int,input().split())
l=[]
for i in range(a):
    l.append(str(input()))
'''n=[]
for j in l:
    m=''
    for k in range(5):
        if(j[k]=='+'):
            m=m+'1'
        else:
            m=m+'0'
    n.append(m)
print(n)
print(n[0]|n[1])'''

answer=[]
for k in range(a-1):
    for m in range(k+1,a):
        ans=''
        for x in range(b):
            if(l[k][x]==l[m][x]):
                if(l[k][x]=='+'):
                    ans=ans+'1'
                else:
                    ans=ans+'0'
            else:
                ans=ans+'1'
        answer.append(ans)
c=[]
for y in answer:
    c.append(y.count('1'))
print(max(c))
print(c.count(max(c)))
    
