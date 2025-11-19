void GachaBonusSelectEntity___ctor(GachaBonusSelectEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6576 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_string___ctor__);
    byte_4CB6576 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33F6C70 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *GachaBonusSelectEntity__CreatePK(
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  if ( (byte_4CB6573 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CB6573 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           gachaId,
           gachaBonusId,
           slot,
           (const MethodInfo_3139980 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
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

  if ( (byte_4CB6574 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_4943/*"D3"*/);
    byte_4CB6574 = 1;
  }
  ClassId = GachaBonusSelectEntity__GetClassId(this, 1001, v2);
  return System_Int32__ToString_65475288((int32_t)&ClassId, (System_String_o *)StringLiteral_4943/*"D3"*/, 0);
}


int32_t GachaBonusSelectEntity__GetClassId(GachaBonusSelectEntity_o *this, int32_t defId, const MethodInfo *method)
{
  if ( (byte_4CB6575 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_18006/*"classId"*/);
    byte_4CB6575 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18006/*"classId"*/, defId, 0);
}