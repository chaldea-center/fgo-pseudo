void GachaImageEntity___ctor(GachaImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEA3B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEEA3B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaImageEntity__CreatePK(int32_t gachaId, int32_t areaId, const MethodInfo *method)
{
  if ( (byte_4CEEA3A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEEA3A = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           areaId,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaImageEntity__CreatePrimaryKey(GachaImageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaImageEntity__CreatePK(this->fields.gachaId, this->fields.areaId, v2);
}