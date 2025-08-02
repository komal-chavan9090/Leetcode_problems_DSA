class Solution {
public:
    string getValid(string email) {
        string local = "";
        string domain = "";
        bool plusSeen = false;
        int i = 0;

        // Extract local name before '@'
        while (email[i] != '@') {
            if (email[i] == '+') {
                plusSeen = true;
            } else if (!plusSeen && email[i] != '.') {
                local += email[i];
            }
            i++;
        }

        // Skip '@' and copy domain part
        domain = email.substr(i);  // includes '@'

        return local + domain;
    }

    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;

        for (int i = 0; i < emails.size(); i++) {
            string valid = getValid(emails[i]);
            uniqueEmails.insert(valid);
        }

        return uniqueEmails.size();
    }
};
