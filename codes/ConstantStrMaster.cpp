void __fastcall ConstantStrMaster___ctor(ConstantStrMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AFB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
    byte_4A5AFB7 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    103,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string___ctor__);
}


bool __fastcall ConstantStrMaster__ExistValueArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        int32_t checkVal,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_Int32_array *ValueArray; // x0
  System_Int32_array *v12; // x19
  System_Func_int__bool__o *v13; // x20

  if ( (byte_4A5AFC3 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__);
    sub_1B885B0(&ConstantStrMaster___c__DisplayClass14_0_TypeInfo);
    byte_4A5AFC3 = 1;
  }
  v7 = sub_1B887FC(ConstantStrMaster___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_DWORD *)(v7 + 16) = checkVal;
  ValueArray = ConstantStrMaster__GetValueArray(this, name, 0LL, v10);
  if ( ValueArray )
  {
    v12 = ValueArray;
    v13 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v13,
      (Il2CppObject *)v7,
      Method_ConstantStrMaster___c__DisplayClass14_0__ExistValueArray_b__0__,
      0LL);
    LOBYTE(ValueArray) = BasicHelper__Any_int__48671312(
                           v12,
                           (System_Func_T__bool__o *)v13,
                           (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
  }
  return (char)ValueArray;
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineReturnVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4A5AFC1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
    sub_1B885B0(&StringLiteral_3691/*"COMBINE_SCENE_VOICE_RETURN"*/);
    byte_4A5AFC1 = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3691/*"COMBINE_SCENE_VOICE_RETURN"*/,
                           (const MethodInfo_2E80080 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v4);
}


System_String_array_array *__fastcall ConstantStrMaster__GetCombineWelcomeVoiceList(
        ConstantStrMaster_o *this,
        const MethodInfo *method)
{
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v4; // x2

  if ( (byte_4A5AFC0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
    sub_1B885B0(&StringLiteral_3692/*"COMBINE_SCENE_VOICE_WELCOME"*/);
    byte_4A5AFC0 = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           (System_String_o *)StringLiteral_3692/*"COMBINE_SCENE_VOICE_WELCOME"*/,
                           (const MethodInfo_2E80080 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  return ConstantStrMaster__GetVoiceList(
           (ConstantStrMaster_o *)EntityFromKey_object,
           (ConstantStrEntity_o *)EntityFromKey_object,
           v4);
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
  Il2CppObject *EntityFromKey_object; // x0
  const MethodInfo *v6; // x2
  System_String_array_array *VoiceList; // x0
  System_String_array_array *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array *v11; // x8
  System_String_o **m_Items; // x8

  if ( (byte_4A5AFC2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5AFC2 = 1;
  }
  EntityFromKey_object = DataMasterBase__getEntityFromKey_object_(
                           (DataMasterBase_o *)this,
                           key,
                           (const MethodInfo_2E80080 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  VoiceList = ConstantStrMaster__GetVoiceList(
                (ConstantStrMaster_o *)EntityFromKey_object,
                (ConstantStrEntity_o *)EntityFromKey_object,
                v6);
  if ( VoiceList )
  {
    v8 = VoiceList;
    v9 = UnityEngine_Random__Range_69419120(0, VoiceList->max_length, 0LL);
    if ( (unsigned int)v9 >= v8->max_length )
      goto LABEL_10;
    v11 = v8->m_Items[(int)v9];
    if ( !v11 )
      sub_1B8880C(v9, v10);
    if ( !v11->max_length )
LABEL_10:
      sub_1B88814(v9, v10);
    m_Items = v11->m_Items;
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

  if ( (byte_4A5AFBB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    byte_4A5AFBB = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__object___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         (Il2CppObject *)name,
         (const MethodInfo_311DCDC *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1B8880C(0LL, v5);
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
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_String_o *monitor; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  ConstantStrMaster___c_c *v11; // x8
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v13; // x21
  struct ConstantStrMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5AFBC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_string__int__TypeInfo);
    sub_1B885B0(&Method_ConstantStrMaster___c__GetValueArray_b__6_0__);
    sub_1B885B0(&ConstantStrMaster___c_TypeInfo);
    byte_4A5AFBC = 1;
  }
  entity = 0LL;
  v7 = DataMasterBase_object__object__object___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         (Il2CppObject *)name,
         (const MethodInfo_311DCDC *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( v7 )
  {
    if ( !entity )
      sub_1B8880C(v7, v8);
    monitor = (System_String_o *)entity[1].monitor;
    if ( monitor )
    {
      v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(monitor, 0x2Cu, 0, 0LL);
      v11 = ConstantStrMaster___c_TypeInfo;
      if ( !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
        v11 = ConstantStrMaster___c_TypeInfo;
      }
      _9__6_0 = (System_Func_object__int__o *)v11->static_fields->__9__6_0;
      if ( !_9__6_0 )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = ConstantStrMaster___c_TypeInfo;
        }
        v13 = (Il2CppObject *)v11->static_fields->__9;
        _9__6_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_string__int__TypeInfo);
        System_Func_object__int____ctor(_9__6_0, v13, Method_ConstantStrMaster___c__GetValueArray_b__6_0__, 0LL);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
        static_fields->__9__6_0 = (struct System_Func_string__int__o *)_9__6_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v15, v16);
      }
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v10,
                                                                   (System_Func_TSource__TResult__o *)_9__6_0,
                                                                   (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_string__int___);
      return System_Linq_Enumerable__ToArray_int_(
               v17,
               (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    }
  }
  return defVal;
}


System_Int32_array *__fastcall ConstantStrMaster__GetValueAsIntArray(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4A5AFBA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5AFBA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  return ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Master_object, name, 0LL, v5);
}


float __fastcall ConstantStrMaster__GetValueFloat(System_String_o *name, float defVal, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4A5AFB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AFB9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v6);
  }
  return ConstantStrMaster__GetFloat((ConstantStrMaster_o *)Instance, name, defVal, v7);
}


System_Single_array *__fastcall ConstantStrMaster__GetValueFloatArray(
        ConstantStrMaster_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool v6; // w8
  System_Single_array *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  ConstantStrMaster___c_c *v9; // x8
  System_Func_T__TResult__o *_9__7_0; // x20
  Il2CppObject *v11; // x21
  struct ConstantStrMaster___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5AFBD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_string__float___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_float___);
    sub_1B885B0(&System_Func_string__float__TypeInfo);
    sub_1B885B0(&Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__);
    sub_1B885B0(&ConstantStrMaster___c_TypeInfo);
    byte_4A5AFBD = 1;
  }
  entity = 0LL;
  v6 = DataMasterBase_object__object__object___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
         &entity,
         (Il2CppObject *)name,
         (const MethodInfo_311DCDC *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  result = 0LL;
  if ( v6 )
  {
    if ( !entity )
      sub_1B8880C(0LL, v5);
    result = (System_Single_array *)entity[1].monitor;
    if ( result )
    {
      v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                  (System_String_o *)result,
                                                                  0x2Cu,
                                                                  0,
                                                                  0LL);
      v9 = ConstantStrMaster___c_TypeInfo;
      if ( !ConstantStrMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ConstantStrMaster___c_TypeInfo);
        v9 = ConstantStrMaster___c_TypeInfo;
      }
      _9__7_0 = (System_Func_T__TResult__o *)v9->static_fields->__9__7_0;
      if ( !_9__7_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = ConstantStrMaster___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v9->static_fields->__9;
        _9__7_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_string__float__TypeInfo);
        System_Func_object__float____ctor(_9__7_0, v11, Method_ConstantStrMaster___c__GetValueFloatArray_b__7_0__, 0LL);
        static_fields = ConstantStrMaster___c_TypeInfo->static_fields;
        static_fields->__9__7_0 = (struct System_Func_string__float__o *)_9__7_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v13, v14);
      }
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__float_(
                                                                   v8,
                                                                   (System_Func_TSource__TResult__o *)_9__7_0,
                                                                   (const MethodInfo_2EB0770 *)Method_System_Linq_Enumerable_Select_string__float___);
      return System_Linq_Enumerable__ToArray_float_(
               v15,
               (const MethodInfo_2EB876C *)Method_System_Linq_Enumerable_ToArray_float___);
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

  if ( (byte_4A5AFBE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___);
    byte_4A5AFBE = 1;
  }
  result = 0LL;
  EntityFromId_object = DataMasterBase__TryGetEntityFromId_object_(
                          (DataMasterBase_o *)this,
                          &result,
                          name,
                          (const MethodInfo_2E7FDA8 *)Method_DataMasterBase_TryGetEntityFromId_ConstantStrEntity___);
  monitor = 0LL;
  if ( EntityFromId_object )
  {
    if ( !result || (monitor = (System_String_array *)result[1].monitor) == 0LL )
      sub_1B8880C(monitor, v5);
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
  float v5; // s0
  float *p_y; // x8
  float *p_z; // x9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float x; // t1
  float v10; // s2
  float v11; // s1
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  ValueFloatArray = ConstantStrMaster__GetValueFloatArray(this, name, method);
  if ( ValueFloatArray )
  {
    if ( ValueFloatArray->max_length < 3 )
      sub_1B88814(ValueFloatArray, v4);
    v5 = ValueFloatArray->m_Items[1];
    p_y = &ValueFloatArray->m_Items[2];
    p_z = &ValueFloatArray->m_Items[3];
  }
  else
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    p_z = &static_fields->zeroVector.fields.z;
    v5 = x;
    p_y = &UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.y;
  }
  v10 = *p_z;
  v11 = *p_y;
  result.fields.z = v10;
  result.fields.y = v11;
  result.fields.x = v5;
  return result;
}


System_String_array_array *__fastcall ConstantStrMaster__GetVoiceList(
        ConstantStrMaster_o *this,
        ConstantStrEntity_o *ent,
        const MethodInfo *method)
{
  System_String_o *value; // x19
  System_Char_array *v5; // x0
  System_Char_array *v6; // x1
  System_Char_array *v7; // x19
  int max_length; // w8
  System_String_array_array *v9; // x20
  __int64 v10; // x24
  ServantStatusBattleListViewItem_o *v11; // x21
  System_String_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5AFBF & 1) == 0 )
  {
    sub_1B885B0(&char___TypeInfo);
    sub_1B885B0(&string_____TypeInfo);
    byte_4A5AFBF = 1;
  }
  if ( !ent )
    return 0LL;
  value = ent->fields.value;
  v5 = (System_Char_array *)sub_1B88658(char___TypeInfo, 1LL);
  if ( !v5 )
    goto LABEL_20;
  v6 = v5;
  if ( !v5->max_length )
    goto LABEL_21;
  v5->m_Items[2] = 47;
  if ( !value || (v5 = (System_Char_array *)System_String__Split_61729188(value, v5, 0LL)) == 0LL )
LABEL_20:
    sub_1B8880C(v5, v6);
  v7 = v5;
  v5 = (System_Char_array *)sub_1B88658(string_____TypeInfo, v5->max_length);
  max_length = v7->max_length;
  v9 = (System_String_array_array *)v5;
  if ( max_length >= 1 )
  {
    v10 = 0LL;
    v11 = (ServantStatusBattleListViewItem_o *)&v5->m_Items[2];
    while ( (unsigned int)v10 < max_length )
    {
      v12 = *(System_String_o **)&v7->m_Items[4 * v10 + 2];
      v5 = (System_Char_array *)sub_1B88658(char___TypeInfo, 1LL);
      if ( !v5 )
        goto LABEL_20;
      v6 = v5;
      if ( !v5->max_length )
        break;
      v5->m_Items[2] = 44;
      if ( !v12 )
        goto LABEL_20;
      v5 = (System_Char_array *)System_String__Split_61729188(v12, v5, 0LL);
      if ( !v9 )
        goto LABEL_20;
      if ( (unsigned int)v10 >= v9->max_length )
        break;
      v11->klass = (ServantStatusBattleListViewItem_c *)v5;
      sub_1B88554(v11, (int32_t)v5, v13, v14);
      max_length = v7->max_length;
      ++v10;
      v11 = (ServantStatusBattleListViewItem_o *)((char *)v11 + 8);
      if ( (int)v10 >= max_length )
        return v9;
    }
LABEL_21:
    sub_1B88814(v5, v6);
  }
  return v9;
}


System_String_o *__fastcall ConstantStrMaster__getValue(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_String_o *result; // x0

  if ( (byte_4A5AFB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1B885B0(&Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5AFB8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  result = (System_String_o *)DataMasterBase__getEntityFromKey_object_(
                                (DataMasterBase_o *)Instance,
                                name,
                                (const MethodInfo_2E80080 *)Method_DataMasterBase_getEntityFromKey_ConstantStrEntity___);
  if ( result )
    return (System_String_o *)result[1].klass;
  return result;
}


void __fastcall ConstantStrMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5AFC4 & 1) == 0 )
  {
    sub_1B885B0(&ConstantStrMaster___c_TypeInfo);
    byte_4A5AFC4 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ConstantStrMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ConstantStrMaster___c_TypeInfo->static_fields->__9 = (struct ConstantStrMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)ConstantStrMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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