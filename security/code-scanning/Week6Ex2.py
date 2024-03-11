def get_value_from_array(array, index):
# Retrieve the element from the array at the specified index	
	if index >= 0 and index < len(array) and array is not None:
		return array[index]
	return None

array = [10, 20, 30, 40, 50]

# Test the get_value_from_array function
print("Value at index 2:", get_value_from_array(array, 2))  # Should print 30
print("Value at index 5:", get_value_from_array(array, 5))  # Should print an error message and return None
