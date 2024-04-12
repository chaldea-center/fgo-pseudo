void __fastcall ServantLimitEntity___ctor(ServantLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B24DC & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42B24DC = 1;
  }
  this->fields.weaponColor = 0xFFFFFF;
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantLimitEntity__CreatePK(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  if ( (byte_42B24D4 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_42B24D4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_1A4DF50 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantLimitEntity__CreatePrimaryKey(ServantLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLimitEntity__CreatePK(this->fields.svtId, this->fields.limitCount, v2);
}


int32_t __fastcall ServantLimitEntity__GetAscensionAfterDialogId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B24D7 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_16593/*"ascensionAfterDialogId"*/);
    byte_42B24D7 = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                               strParam,
                                                                                               0LL);
  if ( !Dictionary )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         Dictionary,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16593/*"ascensionAfterDialogId"*/,
         &value,
         (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                value,
                                value->klass->vtable._4_OnAdd.methodPtr);
      return System_Int32__Parse(v8, 0LL);
    }
LABEL_11:
    sub_B52A5C(Dictionary, v7);
  }
  return defaultValue;
}


int32_t __fastcall ServantLimitEntity__GetChangeGraphCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B24D8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_17394/*"changeGraphCommonReleaseId"*/);
    byte_42B24D8 = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                               strParam,
                                                                                               0LL);
  if ( !Dictionary )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         Dictionary,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17394/*"changeGraphCommonReleaseId"*/,
         &value,
         (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                value,
                                value->klass->vtable._4_OnAdd.methodPtr);
      return System_Int32__Parse(v8, 0LL);
    }
LABEL_11:
    sub_B52A5C(Dictionary, v7);
  }
  return defaultValue;
}


System_String_o *__fastcall ServantLimitEntity__GetChangeGraphSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v7; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B24D9 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_17395/*"changeGraphSuffix"*/);
    byte_42B24D9 = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                               strParam,
                                                                                               0LL);
  if ( !Dictionary )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         Dictionary,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17395/*"changeGraphSuffix"*/,
         &value,
         (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                  value,
                                  value->klass->vtable._4_OnAdd.methodPtr);
LABEL_11:
    sub_B52A5C(Dictionary, v7);
  }
  return defaultValue;
}


int32_t __fastcall ServantLimitEntity__GetChangeIconCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B24DA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_17397/*"changeIconCommonReleaseId"*/);
    byte_42B24DA = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                               strParam,
                                                                                               0LL);
  if ( !Dictionary )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         Dictionary,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17397/*"changeIconCommonReleaseId"*/,
         &value,
         (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                value,
                                value->klass->vtable._4_OnAdd.methodPtr);
      return System_Int32__Parse(v8, 0LL);
    }
LABEL_11:
    sub_B52A5C(Dictionary, v7);
  }
  return defaultValue;
}


System_String_o *__fastcall ServantLimitEntity__GetChangeIconSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v7; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B24DB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_17398/*"changeIconSuffix"*/);
    byte_42B24DB = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)JsonManager__getDictionary(
                                                                                               strParam,
                                                                                               0LL);
  if ( !Dictionary )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         Dictionary,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17398/*"changeIconSuffix"*/,
         &value,
         (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                  value,
                                  value->klass->vtable._4_OnAdd.methodPtr);
LABEL_11:
    sub_B52A5C(Dictionary, v7);
  }
  return defaultValue;
}


int32_t __fastcall ServantLimitEntity__GetSaintGraphNameIndex(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v8; // x1
  System_String_o *v9; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B24D6 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_22069/*"saintGraphImageId"*/);
    byte_42B24D6 = 1;
  }
  result = 0;
  strParam = this->fields.strParam;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(strParam, 0LL);
  if ( Dictionary )
  {
    result = defaultValue;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
             (System_Type_o *)StringLiteral_22069/*"saintGraphImageId"*/,
             (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_B52A5C(0LL, v8);
    v9 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                              Item,
                              Item->klass->vtable[4].methodPtr);
    if ( System_Int32__TryParse(v9, &result, 0LL) && result >= 0 )
      return result;
  }
  return defaultValue;
}


bool __fastcall ServantLimitEntity__IsNeedChangeSaintGraphName(ServantLimitEntity_o *this, const MethodInfo *method)
{
  System_String_o *strParam; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0

  if ( (byte_42B24D5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_22069/*"saintGraphImageId"*/);
    byte_42B24D5 = 1;
  }
  strParam = this->fields.strParam;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(strParam, 0LL);
  if ( Dictionary )
    LOBYTE(Dictionary) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_22069/*"saintGraphImageId"*/,
                           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Dictionary;
}


UnityEngine_Color_o __fastcall ServantLimitEntity__getWeaponColor(ServantLimitEntity_o *this, const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int32_t weaponColor; // w8
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  __int64 v10; // [xsp+0h] [xbp-10h] BYREF
  __int64 v11; // [xsp+8h] [xbp-8h]
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  weaponColor = this->fields.weaponColor;
  v12.fields.a = (float)(unsigned __int8)weaponColor;
  v12.fields.r = (float)BYTE2(weaponColor) / 255.0;
  v12.fields.g = (float)BYTE1(weaponColor) / 255.0;
  v12.fields.b = v12.fields.a / 255.0;
  v10 = 0LL;
  v11 = 0LL;
  UnityEngine_Color___ctor_41463668(v12, v2, v3, v4, (const MethodInfo *)&v10);
  v7 = *((float *)&v10 + 1);
  v6 = *(float *)&v10;
  v9 = *((float *)&v11 + 1);
  v8 = *(float *)&v11;
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
}