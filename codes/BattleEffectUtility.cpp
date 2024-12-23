void __fastcall BattleEffectUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleEffectUtility_c *v13; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v15; // x0
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x19
  void *v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  struct BattleEffectUtility_StaticFields *v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7

  if ( (byte_4B691E3 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v1);
    sub_1BE4ACC(&string___TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_16528/*"_S"*/, v9);
    sub_1BE4ACC(&StringLiteral_16469/*"_M"*/, v10);
    sub_1BE4ACC(&StringLiteral_16462/*"_L"*/, v11);
    sub_1BE4ACC(&StringLiteral_1/*""*/, v12);
    byte_4B691E3 = 1;
  }
  v13 = BattleEffectUtility_TypeInfo;
  static_fields = BattleEffectUtility_TypeInfo->static_fields;
  static_fields->SendReportProbability = 1.0;
  *(_QWORD *)&static_fields->battleEffectId = 0LL;
  *(_QWORD *)&static_fields->wkVec.fields.y = 0LL;
  v15 = v13->static_fields;
  v15->auraPosOverwriteMst = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v15->auraPosOverwriteMst, 0LL, v2, v3, v4, v5, v6, v7);
  v16 = sub_1BE4B74(string___TypeInfo, 4LL);
  if ( !v16 )
    sub_1BE4D28(0LL, v17);
  v24 = v16;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_9;
  v25 = StringLiteral_1/*""*/;
  *(_QWORD *)(v16 + 32) = StringLiteral_1/*""*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v16 + 32), (int64_t)v25, v18, v19, v20, v21, v22, v23);
  if ( *(_DWORD *)(v24 + 24) <= 1u
    || (v32 = StringLiteral_16528/*"_S"*/,
        *(_QWORD *)(v24 + 40) = StringLiteral_16528/*"_S"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 40), v32, v26, v27, v28, v29, v30, v31),
        *(_DWORD *)(v24 + 24) <= 2u)
    || (v39 = StringLiteral_16469/*"_M"*/,
        *(_QWORD *)(v24 + 48) = StringLiteral_16469/*"_M"*/,
        sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 48), v39, v33, v34, v35, v36, v37, v38),
        *(_DWORD *)(v24 + 24) <= 3u) )
  {
LABEL_9:
    sub_1BE4D30(v16, v17);
  }
  v46 = StringLiteral_16462/*"_L"*/;
  *(_QWORD *)(v24 + 56) = StringLiteral_16462/*"_L"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v24 + 56), v46, v40, v41, v42, v43, v44, v45);
  v47 = BattleEffectUtility_TypeInfo->static_fields;
  v47->scalelist = (struct System_String_array *)v24;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v47->scalelist, v24, v48, v49, v50, v51, v52, v53);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v6; // x1

  if ( (byte_4B691D8 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v3);
    byte_4B691D8 = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v4);
  if ( !NotPreloadEffectIdHashSet )
    sub_1BE4D28(0LL, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_34A0080 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall BattleEffectUtility__AddRelatedFunctionEffectIdList(
        System_Int32_array *funcIds,
        System_Collections_Generic_List_int__o **effectIdList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v12; // x21
  unsigned __int64 v13; // x24
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v15; // x22
  unsigned __int64 v16; // x28
  int32_t v17; // w23
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 m_CancellationTokenSource_low; // x10

  if ( (byte_4B691D3 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_FunctionMaster___, effectIdList);
    sub_1BE4ACC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B691D3 = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_1BE4D28(Instance, v10);
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_FunctionMaster___);
    v11 = *(_QWORD *)&funcIds->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v13 = 0LL;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v11 )
          goto LABEL_25;
        if ( !v12 )
          goto LABEL_24;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v12,
                                      funcIds->m_Items[v13 + 1],
                                      (const MethodInfo_31FD7C4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_24;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v15 = Instance;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
LABEL_22:
        LODWORD(v11) = funcIds->max_length;
        if ( (__int64)++v13 >= (int)v11 )
          return;
      }
      v16 = 0LL;
      while ( v16 < (unsigned int)m_CancellationTokenSource )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_24;
        v17 = *((_DWORD *)&v15->fields._DispLog + v16);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v17,
                                      (const MethodInfo_35CF578 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_24;
          v18 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v19 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v18 )
            goto LABEL_24;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v18 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Instance,
              v17,
              *(const MethodInfo_35CF200 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v18 + 4 * m_CancellationTokenSource_low + 32) = v17;
          }
        }
        LODWORD(m_CancellationTokenSource) = v15->fields.m_CancellationTokenSource;
        if ( (__int64)++v16 >= (int)m_CancellationTokenSource )
          goto LABEL_22;
      }
LABEL_25:
      sub_1BE4D30(Instance, v10);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  float v27; // s8
  int32_t v28; // w22
  System_Collections_Generic_List_object__o *v29; // x20
  float a; // s9
  float v31; // s13
  float v32; // s14
  float v33; // s15
  float b; // s12
  float g; // s11
  float r; // s10
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  BattleServantData_o *v43; // x23
  int64_t v44; // x1
  __int64 v45; // x8
  unsigned __int64 v46; // x27
  System_String_o *v47; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x26
  BattleServantData_o *v50; // x25
  BattleServantData_o *v51; // x26
  BattleServantData_o *v52; // x26
  BattleServantData_o *v53; // x26
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  BattleDataDefine_c *v64; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  const MethodInfo *v66; // x2
  NpcServantDisplayTypeDetailEntity_o *v67; // x22
  __int64 v68; // x8
  BattleServantData_o *v69; // x21
  unsigned __int64 v70; // x24
  UnityEngine_Object_o *v71; // x22
  int32_t uniqueId; // w8
  BattleServantData_o *v73; // x22
  unsigned int v74; // w28
  BattleServantData_c **v75; // x8
  UnityEngine_Material_o *v76; // x23
  __int64 v77; // x8
  BattleServantData_o *v78; // x19
  unsigned __int64 v79; // x23
  UnityEngine_Object_o *v80; // x21
  int32_t v81; // w8
  BattleServantData_o *v82; // x21
  unsigned int v83; // w27
  BattleServantData_c **v84; // x8
  UnityEngine_Material_o *v85; // x22
  System_Nullable_Color__o v87; // [xsp+10h] [xbp-C0h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v90; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = svtData;
  if ( (byte_4B691DF & 1) == 0 )
  {
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, actorObj);
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v11);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, v12);
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v13);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_GameObject___ctor__, v16);
    sub_1BE4ACC(&System_Collections_Generic_List_GameObject__TypeInfo, v17);
    sub_1BE4ACC(&Method_System_Nullable_Color__GetValueOrDefault__, v18);
    sub_1BE4ACC(&Method_System_Nullable_Color__get_HasValue__, v19);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v20);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v21);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v22);
    sub_1BE4ACC(&string___TypeInfo, v23);
    sub_1BE4ACC(&StringLiteral_19233/*"en_waist"*/, v24);
    sub_1BE4ACC(&StringLiteral_16386/*"_Color"*/, v25);
    svtData = (BattleServantData_o *)sub_1BE4ACC(&StringLiteral_16342/*"_AddColor"*/, v26);
    byte_4B691DF = 1;
  }
  v27 = 0.0;
  entity = 0LL;
  if ( !isShadow )
  {
    v29 = 0LL;
    a = 1.0;
    v31 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
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
  v28 = entity ? entity->fields.effectId : 0;
  svtData = (BattleServantData_o *)sub_1BE4B74(string___TypeInfo, 1LL);
  if ( !svtData )
    goto LABEL_95;
  v43 = svtData;
  if ( !svtData->fields.uniqueId )
    goto LABEL_96;
  v44 = StringLiteral_19233/*"en_waist"*/;
  svtData->fields.userSvtId.fields.currentCryptoKey = StringLiteral_19233/*"en_waist"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)&svtData->fields.userSvtId, v44, v37, v38, v39, v40, v41, v42);
  if ( limitAddEntity )
  {
    svtData = (BattleServantData_o *)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(limitAddEntity, 0LL);
    v43 = svtData;
    if ( !svtData )
      goto LABEL_95;
  }
  v45 = *(_QWORD *)&v43->fields.uniqueId;
  if ( (int)v45 >= 1 )
  {
    v29 = 0LL;
    v46 = 0LL;
    while ( v46 < (unsigned int)v45 )
    {
      if ( !actorObj )
        goto LABEL_95;
      v47 = (System_String_o *)*(&v43->fields.userSvtId.fields.currentCryptoKey + v46);
      transform = UnityEngine_GameObject__get_transform(actorObj, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v47, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)svtData & 1) != 0 )
      {
        svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !svtData )
          goto LABEL_95;
        svtData = (BattleServantData_o *)ServantAssetLoadManager__createShadowEffect(
                                           (ServantAssetLoadManager_o *)svtData,
                                           0,
                                           v28,
                                           0LL);
        if ( !svtData )
          goto LABEL_95;
        v50 = svtData;
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtData, 0LL);
        if ( !svtData )
          goto LABEL_95;
        UnityEngine_Transform__set_parent(
          (UnityEngine_Transform_o *)svtData,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
        v51 = svtData;
        if ( !byte_4B612E1 )
        {
          svtData = (BattleServantData_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, actorObj);
          byte_4B612E1 = 1;
        }
        if ( !v51 )
          goto LABEL_95;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v51,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
        v52 = svtData;
        if ( !byte_4B612E1 )
        {
          svtData = (BattleServantData_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, actorObj);
          byte_4B612E1 = 1;
        }
        if ( !v52 )
          goto LABEL_95;
        UnityEngine_Transform__set_localEulerAngles(
          (UnityEngine_Transform_o *)v52,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
        v53 = svtData;
        if ( !byte_4B612E6 )
        {
          svtData = (BattleServantData_o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, actorObj);
          byte_4B612E6 = 1;
        }
        if ( !v53 )
          goto LABEL_95;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v53,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v29 )
        {
          v29 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( !v29 )
            goto LABEL_95;
        }
        items = v29->fields._items;
        v61 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v29->fields._version;
        if ( !items )
          goto LABEL_95;
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            (Il2CppObject *)v50,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v63 = &items->obj.klass + size;
          v29->fields._size = size + 1;
          v63[4] = (Il2CppClass *)v50;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v63 + 4), (int64_t)v50, v54, v55, v56, v57, v58, v59);
        }
      }
      LODWORD(v45) = v43->fields.uniqueId;
      if ( (__int64)++v46 >= (int)v45 )
        goto LABEL_42;
    }
LABEL_96:
    sub_1BE4D30(svtData, actorObj);
  }
  v29 = 0LL;
LABEL_42:
  v64 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v64 = BattleDataDefine_TypeInfo;
  }
  p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v64->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
  svtData = (BattleServantData_o *)entity;
  r = p_OVERWRITE_ATK_RATE_PRIORITY[12];
  g = p_OVERWRITE_ATK_RATE_PRIORITY[13];
  b = p_OVERWRITE_ATK_RATE_PRIORITY[14];
  a = p_OVERWRITE_ATK_RATE_PRIORITY[15];
  if ( !entity )
  {
    v31 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
    if ( !isChoco )
      goto LABEL_59;
LABEL_56:
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__changeChocoSahder(actorObj, 0LL);
    goto LABEL_59;
  }
  NpcServantDisplayTypeDetailEntity__get_MainColor(&v87, entity, 0LL);
  if ( v87.fields.hasValue )
  {
    r = v87.fields.value.fields.r;
    g = v87.fields.value.fields.g;
    b = v87.fields.value.fields.b;
    a = v87.fields.value.fields.a;
  }
  svtData = (BattleServantData_o *)entity;
  if ( !entity )
    goto LABEL_95;
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v87, entity, 0LL);
  if ( v87.fields.hasValue )
  {
    v33 = v87.fields.value.fields.r;
    v32 = v87.fields.value.fields.g;
    v31 = v87.fields.value.fields.b;
    v27 = v87.fields.value.fields.a;
  }
  else
  {
    v27 = 0.0;
    v31 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
  }
  v67 = entity;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetColorToShadowEffectParticles((System_Collections_Generic_List_GameObject__o *)v29, v67, v66);
  if ( isChoco )
    goto LABEL_56;
LABEL_59:
  if ( !actorObj )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !svtData )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__49612324(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_2F50624 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( svtData )
  {
    v68 = *(_QWORD *)&svtData->fields.uniqueId;
    v69 = svtData;
    if ( (int)v68 >= 1 )
    {
      v70 = 0LL;
      while ( 1 )
      {
        if ( v70 >= (unsigned int)v68 )
          goto LABEL_96;
        v71 = (UnityEngine_Object_o *)*(&v69->fields.userSvtId.fields.currentCryptoKey + v70);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v71, 0LL, 0LL);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v71 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v71, 0LL);
          if ( !svtData )
            goto LABEL_95;
          uniqueId = svtData->fields.uniqueId;
          v73 = svtData;
          if ( uniqueId >= 1 )
            break;
        }
LABEL_75:
        LODWORD(v68) = v69->fields.uniqueId;
        if ( (__int64)++v70 >= (int)v68 )
          goto LABEL_76;
      }
      v74 = 0;
      while ( v74 < uniqueId )
      {
        v75 = &v73->klass + (int)v74;
        v76 = (UnityEngine_Material_o *)v75[4];
        if ( !v76 )
          goto LABEL_95;
        v89.fields.r = r;
        v89.fields.g = g;
        v89.fields.b = b;
        v89.fields.a = a;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)v75[4],
          (System_String_o *)StringLiteral_16386/*"_Color"*/,
          v89,
          0LL);
        v90.fields.r = v33;
        v90.fields.g = v32;
        v90.fields.b = v31;
        v90.fields.a = v27;
        UnityEngine_Material__SetColor(v76, (System_String_o *)StringLiteral_16342/*"_AddColor"*/, v90, 0LL);
        uniqueId = v73->fields.uniqueId;
        if ( (int)++v74 >= uniqueId )
          goto LABEL_75;
      }
      goto LABEL_96;
    }
  }
LABEL_76:
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !svtData )
LABEL_95:
    sub_1BE4D28(svtData, actorObj);
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__49612324(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_2F50624 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( svtData )
  {
    v77 = *(_QWORD *)&svtData->fields.uniqueId;
    v78 = svtData;
    if ( (int)v77 >= 1 )
    {
      v79 = 0LL;
      while ( 1 )
      {
        if ( v79 >= (unsigned int)v77 )
          goto LABEL_96;
        v80 = (UnityEngine_Object_o *)*(&v78->fields.userSvtId.fields.currentCryptoKey + v79);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v80 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v80, 0LL);
          if ( !svtData )
            goto LABEL_95;
          v81 = svtData->fields.uniqueId;
          v82 = svtData;
          if ( v81 >= 1 )
            break;
        }
LABEL_91:
        LODWORD(v77) = v78->fields.uniqueId;
        if ( (__int64)++v79 >= (int)v77 )
          goto LABEL_92;
      }
      v83 = 0;
      while ( v83 < v81 )
      {
        v84 = &v82->klass + (int)v83;
        v85 = (UnityEngine_Material_o *)v84[4];
        if ( !v85 )
          goto LABEL_95;
        v91.fields.r = r;
        v91.fields.g = g;
        v91.fields.b = b;
        v91.fields.a = a;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)v84[4],
          (System_String_o *)StringLiteral_16386/*"_Color"*/,
          v91,
          0LL);
        v92.fields.r = v33;
        v92.fields.g = v32;
        v92.fields.b = v31;
        v92.fields.a = v27;
        UnityEngine_Material__SetColor(v85, (System_String_o *)StringLiteral_16342/*"_AddColor"*/, v92, 0LL);
        v81 = v82->fields.uniqueId;
        if ( (int)++v83 >= v81 )
          goto LABEL_91;
      }
      goto LABEL_96;
    }
  }
LABEL_92:
  if ( v29 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                             v29,
                                             (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0LL;
}


void __fastcall BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleEffectUtility_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v5; // x1

  if ( (byte_4B691D9 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Clear__, v2);
    byte_4B691D9 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_1BE4D28(0LL, v5);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_349F500 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  __int64 v7; // x1
  int32_t IndexOf_62732148; // w0
  int32_t v9; // w22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_String_o *v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_String_o **v25; // x0
  System_String_o *v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  v6 = baseName;
  if ( (byte_4B691D5 & 1) == 0 )
  {
    sub_1BE4ACC(&StringLiteral_1120/*"/"*/, path);
    baseName = (System_String_o *)sub_1BE4ACC(&StringLiteral_5940/*"Effect/BattleCommon/{0}"*/, v7);
    byte_4B691D5 = 1;
  }
  if ( !v6 )
    sub_1BE4D28(baseName, path);
  IndexOf_62732148 = System_String__LastIndexOf_62732148(v6, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
  if ( IndexOf_62732148 == -1 )
  {
    v26 = System_String__Format((System_String_o *)StringLiteral_5940/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v26;
    sub_1BE4A70((PartyOrganizationUtility_o *)path, (int64_t)v26, v27, v28, v29, v30, v31, v32);
    v25 = name;
    v18 = v6;
    *name = v6;
  }
  else
  {
    v9 = IndexOf_62732148;
    v10 = (Il2CppObject *)System_String__Substring_62717812(v6, 0, IndexOf_62732148, 0LL);
    v11 = System_String__Format((System_String_o *)StringLiteral_5940/*"Effect/BattleCommon/{0}"*/, v10, 0LL);
    *path = v11;
    sub_1BE4A70((PartyOrganizationUtility_o *)path, (int64_t)v11, v12, v13, v14, v15, v16, v17);
    v18 = System_String__Substring(v6, v9 + 1, 0LL);
    *name = v18;
    v25 = name;
  }
  sub_1BE4A70((PartyOrganizationUtility_o *)v25, (int64_t)v18, v19, v20, v21, v22, v23, v24);
}


System_String_array *__fastcall BattleEffectUtility__GetBattleCommonEffectPathList(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  Il2CppObject *v12; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v14; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x23
  const MethodInfo *v17; // x3
  System_String_o *monitor; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B691D4 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, method);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_1BE4ACC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_1BE4ACC(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B691D4 = 1;
  }
  path = 0LL;
  name = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EffectMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_22;
  v15 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1BE4D30(Instance, v12);
      if ( !MasterData_object )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   effectIdList->m_Items[v16 + 1],
                   (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && HIDWORD(Instance[1].klass) == 5 )
      {
        monitor = (System_String_o *)Instance[2].monitor;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, v17);
        if ( !v14 )
          break;
        Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                     v14,
                                     (Il2CppObject *)path,
                                     (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v12 = (Il2CppObject *)path;
          items = v14->fields._items;
          v26 = Method_System_Collections_Generic_List_string__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              v12,
              *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v12;
            sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)v12, v19, v20, v21, v22, v23, v24);
          }
        }
      }
      LODWORD(v15) = effectIdList->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BE4D28(Instance, v12);
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_35EDD7C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B691D0 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_5975/*"Effect/SideEffect/"*/, v6);
    byte_4B691D0 = 1;
  }
  v9 = effectId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_5975/*"Effect/SideEffect/"*/, v7, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  BattleEffectUtility_c *v12; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v16; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B691D7 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, effectPath);
    sub_1BE4ACC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v10);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v11);
    byte_4B691D7 = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)effectPath, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( effectId < 1 )
    goto LABEL_13;
  v12 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v12);
  if ( !EffectMaster )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v16);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0LL) )
    {
LABEL_13:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_17:
    sub_1BE4D28(EffectMaster, v14);
  }
  return (unsigned __int8)Entity & 1;
}


void __fastcall BattleEffectUtility__LoadEffectAssetIfNotYet(
        int32_t effectId,
        System_Action_o *finishCallback,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x21
  CrashReporter_o *SentEffectIdHashSet; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x2
  BattleEffectUtility_c *v29; // x0
  BattleEffectUtility_c *v30; // x0
  BattleEffectUtility_c *v31; // x0
  float SendReportProbability; // s8
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  System_String_o *v37; // x23
  BattleEffectUtility_c *v38; // x0
  BattleDataDefine_c *v39; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v42; // x23
  AssetLoader_LoadEndDataHandler_o *v43; // x24
  System_String_o *v44; // x19
  AssetLoader_LoadEndDataHandler_o *v45; // x23
  int32_t v46; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *effectPath; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B691DA & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, finishCallback);
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, v7);
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_1BE4ACC(&int_TypeInfo, v11);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v13);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v14);
    sub_1BE4ACC(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__, v15);
    sub_1BE4ACC(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__, v16);
    sub_1BE4ACC(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo, v17);
    sub_1BE4ACC(&StringLiteral_22424/*"non-loaded asset was detected. effectId = {0}"*/, v18);
    byte_4B691DA = 1;
  }
  effectPath = 0LL;
  v19 = sub_1BE4D18(BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_37;
  *(_QWORD *)(v19 + 16) = finishCallback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)finishCallback, v22, v23, v24, v25, v26, v27);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v28) )
    goto LABEL_35;
  v29 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v29);
  if ( !SentEffectIdHashSet )
    goto LABEL_37;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_349F560 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v30 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v30);
    if ( !SentEffectIdHashSet )
      goto LABEL_37;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_349F560 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v31 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v31 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v31->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v46 = effectId;
        v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v46, v33, v34, v35);
        v37 = System_String__Format((System_String_o *)StringLiteral_22424/*"non-loaded asset was detected. effectId = {0}"*/, v36, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        CrashReporter__SendReport_30760204(SentEffectIdHashSet, v37, 0LL, 0LL, 0LL);
        v38 = BattleEffectUtility_TypeInfo;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v38);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v39 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v39 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v39->static_fields->ASSET_PARALLEL_LOAD_MAX;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  if ( ((unsigned __int8)SentEffectIdHashSet & 1) != 0 )
  {
    if ( perf )
    {
      assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField;
      v42 = effectPath;
      v43 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v43,
        (Il2CppObject *)v19,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v42,
               v43,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1BE4D28(SentEffectIdHashSet, v21);
  }
  v44 = effectPath;
  v45 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v45,
    (Il2CppObject *)v19,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v44, v45, ASSET_PARALLEL_LOAD_MAX, 0LL) )
LABEL_35:
    ActionExtensions__Call(*(System_Action_o **)(v19 + 16), 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  bool IsNullOrEmpty; // w0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleEffectUtility___c_c *v22; // x0
  System_Func_object__object__o *_9__40_1; // x20
  Il2CppObject *v24; // x21
  struct BattleEffectUtility___c_StaticFields *static_fields; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v35; // x19
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v39; // x1
  __int64 v40; // x19
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  UnityEngine_Component_o *v49; // x0
  __int64 v50; // x1
  UnityEngine_ParticleSystem_o *v51; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x2
  System_String_o *name; // x21
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v60; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v61; // [xsp+38h] [xbp-C8h] BYREF
  System_Nullable_Color__o v62; // [xsp+70h] [xbp-90h] BYREF
  BattleEffectUtility___c__DisplayClass40_0_o v63; // [xsp+90h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+B8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v65; // 0:x0.8
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B691E0 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, displayTypeDetailEntity);
    sub_1BE4ACC(&Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___, v5);
    sub_1BE4ACC(&System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo, v6);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, v9);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BE4ACC(&Method_System_Nullable_Color__get_HasValue__, v11);
    sub_1BE4ACC(&Method_System_Nullable_Color__get_Value__, v12);
    sub_1BE4ACC(&Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__40_1__, v13);
    sub_1BE4ACC(&BattleEffectUtility___c_TypeInfo, v14);
    byte_4B691E0 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  memset(&v63, 0, sizeof(v63));
  m_ParticleSystem = 0LL;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)objectList, 0LL);
  if ( displayTypeDetailEntity )
  {
    if ( !IsNullOrEmpty )
    {
      NpcServantDisplayTypeDetailEntity__get_EffectColor((System_Nullable_Color__o *)&v61, displayTypeDetailEntity, 0LL);
      *(_OWORD *)&v63.fields.effectColor.fields.hasValue = *(_OWORD *)&v61.fields.m_Mode;
      v63.fields.effectColor.fields.value.fields.a = *(float *)&v61.fields.m_GradientMax;
      v63.fields.effectColorDetailDict = NpcServantDisplayTypeDetailEntity__GetEffectColorDetailDict(
                                           displayTypeDetailEntity,
                                           0LL);
      sub_1BE4A70(
        (PartyOrganizationUtility_o *)&v63,
        (int64_t)v63.fields.effectColorDetailDict,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( v63.fields.effectColor.fields.hasValue || v63.fields.effectColorDetailDict )
      {
        v22 = BattleEffectUtility___c_TypeInfo;
        if ( !BattleEffectUtility___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility___c_TypeInfo);
          v22 = BattleEffectUtility___c_TypeInfo;
        }
        _9__40_1 = (System_Func_object__object__o *)v22->static_fields->__9__40_1;
        if ( !_9__40_1 )
        {
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            v22 = BattleEffectUtility___c_TypeInfo;
          }
          v24 = (Il2CppObject *)v22->static_fields->__9;
          _9__40_1 = (System_Func_object__object__o *)sub_1BE4D18(System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo);
          System_Func_object__object____ctor(
            _9__40_1,
            v24,
            Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__40_1__,
            0LL);
          static_fields = BattleEffectUtility___c_TypeInfo->static_fields;
          static_fields->__9__40_1 = (struct System_Func_GameObject__IEnumerable_ParticleSystem___o *)_9__40_1;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&static_fields->__9__40_1,
            (int64_t)_9__40_1,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
        }
        v32 = System_Linq_Enumerable__SelectMany_object__object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__40_1,
                (const MethodInfo_2F8CE2C *)Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___);
        if ( !v32 )
          sub_1BE4D28(0LL, v33);
        klass = v32->klass;
        v35 = v32;
        v36 = *(unsigned __int16 *)(&v32->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v32->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
          {
            --v36;
            p_offset += 4;
            if ( !v36 )
              goto LABEL_18;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_18:
          p_method = sub_1C36AAC(v32, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
        }
        v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
                v35,
                *(_QWORD *)(p_method + 8));
        if ( !v40 )
          sub_1BE4D28(0LL, v39);
        while ( 1 )
        {
          v41 = *(_QWORD *)v40;
          v42 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
          {
            v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v42;
              v43 += 4;
              if ( !v42 )
                goto LABEL_25;
            }
            v44 = v41 + 16LL * *v43 + 312;
          }
          else
          {
LABEL_25:
            v44 = sub_1C36AAC(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
            break;
          v45 = *(_QWORD *)v40;
          v46 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
          {
            v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v47 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
            {
              --v46;
              v47 += 4;
              if ( !v46 )
                goto LABEL_32;
            }
            v48 = v45 + 16LL * *v47 + 312;
          }
          else
          {
LABEL_32:
            v48 = sub_1C36AAC(v40, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
          }
          v49 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v40, *(_QWORD *)(v48 + 8));
          v51 = (UnityEngine_ParticleSystem_o *)v49;
          if ( !v49 )
            sub_1BE4D28(0LL, v50);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v49, 0LL);
          if ( !gameObject )
            sub_1BE4D28(0LL, v53);
          name = UnityEngine_Object__get_name(gameObject, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_40_0(
            (System_Nullable_Color__o *)&v61,
            name,
            &v63,
            v54);
          *(_OWORD *)&v62.fields.hasValue = *(_OWORD *)&v61.fields.m_Mode;
          v62.fields.value.fields.a = *(float *)&v61.fields.m_GradientMax;
          if ( LOBYTE(v61.fields.m_Mode) )
          {
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v51, 0LL).fields.m_ParticleSystem;
            Value = System_Nullable_Color___get_Value(
                      &v62,
                      (const MethodInfo_3706368 *)Method_System_Nullable_Color__get_Value__);
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v61, Value, 0LL);
            v60 = v61;
            v65.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v65, &v60, 0LL);
          }
        }
        v56 = *(_QWORD *)v40;
        v57 = *(unsigned __int16 *)(*(_QWORD *)v40 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v40 + 302LL) )
        {
          v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
          {
            --v57;
            v58 += 4;
            if ( !v57 )
              goto LABEL_44;
          }
          v59 = v56 + 16LL * *v58 + 312;
        }
        else
        {
LABEL_44:
          v59 = sub_1C36AAC(v40, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v59)(v40, *(_QWORD *)(v59 + 8));
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectUtility__SetEffectParent(
        UnityEngine_GameObject_o *effectObj,
        int32_t effectId,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  UnityEngine_Transform_o *v12; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B691CF & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMaster_EffectMaster___, *(_QWORD *)&effectId);
    sub_1BE4ACC(&DataManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v8);
    byte_4B691CF = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          effectId,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EffectEntity__getNodeName(
                                                                        (EffectEntity_o *)entity,
                                                                        0LL),
        !effectObj)
    || (v11 = (System_String_o *)Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                        effectObj,
                                                                        0LL),
        !targetObj)
    || (v12 = (UnityEngine_Transform_o *)Master_object,
        transform = UnityEngine_GameObject__get_transform(targetObj, 0LL),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                        transform,
                                                                        v11,
                                                                        -1,
                                                                        0,
                                                                        0LL),
        !v12) )
  {
LABEL_19:
    sub_1BE4D28(Master_object, v10);
  }
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4B612E1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B612E9 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4B612E9 = 1;
  }
  UnityEngine_Transform__set_eulerAngles(v12, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  if ( !byte_4B612E6 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v16);
    byte_4B612E6 = 1;
  }
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
}


void __fastcall BattleEffectUtility__SetShadowServantColorToMaterials(
        System_Collections_Generic_IEnumerable_Material__o *materialEnumerable,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  BattleDataDefine_c *v18; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  float v20; // s12
  float v21; // s13
  float v22; // s14
  float v23; // s15
  System_Collections_Generic_IEnumerable_T__o *v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v27; // x19
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v31; // x1
  __int64 v32; // x19
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  UnityEngine_Material_o *v41; // x0
  __int64 v42; // x1
  UnityEngine_Material_o *v43; // x20
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Nullable_Color__o v48; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B691E1 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_ExcludeNull_Material___, displayTypeDetailEntity);
    sub_1BE4ACC(&BattleDataDefine_TypeInfo, v5);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerable_Material__TypeInfo, v7);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_Material__TypeInfo, v8);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BE4ACC(&Method_System_Nullable_Color__GetValueOrDefault__, v10);
    sub_1BE4ACC(&Method_System_Nullable_Color__get_HasValue__, v11);
    sub_1BE4ACC(&StringLiteral_16386/*"_Color"*/, v12);
    sub_1BE4ACC(&StringLiteral_16342/*"_AddColor"*/, v13);
    byte_4B691E1 = 1;
  }
  if ( displayTypeDetailEntity
    && (NpcServantDisplayTypeDetailEntity__get_MainColor(&v48, displayTypeDetailEntity, 0LL), v48.fields.hasValue) )
  {
    r = v48.fields.value.fields.r;
    g = v48.fields.value.fields.g;
    b = v48.fields.value.fields.b;
    a = v48.fields.value.fields.a;
  }
  else
  {
    v18 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
      v18 = BattleDataDefine_TypeInfo;
    }
    p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v18->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
    r = p_OVERWRITE_ATK_RATE_PRIORITY[12];
    g = p_OVERWRITE_ATK_RATE_PRIORITY[13];
    b = p_OVERWRITE_ATK_RATE_PRIORITY[14];
    a = p_OVERWRITE_ATK_RATE_PRIORITY[15];
    if ( !displayTypeDetailEntity )
      goto LABEL_11;
  }
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v48, displayTypeDetailEntity, 0LL);
  if ( v48.fields.hasValue )
  {
    v20 = v48.fields.value.fields.r;
    v21 = v48.fields.value.fields.g;
    v22 = v48.fields.value.fields.b;
    v23 = v48.fields.value.fields.a;
    goto LABEL_12;
  }
LABEL_11:
  v20 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  v23 = 0.0;
LABEL_12:
  v24 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)materialEnumerable,
          (const MethodInfo_2F449D0 *)Method_BasicHelper_ExcludeNull_Material___);
  if ( !v24 )
    sub_1BE4D28(0LL, v25);
  klass = v24->klass;
  v27 = v24;
  v28 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Material__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C36AAC(v24, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_1BE4D28(0LL, v31);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_24;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_24:
      v36 = sub_1C36AAC(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Material__c **)v39 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_31;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_31:
      v40 = sub_1C36AAC(v32, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
    }
    v41 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41 )
      sub_1BE4D28(0LL, v42);
    v49.fields.r = r;
    v49.fields.g = g;
    v49.fields.b = b;
    v49.fields.a = a;
    UnityEngine_Material__SetColor(v41, (System_String_o *)StringLiteral_16386/*"_Color"*/, v49, 0LL);
    v50.fields.r = v20;
    v50.fields.g = v21;
    v50.fields.b = v22;
    v50.fields.a = v23;
    UnityEngine_Material__SetColor(v43, (System_String_o *)StringLiteral_16342/*"_AddColor"*/, v50, 0LL);
  }
  v44 = *(_QWORD *)v32;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_39;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_39:
    v47 = sub_1C36AAC(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v32, *(_QWORD *)(v47 + 8));
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x1
  BattleEffectUtility_c *v11; // x0
  EffectMaster_o *EffectMaster; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B691D6 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    sub_1BE4ACC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v10);
    byte_4B691D6 = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)effectPath, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  v11 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v11);
  if ( !EffectMaster )
    goto LABEL_15;
  EffectMaster = (EffectMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_31FD818 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_1BE4D28(EffectMaster, v13);
  if ( HIDWORD(entity[1].klass) == 5 )
  {
    monitor = (System_String_o *)entity[2].monitor;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v14);
  }
  return !System_String__IsNullOrEmpty(*effectPath, 0LL);
}


System_Nullable_Color__o *__fastcall BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_40_0(
        System_Nullable_Color__o *retstr,
        System_String_o *objectName,
        BattleEffectUtility___c__DisplayClass40_0_o *a3,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  float a; // w8
  __int128 v9; // q0
  System_Nullable_Color__o v10; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Color__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B691E4 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_GetValue_string__Nullable_Color____, a3);
    byte_4B691E4 = 1;
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
               (const MethodInfo_2F47718 *)Method_BasicHelper_GetValue_string__Nullable_Color____);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  DataManager_o *Instance; // x0
  __int64 v28; // x1
  EffectEntity_o *Entity; // x19
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x21
  System_String_o *v32; // x0
  UnityEngine_Object_o *v33; // x0
  Il2CppObject *v34; // x22
  UnityEngine_Object_c *klass; // x8
  int32_t methodPtr; // w22
  int32_t LimitCount; // w0
  System_String_o *v38; // x23
  int32_t v39; // w24
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  System_String_o *v43; // x25
  int32_t v44; // w23
  BattleEffectUtility_c *v45; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v47; // x24
  BattleEffectUtility_c *v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x22
  System_String_o *v51; // x22
  System_String_o *v52; // x22
  System_String_o *v53; // x23
  _QWORD *v54; // x0
  System_Reflection_MethodBase_o *v55; // x0
  BattleEffectUtility_c *v56; // x0
  BattleEffectUtility_c *v57; // x0
  float SendReportProbability; // s8
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  UnityEngine_Object_o *v62; // x20
  Il2CppObject *v63; // x0
  System_String_o *v64; // x20
  BattleEffectUtility_c *v65; // x0
  DataManager_o *v66; // x19
  float v67; // s0
  float v68; // s1
  float v69; // s2
  float v70; // s3
  int m_CancellationTokenSource; // w8
  float v72; // s8
  float v73; // s9
  float v74; // s10
  float v75; // s11
  unsigned int v76; // w21
  int32_t id; // [xsp+Ch] [xbp-84h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B691DC & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, procObject);
    sub_1BE4ACC(&AssetManager_TypeInfo, v7);
    sub_1BE4ACC(&Method_BattleEffectUtility_getEffectObject__, v8);
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v9);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EffectMaster___, v10);
    sub_1BE4ACC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v11);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v13);
    sub_1BE4ACC(&UnityEngine_GameObject_TypeInfo, v14);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int__Contains__, v16);
    sub_1BE4ACC(&int_TypeInfo, v17);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v19);
    sub_1BE4ACC(&ServantAssetLoadManager_TypeInfo, v20);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v21);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BE4ACC(&StringLiteral_19120/*"effect load failed. effectId = {0}"*/, v23);
    sub_1BE4ACC(&StringLiteral_19121/*"effect/"*/, v24);
    sub_1BE4ACC(&StringLiteral_3246/*"Battle/Effect/"*/, v25);
    sub_1BE4ACC(&StringLiteral_3238/*"Battle"*/, v26);
    byte_4B691DC = 1;
  }
  name = 0LL;
  path = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_86;
  Entity = (EffectEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               effectId,
                               (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)procObject, 0LL, 0LL);
  v31 = 0LL;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !procObject )
      goto LABEL_86;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  procObject,
                                  (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v31 = (UnityEngine_Object_o *)Instance;
  }
  if ( !Entity )
    goto LABEL_86;
  switch ( Entity->fields.folderType )
  {
    case 1:
      v32 = System_String__Concat_62698808((System_String_o *)StringLiteral_19121/*"effect/"*/, Entity->fields.name, 0LL);
      v33 = UnityEngine_Resources__Load(v32, 0LL);
      if ( !v33 )
        goto LABEL_16;
      if ( (UnityEngine_GameObject_c *)v33->klass == UnityEngine_GameObject_TypeInfo )
        v34 = (Il2CppObject *)v33;
      else
        v34 = 0LL;
      goto LABEL_48;
    case 2:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
      v34 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_48;
      if ( !v31 )
        goto LABEL_86;
      klass = v31[19].klass;
      if ( !klass )
        goto LABEL_86;
      methodPtr = (int32_t)klass[1].vtable._2_GetHashCode.methodPtr;
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v31, 0LL);
      v38 = Entity->fields.name;
      v39 = LimitCount;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                           methodPtr,
                                                           v39,
                                                           v38,
                                                           0LL);
      goto LABEL_47;
    case 3:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
      v34 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_48;
      if ( !v31 )
        goto LABEL_86;
      WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v31, 0LL);
      WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v31, 1, 0LL);
      Instance = (DataManager_o *)BattleActorControl__getEffectFolder((BattleActorControl_o *)v31, 0LL);
      v43 = Entity->fields.name;
      v44 = (int)Instance;
      v45 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v45 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v45->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_86;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_87;
      v47 = System_String__Concat_62698808(v43, scalelist->m_Items[WeaponScale], 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                           v47,
                                                           WeaponGroup,
                                                           v44,
                                                           0LL);
LABEL_47:
      v34 = Manager__LoadNoblePhantasmEffect;
LABEL_48:
      if ( EffectEntity__isSe(Entity, 0LL) && isPlaySe )
      {
        v54 = Method_BattleEffectUtility_getEffectObject__;
        if ( (*((_BYTE *)Method_BattleEffectUtility_getEffectObject__ + 83) & 2) != 0 )
          v54 = (_QWORD *)sub_1BE4AE4(Method_BattleEffectUtility_getEffectObject__);
        v55 = (System_Reflection_MethodBase_o *)sub_1BE4AB0(v54, v54[4]);
        OverwriteAssetSoundName__PlaySe_39518076(
          v55,
          (System_String_o *)StringLiteral_3238/*"Battle"*/,
          Entity->fields.se,
          1.0,
          0LL,
          0LL);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v34,
                                      (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v62 = (UnityEngine_Object_o *)Instance;
        if ( Entity->fields.folderType != 3 )
          goto LABEL_83;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_83;
        if ( !v62 )
          goto LABEL_86;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49980352(
                                      (UnityEngine_GameObject_o *)v62,
                                      (const MethodInfo_2FAA3C0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v31 )
          goto LABEL_86;
        v66 = Instance;
        *(UnityEngine_Color_o *)&v67 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v31, 0LL);
        if ( !v66 )
          goto LABEL_86;
        m_CancellationTokenSource = (int)v66->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource >= 1 )
        {
          v72 = v67;
          v73 = v68;
          v74 = v69;
          v75 = v70;
          v76 = 0;
          while ( 1 )
          {
            if ( v76 >= m_CancellationTokenSource )
LABEL_87:
              sub_1BE4D30(Instance, v28);
            Instance = (DataManager_o *)*((_QWORD *)&v66->fields._DispLog + (int)v76);
            if ( !Instance )
              break;
            v81.fields.r = v72;
            v81.fields.g = v73;
            v81.fields.b = v74;
            v81.fields.a = v75;
            UIWidget__set_color((UIWidget_o *)Instance, v81, 0LL);
            m_CancellationTokenSource = (int)v66->fields.m_CancellationTokenSource;
            if ( (int)++v76 >= m_CancellationTokenSource )
              goto LABEL_83;
          }
        }
        else
        {
LABEL_83:
          if ( v62 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v62, 0, 0LL);
            return (UnityEngine_GameObject_o *)v62;
          }
        }
LABEL_86:
        sub_1BE4D28(Instance, v28);
      }
      v56 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v56);
      if ( !Instance )
        goto LABEL_86;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             Entity->fields.id,
             (const MethodInfo_349F560 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v57 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v57 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v57->static_fields->SendReportProbability;
      v62 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = Entity->fields.id;
        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v59, v60, v61);
        v64 = System_String__Format((System_String_o *)StringLiteral_19120/*"effect load failed. effectId = {0}"*/, v63, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_30760204((CrashReporter_o *)Instance, v64, 0LL, 0LL, 0LL);
          v65 = BattleEffectUtility_TypeInfo;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v65);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              Entity->fields.id,
              (const MethodInfo_34A0070 *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_86;
      }
      return (UnityEngine_GameObject_o *)v62;
    case 4:
      v48 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v48 = BattleEffectUtility_TypeInfo;
      }
      v49 = System_Int32__ToString((unsigned int)v48->static_fields + 24, 0LL);
      v50 = System_String__Concat_62698808((System_String_o *)StringLiteral_3246/*"Battle/Effect/"*/, v49, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v50, 0LL);
      if ( !Instance )
        goto LABEL_86;
      Manager__LoadNoblePhantasmEffect = AssetData__GetObject_object__49525204(
                                           (AssetData_o *)Instance,
                                           Entity->fields.name,
                                           (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
      goto LABEL_47;
    case 5:
      v51 = Entity->fields.name;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v51, &path, &name, v30);
      v53 = name;
      v52 = path;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadBattleCommonEffect(v52, v53, 0LL);
      goto LABEL_47;
    default:
LABEL_16:
      v34 = 0LL;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *EffectObject; // x19
  Il2CppObject *v14; // x0
  __int64 v15; // x1

  if ( (byte_4B691DB & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, procObject);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___, v9);
    sub_1BE4ACC(&UnityEngine_GameObject_TypeInfo, v10);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v11);
    sub_1BE4ACC(&StringLiteral_5934/*"Effect Default"*/, v12);
    byte_4B691DB = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, isPlaySe, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    EffectObject = (UnityEngine_GameObject_o *)sub_1BE4D18(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5934/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  EffectObject,
                  (const MethodInfo_2FA96B4 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_1BE4D28(v14, v15);
    }
    *(float *)&v14[2].klass = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_43715124(
        int32_t folder,
        System_String_o *name,
        UnityEngine_GameObject_o *actorObject,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 *v11; // x8
  System_String_o *v12; // x0
  UnityEngine_GameObject_o *result; // x0
  __int64 v14; // x1
  bool v15; // w8

  if ( (byte_4B691DE & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, name);
    sub_1BE4ACC(&UnityEngine_GameObject_TypeInfo, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    sub_1BE4ACC(&StringLiteral_3242/*"Battle/CommonEffects/"*/, v9);
    sub_1BE4ACC(&StringLiteral_19121/*"effect/"*/, v10);
    byte_4B691DE = 1;
  }
  if ( folder == 2 )
  {
    v11 = &StringLiteral_19121/*"effect/"*/;
LABEL_8:
    v12 = System_String__Concat_62698808((System_String_o *)*v11, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v12, 0LL);
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
    v11 = &StringLiteral_3242/*"Battle/CommonEffects/"*/;
    goto LABEL_8;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v15 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 actorObject,
                                                 (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_1BE4D28(result, v14);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getEffectSeName(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  bool isSe; // w8
  System_String_o *result; // x0

  if ( (byte_4B691DD & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B691DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     effectId,
                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BE4D28(Instance, v6);
  }
  v7 = Instance;
  isSe = EffectEntity__isSe((EffectEntity_o *)Instance, 0LL);
  result = 0LL;
  if ( isSe )
    return (System_String_o *)v7[2].klass;
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x19
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  System_String_o *NodeName; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B691E2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_1BE4ACC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v3);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BE4ACC(&StringLiteral_19227/*"en_body"*/, v5);
    byte_4B691E2 = 1;
  }
  v6 = (System_String_o *)StringLiteral_19227/*"en_body"*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_31FD818 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v6;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BE4D28(Instance, v8);
  NodeName = EffectEntity__getNodeName((EffectEntity_o *)entity, 0LL);
  if ( !System_String__IsNullOrEmpty(NodeName, 0LL) )
    return NodeName;
  return v6;
}


System_String_o *__fastcall BattleEffectUtility__get_EffectAssetName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleEffectUtility_c *v3; // x0
  System_String_o *v4; // x0

  if ( (byte_4B691CB & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v1);
    sub_1BE4ACC(&StringLiteral_3246/*"Battle/Effect/"*/, v2);
    byte_4B691CB = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v3 = BattleEffectUtility_TypeInfo;
  }
  v4 = System_Int32__ToString((unsigned int)v3->static_fields + 24, 0LL);
  return System_String__Concat_62698808((System_String_o *)StringLiteral_3246/*"Battle/Effect/"*/, v4, 0LL);
}


EffectMaster_o *__fastcall BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  EffectMaster_o *effectMst; // x19
  Il2CppObject *Master_object; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  BattleEffectUtility_c *v13; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4B691CC & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v1);
    sub_1BE4ACC(&Method_DataManager_GetMaster_EffectMaster___, v2);
    sub_1BE4ACC(&DataManager_TypeInfo, v3);
    byte_4B691CC = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v4 = BattleEffectUtility_TypeInfo;
  }
  effectMst = v4->static_fields->effectMst;
  if ( !effectMst )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F590BC *)Method_DataManager_GetMaster_EffectMaster___);
    v13 = BattleEffectUtility_TypeInfo;
    effectMst = (EffectMaster_o *)Master_object;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v13 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->effectMst = effectMst;
    sub_1BE4A70((PartyOrganizationUtility_o *)&static_fields->effectMst, (int64_t)effectMst, v7, v8, v9, v10, v11, v12);
  }
  return effectMst;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_NotPreloadEffectIdHashSet(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  BattleEffectUtility_c *v12; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4B691C9 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v2);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4B691C9 = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v4 = BattleEffectUtility_TypeInfo;
  }
  notPreloadEffectIdHashSet = v4->static_fields->notPreloadEffectIdHashSet;
  if ( !notPreloadEffectIdHashSet )
  {
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v12 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v12 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->notPreloadEffectIdHashSet,
      (int64_t)notPreloadEffectIdHashSet,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return notPreloadEffectIdHashSet;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_SentEffectIdHashSet(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *sentEffectIdHashSet; // x19
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  BattleEffectUtility_c *v12; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4B691C8 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_HashSet_int___ctor__, v2);
    sub_1BE4ACC(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4B691C8 = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v4 = BattleEffectUtility_TypeInfo;
  }
  sentEffectIdHashSet = v4->static_fields->sentEffectIdHashSet;
  if ( !sentEffectIdHashSet )
  {
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1BE4D18(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_349EE6C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v12 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v12 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_1BE4A70(
      (PartyOrganizationUtility_o *)&static_fields->sentEffectIdHashSet,
      (int64_t)sentEffectIdHashSet,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  return sentEffectIdHashSet;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadActivateSideEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *object; // x19

  if ( (byte_4B691D2 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v1);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v2);
    sub_1BE4ACC(&Method_UnityEngine_Resources_Load_GameObject___, v3);
    sub_1BE4ACC(&StringLiteral_19155/*"effect/ef_sideeffect01"*/, v4);
    byte_4B691D2 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_19155/*"effect/ef_sideeffect01"*/,
             (const MethodInfo_2FEE238 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       object,
                                       (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_GameObject_o *EffectObject; // x20
  BattleEffectUtility_c *v27; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v29; // x1
  System_String_o *NodeName; // x26
  Il2CppObject *MasterData_object; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  BattleEffectUtility_c *v38; // x8
  int64_t v39; // x25
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  System_Collections_ObjectModel_Collection_T__o *klass; // x22
  struct UnityEngine_Vector3_StaticFields *v43; // x8
  float v44; // s9
  float v45; // s11
  float v46; // s10
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v48; // x1
  System_Collections_Generic_IEnumerator_T__o *v49; // x22
  System_String_o *v50; // x25
  float v51; // s10
  float v52; // s11
  float v53; // s9
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  __int64 v55; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x0
  __int64 methodPtr_low; // x10
  AuraEffectPosOverwriteEntity_o *v64; // x27
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  UnityEngine_Transform_o *v69; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v71; // x1
  struct UnityEngine_Vector3_StaticFields *v72; // x8
  __int64 v73; // x1
  UnityEngine_GameObject_o *v75; // [xsp+18h] [xbp-B8h]
  UnityEngine_Vector3_o Rotation; // [xsp+20h] [xbp-B0h]
  char v77; // [xsp+2Ch] [xbp-A4h]
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4B691CD & 1) == 0 )
  {
    sub_1BE4ACC(&AuraEffectPosOverwriteEntity_TypeInfo, *(_QWORD *)&effectId);
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v17);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v18);
    sub_1BE4ACC(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___, v19);
    sub_1BE4ACC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v20);
    sub_1BE4ACC(&System_IDisposable_TypeInfo, v21);
    sub_1BE4ACC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v22);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v24);
    sub_1BE4ACC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_4B691CD = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, 1, *(const MethodInfo **)&svtId);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    v27 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v27);
    if ( EffectMaster )
    {
      EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                     EffectMaster,
                                                                     effectId,
                                                                     (const MethodInfo_31FD7C4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !EffectMaster )
            goto LABEL_65;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)EffectMaster,
                                (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v38 = BattleEffectUtility_TypeInfo;
          v39 = (int64_t)MasterData_object;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
            v38 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v38->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v39;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&static_fields->auraPosOverwriteMst,
            v39,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37);
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
        comparer = EffectMaster[2].fields._lookup->fields._comparer;
        if ( comparer )
        {
          klass = (System_Collections_ObjectModel_Collection_T__o *)comparer[2].klass;
          if ( !byte_4B612E9 )
          {
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v29);
            byte_4B612E9 = 1;
          }
          v75 = targetObject;
          if ( klass )
          {
            v43 = UnityEngine_Vector3_TypeInfo->static_fields;
            v45 = v43->upVector.fields.y;
            v44 = v43->upVector.fields.z;
            v46 = v43->upVector.fields.x;
            Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                           klass,
                           (const MethodInfo_319A36C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
            v77 = 0;
            v49 = Enumerator;
            Rotation.fields.y = v45;
            Rotation.fields.z = v44;
            Rotation.fields.x = v46;
            v50 = NodeName;
            v51 = x;
            v52 = y;
            v53 = z;
            while ( 1 )
            {
              if ( !v49 )
                sub_1BE4D28(Enumerator, v48);
              v54 = v49->klass;
              v55 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
              {
                p_offset = &v54->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v55;
                  p_offset += 4;
                  if ( !v55 )
                    goto LABEL_31;
                }
                p_method = (__int64)&v54->vtable[*p_offset].method;
              }
              else
              {
LABEL_31:
                p_method = sub_1C36AAC(v49, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      v49,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v58 = v49->klass;
              v59 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
              {
                v60 = &v58->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v60 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                {
                  --v59;
                  v60 += 4;
                  if ( !v59 )
                    goto LABEL_38;
                }
                v61 = (__int64)&v58->vtable[*v60].method;
              }
              else
              {
LABEL_38:
                v61 = sub_1C36AAC(v49, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
              }
              v62 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(
                      v49,
                      *(_QWORD *)(v61 + 8));
              if ( v62
                && (methodPtr_low = LOBYTE(AuraEffectPosOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr),
                    *(unsigned __int8 *)(*(_QWORD *)v62 + 304LL) >= (unsigned int)methodPtr_low) )
              {
                if ( *(AuraEffectPosOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v62 + 200LL) + 8 * methodPtr_low - 8) == AuraEffectPosOverwriteEntity_TypeInfo )
                  v64 = (AuraEffectPosOverwriteEntity_o *)v62;
                else
                  v64 = 0LL;
              }
              else
              {
                v64 = 0LL;
              }
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
                                                                            svtId,
                                                                            limitCount,
                                                                            effectId,
                                                                            v64,
                                                                            0LL);
              if ( ((unsigned __int8)Enumerator & 1) != 0 )
              {
                if ( !v64 )
                  sub_1BE4D28(Enumerator, v48);
                v50 = v64->fields.nodeName;
                v78 = AuraEffectPosOverwriteEntity__GetOffset(v64, 0LL);
                v51 = v78.fields.x;
                v52 = v78.fields.y;
                v53 = v78.fields.z;
                v77 = 1;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v64, 0LL);
              }
            }
            v65 = v49->klass;
            v66 = *(unsigned __int16 *)(&v49->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v49->klass->_2.bitflags2 + 3) )
            {
              v67 = &v65->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
              {
                --v66;
                v67 += 4;
                if ( !v66 )
                  goto LABEL_53;
              }
              v68 = (__int64)&v65->vtable[*v67].method;
            }
            else
            {
LABEL_53:
              v68 = sub_1C36AAC(v49, System_IDisposable_TypeInfo, 0LL);
            }
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
                                                                           v49,
                                                                           *(_QWORD *)(v68 + 8));
            if ( EffectObject )
            {
              EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                             EffectObject,
                                                                             0LL);
              if ( v75 )
              {
                v69 = (UnityEngine_Transform_o *)EffectMaster;
                transform = UnityEngine_GameObject__get_transform(v75, 0LL);
                EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                               transform,
                                                                               v50,
                                                                               limitCount,
                                                                               v77 & 1,
                                                                               0LL);
                if ( v69 )
                {
                  UnityEngine_Transform__set_parent(v69, (UnityEngine_Transform_o *)EffectMaster, 0LL);
                  if ( !byte_4B612E1 )
                  {
                    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v71);
                    byte_4B612E1 = 1;
                  }
                  v72 = UnityEngine_Vector3_TypeInfo->static_fields;
                  v79.fields.x = v51 + v72->zeroVector.fields.x;
                  v79.fields.y = v52 + v72->zeroVector.fields.y;
                  v79.fields.z = v53 + v72->zeroVector.fields.z;
                  UnityEngine_Transform__set_localPosition(v69, v79, 0LL);
                  UnityEngine_Transform__set_eulerAngles(v69, Rotation, 0LL);
                  if ( !byte_4B612E6 )
                  {
                    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v73);
                    byte_4B612E6 = 1;
                  }
                  UnityEngine_Transform__set_localScale(
                    v69,
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
LABEL_65:
    sub_1BE4D28(EffectMaster, v29);
  }
  return EffectObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_43710276(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_4B691CE & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    byte_4B691CE = 1;
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

  if ( (byte_4B691CA & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, method);
    byte_4B691CA = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  System_String_o *SideEffectPath; // x0
  int64_t v25; // x1
  System_String_o *v26; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  AssetLoader_LoadEndDataHandler_o *v33; // x20

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_4B691D1 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, *(_QWORD *)&effectId);
    sub_1BE4ACC(&BattleEffectUtility_TypeInfo, v9);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1BE4ACC(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__, v11);
    sub_1BE4ACC(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo, v12);
    sub_1BE4ACC(&StringLiteral_19079/*"ef_enchant"*/, v13);
    byte_4B691D1 = 1;
  }
  v14 = sub_1BE4D18(BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass23_0___ctor((BattleEffectUtility___c__DisplayClass23_0_o *)v14, 0LL);
  if ( !v14 )
    sub_1BE4D28(v15, v16);
  *(_QWORD *)(v14 + 24) = parent;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)parent, v17, v18, v19, v20, v21, v22);
  *(float *)(v14 + 32) = x;
  *(float *)(v14 + 36) = y;
  *(float *)(v14 + 40) = z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v23);
  v25 = StringLiteral_19079/*"ef_enchant"*/;
  v26 = SideEffectPath;
  *(_QWORD *)(v14 + 16) = StringLiteral_19079/*"ef_enchant"*/;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v14 + 16), v25, v27, v28, v29, v30, v31, v32);
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v14,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v26, v33, 1, 0LL);
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

  if ( (byte_4B691E5 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, bActor);
    byte_4B691E5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !bActor )
      sub_1BE4D28(v5, v6);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_1BE4A70(
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
    sub_1BE4D28(IsNullOrEmpty, v8);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4B691E6 & 1) == 0 )
  {
    sub_1BE4ACC(&BattleEffectUtility___c_TypeInfo, v1);
    byte_4B691E6 = 1;
  }
  v2 = (Il2CppObject *)sub_1BE4D18(BattleEffectUtility___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleEffectUtility___c_TypeInfo->static_fields->__9 = (struct BattleEffectUtility___c_o *)v2;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)BattleEffectUtility___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleEffectUtility___c___ctor(BattleEffectUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_ParticleSystem__o *__fastcall BattleEffectUtility___c___SetColorToShadowEffectParticles_b__40_1(
        BattleEffectUtility___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B691E7 & 1) == 0 )
  {
    this = (BattleEffectUtility___c_o *)sub_1BE4ACC(
                                          &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77228720,
                                          x);
    byte_4B691E7 = 1;
  }
  if ( !x )
    sub_1BE4D28(this, x);
  return (System_Collections_Generic_IEnumerable_ParticleSystem__o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       x,
                                                                       1,
                                                                       (const MethodInfo_2FAA43C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77228720);
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
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Object_object__49525204; // x20
  BattleEffectUtility___c__DisplayClass23_0_o *v8; // x20
  __int64 v9; // x1

  v4 = this;
  if ( (byte_4B691E8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_AssetData_GetObject_GameObject____77158408, data);
    sub_1BE4ACC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (BattleEffectUtility___c__DisplayClass23_0_o *)sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    byte_4B691E8 = 1;
  }
  if ( !data )
    goto LABEL_11;
  Object_object__49525204 = AssetData__GetObject_object__49525204(
                              data,
                              v4->fields.name,
                              (const MethodInfo_2F3B1D4 *)Method_AssetData_GetObject_GameObject____77158408);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object_(
                                                          Object_object__49525204,
                                                          (const MethodInfo_2FDE9E4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_11:
    sub_1BE4D28(this, data);
  }
  v8 = this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0LL);
  if ( !byte_4B612E1 )
  {
    sub_1BE4ACC(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4B612E1 = 1;
  }
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v8,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v8, v4->fields.scl, 0LL);
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