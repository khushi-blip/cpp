def set(age):
  if age<0:
    raise ValueError("age cant be negative")
  print(f"age is set to{age}")
  try:                     # <-- This block is still inside the function
    set(15)                # <-- Calls itself again → recursion loop
  except ValueError as e:
         print(e)
