void ConstantEntity___ctor(ConstantEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C270EE & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C270EE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ConstantEntity__CreatePrimaryKey(ConstantEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}