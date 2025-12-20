void WarBoardStageBossEntity___ctor(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2DAA6 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2DAA6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardStageBossEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4D2DAA5 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2DAA5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarBoardStageBossEntity__CreatePrimaryKey(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageBossEntity__CreatePK(this->fields.stageId, this->fields.idx, v2);
}


System_String_array *WarBoardStageBossEntity__GetTextEffectColors(
        WarBoardStageBossEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1

  if ( (byte_4D2DAA4 & 1) == 0 )
  {
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_24289/*"text_effect_colors"*/);
    byte_4D2DAA4 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24289/*"text_effect_colors"*/, 0, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StringValue, 0);
  if ( IsNullOrEmpty )
    return (System_String_array *)sub_1C94140(string___TypeInfo, 0);
  if ( !StringValue )
    sub_1C942F0(IsNullOrEmpty, v5);
  return System_String__Split(StringValue, 0x2Cu, 0, 0);
}