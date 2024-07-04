__int64 mono_image_get_entry_point()
{
  __int64 result; // x0

  result = il2cpp_image_get_entry_point_0();
  if ( result )
    return *(unsigned int *)(result + 72);
  return result;
}