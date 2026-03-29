void GiftDetailEntity___ctor(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30E02 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_int___ctor__);
    byte_4D30E02 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3460B3C *)Method_DataEntityBase_int___ctor__);
}


int32_t GiftDetailEntity__CreatePrimaryKey(GiftDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D30DFF & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7596/*"IgnoreQuestBoardRewardIconItemIds"*/);
    byte_4D30DFF = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7596/*"IgnoreQuestBoardRewardIconItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D30E00 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7597/*"IgnoreQuestClearRewardItemIds"*/);
    byte_4D30E00 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7597/*"IgnoreQuestClearRewardItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestPhaseClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D30E01 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_7598/*"IgnoreQuestPhaseClearRewardItemIds"*/);
    byte_4D30E01 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7598/*"IgnoreQuestPhaseClearRewardItemIds"*/, 0, 0);
}


System_String_o *GiftDetailEntity__GetOverwritePhaseRewardImageId(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D30DFE & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_22959/*"phaseRewardImageId"*/);
    byte_4D30DFE = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22959/*"phaseRewardImageId"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}