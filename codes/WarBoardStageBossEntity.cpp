void __fastcall WarBoardStageBossEntity___ctor(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EABC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EABC5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardStageBossEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EABC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, idx, (_DWORD)method, v3);
    byte_42EABC4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *StringValue; // x19
  System_Char_array *v13; // x0
  System_Char_array *v14; // x1
  __int64 v15; // x0

  if ( (byte_42EABC3 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_22963/*"text_effect_colors"*/, v8, v9, v10);
    byte_42EABC3 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22963/*"text_effect_colors"*/, 0LL, 0LL);
  if ( System_String__IsNullOrEmpty(StringValue, 0LL) )
    return (System_String_array *)sub_B5D5DC(string___TypeInfo, 0LL);
  v13 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v13 )
    goto LABEL_9;
  v14 = v13;
  if ( !v13->max_length )
  {
    v15 = sub_B5D6C8(v13);
    sub_B5D668(v15, 0LL);
  }
  v13->m_Items[2] = 44;
  if ( !StringValue )
LABEL_9:
    sub_B5D69C(v13, v14);
  return System_String__Split(StringValue, v13, 0LL);
}