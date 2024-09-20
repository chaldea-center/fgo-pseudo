void __fastcall UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BD22 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BD22 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserCombineExpEntity__CreatePrimaryKey(
        UserCombineExpEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5BD21 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5BD21 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}