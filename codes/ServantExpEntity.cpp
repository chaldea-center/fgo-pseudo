void ServantExpEntity___ctor(ServantExpEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEF9E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEF9E = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantExpEntity__CreatePK(int32_t type, int32_t lv, const MethodInfo *method)
{
  if ( (byte_4CEEF9D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEEF9D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           type,
           lv,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantExpEntity__CreatePrimaryKey(ServantExpEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantExpEntity__CreatePK(this->fields.type, this->fields.lv, v2);
}