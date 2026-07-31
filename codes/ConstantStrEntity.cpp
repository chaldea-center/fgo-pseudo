void ConstantStrEntity___ctor(ConstantStrEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59384AE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_59384AE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ConstantStrEntity__CreatePrimaryKey(ConstantStrEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}