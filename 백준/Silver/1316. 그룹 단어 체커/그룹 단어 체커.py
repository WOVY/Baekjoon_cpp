N=int(input())
sum=0
for j in range(N):
    L=[0 for _ in range(26)]

    S=input()
    
    if len(S)==1:
        sum+=1
        continue

    L[ord(S[0])-97]=1

    for i in range(1,len(S)):
        if S[i]==S[i-1]:
            pass
            
        elif S[i]!=S[i-1]:
            if L[ord(S[i])-97]==0:
                L[ord(S[i])-97]=1
                
            else:
                break
                
        if i==len(S)-1:
            sum+=1

print(sum)