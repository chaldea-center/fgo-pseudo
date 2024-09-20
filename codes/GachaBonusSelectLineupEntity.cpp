void __fastcall GachaBonusSelectLineupEntity___ctor(GachaBonusSelectLineupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B3CD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B3CD = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaBonusSelectLineupEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_4A5B3CB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4A5B3CB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_2E7DFBC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall GachaBonusSelectLineupEntity__CreatePrimaryKey(
        GachaBonusSelectLineupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaBonusSelectLineupEntity__CreatePK(this->fields.id, this->fields.type, this->fields.giftId, v2);
}


int32_t __fastcall GachaBonusSelectLineupEntity__GetSummonCategoryId(
        GachaBonusSelectLineupEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_4A5B3CC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23670/*"summonCategoryId"*/);
    byte_4A5B3CC = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23670/*"summonCategoryId"*/, defId, 0LL);
}