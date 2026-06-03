void GiftDetailEntity___ctor(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77ACB & 1) == 0 )
  {
    sub_1D0F0B4(&Method_DataEntityBase_int___ctor__);
    byte_4E77ACB = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3533444 *)Method_DataEntityBase_int___ctor__);
}


int32_t GiftDetailEntity__CreatePrimaryKey(GiftDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E77AC8 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_7648/*"IgnoreQuestBoardRewardIconItemIds"*/);
    byte_4E77AC8 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7648/*"IgnoreQuestBoardRewardIconItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E77AC9 & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_7649/*"IgnoreQuestClearRewardItemIds"*/);
    byte_4E77AC9 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7649/*"IgnoreQuestClearRewardItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestPhaseClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4E77ACA & 1) == 0 )
  {
    sub_1D0F0B4(&StringLiteral_7650/*"IgnoreQuestPhaseClearRewardItemIds"*/);
    byte_4E77ACA = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7650/*"IgnoreQuestPhaseClearRewardItemIds"*/, 0, 0);
}


System_String_o *GiftDetailEntity__GetOverwritePhaseRewardImageId(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E77AC7 & 1) == 0 )
  {
    sub_1D0F0B4(&string_TypeInfo);
    sub_1D0F0B4(&StringLiteral_23136/*"phaseRewardImageId"*/);
    byte_4E77AC7 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_23136/*"phaseRewardImageId"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}