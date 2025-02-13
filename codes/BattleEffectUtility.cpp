void __fastcall BattleEffectUtility___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  BattleEffectUtility_c *v7; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x19
  void *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  struct BattleEffectUtility_StaticFields *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  if ( (byte_4BDEBBA & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_16598/*"_S"*/);
    sub_1C21E38(&StringLiteral_16538/*"_M"*/);
    sub_1C21E38(&StringLiteral_16531/*"_L"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDEBBA = 1;
  }
  v7 = BattleEffectUtility_TypeInfo;
  static_fields = BattleEffectUtility_TypeInfo->static_fields;
  static_fields->SendReportProbability = 1.0;
  *(_QWORD *)&static_fields->battleEffectId = 0LL;
  *(_QWORD *)&static_fields->wkVec.fields.y = 0LL;
  v9 = v7->static_fields;
  v9->auraPosOverwriteMst = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->auraPosOverwriteMst, 0LL, v1, v2, v3, v4, v5, v6);
  v10 = sub_1C21EE0(string___TypeInfo, 4LL);
  if ( !v10 )
    sub_1C22094(0LL, v11);
  v18 = v10;
  if ( !*(_DWORD *)(v10 + 24) )
    goto LABEL_9;
  v19 = StringLiteral_1/*""*/;
  *(_QWORD *)(v10 + 32) = StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)v19, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v18 + 24) <= 1u
    || (v26 = StringLiteral_16598/*"_S"*/,
        *(_QWORD *)(v18 + 40) = StringLiteral_16598/*"_S"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 40), v26, v20, v21, v22, v23, v24, v25),
        *(_DWORD *)(v18 + 24) <= 2u)
    || (v33 = StringLiteral_16538/*"_M"*/,
        *(_QWORD *)(v18 + 48) = StringLiteral_16538/*"_M"*/,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 48), v33, v27, v28, v29, v30, v31, v32),
        *(_DWORD *)(v18 + 24) <= 3u) )
  {
LABEL_9:
    sub_1C2209C(v10, v11);
  }
  v40 = StringLiteral_16531/*"_L"*/;
  *(_QWORD *)(v18 + 56) = StringLiteral_16531/*"_L"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 56), v40, v34, v35, v36, v37, v38, v39);
  v41 = BattleEffectUtility_TypeInfo->static_fields;
  v41->scalelist = (struct System_String_array *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v41->scalelist, v18, v42, v43, v44, v45, v46, v47);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  BattleEffectUtility_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v5; // x1

  if ( (byte_4BDEBAE & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4BDEBAE = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_1C22094(0LL, v5);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_3503994 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall BattleEffectUtility__AddRelatedFunctionEffectIdList(
        System_Int32_array *funcIds,
        System_Collections_Generic_List_int__o **effectIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  unsigned __int64 v9; // x24
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v11; // x22
  unsigned __int64 v12; // x28
  int32_t v13; // w23
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 m_CancellationTokenSource_low; // x10

  if ( (byte_4BDEBA9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1C21E38(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDEBA9 = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_1C22094(Instance, v6);
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_FunctionMaster___);
    v7 = *(_QWORD *)&funcIds->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v7 )
          goto LABEL_25;
        if ( !v8 )
          goto LABEL_24;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v8,
                                      funcIds->m_Items[v9 + 1],
                                      (const MethodInfo_325BDC8 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_24;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v11 = Instance;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
LABEL_22:
        LODWORD(v7) = funcIds->max_length;
        if ( (__int64)++v9 >= (int)v7 )
          return;
      }
      v12 = 0LL;
      while ( v12 < (unsigned int)m_CancellationTokenSource )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_24;
        v13 = *((_DWORD *)&v11->fields._DispLog + v12);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v13,
                                      (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_24;
          v14 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v15 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v14 )
            goto LABEL_24;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v14 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Instance,
              v13,
              *(const MethodInfo_3632090 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v14 + 4 * m_CancellationTokenSource_low + 32) = v13;
          }
        }
        LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
        if ( (__int64)++v12 >= (int)m_CancellationTokenSource )
          goto LABEL_22;
      }
LABEL_25:
      sub_1C2209C(Instance, v6);
    }
  }
}


UnityEngine_GameObject_array *__fastcall BattleEffectUtility__ChangeServantView(
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  BattleServantData_o *v27; // x23
  int64_t v28; // x1
  __int64 v29; // x8
  unsigned __int64 v30; // x27
  System_String_o *v31; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x26
  BattleServantData_o *v34; // x25
  BattleServantData_o *v35; // x26
  BattleServantData_o *v36; // x26
  BattleServantData_o *v37; // x26
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  BattleDataDefine_c *v48; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  const MethodInfo *v50; // x2
  NpcServantDisplayTypeDetailEntity_o *v51; // x22
  __int64 v52; // x8
  BattleServantData_o *v53; // x21
  unsigned __int64 v54; // x24
  UnityEngine_Object_o *v55; // x22
  int32_t uniqueId; // w8
  BattleServantData_o *v57; // x22
  unsigned int v58; // w28
  BattleServantData_c **v59; // x8
  UnityEngine_Material_o *v60; // x23
  __int64 v61; // x8
  BattleServantData_o *v62; // x19
  unsigned __int64 v63; // x23
  UnityEngine_Object_o *v64; // x21
  int32_t v65; // w8
  BattleServantData_o *v66; // x21
  unsigned int v67; // w27
  BattleServantData_c **v68; // x8
  UnityEngine_Material_o *v69; // x22
  System_Nullable_Color__o v71; // [xsp+10h] [xbp-C0h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = svtData;
  if ( (byte_4BDEBB5 & 1) == 0 )
  {
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_19306/*"en_waist"*/);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    svtData = (BattleServantData_o *)sub_1C21E38(&StringLiteral_16411/*"_AddColor"*/);
    byte_4BDEBB5 = 1;
  }
  v11 = 0.0;
  entity = 0LL;
  if ( !isShadow )
  {
    v13 = 0LL;
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
  BattleServantData__TryGetDisplayTypeDetailEntity(v10, &entity, 0LL);
  v12 = entity ? entity->fields.effectId : 0;
  svtData = (BattleServantData_o *)sub_1C21EE0(string___TypeInfo, 1LL);
  if ( !svtData )
    goto LABEL_95;
  v27 = svtData;
  if ( !svtData->fields.uniqueId )
    goto LABEL_96;
  v28 = StringLiteral_19306/*"en_waist"*/;
  svtData->fields.userSvtId.fields.currentCryptoKey = StringLiteral_19306/*"en_waist"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&svtData->fields.userSvtId, v28, v21, v22, v23, v24, v25, v26);
  if ( limitAddEntity )
  {
    svtData = (BattleServantData_o *)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(limitAddEntity, 0LL);
    v27 = svtData;
    if ( !svtData )
      goto LABEL_95;
  }
  v29 = *(_QWORD *)&v27->fields.uniqueId;
  if ( (int)v29 >= 1 )
  {
    v13 = 0LL;
    v30 = 0LL;
    while ( v30 < (unsigned int)v29 )
    {
      if ( !actorObj )
        goto LABEL_95;
      v31 = (System_String_o *)*(&v27->fields.userSvtId.fields.currentCryptoKey + v30);
      transform = UnityEngine_GameObject__get_transform(actorObj, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v31, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)svtData & 1) != 0 )
      {
        svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !svtData )
          goto LABEL_95;
        svtData = (BattleServantData_o *)ServantAssetLoadManager__createShadowEffect(
                                           (ServantAssetLoadManager_o *)svtData,
                                           0,
                                           v12,
                                           0LL);
        if ( !svtData )
          goto LABEL_95;
        v34 = svtData;
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtData, 0LL);
        if ( !svtData )
          goto LABEL_95;
        UnityEngine_Transform__set_parent(
          (UnityEngine_Transform_o *)svtData,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
        v35 = svtData;
        if ( !byte_4BD6BB1 )
        {
          svtData = (BattleServantData_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB1 = 1;
        }
        if ( !v35 )
          goto LABEL_95;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v35,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
        v36 = svtData;
        if ( !byte_4BD6BB1 )
        {
          svtData = (BattleServantData_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB1 = 1;
        }
        if ( !v36 )
          goto LABEL_95;
        UnityEngine_Transform__set_localEulerAngles(
          (UnityEngine_Transform_o *)v36,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v34, 0LL);
        v37 = svtData;
        if ( !byte_4BD6BB6 )
        {
          svtData = (BattleServantData_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        if ( !v37 )
          goto LABEL_95;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v37,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v13 )
        {
          v13 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v13,
            (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( !v13 )
            goto LABEL_95;
        }
        items = v13->fields._items;
        v45 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v13->fields._version;
        if ( !items )
          goto LABEL_95;
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v13,
            (Il2CppObject *)v34,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
        }
        else
        {
          v47 = &items->obj.klass + size;
          v13->fields._size = size + 1;
          v47[4] = (Il2CppClass *)v34;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v47 + 4), (int64_t)v34, v38, v39, v40, v41, v42, v43);
        }
      }
      LODWORD(v29) = v27->fields.uniqueId;
      if ( (__int64)++v30 >= (int)v29 )
        goto LABEL_42;
    }
LABEL_96:
    sub_1C2209C(svtData, actorObj);
  }
  v13 = 0LL;
LABEL_42:
  v48 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v48 = BattleDataDefine_TypeInfo;
  }
  p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v48->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
  svtData = (BattleServantData_o *)entity;
  r = p_OVERWRITE_ATK_RATE_PRIORITY[12];
  g = p_OVERWRITE_ATK_RATE_PRIORITY[13];
  b = p_OVERWRITE_ATK_RATE_PRIORITY[14];
  a = p_OVERWRITE_ATK_RATE_PRIORITY[15];
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
    ServantAssetLoadManager__changeChocoSahder(actorObj, 0LL);
    goto LABEL_59;
  }
  NpcServantDisplayTypeDetailEntity__get_MainColor(&v71, entity, 0LL);
  if ( v71.fields.hasValue )
  {
    r = v71.fields.value.fields.r;
    g = v71.fields.value.fields.g;
    b = v71.fields.value.fields.b;
    a = v71.fields.value.fields.a;
  }
  svtData = (BattleServantData_o *)entity;
  if ( !entity )
    goto LABEL_95;
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v71, entity, 0LL);
  if ( v71.fields.hasValue )
  {
    v17 = v71.fields.value.fields.r;
    v16 = v71.fields.value.fields.g;
    v15 = v71.fields.value.fields.b;
    v11 = v71.fields.value.fields.a;
  }
  else
  {
    v11 = 0.0;
    v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
  }
  v51 = entity;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetColorToShadowEffectParticles((System_Collections_Generic_List_GameObject__o *)v13, v51, v50);
  if ( isChoco )
    goto LABEL_56;
LABEL_59:
  if ( !actorObj )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !svtData )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( svtData )
  {
    v52 = *(_QWORD *)&svtData->fields.uniqueId;
    v53 = svtData;
    if ( (int)v52 >= 1 )
    {
      v54 = 0LL;
      while ( 1 )
      {
        if ( v54 >= (unsigned int)v52 )
          goto LABEL_96;
        v55 = (UnityEngine_Object_o *)*(&v53->fields.userSvtId.fields.currentCryptoKey + v54);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v55 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v55, 0LL);
          if ( !svtData )
            goto LABEL_95;
          uniqueId = svtData->fields.uniqueId;
          v57 = svtData;
          if ( uniqueId >= 1 )
            break;
        }
LABEL_75:
        LODWORD(v52) = v53->fields.uniqueId;
        if ( (__int64)++v54 >= (int)v52 )
          goto LABEL_76;
      }
      v58 = 0;
      while ( v58 < uniqueId )
      {
        v59 = &v57->klass + (int)v58;
        v60 = (UnityEngine_Material_o *)v59[4];
        if ( !v60 )
          goto LABEL_95;
        v73.fields.r = r;
        v73.fields.g = g;
        v73.fields.b = b;
        v73.fields.a = a;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)v59[4],
          (System_String_o *)StringLiteral_16455/*"_Color"*/,
          v73,
          0LL);
        v74.fields.r = v17;
        v74.fields.g = v16;
        v74.fields.b = v15;
        v74.fields.a = v11;
        UnityEngine_Material__SetColor(v60, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, v74, 0LL);
        uniqueId = v57->fields.uniqueId;
        if ( (int)++v58 >= uniqueId )
          goto LABEL_75;
      }
      goto LABEL_96;
    }
  }
LABEL_76:
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !svtData )
LABEL_95:
    sub_1C22094(svtData, actorObj);
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__49967896(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( svtData )
  {
    v61 = *(_QWORD *)&svtData->fields.uniqueId;
    v62 = svtData;
    if ( (int)v61 >= 1 )
    {
      v63 = 0LL;
      while ( 1 )
      {
        if ( v63 >= (unsigned int)v61 )
          goto LABEL_96;
        v64 = (UnityEngine_Object_o *)*(&v62->fields.userSvtId.fields.currentCryptoKey + v63);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v64 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v64, 0LL);
          if ( !svtData )
            goto LABEL_95;
          v65 = svtData->fields.uniqueId;
          v66 = svtData;
          if ( v65 >= 1 )
            break;
        }
LABEL_91:
        LODWORD(v61) = v62->fields.uniqueId;
        if ( (__int64)++v63 >= (int)v61 )
          goto LABEL_92;
      }
      v67 = 0;
      while ( v67 < v65 )
      {
        v68 = &v66->klass + (int)v67;
        v69 = (UnityEngine_Material_o *)v68[4];
        if ( !v69 )
          goto LABEL_95;
        v75.fields.r = r;
        v75.fields.g = g;
        v75.fields.b = b;
        v75.fields.a = a;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)v68[4],
          (System_String_o *)StringLiteral_16455/*"_Color"*/,
          v75,
          0LL);
        v76.fields.r = v17;
        v76.fields.g = v16;
        v76.fields.b = v15;
        v76.fields.a = v11;
        UnityEngine_Material__SetColor(v69, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, v76, 0LL);
        v65 = v66->fields.uniqueId;
        if ( (int)++v67 >= v65 )
          goto LABEL_91;
      }
      goto LABEL_96;
    }
  }
LABEL_92:
  if ( v13 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                             v13,
                                             (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0LL;
}


void __fastcall BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v3; // x1

  if ( (byte_4BDEBAF & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_4BDEBAF = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v1);
  if ( !NotPreloadEffectIdHashSet )
    sub_1C22094(0LL, v3);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_3502E14 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


UnityEngine_GameObject_array *__fastcall BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
        System_Collections_Generic_IEnumerable_Transform__o *nodeEnumerable,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
        const MethodInfo *method)
{
  int32_t effectId; // w22
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_Transform__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  UnityEngine_Transform_o *v23; // x24
  Il2CppObject *Instance; // x0
  __int64 v25; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x0
  __int64 v27; // x1
  UnityEngine_GameObject_o *v28; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  const MethodInfo *v47; // x2

  if ( (byte_4BDEBB6 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDEBB6 = 1;
  }
  if ( displayTypeDetailEntity )
    effectId = displayTypeDetailEntity->fields.effectId;
  else
    effectId = 0;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !nodeEnumerable )
    goto LABEL_50;
  klass = nodeEnumerable->klass;
  v10 = *(unsigned __int16 *)(&nodeEnumerable->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&nodeEnumerable->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v10;
      p_offset += 4;
      if ( !v10 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C73E18(nodeEnumerable, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_Transform__o *, _QWORD))p_method)(
          nodeEnumerable,
          *(_QWORD *)(p_method + 8));
  if ( !v14 )
    sub_1C22094(0LL, v13);
  while ( 1 )
  {
    v15 = *(_QWORD *)v14;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_18:
      v18 = sub_1C73E18(v14, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8)) & 1) == 0 )
      break;
    v19 = *(_QWORD *)v14;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v21 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_25;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_25:
      v22 = sub_1C73E18(v14, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v23 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v14, *(_QWORD *)(v22 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v25);
    ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)Instance, 0, effectId, 0LL);
    v28 = ShadowEffect;
    if ( !ShadowEffect )
      sub_1C22094(0LL, v27);
    transform = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
    if ( !transform )
      sub_1C22094(0LL, v30);
    UnityEngine_Transform__SetParent(transform, v23, 0LL);
    GameObjectExtensions__ResetTransform(v28, 0LL);
    if ( !v6 )
      sub_1C22094(v31, v32);
    items = v6->fields._items;
    v40 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v6->fields._version;
    if ( !items )
      sub_1C22094(v31, v32);
    size = v6->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v6,
        (Il2CppObject *)v28,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
    }
    else
    {
      v42 = &items->obj.klass + size;
      v6->fields._size = size + 1;
      v42[4] = (Il2CppClass *)v28;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 4), (int64_t)v28, v33, v34, v35, v36, v37, v38);
    }
  }
  v43 = *(_QWORD *)v14;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v14 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v14 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_39;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_39:
    v46 = sub_1C73E18(v14, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v14, *(_QWORD *)(v46 + 8));
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetColorToShadowEffectParticles(
    (System_Collections_Generic_List_GameObject__o *)v6,
    displayTypeDetailEntity,
    v47);
  if ( !v6 )
LABEL_50:
    sub_1C22094(v7, v8);
  return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                           v6,
                                           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  int32_t IndexOf_63148816; // w0
  int32_t v8; // w22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_String_o *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_String_o **v24; // x0
  System_String_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  v6 = baseName;
  if ( (byte_4BDEBAB & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1123/*"/"*/);
    baseName = (System_String_o *)sub_1C21E38(&StringLiteral_5971/*"Effect/BattleCommon/{0}"*/);
    byte_4BDEBAB = 1;
  }
  if ( !v6 )
    sub_1C22094(baseName, path);
  IndexOf_63148816 = System_String__LastIndexOf_63148816(v6, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL);
  if ( IndexOf_63148816 == -1 )
  {
    v25 = System_String__Format((System_String_o *)StringLiteral_5971/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v25;
    sub_1C21DDC((PartyOrganizationUtility_o *)path, (int64_t)v25, v26, v27, v28, v29, v30, v31);
    v24 = name;
    v17 = v6;
    *name = v6;
  }
  else
  {
    v8 = IndexOf_63148816;
    v9 = (Il2CppObject *)System_String__Substring_63134480(v6, 0, IndexOf_63148816, 0LL);
    v10 = System_String__Format((System_String_o *)StringLiteral_5971/*"Effect/BattleCommon/{0}"*/, v9, 0LL);
    *path = v10;
    sub_1C21DDC((PartyOrganizationUtility_o *)path, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    v17 = System_String__Substring(v6, v8 + 1, 0LL);
    *name = v17;
    v24 = name;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)v24, (int64_t)v17, v18, v19, v20, v21, v22, v23);
}


System_String_array *__fastcall BattleEffectUtility__GetBattleCommonEffectPathList(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v4; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  const MethodInfo *v9; // x3
  System_String_o *monitor; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4BDEBAA & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDEBAA = 1;
  }
  path = 0LL;
  name = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EffectMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_22;
  v7 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1C2209C(Instance, v4);
      if ( !MasterData_object )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   effectIdList->m_Items[v8 + 1],
                   (const MethodInfo_325BDC8 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && HIDWORD(Instance[1].klass) == 5 )
      {
        monitor = (System_String_o *)Instance[2].monitor;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, v9);
        if ( !v6 )
          break;
        Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                     v6,
                                     (Il2CppObject *)path,
                                     (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v4 = (Il2CppObject *)path;
          items = v6->fields._items;
          v18 = Method_System_Collections_Generic_List_string__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v4,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v4;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v4, v11, v12, v13, v14, v15, v16);
          }
        }
      }
      LODWORD(v7) = effectIdList->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1C22094(Instance, v4);
  }
LABEL_20:
  if ( !v6 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v6,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDEBA6 & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_6006/*"Effect/SideEffect/"*/);
    byte_4BDEBA6 = 1;
  }
  v8 = effectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_6006/*"Effect/SideEffect/"*/, v6, 0LL);
}


bool __fastcall BattleEffectUtility__IsEffectNotLoadedYet(
        int32_t effectId,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleEffectUtility_c *v10; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v14; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDEBAD & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDEBAD = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)effectPath, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( effectId < 1 )
    goto LABEL_13;
  v10 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v10);
  if ( !EffectMaster )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v14);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0LL) )
    {
LABEL_13:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_17:
    sub_1C22094(EffectMaster, v12);
  }
  return (unsigned __int8)Entity & 1;
}


void __fastcall BattleEffectUtility__LoadEffectAssetIfNotYet(
        int32_t effectId,
        System_Action_o *finishCallback,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v7; // x21
  CrashReporter_o *SentEffectIdHashSet; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x2
  BattleEffectUtility_c *v17; // x0
  BattleEffectUtility_c *v18; // x0
  BattleEffectUtility_c *v19; // x0
  float SendReportProbability; // s8
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
  System_String_o *v25; // x23
  BattleEffectUtility_c *v26; // x0
  BattleDataDefine_c *v27; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v30; // x23
  AssetLoader_LoadEndDataHandler_o *v31; // x24
  System_String_o *v32; // x19
  AssetLoader_LoadEndDataHandler_o *v33; // x23
  int32_t v34; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *effectPath; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDEBB0 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__);
    sub_1C21E38(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__);
    sub_1C21E38(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
    sub_1C21E38(&StringLiteral_22510/*"non-loaded asset was detected. effectId = {0}"*/);
    byte_4BDEBB0 = 1;
  }
  effectPath = 0LL;
  v7 = sub_1C22084(BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_37;
  *(_QWORD *)(v7 + 16) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)finishCallback, v10, v11, v12, v13, v14, v15);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v16) )
    goto LABEL_35;
  v17 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v17);
  if ( !SentEffectIdHashSet )
    goto LABEL_37;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v18 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v18);
    if ( !SentEffectIdHashSet )
      goto LABEL_37;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v19 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v19 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v19->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v34 = effectId;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v21, v22, v23);
        v25 = System_String__Format((System_String_o *)StringLiteral_22510/*"non-loaded asset was detected. effectId = {0}"*/, v24, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        CrashReporter__SendReport_31012460(SentEffectIdHashSet, v25, 0LL, 0LL, 0LL);
        v26 = BattleEffectUtility_TypeInfo;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v26);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v27 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v27 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v27->static_fields->ASSET_PARALLEL_LOAD_MAX;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  if ( ((unsigned __int8)SentEffectIdHashSet & 1) != 0 )
  {
    if ( perf )
    {
      assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField;
      v30 = effectPath;
      v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v31,
        (Il2CppObject *)v7,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v30,
               v31,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1C22094(SentEffectIdHashSet, v9);
  }
  v32 = effectPath;
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v7,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v32, v33, ASSET_PARALLEL_LOAD_MAX, 0LL) )
LABEL_35:
    ActionExtensions__Call(*(System_Action_o **)(v7 + 16), 0LL);
}


bool __fastcall BattleEffectUtility__Lottery(float rate, const MethodInfo *method)
{
  return UnityEngine_Random__Range(0.0, 100.0, 0LL) <= rate;
}


void __fastcall BattleEffectUtility__SetColorToShadowEffectParticles(
        System_Collections_Generic_List_GameObject__o *objectList,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  BattleEffectUtility___c_c *v12; // x0
  System_Func_object__object__o *_9__41_1; // x20
  Il2CppObject *v14; // x21
  struct BattleEffectUtility___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v25; // x19
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v29; // x1
  __int64 v30; // x19
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  UnityEngine_Component_o *v39; // x0
  __int64 v40; // x1
  UnityEngine_ParticleSystem_o *v41; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  System_String_o *name; // x21
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v50; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v51; // [xsp+38h] [xbp-C8h] BYREF
  System_Nullable_Color__o v52; // [xsp+70h] [xbp-90h] BYREF
  BattleEffectUtility___c__DisplayClass41_0_o v53; // [xsp+90h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+B8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v55; // 0:x0.8
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDEBB7 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___);
    sub_1C21E38(&System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_Color__get_Value__);
    sub_1C21E38(&Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__41_1__);
    sub_1C21E38(&BattleEffectUtility___c_TypeInfo);
    byte_4BDEBB7 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  memset(&v53, 0, sizeof(v53));
  m_ParticleSystem = 0LL;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)objectList, 0LL);
  if ( displayTypeDetailEntity )
  {
    if ( !IsNullOrEmpty )
    {
      NpcServantDisplayTypeDetailEntity__get_EffectColor((System_Nullable_Color__o *)&v51, displayTypeDetailEntity, 0LL);
      *(_OWORD *)&v53.fields.effectColor.fields.hasValue = *(_OWORD *)&v51.fields.m_Mode;
      v53.fields.effectColor.fields.value.fields.a = *(float *)&v51.fields.m_GradientMax;
      v53.fields.effectColorDetailDict = NpcServantDisplayTypeDetailEntity__GetEffectColorDetailDict(
                                           displayTypeDetailEntity,
                                           0LL);
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v53,
        (int64_t)v53.fields.effectColorDetailDict,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      if ( v53.fields.effectColor.fields.hasValue || v53.fields.effectColorDetailDict )
      {
        v12 = BattleEffectUtility___c_TypeInfo;
        if ( !BattleEffectUtility___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility___c_TypeInfo);
          v12 = BattleEffectUtility___c_TypeInfo;
        }
        _9__41_1 = (System_Func_object__object__o *)v12->static_fields->__9__41_1;
        if ( !_9__41_1 )
        {
          if ( !v12->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v12);
            v12 = BattleEffectUtility___c_TypeInfo;
          }
          v14 = (Il2CppObject *)v12->static_fields->__9;
          _9__41_1 = (System_Func_object__object__o *)sub_1C22084(System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo);
          System_Func_object__object____ctor(
            _9__41_1,
            v14,
            Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__41_1__,
            0LL);
          static_fields = BattleEffectUtility___c_TypeInfo->static_fields;
          static_fields->__9__41_1 = (struct System_Func_GameObject__IEnumerable_ParticleSystem___o *)_9__41_1;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__41_1,
            (int64_t)_9__41_1,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
        }
        v22 = System_Linq_Enumerable__SelectMany_object__object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__41_1,
                (const MethodInfo_2FE3B3C *)Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___);
        if ( !v22 )
          sub_1C22094(0LL, v23);
        klass = v22->klass;
        v25 = v22;
        v26 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
          {
            --v26;
            p_offset += 4;
            if ( !v26 )
              goto LABEL_18;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_18:
          p_method = sub_1C73E18(v22, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
        }
        v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
                v25,
                *(_QWORD *)(p_method + 8));
        if ( !v30 )
          sub_1C22094(0LL, v29);
        while ( 1 )
        {
          v31 = *(_QWORD *)v30;
          v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
          {
            v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v32;
              v33 += 4;
              if ( !v32 )
                goto LABEL_25;
            }
            v34 = v31 + 16LL * *v33 + 312;
          }
          else
          {
LABEL_25:
            v34 = sub_1C73E18(v30, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
            break;
          v35 = *(_QWORD *)v30;
          v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
          {
            v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v37 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
            {
              --v36;
              v37 += 4;
              if ( !v36 )
                goto LABEL_32;
            }
            v38 = v35 + 16LL * *v37 + 312;
          }
          else
          {
LABEL_32:
            v38 = sub_1C73E18(v30, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
          }
          v39 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
          v41 = (UnityEngine_ParticleSystem_o *)v39;
          if ( !v39 )
            sub_1C22094(0LL, v40);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v39, 0LL);
          if ( !gameObject )
            sub_1C22094(0LL, v43);
          name = UnityEngine_Object__get_name(gameObject, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_41_0(
            (System_Nullable_Color__o *)&v51,
            name,
            &v53,
            v44);
          *(_OWORD *)&v52.fields.hasValue = *(_OWORD *)&v51.fields.m_Mode;
          v52.fields.value.fields.a = *(float *)&v51.fields.m_GradientMax;
          if ( LOBYTE(v51.fields.m_Mode) )
          {
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v41, 0LL).fields.m_ParticleSystem;
            Value = System_Nullable_Color___get_Value(
                      &v52,
                      (const MethodInfo_37688FC *)Method_System_Nullable_Color__get_Value__);
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v51, Value, 0LL);
            v50 = v51;
            v55.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v55, &v50, 0LL);
          }
        }
        v46 = *(_QWORD *)v30;
        v47 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
        {
          v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
          {
            --v47;
            v48 += 4;
            if ( !v47 )
              goto LABEL_44;
          }
          v49 = v46 + 16LL * *v48 + 312;
        }
        else
        {
LABEL_44:
          v49 = sub_1C73E18(v30, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v49)(v30, *(_QWORD *)(v49 + 8));
      }
    }
  }
}


void __fastcall BattleEffectUtility__SetEffectParent(
        UnityEngine_GameObject_o *effectObj,
        int32_t effectId,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  UnityEngine_Transform_o *v10; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDEBA5 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_4BDEBA5 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          effectId,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EffectEntity__getNodeName(
                                                                        (EffectEntity_o *)entity,
                                                                        0LL),
        !effectObj)
    || (v9 = (System_String_o *)Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                        effectObj,
                                                                        0LL),
        !targetObj)
    || (v10 = (UnityEngine_Transform_o *)Master_object,
        transform = UnityEngine_GameObject__get_transform(targetObj, 0LL),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                        transform,
                                                                        v9,
                                                                        -1,
                                                                        0,
                                                                        0LL),
        !v10) )
  {
LABEL_19:
    sub_1C22094(Master_object, v8);
  }
  UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4BD6BB9 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB9 = 1;
  }
  UnityEngine_Transform__set_eulerAngles(v10, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
}


void __fastcall BattleEffectUtility__SetShadowServantColorToMaterials(
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
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x19
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  UnityEngine_Material_o *v32; // x0
  __int64 v33; // x1
  UnityEngine_Material_o *v34; // x20
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  System_Nullable_Color__o v39; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDEBB8 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_ExcludeNull_Material___);
    sub_1C21E38(&BattleDataDefine_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_Material__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_Material__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_Color__get_HasValue__);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    sub_1C21E38(&StringLiteral_16411/*"_AddColor"*/);
    byte_4BDEBB8 = 1;
  }
  if ( displayTypeDetailEntity
    && (NpcServantDisplayTypeDetailEntity__get_MainColor(&v39, displayTypeDetailEntity, 0LL), v39.fields.hasValue) )
  {
    r = v39.fields.value.fields.r;
    g = v39.fields.value.fields.g;
    b = v39.fields.value.fields.b;
    a = v39.fields.value.fields.a;
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
    r = p_OVERWRITE_ATK_RATE_PRIORITY[12];
    g = p_OVERWRITE_ATK_RATE_PRIORITY[13];
    b = p_OVERWRITE_ATK_RATE_PRIORITY[14];
    a = p_OVERWRITE_ATK_RATE_PRIORITY[15];
    if ( !displayTypeDetailEntity )
      goto LABEL_11;
  }
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v39, displayTypeDetailEntity, 0LL);
  if ( v39.fields.hasValue )
  {
    v11 = v39.fields.value.fields.r;
    v12 = v39.fields.value.fields.g;
    v13 = v39.fields.value.fields.b;
    v14 = v39.fields.value.fields.a;
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
          (const MethodInfo_2F9B6C4 *)Method_BasicHelper_ExcludeNull_Material___);
  if ( !v15 )
    sub_1C22094(0LL, v16);
  klass = v15->klass;
  v18 = v15;
  v19 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Material__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C73E18(v15, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          v18,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_1C22094(0LL, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_24;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_24:
      v27 = sub_1C73E18(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Material__c **)v30 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_31;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_31:
      v31 = sub_1C73E18(v23, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
    }
    v32 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    v34 = v32;
    if ( !v32 )
      sub_1C22094(0LL, v33);
    v40.fields.r = r;
    v40.fields.g = g;
    v40.fields.b = b;
    v40.fields.a = a;
    UnityEngine_Material__SetColor(v32, (System_String_o *)StringLiteral_16455/*"_Color"*/, v40, 0LL);
    v41.fields.r = v11;
    v41.fields.g = v12;
    v41.fields.b = v13;
    v41.fields.a = v14;
    UnityEngine_Material__SetColor(v34, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, v41, 0LL);
  }
  v35 = *(_QWORD *)v23;
  v36 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_39;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_39:
    v38 = sub_1C73E18(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v23, *(_QWORD *)(v38 + 8));
}


bool __fastcall BattleEffectUtility__TryGetBattleCommonEffectPath(
        System_String_o **effectPath,
        int32_t effectId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleEffectUtility_c *v10; // x0
  EffectMaster_o *EffectMaster; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BDEBAC & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_4BDEBAC = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)effectPath, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  v10 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v10);
  if ( !EffectMaster )
    goto LABEL_15;
  EffectMaster = (EffectMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_325BE14 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_1C22094(EffectMaster, v12);
  if ( HIDWORD(entity[1].klass) == 5 )
  {
    monitor = (System_String_o *)entity[2].monitor;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v13);
  }
  return !System_String__IsNullOrEmpty(*effectPath, 0LL);
}


System_Nullable_Color__o *__fastcall BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_41_0(
        System_Nullable_Color__o *retstr,
        System_String_o *objectName,
        BattleEffectUtility___c__DisplayClass41_0_o *a3,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  float a; // w8
  __int128 v9; // q0
  System_Nullable_Color__o v10; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Color__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4BDEBBB & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetValue_string__Nullable_Color____);
    byte_4BDEBBB = 1;
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
               (const MethodInfo_2F9E40C *)Method_BasicHelper_GetValue_string__Nullable_Color____);
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject(
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        bool isPlaySe,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  EffectEntity_o *Entity; // x19
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *v11; // x21
  System_String_o *v12; // x0
  UnityEngine_Object_o *v13; // x0
  Il2CppObject *v14; // x22
  UnityEngine_Object_c *klass; // x8
  int32_t methodPtr; // w22
  int32_t LimitCount; // w0
  System_String_o *v18; // x23
  int32_t v19; // w24
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  System_String_o *v23; // x25
  int32_t v24; // w23
  BattleEffectUtility_c *v25; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v27; // x24
  BattleEffectUtility_c *v28; // x0
  System_String_o *v29; // x0
  System_String_o *v30; // x22
  System_String_o *v31; // x22
  System_String_o *v32; // x22
  System_String_o *v33; // x23
  _QWORD *v34; // x0
  System_Reflection_MethodBase_o *v35; // x0
  BattleEffectUtility_c *v36; // x0
  BattleEffectUtility_c *v37; // x0
  float SendReportProbability; // s8
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  UnityEngine_Object_o *v42; // x20
  Il2CppObject *v43; // x0
  System_String_o *v44; // x20
  BattleEffectUtility_c *v45; // x0
  DataManager_o *v46; // x19
  float v47; // s0
  float v48; // s1
  float v49; // s2
  float v50; // s3
  int m_CancellationTokenSource; // w8
  float v52; // s8
  float v53; // s9
  float v54; // s10
  float v55; // s11
  unsigned int v56; // w21
  int32_t id; // [xsp+Ch] [xbp-84h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDEBB2 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_BattleEffectUtility_getEffectObject__);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_19193/*"effect load failed. effectId = {0}"*/);
    sub_1C21E38(&StringLiteral_19194/*"effect/"*/);
    sub_1C21E38(&StringLiteral_3261/*"Battle/Effect/"*/);
    sub_1C21E38(&StringLiteral_3253/*"Battle"*/);
    byte_4BDEBB2 = 1;
  }
  name = 0LL;
  path = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_86;
  Entity = (EffectEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               effectId,
                               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)procObject, 0LL, 0LL);
  v11 = 0LL;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !procObject )
      goto LABEL_86;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  procObject,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v11 = (UnityEngine_Object_o *)Instance;
  }
  if ( !Entity )
    goto LABEL_86;
  switch ( Entity->fields.folderType )
  {
    case 1:
      v12 = System_String__Concat_63115476((System_String_o *)StringLiteral_19194/*"effect/"*/, Entity->fields.name, 0LL);
      v13 = UnityEngine_Resources__Load(v12, 0LL);
      if ( !v13 )
        goto LABEL_16;
      if ( (UnityEngine_GameObject_c *)v13->klass == UnityEngine_GameObject_TypeInfo )
        v14 = (Il2CppObject *)v13;
      else
        v14 = 0LL;
      goto LABEL_48;
    case 2:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      v14 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_48;
      if ( !v11 )
        goto LABEL_86;
      klass = v11[19].klass;
      if ( !klass )
        goto LABEL_86;
      methodPtr = (int32_t)klass[1].vtable._2_GetHashCode.methodPtr;
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v11, 0LL);
      v18 = Entity->fields.name;
      v19 = LimitCount;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                           methodPtr,
                                                           v19,
                                                           v18,
                                                           0LL);
      goto LABEL_47;
    case 3:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
      v14 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_48;
      if ( !v11 )
        goto LABEL_86;
      WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v11, 0LL);
      WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v11, 1, 0LL);
      Instance = (DataManager_o *)BattleActorControl__getEffectFolder((BattleActorControl_o *)v11, 0LL);
      v23 = Entity->fields.name;
      v24 = (int)Instance;
      v25 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v25 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v25->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_86;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_87;
      v27 = System_String__Concat_63115476(v23, scalelist->m_Items[WeaponScale], 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                           v27,
                                                           WeaponGroup,
                                                           v24,
                                                           0LL);
LABEL_47:
      v14 = Manager__LoadNoblePhantasmEffect;
LABEL_48:
      if ( EffectEntity__isSe(Entity, 0LL) && isPlaySe )
      {
        v34 = Method_BattleEffectUtility_getEffectObject__;
        if ( (*((_BYTE *)Method_BattleEffectUtility_getEffectObject__ + 83) & 2) != 0 )
          v34 = (_QWORD *)sub_1C21E50(Method_BattleEffectUtility_getEffectObject__);
        v35 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v34, v34[4]);
        OverwriteAssetSoundName__PlaySe_39859480(
          v35,
          (System_String_o *)StringLiteral_3253/*"Battle"*/,
          Entity->fields.se,
          1.0,
          0LL,
          0,
          0LL);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v14,
                                      (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v42 = (UnityEngine_Object_o *)Instance;
        if ( Entity->fields.folderType != 3 )
          goto LABEL_83;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_83;
        if ( !v42 )
          goto LABEL_86;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                      (UnityEngine_GameObject_o *)v42,
                                      (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v11 )
          goto LABEL_86;
        v46 = Instance;
        *(UnityEngine_Color_o *)&v47 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v11, 0LL);
        if ( !v46 )
          goto LABEL_86;
        m_CancellationTokenSource = (int)v46->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource >= 1 )
        {
          v52 = v47;
          v53 = v48;
          v54 = v49;
          v55 = v50;
          v56 = 0;
          while ( 1 )
          {
            if ( v56 >= m_CancellationTokenSource )
LABEL_87:
              sub_1C2209C(Instance, v8);
            Instance = (DataManager_o *)*((_QWORD *)&v46->fields._DispLog + (int)v56);
            if ( !Instance )
              break;
            v61.fields.r = v52;
            v61.fields.g = v53;
            v61.fields.b = v54;
            v61.fields.a = v55;
            UIWidget__set_color((UIWidget_o *)Instance, v61, 0LL);
            m_CancellationTokenSource = (int)v46->fields.m_CancellationTokenSource;
            if ( (int)++v56 >= m_CancellationTokenSource )
              goto LABEL_83;
          }
        }
        else
        {
LABEL_83:
          if ( v42 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v42, 0, 0LL);
            return (UnityEngine_GameObject_o *)v42;
          }
        }
LABEL_86:
        sub_1C22094(Instance, v8);
      }
      v36 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v36);
      if ( !Instance )
        goto LABEL_86;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             Entity->fields.id,
             (const MethodInfo_3502E74 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v37 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v37 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v37->static_fields->SendReportProbability;
      v42 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = Entity->fields.id;
        v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v39, v40, v41);
        v44 = System_String__Format((System_String_o *)StringLiteral_19193/*"effect load failed. effectId = {0}"*/, v43, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_31012460((CrashReporter_o *)Instance, v44, 0LL, 0LL, 0LL);
          v45 = BattleEffectUtility_TypeInfo;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v45);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              Entity->fields.id,
              (const MethodInfo_3503984 *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_86;
      }
      return (UnityEngine_GameObject_o *)v42;
    case 4:
      v28 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v28 = BattleEffectUtility_TypeInfo;
      }
      v29 = System_Int32__ToString((unsigned int)v28->static_fields + 24, 0LL);
      v30 = System_String__Concat_63115476((System_String_o *)StringLiteral_3261/*"Battle/Effect/"*/, v29, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v30, 0LL);
      if ( !Instance )
        goto LABEL_86;
      Manager__LoadNoblePhantasmEffect = AssetData__GetObject_object__49880776(
                                           (AssetData_o *)Instance,
                                           Entity->fields.name,
                                           (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
      goto LABEL_47;
    case 5:
      v31 = Entity->fields.name;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v31, &path, &name, v10);
      v33 = name;
      v32 = path;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadBattleCommonEffect(v32, v33, 0LL);
      goto LABEL_47;
    default:
LABEL_16:
      v14 = 0LL;
      goto LABEL_48;
  }
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObjectSafe(
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        bool isPlaySe,
        float lostTime,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *EffectObject; // x19
  Il2CppObject *v10; // x0
  __int64 v11; // x1

  if ( (byte_4BDEBB1 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_5965/*"Effect Default"*/);
    byte_4BDEBB1 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, isPlaySe, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    EffectObject = (UnityEngine_GameObject_o *)sub_1C22084(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5965/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v10 = UnityEngine_GameObject__AddComponent_object_(
                  EffectObject,
                  (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_1C22094(v10, v11);
    }
    *(float *)&v10[2].klass = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_44034164(
        int32_t folder,
        System_String_o *name,
        UnityEngine_GameObject_o *actorObject,
        const MethodInfo *method)
{
  __int64 *v7; // x8
  System_String_o *v8; // x0
  UnityEngine_GameObject_o *result; // x0
  __int64 v10; // x1
  bool v11; // w8

  if ( (byte_4BDEBB4 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3257/*"Battle/CommonEffects/"*/);
    sub_1C21E38(&StringLiteral_19194/*"effect/"*/);
    byte_4BDEBB4 = 1;
  }
  if ( folder == 2 )
  {
    v7 = &StringLiteral_19194/*"effect/"*/;
LABEL_8:
    v8 = System_String__Concat_63115476((System_String_o *)*v7, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v8, 0LL);
    if ( result )
    {
      if ( result->klass != UnityEngine_GameObject_TypeInfo )
        return 0LL;
    }
    return result;
  }
  if ( folder != 1 )
  {
    if ( folder )
      return 0LL;
    v7 = &StringLiteral_3257/*"Battle/CommonEffects/"*/;
    goto LABEL_8;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v11 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 actorObject,
                                                 (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_1C22094(result, v10);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getEffectSeName(int32_t effectId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x19
  bool isSe; // w8
  System_String_o *result; // x0

  if ( (byte_4BDEBB3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDEBB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     effectId,
                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_1C22094(Instance, v4);
  }
  v5 = Instance;
  isSe = EffectEntity__isSe((EffectEntity_o *)Instance, 0LL);
  result = 0LL;
  if ( isSe )
    return (System_String_o *)v5[2].klass;
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_String_o *NodeName; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDEBB9 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_19300/*"en_body"*/);
    byte_4BDEBB9 = 1;
  }
  v3 = (System_String_o *)StringLiteral_19300/*"en_body"*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_325BE14 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v3;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C22094(Instance, v5);
  NodeName = EffectEntity__getNodeName((EffectEntity_o *)entity, 0LL);
  if ( !System_String__IsNullOrEmpty(NodeName, 0LL) )
    return NodeName;
  return v3;
}


System_String_o *__fastcall BattleEffectUtility__get_EffectAssetName(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_String_o *v2; // x0

  if ( (byte_4BDEBA1 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&StringLiteral_3261/*"Battle/Effect/"*/);
    byte_4BDEBA1 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  v2 = System_Int32__ToString((unsigned int)v1->static_fields + 24, 0LL);
  return System_String__Concat_63115476((System_String_o *)StringLiteral_3261/*"Battle/Effect/"*/, v2, 0LL);
}


EffectMaster_o *__fastcall BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  EffectMaster_o *effectMst; // x19
  Il2CppObject *Master_object; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  BattleEffectUtility_c *v10; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4BDEBA2 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    byte_4BDEBA2 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EffectMaster___);
    v10 = BattleEffectUtility_TypeInfo;
    effectMst = (EffectMaster_o *)Master_object;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v10 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->effectMst = effectMst;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->effectMst, (int64_t)effectMst, v4, v5, v6, v7, v8, v9);
  }
  return effectMst;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_NotPreloadEffectIdHashSet(
        const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  BattleEffectUtility_c *v9; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4BDEB9F & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4BDEB9F = 1;
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
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v9 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v9 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->notPreloadEffectIdHashSet,
      (int64_t)notPreloadEffectIdHashSet,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
  return notPreloadEffectIdHashSet;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_SentEffectIdHashSet(
        const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *sentEffectIdHashSet; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  BattleEffectUtility_c *v9; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4BDEB9E & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4BDEB9E = 1;
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
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1C22084(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_3502780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v9 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v9 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->sentEffectIdHashSet,
      (int64_t)sentEffectIdHashSet,
      v3,
      v4,
      v5,
      v6,
      v7,
      v8);
  }
  return sentEffectIdHashSet;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadActivateSideEffect(const MethodInfo *method)
{
  Il2CppObject *object; // x19

  if ( (byte_4BDEBA8 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C21E38(&StringLiteral_19228/*"effect/ef_sideeffect01"*/);
    byte_4BDEBA8 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_19228/*"effect/ef_sideeffect01"*/,
             (const MethodInfo_3045110 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       object,
                                       (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        UnityEngine_Vector3_o offset,
        int32_t svtId,
        int32_t limitCount,
        BattleEffectUtility_EffectLoadArgument_o *arg,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s12
  float x; // s13
  UnityEngine_GameObject_o *EffectObject; // x20
  BattleEffectUtility_c *v18; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v20; // x1
  System_String_o *NodeName; // x26
  Il2CppObject *MasterData_object; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  BattleEffectUtility_c *v29; // x8
  int64_t v30; // x25
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  struct System_ComponentModel_PropertyChangedEventHandler_o *PropertyChanged; // x8
  System_Collections_ObjectModel_Collection_T__o *v33; // x22
  struct UnityEngine_Vector3_StaticFields *v34; // x8
  float v35; // s9
  float v36; // s11
  float v37; // s10
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v39; // x1
  System_Collections_Generic_IEnumerator_T__o *v40; // x22
  char v41; // w29
  System_String_o *v42; // x25
  float v43; // s10
  float v44; // s11
  float v45; // s9
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v47; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  AuraEffectPosOverwriteEntity_o *v54; // x27
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  UnityEngine_Transform_o *v59; // x22
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Vector3_StaticFields *v61; // x8
  UnityEngine_GameObject_o *v63; // [xsp+18h] [xbp-B8h]
  UnityEngine_Vector3_o Rotation; // [xsp+24h] [xbp-ACh]
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4BDEBA3 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_System_Collections_ObjectModel_Collection_AuraEffectPosOverwriteEntity__GetEnumerator__);
    sub_1C21E38(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C21E38(&Method_DataMasterBase_AuraEffectPosOverwriteMaster__AuraEffectPosOverwriteEntity__string__getEntityList__);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_AuraEffectPosOverwriteEntity__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDEBA3 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, 1, *(const MethodInfo **)&svtId);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
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
                                                                     (const MethodInfo_325BDC8 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !EffectMaster )
            goto LABEL_59;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)EffectMaster,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v29 = BattleEffectUtility_TypeInfo;
          v30 = (int64_t)MasterData_object;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
            v29 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v29->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v30;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->auraPosOverwriteMst,
            v30,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28);
        }
        if ( arg )
          NodeName = (System_String_o *)((__int64 (__fastcall *)(BattleEffectUtility_EffectLoadArgument_o *, System_String_o *, Il2CppMethodPointer))arg->klass->vtable._4_GetParentNodeName.method)(
                                          arg,
                                          NodeName,
                                          arg->klass->vtable._5_GetParentNode.methodPtr);
        EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility_TypeInfo;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility_TypeInfo;
        }
        PropertyChanged = EffectMaster[2].fields.list->fields.PropertyChanged;
        if ( PropertyChanged )
        {
          v33 = *(System_Collections_ObjectModel_Collection_T__o **)&PropertyChanged->fields.extra_arg;
          if ( !byte_4BD6BB9 )
          {
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB9 = 1;
          }
          v63 = targetObject;
          if ( v33 )
          {
            v34 = UnityEngine_Vector3_TypeInfo->static_fields;
            v36 = v34->upVector.fields.y;
            v35 = v34->upVector.fields.z;
            v37 = v34->upVector.fields.x;
            Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                           v33,
                           (const MethodInfo_31F66A4 *)Method_System_Collections_ObjectModel_Collection_AuraEffectPosOverwriteEntity__GetEnumerator__);
            v40 = Enumerator;
            v41 = 0;
            Rotation.fields.y = v36;
            Rotation.fields.z = v35;
            Rotation.fields.x = v37;
            v42 = NodeName;
            v43 = x;
            v44 = y;
            v45 = z;
            while ( 1 )
            {
              if ( !v40 )
                sub_1C22094(Enumerator, v39);
              klass = v40->klass;
              v47 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
              {
                p_offset = &klass->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v47;
                  p_offset += 4;
                  if ( !v47 )
                    goto LABEL_31;
                }
                p_method = (__int64)&klass->vtable[*p_offset].method;
              }
              else
              {
LABEL_31:
                p_method = sub_1C73E18(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      v40,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v50 = v40->klass;
              v51 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
              {
                v52 = &v50->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_AuraEffectPosOverwriteEntity__c **)v52 - 1) != System_Collections_Generic_IEnumerator_AuraEffectPosOverwriteEntity__TypeInfo )
                {
                  --v51;
                  v52 += 4;
                  if ( !v51 )
                    goto LABEL_38;
                }
                v53 = (__int64)&v50->vtable[*v52].method;
              }
              else
              {
LABEL_38:
                v53 = sub_1C73E18(
                        v40,
                        System_Collections_Generic_IEnumerator_AuraEffectPosOverwriteEntity__TypeInfo,
                        0LL);
              }
              v54 = (AuraEffectPosOverwriteEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                                                        v40,
                                                        *(_QWORD *)(v53 + 8));
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
                                                                            svtId,
                                                                            limitCount,
                                                                            effectId,
                                                                            v54,
                                                                            0LL);
              if ( ((unsigned __int8)Enumerator & 1) != 0 )
              {
                if ( !v54 )
                  sub_1C22094(Enumerator, v39);
                v42 = v54->fields.nodeName;
                v65 = AuraEffectPosOverwriteEntity__GetOffset(v54, 0LL);
                v43 = v65.fields.x;
                v41 = 1;
                v44 = v65.fields.y;
                v45 = v65.fields.z;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v54, 0LL);
              }
            }
            v55 = v40->klass;
            v56 = *(unsigned __int16 *)(&v40->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v40->klass->_2.bitflags2 + 3) )
            {
              v57 = &v55->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
              {
                --v56;
                v57 += 4;
                if ( !v56 )
                  goto LABEL_47;
              }
              v58 = (__int64)&v55->vtable[*v57].method;
            }
            else
            {
LABEL_47:
              v58 = sub_1C73E18(v40, System_IDisposable_TypeInfo, 0LL);
            }
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(
                                                                           v40,
                                                                           *(_QWORD *)(v58 + 8));
            if ( EffectObject )
            {
              EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                             EffectObject,
                                                                             0LL);
              if ( v63 )
              {
                v59 = (UnityEngine_Transform_o *)EffectMaster;
                transform = UnityEngine_GameObject__get_transform(v63, 0LL);
                EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                               transform,
                                                                               v42,
                                                                               limitCount,
                                                                               v41 & 1,
                                                                               0LL);
                if ( v59 )
                {
                  UnityEngine_Transform__set_parent(v59, (UnityEngine_Transform_o *)EffectMaster, 0LL);
                  if ( !byte_4BD6BB1 )
                  {
                    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                    byte_4BD6BB1 = 1;
                  }
                  v61 = UnityEngine_Vector3_TypeInfo->static_fields;
                  v66.fields.x = v43 + v61->zeroVector.fields.x;
                  v66.fields.y = v44 + v61->zeroVector.fields.y;
                  v66.fields.z = v45 + v61->zeroVector.fields.z;
                  UnityEngine_Transform__set_localPosition(v59, v66, 0LL);
                  UnityEngine_Transform__set_eulerAngles(v59, Rotation, 0LL);
                  if ( !byte_4BD6BB6 )
                  {
                    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                    byte_4BD6BB6 = 1;
                  }
                  UnityEngine_Transform__set_localScale(
                    v59,
                    UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                    0LL);
                  return EffectObject;
                }
              }
            }
          }
        }
      }
    }
LABEL_59:
    sub_1C22094(EffectMaster, v20);
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_44029316(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_4BDEBA4 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    byte_4BDEBA4 = 1;
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
           0LL,
           v6);
}


int32_t __fastcall BattleEffectUtility__setBattleEffectId(int32_t inId, const MethodInfo *method)
{
  BattleEffectUtility_c *v3; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x8
  int32_t result; // w0

  if ( (byte_4BDEBA0 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    byte_4BDEBA0 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectUtility__showSideEffect(
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
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x1
  System_String_o *SideEffectPath; // x0
  int64_t v20; // x1
  System_String_o *v21; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  AssetLoader_LoadEndDataHandler_o *v28; // x20

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_4BDEBA7 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__);
    sub_1C21E38(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
    sub_1C21E38(&StringLiteral_19152/*"ef_enchant"*/);
    byte_4BDEBA7 = 1;
  }
  v9 = sub_1C22084(BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass23_0___ctor((BattleEffectUtility___c__DisplayClass23_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v9 + 24) = parent;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)parent, v12, v13, v14, v15, v16, v17);
  *(float *)(v9 + 32) = x;
  *(float *)(v9 + 36) = y;
  *(float *)(v9 + 40) = z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v18);
  v20 = StringLiteral_19152/*"ef_enchant"*/;
  v21 = SideEffectPath;
  *(_QWORD *)(v9 + 16) = StringLiteral_19152/*"ef_enchant"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), v20, v22, v23, v24, v25, v26, v27);
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v9,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v21, v28, 1, 0LL);
}


void __fastcall BattleEffectUtility_BuffEffectLoadArgument___ctor(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        BattleActorControl_o *bActor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1

  if ( (byte_4BDEBBC & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEBBC = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !bActor )
      sub_1C22094(v5, v6);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields,
      (int64_t)BuffEffectNodeName_k__BackingField,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
}


void __fastcall BattleEffectUtility_EffectLoadArgument___ctor(
        BattleEffectUtility_EffectLoadArgument_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleEffectUtility_EffectLoadArgument__GetParentNode(
        BattleEffectUtility_EffectLoadArgument_o *this,
        UnityEngine_GameObject_o *targetObj,
        UnityEngine_Transform_o *defParentTr,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x0

  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.effectNodeName, 0LL);
  if ( IsNullOrEmpty )
    return defParentTr;
  if ( !targetObj )
    sub_1C22094(IsNullOrEmpty, v8);
  transform = UnityEngine_GameObject__get_transform(targetObj, 0LL);
  return TransformHelper__getNodeFromLvName(transform, this->fields.effectNodeName, -1, 0, 0LL);
}


System_String_o *__fastcall BattleEffectUtility_EffectLoadArgument__GetParentNodeName(
        BattleEffectUtility_EffectLoadArgument_o *this,
        System_String_o *defNodeName,
        const MethodInfo *method)
{
  if ( this->fields.effectNodeName )
    return this->fields.effectNodeName;
  else
    return defNodeName;
}


void __fastcall BattleEffectUtility___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDEBBD & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility___c_TypeInfo);
    byte_4BDEBBD = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleEffectUtility___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleEffectUtility___c_TypeInfo->static_fields->__9 = (struct BattleEffectUtility___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleEffectUtility___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleEffectUtility___c___ctor(BattleEffectUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_ParticleSystem__o *__fastcall BattleEffectUtility___c___SetColorToShadowEffectParticles_b__41_1(
        BattleEffectUtility___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4BDEBBE & 1) == 0 )
  {
    this = (BattleEffectUtility___c_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
    byte_4BDEBBE = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
  return (System_Collections_Generic_IEnumerable_ParticleSystem__o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       x,
                                                                       1,
                                                                       (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
}


void __fastcall BattleEffectUtility___c__DisplayClass23_0___ctor(
        BattleEffectUtility___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectUtility___c__DisplayClass23_0___showSideEffect_b__0(
        BattleEffectUtility___c__DisplayClass23_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleEffectUtility___c__DisplayClass23_0_o *v4; // x19
  Il2CppObject *Object_object__49880776; // x20
  BattleEffectUtility___c__DisplayClass23_0_o *v6; // x20

  v4 = this;
  if ( (byte_4BDEBBF & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleEffectUtility___c__DisplayClass23_0_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEBBF = 1;
  }
  if ( !data )
    goto LABEL_11;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              data,
                              v4->fields.name,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object_(
                                                          Object_object__49880776,
                                                          (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_11:
    sub_1C22094(this, data);
  }
  v6 = this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0LL);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v6,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v6, v4->fields.scl, 0LL);
}


void __fastcall BattleEffectUtility___c__DisplayClass32_0___ctor(
        BattleEffectUtility___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectUtility___c__DisplayClass32_0___LoadEffectAssetIfNotYet_b__0(
        BattleEffectUtility___c__DisplayClass32_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BattleEffectUtility___c__DisplayClass32_0___LoadEffectAssetIfNotYet_b__1(
        BattleEffectUtility___c__DisplayClass32_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}