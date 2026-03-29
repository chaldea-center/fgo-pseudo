void IllustratorEntity___ctor(IllustratorEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30E3D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D30E3D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t IllustratorEntity__CreatePrimaryKey(IllustratorEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}