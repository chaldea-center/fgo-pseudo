void __fastcall ConstantStrEntity___ctor(ConstantStrEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B66A0A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B66A0A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ConstantStrEntity__CreatePrimaryKey(ConstantStrEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}