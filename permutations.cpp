#include<iostream>
using namespace std;
void swap(char* a, char* b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
void permutation(char s[],int i,int len)
{
    int j;
    if (i == len)
        cout << s << "\n";
    else
    {
        for (j = i; j <=len; j++)
        {
            swap(s[i],s[j]);
            permutation(s, i + 1, len);
            swap(s[i],s[j]);
        }  
    }
}
 
int main()
{
    int num;
    cout << "Enter the number of characters: ";
    cin >> num;
    cout << endl << "The permutations of the given number of characters is: " <<endl;
    char s[num];
    for(int i=0;i<num;i++)
    {
    	s[i]=(i+97);
	}
    permutation(s, 0, num- 1);
    cout << endl;
    return 0;
}
