System_String_o *__fastcall CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BA232 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49BA232 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}