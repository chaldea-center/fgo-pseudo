void __fastcall GiftAddEntity___ctor(GiftAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B1B27 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B1B27 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall GiftAddEntity__CheckValid(GiftAddEntity_o *this, const MethodInfo *method)
{
  int32_t targetId; // w20
  int32_t condType; // w21
  int64_t targetNum; // x19

  if ( (byte_42B1B23 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    byte_42B1B23 = 1;
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
  if ( (byte_42B1B22 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B1B22 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           giftId,
           priority,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall GiftAddEntity__CreatePrimaryKey(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return GiftAddEntity__CreatePK(this->fields.giftId, this->fields.priority, v2);
}


System_String_o *__fastcall GiftAddEntity__GetOverwriteDetailText(GiftAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  GiftAddEntity_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42B1B26 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_21530/*"overwriteDetailText"*/);
    byte_42B1B26 = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_21530/*"overwriteDetailText"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      v5 = (GiftAddEntity_o *)sub_B52D50(result);
      GiftAddEntity___ctor(v5, v6);
    }
  }
  return result;
}


System_String_o *__fastcall GiftAddEntity__GetOverwriteTreasureEffectId(
        GiftAddEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *result; // x0
  GiftAddEntity_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42B1B25 & 1) == 0 )
  {
    sub_B52984(&string_TypeInfo);
    sub_B52984(&StringLiteral_21557/*"overwriteTreasureEffectId"*/);
    byte_42B1B25 = 1;
  }
  result = (System_String_o *)GiftAddEntity__GetScriptValue(this, (System_String_o *)StringLiteral_21557/*"overwriteTreasureEffectId"*/, v2);
  if ( result )
  {
    if ( result->klass != string_TypeInfo )
    {
      v5 = (GiftAddEntity_o *)sub_B52D50(result);
      return GiftAddEntity__GetOverwriteDetailText(v5, v6);
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
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1B24 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_42B1B24 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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