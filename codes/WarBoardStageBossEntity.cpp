void __fastcall WarBoardStageBossEntity___ctor(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438D2A7 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438D2A7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarBoardStageBossEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_438D2A6 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438D2A6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_438D2A5 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_23135/*"text_effect_colors"*/);
    byte_438D2A5 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_23135/*"text_effect_colors"*/, 0LL, 0LL);
  if ( System_String__IsNullOrEmpty(StringValue, 0LL) )
    return (System_String_array *)sub_B775DC(string___TypeInfo, 0LL);
  v5 = (System_Char_array *)sub_B775DC(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_9;
  v6 = v5;
  if ( !v5->max_length )
  {
    v7 = sub_B776C8(v5);
    sub_B77668(v7, 0LL);
  }
  v5->m_Items[2] = 44;
  if ( !StringValue )
LABEL_9:
    sub_B7769C(v5, v6);
  return System_String__Split(StringValue, v5, 0LL);
}