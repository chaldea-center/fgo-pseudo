void __fastcall GiftDetailEntity___ctor(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FE7D1 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_int___ctor__, method);
    byte_49FE7D1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D5F80 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall GiftDetailEntity__CreatePrimaryKey(GiftDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.giftId;
}


System_String_o *__fastcall GiftDetailEntity__GetOverwritePhaseRewardImageId(
        GiftDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *ScriptValue; // x0
  __int64 v5; // x1

  if ( (byte_49FE7D0 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_22427/*"phaseRewardImageId"*/, method);
    byte_49FE7D0 = 1;
  }
  ScriptValue = GiftDetailEntity__GetScriptValue(this, (System_String_o *)StringLiteral_22427/*"phaseRewardImageId"*/, v2);
  if ( !ScriptValue )
    sub_1B64ACC(0LL, v5);
  return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptValue->klass->vtable[3].method)(
                              ScriptValue,
                              ScriptValue->klass->vtable[4].methodPtr);
}


Il2CppObject *__fastcall GiftDetailEntity__GetScriptValue(
        GiftDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE7CF & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_49FE7CF = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_317CEE0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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