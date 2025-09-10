void QuestExtensionEntity___ctor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C278D5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C278D5 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestExtensionEntity__CreatePrimaryKey(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t QuestExtensionEntity__GetDiscountItemId(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C278D1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18631/*"discountItem"*/);
    byte_4C278D1 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18631/*"discountItem"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetGiftSharedImageName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C278D4 & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&StringLiteral_7112/*"GiftSharedImageName"*/);
    byte_4C278D4 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_7112/*"GiftSharedImageName"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardFrameName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C278D0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10920/*"QuestBoardFrame"*/);
    byte_4C278D0 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10920/*"QuestBoardFrame"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardTitleColor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C278D3 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10921/*"QuestBoardTitleColor"*/);
    byte_4C278D3 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10921/*"QuestBoardTitleColor"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestStartEffectDispName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C278CD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10927/*"QuestStartEffectDispName"*/);
    byte_4C278CD = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10927/*"QuestStartEffectDispName"*/, 0, 0);
}


bool QuestExtensionEntity__IsActiveClearCnt(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C278CE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_7955/*"IsActiveClearCnt"*/);
    byte_4C278CE = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_7955/*"IsActiveClearCnt"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardFrameChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C278CF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10920/*"QuestBoardFrame"*/);
    byte_4C278CF = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10920/*"QuestBoardFrame"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardTitleColorChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C278D2 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_10921/*"QuestBoardTitleColor"*/);
    byte_4C278D2 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10921/*"QuestBoardTitleColor"*/, 0);
}


bool QuestExtensionEntity__IsSvtCoinQuest(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.subType == 1;
}