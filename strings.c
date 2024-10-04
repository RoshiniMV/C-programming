 #include<stdio.h>
 int main()
 {
    char str[100];
    int i,len=0;
     printf("enter the string");
     scanf("%[^\n]s",str);
     for(i=0;str[i];i++)
     {
        if(str[i]!="\0")
         len++;
     }
    printf("length=%d",len);
 }
