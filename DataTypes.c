    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    
    int i= 4;
    double d= 4.0;
    char s[]= "HackerRank ";
    
    int a;
    double f;
    char s1[200];
    
    scanf(" %d %lf %200[^\n]", &a, &f, s1);
    
    int sum1 = i+a;
    printf("%d\n", sum1);
   
    double sum2 = d+f;
    printf("%.1lf\n", sum2);
   
    fputs(s, stdout);
    fputs(s1, stdout);

  return 0;
