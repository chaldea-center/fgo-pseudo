System_String_o *__fastcall CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_4354A8A & 1) == 0 )
  {
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4354A8A = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}