# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "dicthead.h"
# include "Stringlib.h"

void fileToList(char* f, struct entry* h)
{
    FILE* fp;
    fp=fopen(f,"r");
    char line[100];
    char* sf;
    char* ff;
    char delim[3]=":";
    char* ptr;
    
    while(fgets(line,sizeof(line),fp))
    {
        strcopy(strtok(line,delim),&sf);
        strcopy(strtok(NULL,delim),&ff);
        ptr=strchr(ff,'\n');
        
        if(ptr!=NULL)
        {
            *ptr='\0';
            
        }
        
        addWord(sf,ff,h);
    }
    free(sf);
    free(ff);
    free(ptr);
}

char* getNextToks(char* in,char* word,int n)
{
    char* token;
    in=strdup(in);
    token=strtok(in," ");
    char* ret=(char*)malloc(strlength(in));
    int c=0;
    
    while(token!=NULL)
    {
        if(strcompare(word,token)==0)
        {
            c=1;
        }
        
        if(c==1&&n!=0)
        {
            strcpy(strcat(ret,token),ret);         
            if(n!=1)
            {
                strcat(ret," ");
            }
            n--;
        }
        
        token=strtok(NULL," ");
    }
    return ret;
}

void replace(char* in,struct entry* h)
{
    char* token;
    token=strtok(in," ");
    char* rep;
    
    while(token!=NULL)
    {
        strcopy(matchFirstWord(token,h),rep);
        
        if(strcompare(rep,NULL)==0)
        {
            token=strtok(NULL," ");
        }
        else
        {
            
        }
    }
}

void main()
{
    struct entry* head;
    head=(struct entry*)malloc(sizeof(struct entry));
    head->next=NULL;
    head->word=NULL;
    head->mean=NULL;
    char* name;
    //name=concat("\\tmp\\",argv[argc-1]);
    printf("%d\n",countTok("hi hello how are"));
    printf("%s",getNextToks("by the way blah blah","by",4));
    //fileToList(name,head);
    //viewlist(head);
}