#strings 

---

```
bool ValidPalindrome(string s) {

    int start = 0;
    int end = s.length() - 1;

    while (start < end) {
        if (!isAlphaNumeric(s[start])) {
            start++;
            continue;
        }

        if (!isAlphaNumeric(s[end]))  {
            end--;
            continue;
        }

        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }

        start++;
        end--;
    }

    return true;
}

bool isAlphaNumeric(char ch) {

    if ((ch>='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')) {
        return true;
    }
    return;
```


---

### EXPLANATION : 

1. We create two pointers, one starting at the start of the string, and the other pointing at the end of the string
2. Now we check for the main condition, to remove all the non alphanumeric characters, suppose we do land on an alphanumeric characters, we need to skip it, hence the increment and decrement for each respectively
3. Then we check the `if` condition for the palindrome and then its pretty simple to crack it after that
4. ` ALPHA NUMERIC CHARACTERS ARE : 0-9, a-z, A-Z`
   `NON ALPHA NUMERIC CHARACTERS ARE : ?, &, etc`

---

### TIME COMPLEXITY :

O(n)