System_String_o *__fastcall CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B155D1 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B155D1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}