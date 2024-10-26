class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {            
            int i =0, j = 0, k= 0;
            vector <int> result;
            while(i<n1  && j<n2 && k<n3){
                int minVal=min(A[i],min(B[j], C[k]));
                if(A[i]==B[j]  && B[j]==C[k]){
                    result.push_back(A[i]);
                    
                    while (i < n1 - 1 && A[i] == A[i + 1]) i++;
                    while (j < n2 - 1 && B[j] == B[j + 1]) j++;
                    while (k < n3 - 1 && C[k] == C[k + 1]) k++;
                }
                
                
                
                if (A[i] == minVal) i++;
                else if (B[j] == minVal) j++;
                else k++;

            }
            
            return result;
        }

};
