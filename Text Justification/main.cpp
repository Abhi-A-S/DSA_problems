class Solution 
{
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) 
    {
        vector<string> res;
        vector<string> currLine;
        int lineLength = 0;
        int i = 0;

        while ( i < words.size() ) {
            if ( lineLength + currLine.size() + words[i].size() > maxWidth )
            {
                int extraSpace = maxWidth - lineLength;

                int gaps = max((int) currLine.size() - 1, 1);
                int spaces = extraSpace / gaps;
                int remainder = extraSpace % gaps;

                for (int j = 0; j < max(1, (int)currLine.size() - 1); j++) {
                    currLine[j] += string(spaces, ' ');
                    if (remainder > 0) {
                        currLine[j] += " ";
                        remainder--;
                    }
                }

                string line = "";
                for (string &word : currLine)
                    line += word;

                res.push_back(line);
                currLine.clear();
                lineLength = 0;
            }

            currLine.push_back(words[i]);
            lineLength += words[i].size();
            i++;
        }

        // Left justify the last line
        string lastLine = "";
        for (int j = 0; j < currLine.size(); j++) {
            if (j > 0)
                lastLine += " ";
            lastLine += currLine[j];
        }

        lastLine += string(maxWidth - lastLine.size(), ' ');
        res.push_back(lastLine);

        return res;
    }
};