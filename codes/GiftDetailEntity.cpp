void __fastcall GiftDetailEntity___ctor(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BC7D89 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataEntityBase_int___ctor__, method);
    byte_4BC7D89 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3246194 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall GiftDetailEntity__CreatePrimaryKey(GiftDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


System_Int32_array *__fastcall GiftDetailEntity__GetIgnoreQuestBoardRewardIconItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7D86 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_7629/*"IgnoreQuestBoardRewardIconItemIds"*/, method);
    byte_4BC7D86 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7629/*"IgnoreQuestBoardRewardIconItemIds"*/, 0LL, 0LL);
}


System_Int32_array *__fastcall GiftDetailEntity__GetIgnoreQuestClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7D87 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_7630/*"IgnoreQuestClearRewardItemIds"*/, method);
    byte_4BC7D87 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7630/*"IgnoreQuestClearRewardItemIds"*/, 0LL, 0LL);
}


System_Int32_array *__fastcall GiftDetailEntity__GetIgnoreQuestPhaseClearRewardItemIds(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BC7D88 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_7631/*"IgnoreQuestPhaseClearRewardItemIds"*/, method);
    byte_4BC7D88 = 1;
  }
  return EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_7631/*"IgnoreQuestPhaseClearRewardItemIds"*/, 0LL, 0LL);
}


System_String_o *__fastcall GiftDetailEntity__GetOverwritePhaseRewardImageId(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4BC7D85 & 1) == 0 )
  {
    sub_1C1ABD4(&string_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_22907/*"phaseRewardImageId"*/, v3);
    byte_4BC7D85 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_22907/*"phaseRewardImageId"*/,
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

  if ( (byte_4BC7D84 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4BC7D84 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_33044FC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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