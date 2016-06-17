struct entry{
struct entry* next;
char* word;
char* mean;
};
void addWord(char* ,char* ,struct entry* );
void removeWord(char* , struct entry**);
void referWord(char*,struct entry* );
void viewlist(struct entry*);