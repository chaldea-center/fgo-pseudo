void __fastcall QuestExtensionEntity___ctor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B0251E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_int___ctor__, method);
    byte_4B0251E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32ACB8C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestExtensionEntity__CreatePrimaryKey(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall QuestExtensionEntity__GetDiscountItemId(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B0251B & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_18467/*"discountItem"*/, method);
    byte_4B0251B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18467/*"discountItem"*/, 0, 0LL);
}


System_String_o *__fastcall QuestExtensionEntity__GetQuestBoardFrameName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B0251A & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_10834/*"QuestBoardFrame"*/, method);
    byte_4B0251A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10834/*"QuestBoardFrame"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestExtensionEntity__GetQuestBoardTitleColor(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B0251D & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_10835/*"QuestBoardTitleColor"*/, method);
    byte_4B0251D = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10835/*"QuestBoardTitleColor"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestExtensionEntity__GetQuestStartEffectDispName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B02517 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_10841/*"QuestStartEffectDispName"*/, method);
    byte_4B02517 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10841/*"QuestStartEffectDispName"*/, 0LL, 0LL);
}


bool __fastcall QuestExtensionEntity__IsActiveClearCnt(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02518 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_7885/*"IsActiveClearCnt"*/, method);
    byte_4B02518 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_7885/*"IsActiveClearCnt"*/, 0LL);
}


bool __fastcall QuestExtensionEntity__IsQuestBoardFrameChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B02519 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_10834/*"QuestBoardFrame"*/, method);
    byte_4B02519 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10834/*"QuestBoardFrame"*/, 0LL);
}


bool __fastcall QuestExtensionEntity__IsQuestBoardTitleColorChange(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B0251C & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_10835/*"QuestBoardTitleColor"*/, method);
    byte_4B0251C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10835/*"QuestBoardTitleColor"*/, 0LL);
}


bool __fastcall QuestExtensionEntity__IsSvtCoinQuest(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.subType == 1;
}