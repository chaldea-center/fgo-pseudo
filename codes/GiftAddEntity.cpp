void __fastcall GiftAddEntity___ctor(GiftAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA44C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA44C = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall GiftAddEntity__CheckValid(GiftAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t targetId; // w20
  int32_t condType; // w21
  int64_t targetNum; // x19

  if ( (byte_42EA448 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA448 = 1;
  }
  condType = this->fields.condType;
  targetId = this->fields.targetId;
  targetNum = this->fields.targetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, targetId, targetNum, 0, 0LL);
}


System_String_o *__fastcall GiftAddEntity__CreatePK(int32_t giftId, int32_t priority, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EA447 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, priority, (_DWORD)method, v3);
    byte_42EA447 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           giftId,
           priority,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GiftAddEntity__CreatePrimaryKey(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GiftAddEntity__CreatePK(this->fields.giftId, this->fields.priority, v2);
}


System_String_o *__fastcall GiftAddEntity__GetOverwriteDetailText(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *result; // x0
  GiftAddEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42EA44B & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21641/*"overwriteDetailText"*/, v5, v6, v7);
    byte_42EA44B = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_21641/*"overwriteDetailText"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      v9 = (GiftAddEntity_o *)sub_B5D990(result);
      GiftAddEntity___ctor(v9, v10);
    }
  }
  return result;
}


System_String_o *__fastcall GiftAddEntity__GetOverwriteTreasureEffectId(
        GiftAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *result; // x0
  GiftAddEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_42EA44A & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21670/*"overwriteTreasureEffectId"*/, v5, v6, v7);
    byte_42EA44A = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_21670/*"overwriteTreasureEffectId"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      v9 = (GiftAddEntity_o *)sub_B5D990(result);
      return GiftAddEntity__GetOverwriteDetailText(v9, v10);
    }
  }
  return result;
}


Il2CppObject *__fastcall GiftAddEntity__GetScriptValue(
        GiftAddEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA449 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EA449 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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