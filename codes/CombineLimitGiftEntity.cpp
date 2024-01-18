void __fastcall CombineLimitGiftEntity___ctor(CombineLimitGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41861D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41861D6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineLimitGiftEntity__CreatePK(
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_41861D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&rarity);
    byte_41861D5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           rarity,
           limitCount,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall CombineLimitGiftEntity__CreatePrimaryKey(
        CombineLimitGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CombineLimitGiftEntity__CreatePK(this->fields.svtId, this->fields.rarity, this->fields.limitCount, v2);
}