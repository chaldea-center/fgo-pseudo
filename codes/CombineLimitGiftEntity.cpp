void CombineLimitGiftEntity___ctor(CombineLimitGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938419 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938419 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *CombineLimitGiftEntity__CreatePK(
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_5938418 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938418 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           rarity,
           limitCount,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *CombineLimitGiftEntity__CreatePrimaryKey(CombineLimitGiftEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CombineLimitGiftEntity__CreatePK(this->fields.svtId, this->fields.rarity, this->fields.limitCount, v2);
}