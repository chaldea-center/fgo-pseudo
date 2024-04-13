void __fastcall ServantLimitEntity___ctor(ServantLimitEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAE39 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EAE39 = 1;
  }
  this->fields.weaponColor = 0xFFFFFF;
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantLimitEntity__CreatePK(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EAE31 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, limitCount, (_DWORD)method, v3);
    byte_42EAE31 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = defaultValue;
  if ( (byte_42EAE34 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      defaultValue,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_16679/*"ascensionAfterDialogId"*/, v9, v10, v11);
    byte_42EAE34 = 1;
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
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16679/*"ascensionAfterDialogId"*/,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
    {
      v15 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                 value,
                                 value->klass->vtable._4_OnAdd.methodPtr);
      return System_Int32__Parse(v15, 0LL);
    }
LABEL_11:
    sub_B5D69C(Dictionary, v14);
  }
  return v4;
}


int32_t __fastcall ServantLimitEntity__GetChangeGraphCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = defaultValue;
  if ( (byte_42EAE35 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      defaultValue,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17488/*"changeGraphCommonReleaseId"*/, v9, v10, v11);
    byte_42EAE35 = 1;
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
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17488/*"changeGraphCommonReleaseId"*/,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
    {
      v15 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                 value,
                                 value->klass->vtable._4_OnAdd.methodPtr);
      return System_Int32__Parse(v15, 0LL);
    }
LABEL_11:
    sub_B5D69C(Dictionary, v14);
  }
  return v4;
}


System_String_o *__fastcall ServantLimitEntity__GetChangeGraphSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v14; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = defaultValue;
  if ( (byte_42EAE36 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)defaultValue,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17489/*"changeGraphSuffix"*/, v9, v10, v11);
    byte_42EAE36 = 1;
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
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17489/*"changeGraphSuffix"*/,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                  value,
                                  value->klass->vtable._4_OnAdd.methodPtr);
LABEL_11:
    sub_B5D69C(Dictionary, v14);
  }
  return v4;
}


int32_t __fastcall ServantLimitEntity__GetChangeIconCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = defaultValue;
  if ( (byte_42EAE37 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      defaultValue,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17491/*"changeIconCommonReleaseId"*/, v9, v10, v11);
    byte_42EAE37 = 1;
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
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17491/*"changeIconCommonReleaseId"*/,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
    {
      v15 = (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                 value,
                                 value->klass->vtable._4_OnAdd.methodPtr);
      return System_Int32__Parse(v15, 0LL);
    }
LABEL_11:
    sub_B5D69C(Dictionary, v14);
  }
  return v4;
}


System_String_o *__fastcall ServantLimitEntity__GetChangeIconSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Dictionary; // x0
  __int64 v14; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  v4 = defaultValue;
  if ( (byte_42EAE38 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)defaultValue,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_17492/*"changeIconSuffix"*/, v9, v10, v11);
    byte_42EAE38 = 1;
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
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17492/*"changeIconSuffix"*/,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(System_Xml_Schema_XmlSchemaObject_o *, Il2CppMethodPointer))value->klass->vtable._3_ToString.method)(
                                  value,
                                  value->klass->vtable._4_OnAdd.methodPtr);
LABEL_11:
    sub_B5D69C(Dictionary, v14);
  }
  return v4;
}


int32_t __fastcall ServantLimitEntity__GetSaintGraphNameIndex(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v15; // x1
  System_String_o *v16; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  v4 = defaultValue;
  if ( (byte_42EAE33 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      defaultValue,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22183/*"saintGraphImageId"*/, v9, v10, v11);
    byte_42EAE33 = 1;
  }
  result = 0;
  strParam = this->fields.strParam;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(strParam, 0LL);
  if ( Dictionary )
  {
    result = v4;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Dictionary,
             (System_Type_o *)StringLiteral_22183/*"saintGraphImageId"*/,
             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_B5D69C(0LL, v15);
    v16 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( System_Int32__TryParse(v16, &result, 0LL) && result >= 0 )
      return result;
  }
  return v4;
}


bool __fastcall ServantLimitEntity__IsNeedChangeSaintGraphName(ServantLimitEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_String_o *strParam; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0

  if ( (byte_42EAE32 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_22183/*"saintGraphImageId"*/, v8, v9, v10);
    byte_42EAE32 = 1;
  }
  strParam = this->fields.strParam;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(strParam, 0LL);
  if ( Dictionary )
    LOBYTE(Dictionary) = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Dictionary,
                           (System_Xml_XmlQualifiedName_o *)StringLiteral_22183/*"saintGraphImageId"*/,
                           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
  UnityEngine_Color___ctor_41567816(v12, v2, v3, v4, (const MethodInfo *)&v10);
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