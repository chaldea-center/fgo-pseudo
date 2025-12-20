System_String_o *CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2BB7D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2BB7D = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}