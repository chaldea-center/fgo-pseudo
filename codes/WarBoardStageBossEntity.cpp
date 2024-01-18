void __fastcall WarBoardStageBossEntity___ctor(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_41892E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_41892E5 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageBossEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_41892E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_41892E4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v4; // x1
  System_String_o *StringValue; // x19
  System_Char_array *v7; // x0
  System_Char_array *v8; // x1
  __int64 v9; // x0

  if ( (byte_41892E3 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&string___TypeInfo, v3);
    sub_B2C35C(&StringLiteral_22658/*"text_effect_colors"*/, v4);
    byte_41892E3 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22658/*"text_effect_colors"*/, 0LL, 0LL);
  if ( System_String__IsNullOrEmpty(StringValue, 0LL) )
    return (System_String_array *)sub_B2C374(string___TypeInfo, 0LL);
  v7 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v7 )
    goto LABEL_9;
  v8 = v7;
  if ( !v7->max_length )
  {
    v9 = sub_B2C460(v7);
    sub_B2C400(v9, 0LL);
  }
  v7->m_Items[2] = 44;
  if ( !StringValue )
LABEL_9:
    sub_B2C434(v7, v8);
  return System_String__Split(StringValue, v7, 0LL);
}