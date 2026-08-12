__int64 __fastcall mono_type_is_reference(__int64 result)
{
  if ( result )
    return sub_226D56C() & 1;
  return result;
}