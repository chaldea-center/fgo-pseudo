void UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E0579A & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_string___ctor__);
    byte_4E0579A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_34E6B9C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserCombineExpEntity__CreatePrimaryKey(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E05799 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E05799 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}