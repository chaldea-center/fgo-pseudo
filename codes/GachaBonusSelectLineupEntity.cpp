void __fastcall GachaBonusSelectLineupEntity___ctor(GachaBonusSelectLineupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AFCD & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418AFCD = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaBonusSelectLineupEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_418AFCB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_418AFCB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_1732D30 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaBonusSelectLineupEntity__CreatePrimaryKey(
        GachaBonusSelectLineupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaBonusSelectLineupEntity__CreatePK(this->fields.id, this->fields.type, this->fields.giftId, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall GachaBonusSelectLineupEntity__GetSummonCategoryId(
        GachaBonusSelectLineupEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_418AFCC & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22433/*"summonCategoryId"*/, *(_QWORD *)&defId);
    byte_418AFCC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22433/*"summonCategoryId"*/, defId, 0LL);
}