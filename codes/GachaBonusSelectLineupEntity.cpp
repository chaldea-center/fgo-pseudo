void __fastcall GachaBonusSelectLineupEntity___ctor(GachaBonusSelectLineupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FED94 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FED94 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaBonusSelectLineupEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_49FED92 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_49FED92 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_2E3A394 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_49FED93 & 1) == 0 )
  {
    sub_1B64A00(&StringLiteral_23577/*"summonCategoryId"*/, *(_QWORD *)&defId);
    byte_49FED93 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23577/*"summonCategoryId"*/, defId, 0LL);
}