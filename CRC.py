import numpy as np

def calculate_crc(data, generator):
    # Convert input data to a mutable list
    data = list(data)
    generator = list(generator)
    
    # Append zeros to data to make room for CRC
    data.extend([0] * (len(generator) - 1))
    
    # Perform the division (XOR)
    for i in range(len(data) - len(generator) + 1):
        if data[i] == 1:
            for j in range(len(generator)):
                data[i + j] ^= generator[j]
                
    # The remainder is the CRC
    return data[-(len(generator) - 1):]

def append_crc(data, crc):
    return np.concatenate((data, crc))

def verify_crc(data_with_crc, generator):
    # If the remainder is all zeros, the data is valid
    return not any(calculate_crc(data_with_crc, generator))

# Example usage
data_length = 16
data = np.random.randint(0, 2, data_length)
print(f"Original Data: {data}")

generator = [1, 0, 0, 1, 1]  # Example generator polynomial
print(f"Generator Polynomial: {generator}")

# Calculate CRC
crc = calculate_crc(data, generator)
print(f"CRC Checksum: {crc}")

# Append CRC to data
data_with_crc = append_crc(data, crc)
print(f"Data with CRC: {data_with_crc}")

# Simulate transmission and check for errors
received_data_with_crc = data_with_crc.copy()
is_valid = verify_crc(received_data_with_crc, generator)

if is_valid:
    print("No error detected.")
else:
    print("Error detected.")
