void GiftDetailEntity___ctor(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEA97 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_int___ctor__);
    byte_4CEEA97 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_342BE18 *)Method_DataEntityBase_int___ctor__);
}


int32_t GiftDetailEntity__CreatePrimaryKey(GiftDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEEA94 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_7572/*"IgnoreQuestBoardRewardIconItemIds"*/);
    byte_4CEEA94 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7572/*"IgnoreQuestBoardRewardIconItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEEA95 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_7573/*"IgnoreQuestClearRewardItemIds"*/);
    byte_4CEEA95 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7573/*"IgnoreQuestClearRewardItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestPhaseClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CEEA96 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_7574/*"IgnoreQuestPhaseClearRewardItemIds"*/);
    byte_4CEEA96 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7574/*"IgnoreQuestPhaseClearRewardItemIds"*/, 0, 0);
}


System_String_o *GiftDetailEntity__GetOverwritePhaseRewardImageId(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEEA93 & 1) == 0 )
  {
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22894/*"phaseRewardImageId"*/);
    byte_4CEEA93 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22894/*"phaseRewardImageId"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}