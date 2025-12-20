void QuestExtensionEntity___ctor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE8F & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2CE8F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestExtensionEntity__CreatePrimaryKey(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.questId;
}


int32_t QuestExtensionEntity__GetDiscountItemId(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE8B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_18752/*"discountItem"*/);
    byte_4D2CE8B = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_18752/*"discountItem"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetGiftSharedImageName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE8E & 1) == 0 )
  {
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_7130/*"GiftSharedImageName"*/);
    byte_4D2CE8E = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_7130/*"GiftSharedImageName"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardFrameName(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE8A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10967/*"QuestBoardFrame"*/);
    byte_4D2CE8A = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10967/*"QuestBoardFrame"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestBoardTitleColor(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE8D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10968/*"QuestBoardTitleColor"*/);
    byte_4D2CE8D = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10968/*"QuestBoardTitleColor"*/, 0, 0);
}


System_String_o *QuestExtensionEntity__GetQuestStartEffectDispName(
        QuestExtensionEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CE87 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10975/*"QuestStartEffectDispName"*/);
    byte_4D2CE87 = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_10975/*"QuestStartEffectDispName"*/, 0, 0);
}


bool QuestExtensionEntity__IsActiveClearCnt(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE88 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_7980/*"IsActiveClearCnt"*/);
    byte_4D2CE88 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_7980/*"IsActiveClearCnt"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardFrameChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE89 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10967/*"QuestBoardFrame"*/);
    byte_4D2CE89 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10967/*"QuestBoardFrame"*/, 0);
}


bool QuestExtensionEntity__IsQuestBoardTitleColorChange(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CE8C & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10968/*"QuestBoardTitleColor"*/);
    byte_4D2CE8C = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_10968/*"QuestBoardTitleColor"*/, 0);
}


bool QuestExtensionEntity__IsSvtCoinQuest(QuestExtensionEntity_o *this, const MethodInfo *method)
{
  return this->fields.subType == 1;
}