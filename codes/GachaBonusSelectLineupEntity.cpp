void __fastcall GachaBonusSelectLineupEntity___ctor(GachaBonusSelectLineupEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438F13E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438F13E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall GachaBonusSelectLineupEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t giftId,
        const MethodInfo *method)
{
  if ( (byte_438F13C & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438F13C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           giftId,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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
  if ( (byte_438F13D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22909/*"summonCategoryId"*/);
    byte_438F13D = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22909/*"summonCategoryId"*/, defId, 0LL);
}