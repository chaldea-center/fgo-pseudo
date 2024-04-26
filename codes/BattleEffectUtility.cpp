void __fastcall BattleEffectUtility___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleEffectUtility_c *v7; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x19
  void *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  struct BattleEffectUtility_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x0
  __int64 v50; // x0

  if ( (byte_43505DE & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_16283/*"_S"*/);
    sub_B70694(&StringLiteral_16239/*"_M"*/);
    sub_B70694(&StringLiteral_16234/*"_L"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_43505DE = 1;
  }
  BattleEffectUtility_TypeInfo->static_fields->SendReportProbability = 1.0;
  v7 = BattleEffectUtility_TypeInfo;
  BattleEffectUtility_TypeInfo->static_fields->battleEffectId = 0;
  static_fields = v7->static_fields;
  static_fields->wkVec.fields.z = 0.0;
  *(_QWORD *)&static_fields->wkVec.fields.x = 0LL;
  v9 = v7->static_fields;
  v9->auraPosOverwriteMst = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v9->auraPosOverwriteMst, 0LL, v1, v2, v3, v4, v5, v6);
  v10 = sub_B706AC(string___TypeInfo, 4LL);
  if ( !v10 )
    sub_B7076C(0LL, v11);
  v18 = (System_Int32_array **)v10;
  v19 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v19 = (void *)sub_B70754(StringLiteral_1/*""*/, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v19 )
      goto LABEL_26;
    v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*((_DWORD *)v18 + 6) )
    goto LABEL_25;
  v18[4] = (System_Int32_array *)v20;
  sub_B70630((BattleServantConfConponent_o *)(v18 + 4), v20, v12, v13, v14, v15, v16, v17);
  v19 = (void *)StringLiteral_16283/*"_S"*/;
  if ( StringLiteral_16283/*"_S"*/ )
  {
    v19 = (void *)sub_B70754(StringLiteral_16283/*"_S"*/, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v19 )
      goto LABEL_26;
    v27 = (System_Int32_array **)StringLiteral_16283/*"_S"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( *((_DWORD *)v18 + 6) <= 1u )
    goto LABEL_25;
  v18[5] = (System_Int32_array *)v27;
  sub_B70630((BattleServantConfConponent_o *)(v18 + 5), v27, v21, v22, v23, v24, v25, v26);
  v19 = (void *)StringLiteral_16239/*"_M"*/;
  if ( StringLiteral_16239/*"_M"*/ )
  {
    v19 = (void *)sub_B70754(StringLiteral_16239/*"_M"*/, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( !v19 )
      goto LABEL_26;
    v34 = (System_Int32_array **)StringLiteral_16239/*"_M"*/;
  }
  else
  {
    v34 = 0LL;
  }
  if ( *((_DWORD *)v18 + 6) <= 2u )
    goto LABEL_25;
  v18[6] = (System_Int32_array *)v34;
  sub_B70630((BattleServantConfConponent_o *)(v18 + 6), v34, v28, v29, v30, v31, v32, v33);
  v19 = (void *)StringLiteral_16234/*"_L"*/;
  if ( StringLiteral_16234/*"_L"*/ )
  {
    v19 = (void *)sub_B70754(StringLiteral_16234/*"_L"*/, *(_QWORD *)&(*v18)->m_Items[9]);
    if ( v19 )
    {
      v41 = (System_Int32_array **)StringLiteral_16234/*"_L"*/;
      goto LABEL_23;
    }
LABEL_26:
    v50 = sub_B7078C();
    sub_B70738(v50, 0LL);
  }
  v41 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v18 + 6) <= 3u )
  {
LABEL_25:
    v49 = sub_B70798(v19);
    sub_B70738(v49, 0LL);
  }
  v18[7] = (System_Int32_array *)v41;
  sub_B70630((BattleServantConfConponent_o *)(v18 + 7), v41, v35, v36, v37, v38, v39, v40);
  v42 = BattleEffectUtility_TypeInfo->static_fields;
  v42->scalelist = (struct System_String_array *)v18;
  sub_B70630((BattleServantConfConponent_o *)&v42->scalelist, v18, v43, v44, v45, v46, v47, v48);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  BattleEffectUtility_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v5; // x1

  if ( (byte_43505D5 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_43505D5 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_B7076C(0LL, v5);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_2EAF074 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall BattleEffectUtility__AddRelatedFunctionEffectIdList(
        System_Int32_array *funcIds,
        System_Collections_Generic_List_int__o **effectIdList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v8; // x21
  unsigned __int64 v9; // x24
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v11; // x22
  unsigned __int64 v12; // x28
  int32_t v13; // w23
  __int64 v14; // x0

  if ( (byte_43505D0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_B70694(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43505D0 = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_21:
      sub_B7076C(Instance, v6);
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_FunctionMaster___);
    v7 = *(_QWORD *)&funcIds->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v9 = 0LL;
      while ( 1 )
      {
        if ( v9 >= (unsigned int)v7 )
          goto LABEL_22;
        if ( !v8 )
          goto LABEL_21;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v8,
                                      funcIds->m_Items[v9 + 1],
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_21;
          datalist = Instance->fields.datalist;
          v11 = Instance;
          if ( (int)datalist >= 1 )
            break;
        }
LABEL_19:
        LODWORD(v7) = funcIds->max_length;
        if ( (__int64)++v9 >= (int)v7 )
          return;
      }
      v12 = 0LL;
      while ( v12 < (unsigned int)datalist )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_21;
        v13 = *((_DWORD *)&v11->fields.lookup + v12);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v13,
                                      (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_21;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Instance,
            v13,
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        LODWORD(datalist) = v11->fields.datalist;
        if ( (__int64)++v12 >= (int)datalist )
          goto LABEL_19;
      }
LABEL_22:
      v14 = sub_B70798(Instance);
      sub_B70738(v14, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_array *__fastcall BattleEffectUtility__ChangeServantView(
        UnityEngine_GameObject_o *actorObj,
        bool isShadow,
        bool isChoco,
        ServantLimitAddEntity_o *limitAddEntity,
        const MethodInfo *method)
{
  __int64 OverwriteShadowServantEffectNodes; // x0
  __int64 v9; // x1
  float v10; // s4
  float v11; // s5
  float v12; // s6
  float v13; // s7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x22
  System_Int32_array **v22; // x1
  __int64 v23; // x8
  unsigned __int64 v24; // x25
  System_String_o *v25; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x24
  UnityEngine_GameObject_o *v28; // x23
  UnityEngine_Transform_o *v29; // x24
  int v30; // s0
  UnityEngine_Transform_o *v33; // x24
  int v34; // s0
  UnityEngine_Transform_o *v37; // x24
  int v38; // s0
  __int64 v41; // x8
  __int64 v42; // x21
  unsigned __int64 v43; // x23
  UnityEngine_Object_o *v44; // x22
  int v45; // w8
  __int64 v46; // x22
  unsigned int v47; // w26
  __int64 v48; // x8
  __int64 v49; // x19
  unsigned __int64 v50; // x22
  UnityEngine_Object_o *v51; // x21
  int v52; // w8
  __int64 v53; // x21
  unsigned int v54; // w25
  __int64 v56; // x0
  __int64 v57; // x0
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v61; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43505DC & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_18604/*"en_waist"*/);
    sub_B70694(&StringLiteral_16178/*"_Color"*/);
    byte_43505DC = 1;
  }
  white = UnityEngine_Color__get_white(0LL);
  v14 = 0LL;
  methoda.methodPointer = *(Il2CppMethodPointer *)&white.fields.r;
  methoda.invoker_method = *(void **)&white.fields.b;
  if ( isShadow )
  {
    v61.fields.r = 0.05;
    v61.fields.a = 1.0;
    v61.fields.g = 0.05;
    v61.fields.b = 0.05;
    UnityEngine_Color___ctor(v61, v10, v11, v12, v13, &methoda);
    OverwriteShadowServantEffectNodes = sub_B706AC(string___TypeInfo, 1LL);
    if ( !OverwriteShadowServantEffectNodes )
      goto LABEL_76;
    v21 = OverwriteShadowServantEffectNodes;
    OverwriteShadowServantEffectNodes = StringLiteral_18604/*"en_waist"*/;
    if ( StringLiteral_18604/*"en_waist"*/ )
    {
      OverwriteShadowServantEffectNodes = sub_B70754(StringLiteral_18604/*"en_waist"*/, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
      if ( !OverwriteShadowServantEffectNodes )
      {
        v57 = sub_B7078C();
        sub_B70738(v57, 0LL);
      }
      v22 = (System_Int32_array **)StringLiteral_18604/*"en_waist"*/;
    }
    else
    {
      v22 = 0LL;
    }
    if ( !*(_DWORD *)(v21 + 24) )
      goto LABEL_77;
    *(_QWORD *)(v21 + 32) = v22;
    sub_B70630((BattleServantConfConponent_o *)(v21 + 32), v22, v15, v16, v17, v18, v19, v20);
    if ( limitAddEntity )
    {
      OverwriteShadowServantEffectNodes = (__int64)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
                                                     limitAddEntity,
                                                     0LL);
      v21 = OverwriteShadowServantEffectNodes;
      if ( !OverwriteShadowServantEffectNodes )
        goto LABEL_76;
    }
    v23 = *(_QWORD *)(v21 + 24);
    if ( (int)v23 >= 1 )
    {
      v14 = 0LL;
      v24 = 0LL;
      while ( v24 < (unsigned int)v23 )
      {
        if ( !actorObj )
          goto LABEL_76;
        v25 = *(System_String_o **)(v21 + 32 + 8 * v24);
        transform = UnityEngine_GameObject__get_transform(actorObj, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v25, 0, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          OverwriteShadowServantEffectNodes = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)ServantAssetLoadManager__createShadowEffect(
                                                         (ServantAssetLoadManager_o *)OverwriteShadowServantEffectNodes,
                                                         0,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v28 = (UnityEngine_GameObject_o *)OverwriteShadowServantEffectNodes;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)OverwriteShadowServantEffectNodes,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)OverwriteShadowServantEffectNodes,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v29 = UnityEngine_GameObject__get_transform(v28, 0LL);
          *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v29 )
            goto LABEL_76;
          UnityEngine_Transform__set_localPosition(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
          v33 = UnityEngine_GameObject__get_transform(v28, 0LL);
          *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v33 )
            goto LABEL_76;
          UnityEngine_Transform__set_localEulerAngles(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
          v37 = UnityEngine_GameObject__get_transform(v28, 0LL);
          *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
          if ( !v37 )
            goto LABEL_76;
          UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
          if ( !v14 )
          {
            v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v14,
              (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            if ( !v14 )
              goto LABEL_76;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        LODWORD(v23) = *(_DWORD *)(v21 + 24);
        if ( (__int64)++v24 >= (int)v23 )
          goto LABEL_32;
      }
LABEL_77:
      v56 = sub_B70798(OverwriteShadowServantEffectNodes);
      sub_B70738(v56, 0LL);
    }
    v14 = 0LL;
  }
LABEL_32:
  if ( isChoco )
  {
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__changeChocoSahder(actorObj, 0LL);
  }
  if ( !actorObj )
    goto LABEL_76;
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !OverwriteShadowServantEffectNodes )
    goto LABEL_76;
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)OverwriteShadowServantEffectNodes,
                                                 (const MethodInfo_1BE43FC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v41 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v42 = OverwriteShadowServantEffectNodes;
    if ( (int)v41 >= 1 )
    {
      v43 = 0LL;
      while ( 1 )
      {
        if ( v43 >= (unsigned int)v41 )
          goto LABEL_77;
        v44 = *(UnityEngine_Object_o **)(v42 + 8 * v43 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v44 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v44,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v45 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v46 = OverwriteShadowServantEffectNodes;
          if ( v45 >= 1 )
            break;
        }
LABEL_54:
        LODWORD(v41) = *(_DWORD *)(v42 + 24);
        if ( (__int64)++v43 >= (int)v41 )
          goto LABEL_55;
      }
      v47 = 0;
      while ( v47 < v45 )
      {
        OverwriteShadowServantEffectNodes = *(_QWORD *)(v46 + 8LL * (int)v47 + 32);
        if ( !OverwriteShadowServantEffectNodes )
          goto LABEL_76;
        *(_QWORD *)&v62.fields.b = methoda.invoker_method;
        *(_QWORD *)&v62.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)OverwriteShadowServantEffectNodes,
          (System_String_o *)StringLiteral_16178/*"_Color"*/,
          v62,
          0LL);
        v45 = *(_DWORD *)(v46 + 24);
        if ( (int)++v47 >= v45 )
          goto LABEL_54;
      }
      goto LABEL_77;
    }
  }
LABEL_55:
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !OverwriteShadowServantEffectNodes )
LABEL_76:
    sub_B7076C(OverwriteShadowServantEffectNodes, v9);
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)OverwriteShadowServantEffectNodes,
                                                 (const MethodInfo_1BE43FC *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v48 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v49 = OverwriteShadowServantEffectNodes;
    if ( (int)v48 >= 1 )
    {
      v50 = 0LL;
      while ( 1 )
      {
        if ( v50 >= (unsigned int)v48 )
          goto LABEL_77;
        v51 = *(UnityEngine_Object_o **)(v49 + 8 * v50 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v51 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v51,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v52 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v53 = OverwriteShadowServantEffectNodes;
          if ( v52 >= 1 )
            break;
        }
LABEL_71:
        LODWORD(v48) = *(_DWORD *)(v49 + 24);
        if ( (__int64)++v50 >= (int)v48 )
          goto LABEL_72;
      }
      v54 = 0;
      while ( v54 < v52 )
      {
        OverwriteShadowServantEffectNodes = *(_QWORD *)(v53 + 8LL * (int)v54 + 32);
        if ( !OverwriteShadowServantEffectNodes )
          goto LABEL_76;
        *(_QWORD *)&v63.fields.b = methoda.invoker_method;
        *(_QWORD *)&v63.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)OverwriteShadowServantEffectNodes,
          (System_String_o *)StringLiteral_16178/*"_Color"*/,
          v63,
          0LL);
        v52 = *(_DWORD *)(v53 + 24);
        if ( (int)++v54 >= v52 )
          goto LABEL_71;
      }
      goto LABEL_77;
    }
  }
LABEL_72:
  if ( v14 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                             (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0LL;
}


void __fastcall BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v3; // x1

  if ( (byte_43505D6 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_43505D6 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v1);
  if ( !NotPreloadEffectIdHashSet )
    sub_B7076C(0LL, v3);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_2EAE48C *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  int32_t IndexOf_44832128; // w0
  int32_t v8; // w22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_o *v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o **v24; // x0
  System_String_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  v6 = baseName;
  if ( (byte_43505D2 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_890/*"/"*/);
    baseName = (System_String_o *)sub_B70694(&StringLiteral_5904/*"Effect/BattleCommon/{0}"*/);
    byte_43505D2 = 1;
  }
  if ( !v6 )
    sub_B7076C(baseName, path);
  IndexOf_44832128 = System_String__LastIndexOf_44832128(v6, (System_String_o *)StringLiteral_890/*"/"*/, 0LL);
  if ( IndexOf_44832128 == -1 )
  {
    v25 = System_String__Format((System_String_o *)StringLiteral_5904/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v25;
    sub_B70630((BattleServantConfConponent_o *)path, (System_Int32_array **)v25, v26, v27, v28, v29, v30, v31);
    v24 = name;
    v17 = v6;
    *name = v6;
  }
  else
  {
    v8 = IndexOf_44832128;
    v9 = (Il2CppObject *)System_String__Substring_44821904(v6, 0, IndexOf_44832128, 0LL);
    v10 = System_String__Format((System_String_o *)StringLiteral_5904/*"Effect/BattleCommon/{0}"*/, v9, 0LL);
    *path = v10;
    sub_B70630((BattleServantConfConponent_o *)path, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    v17 = System_String__Substring(v6, v8 + 1, 0LL);
    *name = v17;
    v24 = name;
  }
  sub_B70630((BattleServantConfConponent_o *)v24, (System_Int32_array **)v17, v18, v19, v20, v21, v22, v23);
}


System_String_array *__fastcall BattleEffectUtility__GetBattleCommonEffectPathList(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x23
  const MethodInfo *v9; // x3
  System_String_o *v10; // x22
  __int64 v12; // x0
  System_String_o *v13; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_43505D1 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43505D1 = 1;
  }
  v13 = 0LL;
  path = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EffectMaster___);
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_20;
  v7 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
      {
        v12 = sub_B70798(Instance);
        sub_B70738(v12, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   effectIdList->m_Items[v8 + 1],
                   (const MethodInfo_21C0440 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && *((_DWORD *)Instance + 5) == 5 )
      {
        v10 = (System_String_o *)*((_QWORD *)Instance + 5);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        BattleEffectUtility__GetBattleCommonEffectPathAndName(v10, &path, &v13, v9);
        if ( !v6 )
          break;
        Instance = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v6,
                             (WarBoardManager_TaskList_o *)path,
                             (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v6,
            (EventMissionProgressRequest_Argument_ProgressData_o *)path,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
      }
      LODWORD(v7) = effectIdList->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B7076C(Instance, v4);
  }
LABEL_18:
  if ( !v6 )
    goto LABEL_20;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                  (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43505CD & 1) == 0 )
  {
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_5938/*"Effect/SideEffect/"*/);
    byte_43505CD = 1;
  }
  v6 = effectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6, v2);
  return System_String__Concat((Il2CppObject *)StringLiteral_5938/*"Effect/SideEffect/"*/, v4, 0LL);
}


bool __fastcall BattleEffectUtility__IsEffectNotLoadedYet(
        int32_t effectId,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleEffectUtility_c *v10; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *EffectMaster; // x0
  __int64 v12; // x1
  WarEntity_o *Entity; // x0
  const MethodInfo *v14; // x3
  System_String_o *longName; // x20
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43505D4 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_43505D4 = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_B70630((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( effectId < 1 )
    goto LABEL_15;
  v10 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v10);
  if ( !EffectMaster )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_21C0440 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( *(&Entity->fields.id + 1) == 5 )
    {
      longName = Entity->fields.longName;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, effectPath, &name, v14);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0LL) )
    {
LABEL_15:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_19:
    sub_B7076C(EffectMaster, v12);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x2
  BattleEffectUtility_c *v17; // x0
  BattleEffectUtility_c *v18; // x0
  BattleEffectUtility_c *v19; // x0
  float SendReportProbability; // s8
  __int64 v21; // x2
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
  int32_t v32; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *effectPath; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_43505D7 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BattleDataDefine_TypeInfo);
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_B70694(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__);
    sub_B70694(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__);
    sub_B70694(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
    sub_B70694(&StringLiteral_21454/*"non-loaded asset was detected. effectId = {0}"*/);
    byte_43505D7 = 1;
  }
  effectPath = 0LL;
  v7 = sub_B70764(BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_45;
  *(_QWORD *)(v7 + 16) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)finishCallback,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v16) )
    goto LABEL_43;
  v17 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v17);
  if ( !SentEffectIdHashSet )
    goto LABEL_45;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v18 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v18);
    if ( !SentEffectIdHashSet )
      goto LABEL_45;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v19 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v19 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v19->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v32 = effectId;
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v21);
        v23 = System_String__Format((System_String_o *)StringLiteral_21454/*"non-loaded asset was detected. effectId = {0}"*/, v22, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_45;
        CrashReporter__SendReport_28140028(SentEffectIdHashSet, v23, 0LL, 0LL, 0LL);
        v24 = BattleEffectUtility_TypeInfo;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v24);
        if ( !SentEffectIdHashSet )
          goto LABEL_45;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v25 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v25 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v25->static_fields->ASSET_PARALLEL_LOAD_MAX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  SentEffectIdHashSet = (CrashReporter_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  if ( ((unsigned __int8)SentEffectIdHashSet & 1) != 0 )
  {
    if ( perf )
    {
      assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField;
      v28 = effectPath;
      v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v29,
        (Il2CppObject *)v7,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v28,
               v29,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_43;
      }
    }
LABEL_45:
    sub_B7076C(SentEffectIdHashSet, v9);
  }
  v30 = effectPath;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v30, v31, ASSET_PARALLEL_LOAD_MAX, 0LL) )
LABEL_43:
    ActionExtensions__Call(*(System_Action_o **)(v7 + 16), 0LL);
}


bool __fastcall BattleEffectUtility__Lottery(float rate, const MethodInfo *method)
{
  return UnityEngine_Random__Range(0.0, 100.0, 0LL) <= rate;
}


void __fastcall BattleEffectUtility__SetEffectParent(
        UnityEngine_GameObject_o *effectObj,
        int32_t effectId,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_43505CC & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_EffectMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_43505CC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          effectId,
          (const MethodInfo_21C049C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)EffectEntity__getNodeName(
                                                                                          (EffectEntity_o *)entity,
                                                                                          0LL),
        !effectObj)
    || (v9 = (System_String_o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                                          effectObj,
                                                                                          0LL),
        !targetObj)
    || (v10 = (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
        transform = UnityEngine_GameObject__get_transform(targetObj, 0LL),
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TransformHelper__getNodeFromLvName(
                                                                                          transform,
                                                                                          v9,
                                                                                          -1,
                                                                                          0,
                                                                                          0LL),
        !v10) )
  {
LABEL_14:
    sub_B7076C(Master_WarQuestSelectionMaster, v8);
  }
  UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v10, zero, 0LL);
  up = UnityEngine_Vector3__get_up(0LL);
  UnityEngine_Transform__set_eulerAngles(v10, up, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v10, one, 0LL);
}


bool __fastcall BattleEffectUtility__TryGetBattleCommonEffectPath(
        System_String_o **effectPath,
        int32_t effectId,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleEffectUtility_c *v10; // x0
  EffectMaster_o *EffectMaster; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  System_String_o *longName; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_43505D3 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_43505D3 = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_B70630((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  v10 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v10);
  if ( !EffectMaster )
    goto LABEL_17;
  EffectMaster = (EffectMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_21C049C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_17:
    sub_B7076C(EffectMaster, v12);
  if ( *(&entity->fields.id + 1) == 5 )
  {
    longName = entity->fields.longName;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, effectPath, &name, v13);
  }
  return !System_String__IsNullOrEmpty(*effectPath, 0LL);
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
  DataManager_o *v11; // x21
  System_String_o *v12; // x0
  UnityEngine_Object_o *v13; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v14; // x22
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  System_String_o *v17; // x25
  int32_t v18; // w23
  BattleEffectUtility_c *v19; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v21; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *Manager__loadNoblePhantasmEffect; // x0
  System_String_o *v23; // x22
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  struct System_Byte_array *masterDataBytes; // x8
  int32_t v27; // w23
  int32_t v28; // w22
  int32_t LimitCount; // w0
  System_String_o *v30; // x24
  int32_t v31; // w25
  BattleEffectUtility_c *v32; // x0
  System_String_o *v33; // x0
  System_String_o *v34; // x22
  System_String_o *se; // x20
  BattleEffectUtility_c *v36; // x0
  BattleEffectUtility_c *v37; // x0
  float SendReportProbability; // s8
  __int64 v39; // x2
  UnityEngine_Object_o *v40; // x20
  Il2CppObject *v41; // x0
  System_String_o *v42; // x20
  BattleEffectUtility_c *v43; // x0
  DataManager_o *v44; // x19
  float v45; // s0
  float v46; // s1
  float v47; // s2
  float v48; // s3
  int datalist; // w8
  float v50; // s8
  float v51; // s9
  float v52; // s10
  float v53; // s11
  unsigned int v54; // w21
  __int64 v56; // x0
  int32_t id; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *name; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *path; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43505D9 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantAssetLoadManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&StringLiteral_18500/*"effect load failed. effectId = {0}"*/);
    sub_B70694(&StringLiteral_18501/*"effect/"*/);
    sub_B70694(&StringLiteral_2821/*"Battle/Effect/"*/);
    sub_B70694(&StringLiteral_2814/*"Battle"*/);
    byte_43505D9 = 1;
  }
  path = 0LL;
  name = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_103;
  Entity = (EffectEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               effectId,
                               (const MethodInfo_21C0440 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)procObject, 0LL, 0LL);
  v11 = 0LL;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !procObject )
      goto LABEL_103;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  procObject,
                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v11 = Instance;
  }
  if ( !Entity )
    goto LABEL_103;
  switch ( Entity->fields.folderType )
  {
    case 1:
      v12 = System_String__Concat_44758168((System_String_o *)StringLiteral_18501/*"effect/"*/, Entity->fields.name, 0LL);
      v13 = UnityEngine_Resources__Load(v12, 0LL);
      if ( !v13 )
        goto LABEL_17;
      if ( (UnityEngine_GameObject_c *)v13->klass == UnityEngine_GameObject_TypeInfo )
        v14 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v13;
      else
        v14 = 0LL;
      goto LABEL_58;
    case 2:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      v14 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_58;
      if ( !v11 )
        goto LABEL_103;
      masterDataBytes = v11[3].fields.masterDataBytes;
      if ( !masterDataBytes )
        goto LABEL_103;
      v27 = *(_DWORD *)&masterDataBytes->m_Items[644];
      v28 = *(_DWORD *)&masterDataBytes->m_Items[692];
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v11, 0LL);
      v30 = Entity->fields.name;
      v31 = LimitCount;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                                                     v27,
                                                                                     v31,
                                                                                     v30,
                                                                                     v28,
                                                                                     0LL);
      goto LABEL_57;
    case 3:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL);
      v14 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_58;
      if ( !v11 )
        goto LABEL_103;
      WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v11, 0LL);
      WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v11, 1, 0LL);
      Instance = (DataManager_o *)BattleActorControl__getEffectFolder((BattleActorControl_o *)v11, 0LL);
      v17 = Entity->fields.name;
      v18 = (int)Instance;
      v19 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v19 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v19->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_103;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_104;
      v21 = System_String__Concat_44758168(v17, scalelist->m_Items[WeaponScale], 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                                                     v21,
                                                                                     WeaponGroup,
                                                                                     v18,
                                                                                     0LL);
LABEL_57:
      v14 = Manager__loadNoblePhantasmEffect;
LABEL_58:
      if ( EffectEntity__isSe(Entity, 0LL) && isPlaySe )
      {
        se = Entity->fields.se;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe_23182708((System_String_o *)StringLiteral_2814/*"Battle"*/, se, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v14,
                                      (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v40 = (UnityEngine_Object_o *)Instance;
        if ( Entity->fields.folderType != 3 )
          goto LABEL_100;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_100;
        if ( !v40 )
          goto LABEL_103;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30716516(
                                      (UnityEngine_GameObject_o *)v40,
                                      (const MethodInfo_1D4B264 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v11 )
          goto LABEL_103;
        v44 = Instance;
        *(UnityEngine_Color_o *)&v45 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v11, 0LL);
        if ( !v44 )
          goto LABEL_103;
        datalist = (int)v44->fields.datalist;
        if ( datalist >= 1 )
        {
          v50 = v45;
          v51 = v46;
          v52 = v47;
          v53 = v48;
          v54 = 0;
          while ( 1 )
          {
            if ( v54 >= datalist )
            {
LABEL_104:
              v56 = sub_B70798(Instance);
              sub_B70738(v56, 0LL);
            }
            Instance = (DataManager_o *)*((_QWORD *)&v44->fields.lookup + (int)v54);
            if ( !Instance )
              break;
            v60.fields.r = v50;
            v60.fields.g = v51;
            v60.fields.b = v52;
            v60.fields.a = v53;
            UIWidget__set_color((UIWidget_o *)Instance, v60, 0LL);
            datalist = (int)v44->fields.datalist;
            if ( (int)++v54 >= datalist )
              goto LABEL_100;
          }
        }
        else
        {
LABEL_100:
          if ( v40 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v40, 0, 0LL);
            return (UnityEngine_GameObject_o *)v40;
          }
        }
LABEL_103:
        sub_B7076C(Instance, v8);
      }
      v36 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v36);
      if ( !Instance )
        goto LABEL_103;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             Entity->fields.id,
             (const MethodInfo_2EAE4F8 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v37 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v37 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v37->static_fields->SendReportProbability;
      v40 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = Entity->fields.id;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v39);
        v42 = System_String__Format((System_String_o *)StringLiteral_18500/*"effect load failed. effectId = {0}"*/, v41, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_28140028((CrashReporter_o *)Instance, v42, 0LL, 0LL, 0LL);
          v43 = BattleEffectUtility_TypeInfo;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v43);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              Entity->fields.id,
              (const MethodInfo_2EAF050 *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_103;
      }
      return (UnityEngine_GameObject_o *)v40;
    case 4:
      v32 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v32 = BattleEffectUtility_TypeInfo;
      }
      v33 = System_Int32__ToString((unsigned int)v32->static_fields + 24, 0LL);
      v34 = System_String__Concat_44758168((System_String_o *)StringLiteral_2821/*"Battle/Effect/"*/, v33, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v34, 0LL);
      if ( !Instance )
        goto LABEL_103;
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                     (AssetData_o *)Instance,
                                                                                     Entity->fields.name,
                                                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      goto LABEL_57;
    case 5:
      v23 = Entity->fields.name;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v23, &path, &name, v10);
      v24 = path;
      v25 = name;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                     v24,
                                                                                     v25,
                                                                                     0LL);
      goto LABEL_57;
    default:
LABEL_17:
      v14 = 0LL;
      goto LABEL_58;
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
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v10; // x0
  __int64 v11; // x1

  if ( (byte_43505D8 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_5899/*"Effect Default"*/);
    byte_43505D8 = 1;
  }
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, isPlaySe, method);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    EffectObject = (UnityEngine_GameObject_o *)sub_B70764(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5899/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v10 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  EffectObject,
                  (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_B7076C(v10, v11);
    }
    *(float *)&v10->fields.callbackQueue = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_22709884(
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

  if ( (byte_43505DB & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_2817/*"Battle/CommonEffects/"*/);
    sub_B70694(&StringLiteral_18501/*"effect/"*/);
    byte_43505DB = 1;
  }
  if ( folder == 2 )
  {
    v7 = &StringLiteral_18501/*"effect/"*/;
LABEL_15:
    v11 = System_String__Concat_44758168((System_String_o *)*v7, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v11, 0LL);
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
    v7 = &StringLiteral_2817/*"Battle/CommonEffects/"*/;
    goto LABEL_15;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v9 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 actorObject,
                                                 (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_B7076C(result, v8);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getEffectSeName(int32_t effectId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataManager_o *v5; // x19
  bool isSe; // w8
  System_String_o *result; // x0

  if ( (byte_43505DA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43505DA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      effectId,
                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_B7076C(Instance, v4);
  }
  v5 = Instance;
  isSe = EffectEntity__isSe((EffectEntity_o *)Instance, 0LL);
  result = 0LL;
  if ( isSe )
    return (System_String_o *)v5->fields.lookup;
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  System_String_o *v3; // x19
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *NodeName; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43505DD & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_18598/*"en_body"*/);
    byte_43505DD = 1;
  }
  entity = 0LL;
  v3 = (System_String_o *)StringLiteral_18598/*"en_body"*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          id,
          (const MethodInfo_21C049C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v3;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B7076C(Instance, v5);
  NodeName = EffectEntity__getNodeName((EffectEntity_o *)entity, 0LL);
  if ( !System_String__IsNullOrEmpty(NodeName, 0LL) )
    return NodeName;
  return v3;
}


System_String_o *__fastcall BattleEffectUtility__get_EffectAssetName(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_String_o *v2; // x0

  if ( (byte_43505C8 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&StringLiteral_2821/*"Battle/Effect/"*/);
    byte_43505C8 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  v2 = System_Int32__ToString((unsigned int)v1->static_fields + 24, 0LL);
  return System_String__Concat_44758168((System_String_o *)StringLiteral_2821/*"Battle/Effect/"*/, v2, 0LL);
}


EffectMaster_o *__fastcall BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Int32_array **effectMst; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleEffectUtility_c *v10; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_43505C9 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_EffectMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_43505C9 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  effectMst = (System_Int32_array **)v1->static_fields->effectMst;
  if ( !effectMst )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EffectMaster___);
    v10 = BattleEffectUtility_TypeInfo;
    effectMst = (System_Int32_array **)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v10 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v10->static_fields;
    static_fields->effectMst = (struct EffectMaster_o *)effectMst;
    sub_B70630((BattleServantConfConponent_o *)&static_fields->effectMst, effectMst, v4, v5, v6, v7, v8, v9);
  }
  return (EffectMaster_o *)effectMst;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_NotPreloadEffectIdHashSet(
        const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleEffectUtility_c *v9; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_43505C6 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_43505C6 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  notPreloadEffectIdHashSet = v1->static_fields->notPreloadEffectIdHashSet;
  if ( !notPreloadEffectIdHashSet )
  {
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    v9 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v9 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->notPreloadEffectIdHashSet,
      (System_Int32_array **)notPreloadEffectIdHashSet,
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
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleEffectUtility_c *v9; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_43505C5 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    sub_B70694(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_43505C5 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  sentEffectIdHashSet = v1->static_fields->sentEffectIdHashSet;
  if ( !sentEffectIdHashSet )
  {
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B70764(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_2EADE74 *)Method_System_Collections_Generic_HashSet_int___ctor___69140912);
    v9 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v9 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_B70630(
      (BattleServantConfConponent_o *)&static_fields->sentEffectIdHashSet,
      (System_Int32_array **)sentEffectIdHashSet,
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
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19

  if ( (byte_43505CF & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_B70694(&StringLiteral_18535/*"effect/ef_sideeffect01"*/);
    byte_43505CF = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_18535/*"effect/ef_sideeffect01"*/,
                                                        (const MethodInfo_1D5BAD8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       UIAtlas,
                                       (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *EffectObject; // x21
  BattleEffectUtility_c *v18; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *EffectMaster; // x0
  __int64 v20; // x1
  System_String_o *NodeName; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  BattleEffectUtility_c *v29; // x8
  System_Int32_array **v30; // x26
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *klass; // x25
  float v34; // s0
  float v35; // s1
  float v36; // s2
  float v37; // s11
  float v38; // s12
  float v39; // s13
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v41; // x1
  System_Collections_Generic_IEnumerator_T__o *v42; // x25
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x10
  AuraEffectPosOverwriteEntity_o *v49; // x26
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  UnityEngine_Transform_o *v58; // x23
  UnityEngine_Transform_o *transform; // x0
  char v61; // [xsp+14h] [xbp-8Ch]
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_43505CA & 1) == 0 )
  {
    sub_B70694(&AuraEffectPosOverwriteEntity_TypeInfo);
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_B70694(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
    sub_B70694(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43505CA = 1;
  }
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, 1, *(const MethodInfo **)&svtId);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    v18 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v18);
    if ( EffectMaster )
    {
      EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                      EffectMaster,
                                                                      effectId,
                                                                      (const MethodInfo_21C0440 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !EffectMaster )
            goto LABEL_64;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)EffectMaster,
                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v29 = BattleEffectUtility_TypeInfo;
          v30 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
            v29 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v29->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v30;
          sub_B70630(
            (BattleServantConfConponent_o *)&static_fields->auraPosOverwriteMst,
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
        EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)BattleEffectUtility_TypeInfo;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)BattleEffectUtility_TypeInfo;
        }
        comparer = EffectMaster[2].fields._lookup->fields.comparer;
        if ( comparer )
        {
          klass = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)comparer[2].klass;
          *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_up(0LL);
          if ( klass )
          {
            v37 = v34;
            v38 = v35;
            v39 = v36;
            Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                           klass,
                           (const MethodInfo_2C865F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
            v61 = 0;
            v42 = Enumerator;
            while ( 1 )
            {
              if ( !v42 )
                sub_B7076C(Enumerator, v41);
              v50 = v42->klass;
              if ( *(_WORD *)&v42->klass->_2.bitflags1 )
              {
                v51 = 0LL;
                p_offset = &v50->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v51;
                  p_offset += 4;
                  if ( v51 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
                    goto LABEL_49;
                }
                p_method = (__int64)&v50->vtable[*p_offset].method;
              }
              else
              {
LABEL_49:
                p_method = sub_B08590(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      v42,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v43 = v42->klass;
              if ( *(_WORD *)&v42->klass->_2.bitflags1 )
              {
                v44 = 0LL;
                v45 = &v43->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                {
                  ++v44;
                  v45 += 4;
                  if ( v44 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
                    goto LABEL_33;
                }
                v46 = (__int64)&v43->vtable[*v45].method;
              }
              else
              {
LABEL_33:
                v46 = sub_B08590(v42, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
              }
              v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                      v42,
                      *(_QWORD *)(v46 + 8));
              if ( v47
                && (v48 = *(&AuraEffectPosOverwriteEntity_TypeInfo->_2.bitflags2 + 1),
                    *(unsigned __int8 *)(*(_QWORD *)v47 + 300LL) >= (unsigned int)v48) )
              {
                if ( *(AuraEffectPosOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * v48 - 8) == AuraEffectPosOverwriteEntity_TypeInfo )
                  v49 = (AuraEffectPosOverwriteEntity_o *)v47;
                else
                  v49 = 0LL;
              }
              else
              {
                v49 = 0LL;
              }
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
                                                                            svtId,
                                                                            limitCount,
                                                                            effectId,
                                                                            v49,
                                                                            0LL);
              if ( ((unsigned __int8)Enumerator & 1) != 0 )
              {
                if ( !v49 )
                  sub_B7076C(Enumerator, v41);
                NodeName = v49->fields.nodeName;
                v62 = AuraEffectPosOverwriteEntity__GetOffset(v49, 0LL);
                x = v62.fields.x;
                y = v62.fields.y;
                z = v62.fields.z;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v49, 0LL);
                v37 = Rotation.fields.x;
                v38 = Rotation.fields.y;
                v39 = Rotation.fields.z;
                v61 = 1;
              }
            }
            v54 = v42->klass;
            if ( *(_WORD *)&v42->klass->_2.bitflags1 )
            {
              v55 = 0LL;
              v56 = &v54->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
              {
                ++v55;
                v56 += 4;
                if ( v55 >= *(unsigned __int16 *)&v42->klass->_2.bitflags1 )
                  goto LABEL_56;
              }
              v57 = (__int64)&v54->vtable[*v56].method;
            }
            else
            {
LABEL_56:
              v57 = sub_B08590(v42, System_IDisposable_TypeInfo, 0LL);
            }
            EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(
                                                                            v42,
                                                                            *(_QWORD *)(v57 + 8));
            if ( EffectObject )
            {
              EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                              EffectObject,
                                                                              0LL);
              if ( targetObject )
              {
                v58 = (UnityEngine_Transform_o *)EffectMaster;
                transform = UnityEngine_GameObject__get_transform(targetObject, 0LL);
                EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TransformHelper__getNodeFromLvName(
                                                                                transform,
                                                                                NodeName,
                                                                                limitCount,
                                                                                v61 & 1,
                                                                                0LL);
                if ( v58 )
                {
                  UnityEngine_Transform__set_parent(v58, (UnityEngine_Transform_o *)EffectMaster, 0LL);
                  zero = UnityEngine_Vector3__get_zero(0LL);
                  zero.fields.x = x + zero.fields.x;
                  zero.fields.y = y + zero.fields.y;
                  zero.fields.z = z + zero.fields.z;
                  UnityEngine_Transform__set_localPosition(v58, zero, 0LL);
                  v65.fields.x = v37;
                  v65.fields.y = v38;
                  v65.fields.z = v39;
                  UnityEngine_Transform__set_eulerAngles(v58, v65, 0LL);
                  one = UnityEngine_Vector3__get_one(0LL);
                  UnityEngine_Transform__set_localScale(v58, one, 0LL);
                  return EffectObject;
                }
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B7076C(EffectMaster, v20);
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_22705068(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_43505CB & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    byte_43505CB = 1;
  }
  v12 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
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

  if ( (byte_43505C7 & 1) == 0 )
  {
    sub_B70694(&BattleEffectUtility_TypeInfo);
    byte_43505C7 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v3 = BattleEffectUtility_TypeInfo;
  }
  v3->static_fields->battleEffectId = inId;
  return v3->static_fields->battleEffectId;
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
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  System_String_o *SideEffectPath; // x19
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  AssetLoader_LoadEndDataHandler_o *v27; // x21

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_43505CE & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__);
    sub_B70694(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
    sub_B70694(&StringLiteral_18459/*"ef_enchant"*/);
    byte_43505CE = 1;
  }
  v9 = sub_B70764(BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass23_0___ctor((BattleEffectUtility___c__DisplayClass23_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B7076C(v10, v11);
  *(_QWORD *)(v9 + 24) = parent;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)parent, v12, v13, v14, v15, v16, v17);
  *(float *)(v9 + 32) = x;
  *(float *)(v9 + 36) = y;
  *(float *)(v9 + 40) = z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v18);
  v20 = (System_Int32_array **)StringLiteral_18459/*"ef_enchant"*/;
  *(_QWORD *)(v9 + 16) = StringLiteral_18459/*"ef_enchant"*/;
  sub_B70630((BattleServantConfConponent_o *)(v9 + 16), v20, v21, v22, v23, v24, v25, v26);
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v9,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(SideEffectPath, v27, 1, 0LL);
}


void __fastcall BattleEffectUtility_BuffEffectLoadArgument___ctor(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        BattleActorControl_o *bActor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1

  if ( (byte_4351390 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351390 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !bActor )
      sub_B7076C(v5, v6);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields,
      (System_Int32_array **)BuffEffectNodeName_k__BackingField,
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
    sub_B7076C(IsNullOrEmpty, v8);
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
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_Transform_o *v6; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_435138F & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleEffectUtility___c__DisplayClass23_0_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435138F = 1;
  }
  if ( !data )
    goto LABEL_10;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               v4->fields.name,
                                                                               (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          Object_WarBoardWaitTimeSetting,
                                                          (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_10:
    sub_B7076C(this, data);
  }
  v6 = (UnityEngine_Transform_o *)this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v6, zero, 0LL);
  UnityEngine_Transform__set_localScale(v6, v4->fields.scl, 0LL);
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