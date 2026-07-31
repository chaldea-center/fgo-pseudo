void ConstantLongEntity___ctor(ConstantLongEntity_o *this, const MethodInfo *method)
{
  if ( (byte_593849D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_593849D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ConstantLongEntity__CreatePrimaryKey(ConstantLongEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}