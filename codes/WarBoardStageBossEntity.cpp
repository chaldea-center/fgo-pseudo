void __fastcall WarBoardStageBossEntity___ctor(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FFB17 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_string___ctor__, method);
    byte_49FFB17 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D6610 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageBossEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49FFB16 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49FFB16 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_2E39F04 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardStageBossEntity__CreatePrimaryKey(
        WarBoardStageBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardStageBossEntity__CreatePK(this->fields.stageId, this->fields.idx, v2);
}


System_String_array *__fastcall WarBoardStageBossEntity__GetTextEffectColors(
        WarBoardStageBossEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *StringValue; // x19
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  if ( (byte_49FFB15 & 1) == 0 )
  {
    sub_1B64A00(&string___TypeInfo, method);
    sub_1B64A00(&StringLiteral_23813/*"text_effect_colors"*/, v3);
    byte_49FFB15 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23813/*"text_effect_colors"*/, 0LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StringValue, 0LL);
  if ( IsNullOrEmpty )
    return (System_String_array *)sub_1B64AA8(string___TypeInfo, 0LL);
  if ( !StringValue )
    sub_1B64C5C(IsNullOrEmpty, v6);
  return System_String__Split(StringValue, 0x2Cu, 0, 0LL);
}