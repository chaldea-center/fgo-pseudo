void QuestExtensionEntity___ctor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEC94 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEEC94 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestExtensionEntity__CreatePrimaryKey(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t QuestExtensionEntity__GetDiscountItemId(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEC90 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_18753/*"discountItem"*/);
    byte_4CEEC90 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18753/*"discountItem"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetGiftSharedImageName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEC93 & 1) == 0 )
  {
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&StringLiteral_7133/*"GiftSharedImageName"*/);
    byte_4CEEC93 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_7133/*"GiftSharedImageName"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardFrameName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEC8F & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_10969/*"QuestBoardFrame"*/);
    byte_4CEEC8F = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10969/*"QuestBoardFrame"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardTitleColor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEC92 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_10970/*"QuestBoardTitleColor"*/);
    byte_4CEEC92 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10970/*"QuestBoardTitleColor"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestStartEffectDispName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEEC8C & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_10977/*"QuestStartEffectDispName"*/);
    byte_4CEEC8C = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10977/*"QuestStartEffectDispName"*/, 0, 0);
}


bool QuestExtensionEntity__IsActiveClearCnt(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEC8D & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_7983/*"IsActiveClearCnt"*/);
    byte_4CEEC8D = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_7983/*"IsActiveClearCnt"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardFrameChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEC8E & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_10969/*"QuestBoardFrame"*/);
    byte_4CEEC8E = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10969/*"QuestBoardFrame"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardTitleColorChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEC91 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_10970/*"QuestBoardTitleColor"*/);
    byte_4CEEC91 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10970/*"QuestBoardTitleColor"*/, 0);
}


bool QuestExtensionEntity__IsSvtCoinQuest(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.subType == 1;
}