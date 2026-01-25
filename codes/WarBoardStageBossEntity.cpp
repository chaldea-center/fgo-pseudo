void WarBoardStageBossEntity___ctor(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF843 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF843 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarBoardStageBossEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CEF842 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF842 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4CEF841 & 1) == 0 )
  {
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_24287/*"text_effect_colors"*/);
    byte_4CEF841 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24287/*"text_effect_colors"*/, 0, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StringValue, 0);
  if ( IsNullOrEmpty )
    return (System_String_array *)sub_1C7BB90(string___TypeInfo, 0);
  if ( !StringValue )
    sub_1C7BD40(IsNullOrEmpty, v5);
  return System_String__Split(StringValue, 0x2Cu, 0, 0);
}