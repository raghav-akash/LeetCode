class Solution {
public:
    string interpret(string command) {
        string s;
        for(int i=0;i<command.size();)
        {
            if(command[i]=='(' && command[i+1]==')')
            {
                s+='o';
                i=i+2;
            }
            else if(command[i]=='(' && command[i+1]=='a')
            {
                s+="al";
                i=i+4;
            }
            else{
                s+=command[i];
                i++;
            }
        }
        return s;
    }
};