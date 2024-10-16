void __fastcall ServantLimitEntity___ctor(ServantLimitEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4AB64D0 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_string___ctor__, method);
    byte_4AB64D0 = 1;
  }
  this->fields.weaponColor = 0xFFFFFF;
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3163C08 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantLimitEntity__CreatePK(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  if ( (byte_4AB64C8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&limitCount);
    byte_4AB64C8 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_2EC2598 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v6; // x1
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v9; // x1
  System_String_o *v10; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4AB64CB & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, *(_QWORD *)&defaultValue);
    sub_1BAB41C(&JsonManager_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_16955/*"ascensionAfterDialogId"*/, v6);
    byte_4AB64CB = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_16955/*"ascensionAfterDialogId"*/,
         &value,
         (const MethodInfo_3214D58 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
    {
      v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                 value,
                                 value->klass->vtable[4].methodPtr);
      return System_Int32__Parse(v10, 0LL);
    }
LABEL_10:
    sub_1BAB678(Dictionary, v9);
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
  __int64 v6; // x1
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v9; // x1
  System_String_o *v10; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4AB64CC & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, *(_QWORD *)&defaultValue);
    sub_1BAB41C(&JsonManager_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_17839/*"changeGraphCommonReleaseId"*/, v6);
    byte_4AB64CC = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17839/*"changeGraphCommonReleaseId"*/,
         &value,
         (const MethodInfo_3214D58 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
    {
      v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                 value,
                                 value->klass->vtable[4].methodPtr);
      return System_Int32__Parse(v10, 0LL);
    }
LABEL_10:
    sub_1BAB678(Dictionary, v9);
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
  __int64 v6; // x1
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v9; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4AB64CD & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, defaultValue);
    sub_1BAB41C(&JsonManager_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_17840/*"changeGraphSuffix"*/, v6);
    byte_4AB64CD = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17840/*"changeGraphSuffix"*/,
         &value,
         (const MethodInfo_3214D58 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                  value,
                                  value->klass->vtable[4].methodPtr);
LABEL_10:
    sub_1BAB678(Dictionary, v9);
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
  __int64 v6; // x1
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v9; // x1
  System_String_o *v10; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4AB64CE & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, *(_QWORD *)&defaultValue);
    sub_1BAB41C(&JsonManager_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_17842/*"changeIconCommonReleaseId"*/, v6);
    byte_4AB64CE = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17842/*"changeIconCommonReleaseId"*/,
         &value,
         (const MethodInfo_3214D58 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
    {
      v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                 value,
                                 value->klass->vtable[4].methodPtr);
      return System_Int32__Parse(v10, 0LL);
    }
LABEL_10:
    sub_1BAB678(Dictionary, v9);
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
  __int64 v6; // x1
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v9; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_4AB64CF & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, defaultValue);
    sub_1BAB41C(&JsonManager_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_17843/*"changeIconSuffix"*/, v6);
    byte_4AB64CF = 1;
  }
  value = 0LL;
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0LL);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17843/*"changeIconSuffix"*/,
         &value,
         (const MethodInfo_3214D58 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))value->klass->vtable[3].method)(
                                  value,
                                  value->klass->vtable[4].methodPtr);
LABEL_10:
    sub_1BAB678(Dictionary, v9);
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
  __int64 v6; // x1
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  Il2CppObject *Item; // x0
  __int64 v10; // x1
  System_String_o *v11; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  v3 = defaultValue;
  if ( (byte_4AB64CA & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, *(_QWORD *)&defaultValue);
    sub_1BAB41C(&JsonManager_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_23038/*"saintGraphImageId"*/, v6);
    byte_4AB64CA = 1;
  }
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(strParam, 0LL);
  if ( Dictionary )
  {
    result = v3;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
             (Il2CppObject *)StringLiteral_23038/*"saintGraphImageId"*/,
             (const MethodInfo_32134CC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_1BAB678(0LL, v10);
    v11 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
    if ( System_Int32__TryParse(v11, &result, 0LL) && result >= 0 )
      return result;
  }
  return v3;
}


bool __fastcall ServantLimitEntity__IsNeedChangeSaintGraphName(ServantLimitEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *strParam; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0

  if ( (byte_4AB64C9 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BAB41C(&JsonManager_TypeInfo, v3);
    sub_1BAB41C(&StringLiteral_23038/*"saintGraphImageId"*/, v4);
    byte_4AB64C9 = 1;
  }
  strParam = this->fields.strParam;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(strParam, 0LL);
  if ( Dictionary )
    LOBYTE(Dictionary) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                           (Il2CppObject *)StringLiteral_23038/*"saintGraphImageId"*/,
                           (const MethodInfo_3213740 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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