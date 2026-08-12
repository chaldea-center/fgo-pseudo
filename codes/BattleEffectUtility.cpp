void BattleEffectUtility___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  BattleEffectUtility_c *v7; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x19
  int32_t v19; // w1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  int32_t v40; // w1
  struct BattleEffectUtility_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_Dictionary_object__object__o *v48; // x19
  struct BattleEffectUtility_StaticFields *v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7

  if ( (byte_5973449 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_16976/*"_S"*/);
    sub_2213A60(&StringLiteral_16912/*"_M"*/);
    sub_2213A60(&StringLiteral_16905/*"_L"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973449 = 1;
  }
  v7 = BattleEffectUtility_TypeInfo;
  static_fields = BattleEffectUtility_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->battleEffectId = 0;
  *(_QWORD *)&static_fields->wkVec.fields.y = 0;
  v9 = v7->static_fields;
  static_fields->SendReportProbability = 1.0;
  v9->auraPosOverwriteMst = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v9->auraPosOverwriteMst, 0, v1, v2, v3, v4, v5, v6);
  v10 = sub_2213B20(string___TypeInfo, 4);
  if ( !v10 )
    sub_2213CDC(0, v11);
  v18 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_9;
  v19 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), v19, v12, v13, v14, v15, v16, v17);
  if ( (*(_DWORD *)(v18 + 24) & 0xFFFFFFFE) == 0
    || (v26 = StringLiteral_16976/*"_S"*/,
        *(_QWORD *)(v18 + 40) = StringLiteral_16976/*"_S"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 40), v26, v20, v21, v22, v23, v24, v25),
        *(_DWORD *)(v18 + 24) <= 2u)
    || (v33 = StringLiteral_16912/*"_M"*/,
        *(_QWORD *)(v18 + 48) = StringLiteral_16912/*"_M"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 48), v33, v27, v28, v29, v30, v31, v32),
        (*(_DWORD *)(v18 + 24) & 0xFFFFFFFC) == 0) )
  {
LABEL_9:
    sub_2213CE4(v10);
  }
  v40 = StringLiteral_16905/*"_L"*/;
  *(_QWORD *)(v18 + 56) = StringLiteral_16905/*"_L"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v18 + 56), v40, v34, v35, v36, v37, v38, v39);
  v41 = BattleEffectUtility_TypeInfo->static_fields;
  v41->scalelist = (struct System_String_array *)v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v41->scalelist, v18, v42, v43, v44, v45, v46, v47);
  v48 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v48,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  v49 = BattleEffectUtility_TypeInfo->static_fields;
  v49->cachedChangeShaders = (struct System_Collections_Generic_Dictionary_string__Shader__o *)v48;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v49->cachedChangeShaders, (int32_t)v48, v50, v51, v52, v53, v54, v55);
}


void BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  BattleEffectUtility_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v5; // x1

  if ( (byte_5973438 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_5973438 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_2213CDC(0, v5);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_42B5040 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void BattleEffectUtility__AddRelatedFunctionEffectIdList(
        System_Int32_array *funcIds,
        System_Collections_Generic_List_int__o **effectIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  unsigned __int64 v9; // x24
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v11; // x22
  unsigned __int64 v12; // x28
  int32_t v13; // w23
  intptr_t m_CachedPtr; // x8
  _QWORD *v15; // x9
  __int64 m_CancellationTokenSource_low; // x10

  if ( (byte_5973433 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_2213A60(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Contains__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973433 = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_2213CDC(Instance, v6);
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_385636C *)Method_DataManager_GetMasterData_FunctionMaster___);
    max_length = funcIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)max_length )
          goto LABEL_25;
        if ( !v8 )
          goto LABEL_24;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      funcIds->m_Items[v9],
                                      (const MethodInfo_3F10B30 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_24;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v11 = Instance;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
LABEL_22:
        LODWORD(max_length) = funcIds->max_length;
        if ( (__int64)++v9 >= (int)max_length )
          return;
      }
      v12 = 0;
      while ( v12 < (unsigned int)m_CancellationTokenSource )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_24;
        v13 = *((_DWORD *)&v11->fields._DispLog + v12);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v13,
                                      (const MethodInfo_44675F0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_24;
          m_CachedPtr = Instance->fields.m_CachedPtr;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_24;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Instance,
              v13,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = v13;
          }
        }
        LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
        if ( (__int64)++v12 >= (int)m_CancellationTokenSource )
          goto LABEL_22;
      }
LABEL_25:
      sub_2213CE4(Instance);
    }
  }
}


void BattleEffectUtility__ApplyChangeShaderSettings(
        UnityEngine_Material_o *material,
        NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *changeShaderData,
        const MethodInfo *method)
{
  int v5; // w8
  bool v6; // w0
  __int64 v7; // x1
  BattleEffectUtility_c *v8; // x0
  System_Collections_Generic_Dictionary_object__object__o *cachedChangeShaders; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x0
  BattleEffectUtility_c *v12; // x8
  Il2CppObject *v13; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *params; // x0
  __int128 v15; // q0
  Il2CppObject *key; // x20
  Il2CppObject *v17; // x21
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  __int64 naturalAligment; // x10
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x21
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  Il2CppObject *v29; // x21
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v30; // [xsp+0h] [xbp-D0h] BYREF
  float result; // [xsp+2Ch] [xbp-A4h] BYREF
  Il2CppObject *v32; // [xsp+30h] [xbp-A0h] BYREF
  System_String_o *type; // [xsp+38h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-68h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973444 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__Shader__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_18073/*"bool"*/);
    sub_2213A60(&StringLiteral_18849/*"color"*/);
    sub_2213A60(&StringLiteral_20421/*"float"*/);
    sub_2213A60(&StringLiteral_25346/*"texture"*/);
    byte_5973444 = 1;
  }
  value = 0;
  v32 = 0;
  type = 0;
  v5 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  result = 0.0;
  memset(&v34, 0, sizeof(v34));
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, changeShaderData);
  v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)material, 0, 0);
  if ( changeShaderData && !v6 )
  {
    if ( System_String__IsNullOrEmpty(changeShaderData->fields.name, 0) )
      goto LABEL_21;
    v8 = BattleEffectUtility_TypeInfo;
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v7);
      v8 = BattleEffectUtility_TypeInfo;
    }
    cachedChangeShaders = (System_Collections_Generic_Dictionary_object__object__o *)v8->static_fields->cachedChangeShaders;
    if ( cachedChangeShaders )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
              cachedChangeShaders,
              (Il2CppObject *)changeShaderData->fields.name,
              &value,
              (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__Shader__TryGetValue__) )
      {
        v11 = (Il2CppObject *)UnityEngine_Shader__Find(changeShaderData->fields.name, 0);
        v12 = BattleEffectUtility_TypeInfo;
        value = v11;
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v7);
          v12 = BattleEffectUtility_TypeInfo;
        }
        cachedChangeShaders = (System_Collections_Generic_Dictionary_object__object__o *)v12->static_fields->cachedChangeShaders;
        if ( !cachedChangeShaders )
          goto LABEL_54;
        System_Collections_Generic_Dictionary_object__object___set_Item(
          cachedChangeShaders,
          (Il2CppObject *)changeShaderData->fields.name,
          value,
          (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
      }
      v13 = value;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      cachedChangeShaders = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)v13,
                                                                                         0,
                                                                                         0);
      if ( ((unsigned __int8)cachedChangeShaders & 1) == 0 )
        goto LABEL_21;
      if ( material )
      {
        UnityEngine_Material__set_shader(material, (UnityEngine_Shader_o *)value, 0);
LABEL_21:
        params = changeShaderData->fields.params;
        if ( params )
        {
          System_Collections_Generic_Dictionary_object__object___GetEnumerator(
            &v30,
            (System_Collections_Generic_Dictionary_object__object__o *)params,
            (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
          v15 = *(_OWORD *)&v30.fields._dictionary;
          *(_QWORD *)&v34.fields._getEnumeratorRetType = *(_QWORD *)&v30.fields._getEnumeratorRetType;
          v30.fields._dictionary = 0;
          *(_QWORD *)&v30.fields._version = &v34;
          *(_OWORD *)&v34.fields._dictionary = v15;
          v34.fields._current = v30.fields._current;
          while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
                    &v34,
                    (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__) )
          {
            key = v34.fields._current.fields.key;
            v17 = v34.fields._current.fields.value;
            IsNullOrEmpty = System_String__IsNullOrEmpty((System_String_o *)v34.fields._current.fields.key, 0);
            if ( !IsNullOrEmpty && v17 != 0 )
            {
              if ( !material )
                sub_2213CDC(IsNullOrEmpty, v19);
              if ( UnityEngine_Material__HasProperty_83277340(material, (System_String_o *)key, 0) )
              {
                if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v20);
                if ( !BattleEffectUtility__IsIgnoreKey((System_String_o *)key, v20) )
                {
                  naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
                  if ( v17->klass->_2.naturalAligment >= (unsigned int)naturalAligment
                    && (System_Collections_Generic_Dictionary_string__object__c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
                  {
                    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v21);
                    if ( BattleEffectUtility__TryGetTypedParam(
                           (System_Collections_Generic_Dictionary_string__object__o *)v17,
                           &type,
                           &v32,
                           v22) )
                    {
                      if ( System_String__op_Equality(type, (System_String_o *)StringLiteral_25346/*"texture"*/, 0)
                        && (v26 = v32) != 0
                        && v32->klass == (Il2CppClass *)qword_5984390 )
                      {
                        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v24);
                        BattleEffectUtility__ApplyTexture(material, (System_String_o *)key, (System_String_o *)v26, v25);
                      }
                      else if ( System_String__op_Equality(type, (System_String_o *)StringLiteral_18849/*"color"*/, 0)
                             && v32
                             && v32->klass == (Il2CppClass *)qword_5984390 )
                      {
                        v36.fields.r = 1.0;
                        v36.fields.g = 1.0;
                        v36.fields.b = 1.0;
                        v36.fields.a = 1.0;
                        v37 = ColorHelper__ParseColorCode_51166816((System_String_o *)v32, v36, 0);
                        UnityEngine_Material__SetColor(material, (System_String_o *)key, v37, 0);
                      }
                      else if ( System_String__op_Equality(type, (System_String_o *)StringLiteral_20421/*"float"*/, 0)
                             || System_String__op_Equality(type, (System_String_o *)StringLiteral_18073/*"bool"*/, 0) )
                      {
                        v29 = v32;
                        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v27);
                        if ( BattleEffectUtility__TryConvertFloat(v29, &result, v28) )
                          UnityEngine_Material__SetFloat(material, (System_String_o *)key, result, 0);
                      }
                    }
                  }
                }
              }
            }
          }
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
            &v34,
            (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
        }
        return;
      }
    }
LABEL_54:
    sub_2213CDC(cachedChangeShaders, v7);
  }
}


void BattleEffectUtility__ApplyTexture(
        UnityEngine_Material_o *material,
        System_String_o *propertyName,
        System_String_o *resourcePath,
        const MethodInfo *method)
{
  __int64 v7; // x1
  Il2CppObject *object; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_5973446 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_Texture___);
    byte_5973446 = 1;
  }
  if ( !System_String__IsNullOrEmpty(resourcePath, 0) )
  {
    object = UnityEngine_Resources__Load_object_(
               resourcePath,
               (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_Texture___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)object, 0, 0);
    if ( !v9 )
    {
      if ( !material )
        sub_2213CDC(v9, v10);
      UnityEngine_Material__SetTexture(material, propertyName, (UnityEngine_Texture_o *)object, 0);
    }
  }
}


UnityEngine_GameObject_array *BattleEffectUtility__ChangeServantView(
        BattleServantData_o *svtData,
        UnityEngine_GameObject_o *actorObj,
        bool isShadow,
        bool isChoco,
        ServantLimitAddEntity_o *limitAddEntity,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *v9; // x26
  BattleServantData_o *v10; // x22
  float v11; // s8
  int32_t effectId; // w22
  float a; // s9
  float v14; // s13
  System_Collections_Generic_List_object__o *v15; // x20
  float v16; // s14
  float v17; // s15
  float b; // s12
  float g; // s11
  float r; // s10
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  BattleServantData_o *v27; // x23
  int32_t v28; // w1
  __int64 v29; // x8
  unsigned __int64 v30; // x27
  System_String_o *v31; // x25
  UnityEngine_GameObject_o *v32; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v34; // x1
  UnityEngine_Object_o *NodeFromName; // x26
  BattleServantData_o *v36; // x25
  BattleServantData_o *v37; // x26
  BattleServantData_o *v38; // x26
  BattleServantData_o *v39; // x26
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  BattleDataDefine_c *v50; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  NpcServantDisplayTypeDetailEntity_o *v54; // x22
  __int64 v55; // x8
  BattleServantData_o *v56; // x21
  unsigned __int64 v57; // x25
  UnityEngine_Object_o *v58; // x22
  const MethodInfo *v59; // x2
  int32_t uniqueId; // w8
  BattleServantData_o *v61; // x22
  unsigned int v62; // w19
  NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *v63; // x24
  UnityEngine_Material_o *v64; // x23
  __int64 v65; // x8
  BattleServantData_o *v66; // x19
  unsigned __int64 v67; // x24
  UnityEngine_Object_o *v68; // x21
  const MethodInfo *v69; // x2
  int32_t v70; // w8
  BattleServantData_o *v71; // x21
  unsigned int v72; // w29
  NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *v73; // x23
  UnityEngine_Material_o *v74; // x22
  bool v76; // [xsp+0h] [xbp-D0h]
  System_Nullable_Color__o v77; // [xsp+Ch] [xbp-C4h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+20h] [xbp-B0h] BYREF
  NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *data; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Color_o v80; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = actorObj;
  v10 = svtData;
  if ( (byte_597343F & 1) == 0 )
  {
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Color__get_HasValue__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_19860/*"en_waist"*/);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    svtData = (BattleServantData_o *)sub_2213A60(&StringLiteral_16758/*"_AddColor"*/);
    byte_597343F = 1;
  }
  v11 = 0.0;
  entity = 0;
  data = 0;
  if ( !isShadow )
  {
    a = 1.0;
    v14 = 0.0;
    v15 = 0;
    v16 = 0.0;
    v17 = 0.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    if ( !isChoco )
      goto LABEL_61;
    goto LABEL_58;
  }
  if ( !v10 )
    goto LABEL_101;
  BattleServantData__TryGetDisplayTypeDetailEntity(v10, &entity, 0);
  if ( entity && (NpcServantDisplayTypeDetailEntity__TryGetChangeShaderData(entity, &data, 0), entity) )
    effectId = entity->fields.effectId;
  else
    effectId = 0;
  svtData = (BattleServantData_o *)sub_2213B20(string___TypeInfo, 1);
  if ( !svtData )
    goto LABEL_101;
  v27 = svtData;
  if ( !svtData->fields.uniqueId )
    goto LABEL_102;
  v28 = StringLiteral_19860/*"en_waist"*/;
  svtData->fields.userSvtId.fields.currentCryptoKey = StringLiteral_19860/*"en_waist"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&svtData->fields.userSvtId, v28, v21, v22, v23, v24, v25, v26);
  if ( limitAddEntity )
  {
    svtData = (BattleServantData_o *)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(limitAddEntity, 0);
    v27 = svtData;
    if ( !svtData )
      goto LABEL_101;
  }
  v29 = *(_QWORD *)&v27->fields.uniqueId;
  v76 = isChoco;
  if ( (int)v29 >= 1 )
  {
    v15 = 0;
    v30 = 0;
    while ( v30 < (unsigned int)v29 )
    {
      if ( !v9 )
        goto LABEL_101;
      v31 = (System_String_o *)*(&v27->fields.userSvtId.fields.currentCryptoKey + v30);
      v32 = v9;
      transform = UnityEngine_GameObject__get_transform(v9, 0);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v31, 0, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34);
      svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
      if ( ((unsigned __int8)svtData & 1) != 0 )
      {
        svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !svtData )
          goto LABEL_101;
        svtData = (BattleServantData_o *)ServantAssetLoadManager__createShadowEffect(
                                           (ServantAssetLoadManager_o *)svtData,
                                           0,
                                           effectId,
                                           0);
        if ( !svtData )
          goto LABEL_101;
        v36 = svtData;
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtData, 0);
        if ( !svtData )
          goto LABEL_101;
        UnityEngine_Transform__set_parent(
          (UnityEngine_Transform_o *)svtData,
          (UnityEngine_Transform_o *)NodeFromName,
          0);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0);
        v37 = svtData;
        if ( !byte_5969AE0 )
        {
          svtData = (BattleServantData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v37 )
          goto LABEL_101;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v37,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0);
        v38 = svtData;
        if ( !byte_5969AE0 )
        {
          svtData = (BattleServantData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        if ( !v38 )
          goto LABEL_101;
        UnityEngine_Transform__set_localEulerAngles(
          (UnityEngine_Transform_o *)v38,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v36, 0);
        v39 = svtData;
        if ( !byte_5969AE5 )
        {
          svtData = (BattleServantData_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE5 = 1;
        }
        if ( !v39 )
          goto LABEL_101;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v39,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0);
        if ( !v15 )
        {
          v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v15,
            (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( !v15 )
            goto LABEL_101;
        }
        items = v15->fields._items;
        v47 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v15->fields._version;
        if ( !items )
          goto LABEL_101;
        size = v15->fields._size;
        v9 = v32;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v15,
            (Il2CppObject *)v36,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
        }
        else
        {
          v49 = &items->obj.klass + size;
          v15->fields._size = size + 1;
          v49[4] = (Il2CppClass *)v36;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v36, v40, v41, v42, v43, v44, v45);
        }
      }
      else
      {
        v9 = v32;
      }
      LODWORD(v29) = v27->fields.uniqueId;
      if ( (__int64)++v30 >= (int)v29 )
        goto LABEL_44;
    }
LABEL_102:
    sub_2213CE4(svtData);
  }
  v15 = 0;
LABEL_44:
  v50 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, actorObj);
    v50 = BattleDataDefine_TypeInfo;
  }
  p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v50->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
  svtData = (BattleServantData_o *)entity;
  r = p_OVERWRITE_ATK_RATE_PRIORITY[14];
  g = p_OVERWRITE_ATK_RATE_PRIORITY[15];
  b = p_OVERWRITE_ATK_RATE_PRIORITY[16];
  a = p_OVERWRITE_ATK_RATE_PRIORITY[17];
  if ( !entity )
  {
    v14 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
    if ( !v76 )
      goto LABEL_61;
LABEL_58:
    if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, actorObj);
    ServantAssetLoadManager__changeChocoSahder(v9, 0);
    goto LABEL_61;
  }
  NpcServantDisplayTypeDetailEntity__get_MainColor(&v77, entity, 0);
  if ( v77.fields.hasValue )
  {
    r = v77.fields.value.fields.r;
    g = v77.fields.value.fields.g;
    b = v77.fields.value.fields.b;
    a = v77.fields.value.fields.a;
  }
  svtData = (BattleServantData_o *)entity;
  if ( !entity )
    goto LABEL_101;
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v77, entity, 0);
  if ( v77.fields.hasValue )
  {
    v17 = v77.fields.value.fields.r;
    v16 = v77.fields.value.fields.g;
    v14 = v77.fields.value.fields.b;
    v11 = v77.fields.value.fields.a;
  }
  else
  {
    v11 = 0.0;
    v14 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
  }
  v54 = entity;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v52);
  BattleEffectUtility__SetColorToShadowEffectParticles((System_Collections_Generic_List_GameObject__o *)v15, v54, v53);
  if ( v76 )
    goto LABEL_58;
LABEL_61:
  if ( !v9 )
    goto LABEL_101;
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !svtData )
    goto LABEL_101;
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__58857296(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_3821750 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( svtData )
  {
    v55 = *(_QWORD *)&svtData->fields.uniqueId;
    v56 = svtData;
    if ( (int)v55 >= 1 )
    {
      v57 = 0;
      while ( 1 )
      {
        if ( v57 >= (unsigned int)v55 )
          goto LABEL_102;
        v58 = (UnityEngine_Object_o *)*(&v56->fields.userSvtId.fields.currentCryptoKey + v57);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actorObj);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v58, 0, 0);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v58 )
            goto LABEL_101;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v58, 0);
          if ( !svtData )
            goto LABEL_101;
          uniqueId = svtData->fields.uniqueId;
          v61 = svtData;
          if ( uniqueId >= 1 )
            break;
        }
LABEL_79:
        LODWORD(v55) = v56->fields.uniqueId;
        if ( (__int64)++v57 >= (int)v55 )
          goto LABEL_80;
      }
      v62 = 0;
      while ( v62 < uniqueId )
      {
        v63 = data;
        v64 = (UnityEngine_Material_o *)*(&v61->fields.userSvtId.fields.currentCryptoKey + (int)v62);
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, actorObj);
        BattleEffectUtility__ApplyChangeShaderSettings(v64, v63, v59);
        if ( !v64 )
          goto LABEL_101;
        v80.fields.r = r;
        v80.fields.g = g;
        v80.fields.b = b;
        v80.fields.a = a;
        UnityEngine_Material__SetColor(v64, (System_String_o *)StringLiteral_16813/*"_Color"*/, v80, 0);
        v81.fields.r = v17;
        v81.fields.g = v16;
        v81.fields.b = v14;
        v81.fields.a = v11;
        UnityEngine_Material__SetColor(v64, (System_String_o *)StringLiteral_16758/*"_AddColor"*/, v81, 0);
        uniqueId = v61->fields.uniqueId;
        if ( (int)++v62 >= uniqueId )
          goto LABEL_79;
      }
      goto LABEL_102;
    }
  }
LABEL_80:
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(v9, 0);
  if ( !svtData )
LABEL_101:
    sub_2213CDC(svtData, actorObj);
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__58857296(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_3821750 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( svtData )
  {
    v65 = *(_QWORD *)&svtData->fields.uniqueId;
    v66 = svtData;
    if ( (int)v65 >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= (unsigned int)v65 )
          goto LABEL_102;
        v68 = (UnityEngine_Object_o *)*(&v66->fields.userSvtId.fields.currentCryptoKey + v67);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actorObj);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v68, 0, 0);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v68 )
            goto LABEL_101;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v68, 0);
          if ( !svtData )
            goto LABEL_101;
          v70 = svtData->fields.uniqueId;
          v71 = svtData;
          if ( v70 >= 1 )
            break;
        }
LABEL_97:
        LODWORD(v65) = v66->fields.uniqueId;
        if ( (__int64)++v67 >= (int)v65 )
          goto LABEL_98;
      }
      v72 = 0;
      while ( v72 < v70 )
      {
        v73 = data;
        v74 = (UnityEngine_Material_o *)*(&v71->fields.userSvtId.fields.currentCryptoKey + (int)v72);
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, actorObj);
        BattleEffectUtility__ApplyChangeShaderSettings(v74, v73, v69);
        if ( !v74 )
          goto LABEL_101;
        v82.fields.r = r;
        v82.fields.g = g;
        v82.fields.b = b;
        v82.fields.a = a;
        UnityEngine_Material__SetColor(v74, (System_String_o *)StringLiteral_16813/*"_Color"*/, v82, 0);
        v83.fields.r = v17;
        v83.fields.g = v16;
        v83.fields.b = v14;
        v83.fields.a = v11;
        UnityEngine_Material__SetColor(v74, (System_String_o *)StringLiteral_16758/*"_AddColor"*/, v83, 0);
        v70 = v71->fields.uniqueId;
        if ( (int)++v72 >= v70 )
          goto LABEL_97;
      }
      goto LABEL_102;
    }
  }
LABEL_98:
  if ( v15 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                             v15,
                                             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0;
}


void BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleEffectUtility_c *v2; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v4; // x1

  if ( (byte_5973439 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_5973439 = 1;
  }
  v2 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v2);
  if ( !NotPreloadEffectIdHashSet )
    sub_2213CDC(0, v4);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_42B4494 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


UnityEngine_GameObject_array *BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
        System_Collections_Generic_IEnumerable_Transform__o *nodeEnumerable,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
        const MethodInfo *method)
{
  int32_t effectId; // w21
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_Transform__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 i; // x22
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  UnityEngine_Transform_o *v27; // x23
  Il2CppObject *Instance; // x0
  __int64 v29; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x0
  __int64 v31; // x1
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v34; // x1
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v52; // [xsp+18h] [xbp-58h]

  if ( (byte_5973440 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_5973440 = 1;
  }
  if ( displayTypeDetailEntity )
    effectId = displayTypeDetailEntity->fields.effectId;
  else
    effectId = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !nodeEnumerable )
    goto LABEL_56;
  klass = nodeEnumerable->klass;
  v10 = *(unsigned __int16 *)&nodeEnumerable->klass->_2.rank;
  if ( *(_WORD *)&nodeEnumerable->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_11;
    }
    v12 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_11:
    v12 = sub_224BC3C(nodeEnumerable, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_Transform__o *, _QWORD))v12)(
          nodeEnumerable,
          *(_QWORD *)(v12 + 8));
  v52 = v13;
  if ( !v13 )
    sub_2213CDC(v13, v14);
  for ( i = v13; ; i = v52 )
  {
    v16 = *(_QWORD *)i;
    v17 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_19;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_19:
      v19 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(i, *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    if ( !v52 )
      sub_2213CDC(v20, v21);
    v23 = *(_QWORD *)v52;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v25 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_27;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_27:
      v26 = sub_224BC3C(v52, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v27 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v52, *(_QWORD *)(v26 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v29);
    ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)Instance, 0, effectId, 0);
    v32 = ShadowEffect;
    if ( !ShadowEffect )
      sub_2213CDC(0, v31);
    transform = UnityEngine_GameObject__get_transform(ShadowEffect, 0);
    if ( !transform )
      sub_2213CDC(0, v34);
    UnityEngine_Transform__SetParent(transform, v27, 0);
    GameObjectExtensions__ResetTransform(v32, 0);
    if ( !v6
      || (items = v6->fields._items,
          v44 = Method_System_Collections_Generic_List_GameObject__Add__,
          ++v6->fields._version,
          !items) )
    {
      sub_2213CDC(v35, v36);
    }
    size = v6->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        (Il2CppObject *)v32,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &items->obj.klass + size;
      v6->fields._size = size + 1;
      v46[4] = (Il2CppClass *)v32;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v46 + 4), (int32_t)v32, v37, v38, v39, v40, v41, v42);
    }
  }
  if ( v52 )
  {
    v47 = *(_QWORD *)v52;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_44;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_44:
      v50 = sub_224BC3C(v52, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v50)(v52, *(_QWORD *)(v50 + 8));
  }
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v21);
  BattleEffectUtility__SetColorToShadowEffectParticles(
    (System_Collections_Generic_List_GameObject__o *)v6,
    displayTypeDetailEntity,
    v22);
  if ( !v6 )
LABEL_56:
    sub_2213CDC(v7, v8);
  return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                           v6,
                                           (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
}


void BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  int32_t IndexOf_75716976; // w0
  int32_t v8; // w22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o **v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  v6 = baseName;
  if ( (byte_5973435 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1123/*"/"*/);
    baseName = (System_String_o *)sub_2213A60(&StringLiteral_6103/*"Effect/BattleCommon/{0}"*/);
    byte_5973435 = 1;
  }
  if ( !v6 )
    sub_2213CDC(baseName, path);
  IndexOf_75716976 = System_String__LastIndexOf_75716976(v6, (System_String_o *)StringLiteral_1123/*"/"*/, 0);
  if ( IndexOf_75716976 == -1 )
  {
    v25 = System_String__Format((System_String_o *)StringLiteral_6103/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0);
    *path = v25;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)path, (int32_t)v25, v26, v27, v28, v29, v30, v31);
    v24 = name;
    LODWORD(v17) = (_DWORD)v6;
    *name = v6;
  }
  else
  {
    v8 = IndexOf_75716976;
    v9 = (Il2CppObject *)System_String__Substring_75702848(v6, 0, IndexOf_75716976, 0);
    v10 = System_String__Format((System_String_o *)StringLiteral_6103/*"Effect/BattleCommon/{0}"*/, v9, 0);
    *path = v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)path, (int32_t)v10, v11, v12, v13, v14, v15, v16);
    v17 = System_String__Substring(v6, v8 + 1, 0);
    v24 = name;
    *name = v17;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v24, (int32_t)v17, v18, v19, v20, v21, v22, v23);
}


System_String_array *BattleEffectUtility__GetBattleCommonEffectPathList(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v4; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x23
  const MethodInfo *v9; // x3
  System_String_o *monitor; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5973434 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5973434 = 1;
  }
  path = 0;
  name = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EffectMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_22;
  max_length = effectIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_2213CE4(Instance);
      if ( !MasterData_object )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   effectIdList->m_Items[v8],
                   (const MethodInfo_3F10B30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && HIDWORD(Instance[1].klass) == 5 )
      {
        monitor = (System_String_o *)Instance[2].monitor;
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v4);
        BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, v9);
        if ( !v6 )
          break;
        Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                     v6,
                                     (Il2CppObject *)path,
                                     (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          items = v6->fields._items;
          v4 = (Il2CppObject *)path;
          v18 = Method_System_Collections_Generic_List_string__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v4,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v4;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)v4, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      LODWORD(max_length) = effectIdList->max_length;
      if ( (__int64)++v8 >= (int)max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_2213CDC(Instance, v4);
  }
LABEL_20:
  if ( !v6 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v6,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *BattleEffectUtility__GetEffectSeName(int32_t effectId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_String_o *result; // x0
  System_String_o *v6; // x19
  bool isSe; // w8

  if ( (byte_597343D & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EffectMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    byte_597343D = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v4);
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                effectId,
                                (const MethodInfo_3F10B30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( result )
  {
    v6 = result;
    isSe = EffectEntity__isSe((EffectEntity_o *)result, 0);
    result = 0;
    if ( isSe )
      return (System_String_o *)v6[1].monitor;
  }
  return result;
}


System_String_o *BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5973430 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6140/*"Effect/SideEffect/"*/);
    byte_5973430 = 1;
  }
  v5 = effectId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Concat((Il2CppObject *)StringLiteral_6140/*"Effect/SideEffect/"*/, v3, 0);
}


bool BattleEffectUtility__IsEffectNotLoadedYet(
        int32_t effectId,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  BattleEffectUtility_c *v11; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v13; // x1
  Il2CppObject *Entity; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5973437 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_5973437 = 1;
  }
  name = 0;
  *effectPath = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)effectPath, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  if ( effectId < 1 )
    goto LABEL_13;
  v11 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v10);
  EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v11);
  if ( !EffectMaster )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v15);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v16);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0) )
    {
LABEL_13:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0);
      return (unsigned __int8)Entity & 1;
    }
LABEL_17:
    sub_2213CDC(EffectMaster, v13);
  }
  return (unsigned __int8)Entity & 1;
}


bool BattleEffectUtility__IsIgnoreKey(System_String_o *key, const MethodInfo *method)
{
  if ( (byte_5973447 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    sub_2213A60(&StringLiteral_16758/*"_AddColor"*/);
    byte_5973447 = 1;
  }
  return System_String__op_Equality(key, (System_String_o *)StringLiteral_16813/*"_Color"*/, 0)
      || System_String__op_Equality(key, (System_String_o *)StringLiteral_16758/*"_AddColor"*/, 0);
}


void BattleEffectUtility__LoadEffectAssetIfNotYet(
        int32_t effectId,
        System_Action_o *finishCallback,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v7; // x21
  CrashReporter_o *SentEffectIdHashSet; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  BattleEffectUtility_c *v19; // x0
  __int64 v20; // x1
  BattleEffectUtility_c *v21; // x0
  BattleEffectUtility_c *v22; // x0
  float SendReportProbability; // s8
  Il2CppObject *v24; // x0
  System_String_o *v25; // x23
  __int64 v26; // x1
  BattleEffectUtility_c *v27; // x0
  BattleDataDefine_c *v28; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v31; // x23
  AssetLoader_LoadEndDataHandler_o *v32; // x24
  System_String_o *v33; // x19
  AssetLoader_LoadEndDataHandler_o *v34; // x23
  __int64 v35; // x1
  int32_t v36; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *effectPath; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_597343A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__0__);
    sub_2213A60(&Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__1__);
    sub_2213A60(&BattleEffectUtility___c__DisplayClass33_0_TypeInfo);
    sub_2213A60(&StringLiteral_23390/*"non-loaded asset was detected. effectId = {0}"*/);
    byte_597343A = 1;
  }
  effectPath = 0;
  v7 = sub_2213CCC(BattleEffectUtility___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_37;
  *(_QWORD *)(v7 + 16) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)finishCallback, v10, v11, v12, v13, v14, v15);
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v16);
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v17) )
    goto LABEL_35;
  v19 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v18);
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v19);
  if ( !SentEffectIdHashSet )
    goto LABEL_37;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v21 = BattleEffectUtility_TypeInfo;
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v20);
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v21);
    if ( !SentEffectIdHashSet )
      goto LABEL_37;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v22 = BattleEffectUtility_TypeInfo;
      if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v20);
        v22 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v22->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0) <= SendReportProbability )
      {
        v36 = effectId;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v36);
        v25 = System_String__Format((System_String_o *)StringLiteral_23390/*"non-loaded asset was detected. effectId = {0}"*/, v24, 0);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        CrashReporter__SendReport_37257636(SentEffectIdHashSet, v25, 0, 0, 0);
        v27 = BattleEffectUtility_TypeInfo;
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v26);
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v27);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v28 = BattleDataDefine_TypeInfo;
  if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v20);
    v28 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v28->static_fields->ASSET_PARALLEL_LOAD_MAX;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  SentEffectIdHashSet = (CrashReporter_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0, 0);
  if ( ((unsigned __int8)SentEffectIdHashSet & 1) != 0 )
  {
    if ( perf )
    {
      assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField;
      v31 = effectPath;
      v32 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v32,
        (Il2CppObject *)v7,
        Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__0__,
        0);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v31,
               v32,
               ASSET_PARALLEL_LOAD_MAX,
               0) )
        {
          return;
        }
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_2213CDC(SentEffectIdHashSet, v9);
  }
  v33 = effectPath;
  v34 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v34,
    (Il2CppObject *)v7,
    Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__1__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v35);
  if ( !AssetManager__loadAssetStorage(v33, v34, ASSET_PARALLEL_LOAD_MAX, 0, 0) )
LABEL_35:
    ActionExtensions__Call(*(System_Action_o **)(v7 + 16), 0);
}


bool BattleEffectUtility__Lottery(float rate, const MethodInfo *method)
{
  return UnityEngine_Random__Range(0.0, 100.0, 0) <= rate;
}


void BattleEffectUtility__SetColorToShadowEffectParticles(
        System_Collections_Generic_List_GameObject__o *objectList,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *v14; // x19
  BattleEffectUtility___c_c *v15; // x0
  struct BattleEffectUtility___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__42_1; // x21
  Il2CppObject *v18; // x22
  struct BattleEffectUtility___c_StaticFields *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v29; // x20
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  __int64 Color_42_0; // x0
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x20
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  UnityEngine_Component_o *v47; // x0
  __int64 v48; // x1
  UnityEngine_ParticleSystem_o *v49; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  const MethodInfo *v53; // x2
  System_String_o *name; // x21
  __int64 v55; // x1
  Il2CppObject *Component_object; // x20
  const MethodInfo *v57; // x2
  __int64 v58; // x20
  __int64 v59; // x8
  unsigned __int64 v60; // x27
  UnityEngine_Material_o *v61; // x21
  Il2CppObject *v62; // x22
  __int64 v63; // x20
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v68; // [xsp+10h] [xbp-130h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v69; // [xsp+48h] [xbp-F8h] BYREF
  __int64 v70; // [xsp+80h] [xbp-C0h]
  __int64 *v71; // [xsp+88h] [xbp-B8h]
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+90h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+98h] [xbp-A8h] BYREF
  System_Nullable_Color__o v74; // [xsp+A0h] [xbp-A0h] BYREF
  __int64 v75; // [xsp+B8h] [xbp-88h] BYREF
  BattleEffectUtility___c__DisplayClass42_0_o v76; // [xsp+C0h] [xbp-80h] BYREF
  UnityEngine_Color_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973441 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__TryGetValue__);
    sub_2213A60(&Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___);
    sub_2213A60(&System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Color__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_Color__get_Value__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__42_1__);
    sub_2213A60(&BattleEffectUtility___c_TypeInfo);
    byte_5973441 = 1;
  }
  v75 = 0;
  memset(&v74, 0, sizeof(v74));
  memset(&v76, 0, sizeof(v76));
  m_ParticleSystem = 0;
  value = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)objectList, 0);
  if ( displayTypeDetailEntity )
  {
    if ( !IsNullOrEmpty )
    {
      NpcServantDisplayTypeDetailEntity__get_EffectColor((System_Nullable_Color__o *)&v69, displayTypeDetailEntity, 0);
      v76.fields.effectColor = *(struct System_Nullable_Color__o *)&v69.fields.m_Mode;
      v76.fields.effectColorDetailDict = NpcServantDisplayTypeDetailEntity__GetEffectColorDetailDict(
                                           displayTypeDetailEntity,
                                           0);
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v76,
        (int32_t)v76.fields.effectColorDetailDict,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      v12 = NpcServantDisplayTypeDetailEntity__GetChangeEffectShaderDataDict(displayTypeDetailEntity, 0);
      v14 = (System_Collections_Generic_Dictionary_object__object__o *)v12;
      if ( v76.fields.effectColor.fields.hasValue || v76.fields.effectColorDetailDict || v12 )
      {
        v15 = BattleEffectUtility___c_TypeInfo;
        if ( !*(&BattleEffectUtility___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility___c_TypeInfo, v13);
          v15 = BattleEffectUtility___c_TypeInfo;
        }
        static_fields = v15->static_fields;
        _9__42_1 = (System_Func_object__object__o *)static_fields->__9__42_1;
        if ( !_9__42_1 )
        {
          if ( !*(&v15->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v15, v13);
            static_fields = BattleEffectUtility___c_TypeInfo->static_fields;
          }
          v18 = (Il2CppObject *)static_fields->__9;
          _9__42_1 = (System_Func_object__object__o *)sub_2213CCC(System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo);
          System_Func_object__object____ctor(
            _9__42_1,
            v18,
            Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__42_1__,
            0);
          v19 = BattleEffectUtility___c_TypeInfo->static_fields;
          v19->__9__42_1 = (struct System_Func_GameObject__IEnumerable_ParticleSystem___o *)_9__42_1;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v19->__9__42_1,
            (int32_t)_9__42_1,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
        }
        v26 = System_Linq_Enumerable__SelectMany_object__object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__42_1,
                (const MethodInfo_3893CAC *)Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___);
        if ( !v26 )
          sub_2213CDC(0, v27);
        klass = v26->klass;
        v29 = v26;
        v30 = *(unsigned __int16 *)&v26->klass->_2.rank;
        if ( *(_WORD *)&v26->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
          {
            --v30;
            p_offset += 4;
            if ( !v30 )
              goto LABEL_19;
          }
          v32 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_19:
          v32 = sub_224BC3C(v26, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0);
        }
        Color_42_0 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v32)(
                       v29,
                       *(_QWORD *)(v32 + 8));
        v75 = Color_42_0;
        v70 = 0;
        v71 = &v75;
        if ( !Color_42_0 )
LABEL_57:
          sub_2213CDC(Color_42_0, v34);
        v35 = Color_42_0;
        while ( 1 )
        {
          v36 = *(_QWORD *)v35;
          v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
          {
            v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v37;
              v38 += 4;
              if ( !v37 )
                goto LABEL_27;
            }
            v39 = v36 + 16LL * *v38 + 312;
          }
          else
          {
LABEL_27:
            v39 = sub_224BC3C(v35, System_Collections_IEnumerator_TypeInfo, 0);
          }
          v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8));
          if ( (v40 & 1) == 0 )
            break;
          v42 = v75;
          if ( !v75 )
            sub_2213CDC(v40, v41);
          v43 = *(_QWORD *)v75;
          v44 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
          {
            v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v45 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
            {
              --v44;
              v45 += 4;
              if ( !v44 )
                goto LABEL_35;
            }
            v46 = v43 + 16LL * *v45 + 312;
          }
          else
          {
LABEL_35:
            v46 = sub_224BC3C(v75, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0);
          }
          v47 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8));
          v49 = (UnityEngine_ParticleSystem_o *)v47;
          if ( !v47 )
            sub_2213CDC(0, v48);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v47, 0);
          if ( !gameObject )
            sub_2213CDC(0, v51);
          name = UnityEngine_Object__get_name(gameObject, 0);
          if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v52);
          Color_42_0 = (__int64)BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_42_0(
                                  (System_Nullable_Color__o *)&v69,
                                  name,
                                  &v76,
                                  v53);
          v74 = *(System_Nullable_Color__o *)&v69.fields.m_Mode;
          if ( LOBYTE(v69.fields.m_Mode) )
          {
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v49, 0).fields.m_ParticleSystem;
            v77 = System_Nullable_Color___get_Value(
                    &v74,
                    (const MethodInfo_45E1980 *)Method_System_Nullable_Color__get_Value__);
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v69, v77, 0);
            v68 = v69;
            UnityEngine_ParticleSystem_MainModule__set_startColor(
              (UnityEngine_ParticleSystem_MainModule_o)&m_ParticleSystem,
              &v68,
              0);
          }
          if ( v14 )
          {
            Color_42_0 = System_Collections_Generic_Dictionary_object__object___TryGetValue(
                           v14,
                           (Il2CppObject *)name,
                           &value,
                           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__NpcServantDisplayTypeDetailEntity_ChangeShaderData__TryGetValue__);
            if ( (Color_42_0 & 1) != 0 )
            {
              Component_object = UnityEngine_Component__GetComponent_object_(
                                   (UnityEngine_Component_o *)v49,
                                   (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v55);
              Color_42_0 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
              if ( (Color_42_0 & 1) != 0 )
              {
                if ( !Component_object )
                  sub_2213CDC(Color_42_0, v34);
                Color_42_0 = (__int64)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)Component_object, 0);
                v58 = Color_42_0;
                if ( !Color_42_0 )
                  sub_2213CDC(0, v34);
                v59 = *(_QWORD *)(Color_42_0 + 24);
                if ( (int)v59 >= 1 )
                {
                  v60 = 0;
                  do
                  {
                    if ( v60 >= (unsigned int)v59 )
                      sub_2213CE4(Color_42_0);
                    v61 = *(UnityEngine_Material_o **)(v58 + 32 + 8 * v60);
                    v62 = value;
                    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
                      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v34);
                    BattleEffectUtility__ApplyChangeShaderSettings(
                      v61,
                      (NpcServantDisplayTypeDetailEntity_ChangeShaderData_o *)v62,
                      v57);
                    LODWORD(v59) = *(_DWORD *)(v58 + 24);
                    ++v60;
                  }
                  while ( (__int64)v60 < (int)v59 );
                }
              }
            }
          }
          v35 = v75;
          if ( !v75 )
            goto LABEL_57;
        }
        v63 = v75;
        if ( v75 )
        {
          v64 = *(_QWORD *)v75;
          v65 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
          {
            v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
            {
              --v65;
              v66 += 4;
              if ( !v65 )
                goto LABEL_63;
            }
            v67 = v64 + 16LL * *v66 + 312;
          }
          else
          {
LABEL_63:
            v67 = sub_224BC3C(v75, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleEffectUtility__SetEffectParent(
        UnityEngine_GameObject_o *effectObj,
        int32_t effectId,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  int v7; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  UnityEngine_Transform_o *v11; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_597342F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_EffectMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_597342F = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&effectId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          effectId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EffectEntity__getNodeName(
                                                                        (EffectEntity_o *)entity,
                                                                        0),
        !effectObj)
    || (v10 = (System_String_o *)Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                        effectObj,
                                                                        0),
        !targetObj)
    || (v11 = (UnityEngine_Transform_o *)Master_object,
        transform = UnityEngine_GameObject__get_transform(targetObj, 0),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                        transform,
                                                                        v10,
                                                                        -1,
                                                                        0,
                                                                        0),
        !v11) )
  {
LABEL_19:
    sub_2213CDC(Master_object, v9);
  }
  UnityEngine_Transform__set_parent(v11, (UnityEngine_Transform_o *)Master_object, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(v11, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_5969AE8 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE8 = 1;
  }
  UnityEngine_Transform__set_eulerAngles(v11, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  UnityEngine_Transform__set_localScale(v11, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
}


void BattleEffectUtility__SetShadowServantColorToMaterials(
        System_Collections_Generic_IEnumerable_Material__o *materialEnumerable,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
        const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  BattleDataDefine_c *v9; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  float v11; // s12
  float v12; // s13
  float v13; // s14
  float v14; // s15
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v18; // x19
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x19
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  UnityEngine_Material_o *v36; // x0
  __int64 v37; // x1
  UnityEngine_Material_o *v38; // x19
  __int64 v39; // x20
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_Nullable_Color__o v44; // [xsp+8h] [xbp-98h] BYREF
  __int64 v45; // [xsp+68h] [xbp-38h] BYREF
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5973442 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_ExcludeNull_Material___);
    sub_2213A60(&BattleDataDefine_TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_Material__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_Material__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_2213A60(&Method_System_Nullable_Color__get_HasValue__);
    sub_2213A60(&StringLiteral_16813/*"_Color"*/);
    sub_2213A60(&StringLiteral_16758/*"_AddColor"*/);
    byte_5973442 = 1;
  }
  v45 = 0;
  if ( displayTypeDetailEntity
    && (NpcServantDisplayTypeDetailEntity__get_MainColor(&v44, displayTypeDetailEntity, 0), v44.fields.hasValue) )
  {
    r = v44.fields.value.fields.r;
    g = v44.fields.value.fields.g;
    b = v44.fields.value.fields.b;
    a = v44.fields.value.fields.a;
  }
  else
  {
    v9 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, displayTypeDetailEntity);
      v9 = BattleDataDefine_TypeInfo;
    }
    p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v9->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
    r = p_OVERWRITE_ATK_RATE_PRIORITY[14];
    g = p_OVERWRITE_ATK_RATE_PRIORITY[15];
    b = p_OVERWRITE_ATK_RATE_PRIORITY[16];
    a = p_OVERWRITE_ATK_RATE_PRIORITY[17];
    if ( !displayTypeDetailEntity )
      goto LABEL_11;
  }
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v44, displayTypeDetailEntity, 0);
  if ( v44.fields.hasValue )
  {
    v11 = v44.fields.value.fields.r;
    v12 = v44.fields.value.fields.g;
    v13 = v44.fields.value.fields.b;
    v14 = v44.fields.value.fields.a;
    goto LABEL_12;
  }
LABEL_11:
  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
LABEL_12:
  v15 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)materialEnumerable,
          (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_Material___);
  if ( !v15 )
    sub_2213CDC(0, v16);
  klass = v15->klass;
  v18 = v15;
  v19 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Material__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_17;
    }
    v21 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_17:
    v21 = sub_224BC3C(v15, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v21)(
          v18,
          *(_QWORD *)(v21 + 8));
  v45 = v22;
  *(_QWORD *)&v44.fields.hasValue = 0;
  *(_QWORD *)&v44.fields.value.fields.g = &v45;
  while ( 1 )
  {
    v24 = v45;
    if ( !v45 )
      sub_2213CDC(v22, v23);
    v25 = *(_QWORD *)v45;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_25;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_25:
      v28 = sub_224BC3C(v45, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8));
    if ( (v29 & 1) == 0 )
      break;
    v31 = v45;
    if ( !v45 )
      sub_2213CDC(v29, v30);
    v32 = *(_QWORD *)v45;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Material__c **)v34 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_33;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_33:
      v35 = sub_224BC3C(v45, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0);
    }
    v36 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8));
    v38 = v36;
    if ( !v36 )
      sub_2213CDC(0, v37);
    v46.fields.r = r;
    v46.fields.g = g;
    v46.fields.b = b;
    v46.fields.a = a;
    UnityEngine_Material__SetColor(v36, (System_String_o *)StringLiteral_16813/*"_Color"*/, v46, 0);
    v47.fields.r = v11;
    v47.fields.g = v12;
    v47.fields.b = v13;
    v47.fields.a = v14;
    UnityEngine_Material__SetColor(v38, (System_String_o *)StringLiteral_16758/*"_AddColor"*/, v47, 0);
  }
  v39 = v45;
  if ( v45 )
  {
    v40 = *(_QWORD *)v45;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_42;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_42:
      v43 = sub_224BC3C(v45, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8));
  }
}


bool BattleEffectUtility__TryConvertFloat(Il2CppObject *value, float *result, const MethodInfo *method)
{
  float v5; // s0
  _BYTE *v6; // x0

  if ( (byte_5973448 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    byte_5973448 = 1;
  }
  *result = 0.0;
  if ( value && value->klass == (Il2CppClass *)qword_5984328 )
  {
    v6 = (_BYTE *)j_il2cpp_object_unbox_0(value, result, method);
    v5 = 0.0;
    if ( *v6 )
      v5 = 1.0;
  }
  else
  {
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, result);
    v5 = System_Convert__ToSingle(value, 0);
  }
  *result = v5;
  return 1;
}


// local variable allocation has failed, the output may be wrong!
bool BattleEffectUtility__TryGetAuraEffectPosOverwriteEntity(
        AuraEffectPosOverwriteEntity_o **ent,
        int32_t auraEffectId,
        int32_t svtId,
        int32_t limitCount,
        BattleEffectUtility_EffectLoadArgument_o *arg,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  BattleEffectUtility_c *v13; // x0
  Il2CppObject *Master_object; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  BattleEffectUtility_c *v22; // x8
  Il2CppObject *v23; // x24
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  System_Collections_Generic_List_ValueTuple_int__int___o *v25; // x24
  __int64 v26; // x0
  System_ValueTuple_int__int__o v27; // x1
  struct System_ValueTuple_int__int__array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  __int64 v31; // x1
  bool v32; // w21
  BattleEffectUtility_c *v33; // x0
  int32_t current; // w22
  int32_t current_high; // w23
  AuraEffectPosOverwriteMaster_o *auraPosOverwriteMst; // x0
  System_ValueTuple_int__int__o item; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o *v39; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_T__o v40; // [xsp+18h] [xbp-78h] BYREF

  if ( (byte_597342D & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__int___Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__int___GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__int____ctor__);
    sub_2213A60(&System_Collections_Generic_List_ValueTuple_int__int___TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_int__int___ctor__);
    byte_597342D = 1;
  }
  v13 = BattleEffectUtility_TypeInfo;
  memset(&v40, 0, sizeof(v40));
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, *(_QWORD *)&auraEffectId);
    v13 = BattleEffectUtility_TypeInfo;
  }
  if ( !v13->static_fields->auraPosOverwriteMst )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&auraEffectId);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
    v22 = BattleEffectUtility_TypeInfo;
    v23 = Master_object;
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v15);
      v22 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v22->static_fields;
    static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v23;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->auraPosOverwriteMst,
      (int32_t)v23,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  *ent = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ent,
    0,
    *(System_String_o **)&svtId,
    *(System_String_o **)&limitCount,
    (int32_t)arg,
    (int32_t)method,
    v6,
    v7);
  v25 = (System_Collections_Generic_List_ValueTuple_int__int___o *)sub_2213CCC(System_Collections_Generic_List_ValueTuple_int__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int_____ctor(
    v25,
    (const MethodInfo_43F1CE8 *)Method_System_Collections_Generic_List_ValueTuple_int__int____ctor__);
  if ( arg )
    ((void (__fastcall *)(BattleEffectUtility_EffectLoadArgument_o *, System_Collections_Generic_List_ValueTuple_int__int___o *, const MethodInfo *))arg->klass->vtable._6_AddAuraPosOverwriteTarget.methodPtr)(
      arg,
      v25,
      arg->klass->vtable._6_AddAuraPosOverwriteTarget.method);
  item = 0;
  System_ValueTuple_int__int____ctor(
    (System_ValueTuple_int__int__o)&item,
    svtId,
    limitCount,
    (const MethodInfo_3CEDC64 *)Method_System_ValueTuple_int__int___ctor__);
  if ( !v25
    || (items = v25->fields._items,
        v27 = item,
        v29 = Method_System_Collections_Generic_List_ValueTuple_int__int___Add__,
        ++v25->fields._version,
        !items) )
  {
    sub_2213CDC(v26, v27);
  }
  size = v25->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_int__int____AddWithResize(
      v25,
      v27,
      *(const MethodInfo_43F2574 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v25->fields._size = size + 1;
    items->m_Items[size] = v27;
  }
  System_Collections_Generic_List_ValueTuple_int__int____GetEnumerator(
    &v40,
    v25,
    (const MethodInfo_43F3024 *)Method_System_Collections_Generic_List_ValueTuple_int__int___GetEnumerator__);
  item = 0;
  v39 = &v40;
  do
  {
    v32 = System_Collections_Generic_List_Enumerator_ValueTuple_int__int____MoveNext(
            &v40,
            (const MethodInfo_40E90F4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___MoveNext__);
    if ( !v32 )
      break;
    v33 = BattleEffectUtility_TypeInfo;
    current = (int32_t)v40.fields._current;
    current_high = HIDWORD(v40.fields._current);
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v31);
      v33 = BattleEffectUtility_TypeInfo;
    }
    auraPosOverwriteMst = v33->static_fields->auraPosOverwriteMst;
    if ( !auraPosOverwriteMst )
      sub_2213CDC(0, v31);
  }
  while ( !AuraEffectPosOverwriteMaster__TryGetEntity(auraPosOverwriteMst, ent, auraEffectId, current, current_high, 0) );
  System_Collections_Generic_List_Enumerator_ValueTuple_int__int____Dispose(
    &v40,
    (const MethodInfo_40E90F0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___Dispose__);
  return v32;
}


bool BattleEffectUtility__TryGetBattleCommonEffectPath(
        System_String_o **effectPath,
        int32_t effectId,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  BattleEffectUtility_c *v11; // x0
  EffectMaster_o *EffectMaster; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5973436 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_5973436 = 1;
  }
  entity = 0;
  name = 0;
  *effectPath = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)effectPath, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  v11 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v10);
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v11);
  if ( !EffectMaster )
    goto LABEL_15;
  EffectMaster = (EffectMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_3F10B80 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_2213CDC(EffectMaster, v13);
  if ( HIDWORD(entity[1].klass) == 5 )
  {
    monitor = (System_String_o *)entity[2].monitor;
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v13);
    BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v14);
  }
  return !System_String__IsNullOrEmpty(*effectPath, 0);
}


bool BattleEffectUtility__TryGetTypedParam(
        System_Collections_Generic_Dictionary_string__object__o *typedParam,
        System_String_o **type,
        Il2CppObject **value,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *v23; // x8
  Il2CppObject *v24; // x10
  int32_t v25; // w1
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  Il2CppObject *v35; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *valuea; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_5973445 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_2213A60(&StringLiteral_25988/*"value"*/);
    sub_2213A60(&StringLiteral_25559/*"type"*/);
    byte_5973445 = 1;
  }
  valuea = 0;
  v35 = 0;
  *type = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)type,
    0,
    (System_String_o *)value,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  *value = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)value, 0, v11, v12, v13, v14, v15, v16);
  if ( typedParam
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)typedParam,
         (Il2CppObject *)StringLiteral_25559/*"type"*/,
         &valuea,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)typedParam,
         (Il2CppObject *)StringLiteral_25988/*"value"*/,
         &v35,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    v23 = valuea;
    if ( valuea )
    {
      if ( valuea->klass == (Il2CppClass *)qword_5984390 )
        v24 = valuea;
      else
        v24 = 0;
      *type = (System_String_o *)v24;
      if ( v23->klass == (Il2CppClass *)qword_5984390 )
        v25 = (int)v23;
      else
        v25 = 0;
    }
    else
    {
      v25 = 0;
      *type = 0;
    }
    sub_2213A04((MissionNaviTransitionBoardItem_o *)type, v25, v17, v18, v19, v20, v21, v22);
    v28 = (int)v35;
    *value = v35;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)value, v28, v29, v30, v31, v32, v33, v34);
    return !System_String__IsNullOrEmpty(*type, 0);
  }
  else
  {
    return 0;
  }
}


System_Nullable_Color__o *BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_42_0(
        System_Nullable_Color__o *__return_ptr retstr,
        System_String_o *objectName,
        BattleEffectUtility___c__DisplayClass42_0_o *a3,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  __int128 v8; // q0
  float a; // w8
  System_Nullable_Color__o v10; // [xsp+4h] [xbp-5Ch] BYREF
  System_Nullable_Color__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_597344A & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_GetValue_string__Nullable_Color____);
    byte_597344A = 1;
  }
  result = (System_Nullable_Color__o *)a3->fields.effectColorDetailDict;
  if ( a3->fields.effectColorDetailDict )
  {
    memset(&v11, 0, sizeof(v11));
    result = BasicHelper__GetValue_object__Nullable_Color__(
               &v10,
               (System_Collections_Generic_Dictionary_K__V__o *)result,
               (Il2CppObject *)objectName,
               &v11,
               (const MethodInfo_3814710 *)Method_BasicHelper_GetValue_string__Nullable_Color____);
    v8 = *(_OWORD *)&v10.fields.hasValue;
    a = v10.fields.value.fields.a;
  }
  else
  {
    v8 = *(_OWORD *)&a3->fields.effectColor.fields.hasValue;
    a = a3->fields.effectColor.fields.value.fields.a;
  }
  *(_OWORD *)&retstr->fields.hasValue = v8;
  retstr->fields.value.fields.a = a;
  return result;
}


UnityEngine_GameObject_o *BattleEffectUtility__getEffectObject(
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        bool isPlaySe,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  EffectEntity_o *Entity; // x19
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *v12; // x21
  int folderType; // w8
  Il2CppObject *v14; // x22
  System_String_o *v15; // x22
  __int64 v16; // x1
  System_String_o *v17; // x22
  System_String_o *v18; // x23
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x0
  UnityEngine_Object_c *klass; // x8
  int32_t v21; // w22
  UnityEngine_Object_c *v22; // x8
  int32_t v23; // w23
  System_String_o *v24; // x24
  __int64 v25; // x1
  int32_t TreasureDeviceSequenceUnitIndex; // w25
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  int32_t v29; // w23
  System_String_o *v30; // x25
  BattleEffectUtility_c *v31; // x8
  struct System_String_array *scalelist; // x8
  __int64 v33; // x1
  System_String_o *v34; // x24
  BattleEffectUtility_c *v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x22
  __int64 v39; // x1
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  __int64 v42; // x1
  BattleEffectUtility_c *v43; // x0
  __int64 v44; // x1
  BattleEffectUtility_c *v45; // x0
  float SendReportProbability; // s8
  UnityEngine_Object_o *v47; // x20
  Il2CppObject *v48; // x0
  System_String_o *v49; // x20
  __int64 v50; // x1
  BattleEffectUtility_c *v51; // x0
  DataManager_o *v52; // x19
  int m_CancellationTokenSource; // w8
  __int64 v54; // x21
  System_String_o *v56; // x0
  UnityEngine_Object_o *v57; // x0
  int32_t id; // [xsp+Ch] [xbp-84h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Color_o WeaponColor; // 0:kr00_16.16

  if ( (byte_597343C & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_BattleEffectUtility_getEffectObject__);
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantAssetLoadManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_19744/*"effect load failed. effectId = {0}"*/);
    sub_2213A60(&StringLiteral_19745/*"effect/"*/);
    sub_2213A60(&StringLiteral_3213/*"Battle/Effect/"*/);
    sub_2213A60(&StringLiteral_3205/*"Battle"*/);
    byte_597343C = 1;
  }
  name = 0;
  path = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_93;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_93;
  Entity = (EffectEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               effectId,
                               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)procObject, 0, 0);
  v12 = 0;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !procObject )
      goto LABEL_93;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  procObject,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v12 = (UnityEngine_Object_o *)Instance;
  }
  if ( !Entity )
LABEL_93:
    sub_2213CDC(Instance, v8);
  folderType = Entity->fields.folderType;
  v14 = 0;
  if ( folderType <= 2 )
  {
    if ( folderType == 1 )
    {
      v56 = System_String__Concat_75651716((System_String_o *)StringLiteral_19745/*"effect/"*/, Entity->fields.name, 0);
      v57 = UnityEngine_Resources__Load(v56, 0);
      if ( v57 )
      {
        if ( (UnityEngine_GameObject_c *)v57->klass == UnityEngine_GameObject_TypeInfo )
          v14 = (Il2CppObject *)v57;
        else
          v14 = 0;
      }
      else
      {
        v14 = 0;
      }
    }
    else if ( folderType == 2 )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
      v14 = 0;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v12 )
          goto LABEL_93;
        klass = v12[23].klass;
        if ( !klass )
          goto LABEL_93;
        v21 = (int32_t)klass[2]._1.name;
        Instance = (DataManager_o *)BattleActorControl__getLimitCount((BattleActorControl_o *)v12, 0);
        v22 = v12[7].klass;
        if ( !v22 )
          goto LABEL_93;
        v23 = (int)Instance;
        Instance = (DataManager_o *)v12[23].klass;
        if ( !Instance )
          goto LABEL_93;
        v24 = Entity->fields.name;
        TreasureDeviceSequenceUnitIndex = BattleServantData__GetTreasureDeviceSequenceUnitIndex(
                                            (BattleServantData_o *)Instance,
                                            *(BattleData_o **)&v22->_1.byval_arg.bits,
                                            0);
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v25);
        Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                             v21,
                                                             v23,
                                                             v24,
                                                             TreasureDeviceSequenceUnitIndex,
                                                             0);
        goto LABEL_49;
      }
    }
  }
  else
  {
    switch ( folderType )
    {
      case 3:
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v12, 0, 0);
        v14 = 0;
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_93;
          WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v12, 0);
          WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v12, 1, 0);
          Instance = (DataManager_o *)BattleActorControl__getEffectFolder((BattleActorControl_o *)v12, 0);
          v29 = (int)Instance;
          v30 = Entity->fields.name;
          v31 = BattleEffectUtility_TypeInfo;
          if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v8);
            v31 = BattleEffectUtility_TypeInfo;
          }
          scalelist = v31->static_fields->scalelist;
          if ( !scalelist )
            goto LABEL_93;
          if ( (unsigned int)WeaponScale >= LODWORD(scalelist->max_length) )
            goto LABEL_94;
          v34 = System_String__Concat_75651716(v30, scalelist->m_Items[WeaponScale], 0);
          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v33);
          Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                               v34,
                                                               WeaponGroup,
                                                               v29,
                                                               0);
          goto LABEL_49;
        }
        break;
      case 4:
        v35 = BattleEffectUtility_TypeInfo;
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v8);
          v35 = BattleEffectUtility_TypeInfo;
        }
        v36 = System_Int32__ToString((unsigned int)v35->static_fields + 24, 0);
        v38 = System_String__Concat_75651716((System_String_o *)StringLiteral_3213/*"Battle/Effect/"*/, v36, 0);
        if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37);
        Instance = (DataManager_o *)AssetManager__getAssetStorage(v38, 0);
        if ( !Instance )
          goto LABEL_93;
        Manager__LoadNoblePhantasmEffect = AssetData__GetObject_object__58532980(
                                             (AssetData_o *)Instance,
                                             Entity->fields.name,
                                             (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
        goto LABEL_49;
      case 5:
        v15 = Entity->fields.name;
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v8);
        BattleEffectUtility__GetBattleCommonEffectPathAndName(v15, &path, &name, v11);
        v18 = name;
        v17 = path;
        if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v16);
        Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadBattleCommonEffect(v17, v18, 0);
LABEL_49:
        v14 = Manager__LoadNoblePhantasmEffect;
        break;
    }
  }
  if ( EffectEntity__isSe(Entity, 0) && isPlaySe )
  {
    v40 = Method_BattleEffectUtility_getEffectObject__;
    if ( (*((_BYTE *)Method_BattleEffectUtility_getEffectObject__ + 83) & 2) != 0 )
      v40 = (_QWORD *)sub_2213A78(Method_BattleEffectUtility_getEffectObject__);
    v41 = (System_Reflection_MethodBase_o *)sub_2213A44(v40, v40[4]);
    OverwriteAssetSoundName__PlaySe_48402488(
      v41,
      (System_String_o *)StringLiteral_3205/*"Battle"*/,
      Entity->fields.se,
      1.0,
      0,
      0,
      0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42);
    Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                  v14,
                                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v47 = (UnityEngine_Object_o *)Instance;
    if ( Entity->fields.folderType != 3 )
      goto LABEL_85;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v47, 0, 0);
    if ( ((unsigned __int8)Instance & 1) == 0 )
      goto LABEL_85;
    if ( !v47 )
      goto LABEL_93;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                  (UnityEngine_GameObject_o *)v47,
                                  (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    if ( !v12 )
      goto LABEL_93;
    v52 = Instance;
    WeaponColor = BattleActorControl__getWeaponColor((BattleActorControl_o *)v12, 0);
    if ( !v52 )
      goto LABEL_93;
    m_CancellationTokenSource = (int)v52->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource < 1 )
    {
LABEL_85:
      if ( v47 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v47, 0, 0);
        return (UnityEngine_GameObject_o *)v47;
      }
      goto LABEL_93;
    }
    v54 = 0;
    while ( (unsigned int)v54 < m_CancellationTokenSource )
    {
      Instance = (DataManager_o *)*((_QWORD *)&v52->fields._DispLog + v54);
      if ( !Instance )
        goto LABEL_93;
      UIWidget__set_color((UIWidget_o *)Instance, WeaponColor, 0);
      m_CancellationTokenSource = (int)v52->fields.m_CancellationTokenSource;
      if ( (int)++v54 >= m_CancellationTokenSource )
        goto LABEL_85;
    }
LABEL_94:
    sub_2213CE4(Instance);
  }
  v43 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v42);
  Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v43);
  if ( !Instance )
    goto LABEL_93;
  if ( System_Collections_Generic_HashSet_int___Contains(
         (System_Collections_Generic_HashSet_int__o *)Instance,
         Entity->fields.id,
         (const MethodInfo_42B44F4 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    return 0;
  }
  v45 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v44);
    v45 = BattleEffectUtility_TypeInfo;
  }
  SendReportProbability = v45->static_fields->SendReportProbability;
  v47 = 0;
  if ( UnityEngine_Random__Range(0.0, 100.0, 0) <= SendReportProbability )
  {
    id = Entity->fields.id;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id);
    v49 = System_String__Format((System_String_o *)StringLiteral_19744/*"effect load failed. effectId = {0}"*/, v48, 0);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    if ( Instance )
    {
      CrashReporter__SendReport_37257636((CrashReporter_o *)Instance, v49, 0, 0, 0);
      v51 = BattleEffectUtility_TypeInfo;
      if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v50);
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v51);
      if ( Instance )
      {
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)Instance,
          Entity->fields.id,
          (const MethodInfo_42B5030 *)Method_System_Collections_Generic_HashSet_int__Add__);
        return 0;
      }
    }
    goto LABEL_93;
  }
  return (UnityEngine_GameObject_o *)v47;
}


UnityEngine_GameObject_o *BattleEffectUtility__getEffectObjectSafe(
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        bool isPlaySe,
        float lostTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *EffectObject; // x19
  Il2CppObject *v11; // x0
  __int64 v12; // x1

  if ( (byte_597343B & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_6097/*"Effect Default"*/);
    byte_597343B = 1;
  }
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, procObject);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, isPlaySe, method);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0, 0) )
  {
    EffectObject = (UnityEngine_GameObject_o *)sub_2213CCC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_6097/*"Effect Default"*/, 0);
    if ( !EffectObject
      || (v11 = UnityEngine_GameObject__AddComponent_object_(
                  EffectObject,
                  (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0 )
    {
      sub_2213CDC(v11, v12);
    }
    *(float *)&v11[2].klass = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *BattleEffectUtility__getEffectObject_53148176(
        int32_t folder,
        System_String_o *name,
        UnityEngine_GameObject_o *actorObject,
        const MethodInfo *method)
{
  __int64 *v7; // x8
  __int64 v8; // x1
  bool v9; // w8
  UnityEngine_GameObject_o *result; // x0
  System_String_o *v11; // x0

  if ( (byte_597343E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3209/*"Battle/CommonEffects/"*/);
    sub_2213A60(&StringLiteral_19745/*"effect/"*/);
    byte_597343E = 1;
  }
  if ( folder == 2 )
  {
    v7 = &StringLiteral_19745/*"effect/"*/;
LABEL_14:
    v11 = System_String__Concat_75651716((System_String_o *)*v7, name, 0);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v11, 0);
    if ( result )
    {
      if ( result->klass != UnityEngine_GameObject_TypeInfo )
        return 0;
    }
    return result;
  }
  if ( folder != 1 )
  {
    if ( folder )
      return 0;
    v7 = &StringLiteral_3209/*"Battle/CommonEffects/"*/;
    goto LABEL_14;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0, 0);
  result = 0;
  if ( v9 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 actorObject,
                                                 (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0 )
    {
      sub_2213CDC(result, v8);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0);
  }
  return result;
}


System_String_o *BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *NodeName; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5973443 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_19854/*"en_body"*/);
    byte_5973443 = 1;
  }
  v3 = (System_String_o *)StringLiteral_19854/*"en_body"*/;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v3;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_2213CDC(Instance, v5);
  NodeName = EffectEntity__getNodeName((EffectEntity_o *)entity, 0);
  if ( !System_String__IsNullOrEmpty(NodeName, 0) )
    return NodeName;
  return v3;
}


System_String_o *BattleEffectUtility__get_EffectAssetName(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleEffectUtility_c *v2; // x0
  System_String_o *v3; // x0

  if ( (byte_597342A & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&StringLiteral_3213/*"Battle/Effect/"*/);
    byte_597342A = 1;
  }
  v2 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
    v2 = BattleEffectUtility_TypeInfo;
  }
  v3 = System_Int32__ToString((unsigned int)v2->static_fields + 24, 0);
  return System_String__Concat_75651716((System_String_o *)StringLiteral_3213/*"Battle/Effect/"*/, v3, 0);
}


EffectMaster_o *BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleEffectUtility_c *v2; // x0
  EffectMaster_o *effectMst; // x19
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  BattleEffectUtility_c *v12; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_597342B & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_EffectMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_597342B = 1;
  }
  v2 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
    v2 = BattleEffectUtility_TypeInfo;
  }
  effectMst = v2->static_fields->effectMst;
  if ( !effectMst )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_EffectMaster___);
    v12 = BattleEffectUtility_TypeInfo;
    effectMst = (EffectMaster_o *)Master_object;
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v5);
      v12 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->effectMst = effectMst;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->effectMst,
      (int32_t)effectMst,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return effectMst;
}


System_Collections_Generic_HashSet_int__o *BattleEffectUtility__get_NotPreloadEffectIdHashSet(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleEffectUtility_c *v2; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  BattleEffectUtility_c *v11; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_5973428 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_5973428 = 1;
  }
  v2 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
    v2 = BattleEffectUtility_TypeInfo;
  }
  notPreloadEffectIdHashSet = v2->static_fields->notPreloadEffectIdHashSet;
  if ( !notPreloadEffectIdHashSet )
  {
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v11 = BattleEffectUtility_TypeInfo;
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v4);
      v11 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->notPreloadEffectIdHashSet,
      (int32_t)notPreloadEffectIdHashSet,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return notPreloadEffectIdHashSet;
}


System_Collections_Generic_HashSet_int__o *BattleEffectUtility__get_SentEffectIdHashSet(const MethodInfo *method)
{
  __int64 v1; // x1
  BattleEffectUtility_c *v2; // x0
  System_Collections_Generic_HashSet_int__o *sentEffectIdHashSet; // x19
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  BattleEffectUtility_c *v11; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_5973427 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_5973427 = 1;
  }
  v2 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
    v2 = BattleEffectUtility_TypeInfo;
  }
  sentEffectIdHashSet = v2->static_fields->sentEffectIdHashSet;
  if ( !sentEffectIdHashSet )
  {
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_2213CCC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_42B3DF0 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v11 = BattleEffectUtility_TypeInfo;
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v4);
      v11 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v11->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&static_fields->sentEffectIdHashSet,
      (int32_t)sentEffectIdHashSet,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return sentEffectIdHashSet;
}


UnityEngine_GameObject_o *BattleEffectUtility__loadActivateSideEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *object; // x19

  if ( (byte_5973432 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_2213A60(&StringLiteral_19779/*"effect/ef_sideeffect01"*/);
    byte_5973432 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_19779/*"effect/ef_sideeffect01"*/,
             (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       object,
                                       (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectUtility__loadEffectToNode(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        UnityEngine_Vector3_o offset,
        int32_t svtId,
        int32_t limitCount,
        BattleEffectUtility_EffectLoadArgument_o *arg,
        const MethodInfo *method)
{
  float z; // s10
  float y; // s8
  float x; // s9
  int v17; // w8
  __int64 v18; // x1
  UnityEngine_GameObject_o *EffectObject; // x19
  __int64 v20; // x1
  BattleEffectUtility_c *v21; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v23; // x1
  EffectEntity_o *v24; // x26
  System_String_o *NodeName; // x25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v27; // s11
  float v28; // s12
  float v29; // s13
  __int64 v30; // x1
  const MethodInfo *v31; // x5
  bool IsUseNodePositionOnly; // w26
  char v33; // w23
  UnityEngine_Transform_o *v34; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v36; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v38; // x0
  struct UnityEngine_Vector3_StaticFields *v39; // x8
  float v41; // s0
  float v42; // s1
  float v43; // s2
  AuraEffectPosOverwriteEntity_o *ent; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v45; // 0:kr00_12.12
  UnityEngine_Vector3_o Rotation; // 0:kr14_12.12
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_597342C & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597342C = 1;
  }
  v17 = *(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1);
  ent = 0;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, 1, *(const MethodInfo **)&svtId);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0, 0) )
  {
    v21 = BattleEffectUtility_TypeInfo;
    if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v20);
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v21);
    if ( EffectMaster )
    {
      EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                     EffectMaster,
                                                                     effectId,
                                                                     (const MethodInfo_3F10B30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        v24 = (EffectEntity_o *)EffectMaster;
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0);
        if ( arg )
          NodeName = (System_String_o *)((__int64 (__fastcall *)(BattleEffectUtility_EffectLoadArgument_o *, System_String_o *, const MethodInfo *))arg->klass->vtable._4_GetParentNodeName.methodPtr)(
                                          arg,
                                          NodeName,
                                          arg->klass->vtable._4_GetParentNodeName.method);
        if ( !byte_5969AE8 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE8 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v27 = static_fields->upVector.fields.x;
        v28 = static_fields->upVector.fields.y;
        v29 = static_fields->upVector.fields.z;
        IsUseNodePositionOnly = EffectEntity__IsUseNodePositionOnly(v24, svtId, limitCount, 0);
        if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v30);
        EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__TryGetAuraEffectPosOverwriteEntity(
                                                                       &ent,
                                                                       effectId,
                                                                       svtId,
                                                                       limitCount,
                                                                       arg,
                                                                       v31);
        v33 = (char)EffectMaster;
        if ( ((unsigned __int8)EffectMaster & 1) != 0 )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ent;
          if ( !ent )
            goto LABEL_38;
          NodeName = ent->fields.nodeName;
          v45 = AuraEffectPosOverwriteEntity__GetOffset(ent, 0);
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ent;
          if ( !ent )
            goto LABEL_38;
          x = v45.fields.x;
          y = v45.fields.y;
          z = v45.fields.z;
          Rotation = AuraEffectPosOverwriteEntity__GetRotation(ent, 0);
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ent;
          if ( !ent )
            goto LABEL_38;
          v27 = Rotation.fields.x;
          v28 = Rotation.fields.y;
          v29 = Rotation.fields.z;
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)AuraEffectPosOverwriteEntity__IsUseNodePositionOnly(
                                                                         ent,
                                                                         IsUseNodePositionOnly,
                                                                         0);
          IsUseNodePositionOnly = (char)EffectMaster;
        }
        if ( EffectObject )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                         EffectObject,
                                                                         0);
          if ( targetObject )
          {
            v34 = (UnityEngine_Transform_o *)EffectMaster;
            transform = UnityEngine_GameObject__get_transform(targetObject, 0);
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                           transform,
                                                                           NodeName,
                                                                           limitCount,
                                                                           v33 & 1,
                                                                           0);
            v36 = (UnityEngine_Component_o *)EffectMaster;
            if ( !IsUseNodePositionOnly )
              goto LABEL_30;
            if ( !EffectMaster )
              goto LABEL_38;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EffectMaster, 0);
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__HasParent(gameObject, 0);
            if ( ((unsigned __int8)EffectMaster & 1) != 0 )
            {
              v38 = UnityEngine_Component__get_gameObject(v36, 0);
              EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(v38, 0);
              if ( v34 )
              {
                UnityEngine_Transform__set_parent(v34, (UnityEngine_Transform_o *)EffectMaster, 0);
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v36, 0);
                v41 = localPosition.fields.x;
                v42 = localPosition.fields.y;
                v43 = localPosition.fields.z;
LABEL_34:
                v48.fields.x = x + v41;
                v48.fields.y = y + v42;
                v48.fields.z = z + v43;
                UnityEngine_Transform__set_localPosition(v34, v48, 0);
                v49.fields.x = v27;
                v49.fields.y = v28;
                v49.fields.z = v29;
                UnityEngine_Transform__set_eulerAngles(v34, v49, 0);
                if ( !byte_5969AE5 )
                {
                  sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                  byte_5969AE5 = 1;
                }
                UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                return EffectObject;
              }
            }
            else
            {
LABEL_30:
              if ( v34 )
              {
                UnityEngine_Transform__set_parent(v34, (UnityEngine_Transform_o *)v36, 0);
                if ( !byte_5969AE0 )
                {
                  sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                  byte_5969AE0 = 1;
                }
                v39 = UnityEngine_Vector3_TypeInfo->static_fields;
                v41 = v39->zeroVector.fields.x;
                v42 = v39->zeroVector.fields.y;
                v43 = v39->zeroVector.fields.z;
                goto LABEL_34;
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_2213CDC(EffectMaster, v23);
  }
  return EffectObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleEffectUtility__loadEffectToNode_53143324(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_597342E & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    byte_597342E = 1;
  }
  v12 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    v12 = BattleEffectUtility_TypeInfo;
  }
  return BattleEffectUtility__loadEffectToNode(
           targetObject,
           effectId,
           procObject,
           v12->static_fields->wkVec,
           svtId,
           limitCount,
           0,
           v6);
}


int32_t BattleEffectUtility__setBattleEffectId(int32_t inId, const MethodInfo *method)
{
  BattleEffectUtility_c *v3; // x0

  if ( (byte_5973429 & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    byte_5973429 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
    v3 = BattleEffectUtility_TypeInfo;
  }
  v3->static_fields->battleEffectId = inId;
  return inId;
}


void BattleEffectUtility__showSideEffect(
        UnityEngine_Transform_o *parent,
        int32_t effectId,
        UnityEngine_Vector3_o scl,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  BattleEffectUtility_c *v19; // x0
  System_String_o *SideEffectPath; // x0
  int32_t v21; // w1
  System_String_o *v22; // x19
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  __int64 v30; // x1

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_5973431 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&BattleEffectUtility_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_BattleEffectUtility___c__DisplayClass24_0__showSideEffect_b__0__);
    sub_2213A60(&BattleEffectUtility___c__DisplayClass24_0_TypeInfo);
    sub_2213A60(&StringLiteral_19695/*"ef_enchant"*/);
    byte_5973431 = 1;
  }
  v9 = sub_2213CCC(BattleEffectUtility___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 24) = parent;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)parent, v12, v13, v14, v15, v16, v17);
  v19 = BattleEffectUtility_TypeInfo;
  *(float *)(v9 + 32) = x;
  *(float *)(v9 + 36) = y;
  *(float *)(v9 + 40) = z;
  if ( !*(&v19->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v19, v18);
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v18);
  v21 = StringLiteral_19695/*"ef_enchant"*/;
  v22 = SideEffectPath;
  *(_QWORD *)(v9 + 16) = StringLiteral_19695/*"ef_enchant"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), v21, v23, v24, v25, v26, v27, v28);
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v9,
    Method_BattleEffectUtility___c__DisplayClass24_0__showSideEffect_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v30);
  AssetManager__loadAssetStorage(v22, v29, 1, 0, 0);
}


void BattleEffectUtility_BuffEffectLoadArgument___ctor(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        BattleActorControl_o *bActor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct BattleServantData_o *battleSvtData; // x8
  struct ChangeModelData_o *ChangeModelData_k__BackingField; // x1

  if ( (byte_597344C & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597344C = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0, 0);
  if ( v6 )
  {
    if ( !bActor )
      sub_2213CDC(v6, v7);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields,
      (int32_t)BuffEffectNodeName_k__BackingField,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    battleSvtData = bActor->fields.battleSvtData;
    if ( battleSvtData )
      ChangeModelData_k__BackingField = battleSvtData->fields._ChangeModelData_k__BackingField;
    else
      ChangeModelData_k__BackingField = 0;
    this->fields.ChangeModelData = ChangeModelData_k__BackingField;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.ChangeModelData,
      (int32_t)ChangeModelData_k__BackingField,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
}


bool BattleEffectUtility_BuffEffectLoadArgument__get_IsOverwriteParent(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(this->fields.effectNodeName, 0);
}


void BattleEffectUtility_EffectLoadArgument___ctor(
        BattleEffectUtility_EffectLoadArgument_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleEffectUtility_EffectLoadArgument__AddAuraPosOverwriteTarget(
        BattleEffectUtility_EffectLoadArgument_o *this,
        System_Collections_Generic_List_ValueTuple_int__int___o *targetList,
        const MethodInfo *method)
{
  struct ChangeModelData_o *ChangeModelData; // x8
  int32_t modelId; // w1
  __int64 v7; // x0
  System_ValueTuple_int__int__o v8; // x1
  struct System_ValueTuple_int__int__array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_ValueTuple_int__int__o item; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597344B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ValueTuple_int__int___Add__);
    sub_2213A60(&Method_System_ValueTuple_int__int___ctor__);
    byte_597344B = 1;
  }
  ChangeModelData = this->fields.ChangeModelData;
  if ( ChangeModelData )
  {
    modelId = ChangeModelData->fields.modelId;
    item = 0;
    System_ValueTuple_int__int____ctor(
      (System_ValueTuple_int__int__o)&item,
      modelId,
      0,
      (const MethodInfo_3CEDC64 *)Method_System_ValueTuple_int__int___ctor__);
    if ( !targetList
      || (items = targetList->fields._items,
          v8 = item,
          v10 = Method_System_Collections_Generic_List_ValueTuple_int__int___Add__,
          ++targetList->fields._version,
          !items) )
    {
      sub_2213CDC(v7, v8);
    }
    size = targetList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_int__int____AddWithResize(
        targetList,
        v8,
        *(const MethodInfo_43F2574 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      targetList->fields._size = size + 1;
      items->m_Items[size] = v8;
    }
  }
}


UnityEngine_Transform_o *BattleEffectUtility_EffectLoadArgument__GetParentNode(
        BattleEffectUtility_EffectLoadArgument_o *this,
        UnityEngine_GameObject_o *targetObj,
        UnityEngine_Transform_o *defParentTr,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x0

  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.effectNodeName, 0);
  if ( IsNullOrEmpty )
    return defParentTr;
  if ( !targetObj )
    sub_2213CDC(IsNullOrEmpty, v8);
  transform = UnityEngine_GameObject__get_transform(targetObj, 0);
  return TransformHelper__getNodeFromLvName(transform, this->fields.effectNodeName, -1, 0, 0);
}


System_String_o *BattleEffectUtility_EffectLoadArgument__GetParentNodeName(
        BattleEffectUtility_EffectLoadArgument_o *this,
        System_String_o *defNodeName,
        const MethodInfo *method)
{
  if ( this->fields.effectNodeName )
    return this->fields.effectNodeName;
  else
    return defNodeName;
}


void BattleEffectUtility___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597344D & 1) == 0 )
  {
    sub_2213A60(&BattleEffectUtility___c_TypeInfo);
    byte_597344D = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleEffectUtility___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleEffectUtility___c_TypeInfo->static_fields->__9 = (struct BattleEffectUtility___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleEffectUtility___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleEffectUtility___c___ctor(BattleEffectUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_ParticleSystem__o *BattleEffectUtility___c___SetColorToShadowEffectParticles_b__42_1(
        BattleEffectUtility___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_597344E & 1) == 0 )
  {
    this = (BattleEffectUtility___c_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____91783600);
    byte_597344E = 1;
  }
  if ( !x )
    sub_2213CDC(this, x);
  return (System_Collections_Generic_IEnumerable_ParticleSystem__o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       x,
                                                                       1,
                                                                       (const MethodInfo_38B79D0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____91783600);
}


void BattleEffectUtility___c__DisplayClass24_0___ctor(
        BattleEffectUtility___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleEffectUtility___c__DisplayClass24_0___showSideEffect_b__0(
        BattleEffectUtility___c__DisplayClass24_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleEffectUtility___c__DisplayClass24_0_o *v4; // x19
  __int64 v5; // x1
  Il2CppObject *Object_object__58532980; // x20
  BattleEffectUtility___c__DisplayClass24_0_o *v7; // x20

  v4 = this;
  if ( (byte_597344F & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleEffectUtility___c__DisplayClass24_0_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597344F = 1;
  }
  if ( !data )
    goto LABEL_11;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              data,
                              v4->fields.name,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  this = (BattleEffectUtility___c__DisplayClass24_0_o *)UnityEngine_Object__Instantiate_object_(
                                                          Object_object__58532980,
                                                          (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass24_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0)) == 0 )
  {
LABEL_11:
    sub_2213CDC(this, data);
  }
  v7 = this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v7,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v7, v4->fields.scl, 0);
}


void BattleEffectUtility___c__DisplayClass33_0___ctor(
        BattleEffectUtility___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleEffectUtility___c__DisplayClass33_0___LoadEffectAssetIfNotYet_b__0(
        BattleEffectUtility___c__DisplayClass33_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void BattleEffectUtility___c__DisplayClass33_0___LoadEffectAssetIfNotYet_b__1(
        BattleEffectUtility___c__DisplayClass33_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0);
}