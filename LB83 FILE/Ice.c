#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("testdata.in", "r");	//di notes namanya ice
    int a,b;
    int n;

    fscanf(fp, "%d\n", &n);
    
    for(int i=1;i<=n;i++){
        int perimeter=0;
        int prev=0;
        int count=0;
        int cubes;
        
        fscanf(fp,"%d\n",&cubes);
        
        for(int j=1;j<=cubes;j++){
            int curr;
            
            fscanf(fp,"%d",&curr);
			fgetc(fp);
			
            perimeter+=4;
            if(j==1)perimeter+=2*curr;
            if(j==cubes)perimeter+=2*curr;
            count+=curr;
            if(prev)perimeter+=abs(curr-prev)*2;	//bikin jadi positif
            prev=curr;
        }
        printf("Case #%d: %d %d\n",i, perimeter, count*4);

    }
    return 0;
}