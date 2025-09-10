void UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28019 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C28019 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserCombineExpEntity__CreatePrimaryKey(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C28018 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28018 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}