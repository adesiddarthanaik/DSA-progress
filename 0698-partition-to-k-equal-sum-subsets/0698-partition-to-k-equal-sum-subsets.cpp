class Solution {
public:
   int target; 
   vector< int > ns;
   vector< int > bucket;

   bool canPartitionKSubsets( vector<int>& nums, int k ) {
       int sum = 0;
       for( int &n : nums ) sum += n;
       if( sum % k ) return false; 
       target = sum / k;
       ns = vector< int >( nums );
       bucket = vector< int >( k, 0 );
       sort( ns.begin(), ns.end() );
       reverse( ns.begin(), ns.end() );
       return put( 0 );
   }

   bool put( int n ) {
       for( int i = 0; i < bucket.size(); ++i ) {
           if( bucket[i] + ns[n] > target ) continue;
           bucket[i] += ns[n]; 
           if( n == ns.size() - 1 ) return true; 
           if( put( n + 1 ) ) return true; 
           else { 
               bucket[i] -= ns[n]; 
               if( bucket[i] == 0 ) return false; 
           }
       }
       return false;
   }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna