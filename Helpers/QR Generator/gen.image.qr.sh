#!/bin/bash

link="https://forms.gle/6gt9FUQ6hQRbwFnG6"
output_image="qrcode.png"

# Generate QR code
qrencode -s 50 -o "$output_image" "$link"

echo "QR code generated for: $link"
echo "Image saved as: $output_image"
