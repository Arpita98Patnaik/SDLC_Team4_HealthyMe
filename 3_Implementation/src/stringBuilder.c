
char* addToString(char* buff,char* ch){
	int sz = strlen(ch);
	if(buff==NULL){
		buff = (char*)malloc(sz+1);
		strcpy(buff,ch);
        buff[sz] = '\0';	
		}
	else{
		int bsz = strlen(buff);
		buff = (char*)realloc(buff,bsz+sz+1);
		strcat(buff,ch);
    	buff[bsz+sz]='\0';	
	}
    
	return buff;
	
}