void __fastcall CombineLimitGiftEntity___ctor(CombineLimitGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438B21C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438B21C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall CombineLimitGiftEntity__CreatePK(
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_438B21B & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438B21B = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           rarity,
           limitCount,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall CombineLimitGiftEntity__CreatePrimaryKey(
        CombineLimitGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CombineLimitGiftEntity__CreatePK(this->fields.svtId, this->fields.rarity, this->fields.limitCount, v2);
}