void GiftAddEntity___ctor(GiftAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938AD3 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938AD3 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


bool GiftAddEntity__CheckValid(GiftAddEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t targetId; // w21
  int64_t targetNum; // x19

  if ( (byte_5938ACD & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5938ACD = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  targetNum = this->fields.targetNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, targetId, targetNum, 0, 0, 0);
}


System_String_o *GiftAddEntity__CreatePK(int32_t giftId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_5938ACC & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938ACC = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           giftId,
           priority,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v5; // x2
  GiftAddEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_5938AD1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23696/*"overwriteTitleSprite"*/);
    byte_5938AD1 = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_23696/*"overwriteTitleSprite"*/, v2);
  if ( result )
  {
    if ( result->klass != (System_String_c *)qword_594C0B8 )
    {
      sub_220024C(result, qword_594C0B8, v5);
      return (System_String_o *)GiftAddEntity__GetPriorGiftNums(v6, v7);
    }
  }
  return result;
}


System_String_o *GiftAddEntity__GetOverwriteDetailText(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2
  GiftAddEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_5938AD0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23638/*"overwriteDetailText"*/);
    byte_5938AD0 = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_23638/*"overwriteDetailText"*/, v2);
  if ( result )
  {
    if ( result->klass != (System_String_c *)qword_594C0B8 )
    {
      sub_220024C(result, qword_594C0B8, v5);
      return GiftAddEntity__GetOverWriteTitleSprite(v6, v7);
    }
  }
  return result;
}


System_String_o *GiftAddEntity__GetOverwriteTreasureEffectId(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  __int64 v5; // x2
  GiftAddEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_5938ACF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23698/*"overwriteTreasureEffectId"*/);
    byte_5938ACF = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_23698/*"overwriteTreasureEffectId"*/, v2);
  if ( result )
  {
    if ( result->klass != (System_String_c *)qword_594C0B8 )
    {
      sub_220024C(result, qword_594C0B8, v5);
      return GiftAddEntity__GetOverwriteDetailText(v6, v7);
    }
  }
  return result;
}


System_Int32_array *GiftAddEntity__GetPriorGiftNums(GiftAddEntity_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Int32_array *resValue; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938AD2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23912/*"priorGiftNums"*/);
    byte_5938AD2 = 1;
  }
  script = this->fields.script;
  resValue = 0;
  if ( EntityScriptUtil__TryGetIntArray(script, (System_String_o *)StringLiteral_23912/*"priorGiftNums"*/, &resValue, 0) )
    return resValue;
  else
    return 0;
}


Il2CppObject *GiftAddEntity__GetScriptValue(GiftAddEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938ACE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5938ACE = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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