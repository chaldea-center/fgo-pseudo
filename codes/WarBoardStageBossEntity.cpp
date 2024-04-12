void __fastcall WarBoardStageBossEntity___ctor(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B2266 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B2266 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardStageBossEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_42B2265 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B2265 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_String_o *StringValue; // x19
  System_Char_array *v5; // x0
  System_Char_array *v6; // x1
  __int64 v7; // x0

  if ( (byte_42B2264 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_22848/*"text_effect_colors"*/);
    byte_42B2264 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22848/*"text_effect_colors"*/, 0LL, 0LL);
  if ( System_String__IsNullOrEmpty(StringValue, 0LL) )
    return (System_String_array *)sub_B5299C(string___TypeInfo, 0LL);
  v5 = (System_Char_array *)sub_B5299C(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !v5->max_length )
  {
    v7 = sub_B52A88(v5);
    sub_B52A28(v7, 0LL);
  }
  v5->m_Items[2] = 44;
  if ( !StringValue )
LABEL_9:
    sub_B52A5C(v5, v6);
  return System_String__Split(StringValue, v5, 0LL);
}