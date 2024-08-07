void __fastcall ConstantEntity___ctor(ConstantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE969 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE969 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ConstantEntity__CreatePrimaryKey(ConstantEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}