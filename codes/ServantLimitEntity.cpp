void ServantLimitEntity___ctor(ServantLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF00C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF00C = 1;
  }
  this->fields.weaponColor = 0xFFFFFF;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantLimitEntity__CreatePK(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  if ( (byte_4CEF004 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF004 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantLimitEntity__CreatePrimaryKey(ServantLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLimitEntity__CreatePK(this->fields.svtId, this->fields.limitCount, v2);
}


int32_t ServantLimitEntity__GetAscensionAfterDialogId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF007 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_16980/*"ascensionAfterDialogId"*/);
    byte_4CEF007 = 1;
  }
  value = 0;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_16980/*"ascensionAfterDialogId"*/,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                value,
                                value->klass->vtable[3].method);
      return System_Int32__Parse(v8, 0);
    }
LABEL_10:
    sub_1C7BD40(Dictionary, v7);
  }
  return defaultValue;
}


int32_t ServantLimitEntity__GetChangeGraphCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF008 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17900/*"changeGraphCommonReleaseId"*/);
    byte_4CEF008 = 1;
  }
  value = 0;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17900/*"changeGraphCommonReleaseId"*/,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                value,
                                value->klass->vtable[3].method);
      return System_Int32__Parse(v8, 0);
    }
LABEL_10:
    sub_1C7BD40(Dictionary, v7);
  }
  return defaultValue;
}


System_String_o *ServantLimitEntity__GetChangeGraphSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF009 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17901/*"changeGraphSuffix"*/);
    byte_4CEF009 = 1;
  }
  value = 0;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17901/*"changeGraphSuffix"*/,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                  value,
                                  value->klass->vtable[3].method);
LABEL_10:
    sub_1C7BD40(Dictionary, v7);
  }
  return defaultValue;
}


int32_t ServantLimitEntity__GetChangeIconCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF00A & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17903/*"changeIconCommonReleaseId"*/);
    byte_4CEF00A = 1;
  }
  value = 0;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17903/*"changeIconCommonReleaseId"*/,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
    {
      v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                value,
                                value->klass->vtable[3].method);
      return System_Int32__Parse(v8, 0);
    }
LABEL_10:
    sub_1C7BD40(Dictionary, v7);
  }
  return defaultValue;
}


System_String_o *ServantLimitEntity__GetChangeIconSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF00B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17904/*"changeIconSuffix"*/);
    byte_4CEF00B = 1;
  }
  value = 0;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17904/*"changeIconSuffix"*/,
         &value,
         (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                  value,
                                  value->klass->vtable[3].method);
LABEL_10:
    sub_1C7BD40(Dictionary, v7);
  }
  return defaultValue;
}


int32_t ServantLimitEntity__GetSaintGraphNameIndex(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  System_String_o *v9; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEF006 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23407/*"saintGraphImageId"*/);
    byte_4CEF006 = 1;
  }
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(strParam, 0);
  if ( Dictionary )
  {
    result = defaultValue;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
             (Il2CppObject *)StringLiteral_23407/*"saintGraphImageId"*/,
             (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_1C7BD40(0, v8);
    v9 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                              Item,
                              Item->klass->vtable[3].method);
    if ( System_Int32__TryParse(v9, &result, 0) && result >= 0 )
      return result;
  }
  return defaultValue;
}


bool ServantLimitEntity__IsNeedChangeSaintGraphName(ServantLimitEntity_o *this, const MethodInfo *method)
{
  System_String_o *strParam; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0

  if ( (byte_4CEF005 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_23407/*"saintGraphImageId"*/);
    byte_4CEF005 = 1;
  }
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(strParam, 0);
  if ( Dictionary )
    LOBYTE(Dictionary) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                           (Il2CppObject *)StringLiteral_23407/*"saintGraphImageId"*/,
                           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Dictionary;
}


UnityEngine_Color_o ServantLimitEntity__getWeaponColor(ServantLimitEntity_o *this, const MethodInfo *method)
{
  int32_t weaponColor; // w8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  weaponColor = this->fields.weaponColor;
  v3 = (float)BYTE2(weaponColor) / 255.0;
  v4 = (float)BYTE1(weaponColor) / 255.0;
  v5 = (float)(unsigned __int8)weaponColor / 255.0;
  v6 = 1.0;
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}