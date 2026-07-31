void ServantLimitEntity___ctor(ServantLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo_3EDADE8 *v3; // x1

  if ( (byte_5939088 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939088 = 1;
  }
  v3 = (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__;
  this->fields.weaponColor = 0xFFFFFF;
  DataEntityBase_object____ctor((DataEntityBase_PKType__o *)this, v3);
}


System_String_o *ServantLimitEntity__CreatePK(int32_t svtId, int32_t limitCount, const MethodInfo *method)
{
  if ( (byte_5939080 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939080 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           limitCount,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantLimitEntity__CreatePrimaryKey(ServantLimitEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantLimitEntity__CreatePK(this->fields.svtId, this->fields.limitCount, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLimitEntity__GetAscensionAfterDialogId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_5939083 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17575/*"ascensionAfterDialogId"*/);
    byte_5939083 = 1;
  }
  strParam = this->fields.strParam;
  value = 0;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_17575/*"ascensionAfterDialogId"*/,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_21FFECC(Dictionary, v7);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLimitEntity__GetChangeGraphCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_5939084 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18560/*"changeGraphCommonReleaseId"*/);
    byte_5939084 = 1;
  }
  strParam = this->fields.strParam;
  value = 0;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_18560/*"changeGraphCommonReleaseId"*/,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_21FFECC(Dictionary, v7);
  }
  return v3;
}


System_String_o *ServantLimitEntity__GetChangeGraphSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_5939085 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18561/*"changeGraphSuffix"*/);
    byte_5939085 = 1;
  }
  strParam = this->fields.strParam;
  value = 0;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_18561/*"changeGraphSuffix"*/,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                  value,
                                  value->klass->vtable[3].method);
LABEL_10:
    sub_21FFECC(Dictionary, v7);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLimitEntity__GetChangeIconCommonReleaseId(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  System_String_o *v8; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_5939086 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18563/*"changeIconCommonReleaseId"*/);
    byte_5939086 = 1;
  }
  strParam = this->fields.strParam;
  value = 0;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_18563/*"changeIconCommonReleaseId"*/,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    sub_21FFECC(Dictionary, v7);
  }
  return v3;
}


System_String_o *ServantLimitEntity__GetChangeIconSuffix(
        ServantLimitEntity_o *this,
        System_String_o *defaultValue,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_object__object__o *Dictionary; // x0
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v3 = defaultValue;
  if ( (byte_5939087 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18564/*"changeIconSuffix"*/);
    byte_5939087 = 1;
  }
  strParam = this->fields.strParam;
  value = 0;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, defaultValue);
  Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)JsonManager__getDictionary(strParam, 0);
  if ( !Dictionary )
    goto LABEL_10;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         Dictionary,
         (Il2CppObject *)StringLiteral_18564/*"changeIconSuffix"*/,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    Dictionary = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( value )
      return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))value->klass->vtable[3].methodPtr)(
                                  value,
                                  value->klass->vtable[3].method);
LABEL_10:
    sub_21FFECC(Dictionary, v7);
  }
  return v3;
}


// local variable allocation has failed, the output may be wrong!
int32_t ServantLimitEntity__GetSaintGraphNameIndex(
        ServantLimitEntity_o *this,
        int32_t defaultValue,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_String_o *strParam; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  Il2CppObject *Item; // x0
  __int64 v8; // x1
  System_String_o *v9; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  v3 = defaultValue;
  if ( (byte_5939082 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24343/*"saintGraphImageId"*/);
    byte_5939082 = 1;
  }
  strParam = this->fields.strParam;
  result = 0;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, *(_QWORD *)&defaultValue);
  Dictionary = JsonManager__getDictionary(strParam, 0);
  if ( Dictionary )
  {
    result = v3;
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
             (Il2CppObject *)StringLiteral_24343/*"saintGraphImageId"*/,
             (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_21FFECC(0, v8);
    v9 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[3].methodPtr)(
                              Item,
                              Item->klass->vtable[3].method);
    if ( System_Int32__TryParse(v9, &result, 0) && result >= 0 )
      return result;
  }
  return v3;
}


bool ServantLimitEntity__IsNeedChangeSaintGraphName(ServantLimitEntity_o *this, const MethodInfo *method)
{
  System_String_o *strParam; // x19
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0

  if ( (byte_5939081 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_24343/*"saintGraphImageId"*/);
    byte_5939081 = 1;
  }
  strParam = this->fields.strParam;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, method);
  Dictionary = JsonManager__getDictionary(strParam, 0);
  if ( Dictionary )
    LOBYTE(Dictionary) = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                           (System_Collections_Generic_Dictionary_object__object__o *)Dictionary,
                           (Il2CppObject *)StringLiteral_24343/*"saintGraphImageId"*/,
                           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
  return (char)Dictionary;
}


UnityEngine_Color_o ServantLimitEntity__getWeaponColor(ServantLimitEntity_o *this, const MethodInfo *method)
{
  float v2; // s3
  unsigned __int64 v3; // d0
  float v4; // s2
  float v5; // s1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = 1.0;
  v3 = vdiv_f32(
         vcvt_f32_s32(
           vand_s8(
             vshl_u32(vdup_n_s32(this->fields.weaponColor), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL),
             (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x437F0000u)).n64_u64[0];
  v4 = (float)(unsigned __int8)this->fields.weaponColor / 255.0;
  v5 = *((float *)&v3 + 1);
  result.fields.r = *(float *)&v3;
  result.fields.a = v2;
  result.fields.b = v4;
  result.fields.g = v5;
  return result;
}