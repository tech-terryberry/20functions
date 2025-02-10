/*
Cumulative Sum: Write a function that modifies an array such that each element is 
the sum of itself and all previous elements.

Find Pairs with a Given Sum: Write a function that finds all pairs of elements whose sum 
equals a given value.
*/

#include <iostream>
#include <climits>
#include <vector> 
using namespace std;

//Function declarations
int sumOfElements(int arraySize, int array[]);
int averageOfElements(int arraySize, int array[]);
int maximumOfElements(int arraySize, int array[]);
int minimumOfElements(int arraySize, int array[]);
void reverseElements(int arraySize, int array[]);
int countEvenNumbers(int arraySize, int array[]);
int countOddNumbers(int arraySize, int array[]);
void searchForElement(int arraySize, int array[], int findVar);
void replaceElement(int arraySize, int array[], int findValue, int newValue );
void ascendingOrder(int arraySize, int array[]);
void descendingOrder(int arraySize, int array[]);
void checkOrder(int arraySize, int array[]);
int removeDuplicates (int arraySize, int array[], int &changeTo);
int rotateArray (int arraySize, int array[]);
int rotateArrayRight (int arraySize, int array[]);
int mergeArrays( int array[], int arraySize, int array2[], int arraySize2, int array3[]);
int splitArray (int array[], int arraySize);
int findMode(int array[], int arraySize); // find most occuring element
int cummulative(int array[], int arraySize); //
int insertElement(int array[], int arraySize, int &insertValue, int &insertIndex);
int deleteElement (int array[], int arraySize);
void leftShift (int arraySize, int array[]);
void rightShift (int arraySize, int array[]);


int findSecondLargest(int arraySize, int array[]);




int main()
{
   int arraySize = 0;
   int findVar = 0;
   int findValue = 0;
   int newValue = 0;
   int changeTo = 0;
   int insertValue = 0;
  int insertIndex = 0;
  
   
   
   
   cout<< "Hello user, this code consists of 20 different functions!!\n"<<endl; 
   cout<< "This first program requires you to enter "; 
   cout<<"the size of an array, and also integers to store in the array. \n";
   cout<<"Please enter your array size: \n";
   cin>>arraySize;
   
   int array[arraySize]= {0};
   
   cout<<"Now, please enter your integers to store in the array: \n";
  for (int i = 0; i < arraySize; i++)
  {cin>>array[i];}
  
  
  int sum = sumOfElements(arraySize, array);
  int average = averageOfElements(arraySize, array);
  int maximum = maximumOfElements(arraySize, array);
  int minimum = minimumOfElements(arraySize, array);
  int count = countEvenNumbers(arraySize, array);
  int count2 = countOddNumbers(arraySize, array);
  int secondLargest = findSecondLargest(arraySize, array);
  int half1, half2 = splitArray( array, arraySize);
  
  
  cout<<"\n"<<endl;
  
  cout<< "   The sum of the numbers in your array is: "<< sum<<". "<<endl;
  
  cout<<"\nThis is program 2: Average of elements \n";
  cout<<"    The average of your integers are: "<<average<<endl;
  
   cout<<"\nThis is program 3: maximum of elements \n";
  cout<<"    The largest of your integers are: "<<maximum<<endl;
  
  cout<<"\nThis is program 4: minimum of elements \n";
  cout<<"    The smallest of your integers are: "<<minimum<<endl;
  
  cout<<"\nThis is program 5: Reverse elements \n";
  cout<<"    Your integers are: ";
  reverseElements(arraySize, array);
  cout<< endl;
  
  cout<<"\nThis is program 6: Count even numbers \n";
  cout<<"    The number of even integers is: "<< count<< " " <<endl;
  
    cout<<"\nThis is program 7: Count odd numbers \n";
  cout<<"    The number of odd integers is: "<< count2<< " " <<endl;
   cout<< endl;
    
      cout<<"\nThis is program 8: This program searches for a number \n";
  cout<<"    Please enter the integer you want to find: ";
  cin>> findVar;
  searchForElement(arraySize, array,findVar);

   cout<< endl;
    
    cout<<"\nThis is program 9: This program searches for a number, and replaces it with another number \n";
  cout<<"    Please enter the integer you want to find: ";
  cin>> findValue;
  
  cout<<"   \n Now, please enter the integer you want to replace "<<findValue <<" with \n" ;
  cin>> newValue;
    
    replaceElement(arraySize, array,findValue, newValue);
    
    
    ascendingOrder(arraySize, array);
     cout << "This is program 10: your array in ascending order:\n";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
     descendingOrder(arraySize,array);
     cout << "This is program 11: your array in descending order:\n";
    for (int i = 0; i < arraySize; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
   
     
     cout << "\nThis is program 12: It checks if your array is in ascending order:\n";
     checkOrder (arraySize, array);
     cout <<endl;
    
    
    cout<<"\nThis is program 13: It removes duplicates \n";
    cout<<"Please enter a number you would like to change a duplicate number to: "<<endl;
    cin>>changeTo;
    removeDuplicates (arraySize, array, changeTo);
    
    
     cout<<"\nThis is program 14: It rotates an array one position to the left \n";
    rotateArray (arraySize, array);
    
    for (int i = 0; i < arraySize; i++)
     {cout<< array[i]<<" ";} 
 
   cout<<"\nThis is program 15: It rotates an array one position to the right \n";
    rotateArrayRight (arraySize, array);
    
    for (int i = 0; i < arraySize; i++)
     {cout<< array[i]<<" ";} 
     cout<<endl;
   
   cout<<"\nThis is program 16: It merges  2 arrays.\n Please enter an array size, for a new array";
   cout<<arraySize2;
   
    cout<<"\n Please enter elements for array 2: ";
   for (int i = 0; i < arraySize2; i++)
     {cin>>array2;}
  
   
   cout<<"\nThis is program 17: It splits an array into 2 arrays.\n";
   cout<<half1<<" ";
   cout<<half2 <<" ";
   
   
   // rotateArray (arraySize, array);
mergeArrays( array, arraySize, array2, arraySize2, int merged[])
    
    for (int i = 0; i < arraySize; i++)
     {cout<< array[i]<<" ";} 
   
   
   

    
    cout<<"\nThis is program 19: The second largest number \n";
    cout<<"The second largest number in your array is: "<<secondLargest<<endl;
  
  
    cout<<"\nThis is program 21: This program takes a number, ";
    cout<<"and inserts it into an array at an index you choose \n";
    cout<<"    Please enter the integer you want to insert: ";
    cin>> insertValue;
    cout<<"   \n Now, please enter the insert your number at: ";
    cin>> insertIndex;
    
     if (insertIndex < 0 && insertIndex > arraySize) 
     { cout<< " You do not have a element in this array that is that index";
     cout<<"   \n Please enter the insert your number at: ";
     cin>> insertIndex;}
     
    insertElement( array, arraySize, insertValue, insertIndex);
    
  
  cout<<"\nThis is program 23: It left shifts all numbers one place to the left,";
  cout<<"and deletes the first element \n";
  leftShift (arraySize, array);
    
 
    for (int i = 0; i < arraySize; i++)
     {cout<< array[i]<<" ";} 
 
     cout<<"\nThis is program 24: It right shifts all numbers one place to the left,";
  cout<<"and deletes the last element \n";
  rightShift (arraySize, array);
    
 
    for (int i = 0; i < arraySize; i++)
     {cout<< array[i]<<" ";}  

    
    return 0;
}
   // function definitions

//function 1
int sumOfElements(int arraySize, int array[])
 {
     int sum = 0;
    for (int i = 0; i < arraySize; i++)
  {sum += array[i];} 
  return sum;
 }
 
 //function 2
 int averageOfElements(int arraySize, int array[])
 {
     int sum = 0;
     int average = 0;
    for (int i = 0; i < arraySize; i++)
  {sum += array[i];}
   average = sum / arraySize;
  return average;
 }
 
 //function 3
 int maximumOfElements(int arraySize, int array[])
 {
   int maximum = array[0];
    for (int i = 0; i < arraySize; i++)
  {
  if (maximum < array[i])
  {maximum = array[i];}
      
  } 
  return maximum;
 }
 
 //function 4
 int minimumOfElements(int arraySize, int array[])
{
   int minimum = array[0];
    for (int i = 0; i < arraySize; i++)
  {
  if (minimum > array[i])
  {minimum = array[i];}
      
  } 
  return minimum;
 }
 
 //function 5
 void reverseElements(int arraySize, int array[])
 {
    for (int i = arraySize - 1; i >= 0; i--)
    {cout<<array[i] << " ";}
 }
 
 
 //function 6
 int countEvenNumbers(int arraySize, int array[])
 {
    int count = 0; 
    for (int i = 0; i < arraySize; i++)
  {
      if ( array[i] % 2 == 0)
  { count = count + 1;}
  } 
  return count;
 } 
 
 //function 7
 int countOddNumbers(int arraySize, int array[])
  {
    int count2 = 0; 
    for (int i = 0; i < arraySize; i++)
  {
      if ( array[i] % 2 != 0)
  { count2 = count2 + 1;}
  } 
  return count2;
 }
 
 //function 8
void searchForElement(int arraySize, int array[], int findVar)
 {
    bool found = false;
    
    for (int i = 0; i < arraySize; i++)
    {
        
        if (array[i] == findVar)
        {cout<<" Your integer you are looking for is found!!";
         found = true;
         break;
      }
   }
   if (!found)
   {
      cout << "-1 " << endl;
   }
}

 
 //function 9
 void replaceElement(int arraySize, int array[], int findValue, int newValue )
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == findValue)
        { array[i] = newValue;}
    }
  
 }
 
 //function 10
 void ascendingOrder(int arraySize, int array[])
 {
    
    for (int a = 0; a < arraySize - 1; a++) 
    {
        for (int b = 0; b < arraySize - a - 1; b++) 
        {
            if (array[b] > array[b + 1]) 
            {
                
                int one = array[b];
                array[b] = array[b + 1];
                array[b + 1] = one;
            }
        }
    }
}
 
//function 11
void descendingOrder(int arraySize, int array[])
 {
    
    for (int a = 0; a < arraySize -1 ; a++) 
    {
        for (int b = 0; b < arraySize - a - 1; b++) 
        {
            if (array[b] < array[b + 1]) 
            {
                
                int one = array[b];
                array[b] = array[b + 1];
                array[b + 1] = one;
            }
        }
    }
    cout<< array[arraySize - 1];
    
}
 
 //function 12
 void checkOrder(int arraySize, int array[])
 {
     bool found = false;
     for (int i= 0; i < arraySize - 1; i++)
     {
         if ( array[i] >  array[i + 1])
     {cout<<"Your array was not in ascending order";
         found = true;
        break;
     }
     if (!found)
     {cout<<" Your array was in ascending order";}
     }  
     
 }
 
 
 //function 13
 int removeDuplicates (int arraySize, int array[], int &changeTo)
    {
        for (int i  = 0; i < arraySize - 1; i++)
        {
            if (array[i] == array[i + 1])
            {array[i + 1] = changeTo;}
        }
        
        
        return arraySize;
        
    }
 
 
 //function 14
 int rotateArray (int arraySize, int array[])
 {
     int lastInArray = array[arraySize - 1];
     for (int i = arraySize - 1; i > 0; i--)
     {   
         {array[i] = array[i - 1];}
     }
      
     array[0] = lastInArray; 
     return arraySize;
 
 }
 
 //function 15
  int rotateArrayRight (int arraySize, int array[])
 {
     int firstInArray = array[0];
     for (int i = 0; i < arraySize; i++)
     {   
         {array[i] = array[i + 1];}
     }
      
     array[arraySize - 1] = firstInArray; 
     return arraySize;
 
 }
 
 //function 16
 void mergeArrays(int array[], int arraySize, int array2[], int size2, int array3[])
 {
    int i = 0;
    int b = 0; 
    int c = 0;
    
for ( i < arraysize && b < size2; c++) {
        if (i < size1 && (b >= size2 && array1[i] <= array2[b])) {
            array3[c] = array[i++];
        } else {
            array3[c] = array2[b++];
        }
    }
}
    
  
  //function 17
  int splitArray (int array[], int arraySize)
  {
     int half1[];
     int half2[arraySize / 2];
      midpoint = arraySize / 2;
    

    for (int i = 0; i < arraySize; i++)
    {
        if (i < arraySize/ 2)
        
        {array[i] = half1;}
        
        else
        {
            array[i] = half2;
        }
    }

  
    return (firstHalf + secondHalf);
  }
  //function 18
  
  
 
 //function 19
 int findSecondLargest(int arraySize, int array[])
 {
 
     int largest = INT_MIN;
     int secondLargest = INT_MIN;
  for (int i = 0; i < arraySize; i++) 
  {
        if (array[i] > largest)
        {secondLargest = largest;
            largest = array[i]; } 
            
        else if (array[i] > secondLargest && array[i] < largest)
        {secondLargest = array[i];}
    }
 return secondLargest;
 }
 
 // function 20
 
 
 //function 21
 int insertElement(int array[], int arraySize, int &insertValue, int &insertIndex)
 {
    for (int i = 0; i = arraySize; i++)
    { 
        if (i == insertValue)
        { array[i] = insertValue;}
    }
    
    
 //function 22
 
 
 
 
 //function 23
 void leftShift (int arraySize, int array[])
 {
   array[0] = 0;
   
    for (int i = 0; i < arraySize - 1; i++) 
    {
        array[i] = array[i + 1];
    }  
 }
 
 
 //function 24
 
 void rightShift (int arraySize, int array[])
 {
    
   array[0] = 0;
    for (int i = arraySize - 1; i > 0; i--) 
    {
        array[i] = array[i - 1];
    }  
 }
 
 //function 25
