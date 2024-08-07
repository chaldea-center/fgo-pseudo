void __fastcall CombineLimitGiftEntity___ctor(CombineLimitGiftEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE8EA & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FE8EA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CombineLimitGiftEntity__CreatePK(
        int32_t svtId,
        int32_t rarity,
        int32_t limitCount,
        const MethodInfo *method)
{
  if ( (byte_49FE8E9 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&rarity);
    byte_49FE8E9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           svtId,
           rarity,
           limitCount,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall CombineLimitGiftEntity__CreatePrimaryKey(
        CombineLimitGiftEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return CombineLimitGiftEntity__CreatePK(this->fields.svtId, this->fields.rarity, this->fields.limitCount, v2);
}