System_String_o *__fastcall CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A1EEDF & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_1/*""*/, method);
    byte_4A1EEDF = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}