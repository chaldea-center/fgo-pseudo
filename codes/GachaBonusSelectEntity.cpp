void GachaBonusSelectEntity___ctor(GachaBonusSelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CBF9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CBF9 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaBonusSelectEntity__CreatePK(
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  if ( (byte_4D2CBF6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4D2CBF6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           gachaBonusId,
           slot,
           (const MethodInfo_319A74C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *GachaBonusSelectEntity__CreatePrimaryKey(GachaBonusSelectEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return GachaBonusSelectEntity__CreatePK(this->fields.gachaId, this->fields.gachaBonusId, this->fields.slot, v2);
}


System_String_o *GachaBonusSelectEntity__GetClassIconId(GachaBonusSelectEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t ClassId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2CBF7 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_4956/*"D3"*/);
    byte_4D2CBF7 = 1;
  }
  ClassId = GachaBonusSelectEntity__GetClassId(this, 1001, v2);
  return System_Int32__ToString_65926240((int32_t)&ClassId, (System_String_o *)StringLiteral_4956/*"D3"*/, 0);
}


int32_t GachaBonusSelectEntity__GetClassId(GachaBonusSelectEntity_o *this, int32_t defId, const MethodInfo *method)
{
  if ( (byte_4D2CBF8 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18081/*"classId"*/);
    byte_4D2CBF8 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18081/*"classId"*/, defId, 0);
}