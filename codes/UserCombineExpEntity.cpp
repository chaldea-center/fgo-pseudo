void __fastcall UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB6924 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB6924 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserCombineExpEntity__CreatePrimaryKey(
        UserCombineExpEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4AB6923 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_1/*""*/, method);
    byte_4AB6923 = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}