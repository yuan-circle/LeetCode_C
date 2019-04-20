/***************************
Same as my CPP solution.
***************************/

int lengthOfLastWord(char* s) {
    int end = strlen(s) - 1;
    int length = 0;
    while(end >= 0){
        if(s[end] == ' '){
            end--;
        }
        else{
            break;
        }
    }
    while(end >= 0){
        if(s[end] != ' '){
            length++;
            end--;
        }
        else{
            break;
        }
    }
    return length;
}
