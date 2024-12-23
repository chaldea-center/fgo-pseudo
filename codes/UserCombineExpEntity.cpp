void __fastcall UserCombineExpEntity___ctor(UserCombineExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B677CE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B677CE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall UserCombineExpEntity__CreatePrimaryKey(
        UserCombineExpEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B677CD & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1/*""*/, method);
    byte_4B677CD = 1;
  }
  return (System_String_o *)StringLiteral_1/*""*/;
}