void GachaImageEntity___ctor(GachaImageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938A80 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938A80 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaImageEntity__CreatePK(int32_t gachaId, int32_t areaId, const MethodInfo *method)
{
  if ( (byte_5938A7F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938A7F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           areaId,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GachaImageEntity__CreatePrimaryKey(GachaImageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaImageEntity__CreatePK(this->fields.gachaId, this->fields.areaId, v2);
}