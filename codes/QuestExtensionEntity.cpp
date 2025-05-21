void __fastcall QuestExtensionEntity___ctor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44F6C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    byte_4B44F6C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestExtensionEntity__CreatePrimaryKey(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall QuestExtensionEntity__GetDiscountItemId(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44F69 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18650/*"discountItem"*/, method);
    byte_4B44F69 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18650/*"discountItem"*/, 0, 0LL);
}


System_String_o *__fastcall QuestExtensionEntity__GetQuestBoardFrameName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B44F68 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_10923/*"QuestBoardFrame"*/, method);
    byte_4B44F68 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10923/*"QuestBoardFrame"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestExtensionEntity__GetQuestBoardTitleColor(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B44F6B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_10924/*"QuestBoardTitleColor"*/, method);
    byte_4B44F6B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10924/*"QuestBoardTitleColor"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestExtensionEntity__GetQuestStartEffectDispName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B44F65 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_10930/*"QuestStartEffectDispName"*/, method);
    byte_4B44F65 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10930/*"QuestStartEffectDispName"*/, 0LL, 0LL);
}


bool __fastcall QuestExtensionEntity__IsActiveClearCnt(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44F66 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_7954/*"IsActiveClearCnt"*/, method);
    byte_4B44F66 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_7954/*"IsActiveClearCnt"*/, 0LL);
}


bool __fastcall QuestExtensionEntity__IsQuestBoardFrameChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44F67 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_10923/*"QuestBoardFrame"*/, method);
    byte_4B44F67 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10923/*"QuestBoardFrame"*/, 0LL);
}


bool __fastcall QuestExtensionEntity__IsQuestBoardTitleColorChange(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B44F6A & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_10924/*"QuestBoardTitleColor"*/, method);
    byte_4B44F6A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10924/*"QuestBoardTitleColor"*/, 0LL);
}


bool __fastcall QuestExtensionEntity__IsSvtCoinQuest(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.subType == 1;
}