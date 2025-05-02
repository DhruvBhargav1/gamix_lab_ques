// QUES1  count prime no
/*
#include <iostream>
#include <vector> // ✅ Include vector
using namespace std;

// ✅ Function to find primes up to n and return their sum
int checkprime(int n) {
    vector<int> arr;

    for (int i = 2; i <= n; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) { // ✅ Divisors from 1 to i
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) { // ✅ Prime condition
            arr.push_back(i);
        }
    }
    int sum=0;
    for(int i=0;i<arr.size();i++){
      sum++;
    }

    return sum;
   
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int prime = checkprime(n); 
    cout<<prime;
    
}
*/

//QUES2  subarray sum 
/*
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={5,4,1,7,8};

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}


    */


//QUES maximum subarray sum 
/*
   #include<iostream>
   #include<math.h>
   using namespace std;
   int main(){
       int n=7;
       int arr[7]={3,-4,5,4,-1,7,-8};
      int maxsum=INT16_MIN;
   
       for(int i=0;i<n;i++)
       {
            int currsum=0;
           for(int j=i;j<n;j++)
           {
            
            currsum +=arr[j]; 
            if(currsum>maxsum){
                maxsum=currsum;
                
            }  
            //or
            //maxsum=max(maxsum,currsum) ;     
               
           }
       }
       cout<<"maximum sum"<< maxsum;
 
       
   }


*/
//QUES maximum subarray sum with the subarray print which have maximum sum
/*
   #include<iostream>
   #include<math.h>
   using namespace std;
   int main(){
       int n=7;
       int arr[7]={3,-4,5,4,-1,7,-8};
      int maxsum=INT16_MIN;
      int start=0,end=0;
       for(int i=0;i<n;i++)
       {
            int currsum=0;
           for(int j=i;j<n;j++)
           {
            
            currsum +=arr[j]; 
            if(currsum>maxsum){
                maxsum=currsum;
                start=i;
                end=j;
            }        
               
           }
       }
       cout<<"maximum sum"<< maxsum;
 
       cout<<"  [";
       for(int i=start;i<=end;i++){
        cout<<arr[i]<<" ";
       }
       cout<<"]";
   }
*/

//factorial by recurssion
/*
#include<iostream>
using namespace std;
int factorial(int n){
    int fact;
    if(n==0 || n==1){
        return 1;
    }
    else
    return fact=n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
   int ans= factorial(n);
   cout<<ans;
}
   */
//factorial using fucntion
/*
   #include<iostream>
   using namespace std;
   int factorial(int n){
    int fact=1;
       for(int i=1;i<=n;i++){
       fact=fact*i;}
       return fact;
   
   }
   int main(){
       int n;
       cin>>n;
      int ans= factorial(n);
      cout<<ans;
   }
*/

//move 0 at end in array
/*

#include<iostream>
using namespace std;

void printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 6;
    int arr[6] = {0, 1, 0, 3, 12, 0};

    int pos = 0; // Position to place the next non-zero element

    // Move non-zero elements to the front
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[pos++] = arr[i];
        }
    }
     cout<<" now pos is "<<pos<<endl;;
    // Fill the rest with zeros
    while(pos < n) {
        arr[pos++] = 0;
    }

    printarray(arr, n);
}
*/
//move zero in front in array
/*
#include<iostream>
using namespace std;
void printarray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 6;
    int arr[6] = {0, 1, 0, 3, 12, 0};

    int pos = n-1; // Position to place the next non-zero element

    // Move non-zero elements to the front
    for(int i = n-1; i>=0; i--) {
        if(arr[i] != 0) {
            arr[pos--] = arr[i];
        }
    }
     cout<<" now pos is "<<pos<<endl;;
    // Fill the rest with zeros
    while(pos>=0) {
        arr[pos--] = 0;
    }

    printarray(arr, n);
}
*/

// string anagram to each other
/*
#include<iostream>
#include<vector>
using namespace std;
bool isAnagram(string str1,string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    vector<int> freq(26,0);

    for(int i=0;i<str1.length();i++){
        freq[str1[i]-'a']++;
        freq[str2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(freq[i]!=0){
            return false;
        }
        return true;
    }
}
int main() {
    

    string str1 = "listen";
    string str2 = "silent";

    if (isAnagram(str1, str2)) {
        cout << "Yes, '" << str1 << "' and '" << str2 << "' are anagrams." << endl;
    } else {
        cout << "No, '" << str1 << "' and '" << str2 << "' are not anagrams." << endl;
    }

    return 0;
}
*/

//2d array
#include<iostream>
#include<climits>
using namespace std;
int maxelement(int arr[][3],int row,int col){
    int maxno=INT16_MIN;
    for(int i=0;i<row;i++){
       
       for(int j=0;j<col;j++){
           int currno=arr[i][j];
           
           if(currno>maxno){
               maxno=currno;
           }
       }
      
      }
     return maxno;
}
 int main(){
    int arr[4][3];
   
    cout<<" enter the matrix "<<endl;

   for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
        cin>>arr[i][j];
    }
    
   }
 cout<<" output is "<<endl;
 //for printing
cout<<maxelement(arr,4,3);
}