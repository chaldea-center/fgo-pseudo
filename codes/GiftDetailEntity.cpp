void __fastcall GiftDetailEntity___ctor(GiftDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C8D8 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438C8D8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_438C8D7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21912/*"phaseRewardImageId"*/);
    byte_438C8D7 = 1;
  }
  ScriptValue = GiftDetailEntity__GetScriptValue(this, (System_String_o *)StringLiteral_21912/*"phaseRewardImageId"*/, v2);
  if ( !ScriptValue )
    sub_B7769C(0LL, v5);
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
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438C8D6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438C8D6 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}