int *loop_function(void *v_pointer) {
  /* ... */
  return v_pointer;
}
  
int *func(char *char_ptr) {
  int *int_ptr = loop_function(char_ptr);
 
  /* ... */
  return int_ptr;
}
