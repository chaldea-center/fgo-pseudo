void __fastcall ConstantStrEntity___ctor(ConstantStrEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AFB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5AFB6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ConstantStrEntity__CreatePrimaryKey(ConstantStrEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}