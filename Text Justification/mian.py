class Solution:
    def fullJustify(self, words: List[str], maxWidth: int) -> List[str]:
        res = []
        curr_line = []
        line_length = 0
        i = 0

        while i < len(words):
            if line_length + len(curr_line) + len(words[i]) > maxWidth:
                extra_space = maxWidth - line_length

                spaces = extra_space // max(len(curr_line) - 1, 1)
                reminder = extra_space % max(len(curr_line) - 1, 1) 

                for j in range(max(1, len(curr_line) -1)):
                    curr_line[j] += " " * spaces
                    if reminder:
                        curr_line[j] += " "
                        reminder -= 1

                res.append("".join(curr_line))
                curr_line, line_length = [], 00
            # line complete

            curr_line.append(words[i])
            line_length += len(words[i])
            i += 1

        last_line = " ".join(curr_line)
        trail_space = maxWidth - len(last_line)
        res.append(last_line + " " * trail_space)
        return res