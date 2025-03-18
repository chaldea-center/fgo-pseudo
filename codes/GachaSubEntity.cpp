void __fastcall GachaSubEntity___ctor(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22222 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_string___ctor__, method);
    byte_4C22222 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32989DC *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GachaSubEntity__CreatePK(int32_t gachaId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4C22221 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4C22221 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           gachaId,
           id,
           (const MethodInfo_2FEE38C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GachaSubEntity__CreatePrimaryKey(GachaSubEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GachaSubEntity__CreatePK(this->fields.gachaId, this->fields.id, v2);
}


System_String_o *__fastcall GachaSubEntity__GetSummonConfirmMessage(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2221D & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_13366/*"TerminalLastPlayedFreeQuestSpotId"*/, method);
    byte_4C2221D = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_13366/*"TerminalLastPlayedFreeQuestSpotId"*/, 0LL, 0LL);
}


int32_t __fastcall GachaSubEntity__GetSummonConfirmMessageFontSize(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C22220 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_6932/*"GetResponse"*/, method);
    byte_4C22220 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_6932/*"GetResponse"*/, 0, 0LL);
}


int32_t __fastcall GachaSubEntity__GetSummonConfirmMessageSpacingX(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2221F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_13130/*"TRADE_EVENT_BOARD_START_BUTTON"*/, method);
    byte_4C2221F = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13130/*"TRADE_EVENT_BOARD_START_BUTTON"*/, -1, 0LL);
}


int32_t __fastcall GachaSubEntity__GetSummonConfirmMessageSpacingY(GachaSubEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2221E & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_13131/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, method);
    byte_4C2221E = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_13131/*"TRADE_EVENT_BOARD_UNRELEASED_NAME"*/, -1, 0LL);
}