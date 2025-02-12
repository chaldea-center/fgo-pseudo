void __fastcall GiftAddEntity___ctor(GiftAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BB49AF & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_string___ctor__, method);
    byte_4BB49AF = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32361B8 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall GiftAddEntity__CheckValid(GiftAddEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t condType; // w21
  int64_t targetNum; // x19

  if ( (byte_4BB49AA & 1) == 0 )
  {
    sub_1C13D24(&CondType_TypeInfo, method);
    byte_4BB49AA = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  targetNum = this->fields.targetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, targetId, targetNum, 0, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall GiftAddEntity__CreatePK(int32_t giftId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4BB49A9 & 1) == 0 )
  {
    sub_1C13D24(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_4BB49A9 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           giftId,
           priority,
           (const MethodInfo_2F8D690 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GiftAddEntity__CreatePrimaryKey(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GiftAddEntity__CreatePK(this->fields.giftId, this->fields.priority, v2);
}


System_String_o *__fastcall GiftAddEntity__GetOverWriteTitleSprite(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_String_o *result; // x0
  GiftAddEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BB49AE & 1) == 0 )
  {
    sub_1C13D24(&string_TypeInfo, method);
    sub_1C13D24(&StringLiteral_22788/*"overwritePersonality"*/, v4);
    byte_4BB49AE = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_22788/*"overwritePersonality"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      sub_1C14240(result);
      GiftAddEntity___ctor(v6, v7);
    }
  }
  return result;
}


System_String_o *__fastcall GiftAddEntity__GetOverwriteDetailText(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_String_o *result; // x0
  GiftAddEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BB49AD & 1) == 0 )
  {
    sub_1C13D24(&string_TypeInfo, method);
    sub_1C13D24(&StringLiteral_22755/*"overkill_"*/, v4);
    byte_4BB49AD = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_22755/*"overkill_"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      sub_1C14240(result);
      return GiftAddEntity__GetOverWriteTitleSprite(v6, v7);
    }
  }
  return result;
}


System_String_o *__fastcall GiftAddEntity__GetOverwriteTreasureEffectId(
        GiftAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_String_o *result; // x0
  GiftAddEntity_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4BB49AC & 1) == 0 )
  {
    sub_1C13D24(&string_TypeInfo, method);
    sub_1C13D24(&StringLiteral_22790/*"overwritePolicy"*/, v4);
    byte_4BB49AC = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_22790/*"overwritePolicy"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      sub_1C14240(result);
      return GiftAddEntity__GetOverwriteDetailText(v6, v7);
    }
  }
  return result;
}


Il2CppObject *__fastcall GiftAddEntity__GetScriptValue(
        GiftAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BB49AB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4BB49AB = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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