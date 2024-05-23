// PATTER PRINTING


// BASIC STEPS FOR PATTERN RECOGNISATION :

// 1. FOR THE OUTER LOOP COUNT THE NO OF LINE 
// 2. FOR THE INNER LOOP , FOCUS ON COLUMNS AND CONNECT THEM SOMEHOW TO THE ROWS
// 3. PRINT THE STARS
// 4. OBSERVE SYMMETRY (OPTIONAL)

PATTERN 1:
*
**
***
****
*****
******

#include <iostream>
void nForest(int n) {
	// Write your code here.
	for(int i=1 ;i<=n ;i++){
		for(int j=1 ; j<=i; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}

PATTERN 2:
Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6

#include <bits/stdc++.h>
using namespace std;

void pattern3(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 1; i <= N; i++)
    {
        // This is the inner loop which loops for the columns
       // no. of columns = row number for each line here.
       // Here, we print numbers from 1 to the row number
       // instead of stars in each row.
        for (int j = 1; j <=i; j++)
        {
            cout <<j<<" ";
        }
       
        // As soon as numbers for each iteration are printed, we move to the
        // next row and give a line break otherwise all numbers
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;

    pattern3(N);

    return 0;
}


PATTERN 3: 
Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6


LOGIC: WE CAN PRINT THE "i" OR THE OTTERLOOP AGAIN AND AGAIN 


PATTERN 4:
Input Format: N = 6
Result:
     *     
    ***    
   *****   
  *******  
 ********* 
***********


#include <bits/stdc++.h>
using namespace std;

void pattern7(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        
        // As soon as the stars for each iteration are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    int N = 5;

    pattern7(N);

    return 0;
}


PATTERN 5:
Input Format: N = 6
Result:   
     *
    ***
   ***** 
  *******
 *********
***********  
***********
 *********
  *******
   ***** 
    ***    
     *
	 
#include <bits/stdc++.h>
using namespace std;

void erect_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<N-i-1; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}

void inverted_pyramid(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=0;j< 2*N -(2*i +1);j++){
            
            cout<<"*";
        }
        
        // For printing the spaces after the stars in each row
         for (int j =0; j<i; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}

int main()
{   
    int N = 5;
    erect_pyramid(N);
    inverted_pyramid(N);

    return 0;
}


PATTERN 6:
Input Format: N = 6
Result:   
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21

#include <bits/stdc++.h>
using namespace std;

void pattern13(int N)
{
      // starting number
      int num =1;
      
      // Outer loop for the number of rows.
      for(int i=1;i<=N;i++){
          
          for(int j=1;j<=i;j++){
              cout<<num<<" ";
              num =num+1;
          }
          cout<<endl;
          
      }
}

int main()
{   
    int N = 5;
    pattern13(N);

    return 0;
}
