python
import re

def extract_info(text):
    # Extract copyright year
    copyright_year = re.search(r'\d{4}', text).group()
    
    # Extract website name
    website_name = 'Thailand Fx Warrior'
    
    # Extract admin message
    admin_message = 'เว็บไซต์กำลังอยู่ในระหว่างปรับปรุง แล้วเราจะได้พบกันใหม่เร็วๆ นี้'
    
    return copyright_year, website_name, admin_message

text = """
บทความทั่วไป
สำหรับ นศ.

เว็บไซต์กำลังอยู่ในระหว่างปรับปรุง แล้วเราจะได้พบกันใหม่เร็วๆ นี้
– admin

ติดตามเรา


Copyright 2025 Thailand Fx Warrior

"""

copyright_year, website_name, admin_message = extract_info(text)
print(f'Copyright Year: {copyright_year}')
print(f'Website Name: {website_name}')
print(f'Admin Message: {admin_message}')