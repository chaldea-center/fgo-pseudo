void NewsEntity___ctor(NewsEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E04F8B & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_int___ctor__);
    byte_4E04F8B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_34E6B24 *)Method_DataEntityBase_int___ctor__);
}


int32_t NewsEntity__CreatePrimaryKey(NewsEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}