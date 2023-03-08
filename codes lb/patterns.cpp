#include<iostream>
using namespace std;
int main(){
// normal star pattern
int x;
cin>>x;
                // for(int i=0;i<x;i++){
                //     for (int j = 0; j < x; j++)
                //     {
                //         cout<<"*";
                //     }
                    
                //     cout<<endl;


// COUNTING PATTERN
                // for (int i = 1; i <=x; i++)
                // {
                //     for (int j = 1; j <=x; j++)
                //     {
                //         cout<<i;
                //     }
                //     cout<<endl;
                    
                // }
// pattern like 1 2 3 4 
                // for (int i = 0; i < x; i++)
                // {

                //     for (int j = 1; j <=x; j++)
                //     {
                //         cout<<j;
                //     }
                //     cout<<endl;
                    
                // }
// pattern like 4 3 2 1
                // for (int i = 0; i < x; i++)
                // {

                //     for (int j = 1; j <=x; j++)
                //     {
                //         cout<<x-j+1;
                //     }
                //     cout<<endl;
                    
                // }
// pattern like 1 2 3 
//              4 5 6
                // int y=1;
                // for (int i = 0; i < x; i++)
                // {

                //     for (int j = 1; j <=x; j++)
                //     {
                //         cout<<y;
                //         y++;
                //     }
                //     cout<<endl;
                    
                // }
// pattern like *
//              **  
//              ***
//              ****

                // for (int i = 1; i <=x; i++)
                // {
                //     for (int j = 1; j <=i; j++)
                //     {
                //         cout<<"*";
                //     }
                //     cout<<endl;
                // }
// pattern like 1
//              22 
//              333
//              4444

                // for (int i = 1; i <=x; i++)
                // {
                //     for (int j = 1; j <=i; j++)
                //     {
                //         cout<<i;
                //     }
                //     cout<<endl;
                // }
// pattern like 1
//              23 
//              456
//              78910
                // int count=1;
                // for (int i = 1; i <=x; i++)
                // {
                //     for (int j = 1; j <=i; j++)
                //     {
                //         cout<<count;
                //     count++;
                //     }
                //     cout<<endl;
                // }
// pattern like 1
//              23 
//              345
//              4567
                // for (int i = 1; i <=x; i++)
                // {
                // int count=i;
                //     for (int j = 1; j <=i; j++)
                //     {
                //         cout<<count;
                //     count++;
                //     }
                    
                //     cout<<endl;
                // }
// pattern like 1
//              21 
//              321
//              4321
                // for (int i = 1; i <=x; i++)
                // {
                // int count=i;
                //     for (int j = 1; j <=i; j++)
                //     {
                //         cout<<count;
                //         count--;
                //     }
                    
                //     cout<<endl;
                // }
// pattern like AAA
//              BBB
//              CCC
                    // char ch='A';
                    // for (int i = 0; i < x; i++)
                    // {
                    //     for (int j = 0; j < x; j++)
                    //     {
                    //         cout<<ch;
                    //     }
                    //     cout<<endl;
                    //     ch++;
                        
                    // }
// pattern like ABC
//              ABC
//              ABC

                    // for (int i = 0; i < x; i++)
                    // {
                    //         char ch='A';
                    //     for (int j = 0; j < x; j++)
                    //     {
                    //         cout<<ch;
                    //     ch++;
                    //     }
                    //     cout<<endl;
                        
                    // }
// pattern like ABC
//              DEF
//              GHI

                    //         char ch='A';
                    // for (int i = 0; i < x; i++)
                    // {
                    //     for (int j = 0; j < x; j++)
                    //     {
                    //         cout<<ch;
                    //     ch++;
                    //     }
                    //     cout<<endl;
                        
                    // }
// pattern like A
//              BB
//              CCC           

                    //         char ch='A';
                    // for (int i = 1; i <=x; i++)
                    // {
                    //     for (int j = 1; j <=i; j++)
                    //     {
                    //         cout<<ch;
                    //     }
                    //     cout<<endl;
                    //     ch++;
                        
                    // }
// pattern like A
//              BC
//              DEF           

                    //         char ch='A';
                    // for (int i = 1; i <=x; i++)
                    // {
                    //     for (int j = 1; j <=i; j++)
                    //     {
                    //         cout<<ch;
                    //     ch++;
                    //     }
                    //     cout<<endl;
                        
                    // }
// pattern like A
//              BC
//              CDE          
                    // char ch='A';
                    // for (int i = 1; i <=x; i++)
                    // {
                            
                    //     for (int j = 1; j <=i; j++)
                    //     {
                    //         cout<<ch;
                    //     ch++;
                    //     }
                    //     ch='A'+i;
                    //     cout<<endl;
                        
                    // }
// pattern like D
//              CD
//              BCD          
                    // char ch='A'+x-1;
                    // for (int i = 1; i <=x; i++)
                    // {
                          
                    //     for (int j = 1; j <=i; j++)
                    //     {
                    //         cout<<ch;
                    //     ch++;
                    //     }
                    //      ch='A'+x-i;
                    //     ch--;
                    //     cout<<endl;
                        
                    // }
// pattern like   *
//               ** 
//              ***
                    // for (int i = 1; i <=x; i++)
                    // {
                    //     for (int j = x-i+1; j >1 ; j--)
                    //     {
                    //         cout<<" ";
                    //     }
                        
                    //     for (int j = 1; j <=i; j++)
                    //     {
                    //         cout<<"*";
                    //     }
                    

                    //     cout<<endl;
                        
                    // }
// pattern like ***
//              ** 
//              *
                    // for (int i = 1; i <=x; i++)
                    // {
                      
                    //     for (int j = x-i+1; j >=1; j--)
                    //     {
                    //         cout<<"*";
                    //     }
                    

                    //     cout<<endl;
                        
                    // }
    
// pattern like   *
//               ** 
//              ***
                    // for (int i = 1; i <=x; i++)
                    // {
                    //     for (int j = 1; j <=i; j++)
                    //     {
                    //         cout<<" ";
                    //     }
                    //     for (int j = x-i+1; j >1 ; j--)
                    //     {
                    //         cout<<"*";
                    //     }
                        
                    

                    //     cout<<endl;
                        
                    // }
//pattern     1
//           121
//          12321
                    // for (int i = 1; i <=x; i++)
                    // {
                    //     for (int j = 1; j <=x-i; j++)
                    //     {
                    //         cout<<" ";
                    //     }
                    //     for (int j = 1; j <=i; j++)
                    //     {
                    //         cout<<j;
                    //     }
                    //     int start=i-1;
                    //     for (int j = 1; j <=i; j++)
                    //     {
                        
                    //        if (start==0)        
                    //        {
                    //         continue;
                    //        }
                        
                    //         cout<<start;
                    //         start--;
                    //     }
                        
                        
                    //     cout<<endl;
                    // }
// dabbang pattern   1234554321
//                   1234**4321
//                   123****321
//                   12******21
//                   1********1

for (int  i = 1; i <=x; i++)
{
    for (int j = 1; j <=x-i+1; j++)
    {
        cout<<j;
    }
    

for (int j = 0; j < i-1; j++)
{
    cout<<"*";
}
for (int j = 0; j < i-1; j++)
{
    cout<<"*";
}
  for (int j = 1; j <=x-i+1; j++)
    {
        cout<<j;
    }
    
cout<<endl;
}
}

