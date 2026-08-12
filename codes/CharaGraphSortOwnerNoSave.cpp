System_String_o *CharaGraphSortOwnerNoSave__get_SortSaveKeyPrefix(
        CharaGraphSortOwnerNoSave_o *this,
        const MethodInfo *method)
{
  if ( (byte_596FAF1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596FAF1 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}