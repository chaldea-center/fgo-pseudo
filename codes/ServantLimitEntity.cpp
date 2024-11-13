void __fastcall ServantLimitEntity___ctor(ServantLimitEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16984 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16984 = 1;
  }
  this->fields.weaponColor = 0xFFFFFF;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitEntity__CreatePK(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  if ( (byte_4B1697C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&limitCount, method);
    byte_4B1697C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantLimitEntity__CreatePrimaryKey(ServantLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLimitEntity__CreatePK(this->fields.svtId, this->fields.limitCount, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitEntity__GetAscensionAfterDialogId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v11; // x1
  System_String_o *v12; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4B1697F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      *(_QWORD *)&defaultValue,
      method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_17093/*"ascensionAfterDialogId"*/, v7, v8);
    byte_4B1697F = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17093/*"ascensionAfterDialogId"*/,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
    {
      v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                 value,
                                 value->klass->vtable[4].methodPtr);
      return System_Int32__Parse(v12, 0LL);
    }
LABEL_10:
    sub_1BCAA3C(Dictionary, v11);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitEntity__GetChangeGraphCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v11; // x1
  System_String_o *v12; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4B16980 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      *(_QWORD *)&defaultValue,
      method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_17991/*"changeGraphCommonReleaseId"*/, v7, v8);
    byte_4B16980 = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17991/*"changeGraphCommonReleaseId"*/,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
    {
      v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                 value,
                                 value->klass->vtable[4].methodPtr);
      return System_Int32__Parse(v12, 0LL);
    }
LABEL_10:
    sub_1BCAA3C(Dictionary, v11);
  }
  return v3;
}


System_String_o *__fastcall ServantLimitEntity__GetChangeGraphSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v11; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4B16981 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, defaultValue, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_17992/*"changeGraphSuffix"*/, v7, v8);
    byte_4B16981 = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17992/*"changeGraphSuffix"*/,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                  value,
                                  value->klass->vtable[4].methodPtr);
LABEL_10:
    sub_1BCAA3C(Dictionary, v11);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitEntity__GetChangeIconCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v11; // x1
  System_String_o *v12; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4B16982 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      *(_QWORD *)&defaultValue,
      method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_17994/*"changeIconCommonReleaseId"*/, v7, v8);
    byte_4B16982 = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17994/*"changeIconCommonReleaseId"*/,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
    {
      v12 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                 value,
                                 value->klass->vtable[4].methodPtr);
      return System_Int32__Parse(v12, 0LL);
    }
LABEL_10:
    sub_1BCAA3C(Dictionary, v11);
  }
  return v3;
}


System_String_o *__fastcall ServantLimitEntity__GetChangeIconSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v11; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4B16983 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, defaultValue, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_17995/*"changeIconSuffix"*/, v7, v8);
    byte_4B16983 = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17995/*"changeIconSuffix"*/,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                  value,
                                  value->klass->vtable[4].methodPtr);
LABEL_10:
    sub_1BCAA3C(Dictionary, v11);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantLimitEntity__GetSaintGraphNameIndex(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  Il2CppObject *Item; // x0
  __int64 v12; // x1
  System_String_o *v13; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  v3 = defaultValue;
  if ( (byte_4B1697E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__object__get_Item__,
      *(_QWORD *)&defaultValue,
      method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_23245/*"saintGraphImageId"*/, v7, v8);
    byte_4B1697E = 1;
  }
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&defaultValue);
  Dictionary = JsonManager__getDictionary(strParam, 0LL);
  if ( Dictionary )
  {
    result = v3;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
             (Il2CppObject *)StringLiteral_23245/*"saintGraphImageId"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_1BCAA3C(0LL, v12);
    v13 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( System_Int32__TryParse(v13, &result, 0LL) && result >= 0 )
      return result;
  }
  return v3;
}


bool __fastcall ServantLimitEntity__IsNeedChangeSaintGraphName(ServantLimitEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *strParam; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0

  if ( (byte_4B1697D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_23245/*"saintGraphImageId"*/, v6, v7);
    byte_4B1697D = 1;
  }
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  Dictionary = JsonManager__getDictionary(strParam, 0LL);
  if ( Dictionary )
    LOBYTE(Dictionary) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                           (Il2CppObject *)StringLiteral_23245/*"saintGraphImageId"*/,
                           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Dictionary;
}


UnityEngine_Color_o __fastcall ServantLimitEntity__getWeaponColor(ServantLimitEntity_o *this, const MethodInfo *method)
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