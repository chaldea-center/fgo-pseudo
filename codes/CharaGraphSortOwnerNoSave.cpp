System_String_o *CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_593798E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593798E = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}