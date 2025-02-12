System_String_o *__fastcall CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB3AA7 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_1/*""*/, method);
    byte_4BB3AA7 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}