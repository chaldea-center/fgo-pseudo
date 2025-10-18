void BattleEffectUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  BattleEffectUtility_c *v3; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v5; // x0
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  struct BattleEffectUtility_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C45A03 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_16325/*"_S"*/);
    sub_1C37058(&StringLiteral_16262/*"_M"*/);
    sub_1C37058(&StringLiteral_16255/*"_L"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C45A03 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  static_fields = BattleEffectUtility_TypeInfo->static_fields;
  static_fields->SendReportProbability = 1.0;
  *(_QWORD *)&static_fields->battleEffectId = 0;
  *(_QWORD *)&static_fields->wkVec.fields.y = 0;
  v5 = v3->static_fields;
  v5->auraPosOverwriteMst = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->auraPosOverwriteMst, 0, v1, v2);
  v6 = sub_1C37100(string___TypeInfo, 4);
  if ( !v6 )
    sub_1C372B4(0);
  v9 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_9;
  v10 = StringLiteral_1/*""*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 32), v10, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u
    || (v13 = StringLiteral_16325/*"_S"*/,
        *(_QWORD *)(v9 + 40) = StringLiteral_16325/*"_S"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), v13, v11, v12),
        *(_DWORD *)(v9 + 24) <= 2u)
    || (v16 = StringLiteral_16262/*"_M"*/,
        *(_QWORD *)(v9 + 48) = StringLiteral_16262/*"_M"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), v16, v14, v15),
        *(_DWORD *)(v9 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C372BC(v6);
  }
  v19 = StringLiteral_16255/*"_L"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_16255/*"_L"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 56), v19, v17, v18);
  v20 = BattleEffectUtility_TypeInfo->static_fields;
  v20->scalelist = (struct System_String_array *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&v20->scalelist, v9, v21, v22);
}


void BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  BattleEffectUtility_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0

  if ( (byte_4C459F7 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4C459F7 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_1C372B4(0);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void BattleEffectUtility__AddRelatedFunctionEffectIdList(
        System_Int32_array *funcIds,
        System_Collections_Generic_List_int__o **effectIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  unsigned __int64 v8; // x24
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v10; // x22
  unsigned __int64 v11; // x28
  int32_t v12; // w23
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10

  if ( (byte_4C459F2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C37058(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C459F2 = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_1C372B4(Instance);
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_FunctionMaster___);
    max_length = funcIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= (unsigned int)max_length )
          goto LABEL_25;
        if ( !v7 )
          goto LABEL_24;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v7,
                                      funcIds->m_Items[v8],
                                      (const MethodInfo_33A10A0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_24;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v10 = Instance;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
LABEL_22:
        LODWORD(max_length) = funcIds->max_length;
        if ( (__int64)++v8 >= (int)max_length )
          return;
      }
      v11 = 0;
      while ( v11 < (unsigned int)m_CancellationTokenSource )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_24;
        v12 = *((_DWORD *)&v10->fields._DispLog + v11);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v12,
                                      (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_24;
          m_CachedPtr = Instance->fields.m_CachedPtr;
          v14 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_24;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Instance,
              v12,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = v12;
          }
        }
        LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
        if ( (__int64)++v11 >= (int)m_CancellationTokenSource )
          goto LABEL_22;
      }
LABEL_25:
      sub_1C372BC(Instance);
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
  BattleServantData_o *v10; // x22
  float v11; // s8
  int32_t v12; // w22
  System_Collections_Generic_List_object__o *v13; // x20
  float a; // s9
  float v15; // s13
  float v16; // s14
  float v17; // s15
  float b; // s12
  float g; // s11
  float r; // s10
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  BattleServantData_o *v23; // x23
  int32_t v24; // w1
  __int64 v25; // x8
  unsigned __int64 v26; // x27
  System_String_o *v27; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x26
  BattleServantData_o *v30; // x25
  BattleServantData_o *v31; // x26
  BattleServantData_o *v32; // x26
  BattleServantData_o *v33; // x26
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  BattleDataDefine_c *v40; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  const MethodInfo *v42; // x2
  NpcServantDisplayTypeDetailEntity_o *v43; // x22
  __int64 v44; // x8
  BattleServantData_o *v45; // x21
  unsigned __int64 v46; // x24
  UnityEngine_Object_o *v47; // x22
  int32_t uniqueId; // w8
  BattleServantData_o *v49; // x22
  unsigned int v50; // w28
  BattleServantData_c **v51; // x8
  UnityEngine_Material_o *v52; // x23
  __int64 v53; // x8
  BattleServantData_o *v54; // x19
  unsigned __int64 v55; // x23
  UnityEngine_Object_o *v56; // x21
  int32_t v57; // w8
  BattleServantData_o *v58; // x21
  unsigned int v59; // w27
  BattleServantData_c **v60; // x8
  UnityEngine_Material_o *v61; // x22
  System_Nullable_Color__o v63; // [xsp+10h] [xbp-C0h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Color_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = svtData;
  if ( (byte_4C459FE & 1) == 0 )
  {
    sub_1C37058(&BattleDataDefine_TypeInfo);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_18988/*"en_waist"*/);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    svtData = (BattleServantData_o *)sub_1C37058(&StringLiteral_16121/*"_AddColor"*/);
    byte_4C459FE = 1;
  }
  v11 = 0.0;
  entity = 0;
  if ( !isShadow )
  {
    v13 = 0;
    a = 1.0;
    v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
    b = 1.0;
    g = 1.0;
    r = 1.0;
    if ( !isChoco )
      goto LABEL_59;
    goto LABEL_56;
  }
  if ( !v10 )
    goto LABEL_95;
  BattleServantData__TryGetDisplayTypeDetailEntity(v10, &entity, 0);
  v12 = entity ? entity->fields.effectId : 0;
  svtData = (BattleServantData_o *)sub_1C37100(string___TypeInfo, 1);
  if ( !svtData )
    goto LABEL_95;
  v23 = svtData;
  if ( !svtData->fields.uniqueId )
    goto LABEL_96;
  v24 = StringLiteral_18988/*"en_waist"*/;
  svtData->fields.userSvtId.fields.currentCryptoKey = StringLiteral_18988/*"en_waist"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&svtData->fields.userSvtId, v24, v21, v22);
  if ( limitAddEntity )
  {
    svtData = (BattleServantData_o *)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(limitAddEntity, 0);
    v23 = svtData;
    if ( !svtData )
      goto LABEL_95;
  }
  v25 = *(_QWORD *)&v23->fields.uniqueId;
  if ( (int)v25 >= 1 )
  {
    v13 = 0;
    v26 = 0;
    while ( v26 < (unsigned int)v25 )
    {
      if ( !actorObj )
        goto LABEL_95;
      v27 = (System_String_o *)*(&v23->fields.userSvtId.fields.currentCryptoKey + v26);
      transform = UnityEngine_GameObject__get_transform(actorObj, 0);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v27, 0, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0, 0);
      if ( ((unsigned __int8)svtData & 1) != 0 )
      {
        svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !svtData )
          goto LABEL_95;
        svtData = (BattleServantData_o *)ServantAssetLoadManager__createShadowEffect(
                                           (ServantAssetLoadManager_o *)svtData,
                                           0,
                                           v12,
                                           0);
        if ( !svtData )
          goto LABEL_95;
        v30 = svtData;
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtData, 0);
        if ( !svtData )
          goto LABEL_95;
        UnityEngine_Transform__set_parent(
          (UnityEngine_Transform_o *)svtData,
          (UnityEngine_Transform_o *)NodeFromName,
          0);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
        v31 = svtData;
        if ( !byte_4C3C921 )
        {
          svtData = (BattleServantData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        if ( !v31 )
          goto LABEL_95;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v31,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
        v32 = svtData;
        if ( !byte_4C3C921 )
        {
          svtData = (BattleServantData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        if ( !v32 )
          goto LABEL_95;
        UnityEngine_Transform__set_localEulerAngles(
          (UnityEngine_Transform_o *)v32,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0);
        v33 = svtData;
        if ( !byte_4C3C926 )
        {
          svtData = (BattleServantData_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C926 = 1;
        }
        if ( !v33 )
          goto LABEL_95;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v33,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0);
        if ( !v13 )
        {
          v13 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v13,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( !v13 )
            goto LABEL_95;
        }
        items = v13->fields._items;
        v37 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_95;
        size = v13->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v30,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v39[4] = (Il2CppClass *)v30;
          sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v30, v34, v35);
        }
      }
      LODWORD(v25) = v23->fields.uniqueId;
      if ( (__int64)++v26 >= (int)v25 )
        goto LABEL_42;
    }
LABEL_96:
    sub_1C372BC(svtData);
  }
  v13 = 0;
LABEL_42:
  v40 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v40 = BattleDataDefine_TypeInfo;
  }
  p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v40->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
  svtData = (BattleServantData_o *)entity;
  r = p_OVERWRITE_ATK_RATE_PRIORITY[14];
  g = p_OVERWRITE_ATK_RATE_PRIORITY[15];
  b = p_OVERWRITE_ATK_RATE_PRIORITY[16];
  a = p_OVERWRITE_ATK_RATE_PRIORITY[17];
  if ( !entity )
  {
    v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
    if ( !isChoco )
      goto LABEL_59;
LABEL_56:
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__changeChocoSahder(actorObj, 0);
    goto LABEL_59;
  }
  NpcServantDisplayTypeDetailEntity__get_MainColor(&v63, entity, 0);
  if ( v63.fields.hasValue )
  {
    r = v63.fields.value.fields.r;
    g = v63.fields.value.fields.g;
    b = v63.fields.value.fields.b;
    a = v63.fields.value.fields.a;
  }
  svtData = (BattleServantData_o *)entity;
  if ( !entity )
    goto LABEL_95;
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v63, entity, 0);
  if ( v63.fields.hasValue )
  {
    v17 = v63.fields.value.fields.r;
    v16 = v63.fields.value.fields.g;
    v15 = v63.fields.value.fields.b;
    v11 = v63.fields.value.fields.a;
  }
  else
  {
    v11 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
  }
  v43 = entity;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetColorToShadowEffectParticles((System_Collections_Generic_List_GameObject__o *)v13, v43, v42);
  if ( isChoco )
    goto LABEL_56;
LABEL_59:
  if ( !actorObj )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0);
  if ( !svtData )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( svtData )
  {
    v44 = *(_QWORD *)&svtData->fields.uniqueId;
    v45 = svtData;
    if ( (int)v44 >= 1 )
    {
      v46 = 0;
      while ( 1 )
      {
        if ( v46 >= (unsigned int)v44 )
          goto LABEL_96;
        v47 = (UnityEngine_Object_o *)*(&v45->fields.userSvtId.fields.currentCryptoKey + v46);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v47, 0, 0);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v47 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v47, 0);
          if ( !svtData )
            goto LABEL_95;
          uniqueId = svtData->fields.uniqueId;
          v49 = svtData;
          if ( uniqueId >= 1 )
            break;
        }
LABEL_75:
        LODWORD(v44) = v45->fields.uniqueId;
        if ( (__int64)++v46 >= (int)v44 )
          goto LABEL_76;
      }
      v50 = 0;
      while ( v50 < uniqueId )
      {
        v51 = &v49->klass + (int)v50;
        v52 = (UnityEngine_Material_o *)v51[4];
        if ( !v52 )
          goto LABEL_95;
        v65.fields.r = r;
        v65.fields.g = g;
        v65.fields.b = b;
        v65.fields.a = a;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v51[4], (System_String_o *)StringLiteral_16173/*"_Color"*/, v65, 0);
        v66.fields.r = v17;
        v66.fields.g = v16;
        v66.fields.b = v15;
        v66.fields.a = v11;
        UnityEngine_Material__SetColor(v52, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, v66, 0);
        uniqueId = v49->fields.uniqueId;
        if ( (int)++v50 >= uniqueId )
          goto LABEL_75;
      }
      goto LABEL_96;
    }
  }
LABEL_76:
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0);
  if ( !svtData )
LABEL_95:
    sub_1C372B4(svtData);
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__51245264(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_30DF0D0 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( svtData )
  {
    v53 = *(_QWORD *)&svtData->fields.uniqueId;
    v54 = svtData;
    if ( (int)v53 >= 1 )
    {
      v55 = 0;
      while ( 1 )
      {
        if ( v55 >= (unsigned int)v53 )
          goto LABEL_96;
        v56 = (UnityEngine_Object_o *)*(&v54->fields.userSvtId.fields.currentCryptoKey + v55);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v56, 0, 0);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v56 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v56, 0);
          if ( !svtData )
            goto LABEL_95;
          v57 = svtData->fields.uniqueId;
          v58 = svtData;
          if ( v57 >= 1 )
            break;
        }
LABEL_91:
        LODWORD(v53) = v54->fields.uniqueId;
        if ( (__int64)++v55 >= (int)v53 )
          goto LABEL_92;
      }
      v59 = 0;
      while ( v59 < v57 )
      {
        v60 = &v58->klass + (int)v59;
        v61 = (UnityEngine_Material_o *)v60[4];
        if ( !v61 )
          goto LABEL_95;
        v67.fields.r = r;
        v67.fields.g = g;
        v67.fields.b = b;
        v67.fields.a = a;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v60[4], (System_String_o *)StringLiteral_16173/*"_Color"*/, v67, 0);
        v68.fields.r = v17;
        v68.fields.g = v16;
        v68.fields.b = v15;
        v68.fields.a = v11;
        UnityEngine_Material__SetColor(v61, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, v68, 0);
        v57 = v58->fields.uniqueId;
        if ( (int)++v59 >= v57 )
          goto LABEL_91;
      }
      goto LABEL_96;
    }
  }
LABEL_92:
  if ( v13 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                             v13,
                                             (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0;
}


void BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0

  if ( (byte_4C459F8 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_4C459F8 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v1);
  if ( !NotPreloadEffectIdHashSet )
    sub_1C372B4(0);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_365411C *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


UnityEngine_GameObject_array *BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
        System_Collections_Generic_IEnumerable_Transform__o *nodeEnumerable,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
        const MethodInfo *method)
{
  int32_t effectId; // w22
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x0
  System_Collections_Generic_IEnumerable_Transform__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x21
  __int64 v13; // x8
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  UnityEngine_Transform_o *v21; // x24
  Il2CppObject *Instance; // x0
  UnityEngine_GameObject_o *ShadowEffect; // x0
  UnityEngine_GameObject_o *v24; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  const MethodInfo *v37; // x2

  if ( (byte_4C459FF & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C459FF = 1;
  }
  if ( displayTypeDetailEntity )
    effectId = displayTypeDetailEntity->fields.effectId;
  else
    effectId = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !nodeEnumerable )
    goto LABEL_50;
  klass = nodeEnumerable->klass;
  v9 = *(unsigned __int16 *)&nodeEnumerable->klass->_2.rank;
  if ( *(_WORD *)&nodeEnumerable->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_11;
    }
    v11 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_11:
    v11 = sub_1C87870(nodeEnumerable, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v12 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_Transform__o *, _QWORD))v11)(
          nodeEnumerable,
          *(_QWORD *)(v11 + 8));
  if ( !v12 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v13 = *(_QWORD *)v12;
    v14 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v15 = (int *)(*(_QWORD *)(v13 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 4;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = v13 + 16LL * *v15 + 312;
    }
    else
    {
LABEL_18:
      v16 = sub_1C87870(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v12, *(_QWORD *)(v16 + 8)) & 1) == 0 )
      break;
    v17 = *(_QWORD *)v12;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v19 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_25;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_25:
      v20 = sub_1C87870(v12, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v21 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)Instance, 0, effectId, 0);
    v24 = ShadowEffect;
    if ( !ShadowEffect )
      sub_1C372B4(0);
    transform = UnityEngine_GameObject__get_transform(ShadowEffect, 0);
    if ( !transform )
      sub_1C372B4(0);
    UnityEngine_Transform__SetParent(transform, v21, 0);
    GameObjectExtensions__ResetTransform(v24, 0);
    if ( !v6 )
      sub_1C372B4(v26);
    items = v6->fields._items;
    v30 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v6->fields._version;
    if ( !items )
      sub_1C372B4(v26);
    size = v6->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        (Il2CppObject *)v24,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
    }
    else
    {
      v32 = &items->obj.klass + size;
      v6->fields._size = size + 1;
      v32[4] = (Il2CppClass *)v24;
      sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v24, v27, v28);
    }
  }
  v33 = *(_QWORD *)v12;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_39;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_39:
    v36 = sub_1C87870(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v12, *(_QWORD *)(v36 + 8));
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetColorToShadowEffectParticles(
    (System_Collections_Generic_List_GameObject__o *)v6,
    displayTypeDetailEntity,
    v37);
  if ( !v6 )
LABEL_50:
    sub_1C372B4(v7);
  return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                           v6,
                                           (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
}


void BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  int32_t IndexOf_63621796; // w0
  int32_t v8; // w22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  System_String_o **v17; // x0
  System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  v6 = baseName;
  if ( (byte_4C459F4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1048/*"/"*/);
    baseName = (System_String_o *)sub_1C37058(&StringLiteral_5853/*"Effect/BattleCommon/{0}"*/);
    byte_4C459F4 = 1;
  }
  if ( !v6 )
    sub_1C372B4(baseName);
  IndexOf_63621796 = System_String__LastIndexOf_63621796(v6, (System_String_o *)StringLiteral_1048/*"/"*/, 0);
  if ( IndexOf_63621796 == -1 )
  {
    v18 = System_String__Format((System_String_o *)StringLiteral_5853/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0);
    *path = v18;
    sub_1C36FFC((CGThumbnailListItem_o *)path, (int32_t)v18, v19, v20);
    v17 = name;
    v16 = (int)v6;
    *name = v6;
  }
  else
  {
    v8 = IndexOf_63621796;
    v9 = (Il2CppObject *)System_String__Substring_63607580(v6, 0, IndexOf_63621796, 0);
    v10 = System_String__Format((System_String_o *)StringLiteral_5853/*"Effect/BattleCommon/{0}"*/, v9, 0);
    *path = v10;
    sub_1C36FFC((CGThumbnailListItem_o *)path, (int32_t)v10, v11, v12);
    v13 = System_String__Substring(v6, v8 + 1, 0);
    v16 = (int)v13;
    *name = v13;
    v17 = name;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)v17, v16, v14, v15);
}


System_String_array *BattleEffectUtility__GetBattleCommonEffectPathList(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x23
  const MethodInfo *v8; // x3
  System_String_o *monitor; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4C459F3 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C459F3 = 1;
  }
  path = 0;
  name = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EffectMaster___);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_22;
  max_length = effectIdList->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C372BC(Instance);
      if ( !MasterData_object )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   effectIdList->m_Items[v7],
                   (const MethodInfo_33A10A0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && HIDWORD(Instance[1].klass) == 5 )
      {
        monitor = (System_String_o *)Instance[2].monitor;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, v8);
        if ( !v5 )
          break;
        Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                     v5,
                                     (Il2CppObject *)path,
                                     (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v12 = (Il2CppObject *)path;
          items = v5->fields._items;
          v14 = Method_System_Collections_Generic_List_string__Add__;
          ++v5->fields._version;
          if ( !items )
            break;
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v12,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v12;
            sub_1C36FFC((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
          }
        }
      }
      LODWORD(max_length) = effectIdList->max_length;
      if ( (__int64)++v7 >= (int)max_length )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C372B4(Instance);
  }
LABEL_20:
  if ( !v5 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *BattleEffectUtility__GetEffectSeName(int32_t effectId, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_String_o *result; // x0
  System_String_o *v5; // x19
  bool isSe; // w8

  if ( (byte_4C459FC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    byte_4C459FC = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  result = (System_String_o *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                effectId,
                                (const MethodInfo_33A10A0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( result )
  {
    v5 = result;
    isSe = EffectEntity__isSe((EffectEntity_o *)result, 0);
    result = 0;
    if ( isSe )
      return (System_String_o *)v5[1].monitor;
  }
  return result;
}


System_String_o *BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C459EF & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&StringLiteral_5890/*"Effect/SideEffect/"*/);
    byte_4C459EF = 1;
  }
  v11 = effectId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
  return System_String__Concat((Il2CppObject *)StringLiteral_5890/*"Effect/SideEffect/"*/, v9, 0);
}


bool BattleEffectUtility__IsEffectNotLoadedYet(
        int32_t effectId,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleEffectUtility_c *v6; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C459F6 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C459F6 = 1;
  }
  name = 0;
  *effectPath = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)effectPath, 0, (int32_t)method, v3);
  if ( effectId < 1 )
    goto LABEL_13;
  v6 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v6);
  if ( !EffectMaster )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v9);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0) )
    {
LABEL_13:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0);
      return (unsigned __int8)Entity & 1;
    }
LABEL_17:
    sub_1C372B4(EffectMaster);
  }
  return (unsigned __int8)Entity & 1;
}


void BattleEffectUtility__LoadEffectAssetIfNotYet(
        int32_t effectId,
        System_Action_o *finishCallback,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v7; // x21
  CrashReporter_o *SentEffectIdHashSet; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  BattleEffectUtility_c *v12; // x0
  BattleEffectUtility_c *v13; // x0
  BattleEffectUtility_c *v14; // x0
  float SendReportProbability; // s8
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x23
  BattleEffectUtility_c *v24; // x0
  BattleDataDefine_c *v25; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v28; // x23
  AssetLoader_LoadEndDataHandler_o *v29; // x24
  System_String_o *v30; // x19
  AssetLoader_LoadEndDataHandler_o *v31; // x23
  int32_t v32; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *effectPath; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C459F9 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&BattleDataDefine_TypeInfo);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C37058(&Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__0__);
    sub_1C37058(&Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__1__);
    sub_1C37058(&BattleEffectUtility___c__DisplayClass33_0_TypeInfo);
    sub_1C37058(&StringLiteral_22264/*"non-loaded asset was detected. effectId = {0}"*/);
    byte_4C459F9 = 1;
  }
  effectPath = 0;
  v7 = sub_1C372A4(BattleEffectUtility___c__DisplayClass33_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass33_0___ctor((BattleEffectUtility___c__DisplayClass33_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_37;
  *(_QWORD *)(v7 + 16) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)finishCallback, v9, v10);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v11) )
    goto LABEL_35;
  v12 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v12);
  if ( !SentEffectIdHashSet )
    goto LABEL_37;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v13 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v13);
    if ( !SentEffectIdHashSet )
      goto LABEL_37;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v14 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v14 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v14->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0) <= SendReportProbability )
      {
        v32 = effectId;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v16, v17, v18, v19, v20, v21);
        v23 = System_String__Format((System_String_o *)StringLiteral_22264/*"non-loaded asset was detected. effectId = {0}"*/, v22, 0);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        CrashReporter__SendReport_31091192(SentEffectIdHashSet, v23, 0, 0, 0);
        v24 = BattleEffectUtility_TypeInfo;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v24);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v25 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v25 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v25->static_fields->ASSET_PARALLEL_LOAD_MAX;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0, 0);
  if ( ((unsigned __int8)SentEffectIdHashSet & 1) != 0 )
  {
    if ( perf )
    {
      assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField;
      v28 = effectPath;
      v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v29,
        (Il2CppObject *)v7,
        Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__0__,
        0);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v28,
               v29,
               ASSET_PARALLEL_LOAD_MAX,
               0) )
        {
          return;
        }
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1C372B4(SentEffectIdHashSet);
  }
  v30 = effectPath;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__1__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v30, v31, ASSET_PARALLEL_LOAD_MAX, 0) )
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BattleEffectUtility___c_c *v8; // x0
  System_Func_object__object__o *_9__42_1; // x20
  Il2CppObject *v10; // x21
  struct BattleEffectUtility___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x19
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_ParticleSystem_o *v30; // x20
  UnityEngine_Object_o *gameObject; // x0
  const MethodInfo *v32; // x2
  System_String_o *name; // x21
  UnityEngine_ParticleSystem_MainModule_o v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v39; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v40; // [xsp+38h] [xbp-C8h] BYREF
  System_Nullable_Color__o v41; // [xsp+70h] [xbp-90h] BYREF
  BattleEffectUtility___c__DisplayClass42_0_o v42; // [xsp+90h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+B8h] [xbp-48h] BYREF
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C45A00 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___);
    sub_1C37058(&System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_Color__get_Value__);
    sub_1C37058(&Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__42_1__);
    sub_1C37058(&BattleEffectUtility___c_TypeInfo);
    byte_4C45A00 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  memset(&v42, 0, sizeof(v42));
  m_ParticleSystem = 0;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)objectList, 0);
  if ( displayTypeDetailEntity )
  {
    if ( !IsNullOrEmpty )
    {
      NpcServantDisplayTypeDetailEntity__get_EffectColor((System_Nullable_Color__o *)&v40, displayTypeDetailEntity, 0);
      *(_OWORD *)&v42.fields.effectColor.fields.hasValue = *(_OWORD *)&v40.fields.m_Mode;
      v42.fields.effectColor.fields.value.fields.a = *(float *)&v40.fields.m_GradientMax;
      v42.fields.effectColorDetailDict = NpcServantDisplayTypeDetailEntity__GetEffectColorDetailDict(
                                           displayTypeDetailEntity,
                                           0);
      sub_1C36FFC((CGThumbnailListItem_o *)&v42, (int32_t)v42.fields.effectColorDetailDict, v6, v7);
      if ( v42.fields.effectColor.fields.hasValue || v42.fields.effectColorDetailDict )
      {
        v8 = BattleEffectUtility___c_TypeInfo;
        if ( !BattleEffectUtility___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility___c_TypeInfo);
          v8 = BattleEffectUtility___c_TypeInfo;
        }
        _9__42_1 = (System_Func_object__object__o *)v8->static_fields->__9__42_1;
        if ( !_9__42_1 )
        {
          if ( !v8->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v8);
            v8 = BattleEffectUtility___c_TypeInfo;
          }
          v10 = (Il2CppObject *)v8->static_fields->__9;
          _9__42_1 = (System_Func_object__object__o *)sub_1C372A4(System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo);
          System_Func_object__object____ctor(
            _9__42_1,
            v10,
            Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__42_1__,
            0);
          static_fields = BattleEffectUtility___c_TypeInfo->static_fields;
          static_fields->__9__42_1 = (struct System_Func_GameObject__IEnumerable_ParticleSystem___o *)_9__42_1;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__42_1, (int32_t)_9__42_1, v12, v13);
        }
        v14 = System_Linq_Enumerable__SelectMany_object__object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__42_1,
                (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___);
        if ( !v14 )
          sub_1C372B4(0);
        klass = v14->klass;
        v16 = v14;
        v17 = *(unsigned __int16 *)&v14->klass->_2.rank;
        if ( *(_WORD *)&v14->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
          {
            --v17;
            p_offset += 4;
            if ( !v17 )
              goto LABEL_18;
          }
          v19 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_18:
          v19 = sub_1C87870(v14, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0);
        }
        v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v19)(
                v16,
                *(_QWORD *)(v19 + 8));
        if ( !v20 )
          sub_1C372B4(0);
        while ( 1 )
        {
          v21 = *(_QWORD *)v20;
          v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
          {
            v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v22;
              v23 += 4;
              if ( !v22 )
                goto LABEL_25;
            }
            v24 = v21 + 16LL * *v23 + 312;
          }
          else
          {
LABEL_25:
            v24 = sub_1C87870(v20, System_Collections_IEnumerator_TypeInfo, 0);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
            break;
          v25 = *(_QWORD *)v20;
          v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
          {
            v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v27 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
            {
              --v26;
              v27 += 4;
              if ( !v26 )
                goto LABEL_32;
            }
            v28 = v25 + 16LL * *v27 + 312;
          }
          else
          {
LABEL_32:
            v28 = sub_1C87870(v20, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0);
          }
          v29 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
          v30 = (UnityEngine_ParticleSystem_o *)v29;
          if ( !v29 )
            sub_1C372B4(0);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v29, 0);
          if ( !gameObject )
            sub_1C372B4(0);
          name = UnityEngine_Object__get_name(gameObject, 0);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_42_0(
            (System_Nullable_Color__o *)&v40,
            name,
            &v42,
            v32);
          *(_OWORD *)&v41.fields.hasValue = *(_OWORD *)&v40.fields.m_Mode;
          v41.fields.value.fields.a = *(float *)&v40.fields.m_GradientMax;
          if ( LOBYTE(v40.fields.m_Mode) )
          {
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v30, 0).fields.m_ParticleSystem;
            Value = System_Nullable_Color___get_Value(
                      &v41,
                      (const MethodInfo_38C5CFC *)Method_System_Nullable_Color__get_Value__);
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v40, Value, 0);
            v39 = v40;
            v34.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v34, &v39, 0);
          }
        }
        v35 = *(_QWORD *)v20;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_44;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_44:
          v38 = sub_1C87870(v20, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v38)(v20, *(_QWORD *)(v38 + 8));
      }
    }
  }
}


void BattleEffectUtility__SetEffectParent(
        UnityEngine_GameObject_o *effectObj,
        int32_t effectId,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  System_String_o *v8; // x21
  UnityEngine_Transform_o *v9; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C459EE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_4C459EE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          effectId,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EffectEntity__getNodeName(
                                                                        (EffectEntity_o *)entity,
                                                                        0),
        !effectObj)
    || (v8 = (System_String_o *)Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                        effectObj,
                                                                        0),
        !targetObj)
    || (v9 = (UnityEngine_Transform_o *)Master_object,
        transform = UnityEngine_GameObject__get_transform(targetObj, 0),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                        transform,
                                                                        v8,
                                                                        -1,
                                                                        0,
                                                                        0),
        !v9) )
  {
LABEL_19:
    sub_1C372B4(Master_object);
  }
  UnityEngine_Transform__set_parent(v9, (UnityEngine_Transform_o *)Master_object, 0);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  UnityEngine_Transform__set_localPosition(v9, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  if ( !byte_4C3C929 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C929 = 1;
  }
  UnityEngine_Transform__set_eulerAngles(v9, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  if ( !byte_4C3C926 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C926 = 1;
  }
  UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
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
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x19
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  UnityEngine_Material_o *v30; // x0
  UnityEngine_Material_o *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  System_Nullable_Color__o v36; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C45A01 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_ExcludeNull_Material___);
    sub_1C37058(&BattleDataDefine_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_Material__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_Material__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C37058(&StringLiteral_16173/*"_Color"*/);
    sub_1C37058(&StringLiteral_16121/*"_AddColor"*/);
    byte_4C45A01 = 1;
  }
  if ( displayTypeDetailEntity
    && (NpcServantDisplayTypeDetailEntity__get_MainColor(&v36, displayTypeDetailEntity, 0), v36.fields.hasValue) )
  {
    r = v36.fields.value.fields.r;
    g = v36.fields.value.fields.g;
    b = v36.fields.value.fields.b;
    a = v36.fields.value.fields.a;
  }
  else
  {
    v9 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
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
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v36, displayTypeDetailEntity, 0);
  if ( v36.fields.hasValue )
  {
    v11 = v36.fields.value.fields.r;
    v12 = v36.fields.value.fields.g;
    v13 = v36.fields.value.fields.b;
    v14 = v36.fields.value.fields.a;
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
          (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_Material___);
  if ( !v15 )
    sub_1C372B4(0);
  klass = v15->klass;
  v17 = v15;
  v18 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Material__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_17;
    }
    v20 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_17:
    v20 = sub_1C87870(v15, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))v20)(
          v17,
          *(_QWORD *)(v20 + 8));
  if ( !v21 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_24;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_24:
      v25 = sub_1C87870(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Material__c **)v28 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_31;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_31:
      v29 = sub_1C87870(v21, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0);
    }
    v30 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    v31 = v30;
    if ( !v30 )
      sub_1C372B4(0);
    v37.fields.r = r;
    v37.fields.g = g;
    v37.fields.b = b;
    v37.fields.a = a;
    UnityEngine_Material__SetColor(v30, (System_String_o *)StringLiteral_16173/*"_Color"*/, v37, 0);
    v38.fields.r = v11;
    v38.fields.g = v12;
    v38.fields.b = v13;
    v38.fields.a = v14;
    UnityEngine_Material__SetColor(v31, (System_String_o *)StringLiteral_16121/*"_AddColor"*/, v38, 0);
  }
  v32 = *(_QWORD *)v21;
  v33 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_39;
    }
    v35 = v32 + 16LL * *v34 + 312;
  }
  else
  {
LABEL_39:
    v35 = sub_1C87870(v21, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v35)(v21, *(_QWORD *)(v35 + 8));
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
  BattleEffectUtility_c *v11; // x0
  Il2CppObject *Master_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleEffectUtility_c *v15; // x8
  Il2CppObject *v16; // x24
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  System_Collections_Generic_List_ValueTuple_int__int___o *v18; // x24
  System_ValueTuple_int__int__o p_item; // x0
  __int64 v20; // x0
  System_ValueTuple_int__int__o v21; // x1
  struct System_ValueTuple_int__int__array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  bool v25; // w21
  BattleEffectUtility_c *v26; // x0
  int32_t current_high; // w22
  int32_t current; // w23
  AuraEffectPosOverwriteMaster_o *auraPosOverwriteMst; // x0
  int v30; // w19
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_int__int__o item; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4C459EC & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_int__int___Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_int__int___GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_int__int____ctor__);
    sub_1C37058(&System_Collections_Generic_List_ValueTuple_int__int___TypeInfo);
    sub_1C37058(&Method_System_ValueTuple_int__int___ctor__);
    byte_4C459EC = 1;
  }
  v11 = BattleEffectUtility_TypeInfo;
  memset(&v33, 0, sizeof(v33));
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v11 = BattleEffectUtility_TypeInfo;
  }
  if ( !v11->static_fields->auraPosOverwriteMst )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
    v15 = BattleEffectUtility_TypeInfo;
    v16 = Master_object;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v15 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v16;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->auraPosOverwriteMst, (int32_t)v16, v13, v14);
  }
  *ent = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)ent, 0, svtId, *(const MethodInfo **)&limitCount);
  v18 = (System_Collections_Generic_List_ValueTuple_int__int___o *)sub_1C372A4(System_Collections_Generic_List_ValueTuple_int__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int_____ctor(
    v18,
    (const MethodInfo_374A13C *)Method_System_Collections_Generic_List_ValueTuple_int__int____ctor__);
  if ( arg )
    ((void (__fastcall *)(BattleEffectUtility_EffectLoadArgument_o *, System_Collections_Generic_List_ValueTuple_int__int___o *, const MethodInfo *))arg->klass->vtable._6_AddAuraPosOverwriteTarget.methodPtr)(
      arg,
      v18,
      arg->klass->vtable._6_AddAuraPosOverwriteTarget.method);
  p_item = (System_ValueTuple_int__int__o)&item;
  item = 0;
  System_ValueTuple_int__int____ctor(
    p_item,
    svtId,
    limitCount,
    (const MethodInfo_3AFCC28 *)Method_System_ValueTuple_int__int___ctor__);
  if ( !v18
    || (v21 = item,
        items = v18->fields._items,
        v23 = Method_System_Collections_Generic_List_ValueTuple_int__int___Add__,
        ++v18->fields._version,
        !items) )
  {
    sub_1C372B4(v20);
  }
  size = v18->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_int__int____AddWithResize(
      v18,
      v21,
      *(const MethodInfo_374A990 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v18->fields._size = size + 1;
    items->m_Items[size] = v21;
  }
  System_Collections_Generic_List_ValueTuple_int__int____GetEnumerator(
    &v32,
    v18,
    (const MethodInfo_374B464 *)Method_System_Collections_Generic_List_ValueTuple_int__int___GetEnumerator__);
  v33 = v32;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_ValueTuple_int__int____MoveNext(
            &v33,
            (const MethodInfo_35242E4 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___MoveNext__);
    if ( !v25 )
      break;
    v26 = BattleEffectUtility_TypeInfo;
    current = (int32_t)v33.fields._current;
    current_high = HIDWORD(v33.fields._current);
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v26 = BattleEffectUtility_TypeInfo;
    }
    auraPosOverwriteMst = v26->static_fields->auraPosOverwriteMst;
    if ( !auraPosOverwriteMst )
      sub_1C372B4(0);
    if ( AuraEffectPosOverwriteMaster__TryGetEntity(auraPosOverwriteMst, ent, auraEffectId, current, current_high, 0) )
    {
      v30 = 6;
      goto LABEL_26;
    }
  }
  v30 = 7;
LABEL_26:
  System_Collections_Generic_List_Enumerator_ValueTuple_int__int____Dispose(
    &v33,
    (const MethodInfo_35242E0 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___Dispose__);
  return v25 && v30 == 6;
}


bool BattleEffectUtility__TryGetBattleCommonEffectPath(
        System_String_o **effectPath,
        int32_t effectId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleEffectUtility_c *v6; // x0
  EffectMaster_o *EffectMaster; // x0
  const MethodInfo *v8; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C459F5 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_4C459F5 = 1;
  }
  entity = 0;
  name = 0;
  *effectPath = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)effectPath, 0, (int32_t)method, v3);
  v6 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v6);
  if ( !EffectMaster )
    goto LABEL_15;
  EffectMaster = (EffectMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_33A10EC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_1C372B4(EffectMaster);
  if ( HIDWORD(entity[1].klass) == 5 )
  {
    monitor = (System_String_o *)entity[2].monitor;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v8);
  }
  return !System_String__IsNullOrEmpty(*effectPath, 0);
}


System_Nullable_Color__o *BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_42_0(
        System_Nullable_Color__o *__return_ptr retstr,
        System_String_o *objectName,
        BattleEffectUtility___c__DisplayClass42_0_o *a3,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  float a; // w8
  __int128 v9; // q0
  System_Nullable_Color__o v10; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Color__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C45A04 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_GetValue_string__Nullable_Color____);
    byte_4C45A04 = 1;
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
               (const MethodInfo_30D5C38 *)Method_BasicHelper_GetValue_string__Nullable_Color____);
    a = v10.fields.value.fields.a;
    v9 = *(_OWORD *)&v10.fields.hasValue;
  }
  else
  {
    a = a3->fields.effectColor.fields.value.fields.a;
    v9 = *(_OWORD *)&a3->fields.effectColor.fields.hasValue;
  }
  retstr->fields.value.fields.a = a;
  *(_OWORD *)&retstr->fields.hasValue = v9;
  return result;
}


UnityEngine_GameObject_o *BattleEffectUtility__getEffectObject(
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        bool isPlaySe,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  EffectEntity_o *Entity; // x19
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *v10; // x21
  System_String_o *v11; // x0
  UnityEngine_Object_o *v12; // x0
  Il2CppObject *v13; // x22
  UnityEngine_Object_c *klass; // x8
  int32_t methodPtr; // w22
  int32_t LimitCount; // w0
  System_String_o *v17; // x23
  int32_t v18; // w24
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  System_String_o *v22; // x25
  int32_t v23; // w23
  BattleEffectUtility_c *v24; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v26; // x24
  BattleEffectUtility_c *v27; // x0
  System_String_o *v28; // x0
  System_String_o *v29; // x22
  System_String_o *v30; // x22
  System_String_o *v31; // x22
  System_String_o *v32; // x23
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  BattleEffectUtility_c *v35; // x0
  BattleEffectUtility_c *v36; // x0
  float SendReportProbability; // s8
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  UnityEngine_Object_o *v44; // x20
  Il2CppObject *v45; // x0
  System_String_o *v46; // x20
  BattleEffectUtility_c *v47; // x0
  DataManager_o *v48; // x19
  int m_CancellationTokenSource; // w8
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  unsigned int v54; // w21
  int32_t id; // [xsp+Ch] [xbp-84h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Color_o WeaponColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C459FB & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_BattleEffectUtility_getEffectObject__);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_18875/*"effect load failed. effectId = {0}"*/);
    sub_1C37058(&StringLiteral_18876/*"effect/"*/);
    sub_1C37058(&StringLiteral_3092/*"Battle/Effect/"*/);
    sub_1C37058(&StringLiteral_3084/*"Battle"*/);
    byte_4C459FB = 1;
  }
  name = 0;
  path = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_86;
  Entity = (EffectEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               effectId,
                               (const MethodInfo_33A10A0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)procObject, 0, 0);
  v10 = 0;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !procObject )
      goto LABEL_86;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  procObject,
                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v10 = (UnityEngine_Object_o *)Instance;
  }
  if ( !Entity )
    goto LABEL_86;
  switch ( Entity->fields.folderType )
  {
    case 1:
      v11 = System_String__Concat_63561656((System_String_o *)StringLiteral_18876/*"effect/"*/, Entity->fields.name, 0);
      v12 = UnityEngine_Resources__Load(v11, 0);
      if ( !v12 )
        goto LABEL_16;
      if ( (UnityEngine_GameObject_c *)v12->klass == UnityEngine_GameObject_TypeInfo )
        v13 = (Il2CppObject *)v12;
      else
        v13 = 0;
      goto LABEL_48;
    case 2:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
      v13 = 0;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_48;
      if ( !v10 )
        goto LABEL_86;
      klass = v10[22].klass;
      if ( !klass )
        goto LABEL_86;
      methodPtr = (int32_t)klass[1].vtable._3_ToString.methodPtr;
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v10, 0);
      v17 = Entity->fields.name;
      v18 = LimitCount;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                           methodPtr,
                                                           v18,
                                                           v17,
                                                           0);
      goto LABEL_47;
    case 3:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
      v13 = 0;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_48;
      if ( !v10 )
        goto LABEL_86;
      WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v10, 0);
      WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v10, 1, 0);
      Instance = (DataManager_o *)BattleActorControl__getEffectFolder((BattleActorControl_o *)v10, 0);
      v22 = Entity->fields.name;
      v23 = (int)Instance;
      v24 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v24 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v24->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_86;
      if ( (unsigned int)WeaponScale >= LODWORD(scalelist->max_length) )
        goto LABEL_87;
      v26 = System_String__Concat_63561656(v22, scalelist->m_Items[WeaponScale], 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                           v26,
                                                           WeaponGroup,
                                                           v23,
                                                           0);
LABEL_47:
      v13 = Manager__LoadNoblePhantasmEffect;
LABEL_48:
      if ( EffectEntity__isSe(Entity, 0) && isPlaySe )
      {
        v33 = Method_BattleEffectUtility_getEffectObject__;
        if ( (*((_BYTE *)Method_BattleEffectUtility_getEffectObject__ + 83) & 2) != 0 )
          v33 = (_QWORD *)sub_1C37070(Method_BattleEffectUtility_getEffectObject__);
        v34 = (System_Reflection_MethodBase_o *)sub_1C3703C(v33, v33[4]);
        OverwriteAssetSoundName__PlaySe_41420232(
          v34,
          (System_String_o *)StringLiteral_3084/*"Battle"*/,
          Entity->fields.se,
          1.0,
          0,
          0,
          0);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v13, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v13,
                                      (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v44 = (UnityEngine_Object_o *)Instance;
        if ( Entity->fields.folderType != 3 )
          goto LABEL_83;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v44, 0, 0);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_83;
        if ( !v44 )
          goto LABEL_86;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                      (UnityEngine_GameObject_o *)v44,
                                      (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v10 )
          goto LABEL_86;
        v48 = Instance;
        WeaponColor = BattleActorControl__getWeaponColor((BattleActorControl_o *)v10, 0);
        if ( !v48 )
          goto LABEL_86;
        m_CancellationTokenSource = (int)v48->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource >= 1 )
        {
          r = WeaponColor.fields.r;
          g = WeaponColor.fields.g;
          b = WeaponColor.fields.b;
          a = WeaponColor.fields.a;
          v54 = 0;
          while ( 1 )
          {
            if ( v54 >= m_CancellationTokenSource )
LABEL_87:
              sub_1C372BC(Instance);
            Instance = (DataManager_o *)*((_QWORD *)&v48->fields._DispLog + (int)v54);
            if ( !Instance )
              break;
            v60.fields.r = r;
            v60.fields.g = g;
            v60.fields.b = b;
            v60.fields.a = a;
            UIWidget__set_color((UIWidget_o *)Instance, v60, 0);
            m_CancellationTokenSource = (int)v48->fields.m_CancellationTokenSource;
            if ( (int)++v54 >= m_CancellationTokenSource )
              goto LABEL_83;
          }
        }
        else
        {
LABEL_83:
          if ( v44 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v44, 0, 0);
            return (UnityEngine_GameObject_o *)v44;
          }
        }
LABEL_86:
        sub_1C372B4(Instance);
      }
      v35 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v35);
      if ( !Instance )
        goto LABEL_86;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             Entity->fields.id,
             (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0;
      }
      v36 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v36 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v36->static_fields->SendReportProbability;
      v44 = 0;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0) <= SendReportProbability )
      {
        id = Entity->fields.id;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v38, v39, v40, v41, v42, v43);
        v46 = System_String__Format((System_String_o *)StringLiteral_18875/*"effect load failed. effectId = {0}"*/, v45, 0);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_31091192((CrashReporter_o *)Instance, v46, 0, 0, 0);
          v47 = BattleEffectUtility_TypeInfo;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v47);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              Entity->fields.id,
              (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0;
          }
        }
        goto LABEL_86;
      }
      return (UnityEngine_GameObject_o *)v44;
    case 4:
      v27 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v27 = BattleEffectUtility_TypeInfo;
      }
      v28 = System_Int32__ToString((unsigned int)v27->static_fields + 24, 0);
      v29 = System_String__Concat_63561656((System_String_o *)StringLiteral_3092/*"Battle/Effect/"*/, v28, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v29, 0);
      if ( !Instance )
        goto LABEL_86;
      Manager__LoadNoblePhantasmEffect = AssetData__GetObject_object__51154888(
                                           (AssetData_o *)Instance,
                                           Entity->fields.name,
                                           (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      goto LABEL_47;
    case 5:
      v30 = Entity->fields.name;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v30, &path, &name, v9);
      v32 = name;
      v31 = path;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadBattleCommonEffect(v31, v32, 0);
      goto LABEL_47;
    default:
LABEL_16:
      v13 = 0;
      goto LABEL_48;
  }
}


UnityEngine_GameObject_o *BattleEffectUtility__getEffectObjectSafe(
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        bool isPlaySe,
        float lostTime,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EffectObject; // x19
  Il2CppObject *v10; // x0

  if ( (byte_4C459FA & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_5847/*"Effect Default"*/);
    byte_4C459FA = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, isPlaySe, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0, 0) )
  {
    EffectObject = (UnityEngine_GameObject_o *)sub_1C372A4(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5847/*"Effect Default"*/, 0);
    if ( !EffectObject
      || (v10 = UnityEngine_GameObject__AddComponent_object_(
                  EffectObject,
                  (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0 )
    {
      sub_1C372B4(v10);
    }
    *(float *)&v10[2].klass = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *BattleEffectUtility__getEffectObject_46017732(
        int32_t folder,
        System_String_o *name,
        UnityEngine_GameObject_o *actorObject,
        const MethodInfo *method)
{
  __int64 *v7; // x8
  System_String_o *v8; // x0
  UnityEngine_GameObject_o *result; // x0
  bool v10; // w8

  if ( (byte_4C459FD & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_3088/*"Battle/CommonEffects/"*/);
    sub_1C37058(&StringLiteral_18876/*"effect/"*/);
    byte_4C459FD = 1;
  }
  if ( folder == 2 )
  {
    v7 = &StringLiteral_18876/*"effect/"*/;
LABEL_8:
    v8 = System_String__Concat_63561656((System_String_o *)*v7, name, 0);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v8, 0);
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
    v7 = &StringLiteral_3088/*"Battle/CommonEffects/"*/;
    goto LABEL_8;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0, 0);
  result = 0;
  if ( v10 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 actorObject,
                                                 (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0 )
    {
      sub_1C372B4(result);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0);
  }
  return result;
}


System_String_o *BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x19
  Il2CppObject *Instance; // x0
  System_String_o *NodeName; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45A02 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_18982/*"en_body"*/);
    byte_4C45A02 = 1;
  }
  v3 = (System_String_o *)StringLiteral_18982/*"en_body"*/;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_33A10EC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v3;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C372B4(Instance);
  NodeName = EffectEntity__getNodeName((EffectEntity_o *)entity, 0);
  if ( !System_String__IsNullOrEmpty(NodeName, 0) )
    return NodeName;
  return v3;
}


System_String_o *BattleEffectUtility__get_EffectAssetName(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_String_o *v2; // x0

  if ( (byte_4C459E9 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&StringLiteral_3092/*"Battle/Effect/"*/);
    byte_4C459E9 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  v2 = System_Int32__ToString((unsigned int)v1->static_fields + 24, 0);
  return System_String__Concat_63561656((System_String_o *)StringLiteral_3092/*"Battle/Effect/"*/, v2, 0);
}


EffectMaster_o *BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  EffectMaster_o *effectMst; // x19
  Il2CppObject *Master_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BattleEffectUtility_c *v6; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4C459EA & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C459EA = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  effectMst = v1->static_fields->effectMst;
  if ( !effectMst )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EffectMaster___);
    v6 = BattleEffectUtility_TypeInfo;
    effectMst = (EffectMaster_o *)Master_object;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v6 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->effectMst = effectMst;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->effectMst, (int32_t)effectMst, v4, v5);
  }
  return effectMst;
}


System_Collections_Generic_HashSet_int__o *BattleEffectUtility__get_NotPreloadEffectIdHashSet(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  BattleEffectUtility_c *v5; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4C459E7 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C459E7 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  notPreloadEffectIdHashSet = v1->static_fields->notPreloadEffectIdHashSet;
  if ( !notPreloadEffectIdHashSet )
  {
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v5 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v5 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&static_fields->notPreloadEffectIdHashSet,
      (int32_t)notPreloadEffectIdHashSet,
      v3,
      v4);
  }
  return notPreloadEffectIdHashSet;
}


System_Collections_Generic_HashSet_int__o *BattleEffectUtility__get_SentEffectIdHashSet(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *sentEffectIdHashSet; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  BattleEffectUtility_c *v5; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4C459E6 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C459E6 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  sentEffectIdHashSet = v1->static_fields->sentEffectIdHashSet;
  if ( !sentEffectIdHashSet )
  {
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v5 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v5 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->sentEffectIdHashSet, (int32_t)sentEffectIdHashSet, v3, v4);
  }
  return sentEffectIdHashSet;
}


UnityEngine_GameObject_o *BattleEffectUtility__loadActivateSideEffect(const MethodInfo *method)
{
  Il2CppObject *object; // x19

  if ( (byte_4C459F1 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C37058(&StringLiteral_18910/*"effect/ef_sideeffect01"*/);
    byte_4C459F1 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_18910/*"effect/ef_sideeffect01"*/,
             (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       object,
                                       (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  float y; // s9
  float x; // s8
  UnityEngine_GameObject_o *EffectObject; // x19
  BattleEffectUtility_c *v18; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  EffectEntity_o *v20; // x26
  System_String_o *NodeName; // x25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v23; // s11
  float v24; // s12
  float v25; // s13
  const MethodInfo *v26; // x5
  bool IsUseNodePositionOnly; // w26
  char v28; // w23
  UnityEngine_Transform_o *v29; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *v31; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v33; // x0
  AuraEffectPosOverwriteEntity_o *ent; // [xsp+38h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4C459EB & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C459EB = 1;
  }
  ent = 0;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, 1, *(const MethodInfo **)&svtId);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0, 0) )
  {
    v18 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v18);
    if ( EffectMaster )
    {
      EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                     EffectMaster,
                                                                     effectId,
                                                                     (const MethodInfo_33A10A0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        v20 = (EffectEntity_o *)EffectMaster;
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0);
        if ( arg )
          NodeName = (System_String_o *)((__int64 (__fastcall *)(BattleEffectUtility_EffectLoadArgument_o *, System_String_o *, const MethodInfo *))arg->klass->vtable._4_GetParentNodeName.methodPtr)(
                                          arg,
                                          NodeName,
                                          arg->klass->vtable._4_GetParentNodeName.method);
        if ( !byte_4C3C929 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C929 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v23 = static_fields->upVector.fields.x;
        v24 = static_fields->upVector.fields.y;
        v25 = static_fields->upVector.fields.z;
        IsUseNodePositionOnly = EffectEntity__IsUseNodePositionOnly(v20, svtId, limitCount, 0);
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__TryGetAuraEffectPosOverwriteEntity(
                                                                       &ent,
                                                                       effectId,
                                                                       svtId,
                                                                       limitCount,
                                                                       arg,
                                                                       v26);
        v28 = (char)EffectMaster;
        if ( ((unsigned __int8)EffectMaster & 1) != 0 )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ent;
          if ( !ent )
            goto LABEL_38;
          NodeName = ent->fields.nodeName;
          v36 = AuraEffectPosOverwriteEntity__GetOffset(ent, 0);
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ent;
          if ( !ent )
            goto LABEL_38;
          x = v36.fields.x;
          y = v36.fields.y;
          z = v36.fields.z;
          Rotation = AuraEffectPosOverwriteEntity__GetRotation(ent, 0);
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ent;
          if ( !ent )
            goto LABEL_38;
          v23 = Rotation.fields.x;
          v24 = Rotation.fields.y;
          v25 = Rotation.fields.z;
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
            v29 = (UnityEngine_Transform_o *)EffectMaster;
            transform = UnityEngine_GameObject__get_transform(targetObject, 0);
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                           transform,
                                                                           NodeName,
                                                                           limitCount,
                                                                           v28 & 1,
                                                                           0);
            v31 = (UnityEngine_Component_o *)EffectMaster;
            if ( !IsUseNodePositionOnly )
              goto LABEL_30;
            if ( !EffectMaster )
              goto LABEL_38;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)EffectMaster, 0);
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__HasParent(gameObject, 0);
            if ( ((unsigned __int8)EffectMaster & 1) != 0 )
            {
              v33 = UnityEngine_Component__get_gameObject(v31, 0);
              EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)GameObjectExtensions__GetParent(v33, 0);
              if ( v29 )
              {
                UnityEngine_Transform__set_parent(v29, (UnityEngine_Transform_o *)EffectMaster, 0);
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)v31, 0);
LABEL_34:
                v39.fields.z = z + localPosition.fields.z;
                v39.fields.y = y + localPosition.fields.y;
                v39.fields.x = x + localPosition.fields.x;
                UnityEngine_Transform__set_localPosition(v29, v39, 0);
                v40.fields.x = v23;
                v40.fields.y = v24;
                v40.fields.z = v25;
                UnityEngine_Transform__set_eulerAngles(v29, v40, 0);
                if ( !byte_4C3C926 )
                {
                  sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                  byte_4C3C926 = 1;
                }
                UnityEngine_Transform__set_localScale(v29, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                return EffectObject;
              }
            }
            else
            {
LABEL_30:
              if ( v29 )
              {
                UnityEngine_Transform__set_parent(v29, (UnityEngine_Transform_o *)v31, 0);
                if ( !byte_4C3C921 )
                {
                  sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                  byte_4C3C921 = 1;
                }
                localPosition = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
                goto LABEL_34;
              }
            }
          }
        }
      }
    }
LABEL_38:
    sub_1C372B4(EffectMaster);
  }
  return EffectObject;
}


UnityEngine_GameObject_o *BattleEffectUtility__loadEffectToNode_46012880(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_4C459ED & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    byte_4C459ED = 1;
  }
  v12 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
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
  struct BattleEffectUtility_StaticFields *static_fields; // x8
  int32_t result; // w0

  if ( (byte_4C459E8 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    byte_4C459E8 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v3 = BattleEffectUtility_TypeInfo;
  }
  static_fields = v3->static_fields;
  result = inId;
  static_fields->battleEffectId = inId;
  return result;
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
  __int64 v9; // x21
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  System_String_o *SideEffectPath; // x0
  int32_t v15; // w1
  System_String_o *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  AssetLoader_LoadEndDataHandler_o *v19; // x20

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_4C459F0 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_BattleEffectUtility___c__DisplayClass24_0__showSideEffect_b__0__);
    sub_1C37058(&BattleEffectUtility___c__DisplayClass24_0_TypeInfo);
    sub_1C37058(&StringLiteral_18830/*"ef_enchant"*/);
    byte_4C459F0 = 1;
  }
  v9 = sub_1C372A4(BattleEffectUtility___c__DisplayClass24_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass24_0___ctor((BattleEffectUtility___c__DisplayClass24_0_o *)v9, 0);
  if ( !v9 )
    sub_1C372B4(v10);
  *(_QWORD *)(v9 + 24) = parent;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)parent, v11, v12);
  *(float *)(v9 + 32) = x;
  *(float *)(v9 + 36) = y;
  *(float *)(v9 + 40) = z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v13);
  v15 = StringLiteral_18830/*"ef_enchant"*/;
  v16 = SideEffectPath;
  *(_QWORD *)(v9 + 16) = StringLiteral_18830/*"ef_enchant"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), v15, v17, v18);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_BattleEffectUtility___c__DisplayClass24_0__showSideEffect_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, v19, 1, 0);
}


void BattleEffectUtility_BuffEffectLoadArgument___ctor(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        BattleActorControl_o *bActor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleServantData_o *battleSvtData; // x8
  struct ChangeModelData_o *ChangeModelData_k__BackingField; // x1

  if ( (byte_4C45A06 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A06 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0, 0);
  if ( v5 )
  {
    if ( !bActor )
      sub_1C372B4(v5);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)BuffEffectNodeName_k__BackingField, v6, v7);
    battleSvtData = bActor->fields.battleSvtData;
    if ( battleSvtData )
      ChangeModelData_k__BackingField = battleSvtData->fields._ChangeModelData_k__BackingField;
    else
      ChangeModelData_k__BackingField = 0;
    this->fields.ChangeModelData = ChangeModelData_k__BackingField;
    sub_1C36FFC(
      (CGThumbnailListItem_o *)&this->fields.ChangeModelData,
      (int32_t)ChangeModelData_k__BackingField,
      v9,
      v10);
  }
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
  System_ValueTuple_int__int__o p_item; // x0
  __int64 v8; // x0
  System_ValueTuple_int__int__o v9; // x1
  struct System_ValueTuple_int__int__array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  System_ValueTuple_int__int__o item; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45A05 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ValueTuple_int__int___Add__);
    sub_1C37058(&Method_System_ValueTuple_int__int___ctor__);
    byte_4C45A05 = 1;
  }
  ChangeModelData = this->fields.ChangeModelData;
  if ( ChangeModelData )
  {
    modelId = ChangeModelData->fields.modelId;
    p_item = (System_ValueTuple_int__int__o)&item;
    item = 0;
    System_ValueTuple_int__int____ctor(
      p_item,
      modelId,
      0,
      (const MethodInfo_3AFCC28 *)Method_System_ValueTuple_int__int___ctor__);
    if ( !targetList
      || (v9 = item,
          items = targetList->fields._items,
          v11 = Method_System_Collections_Generic_List_ValueTuple_int__int___Add__,
          ++targetList->fields._version,
          !items) )
    {
      sub_1C372B4(v8);
    }
    size = targetList->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_ValueTuple_int__int____AddWithResize(
        targetList,
        v9,
        *(const MethodInfo_374A990 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      targetList->fields._size = size + 1;
      items->m_Items[size] = v9;
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
  UnityEngine_Transform_o *transform; // x0

  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.effectNodeName, 0);
  if ( IsNullOrEmpty )
    return defParentTr;
  if ( !targetObj )
    sub_1C372B4(IsNullOrEmpty);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45A07 & 1) == 0 )
  {
    sub_1C37058(&BattleEffectUtility___c_TypeInfo);
    byte_4C45A07 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleEffectUtility___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleEffectUtility___c_TypeInfo->static_fields->__9 = (struct BattleEffectUtility___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleEffectUtility___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C45A08 & 1) == 0 )
  {
    this = (BattleEffectUtility___c_o *)sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78176496);
    byte_4C45A08 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  return (System_Collections_Generic_IEnumerable_ParticleSystem__o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       x,
                                                                       1,
                                                                       (const MethodInfo_313FE78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78176496);
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
  Il2CppObject *Object_object__51154888; // x20
  BattleEffectUtility___c__DisplayClass24_0_o *v6; // x20

  v4 = this;
  if ( (byte_4C45A09 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleEffectUtility___c__DisplayClass24_0_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C45A09 = 1;
  }
  if ( !data )
    goto LABEL_11;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              data,
                              v4->fields.name,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleEffectUtility___c__DisplayClass24_0_o *)UnityEngine_Object__Instantiate_object_(
                                                          Object_object__51154888,
                                                          (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass24_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0)) == 0 )
  {
LABEL_11:
    sub_1C372B4(this);
  }
  v6 = this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v6,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v6, v4->fields.scl, 0);
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