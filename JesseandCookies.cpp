#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cookies' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY A
 */

int cookies(int k, vector<int> A)
{
     priority_queue<int, vector<int>, greater<int>> pq;
    int length = A.size(), firstCookie, secondCookie, numberOfOperations = 0;
 
    // * Forming the min-heap using priority queue
    for(int i=0; i<length; i++) {
        pq.push(A[i]);
    }
 
    // * Getting the sweetness of first cookie i.e. top element from min-heap
    firstCookie = pq.top();
 
    /*
    *   We need to pop the first two cookies of min-heap and push the calculated
    *   sweetness of combined cookie until the first cookie has a sweetness less than k
    */
    while(firstCookie<k) {
 
        // * Removing the first cookie
        pq.pop();
 
        /*
        *   If queue is empty, this means that we have only one cookie
        *   whose sweetness is less than k. As it cannot be combined with any other cookie,
        *   break the loop
        */
        if(pq.empty()) {
            break;
        }
 
        // * Getting the sweetness of second cookie
        secondCookie = pq.top();
 
        // * Removing the second cookie
        pq.pop();
 
        // * Push the calculated sweetness by combining first two cookies in priority queue
        pq.push(firstCookie + 2*secondCookie);
 
        // * Getting the sweetness of first cookie which is just pushed to check before next iteration
        firstCookie = pq.top();
 
        // * Incrementing the number of operations by 1
        numberOfOperations++;
    }
 
    // * If queue is empty, return -1
    if(pq.empty()) {
        return -1;
    }
 
    // * Otherwise, return the numberOfOperations
    else {
        return numberOfOperations;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string A_temp_temp;
    getline(cin, A_temp_temp);

    vector<string> A_temp = split(rtrim(A_temp_temp));

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        int A_item = stoi(A_temp[i]);

        A[i] = A_item;
    }

    int result = cookies(k, A);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
