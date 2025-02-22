# QR Code Generator Script

## Overview

This script is designed to generate a QR code from a specified link using the `qrencode` tool. It simplifies the process of creating QR codes for various purposes, such as sharing links or information in a visually appealing and accessible format.

## Usage

### Prerequisites

Before using this script, ensure that you have the `qrencode` tool installed on your system. You can install it using the package manager specific to your operating system.

### Running the Script

1. Open your terminal.
2. Navigate to the directory containing the script (`qr_code_generator.sh`).
3. Make sure the script has executable permissions. If not, grant the necessary permissions using the following command:
   ```bash
   chmod +x qr_code_generator.sh
   ```
4. Execute the script using the following command:
   ```bash
   ./qr_code_generator.sh
   ```

### Output

After running the script, a QR code image will be generated for the specified link. The image will be saved with the filename specified in the script (`qrcode.png`) in the same directory where the script is located.

## Customization

You can customize the script by modifying the following variables:

- `link`: The URL or text for which you want to generate the QR code.
- `output_image`: The filename for the generated QR code image.

Modify these variables according to your requirements before running the script.