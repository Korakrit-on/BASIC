### 1. Source Code (Python)


# Program: Website Maintenance Status Display
# Objective: Store and display the website's temporary maintenance message and details based on the input text.

class WebsiteStatus:
    """Handles and displays the static information regarding website status."""

    def __init__(self):
        # Data extraction from the input text
        self.title = "บทความทั่วไป สำหรับ นศ."
        self.status_message = "เว็บไซต์กำลังอยู่ในระหว่างปรับปรุง แล้วเราจะได้พบกันใหม่เร็วๆ นี้"
        self.signer = "admin"
        self.call_to_action = "ติดตามเรา"
        self.copyright = "Copyright © 2025 Thailand Fx Warrior"
        self.skip_to_content = "Skip to content"

    def display_status(self):
        """Prints the formatted status message to the console."""
        
        SEPARATOR = "=" * 50
        LINE = "-" * 50

        print(SEPARATOR)
        print(f"| {self.skip_to_content:<46} |")
        print(LINE)
        print(f"| สถานะ: {self.title}")
        print(LINE)
        
        # Display main message (simulating multi-line structure)
        print(self.status_message)
        print(f"\n– {self.signer}")

        print(f"\n{self.call_to_action}\n")
        
        print(LINE)
        print(self.copyright)
        print(SEPARATOR)

# Execution
if __name__ == "__main__":
    site = WebsiteStatus()
    site.display_status()