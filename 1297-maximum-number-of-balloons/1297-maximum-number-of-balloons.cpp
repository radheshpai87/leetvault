class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count = 0;
        int counta = 0; 
        int countb = 0;
        int countl = 0; 
        int counto = 0; 
        int countn = 0;

        for(char x : text) {
            switch(x) {
                case 'b': countb++; break;
                case 'a': counta++; break;
                case 'l': countl++; break;
                case 'o': counto++; break;
                case 'n': countn++; break;
            }

            if(countb >= 1 && counta >= 1 && countl >= 2 && counto >= 2 && countn >= 1){
                count++;
                countb -= 1;
                counta -= 1;
                countl -= 2;
                counto -= 2;
                countn -= 1;
            }
        }
        return count;
    }
};