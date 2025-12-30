There is no specific code provided to solve this problem as it appears to be a notice on a website. However, if the task is to parse the given text and extract relevant information, here's a simple Python code snippet that does that:

python
import re

text = """
บทความทั่วไป
สำหรับ นศ.

เว็บไซต์กำลังอยู่ในระหว่างปรับปรุง แล้วเราจะได้พบกันใหม่เร็วๆ นี้
– admin

ติดตามเรา


Copyright © 2025 Thailand Fx Warrior
"""

# Extracting the copyright year
year = re.search(r'\d{4}', text).group()

# Extracting the website status
status = "The website is under maintenance."

print(f"Copyright Year: {year}")
print(f"Website Status: {status}")