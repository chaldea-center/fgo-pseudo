void GachaBonusSelectLineupEntity___ctor(GachaBonusSelectLineupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2756A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2756A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaBonusSelectLineupEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_4C27568 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4C27568 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_30CCF68 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *GachaBonusSelectLineupEntity__CreatePrimaryKey(
        GachaBonusSelectLineupEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaBonusSelectLineupEntity__CreatePK(this->fields.id, this->fields.type, this->fields.giftId, v2);
}


int32_t GachaBonusSelectLineupEntity__GetSummonCategoryId(
        GachaBonusSelectLineupEntity_o *this,
        int32_t defId,
        const MethodInfo *method)
{
  if ( (byte_4C27569 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23809/*"summonCategoryId"*/);
    byte_4C27569 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_23809/*"summonCategoryId"*/, defId, 0);
}