void ConstantLongEntity___ctor(ConstantLongEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C270EF & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C270EF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ConstantLongEntity__CreatePrimaryKey(ConstantLongEntity_o *this, const MethodInfo *method)
{
  return this->fields.name;
}