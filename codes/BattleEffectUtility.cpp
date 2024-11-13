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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  BattleEffectUtility_c *v18; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x19
  void *v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  struct BattleEffectUtility_StaticFields *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7

  if ( (byte_4B187A0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&string___TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_16488/*"_S"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_16429/*"_M"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_16422/*"_L"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B187A0 = 1;
  }
  v18 = BattleEffectUtility_TypeInfo;
  static_fields = BattleEffectUtility_TypeInfo->static_fields;
  static_fields->SendReportProbability = 1.0;
  *(_QWORD *)&static_fields->battleEffectId = 0LL;
  *(_QWORD *)&static_fields->wkVec.fields.y = 0LL;
  v20 = v18->static_fields;
  v20->auraPosOverwriteMst = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&v20->auraPosOverwriteMst, 0LL, v2, v3, v4, v5, v6, v7);
  v21 = sub_1BCA888(string___TypeInfo, 4LL);
  if ( !v21 )
    sub_1BCAA3C(0LL, v22);
  v29 = v21;
  if ( !*(_DWORD *)(v21 + 24) )
    goto LABEL_9;
  v30 = StringLiteral_1/*""*/;
  *(_QWORD *)(v21 + 32) = StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)v30, v23, v24, v25, v26, v27, v28);
  if ( *(_DWORD *)(v29 + 24) <= 1u
    || (v37 = StringLiteral_16488/*"_S"*/,
        *(_QWORD *)(v29 + 40) = StringLiteral_16488/*"_S"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 40), v37, v31, v32, v33, v34, v35, v36),
        *(_DWORD *)(v29 + 24) <= 2u)
    || (v44 = StringLiteral_16429/*"_M"*/,
        *(_QWORD *)(v29 + 48) = StringLiteral_16429/*"_M"*/,
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 48), v44, v38, v39, v40, v41, v42, v43),
        *(_DWORD *)(v29 + 24) <= 3u) )
  {
LABEL_9:
    sub_1BCAA44(v21, v22);
  }
  v51 = StringLiteral_16422/*"_L"*/;
  *(_QWORD *)(v29 + 56) = StringLiteral_16422/*"_L"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 56), v51, v45, v46, v47, v48, v49, v50);
  v52 = BattleEffectUtility_TypeInfo->static_fields;
  v52->scalelist = (struct System_String_array *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v52->scalelist, v29, v53, v54, v55, v56, v57, v58);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleEffectUtility_c *v6; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v8; // x1

  if ( (byte_4B18795 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v4, v5);
    byte_4B18795 = 1;
  }
  v6 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v6);
  if ( !NotPreloadEffectIdHashSet )
    sub_1BCAA3C(0LL, v8);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_3455DB8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall BattleEffectUtility__AddRelatedFunctionEffectIdList(
        System_Int32_array *funcIds,
        System_Collections_Generic_List_int__o **effectIdList,
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
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  unsigned __int64 v17; // x24
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v19; // x22
  unsigned __int64 v20; // x28
  int32_t v21; // w23
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 m_CancellationTokenSource_low; // x10

  if ( (byte_4B18790 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_FunctionMaster___, effectIdList, method);
    sub_1BCA7E0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B18790 = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_1BCAA3C(Instance, v14);
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_FunctionMaster___);
    v15 = *(_QWORD *)&funcIds->max_length;
    if ( (int)v15 >= 1 )
    {
      v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)v15 )
          goto LABEL_25;
        if ( !v16 )
          goto LABEL_24;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v16,
                                      funcIds->m_Items[v17 + 1],
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_24;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v19 = Instance;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
LABEL_22:
        LODWORD(v15) = funcIds->max_length;
        if ( (__int64)++v17 >= (int)v15 )
          return;
      }
      v20 = 0LL;
      while ( v20 < (unsigned int)m_CancellationTokenSource )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_24;
        v21 = *((_DWORD *)&v19->fields._DispLog + v20);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v21,
                                      (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_24;
          v22 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v23 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v22 )
            goto LABEL_24;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v22 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Instance,
              v21,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v22 + 4 * m_CancellationTokenSource_low + 32) = v21;
          }
        }
        LODWORD(m_CancellationTokenSource) = v19->fields.m_CancellationTokenSource;
        if ( (__int64)++v20 >= (int)m_CancellationTokenSource )
          goto LABEL_22;
      }
LABEL_25:
      sub_1BCAA44(Instance, v14);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  float v43; // s8
  int32_t v44; // w22
  System_Collections_Generic_List_object__o *v45; // x20
  float a; // s9
  float v47; // s13
  float v48; // s14
  float v49; // s15
  float b; // s12
  float g; // s11
  float r; // s10
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  BattleServantData_o *v59; // x23
  int64_t v60; // x1
  __int64 v61; // x8
  unsigned __int64 v62; // x27
  System_String_o *v63; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v65; // x1
  UnityEngine_Object_o *NodeFromName; // x26
  BattleServantData_o *v67; // x25
  __int64 v68; // x2
  BattleServantData_o *v69; // x26
  __int64 v70; // x2
  BattleServantData_o *v71; // x26
  __int64 v72; // x2
  BattleServantData_o *v73; // x26
  int64_t v74; // x2
  __int64 v75; // x3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  BattleDataDefine_c *v84; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  __int64 v86; // x1
  const MethodInfo *v87; // x2
  NpcServantDisplayTypeDetailEntity_o *v88; // x22
  __int64 v89; // x8
  BattleServantData_o *v90; // x21
  unsigned __int64 v91; // x24
  UnityEngine_Object_o *v92; // x22
  int32_t uniqueId; // w8
  BattleServantData_o *v94; // x22
  unsigned int v95; // w28
  BattleServantData_c **v96; // x8
  UnityEngine_Material_o *v97; // x23
  __int64 v98; // x8
  BattleServantData_o *v99; // x19
  unsigned __int64 v100; // x23
  UnityEngine_Object_o *v101; // x21
  int32_t v102; // w8
  BattleServantData_o *v103; // x21
  unsigned int v104; // w27
  BattleServantData_c **v105; // x8
  UnityEngine_Material_o *v106; // x22
  System_Nullable_Color__o v108; // [xsp+10h] [xbp-C0h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Color_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v112; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v113; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = svtData;
  if ( (byte_4B1879C & 1) == 0 )
  {
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, actorObj, isShadow);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, v13, v14);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__ToArray__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Nullable_Color__GetValueOrDefault__, v25, v26);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_HasValue__, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&string___TypeInfo, v35, v36);
    sub_1BCA7E0(&StringLiteral_19175/*"en_waist"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v39, v40);
    svtData = (BattleServantData_o *)sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v41, v42);
    byte_4B1879C = 1;
  }
  v43 = 0.0;
  entity = 0LL;
  if ( !isShadow )
  {
    v45 = 0LL;
    a = 1.0;
    v47 = 0.0;
    v48 = 0.0;
    v49 = 0.0;
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
  v44 = entity ? entity->fields.effectId : 0;
  svtData = (BattleServantData_o *)sub_1BCA888(string___TypeInfo, 1LL);
  if ( !svtData )
    goto LABEL_95;
  v59 = svtData;
  if ( !svtData->fields.uniqueId )
    goto LABEL_96;
  v60 = StringLiteral_19175/*"en_waist"*/;
  svtData->fields.userSvtId.fields.currentCryptoKey = StringLiteral_19175/*"en_waist"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&svtData->fields.userSvtId, v60, v53, v54, v55, v56, v57, v58);
  if ( limitAddEntity )
  {
    svtData = (BattleServantData_o *)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(limitAddEntity, 0LL);
    v59 = svtData;
    if ( !svtData )
      goto LABEL_95;
  }
  v61 = *(_QWORD *)&v59->fields.uniqueId;
  if ( (int)v61 >= 1 )
  {
    v45 = 0LL;
    v62 = 0LL;
    while ( v62 < (unsigned int)v61 )
    {
      if ( !actorObj )
        goto LABEL_95;
      v63 = (System_String_o *)*(&v59->fields.userSvtId.fields.currentCryptoKey + v62);
      transform = UnityEngine_GameObject__get_transform(actorObj, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v63, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v65);
      svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)svtData & 1) != 0 )
      {
        svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !svtData )
          goto LABEL_95;
        svtData = (BattleServantData_o *)ServantAssetLoadManager__createShadowEffect(
                                           (ServantAssetLoadManager_o *)svtData,
                                           0,
                                           v44,
                                           0LL);
        if ( !svtData )
          goto LABEL_95;
        v67 = svtData;
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtData, 0LL);
        if ( !svtData )
          goto LABEL_95;
        UnityEngine_Transform__set_parent(
          (UnityEngine_Transform_o *)svtData,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v67, 0LL);
        v69 = svtData;
        if ( !byte_4B109C1 )
        {
          svtData = (BattleServantData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, actorObj, v68);
          byte_4B109C1 = 1;
        }
        if ( !v69 )
          goto LABEL_95;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v69,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v67, 0LL);
        v71 = svtData;
        if ( !byte_4B109C1 )
        {
          svtData = (BattleServantData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, actorObj, v70);
          byte_4B109C1 = 1;
        }
        if ( !v71 )
          goto LABEL_95;
        UnityEngine_Transform__set_localEulerAngles(
          (UnityEngine_Transform_o *)v71,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v67, 0LL);
        v73 = svtData;
        if ( !byte_4B109C6 )
        {
          svtData = (BattleServantData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, actorObj, v72);
          byte_4B109C6 = 1;
        }
        if ( !v73 )
          goto LABEL_95;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v73,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v45 )
        {
          v45 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_List_GameObject__TypeInfo,
                                                               actorObj,
                                                               v74,
                                                               v75);
          System_Collections_Generic_List_object____ctor(
            v45,
            (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( !v45 )
            goto LABEL_95;
        }
        items = v45->fields._items;
        v81 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v45->fields._version;
        if ( !items )
          goto LABEL_95;
        size = v45->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v45,
            (Il2CppObject *)v67,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
        }
        else
        {
          v83 = &items->obj.klass + size;
          v45->fields._size = size + 1;
          v83[4] = (Il2CppClass *)v67;
          sub_1BCA784((PartyOrganizationUtility_o *)(v83 + 4), (int64_t)v67, v74, v75, v76, v77, v78, v79);
        }
      }
      LODWORD(v61) = v59->fields.uniqueId;
      if ( (__int64)++v62 >= (int)v61 )
        goto LABEL_42;
    }
LABEL_96:
    sub_1BCAA44(svtData, actorObj);
  }
  v45 = 0LL;
LABEL_42:
  v84 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, actorObj);
    v84 = BattleDataDefine_TypeInfo;
  }
  p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v84->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
  svtData = (BattleServantData_o *)entity;
  r = p_OVERWRITE_ATK_RATE_PRIORITY[12];
  g = p_OVERWRITE_ATK_RATE_PRIORITY[13];
  b = p_OVERWRITE_ATK_RATE_PRIORITY[14];
  a = p_OVERWRITE_ATK_RATE_PRIORITY[15];
  if ( !entity )
  {
    v47 = 0.0;
    v48 = 0.0;
    v49 = 0.0;
    if ( !isChoco )
      goto LABEL_59;
LABEL_56:
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, actorObj);
    ServantAssetLoadManager__changeChocoSahder(actorObj, 0LL);
    goto LABEL_59;
  }
  NpcServantDisplayTypeDetailEntity__get_MainColor(&v108, entity, 0LL);
  if ( v108.fields.hasValue )
  {
    r = v108.fields.value.fields.r;
    g = v108.fields.value.fields.g;
    b = v108.fields.value.fields.b;
    a = v108.fields.value.fields.a;
  }
  svtData = (BattleServantData_o *)entity;
  if ( !entity )
    goto LABEL_95;
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v108, entity, 0LL);
  if ( v108.fields.hasValue )
  {
    v49 = v108.fields.value.fields.r;
    v48 = v108.fields.value.fields.g;
    v47 = v108.fields.value.fields.b;
    v43 = v108.fields.value.fields.a;
  }
  else
  {
    v43 = 0.0;
    v47 = 0.0;
    v48 = 0.0;
    v49 = 0.0;
  }
  v88 = entity;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v86);
  BattleEffectUtility__SetColorToShadowEffectParticles((System_Collections_Generic_List_GameObject__o *)v45, v88, v87);
  if ( isChoco )
    goto LABEL_56;
LABEL_59:
  if ( !actorObj )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !svtData )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( svtData )
  {
    v89 = *(_QWORD *)&svtData->fields.uniqueId;
    v90 = svtData;
    if ( (int)v89 >= 1 )
    {
      v91 = 0LL;
      while ( 1 )
      {
        if ( v91 >= (unsigned int)v89 )
          goto LABEL_96;
        v92 = (UnityEngine_Object_o *)*(&v90->fields.userSvtId.fields.currentCryptoKey + v91);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actorObj);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v92, 0LL, 0LL);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v92 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v92, 0LL);
          if ( !svtData )
            goto LABEL_95;
          uniqueId = svtData->fields.uniqueId;
          v94 = svtData;
          if ( uniqueId >= 1 )
            break;
        }
LABEL_75:
        LODWORD(v89) = v90->fields.uniqueId;
        if ( (__int64)++v91 >= (int)v89 )
          goto LABEL_76;
      }
      v95 = 0;
      while ( v95 < uniqueId )
      {
        v96 = &v94->klass + (int)v95;
        v97 = (UnityEngine_Material_o *)v96[4];
        if ( !v97 )
          goto LABEL_95;
        v110.fields.r = r;
        v110.fields.g = g;
        v110.fields.b = b;
        v110.fields.a = a;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)v96[4],
          (System_String_o *)StringLiteral_16346/*"_Color"*/,
          v110,
          0LL);
        v111.fields.r = v49;
        v111.fields.g = v48;
        v111.fields.b = v47;
        v111.fields.a = v43;
        UnityEngine_Material__SetColor(v97, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v111, 0LL);
        uniqueId = v94->fields.uniqueId;
        if ( (int)++v95 >= uniqueId )
          goto LABEL_75;
      }
      goto LABEL_96;
    }
  }
LABEL_76:
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !svtData )
LABEL_95:
    sub_1BCAA3C(svtData, actorObj);
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__49324452(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_2F0A1A4 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( svtData )
  {
    v98 = *(_QWORD *)&svtData->fields.uniqueId;
    v99 = svtData;
    if ( (int)v98 >= 1 )
    {
      v100 = 0LL;
      while ( 1 )
      {
        if ( v100 >= (unsigned int)v98 )
          goto LABEL_96;
        v101 = (UnityEngine_Object_o *)*(&v99->fields.userSvtId.fields.currentCryptoKey + v100);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, actorObj);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v101, 0LL, 0LL);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v101 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v101, 0LL);
          if ( !svtData )
            goto LABEL_95;
          v102 = svtData->fields.uniqueId;
          v103 = svtData;
          if ( v102 >= 1 )
            break;
        }
LABEL_91:
        LODWORD(v98) = v99->fields.uniqueId;
        if ( (__int64)++v100 >= (int)v98 )
          goto LABEL_92;
      }
      v104 = 0;
      while ( v104 < v102 )
      {
        v105 = &v103->klass + (int)v104;
        v106 = (UnityEngine_Material_o *)v105[4];
        if ( !v106 )
          goto LABEL_95;
        v112.fields.r = r;
        v112.fields.g = g;
        v112.fields.b = b;
        v112.fields.a = a;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)v105[4],
          (System_String_o *)StringLiteral_16346/*"_Color"*/,
          v112,
          0LL);
        v113.fields.r = v49;
        v113.fields.g = v48;
        v113.fields.b = v47;
        v113.fields.a = v43;
        UnityEngine_Material__SetColor(v106, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v113, 0LL);
        v102 = v103->fields.uniqueId;
        if ( (int)++v104 >= v102 )
          goto LABEL_91;
      }
      goto LABEL_96;
    }
  }
LABEL_92:
  if ( v45 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                             v45,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0LL;
}


void __fastcall BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  BattleEffectUtility_c *v5; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v7; // x1

  if ( (byte_4B18796 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Clear__, v3, v4);
    byte_4B18796 = 1;
  }
  v5 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v5);
  if ( !NotPreloadEffectIdHashSet )
    sub_1BCAA3C(0LL, v7);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_3455238 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t IndexOf_62434560; // w0
  int32_t v10; // w22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_String_o *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  System_String_o **v26; // x0
  System_String_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7

  v6 = baseName;
  if ( (byte_4B18792 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, path, name);
    baseName = (System_String_o *)sub_1BCA7E0(&StringLiteral_5927/*"Effect/BattleCommon/{0}"*/, v7, v8);
    byte_4B18792 = 1;
  }
  if ( !v6 )
    sub_1BCAA3C(baseName, path);
  IndexOf_62434560 = System_String__LastIndexOf_62434560(v6, (System_String_o *)StringLiteral_1120/*"/"*/, 0LL);
  if ( IndexOf_62434560 == -1 )
  {
    v27 = System_String__Format((System_String_o *)StringLiteral_5927/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v27;
    sub_1BCA784((PartyOrganizationUtility_o *)path, (int64_t)v27, v28, v29, v30, v31, v32, v33);
    v26 = name;
    v19 = v6;
    *name = v6;
  }
  else
  {
    v10 = IndexOf_62434560;
    v11 = (Il2CppObject *)System_String__Substring_62420224(v6, 0, IndexOf_62434560, 0LL);
    v12 = System_String__Format((System_String_o *)StringLiteral_5927/*"Effect/BattleCommon/{0}"*/, v11, 0LL);
    *path = v12;
    sub_1BCA784((PartyOrganizationUtility_o *)path, (int64_t)v12, v13, v14, v15, v16, v17, v18);
    v19 = System_String__Substring(v6, v10 + 1, 0LL);
    *name = v19;
    v26 = name;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)v26, (int64_t)v19, v20, v21, v22, v23, v24, v25);
}


System_String_array *__fastcall BattleEffectUtility__GetBattleCommonEffectPathList(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *Instance; // x0
  Il2CppObject *v21; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  System_Collections_Generic_List_object__o *v26; // x20
  __int64 v27; // x8
  unsigned __int64 v28; // x23
  const MethodInfo *v29; // x3
  System_String_o *monitor; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B18791 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EffectMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19);
    byte_4B18791 = 1;
  }
  path = 0LL;
  name = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EffectMaster___);
  v26 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v23,
                                                       v24,
                                                       v25);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_22;
  v27 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    while ( 1 )
    {
      if ( v28 >= (unsigned int)v27 )
        sub_1BCAA44(Instance, v21);
      if ( !MasterData_object )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   effectIdList->m_Items[v28 + 1],
                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && HIDWORD(Instance[1].klass) == 5 )
      {
        monitor = (System_String_o *)Instance[2].monitor;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v21);
        BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, v29);
        if ( !v26 )
          break;
        Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                     v26,
                                     (Il2CppObject *)path,
                                     (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v21 = (Il2CppObject *)path;
          items = v26->fields._items;
          v38 = Method_System_Collections_Generic_List_string__Add__;
          ++v26->fields._version;
          if ( !items )
            break;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              v21,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v21;
            sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), (int64_t)v21, v31, v32, v33, v34, v35, v36);
          }
        }
      }
      LODWORD(v27) = effectIdList->max_length;
      if ( (__int64)++v28 >= (int)v27 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BCAA3C(Instance, v21);
  }
LABEL_20:
  if ( !v26 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v26,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1878D & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_5962/*"Effect/SideEffect/"*/, v4, v5);
    byte_4B1878D = 1;
  }
  v8 = effectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
  return System_String__Concat((Il2CppObject *)StringLiteral_5962/*"Effect/SideEffect/"*/, v6, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  BattleEffectUtility_c *v15; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v17; // x1
  Il2CppObject *Entity; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18794 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, effectPath, method);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v12, v13);
    byte_4B18794 = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)effectPath, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  if ( effectId < 1 )
    goto LABEL_13;
  v15 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v14);
  EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v15);
  if ( !EffectMaster )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v19);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v20);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0LL) )
    {
LABEL_13:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_17:
    sub_1BCAA3C(EffectMaster, v17);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x21
  CrashReporter_o *SentEffectIdHashSet; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  __int64 v42; // x1
  BattleEffectUtility_c *v43; // x0
  __int64 v44; // x1
  BattleEffectUtility_c *v45; // x0
  BattleEffectUtility_c *v46; // x0
  float SendReportProbability; // s8
  Il2CppObject *v48; // x0
  System_String_o *v49; // x23
  __int64 v50; // x1
  BattleEffectUtility_c *v51; // x0
  BattleDataDefine_c *v52; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  __int64 v54; // x2
  __int64 v55; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v57; // x23
  AssetLoader_LoadEndDataHandler_o *v58; // x24
  System_String_o *v59; // x19
  AssetLoader_LoadEndDataHandler_o *v60; // x23
  __int64 v61; // x1
  int32_t v62; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *effectPath; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B18797 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, finishCallback, perf);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v7, v8);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v21, v22);
    sub_1BCA7E0(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__, v23, v24);
    sub_1BCA7E0(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__, v25, v26);
    sub_1BCA7E0(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_22346/*"non-loaded asset was detected. effectId = {0}"*/, v29, v30);
    byte_4B18797 = 1;
  }
  effectPath = 0LL;
  v31 = sub_1BCAA2C(BattleEffectUtility___c__DisplayClass32_0_TypeInfo, finishCallback, perf, method);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_37;
  *(_QWORD *)(v31 + 16) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)finishCallback, v34, v35, v36, v37, v38, v39);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v40);
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v41) )
    goto LABEL_35;
  v43 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v42);
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v43);
  if ( !SentEffectIdHashSet )
    goto LABEL_37;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v45 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v44);
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v45);
    if ( !SentEffectIdHashSet )
      goto LABEL_37;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v46 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v44);
        v46 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v46->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v62 = effectId;
        v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
        v49 = System_String__Format((System_String_o *)StringLiteral_22346/*"non-loaded asset was detected. effectId = {0}"*/, v48, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        CrashReporter__SendReport_30652960(SentEffectIdHashSet, v49, 0LL, 0LL, 0LL);
        v51 = BattleEffectUtility_TypeInfo;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v50);
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v51);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v52 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v44);
    v52 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v52->static_fields->ASSET_PARALLEL_LOAD_MAX;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44);
  SentEffectIdHashSet = (CrashReporter_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  if ( ((unsigned __int8)SentEffectIdHashSet & 1) != 0 )
  {
    if ( perf )
    {
      assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField;
      v57 = effectPath;
      v58 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v33, v54, v55);
      AssetLoader_LoadEndDataHandler___ctor(
        v58,
        (Il2CppObject *)v31,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v57,
               v58,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1BCAA3C(SentEffectIdHashSet, v33);
  }
  v59 = effectPath;
  v60 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v33, v54, v55);
  AssetLoader_LoadEndDataHandler___ctor(
    v60,
    (Il2CppObject *)v31,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v61);
  if ( !AssetManager__loadAssetStorage(v59, v60, ASSET_PARALLEL_LOAD_MAX, 0LL) )
LABEL_35:
    ActionExtensions__Call(*(System_Action_o **)(v31 + 16), 0LL);
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  bool IsNullOrEmpty; // w0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  BattleEffectUtility___c_c *v35; // x0
  System_Func_object__object__o *_9__40_1; // x20
  Il2CppObject *v37; // x21
  struct BattleEffectUtility___c_StaticFields *static_fields; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v45; // x0
  __int64 v46; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v48; // x19
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v52; // x1
  __int64 v53; // x19
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  UnityEngine_Component_o *v62; // x0
  __int64 v63; // x1
  UnityEngine_ParticleSystem_o *v64; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v66; // x1
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  System_String_o *name; // x21
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v74; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v75; // [xsp+38h] [xbp-C8h] BYREF
  System_Nullable_Color__o v76; // [xsp+70h] [xbp-90h] BYREF
  BattleEffectUtility___c__DisplayClass40_0_o v77; // [xsp+90h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+B8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v79; // 0:x0.8
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1879D & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, displayTypeDetailEntity, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___, v5, v6);
    sub_1BCA7E0(&System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_HasValue__, v17, v18);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_Value__, v19, v20);
    sub_1BCA7E0(&Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__40_1__, v21, v22);
    sub_1BCA7E0(&BattleEffectUtility___c_TypeInfo, v23, v24);
    byte_4B1879D = 1;
  }
  memset(&v76, 0, sizeof(v76));
  memset(&v77, 0, sizeof(v77));
  m_ParticleSystem = 0LL;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)objectList, 0LL);
  if ( displayTypeDetailEntity )
  {
    if ( !IsNullOrEmpty )
    {
      NpcServantDisplayTypeDetailEntity__get_EffectColor((System_Nullable_Color__o *)&v75, displayTypeDetailEntity, 0LL);
      *(_OWORD *)&v77.fields.effectColor.fields.hasValue = *(_OWORD *)&v75.fields.m_Mode;
      v77.fields.effectColor.fields.value.fields.a = *(float *)&v75.fields.m_GradientMax;
      v77.fields.effectColorDetailDict = NpcServantDisplayTypeDetailEntity__GetEffectColorDetailDict(
                                           displayTypeDetailEntity,
                                           0LL);
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v77,
        (int64_t)v77.fields.effectColorDetailDict,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      if ( v77.fields.effectColor.fields.hasValue || v77.fields.effectColorDetailDict )
      {
        v35 = BattleEffectUtility___c_TypeInfo;
        if ( !BattleEffectUtility___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility___c_TypeInfo, v32);
          v35 = BattleEffectUtility___c_TypeInfo;
        }
        _9__40_1 = (System_Func_object__object__o *)v35->static_fields->__9__40_1;
        if ( !_9__40_1 )
        {
          if ( !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35, v32);
            v35 = BattleEffectUtility___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v35->static_fields->__9;
          _9__40_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                        System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo,
                                                        v32,
                                                        v33,
                                                        v34);
          System_Func_object__object____ctor(
            _9__40_1,
            v37,
            Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__40_1__,
            0LL);
          static_fields = BattleEffectUtility___c_TypeInfo->static_fields;
          static_fields->__9__40_1 = (struct System_Func_GameObject__IEnumerable_ParticleSystem___o *)_9__40_1;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__40_1,
            (int64_t)_9__40_1,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
        }
        v45 = System_Linq_Enumerable__SelectMany_object__object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__40_1,
                (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___);
        if ( !v45 )
          sub_1BCAA3C(0LL, v46);
        klass = v45->klass;
        v48 = v45;
        v49 = *(unsigned __int16 *)(&v45->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v45->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
          {
            --v49;
            p_offset += 4;
            if ( !v49 )
              goto LABEL_18;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_18:
          p_method = sub_1C1C7C0(v45, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
        }
        v53 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
                v48,
                *(_QWORD *)(p_method + 8));
        if ( !v53 )
          sub_1BCAA3C(0LL, v52);
        while ( 1 )
        {
          v54 = *(_QWORD *)v53;
          v55 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
          {
            v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
            while ( *((System_Collections_IEnumerator_c **)v56 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v55;
              v56 += 4;
              if ( !v55 )
                goto LABEL_25;
            }
            v57 = v54 + 16LL * *v56 + 312;
          }
          else
          {
LABEL_25:
            v57 = sub_1C1C7C0(v53, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8)) & 1) == 0 )
            break;
          v58 = *(_QWORD *)v53;
          v59 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
          {
            v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v60 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
            {
              --v59;
              v60 += 4;
              if ( !v59 )
                goto LABEL_32;
            }
            v61 = v58 + 16LL * *v60 + 312;
          }
          else
          {
LABEL_32:
            v61 = sub_1C1C7C0(v53, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
          }
          v62 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v53, *(_QWORD *)(v61 + 8));
          v64 = (UnityEngine_ParticleSystem_o *)v62;
          if ( !v62 )
            sub_1BCAA3C(0LL, v63);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v62, 0LL);
          if ( !gameObject )
            sub_1BCAA3C(0LL, v66);
          name = UnityEngine_Object__get_name(gameObject, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v67);
          BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_40_0(
            (System_Nullable_Color__o *)&v75,
            name,
            &v77,
            v68);
          *(_OWORD *)&v76.fields.hasValue = *(_OWORD *)&v75.fields.m_Mode;
          v76.fields.value.fields.a = *(float *)&v75.fields.m_GradientMax;
          if ( LOBYTE(v75.fields.m_Mode) )
          {
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v64, 0LL).fields.m_ParticleSystem;
            Value = System_Nullable_Color___get_Value(
                      &v76,
                      (const MethodInfo_36BBBFC *)Method_System_Nullable_Color__get_Value__);
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v75, Value, 0LL);
            v74 = v75;
            v79.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v79, &v74, 0LL);
          }
        }
        v70 = *(_QWORD *)v53;
        v71 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
        {
          v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
          {
            --v71;
            v72 += 4;
            if ( !v71 )
              goto LABEL_44;
          }
          v73 = v70 + 16LL * *v72 + 312;
        }
        else
        {
LABEL_44:
          v73 = sub_1C1C7C0(v53, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v73)(v53, *(_QWORD *)(v73 + 8));
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  UnityEngine_Transform_o *v14; // x19
  UnityEngine_Transform_o *transform; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1878C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EffectMaster___, *(_QWORD *)&effectId, targetObj);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v9, v10);
    byte_4B1878C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&effectId);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          effectId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity
    || (Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)EffectEntity__getNodeName(
                                                                        (EffectEntity_o *)entity,
                                                                        0LL),
        !effectObj)
    || (v13 = (System_String_o *)Master_object,
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                        effectObj,
                                                                        0LL),
        !targetObj)
    || (v14 = (UnityEngine_Transform_o *)Master_object,
        transform = UnityEngine_GameObject__get_transform(targetObj, 0LL),
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                        transform,
                                                                        v13,
                                                                        -1,
                                                                        0,
                                                                        0LL),
        !v14) )
  {
LABEL_19:
    sub_1BCAA3C(Master_object, v12);
  }
  UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v16, v17);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v14, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4B109C9 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v18, v19);
    byte_4B109C9 = 1;
  }
  UnityEngine_Transform__set_eulerAngles(v14, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v20, v21);
    byte_4B109C6 = 1;
  }
  UnityEngine_Transform__set_localScale(v14, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
}


void __fastcall BattleEffectUtility__SetShadowServantColorToMaterials(
        System_Collections_Generic_IEnumerable_Material__o *materialEnumerable,
        NpcServantDisplayTypeDetailEntity_o *displayTypeDetailEntity,
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
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  BattleDataDefine_c *v27; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  float v29; // s12
  float v30; // s13
  float v31; // s14
  float v32; // s15
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerable_T__c *klass; // x8
  System_Collections_Generic_IEnumerable_T__o *v36; // x19
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v40; // x1
  __int64 v41; // x19
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  UnityEngine_Material_o *v50; // x0
  __int64 v51; // x1
  UnityEngine_Material_o *v52; // x20
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  System_Nullable_Color__o v57; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1879E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_Material___, displayTypeDetailEntity, method);
    sub_1BCA7E0(&BattleDataDefine_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_Material__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_Material__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Nullable_Color__GetValueOrDefault__, v15, v16);
    sub_1BCA7E0(&Method_System_Nullable_Color__get_HasValue__, v17, v18);
    sub_1BCA7E0(&StringLiteral_16346/*"_Color"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_16302/*"_AddColor"*/, v21, v22);
    byte_4B1879E = 1;
  }
  if ( displayTypeDetailEntity
    && (NpcServantDisplayTypeDetailEntity__get_MainColor(&v57, displayTypeDetailEntity, 0LL), v57.fields.hasValue) )
  {
    r = v57.fields.value.fields.r;
    g = v57.fields.value.fields.g;
    b = v57.fields.value.fields.b;
    a = v57.fields.value.fields.a;
  }
  else
  {
    v27 = BattleDataDefine_TypeInfo;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, displayTypeDetailEntity);
      v27 = BattleDataDefine_TypeInfo;
    }
    p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v27->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
    r = p_OVERWRITE_ATK_RATE_PRIORITY[12];
    g = p_OVERWRITE_ATK_RATE_PRIORITY[13];
    b = p_OVERWRITE_ATK_RATE_PRIORITY[14];
    a = p_OVERWRITE_ATK_RATE_PRIORITY[15];
    if ( !displayTypeDetailEntity )
      goto LABEL_11;
  }
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v57, displayTypeDetailEntity, 0LL);
  if ( v57.fields.hasValue )
  {
    v29 = v57.fields.value.fields.r;
    v30 = v57.fields.value.fields.g;
    v31 = v57.fields.value.fields.b;
    v32 = v57.fields.value.fields.a;
    goto LABEL_12;
  }
LABEL_11:
  v29 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
LABEL_12:
  v33 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)materialEnumerable,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_Material___);
  if ( !v33 )
    sub_1BCAA3C(0LL, v34);
  klass = v33->klass;
  v36 = v33;
  v37 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Material__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_17;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_17:
    p_method = sub_1C1C7C0(v33, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
  }
  v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          v36,
          *(_QWORD *)(p_method + 8));
  if ( !v41 )
    sub_1BCAA3C(0LL, v40);
  while ( 1 )
  {
    v42 = *(_QWORD *)v41;
    v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v43;
        v44 += 4;
        if ( !v43 )
          goto LABEL_24;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_24:
      v45 = sub_1C1C7C0(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
      break;
    v46 = *(_QWORD *)v41;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Material__c **)v48 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_31;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_31:
      v49 = sub_1C1C7C0(v41, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
    }
    v50 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
    v52 = v50;
    if ( !v50 )
      sub_1BCAA3C(0LL, v51);
    v58.fields.r = r;
    v58.fields.g = g;
    v58.fields.b = b;
    v58.fields.a = a;
    UnityEngine_Material__SetColor(v50, (System_String_o *)StringLiteral_16346/*"_Color"*/, v58, 0LL);
    v59.fields.r = v29;
    v59.fields.g = v30;
    v59.fields.b = v31;
    v59.fields.a = v32;
    UnityEngine_Material__SetColor(v52, (System_String_o *)StringLiteral_16302/*"_AddColor"*/, v59, 0LL);
  }
  v53 = *(_QWORD *)v41;
  v54 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
  {
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_39;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_39:
    v56 = sub_1C1C7C0(v41, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v41, *(_QWORD *)(v56 + 8));
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
  __int64 v11; // x2
  __int64 v12; // x1
  BattleEffectUtility_c *v13; // x0
  EffectMaster_o *EffectMaster; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B18793 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId, method);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v10, v11);
    byte_4B18793 = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)effectPath, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  v13 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v12);
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v13);
  if ( !EffectMaster )
    goto LABEL_15;
  EffectMaster = (EffectMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_31B2E94 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_1BCAA3C(EffectMaster, v15);
  if ( HIDWORD(entity[1].klass) == 5 )
  {
    monitor = (System_String_o *)entity[2].monitor;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v15);
    BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v16);
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

  if ( (byte_4B187A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_string__Nullable_Color____, a3, method);
    byte_4B187A1 = 1;
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
               (const MethodInfo_2F01298 *)Method_BasicHelper_GetValue_string__Nullable_Color____);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  DataManager_o *Instance; // x0
  __int64 v48; // x1
  __int64 v49; // x1
  EffectEntity_o *Entity; // x19
  const MethodInfo *v51; // x3
  UnityEngine_Object_o *v52; // x21
  System_String_o *v53; // x0
  UnityEngine_Object_o *v54; // x0
  Il2CppObject *v55; // x22
  UnityEngine_Object_c *klass; // x8
  int32_t methodPtr; // w23
  int32_t v58; // w22
  int32_t LimitCount; // w0
  __int64 v60; // x1
  System_String_o *v61; // x24
  int32_t v62; // w25
  Il2CppObject *Manager__loadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  System_String_o *v66; // x25
  int32_t v67; // w23
  BattleEffectUtility_c *v68; // x8
  struct System_String_array *scalelist; // x8
  __int64 v70; // x1
  System_String_o *v71; // x24
  BattleEffectUtility_c *v72; // x0
  System_String_o *v73; // x0
  __int64 v74; // x1
  System_String_o *v75; // x22
  System_String_o *v76; // x22
  __int64 v77; // x1
  System_String_o *v78; // x22
  System_String_o *v79; // x23
  __int64 v80; // x1
  _QWORD *v81; // x0
  System_Reflection_MethodBase_o *v82; // x0
  __int64 v83; // x1
  BattleEffectUtility_c *v84; // x0
  __int64 v85; // x1
  BattleEffectUtility_c *v86; // x0
  float SendReportProbability; // s8
  UnityEngine_Object_o *v88; // x20
  Il2CppObject *v89; // x0
  System_String_o *v90; // x20
  __int64 v91; // x1
  BattleEffectUtility_c *v92; // x0
  DataManager_o *v93; // x19
  float v94; // s0
  float v95; // s1
  float v96; // s2
  float v97; // s3
  int m_CancellationTokenSource; // w8
  float v99; // s8
  float v100; // s9
  float v101; // s10
  float v102; // s11
  unsigned int v103; // w21
  int32_t id; // [xsp+Ch] [xbp-84h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Color_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B18799 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, procObject, isPlaySe);
    sub_1BCA7E0(&AssetManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleEffectUtility_getEffectObject__, v9, v10);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EffectMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v15, v16);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v17, v18);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v19, v20);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Add__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int__Contains__, v25, v26);
    sub_1BCA7E0(&int_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&ServantAssetLoadManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v35, v36);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v37, v38);
    sub_1BCA7E0(&StringLiteral_19063/*"effect load failed. effectId = {0}"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_19064/*"effect/"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_3238/*"Battle/Effect/"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_3230/*"Battle"*/, v45, v46);
    byte_4B18799 = 1;
  }
  name = 0LL;
  path = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_86;
  Entity = (EffectEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               effectId,
                               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)procObject, 0LL, 0LL);
  v52 = 0LL;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !procObject )
      goto LABEL_86;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                  procObject,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v52 = (UnityEngine_Object_o *)Instance;
  }
  if ( !Entity )
    goto LABEL_86;
  switch ( Entity->fields.folderType )
  {
    case 1:
      v53 = System_String__Concat_62401220((System_String_o *)StringLiteral_19064/*"effect/"*/, Entity->fields.name, 0LL);
      v54 = UnityEngine_Resources__Load(v53, 0LL);
      if ( !v54 )
        goto LABEL_16;
      if ( (UnityEngine_GameObject_c *)v54->klass == UnityEngine_GameObject_TypeInfo )
        v55 = (Il2CppObject *)v54;
      else
        v55 = 0LL;
      goto LABEL_48;
    case 2:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
      v55 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_48;
      if ( !v52 )
        goto LABEL_86;
      klass = v52[19].klass;
      if ( !klass )
        goto LABEL_86;
      methodPtr = (int32_t)klass[1].vtable._2_GetHashCode.methodPtr;
      v58 = (int32_t)klass[2]._1.name;
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v52, 0LL);
      v61 = Entity->fields.name;
      v62 = LimitCount;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v60);
      Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                           methodPtr,
                                                           v62,
                                                           v61,
                                                           v58,
                                                           0LL);
      goto LABEL_47;
    case 3:
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v52, 0LL, 0LL);
      v55 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_48;
      if ( !v52 )
        goto LABEL_86;
      WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v52, 0LL);
      WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v52, 1, 0LL);
      Instance = (DataManager_o *)BattleActorControl__getEffectFolder((BattleActorControl_o *)v52, 0LL);
      v66 = Entity->fields.name;
      v67 = (int)Instance;
      v68 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v48);
        v68 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v68->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_86;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_87;
      v71 = System_String__Concat_62401220(v66, scalelist->m_Items[WeaponScale], 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v70);
      Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                           v71,
                                                           WeaponGroup,
                                                           v67,
                                                           0LL);
LABEL_47:
      v55 = Manager__loadNoblePhantasmEffect;
LABEL_48:
      if ( EffectEntity__isSe(Entity, 0LL) && isPlaySe )
      {
        v81 = Method_BattleEffectUtility_getEffectObject__;
        if ( (*((_BYTE *)Method_BattleEffectUtility_getEffectObject__ + 83) & 2) != 0 )
          v81 = (_QWORD *)sub_1BCA7F8(Method_BattleEffectUtility_getEffectObject__);
        v82 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v81, v81[4]);
        OverwriteAssetSoundName__PlaySe_39322196(
          v82,
          (System_String_o *)StringLiteral_3230/*"Battle"*/,
          Entity->fields.se,
          1.0,
          0LL,
          0LL);
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v55, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83);
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_object_(
                                      v55,
                                      (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v88 = (UnityEngine_Object_o *)Instance;
        if ( Entity->fields.folderType != 3 )
          goto LABEL_83;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v88, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_83;
        if ( !v88 )
          goto LABEL_86;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                      (UnityEngine_GameObject_o *)v88,
                                      (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v52 )
          goto LABEL_86;
        v93 = Instance;
        *(UnityEngine_Color_o *)&v94 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v52, 0LL);
        if ( !v93 )
          goto LABEL_86;
        m_CancellationTokenSource = (int)v93->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource >= 1 )
        {
          v99 = v94;
          v100 = v95;
          v101 = v96;
          v102 = v97;
          v103 = 0;
          while ( 1 )
          {
            if ( v103 >= m_CancellationTokenSource )
LABEL_87:
              sub_1BCAA44(Instance, v48);
            Instance = (DataManager_o *)*((_QWORD *)&v93->fields._DispLog + (int)v103);
            if ( !Instance )
              break;
            v108.fields.r = v99;
            v108.fields.g = v100;
            v108.fields.b = v101;
            v108.fields.a = v102;
            UIWidget__set_color((UIWidget_o *)Instance, v108, 0LL);
            m_CancellationTokenSource = (int)v93->fields.m_CancellationTokenSource;
            if ( (int)++v103 >= m_CancellationTokenSource )
              goto LABEL_83;
          }
        }
        else
        {
LABEL_83:
          if ( v88 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v88, 0, 0LL);
            return (UnityEngine_GameObject_o *)v88;
          }
        }
LABEL_86:
        sub_1BCAA3C(Instance, v48);
      }
      v84 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v83);
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v84);
      if ( !Instance )
        goto LABEL_86;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             Entity->fields.id,
             (const MethodInfo_3455298 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v86 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v85);
        v86 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v86->static_fields->SendReportProbability;
      v88 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = Entity->fields.id;
        v89 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
        v90 = System_String__Format((System_String_o *)StringLiteral_19063/*"effect load failed. effectId = {0}"*/, v89, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_30652960((CrashReporter_o *)Instance, v90, 0LL, 0LL, 0LL);
          v92 = BattleEffectUtility_TypeInfo;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v91);
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v92);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              Entity->fields.id,
              (const MethodInfo_3455DA8 *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_86;
      }
      return (UnityEngine_GameObject_o *)v88;
    case 4:
      v72 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v48);
        v72 = BattleEffectUtility_TypeInfo;
      }
      v73 = System_Int32__ToString((unsigned int)v72->static_fields + 24, 0LL);
      v75 = System_String__Concat_62401220((System_String_o *)StringLiteral_3238/*"Battle/Effect/"*/, v73, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v74);
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v75, 0LL);
      if ( !Instance )
        goto LABEL_86;
      Manager__loadNoblePhantasmEffect = AssetData__GetObject_object__49237568(
                                           (AssetData_o *)Instance,
                                           Entity->fields.name,
                                           (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      goto LABEL_47;
    case 5:
      v76 = Entity->fields.name;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v48);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v76, &path, &name, v51);
      v79 = name;
      v78 = path;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v77);
      Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadBattleCommonEffect(v78, v79, 0LL);
      goto LABEL_47;
    default:
LABEL_16:
      v55 = 0LL;
      goto LABEL_48;
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObjectSafe(
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        bool isPlaySe,
        float lostTime,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  UnityEngine_GameObject_o *EffectObject; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  Il2CppObject *v22; // x0
  __int64 v23; // x1

  if ( (byte_4B18798 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, procObject, isPlaySe);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___, v9, v10);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_5921/*"Effect Default"*/, v15, v16);
    byte_4B18798 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, procObject);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, isPlaySe, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    EffectObject = (UnityEngine_GameObject_o *)sub_1BCAA2C(UnityEngine_GameObject_TypeInfo, v19, v20, v21);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5921/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v22 = UnityEngine_GameObject__AddComponent_object_(
                  EffectObject,
                  (const MethodInfo_2F625E8 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_1BCAA3C(v22, v23);
    }
    *(float *)&v22[2].klass = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_43458404(
        int32_t folder,
        System_String_o *name,
        UnityEngine_GameObject_o *actorObject,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 *v15; // x8
  System_String_o *v16; // x0
  UnityEngine_GameObject_o *result; // x0
  __int64 v18; // x1
  bool v19; // w8

  if ( (byte_4B1879B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, name, actorObject);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3234/*"Battle/CommonEffects/"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_19064/*"effect/"*/, v13, v14);
    byte_4B1879B = 1;
  }
  if ( folder == 2 )
  {
    v15 = &StringLiteral_19064/*"effect/"*/;
LABEL_8:
    v16 = System_String__Concat_62401220((System_String_o *)*v15, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v16, 0LL);
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
    v15 = &StringLiteral_3234/*"Battle/CommonEffects/"*/;
    goto LABEL_8;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, name);
  v19 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v19 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                 actorObject,
                                                 (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_1BCAA3C(result, v18);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getEffectSeName(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x19
  bool isSe; // w8
  System_String_o *result; // x0

  if ( (byte_4B1879A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EffectMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1879A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     effectId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v9);
  }
  v10 = Instance;
  isSe = EffectEntity__isSe((EffectEntity_o *)Instance, 0LL);
  result = 0LL;
  if ( isSe )
    return (System_String_o *)v10[2].klass;
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *v10; // x19
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  System_String_o *NodeName; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1879F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EffectMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&StringLiteral_19169/*"en_body"*/, v8, v9);
    byte_4B1879F = 1;
  }
  v10 = (System_String_o *)StringLiteral_19169/*"en_body"*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v10;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BCAA3C(Instance, v12);
  NodeName = EffectEntity__getNodeName((EffectEntity_o *)entity, 0LL);
  if ( !System_String__IsNullOrEmpty(NodeName, 0LL) )
    return NodeName;
  return v10;
}


System_String_o *__fastcall BattleEffectUtility__get_EffectAssetName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  BattleEffectUtility_c *v5; // x0
  System_String_o *v6; // x0

  if ( (byte_4B18788 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_3238/*"Battle/Effect/"*/, v3, v4);
    byte_4B18788 = 1;
  }
  v5 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
    v5 = BattleEffectUtility_TypeInfo;
  }
  v6 = System_Int32__ToString((unsigned int)v5->static_fields + 24, 0LL);
  return System_String__Concat_62401220((System_String_o *)StringLiteral_3238/*"Battle/Effect/"*/, v6, 0LL);
}


EffectMaster_o *__fastcall BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  BattleEffectUtility_c *v7; // x0
  EffectMaster_o *effectMst; // x19
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BattleEffectUtility_c *v17; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4B18789 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EffectMaster___, v3, v4);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B18789 = 1;
  }
  v7 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
    v7 = BattleEffectUtility_TypeInfo;
  }
  effectMst = v7->static_fields->effectMst;
  if ( !effectMst )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v1);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EffectMaster___);
    v17 = BattleEffectUtility_TypeInfo;
    effectMst = (EffectMaster_o *)Master_object;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v10);
      v17 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->effectMst = effectMst;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->effectMst,
      (int64_t)effectMst,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return effectMst;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_NotPreloadEffectIdHashSet(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleEffectUtility_c *v8; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BattleEffectUtility_c *v17; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4B18786 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v6, v7);
    byte_4B18786 = 1;
  }
  v8 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
    v8 = BattleEffectUtility_TypeInfo;
  }
  notPreloadEffectIdHashSet = v8->static_fields->notPreloadEffectIdHashSet;
  if ( !notPreloadEffectIdHashSet )
  {
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                                               System_Collections_Generic_HashSet_int__TypeInfo,
                                                                               v1,
                                                                               v2,
                                                                               v3);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v17 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v10);
      v17 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->notPreloadEffectIdHashSet,
      (int64_t)notPreloadEffectIdHashSet,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return notPreloadEffectIdHashSet;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_SentEffectIdHashSet(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleEffectUtility_c *v8; // x0
  System_Collections_Generic_HashSet_int__o *sentEffectIdHashSet; // x19
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  BattleEffectUtility_c *v17; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4B18785 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_int___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_int__TypeInfo, v6, v7);
    byte_4B18785 = 1;
  }
  v8 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v1);
    v8 = BattleEffectUtility_TypeInfo;
  }
  sentEffectIdHashSet = v8->static_fields->sentEffectIdHashSet;
  if ( !sentEffectIdHashSet )
  {
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                                         v1,
                                                                         v2,
                                                                         v3);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_3454BA4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v17 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v10);
      v17 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v17->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->sentEffectIdHashSet,
      (int64_t)sentEffectIdHashSet,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return sentEffectIdHashSet;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadActivateSideEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *object; // x19

  if ( (byte_4B1878F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v1, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v3, v4);
    sub_1BCA7E0(&Method_UnityEngine_Resources_Load_GameObject___, v5, v6);
    sub_1BCA7E0(&StringLiteral_19098/*"effect/ef_sideeffect01"*/, v7, v8);
    byte_4B1878F = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_19098/*"effect/ef_sideeffect01"*/,
             (const MethodInfo_2FA6FF0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       object,
                                       (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  UnityEngine_GameObject_o *EffectObject; // x20
  __int64 v37; // x1
  BattleEffectUtility_c *v38; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  System_String_o *NodeName; // x26
  Il2CppObject *MasterData_object; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  BattleEffectUtility_c *v51; // x8
  int64_t v52; // x25
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  System_Collections_ObjectModel_Collection_T__o *klass; // x22
  struct UnityEngine_Vector3_StaticFields *v56; // x8
  float v57; // s9
  float v58; // s11
  float v59; // s10
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v61; // x1
  System_Collections_Generic_IEnumerator_T__o *v62; // x22
  System_String_o *v63; // x25
  float v64; // s10
  float v65; // s11
  float v66; // s9
  System_Collections_Generic_IEnumerator_T__c *v67; // x8
  __int64 v68; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 methodPtr_low; // x10
  AuraEffectPosOverwriteEntity_o *v77; // x27
  System_Collections_Generic_IEnumerator_T__c *v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  UnityEngine_Transform_o *v82; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  struct UnityEngine_Vector3_StaticFields *v86; // x8
  __int64 v87; // x1
  __int64 v88; // x2
  UnityEngine_GameObject_o *v90; // [xsp+18h] [xbp-B8h]
  UnityEngine_Vector3_o Rotation; // [xsp+20h] [xbp-B0h]
  char v92; // [xsp+2Ch] [xbp-A4h]
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4B1878A & 1) == 0 )
  {
    sub_1BCA7E0(&AuraEffectPosOverwriteEntity_TypeInfo, *(_QWORD *)&effectId, procObject);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___, v21, v22);
    sub_1BCA7E0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v23, v24);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v27, v28);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34);
    byte_4B1878A = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, 1, *(const MethodInfo **)&svtId);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    v38 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v37);
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v38);
    if ( EffectMaster )
    {
      EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                     EffectMaster,
                                                                     effectId,
                                                                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !EffectMaster )
            goto LABEL_65;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)EffectMaster,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v51 = BattleEffectUtility_TypeInfo;
          v52 = (int64_t)MasterData_object;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v44);
            v51 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v51->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v52;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->auraPosOverwriteMst,
            v52,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
        }
        if ( arg )
          NodeName = (System_String_o *)((__int64 (__fastcall *)(BattleEffectUtility_EffectLoadArgument_o *, System_String_o *, Il2CppMethodPointer))arg->klass->vtable._4_GetParentNodeName.method)(
                                          arg,
                                          NodeName,
                                          arg->klass->vtable._5_GetParentNode.methodPtr);
        EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility_TypeInfo;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v40);
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility_TypeInfo;
        }
        comparer = EffectMaster[2].fields._lookup->fields._comparer;
        if ( comparer )
        {
          klass = (System_Collections_ObjectModel_Collection_T__o *)comparer[2].klass;
          if ( !byte_4B109C9 )
          {
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1BCA7E0(
                                                                           &UnityEngine_Vector3_TypeInfo,
                                                                           v40,
                                                                           v41);
            byte_4B109C9 = 1;
          }
          v90 = targetObject;
          if ( klass )
          {
            v56 = UnityEngine_Vector3_TypeInfo->static_fields;
            v58 = v56->upVector.fields.y;
            v57 = v56->upVector.fields.z;
            v59 = v56->upVector.fields.x;
            Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                           klass,
                           (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
            v92 = 0;
            v62 = Enumerator;
            Rotation.fields.y = v58;
            Rotation.fields.z = v57;
            Rotation.fields.x = v59;
            v63 = NodeName;
            v64 = x;
            v65 = y;
            v66 = z;
            while ( 1 )
            {
              if ( !v62 )
                sub_1BCAA3C(Enumerator, v61);
              v67 = v62->klass;
              v68 = *(unsigned __int16 *)(&v62->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v62->klass->_2.bitflags2 + 3) )
              {
                p_offset = &v67->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v68;
                  p_offset += 4;
                  if ( !v68 )
                    goto LABEL_31;
                }
                p_method = (__int64)&v67->vtable[*p_offset].method;
              }
              else
              {
LABEL_31:
                p_method = sub_1C1C7C0(v62, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      v62,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v71 = v62->klass;
              v72 = *(unsigned __int16 *)(&v62->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v62->klass->_2.bitflags2 + 3) )
              {
                v73 = &v71->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v73 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                {
                  --v72;
                  v73 += 4;
                  if ( !v72 )
                    goto LABEL_38;
                }
                v74 = (__int64)&v71->vtable[*v73].method;
              }
              else
              {
LABEL_38:
                v74 = sub_1C1C7C0(v62, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
              }
              v75 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
                      v62,
                      *(_QWORD *)(v74 + 8));
              if ( v75
                && (methodPtr_low = LOBYTE(AuraEffectPosOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr),
                    *(unsigned __int8 *)(*(_QWORD *)v75 + 304LL) >= (unsigned int)methodPtr_low) )
              {
                if ( *(AuraEffectPosOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v75 + 200LL) + 8 * methodPtr_low - 8) == AuraEffectPosOverwriteEntity_TypeInfo )
                  v77 = (AuraEffectPosOverwriteEntity_o *)v75;
                else
                  v77 = 0LL;
              }
              else
              {
                v77 = 0LL;
              }
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
                                                                            svtId,
                                                                            limitCount,
                                                                            effectId,
                                                                            v77,
                                                                            0LL);
              if ( ((unsigned __int8)Enumerator & 1) != 0 )
              {
                if ( !v77 )
                  sub_1BCAA3C(Enumerator, v61);
                v63 = v77->fields.nodeName;
                v93 = AuraEffectPosOverwriteEntity__GetOffset(v77, 0LL);
                v64 = v93.fields.x;
                v65 = v93.fields.y;
                v66 = v93.fields.z;
                v92 = 1;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v77, 0LL);
              }
            }
            v78 = v62->klass;
            v79 = *(unsigned __int16 *)(&v62->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v62->klass->_2.bitflags2 + 3) )
            {
              v80 = &v78->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
              {
                --v79;
                v80 += 4;
                if ( !v79 )
                  goto LABEL_53;
              }
              v81 = (__int64)&v78->vtable[*v80].method;
            }
            else
            {
LABEL_53:
              v81 = sub_1C1C7C0(v62, System_IDisposable_TypeInfo, 0LL);
            }
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v81)(
                                                                           v62,
                                                                           *(_QWORD *)(v81 + 8));
            if ( EffectObject )
            {
              EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                             EffectObject,
                                                                             0LL);
              if ( v90 )
              {
                v82 = (UnityEngine_Transform_o *)EffectMaster;
                transform = UnityEngine_GameObject__get_transform(v90, 0LL);
                EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                               transform,
                                                                               v63,
                                                                               limitCount,
                                                                               v92 & 1,
                                                                               0LL);
                if ( v82 )
                {
                  UnityEngine_Transform__set_parent(v82, (UnityEngine_Transform_o *)EffectMaster, 0LL);
                  if ( !byte_4B109C1 )
                  {
                    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v84, v85);
                    byte_4B109C1 = 1;
                  }
                  v86 = UnityEngine_Vector3_TypeInfo->static_fields;
                  v94.fields.x = v64 + v86->zeroVector.fields.x;
                  v94.fields.y = v65 + v86->zeroVector.fields.y;
                  v94.fields.z = v66 + v86->zeroVector.fields.z;
                  UnityEngine_Transform__set_localPosition(v82, v94, 0LL);
                  UnityEngine_Transform__set_eulerAngles(v82, Rotation, 0LL);
                  if ( !byte_4B109C6 )
                  {
                    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v87, v88);
                    byte_4B109C6 = 1;
                  }
                  UnityEngine_Transform__set_localScale(
                    v82,
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
    sub_1BCAA3C(EffectMaster, v40);
  }
  return EffectObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_43453556(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_4B1878B & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId, procObject);
    byte_4B1878B = 1;
  }
  v12 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
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
           0LL,
           v6);
}


int32_t __fastcall BattleEffectUtility__setBattleEffectId(int32_t inId, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleEffectUtility_c *v4; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x8
  int32_t result; // w0

  if ( (byte_4B18787 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, method, v2);
    byte_4B18787 = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, method);
    v4 = BattleEffectUtility_TypeInfo;
  }
  static_fields = v4->static_fields;
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
  __int64 v4; // x3
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x1
  System_String_o *SideEffectPath; // x0
  int64_t v31; // x1
  System_String_o *v32; // x19
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  AssetLoader_LoadEndDataHandler_o *v42; // x20
  __int64 v43; // x1

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_4B1878E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&effectId, method);
    sub_1BCA7E0(&BattleEffectUtility_TypeInfo, v10, v11);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__, v14, v15);
    sub_1BCA7E0(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_19022/*"ef_enchant"*/, v18, v19);
    byte_4B1878E = 1;
  }
  v20 = sub_1BCAA2C(BattleEffectUtility___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&effectId, method, v4);
  BattleEffectUtility___c__DisplayClass23_0___ctor((BattleEffectUtility___c__DisplayClass23_0_o *)v20, 0LL);
  if ( !v20 )
    sub_1BCAA3C(v21, v22);
  *(_QWORD *)(v20 + 24) = parent;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)parent, v23, v24, v25, v26, v27, v28);
  *(float *)(v20 + 32) = x;
  *(float *)(v20 + 36) = y;
  *(float *)(v20 + 40) = z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v29);
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v29);
  v31 = StringLiteral_19022/*"ef_enchant"*/;
  v32 = SideEffectPath;
  *(_QWORD *)(v20 + 16) = StringLiteral_19022/*"ef_enchant"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), v31, v33, v34, v35, v36, v37, v38);
  v42 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v39, v40, v41);
  AssetLoader_LoadEndDataHandler___ctor(
    v42,
    (Il2CppObject *)v20,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v43);
  AssetManager__loadAssetStorage(v32, v42, 1, 0LL);
}


void __fastcall BattleEffectUtility_BuffEffectLoadArgument___ctor(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        BattleActorControl_o *bActor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1

  if ( (byte_4B187A2 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, bActor, method);
    byte_4B187A2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0LL, 0LL);
  if ( v6 )
  {
    if ( !bActor )
      sub_1BCAA3C(v6, v7);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields,
      (int64_t)BuffEffectNodeName_k__BackingField,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    sub_1BCAA3C(IsNullOrEmpty, v8);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B187A3 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleEffectUtility___c_TypeInfo, v1, v2);
    byte_4B187A3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleEffectUtility___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleEffectUtility___c_TypeInfo->static_fields->__9 = (struct BattleEffectUtility___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleEffectUtility___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B187A4 & 1) == 0 )
  {
    this = (BattleEffectUtility___c_o *)sub_1BCA7E0(
                                          &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192,
                                          x,
                                          method);
    byte_4B187A4 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return (System_Collections_Generic_IEnumerable_ParticleSystem__o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       x,
                                                                       1,
                                                                       (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76906192);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  Il2CppObject *Object_object__49237568; // x20
  BattleEffectUtility___c__DisplayClass23_0_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2

  v4 = this;
  if ( (byte_4B187A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    this = (BattleEffectUtility___c__DisplayClass23_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B187A5 = 1;
  }
  if ( !data )
    goto LABEL_11;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              v4->fields.name,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object_(
                                                          Object_object__49237568,
                                                          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_11:
    sub_1BCAA3C(this, data);
  }
  v11 = this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0LL);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v12, v13);
    byte_4B109C1 = 1;
  }
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v11,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v11, v4->fields.scl, 0LL);
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