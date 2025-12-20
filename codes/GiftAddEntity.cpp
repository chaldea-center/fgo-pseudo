void GiftAddEntity___ctor(GiftAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CC77 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_string___ctor__);
    byte_4D2CC77 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3459054 *)Method_DataEntityBase_string___ctor__);
}


bool GiftAddEntity__CheckValid(GiftAddEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t condType; // w21
  int64_t targetNum; // x19

  if ( (byte_4D2CC71 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    byte_4D2CC71 = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, targetId, targetNum, 0, 0, 0);
}


System_String_o *GiftAddEntity__CreatePK(int32_t giftId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4D2CC70 & 1) == 0 )
  {
    sub_1C94098(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D2CC70 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           giftId,
           priority,
           (const MethodInfo_319A2BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *GiftAddEntity__CreatePrimaryKey(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GiftAddEntity__CreatePK(this->fields.giftId, this->fields.priority, v2);
}


System_String_o *GiftAddEntity__GetOverWriteTitleSprite(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  GiftAddEntity_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D2CC75 & 1) == 0 )
  {
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_22807/*"overwriteTitleSprite"*/);
    byte_4D2CC75 = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_22807/*"overwriteTitleSprite"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      sub_1C9468C(result);
      return (System_String_o *)GiftAddEntity__GetPriorGiftNums(v5, v6);
    }
  }
  return result;
}


System_String_o *GiftAddEntity__GetOverwriteDetailText(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  GiftAddEntity_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D2CC74 & 1) == 0 )
  {
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_22758/*"overwriteDetailText"*/);
    byte_4D2CC74 = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_22758/*"overwriteDetailText"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      sub_1C9468C(result);
      return GiftAddEntity__GetOverWriteTitleSprite(v5, v6);
    }
  }
  return result;
}


System_String_o *GiftAddEntity__GetOverwriteTreasureEffectId(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  GiftAddEntity_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4D2CC73 & 1) == 0 )
  {
    sub_1C94098(&string_TypeInfo);
    sub_1C94098(&StringLiteral_22809/*"overwriteTreasureEffectId"*/);
    byte_4D2CC73 = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_22809/*"overwriteTreasureEffectId"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      sub_1C9468C(result);
      return GiftAddEntity__GetOverwriteDetailText(v5, v6);
    }
  }
  return result;
}


System_Int32_array *GiftAddEntity__GetPriorGiftNums(GiftAddEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CC76 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_22997/*"priorGiftNums"*/);
    byte_4D2CC76 = 1;
  }
  resValue = 0;
  if ( EntityScriptUtil__TryGetIntArray(this->fields.script, (System_String_o *)StringLiteral_22997/*"priorGiftNums"*/, &resValue, 0) )
    return resValue;
  else
    return 0;
}


Il2CppObject *GiftAddEntity__GetScriptValue(GiftAddEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CC72 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4D2CC72 = 1;
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