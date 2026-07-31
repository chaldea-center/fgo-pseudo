void UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939467 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939467 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *UserCombineExpEntity__CreatePrimaryKey(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939466 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939466 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}