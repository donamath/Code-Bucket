#include<stdio.h>
#include<string.h>
int palindrome(char s[],int i,int j){
	if (i > j)
	{
        return 1;
	}
 	if(i==j)
 		return 0;
    if (s[i] != s[j])
        return  0;
        
    return palindrome(s, i + 1, j - 1);
}



int main(){
	char str[8]="abbaeae";
	int l=strlen(str);
	int count=0;

	 for(int i=3;i<l;i++){
        for(int j=i;j<l;j++){
            if(palindrome(str,i,j)){
                printf("%d%di,j,",i,j);
                count++;
            }    
        }
    }
    printf("%d\n",count);
}
