void __fastcall WarBoardStageBossEntity___ctor(WarBoardStageBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B67C2F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_string___ctor__, method);
    byte_4B67C2F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31FD63C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardStageBossEntity__CreatePK(int32_t stageId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4B67C2E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4B67C2E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_2F57334 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4B67C2D & 1) == 0 )
  {
    sub_1BE4ACC(&string___TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_24244/*"text_effect_colors"*/, v3);
    byte_4B67C2D = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_24244/*"text_effect_colors"*/, 0LL, 0LL);
  IsNullOrEmpty = System_String__IsNullOrEmpty(StringValue, 0LL);
  if ( IsNullOrEmpty )
    return (System_String_array *)sub_1BE4B74(string___TypeInfo, 0LL);
  if ( !StringValue )
    sub_1BE4D28(IsNullOrEmpty, v6);
  return System_String__Split(StringValue, 0x2Cu, 0, 0LL);
}