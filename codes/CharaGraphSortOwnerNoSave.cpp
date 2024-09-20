System_String_o *__fastcall CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5A565 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A565 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}