void GachaAdjustAddEntity___ctor(GachaAdjustAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2855F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2855F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaAdjustAddEntity__CreatePK(int32_t id, int32_t type, int32_t giftId, const MethodInfo *method)
{
  if ( (byte_4C2855E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C2855E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *GachaAdjustAddEntity__CreatePrimaryKey(GachaAdjustAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaAdjustAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.giftId, v2);
}