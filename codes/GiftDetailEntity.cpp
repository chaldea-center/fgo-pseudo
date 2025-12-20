void GiftDetailEntity___ctor(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CC81 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_int___ctor__);
    byte_4D2CC81 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3458FDC *)Method_DataEntityBase_int___ctor__);
}


int32_t GiftDetailEntity__CreatePrimaryKey(GiftDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CC7E & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_7569/*"IgnoreQuestBoardRewardIconItemIds"*/);
    byte_4D2CC7E = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7569/*"IgnoreQuestBoardRewardIconItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CC7F & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_7570/*"IgnoreQuestClearRewardItemIds"*/);
    byte_4D2CC7F = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7570/*"IgnoreQuestClearRewardItemIds"*/, 0, 0);
}


System_Int32_array *GiftDetailEntity__GetIgnoreQuestPhaseClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2CC80 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_7571/*"IgnoreQuestPhaseClearRewardItemIds"*/);
    byte_4D2CC80 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7571/*"IgnoreQuestPhaseClearRewardItemIds"*/, 0, 0);
}


System_String_o *GiftDetailEntity__GetOverwritePhaseRewardImageId(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CC7D & 1) == 0 )
  {
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_22899/*"phaseRewardImageId"*/);
    byte_4D2CC7D = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22899/*"phaseRewardImageId"*/,
           string_TypeInfo->static_fields->Empty,
           0);
}


Il2CppObject *GiftDetailEntity__GetScriptValue(
        GiftDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CC7C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4D2CC7C = 1;
  }
  value = 0;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}