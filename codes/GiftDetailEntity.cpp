void __fastcall GiftDetailEntity___ctor(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BB167 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_int___ctor__, method);
    byte_49BB167 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_319B4B8 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall GiftDetailEntity__CreatePrimaryKey(GiftDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


System_Int32_array *__fastcall GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB164 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_7362/*"IgnoreQuestBoardRewardIconItemIds"*/, method);
    byte_49BB164 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7362/*"IgnoreQuestBoardRewardIconItemIds"*/, 0LL, 0LL);
}


System_Int32_array *__fastcall GiftDetailEntity__GetIgnoreQuestClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB165 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_7363/*"IgnoreQuestClearRewardItemIds"*/, method);
    byte_49BB165 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7363/*"IgnoreQuestClearRewardItemIds"*/, 0LL, 0LL);
}


System_Int32_array *__fastcall GiftDetailEntity__GetIgnoreQuestPhaseClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BB166 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_7364/*"IgnoreQuestPhaseClearRewardItemIds"*/, method);
    byte_49BB166 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7364/*"IgnoreQuestPhaseClearRewardItemIds"*/, 0LL, 0LL);
}


System_String_o *__fastcall GiftDetailEntity__GetOverwritePhaseRewardImageId(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_49BB163 & 1) == 0 )
  {
    sub_1B4CF90(&string_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_22235/*"phaseRewardImageId"*/, v3);
    byte_49BB163 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22235/*"phaseRewardImageId"*/,
           string_TypeInfo->static_fields->Empty,
           0LL);
}


Il2CppObject *__fastcall GiftDetailEntity__GetScriptValue(
        GiftDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BB162 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49BB162 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}