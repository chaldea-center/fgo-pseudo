void __fastcall ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16045 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__, method, v2);
    byte_4B16045 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    103,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ConstantStrMaster__ExistValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        int32_t checkVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_Int32_array *ValueArray; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Int32_array *v21; // x19
  System_Func_int__bool__o *v22; // x20

  if ( (byte_4B16051 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, name, *(_QWORD *)&checkVal);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__, v9, v10);
    sub_1BCA7E0(&ConstantStrMaster___c__DisplayClass14_0_TypeInfo, v11, v12);
    byte_4B16051 = 1;
  }
  v13 = sub_1BCAA2C(ConstantStrMaster___c__DisplayClass14_0_TypeInfo, name, *(_QWORD *)&checkVal, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    sub_1BCAA3C(v14, v15);
  *(_DWORD *)(v13 + 16) = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0LL, v16);
  if ( ValueArray )
  {
    v21 = ValueArray;
    v22 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v18, v19, v20);
    System_Func_int__bool____ctor(
      v22,
      (Il2CppObject *)v13,
      Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__,
      0LL);
    LOBYTE(ValueArray) = BasicHelper__Any_int__49273364(
                           v21,
                           (System_Func_T__bool__o *)v22,
                           (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
  }
  return (char)ValueArray;
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineReturnVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B1604F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, method, v2);
    sub_1BCA7E0(&StringLiteral_3722/*"COMBINE_SCENE_VOICE_RETURN"*/, v4, v5);
    byte_4B1604F = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3722/*"COMBINE_SCENE_VOICE_RETURN"*/,
                           (const MethodInfo_2F13408 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v7);
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineWelcomeVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4B1604E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, method, v2);
    sub_1BCA7E0(&StringLiteral_3723/*"COMBINE_SCENE_VOICE_WELCOME"*/, v4, v5);
    byte_4B1604E = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3723/*"COMBINE_SCENE_VOICE_WELCOME"*/,
                           (const MethodInfo_2F13408 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v7);
}


float __fastcall ConstantStrMaster__GetFloat(
        ConstantStrMaster_o *this,
        System_String_o *name,
        float defVal,
        const MethodInfo *method)
{
  System_String_o *Value; // x19
  float result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0.0;
  Value = ConstantStrMaster__GetValue(this, name, method);
  if ( !System_String__IsNullOrEmpty(Value, 0LL) && System_Single__TryParse(Value, &result, 0LL) )
    return result;
  return defVal;
}


System_String_o *__fastcall ConstantStrMaster__GetRandomVoice(
        ConstantStrMaster_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v8; // x2
  System_String_array_array *VoiceList; // x0
  System_String_array_array *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array *v13; // x8
  System_String_o **m_Items; // x8

  if ( (byte_4B16050 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, key, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    byte_4B16050 = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           key,
                           (const MethodInfo_2F13408 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey_object,
                (ConstantStrEntity_o *)EntityFromKey_object,
                v8);
  if ( VoiceList )
  {
    v10 = VoiceList;
    v11 = UnityEngine_Random__Range_70113984(0, VoiceList->max_length, 0LL);
    if ( (unsigned int)v11 >= v10->max_length )
      goto LABEL_10;
    v13 = v10->m_Items[(int)v11];
    if ( !v13 )
      sub_1BCAA3C(v11, v12);
    if ( !v13->max_length )
LABEL_10:
      sub_1BCAA44(v11, v12);
    m_Items = v13->m_Items;
  }
  else
  {
    m_Items = (System_String_o **)&StringLiteral_1/*""*/;
  }
  return *m_Items;
}


System_String_o *__fastcall ConstantStrMaster__GetValue(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  System_String_o *result; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16049 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, name, method);
    byte_4B16049 = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__object___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         (Il2CppObject *)name,
         (const MethodInfo_31B31E8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v5);
    return (System_String_o *)entity[1].monitor;
  }
  return result;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        System_Int32_array *defVal,
        const MethodInfo *method)
{
  System_Int32_array *v4; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_String_o *monitor; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  ConstantStrMaster___c_c *v24; // x8
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v26; // x21
  struct ConstantStrMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = defVal;
  if ( (byte_4B1604A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, name, defVal);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v9, v10);
    sub_1BCA7E0(&System_Func_string__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__, v13, v14);
    sub_1BCA7E0(&ConstantStrMaster___c_TypeInfo, v15, v16);
    byte_4B1604A = 1;
  }
  entity = 0LL;
  v17 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          (Il2CppObject *)name,
          (const MethodInfo_31B31E8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( v17 )
  {
    if ( !entity )
      sub_1BCAA3C(v17, v18);
    monitor = (System_String_o *)entity[1].monitor;
    if ( monitor )
    {
      v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(monitor, 0x2Cu, 0, 0LL);
      v24 = ConstantStrMaster___c_TypeInfo;
      if ( !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo, v20);
        v24 = ConstantStrMaster___c_TypeInfo;
      }
      _9__6_0 = (System_Func_object__int__o *)v24->static_fields->__9__6_0;
      if ( !_9__6_0 )
      {
        if ( !v24->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v24, v20);
          v24 = ConstantStrMaster___c_TypeInfo;
        }
        v26 = (Il2CppObject *)v24->static_fields->__9;
        _9__6_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_string__int__TypeInfo, v20, v21, v22);
        System_Func_object__int____ctor(_9__6_0, v26, Method_ConstantStrMaster___c__GetValueArray_b__6_0__, 0LL);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
        static_fields->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__6_0,
          (int64_t)_9__6_0,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v23,
                                                                   (System_Func_TSource__TResult__o *)_9__6_0,
                                                                   (const MethodInfo_2F43194 *)Method_System_Linq_Enumerable_Select_string__int___);
      return System_Linq_Enumerable__ToArray_int_(
               v34,
               (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
  }
  return v4;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4B16048 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantStrMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B16048 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  return ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Master_object, name, 0LL, v8);
}


float __fastcall ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B16047 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantStrMaster___, method, v3);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16047 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  return ConstantStrMaster__GetFloat((ConstantStrMaster_o *)Instance, name, defVal, v10);
}


System_Single_array *__fastcall ConstantStrMaster__GetValueFloatArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  bool v16; // w8
  System_Single_array *result; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  ConstantStrMaster___c_c *v22; // x8
  System_Func_T__TResult__o *_9__7_0; // x20
  Il2CppObject *v24; // x21
  struct ConstantStrMaster___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1604B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, name, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__float___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_float___, v7, v8);
    sub_1BCA7E0(&System_Func_string__float__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, v11, v12);
    sub_1BCA7E0(&ConstantStrMaster___c_TypeInfo, v13, v14);
    byte_4B1604B = 1;
  }
  entity = 0LL;
  v16 = DataMasterBase_object__object__object___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          &entity,
          (Il2CppObject *)name,
          (const MethodInfo_31B31E8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v16 )
  {
    if ( !entity )
      sub_1BCAA3C(0LL, v15);
    result = (System_Single_array *)entity[1].monitor;
    if ( result )
    {
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                   (System_String_o *)result,
                                                                   0x2Cu,
                                                                   0,
                                                                   0LL);
      v22 = ConstantStrMaster___c_TypeInfo;
      if ( !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo, v18);
        v22 = ConstantStrMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_T__TResult__o *)v22->static_fields->__9__7_0;
      if ( !_9__7_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22, v18);
          v22 = ConstantStrMaster___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__7_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_string__float__TypeInfo, v18, v19, v20);
        System_Func_object__float____ctor(_9__7_0, v24, Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, 0LL);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
        static_fields->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__7_0,
          (int64_t)_9__7_0,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
      }
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__float_(
                                                                   v21,
                                                                   (System_Func_TSource__TResult__o *)_9__7_0,
                                                                   (const MethodInfo_2F43DD4 *)Method_System_Linq_Enumerable_Select_string__float___);
      return System_Linq_Enumerable__ToArray_float_(
               v32,
               (const MethodInfo_2F4BA90 *)Method_System_Linq_Enumerable_ToArray_float___);
    }
  }
  return result;
}


System_String_array *__fastcall ConstantStrMaster__GetValueStringArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool EntityFromId_object; // w8
  System_String_array *monitor; // x0
  Il2CppObject *result; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1604C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___, name, method);
    byte_4B1604C = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2F13130 *)Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___);
  monitor = 0LL;
  if ( EntityFromId_object )
  {
    if ( !result || (monitor = (System_String_array *)result[1].monitor) == 0LL )
      sub_1BCAA3C(monitor, v5);
    return System_String__Split((System_String_o *)monitor, 0x2Cu, 0, 0LL);
  }
  return monitor;
}


UnityEngine_Vector3_o __fastcall ConstantStrMaster__GetValueVector3(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Single_array *ValueFloatArray; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  float v6; // s0
  float *p_y; // x8
  float *p_z; // x9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float x; // t1
  float v11; // s2
  float v12; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  ValueFloatArray = ConstantStrMaster__GetValueFloatArray(this, name, method);
  if ( ValueFloatArray )
  {
    if ( ValueFloatArray->max_length < 3 )
      sub_1BCAA44(ValueFloatArray, v4);
    v6 = ValueFloatArray->m_Items[1];
    p_y = &ValueFloatArray->m_Items[2];
    p_z = &ValueFloatArray->m_Items[3];
  }
  else
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v4, v5);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    p_z = &static_fields->zeroVector.fields.z;
    v6 = x;
    p_y = &UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.y;
  }
  v11 = *p_z;
  v12 = *p_y;
  result.fields.z = v11;
  result.fields.y = v12;
  result.fields.x = v6;
  return result;
}


System_String_array_array *__fastcall ConstantStrMaster__GetVoiceList(
        ConstantStrMaster_o *this,
        ConstantStrEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *value; // x19
  System_Char_array *v7; // x0
  System_Char_array *v8; // x1
  System_Char_array *v9; // x19
  int max_length; // w8
  System_String_array_array *v11; // x20
  __int64 v12; // x24
  PartyOrganizationUtility_o *v13; // x21
  System_String_o *v14; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B1604D & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, ent, method);
    sub_1BCA7E0(&string_____TypeInfo, v4, v5);
    byte_4B1604D = 1;
  }
  if ( !ent )
    return 0LL;
  value = ent->fields.value;
  v7 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 1LL);
  if ( !v7 )
    goto LABEL_20;
  v8 = v7;
  if ( !v7->max_length )
    goto LABEL_21;
  v7->m_Items[2] = 47;
  if ( !value || (v7 = (System_Char_array *)System_String__Split_62423376(value, v7, 0LL)) == 0LL )
LABEL_20:
    sub_1BCAA3C(v7, v8);
  v9 = v7;
  v7 = (System_Char_array *)sub_1BCA888(string_____TypeInfo, v7->max_length);
  max_length = v9->max_length;
  v11 = (System_String_array_array *)v7;
  if ( max_length >= 1 )
  {
    v12 = 0LL;
    v13 = (PartyOrganizationUtility_o *)&v7->m_Items[2];
    while ( (unsigned int)v12 < max_length )
    {
      v14 = *(System_String_o **)&v9->m_Items[4 * v12 + 2];
      v7 = (System_Char_array *)sub_1BCA888(char___TypeInfo, 1LL);
      if ( !v7 )
        goto LABEL_20;
      v8 = v7;
      if ( !v7->max_length )
        break;
      v7->m_Items[2] = 44;
      if ( !v14 )
        goto LABEL_20;
      v7 = (System_Char_array *)System_String__Split_62423376(v14, v7, 0LL);
      if ( !v11 )
        goto LABEL_20;
      if ( (unsigned int)v12 >= v11->max_length )
        break;
      v13->klass = (PartyOrganizationUtility_c *)v7;
      sub_1BCA784(v13, (int64_t)v7, v15, v16, v17, v18, v19, v20);
      max_length = v9->max_length;
      ++v12;
      v13 = (PartyOrganizationUtility_o *)((char *)v13 + 8);
      if ( (int)v12 >= max_length )
        return v11;
    }
LABEL_21:
    sub_1BCAA44(v7, v8);
  }
  return v11;
}


System_String_o *__fastcall ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_String_o *result; // x0

  if ( (byte_4B16046 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ConstantStrMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B16046 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  result = (System_String_o *)DataMasterBase__getEntityFromKey_object_(
                                (DataMasterBase_o *)Instance,
                                name,
                                (const MethodInfo_2F13408 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void __fastcall ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16052 & 1) == 0 )
  {
    sub_1BCA7E0(&ConstantStrMaster___c_TypeInfo, v1, v2);
    byte_4B16052 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ConstantStrMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ConstantStrMaster___c_TypeInfo->static_fields->__9 = (struct ConstantStrMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ConstantStrMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ConstantStrMaster___c___ctor(ConstantStrMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ConstantStrMaster___c___GetValueArray_b__6_0(
        ConstantStrMaster___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


float __fastcall ConstantStrMaster___c___GetValueFloatArray_b__7_0(
        ConstantStrMaster___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Single__Parse(a, 0LL);
}


void __fastcall ConstantStrMaster___c__DisplayClass14_0___ctor(
        ConstantStrMaster___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ConstantStrMaster___c__DisplayClass14_0___ExistValueArray_b__0(
        ConstantStrMaster___c__DisplayClass14_0_o *this,
        int32_t val,
        const MethodInfo *method)
{
  return this->fields.checkVal == val;
}