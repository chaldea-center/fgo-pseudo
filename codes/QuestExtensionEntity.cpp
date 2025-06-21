void __fastcall QuestExtensionEntity___ctor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CB00 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataEntityBase_int___ctor__, method);
    byte_4B1CB00 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32C591C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestExtensionEntity__CreatePrimaryKey(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t __fastcall QuestExtensionEntity__GetDiscountItemId(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CAFD & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18481/*"discountItem"*/, method);
    byte_4B1CAFD = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18481/*"discountItem"*/, 0, 0LL);
}


System_String_o *__fastcall QuestExtensionEntity__GetQuestBoardFrameName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CAFC & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_10845/*"QuestBoardFrame"*/, method);
    byte_4B1CAFC = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10845/*"QuestBoardFrame"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestExtensionEntity__GetQuestBoardTitleColor(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CAFF & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_10846/*"QuestBoardTitleColor"*/, method);
    byte_4B1CAFF = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10846/*"QuestBoardTitleColor"*/, 0LL, 0LL);
}


System_String_o *__fastcall QuestExtensionEntity__GetQuestStartEffectDispName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CAF9 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_10852/*"QuestStartEffectDispName"*/, method);
    byte_4B1CAF9 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10852/*"QuestStartEffectDispName"*/, 0LL, 0LL);
}


bool __fastcall QuestExtensionEntity__IsActiveClearCnt(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CAFA & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_7894/*"IsActiveClearCnt"*/, method);
    byte_4B1CAFA = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_7894/*"IsActiveClearCnt"*/, 0LL);
}


bool __fastcall QuestExtensionEntity__IsQuestBoardFrameChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B1CAFB & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_10845/*"QuestBoardFrame"*/, method);
    byte_4B1CAFB = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10845/*"QuestBoardFrame"*/, 0LL);
}


bool __fastcall QuestExtensionEntity__IsQuestBoardTitleColorChange(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B1CAFE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_10846/*"QuestBoardTitleColor"*/, method);
    byte_4B1CAFE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10846/*"QuestBoardTitleColor"*/, 0LL);
}


bool __fastcall QuestExtensionEntity__IsSvtCoinQuest(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.subType == 1;
}