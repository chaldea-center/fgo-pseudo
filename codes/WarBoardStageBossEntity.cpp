void __fastcall WarBoardStageBossEntity___ctor(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FBAF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FBAF8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageBossEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_40FBAF7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_40FBAF7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v6; // x2
  System_Char_array *v8; // x0
  __int64 v9; // x2

  if ( (byte_40FBAF6 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&string___TypeInfo, v3);
    sub_B16FFC(&StringLiteral_22565/*"text_effect_colors"*/, v4);
    byte_40FBAF6 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_22565/*"text_effect_colors"*/, 0LL, 0LL);
  if ( System_String__IsNullOrEmpty(StringValue, 0LL) )
    return (System_String_array *)sub_B17014(string___TypeInfo, 0LL, v6);
  v8 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v6);
  if ( !v8 )
    goto LABEL_9;
  if ( !v8->max_length )
  {
    sub_B17100(v8, v8, v9);
    sub_B170A0();
  }
  v8->m_Items[2] = 44;
  if ( !StringValue )
LABEL_9:
    sub_B170D4();
  return System_String__Split(StringValue, v8, 0LL);
}