void __fastcall CombineLimitGiftEntity___ctor(CombineLimitGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB5B12 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB5B12 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineLimitGiftEntity__CreatePK(
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_4AB5B11 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&rarity);
    byte_4AB5B11 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           rarity,
           limitCount,
           (const MethodInfo_2EC2A28 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall CombineLimitGiftEntity__CreatePrimaryKey(
        CombineLimitGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CombineLimitGiftEntity__CreatePK(this->fields.svtId, this->fields.rarity, this->fields.limitCount, v2);
}