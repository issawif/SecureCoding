def get_value_from_array(array, index):
    # Check if the index is within the bounds of the array
    if index < 0 or index >= len(array):
        print("Error: Index out of bounds")
        # Return some error value or handle the error appropriately
        return None  # For example, returning None as an error value

    # Retrieve the element from the array at the specified index
    return array[index]

# Example usage:
array = [10, 20, 30, 40, 50]

# Test the get_value_from_array function
print("Value at index 2:", get_value_from_array(array, 2))  # Should print 30
print("Value at index 5:", get_value_from_array(array, 5))  # Should print an error message and return None
