import re

def diemvowel(string_):
    return re.sub("[aeiouAEIOU]", "", string_)
