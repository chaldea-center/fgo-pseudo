void QuestExtensionEntity___ctor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A10 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_int___ctor__);
    byte_4CC7A10 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_340699C *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestExtensionEntity__CreatePrimaryKey(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t QuestExtensionEntity__GetDiscountItemId(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A0C & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_18684/*"discountItem"*/);
    byte_4CC7A0C = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18684/*"discountItem"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetGiftSharedImageName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A0F & 1) == 0 )
  {
    sub_1C713B0(&string_TypeInfo);
    sub_1C713B0(&StringLiteral_7115/*"GiftSharedImageName"*/);
    byte_4CC7A0F = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_7115/*"GiftSharedImageName"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardFrameName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A0B & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10931/*"QuestBoardFrame"*/);
    byte_4CC7A0B = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10931/*"QuestBoardFrame"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardTitleColor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A0E & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10932/*"QuestBoardTitleColor"*/);
    byte_4CC7A0E = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10932/*"QuestBoardTitleColor"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestStartEffectDispName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC7A08 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10938/*"QuestStartEffectDispName"*/);
    byte_4CC7A08 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10938/*"QuestStartEffectDispName"*/, 0, 0);
}


bool QuestExtensionEntity__IsActiveClearCnt(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A09 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_7964/*"IsActiveClearCnt"*/);
    byte_4CC7A09 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_7964/*"IsActiveClearCnt"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardFrameChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A0A & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10931/*"QuestBoardFrame"*/);
    byte_4CC7A0A = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10931/*"QuestBoardFrame"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardTitleColorChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7A0D & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_10932/*"QuestBoardTitleColor"*/);
    byte_4CC7A0D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10932/*"QuestBoardTitleColor"*/, 0);
}


bool QuestExtensionEntity__IsSvtCoinQuest(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.subType == 1;
}