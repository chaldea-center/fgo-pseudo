void __fastcall BattleEffectUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleEffectUtility_c *v13; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v15; // x0
  __int64 v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x19
  void *v24; // x0
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x1
  struct BattleEffectUtility_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0
  __int64 v55; // x0

  if ( (byte_421350D & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v1);
    sub_B0D8A4(&string___TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_16099/*"_S"*/, v9);
    sub_B0D8A4(&StringLiteral_16059/*"_M"*/, v10);
    sub_B0D8A4(&StringLiteral_16054/*"_L"*/, v11);
    sub_B0D8A4(&StringLiteral_1/*""*/, v12);
    byte_421350D = 1;
  }
  BattleEffectUtility_TypeInfo->static_fields->SendReportProbability = 1.0;
  v13 = BattleEffectUtility_TypeInfo;
  BattleEffectUtility_TypeInfo->static_fields->battleEffectId = 0;
  static_fields = v13->static_fields;
  static_fields->wkVec.fields.z = 0.0;
  *(_QWORD *)&static_fields->wkVec.fields.x = 0LL;
  v15 = v13->static_fields;
  v15->auraPosOverwriteMst = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&v15->auraPosOverwriteMst, 0LL, v2, v3, v4, v5, v6, v7);
  v16 = sub_B0D8BC(string___TypeInfo, 4LL);
  if ( !v16 )
    sub_B0D97C(0LL);
  v23 = (System_Int32_array **)v16;
  v24 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v24 = (void *)sub_B0D964(StringLiteral_1/*""*/, *(_QWORD *)&(*v23)->m_Items[9]);
    if ( !v24 )
      goto LABEL_26;
    v25 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !*((_DWORD *)v23 + 6) )
    goto LABEL_25;
  v23[4] = (System_Int32_array *)v25;
  sub_B0D840((BattleServantConfConponent_o *)(v23 + 4), v25, v17, v18, v19, v20, v21, v22);
  v24 = (void *)StringLiteral_16099/*"_S"*/;
  if ( StringLiteral_16099/*"_S"*/ )
  {
    v24 = (void *)sub_B0D964(StringLiteral_16099/*"_S"*/, *(_QWORD *)&(*v23)->m_Items[9]);
    if ( !v24 )
      goto LABEL_26;
    v32 = (System_Int32_array **)StringLiteral_16099/*"_S"*/;
  }
  else
  {
    v32 = 0LL;
  }
  if ( *((_DWORD *)v23 + 6) <= 1u )
    goto LABEL_25;
  v23[5] = (System_Int32_array *)v32;
  sub_B0D840((BattleServantConfConponent_o *)(v23 + 5), v32, v26, v27, v28, v29, v30, v31);
  v24 = (void *)StringLiteral_16059/*"_M"*/;
  if ( StringLiteral_16059/*"_M"*/ )
  {
    v24 = (void *)sub_B0D964(StringLiteral_16059/*"_M"*/, *(_QWORD *)&(*v23)->m_Items[9]);
    if ( !v24 )
      goto LABEL_26;
    v39 = (System_Int32_array **)StringLiteral_16059/*"_M"*/;
  }
  else
  {
    v39 = 0LL;
  }
  if ( *((_DWORD *)v23 + 6) <= 2u )
    goto LABEL_25;
  v23[6] = (System_Int32_array *)v39;
  sub_B0D840((BattleServantConfConponent_o *)(v23 + 6), v39, v33, v34, v35, v36, v37, v38);
  v24 = (void *)StringLiteral_16054/*"_L"*/;
  if ( StringLiteral_16054/*"_L"*/ )
  {
    v24 = (void *)sub_B0D964(StringLiteral_16054/*"_L"*/, *(_QWORD *)&(*v23)->m_Items[9]);
    if ( v24 )
    {
      v46 = (System_Int32_array **)StringLiteral_16054/*"_L"*/;
      goto LABEL_23;
    }
LABEL_26:
    v55 = sub_B0D99C();
    sub_B0D948(v55, 0LL);
  }
  v46 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v23 + 6) <= 3u )
  {
LABEL_25:
    v54 = sub_B0D9A8(v24);
    sub_B0D948(v54, 0LL);
  }
  v23[7] = (System_Int32_array *)v46;
  sub_B0D840((BattleServantConfConponent_o *)(v23 + 7), v46, v40, v41, v42, v43, v44, v45);
  v47 = BattleEffectUtility_TypeInfo->static_fields;
  v47->scalelist = (struct System_String_array *)v23;
  sub_B0D840((BattleServantConfConponent_o *)&v47->scalelist, v23, v48, v49, v50, v51, v52, v53);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0

  if ( (byte_4213504 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v3);
    byte_4213504 = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v4);
  if ( !NotPreloadEffectIdHashSet )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_2C761FC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  __int64 v10; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x21
  unsigned __int64 v12; // x24
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v14; // x22
  unsigned __int64 v15; // x28
  int32_t v16; // w23
  __int64 v17; // x0

  if ( (byte_42134FF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_FunctionMaster___, effectIdList);
    sub_B0D8A4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_42134FF = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_21:
      sub_B0D97C(Instance);
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_FunctionMaster___);
    v10 = *(_QWORD *)&funcIds->max_length;
    if ( (int)v10 >= 1 )
    {
      v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v12 = 0LL;
      while ( 1 )
      {
        if ( v12 >= (unsigned int)v10 )
          goto LABEL_22;
        if ( !v11 )
          goto LABEL_21;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v11,
                                      funcIds->m_Items[v12 + 1],
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_21;
          datalist = Instance->fields.datalist;
          v14 = Instance;
          if ( (int)datalist >= 1 )
            break;
        }
LABEL_19:
        LODWORD(v10) = funcIds->max_length;
        if ( (__int64)++v12 >= (int)v10 )
          return;
      }
      v15 = 0LL;
      while ( v15 < (unsigned int)datalist )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_21;
        v16 = *((_DWORD *)&v14->fields.lookup + v15);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v16,
                                      (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_21;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Instance,
            v16,
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        }
        LODWORD(datalist) = v14->fields.datalist;
        if ( (__int64)++v15 >= (int)datalist )
          goto LABEL_19;
      }
LABEL_22:
      v17 = sub_B0D9A8(Instance);
      sub_B0D948(v17, 0LL);
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
  __int64 OverwriteShadowServantEffectNodes; // x0
  float v20; // s4
  float v21; // s5
  float v22; // s6
  float v23; // s7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x22
  System_Int32_array **v32; // x1
  __int64 v33; // x8
  unsigned __int64 v34; // x25
  System_String_o *v35; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x24
  UnityEngine_GameObject_o *v38; // x23
  UnityEngine_Transform_o *v39; // x24
  int v40; // s0
  UnityEngine_Transform_o *v43; // x24
  int v44; // s0
  UnityEngine_Transform_o *v47; // x24
  int v48; // s0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x8
  __int64 v54; // x21
  unsigned __int64 v55; // x23
  UnityEngine_Object_o *v56; // x22
  int v57; // w8
  __int64 v58; // x22
  unsigned int v59; // w26
  __int64 v60; // x8
  __int64 v61; // x19
  unsigned __int64 v62; // x22
  UnityEngine_Object_o *v63; // x21
  int v64; // w8
  __int64 v65; // x21
  unsigned int v66; // w25
  __int64 v68; // x0
  __int64 v69; // x0
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421350B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, isShadow);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v15);
    sub_B0D8A4(&string___TypeInfo, v16);
    sub_B0D8A4(&StringLiteral_18383/*"en_waist"*/, v17);
    sub_B0D8A4(&StringLiteral_16002/*"_Color"*/, v18);
    byte_421350B = 1;
  }
  white = UnityEngine_Color__get_white(0LL);
  v24 = 0LL;
  methoda.methodPointer = *(Il2CppMethodPointer *)&white.fields.r;
  methoda.invoker_method = *(void **)&white.fields.b;
  if ( isShadow )
  {
    v73.fields.r = 0.05;
    v73.fields.a = 1.0;
    v73.fields.g = 0.05;
    v73.fields.b = 0.05;
    UnityEngine_Color___ctor(v73, v20, v21, v22, v23, &methoda);
    OverwriteShadowServantEffectNodes = sub_B0D8BC(string___TypeInfo, 1LL);
    if ( !OverwriteShadowServantEffectNodes )
      goto LABEL_76;
    v31 = OverwriteShadowServantEffectNodes;
    OverwriteShadowServantEffectNodes = StringLiteral_18383/*"en_waist"*/;
    if ( StringLiteral_18383/*"en_waist"*/ )
    {
      OverwriteShadowServantEffectNodes = sub_B0D964(StringLiteral_18383/*"en_waist"*/, *(_QWORD *)(*(_QWORD *)v31 + 64LL));
      if ( !OverwriteShadowServantEffectNodes )
      {
        v69 = sub_B0D99C();
        sub_B0D948(v69, 0LL);
      }
      v32 = (System_Int32_array **)StringLiteral_18383/*"en_waist"*/;
    }
    else
    {
      v32 = 0LL;
    }
    if ( !*(_DWORD *)(v31 + 24) )
      goto LABEL_77;
    *(_QWORD *)(v31 + 32) = v32;
    sub_B0D840((BattleServantConfConponent_o *)(v31 + 32), v32, v25, v26, v27, v28, v29, v30);
    if ( limitAddEntity )
    {
      OverwriteShadowServantEffectNodes = (__int64)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
                                                     limitAddEntity,
                                                     0LL);
      v31 = OverwriteShadowServantEffectNodes;
      if ( !OverwriteShadowServantEffectNodes )
        goto LABEL_76;
    }
    v33 = *(_QWORD *)(v31 + 24);
    if ( (int)v33 >= 1 )
    {
      v24 = 0LL;
      v34 = 0LL;
      while ( v34 < (unsigned int)v33 )
      {
        if ( !actorObj )
          goto LABEL_76;
        v35 = *(System_String_o **)(v31 + 32 + 8 * v34);
        transform = UnityEngine_GameObject__get_transform(actorObj, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v35, 0, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          OverwriteShadowServantEffectNodes = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)ServantAssetLoadManager__createShadowEffect(
                                                         (ServantAssetLoadManager_o *)OverwriteShadowServantEffectNodes,
                                                         0,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v38 = (UnityEngine_GameObject_o *)OverwriteShadowServantEffectNodes;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)OverwriteShadowServantEffectNodes,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)OverwriteShadowServantEffectNodes,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v39 = UnityEngine_GameObject__get_transform(v38, 0LL);
          *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v39 )
            goto LABEL_76;
          UnityEngine_Transform__set_localPosition(v39, *(UnityEngine_Vector3_o *)&v40, 0LL);
          v43 = UnityEngine_GameObject__get_transform(v38, 0LL);
          *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v43 )
            goto LABEL_76;
          UnityEngine_Transform__set_localEulerAngles(v43, *(UnityEngine_Vector3_o *)&v44, 0LL);
          v47 = UnityEngine_GameObject__get_transform(v38, 0LL);
          *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Vector3__get_one(0LL);
          if ( !v47 )
            goto LABEL_76;
          UnityEngine_Transform__set_localScale(v47, *(UnityEngine_Vector3_o *)&v48, 0LL);
          if ( !v24 )
          {
            v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_GameObject__TypeInfo, v51, v52);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v24,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            if ( !v24 )
              goto LABEL_76;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v24,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        LODWORD(v33) = *(_DWORD *)(v31 + 24);
        if ( (__int64)++v34 >= (int)v33 )
          goto LABEL_32;
      }
LABEL_77:
      v68 = sub_B0D9A8(OverwriteShadowServantEffectNodes);
      sub_B0D948(v68, 0LL);
    }
    v24 = 0LL;
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
                                                 (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v53 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v54 = OverwriteShadowServantEffectNodes;
    if ( (int)v53 >= 1 )
    {
      v55 = 0LL;
      while ( 1 )
      {
        if ( v55 >= (unsigned int)v53 )
          goto LABEL_77;
        v56 = *(UnityEngine_Object_o **)(v54 + 8 * v55 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v56, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v56 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v56,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v57 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v58 = OverwriteShadowServantEffectNodes;
          if ( v57 >= 1 )
            break;
        }
LABEL_54:
        LODWORD(v53) = *(_DWORD *)(v54 + 24);
        if ( (__int64)++v55 >= (int)v53 )
          goto LABEL_55;
      }
      v59 = 0;
      while ( v59 < v57 )
      {
        OverwriteShadowServantEffectNodes = *(_QWORD *)(v58 + 8LL * (int)v59 + 32);
        if ( !OverwriteShadowServantEffectNodes )
          goto LABEL_76;
        *(_QWORD *)&v74.fields.b = methoda.invoker_method;
        *(_QWORD *)&v74.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)OverwriteShadowServantEffectNodes,
          (System_String_o *)StringLiteral_16002/*"_Color"*/,
          v74,
          0LL);
        v57 = *(_DWORD *)(v58 + 24);
        if ( (int)++v59 >= v57 )
          goto LABEL_54;
      }
      goto LABEL_77;
    }
  }
LABEL_55:
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !OverwriteShadowServantEffectNodes )
LABEL_76:
    sub_B0D97C(OverwriteShadowServantEffectNodes);
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)OverwriteShadowServantEffectNodes,
                                                 (const MethodInfo_170EAAC *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v60 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v61 = OverwriteShadowServantEffectNodes;
    if ( (int)v60 >= 1 )
    {
      v62 = 0LL;
      while ( 1 )
      {
        if ( v62 >= (unsigned int)v60 )
          goto LABEL_77;
        v63 = *(UnityEngine_Object_o **)(v61 + 8 * v62 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v63 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v63,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v64 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v65 = OverwriteShadowServantEffectNodes;
          if ( v64 >= 1 )
            break;
        }
LABEL_71:
        LODWORD(v60) = *(_DWORD *)(v61 + 24);
        if ( (__int64)++v62 >= (int)v60 )
          goto LABEL_72;
      }
      v66 = 0;
      while ( v66 < v64 )
      {
        OverwriteShadowServantEffectNodes = *(_QWORD *)(v65 + 8LL * (int)v66 + 32);
        if ( !OverwriteShadowServantEffectNodes )
          goto LABEL_76;
        *(_QWORD *)&v75.fields.b = methoda.invoker_method;
        *(_QWORD *)&v75.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)OverwriteShadowServantEffectNodes,
          (System_String_o *)StringLiteral_16002/*"_Color"*/,
          v75,
          0LL);
        v64 = *(_DWORD *)(v65 + 24);
        if ( (int)++v66 >= v64 )
          goto LABEL_71;
      }
      goto LABEL_77;
    }
  }
LABEL_72:
  if ( v24 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v24,
                                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0LL;
}


void __fastcall BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleEffectUtility_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0

  if ( (byte_4213505 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Clear__, v2);
    byte_4213505 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_2C75614 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  __int64 v7; // x1
  int32_t IndexOf_43923864; // w0
  int32_t v9; // w22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_o *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_o **v25; // x0
  System_String_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  v6 = baseName;
  if ( (byte_4213501 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_879/*"/"*/, path);
    baseName = (System_String_o *)sub_B0D8A4(&StringLiteral_5830/*"Effect/BattleCommon/{0}"*/, v7);
    byte_4213501 = 1;
  }
  if ( !v6 )
    sub_B0D97C(baseName);
  IndexOf_43923864 = System_String__LastIndexOf_43923864(v6, (System_String_o *)StringLiteral_879/*"/"*/, 0LL);
  if ( IndexOf_43923864 == -1 )
  {
    v26 = System_String__Format((System_String_o *)StringLiteral_5830/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v26;
    sub_B0D840((BattleServantConfConponent_o *)path, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    v25 = name;
    v18 = v6;
    *name = v6;
  }
  else
  {
    v9 = IndexOf_43923864;
    v10 = (Il2CppObject *)System_String__Substring_43913640(v6, 0, IndexOf_43923864, 0LL);
    v11 = System_String__Format((System_String_o *)StringLiteral_5830/*"Effect/BattleCommon/{0}"*/, v10, 0LL);
    *path = v11;
    sub_B0D840((BattleServantConfConponent_o *)path, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
    v18 = System_String__Substring(v6, v9 + 1, 0LL);
    *name = v18;
    v25 = name;
  }
  sub_B0D840((BattleServantConfConponent_o *)v25, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
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
  void *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  __int64 v16; // x8
  unsigned __int64 v17; // x23
  const MethodInfo *v18; // x3
  System_String_o *v19; // x22
  __int64 v21; // x0
  System_String_o *v22; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4213500 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4213500 = 1;
  }
  v22 = 0LL;
  path = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EffectMaster___);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v13,
                                                                                                  v14);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_20;
  v16 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
      {
        v21 = sub_B0D9A8(Instance);
        sub_B0D948(v21, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   effectIdList->m_Items[v17 + 1],
                   (const MethodInfo_2669BD4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && *((_DWORD *)Instance + 5) == 5 )
      {
        v19 = (System_String_o *)*((_QWORD *)Instance + 5);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        BattleEffectUtility__GetBattleCommonEffectPathAndName(v19, &path, &v22, v18);
        if ( !v15 )
          break;
        Instance = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v15,
                             (WarBoardManager_TaskList_o *)path,
                             (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)path,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      LODWORD(v16) = effectIdList->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B0D97C(Instance);
  }
LABEL_18:
  if ( !v15 )
    goto LABEL_20;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42134FC & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_5864/*"Effect/SideEffect/"*/, v3);
    byte_42134FC = 1;
  }
  v6 = effectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_5864/*"Effect/SideEffect/"*/, v4, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  BattleEffectUtility_c *v12; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *EffectMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v15; // x3
  System_String_o *longName; // x20
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213503 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, effectPath);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v11);
    byte_4213503 = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( effectId < 1 )
    goto LABEL_15;
  v12 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v12);
  if ( !EffectMaster )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_2669BD4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
      BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, effectPath, &name, v15);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0LL) )
    {
LABEL_15:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_19:
    sub_B0D97C(EffectMaster);
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
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  BattleEffectUtility_c *v28; // x0
  BattleEffectUtility_c *v29; // x0
  BattleEffectUtility_c *v30; // x0
  float SendReportProbability; // s8
  Il2CppObject *v32; // x0
  System_String_o *v33; // x23
  BattleEffectUtility_c *v34; // x0
  BattleDataDefine_c *v35; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  __int64 v37; // x1
  __int64 v38; // x2
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v40; // x23
  AssetLoader_LoadEndDataHandler_o *v41; // x24
  System_String_o *v42; // x19
  AssetLoader_LoadEndDataHandler_o *v43; // x23
  int32_t v44; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *effectPath; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4213506 & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, finishCallback);
    sub_B0D8A4(&BattleDataDefine_TypeInfo, v7);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_B0D8A4(&int_TypeInfo, v11);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v14);
    sub_B0D8A4(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__, v15);
    sub_B0D8A4(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__, v16);
    sub_B0D8A4(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_21182/*"non-loaded asset was detected. effectId = {0}"*/, v18);
    byte_4213506 = 1;
  }
  effectPath = 0LL;
  v19 = sub_B0D974(BattleEffectUtility___c__DisplayClass32_0_TypeInfo, finishCallback, perf);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_45;
  *(_QWORD *)(v19 + 16) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v19 + 16),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v27) )
    goto LABEL_43;
  v28 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v28);
  if ( !SentEffectIdHashSet )
    goto LABEL_45;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v29 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v29);
    if ( !SentEffectIdHashSet )
      goto LABEL_45;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v30 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v30 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v30->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v44 = effectId;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v33 = System_String__Format((System_String_o *)StringLiteral_21182/*"non-loaded asset was detected. effectId = {0}"*/, v32, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_45;
        CrashReporter__SendReport_27767316(SentEffectIdHashSet, v33, 0LL, 0LL, 0LL);
        v34 = BattleEffectUtility_TypeInfo;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v34);
        if ( !SentEffectIdHashSet )
          goto LABEL_45;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v35 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v35 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v35->static_fields->ASSET_PARALLEL_LOAD_MAX;
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
      v40 = effectPath;
      v41 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v37, v38);
      AssetLoader_LoadEndDataHandler___ctor(
        v41,
        (Il2CppObject *)v19,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v40,
               v41,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_43;
      }
    }
LABEL_45:
    sub_B0D97C(SentEffectIdHashSet);
  }
  v42 = effectPath;
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v37, v38);
  AssetLoader_LoadEndDataHandler___ctor(
    v43,
    (Il2CppObject *)v19,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v42, v43, ASSET_PARALLEL_LOAD_MAX, 0LL) )
LABEL_43:
    ActionExtensions__Call(*(System_Action_o **)(v19 + 16), 0LL);
}


bool __fastcall BattleEffectUtility__Lottery(float rate, const MethodInfo *method)
{
  return UnityEngine_Random__Range(0.0, 100.0, 0LL) <= rate;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleEffectUtility__SetEffectParent(
        UnityEngine_GameObject_o *effectObj,
        int32_t effectId,
        UnityEngine_GameObject_o *targetObj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1

  if ( (byte_42134FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EffectMaster___, *(_QWORD *)&effectId);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v5);
    byte_42134FB = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  JUMPOUT(0x1538DF8LL);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x1
  BattleEffectUtility_c *v11; // x0
  EffectMaster_o *EffectMaster; // x0
  const MethodInfo *v13; // x3
  System_String_o *longName; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_4213502 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v10);
    byte_4213502 = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  v11 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v11);
  if ( !EffectMaster )
    goto LABEL_17;
  EffectMaster = (EffectMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_2669C30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_17:
    sub_B0D97C(EffectMaster);
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
  EffectEntity_o *v28; // x19
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *v30; // x21
  System_String_o *v31; // x0
  UnityEngine_Object_o *v32; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v33; // x22
  System_String_o *v34; // x22
  System_String_o *v35; // x22
  System_String_o *v36; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *Manager__loadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  System_String_o *v40; // x25
  int32_t v41; // w23
  BattleEffectUtility_c *v42; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v44; // x24
  _DWORD *monitor; // x8
  int32_t v46; // w23
  int32_t v47; // w22
  int32_t LimitCount; // w0
  System_String_o *v49; // x24
  int32_t v50; // w25
  BattleEffectUtility_c *v51; // x0
  System_String_o *v52; // x0
  System_String_o *v53; // x22
  System_String_o *se; // x20
  BattleEffectUtility_c *v55; // x0
  BattleEffectUtility_c *v56; // x0
  float SendReportProbability; // s8
  UnityEngine_Object_o *v58; // x20
  Il2CppObject *v59; // x0
  System_String_o *v60; // x20
  BattleEffectUtility_c *v61; // x0
  DataManager_o *v62; // x19
  float v63; // s0
  float v64; // s1
  float v65; // s2
  float v66; // s3
  int datalist; // w8
  float v68; // s8
  float v69; // s9
  float v70; // s10
  float v71; // s11
  unsigned int v72; // w21
  __int64 v74; // x0
  int32_t id; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Color_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4213508 & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, procObject);
    sub_B0D8A4(&AssetManager_TypeInfo, v7);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EffectMaster___, v9);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v11);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v12);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v15);
    sub_B0D8A4(&int_TypeInfo, v16);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&ServantAssetLoadManager_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v21);
    sub_B0D8A4(&SoundManager_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_18279/*"effect load failed. effectId = {0}"*/, v23);
    sub_B0D8A4(&StringLiteral_18280/*"effect/"*/, v24);
    sub_B0D8A4(&StringLiteral_2770/*"Battle/Effect/"*/, v25);
    sub_B0D8A4(&StringLiteral_2763/*"Battle"*/, v26);
    byte_4213508 = 1;
  }
  name = 0LL;
  path = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_98;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                effectId,
                                (const MethodInfo_2669BD4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( !procObject )
    goto LABEL_98;
  v28 = (EffectEntity_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                procObject,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !v28 )
    goto LABEL_98;
  v30 = (UnityEngine_Object_o *)Instance;
  switch ( v28->fields.folderType )
  {
    case 1:
      v31 = System_String__Concat_43849904((System_String_o *)StringLiteral_18280/*"effect/"*/, v28->fields.name, 0LL);
      v32 = UnityEngine_Resources__Load(v31, 0LL);
      if ( !v32 )
        goto LABEL_12;
      if ( (UnityEngine_GameObject_c *)v32->klass == UnityEngine_GameObject_TypeInfo )
        v33 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v32;
      else
        v33 = 0LL;
      goto LABEL_53;
    case 2:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
      v33 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_53;
      if ( !v30 )
        goto LABEL_98;
      monitor = v30[18].monitor;
      if ( !monitor )
        goto LABEL_98;
      v46 = monitor[168];
      v47 = monitor[180];
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v30, 0LL);
      v49 = v28->fields.name;
      v50 = LimitCount;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                                                     v46,
                                                                                     v50,
                                                                                     v49,
                                                                                     v47,
                                                                                     0LL);
      goto LABEL_52;
    case 3:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
      v33 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_53;
      if ( !v30 )
        goto LABEL_98;
      WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v30, 0LL);
      WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v30, 1, 0LL);
      Instance = (DataManager_o *)BattleActorControl__getEffectFolder((BattleActorControl_o *)v30, 0LL);
      v40 = v28->fields.name;
      v41 = (int)Instance;
      v42 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v42 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v42->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_98;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_99;
      v44 = System_String__Concat_43849904(v40, scalelist->m_Items[WeaponScale], 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                                                     v44,
                                                                                     WeaponGroup,
                                                                                     v41,
                                                                                     0LL);
LABEL_52:
      v33 = Manager__loadNoblePhantasmEffect;
LABEL_53:
      if ( EffectEntity__isSe(v28, 0LL) && isPlaySe )
      {
        se = v28->fields.se;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe_24977004((System_String_o *)StringLiteral_2763/*"Battle"*/, se, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v33,
                                      (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v58 = (UnityEngine_Object_o *)Instance;
        if ( v28->fields.folderType != 3 )
          goto LABEL_95;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_95;
        if ( !v58 )
          goto LABEL_98;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                      (UnityEngine_GameObject_o *)v58,
                                      (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v30 )
          goto LABEL_98;
        v62 = Instance;
        *(UnityEngine_Color_o *)&v63 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v30, 0LL);
        if ( !v62 )
          goto LABEL_98;
        datalist = (int)v62->fields.datalist;
        if ( datalist >= 1 )
        {
          v68 = v63;
          v69 = v64;
          v70 = v65;
          v71 = v66;
          v72 = 0;
          while ( 1 )
          {
            if ( v72 >= datalist )
            {
LABEL_99:
              v74 = sub_B0D9A8(Instance);
              sub_B0D948(v74, 0LL);
            }
            Instance = (DataManager_o *)*((_QWORD *)&v62->fields.lookup + (int)v72);
            if ( !Instance )
              break;
            v78.fields.r = v68;
            v78.fields.g = v69;
            v78.fields.b = v70;
            v78.fields.a = v71;
            UIWidget__set_color((UIWidget_o *)Instance, v78, 0LL);
            datalist = (int)v62->fields.datalist;
            if ( (int)++v72 >= datalist )
              goto LABEL_95;
          }
        }
        else
        {
LABEL_95:
          if ( v58 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v58, 0, 0LL);
            return (UnityEngine_GameObject_o *)v58;
          }
        }
LABEL_98:
        sub_B0D97C(Instance);
      }
      v55 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v55);
      if ( !Instance )
        goto LABEL_98;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             v28->fields.id,
             (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v56 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v56 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v56->static_fields->SendReportProbability;
      v58 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = v28->fields.id;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
        v60 = System_String__Format((System_String_o *)StringLiteral_18279/*"effect load failed. effectId = {0}"*/, v59, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_27767316((CrashReporter_o *)Instance, v60, 0LL, 0LL, 0LL);
          v61 = BattleEffectUtility_TypeInfo;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v61);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              v28->fields.id,
              (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_98;
      }
      return (UnityEngine_GameObject_o *)v58;
    case 4:
      v51 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v51 = BattleEffectUtility_TypeInfo;
      }
      v52 = System_Int32__ToString((unsigned int)v51->static_fields + 24, 0LL);
      v53 = System_String__Concat_43849904((System_String_o *)StringLiteral_2770/*"Battle/Effect/"*/, v52, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v53, 0LL);
      if ( !Instance )
        goto LABEL_98;
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                     (AssetData_o *)Instance,
                                                                                     v28->fields.name,
                                                                                     (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
      goto LABEL_52;
    case 5:
      v34 = v28->fields.name;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v34, &path, &name, v29);
      v36 = name;
      v35 = path;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                     v35,
                                                                                     v36,
                                                                                     0LL);
      goto LABEL_52;
    default:
LABEL_12:
      v33 = 0LL;
      goto LABEL_53;
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
  __int64 v14; // x1
  __int64 v15; // x2
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v16; // x0

  if ( (byte_4213507 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, procObject);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___, v9);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_5825/*"Effect Default"*/, v12);
    byte_4213507 = 1;
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
    EffectObject = (UnityEngine_GameObject_o *)sub_B0D974(UnityEngine_GameObject_TypeInfo, v14, v15);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5825/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v16 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  EffectObject,
                  (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_B0D97C(v16);
    }
    *(float *)&v16->fields.callbackQueue = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_22204840(
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
  bool v12; // w8
  UnityEngine_GameObject_o *result; // x0
  System_String_o *v14; // x0

  if ( (byte_421350A & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, name);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_2767/*"Battle/CommonEffects/"*/, v9);
    sub_B0D8A4(&StringLiteral_18280/*"effect/"*/, v10);
    byte_421350A = 1;
  }
  if ( folder == 2 )
  {
    v11 = &StringLiteral_18280/*"effect/"*/;
LABEL_15:
    v14 = System_String__Concat_43849904((System_String_o *)*v11, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v14, 0LL);
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
    v11 = &StringLiteral_2767/*"Battle/CommonEffects/"*/;
    goto LABEL_15;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v12 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 actorObject,
                                                 (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_B0D97C(result);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getEffectSeName(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  DataManager_o *v6; // x19
  bool isSe; // w8
  System_String_o *result; // x0

  if ( (byte_4213509 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4213509 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      effectId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_B0D97C(Instance);
  }
  v6 = Instance;
  isSe = EffectEntity__isSe((EffectEntity_o *)Instance, 0LL);
  result = 0LL;
  if ( isSe )
    return (System_String_o *)v6->fields.lookup;
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x19
  DataManager_o *Instance; // x0
  System_String_o *NodeName; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_421350C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&StringLiteral_18377/*"en_body"*/, v5);
    byte_421350C = 1;
  }
  entity = 0LL;
  v6 = (System_String_o *)StringLiteral_18377/*"en_body"*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          id,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v6;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B0D97C(Instance);
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

  if ( (byte_42134F7 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_2770/*"Battle/Effect/"*/, v2);
    byte_42134F7 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v3 = BattleEffectUtility_TypeInfo;
  }
  v4 = System_Int32__ToString((unsigned int)v3->static_fields + 24, 0LL);
  return System_String__Concat_43849904((System_String_o *)StringLiteral_2770/*"Battle/Effect/"*/, v4, 0LL);
}


EffectMaster_o *__fastcall BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  System_Int32_array **effectMst; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleEffectUtility_c *v13; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_42134F8 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v1);
    sub_B0D8A4(&Method_DataManager_GetMaster_EffectMaster___, v2);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_42134F8 = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v4 = BattleEffectUtility_TypeInfo;
  }
  effectMst = (System_Int32_array **)v4->static_fields->effectMst;
  if ( !effectMst )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EffectMaster___);
    v13 = BattleEffectUtility_TypeInfo;
    effectMst = (System_Int32_array **)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v13 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->effectMst = (struct EffectMaster_o *)effectMst;
    sub_B0D840((BattleServantConfConponent_o *)&static_fields->effectMst, effectMst, v7, v8, v9, v10, v11, v12);
  }
  return (EffectMaster_o *)effectMst;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_NotPreloadEffectIdHashSet(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  BattleEffectUtility_c *v5; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleEffectUtility_c *v13; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_42134F5 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v3);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_42134F5 = 1;
  }
  v5 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v5 = BattleEffectUtility_TypeInfo;
  }
  notPreloadEffectIdHashSet = v5->static_fields->notPreloadEffectIdHashSet;
  if ( !notPreloadEffectIdHashSet )
  {
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                                               System_Collections_Generic_HashSet_int__TypeInfo,
                                                                               v1,
                                                                               v2);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
    v13 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v13 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->notPreloadEffectIdHashSet,
      (System_Int32_array **)notPreloadEffectIdHashSet,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  return notPreloadEffectIdHashSet;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_SentEffectIdHashSet(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  BattleEffectUtility_c *v5; // x0
  System_Collections_Generic_HashSet_int__o *sentEffectIdHashSet; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleEffectUtility_c *v13; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_42134F4 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v3);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v4);
    byte_42134F4 = 1;
  }
  v5 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v5 = BattleEffectUtility_TypeInfo;
  }
  sentEffectIdHashSet = v5->static_fields->sentEffectIdHashSet;
  if ( !sentEffectIdHashSet )
  {
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                                         v1,
                                                                         v2);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
    v13 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v13 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v13->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_B0D840(
      (BattleServantConfConponent_o *)&static_fields->sentEffectIdHashSet,
      (System_Int32_array **)sentEffectIdHashSet,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  return sentEffectIdHashSet;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadActivateSideEffect(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19

  if ( (byte_42134FE & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v1);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v2);
    sub_B0D8A4(&Method_UnityEngine_Resources_Load_GameObject___, v3);
    sub_B0D8A4(&StringLiteral_18315/*"effect/ef_sideeffect01"*/, v4);
    byte_42134FE = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_18315/*"effect/ef_sideeffect01"*/,
                                                        (const MethodInfo_204DCF8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       UIAtlas,
                                       (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  UnityEngine_GameObject_o *EffectObject; // x21
  BattleEffectUtility_c *v27; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *EffectMaster; // x0
  System_String_o *NodeName; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  BattleEffectUtility_c *v37; // x8
  System_Int32_array **v38; // x26
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *klass; // x25
  float v42; // s0
  float v43; // s1
  float v44; // s2
  float v45; // s11
  float v46; // s12
  float v47; // s13
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v49; // x25
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x10
  AuraEffectPosOverwriteEntity_o *v56; // x26
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  unsigned __int64 v58; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  UnityEngine_Transform_o *v65; // x23
  UnityEngine_Transform_o *transform; // x0
  char v68; // [xsp+14h] [xbp-8Ch]
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_42134F9 & 1) == 0 )
  {
    sub_B0D8A4(&AuraEffectPosOverwriteEntity_TypeInfo, *(_QWORD *)&effectId);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v17);
    sub_B0D8A4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___, v19);
    sub_B0D8A4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v20);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v21);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v22);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_42134F9 = 1;
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
    v27 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v27);
    if ( EffectMaster )
    {
      EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                      EffectMaster,
                                                                      effectId,
                                                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !EffectMaster )
            goto LABEL_64;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)EffectMaster,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v37 = BattleEffectUtility_TypeInfo;
          v38 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
            v37 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v37->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v38;
          sub_B0D840(
            (BattleServantConfConponent_o *)&static_fields->auraPosOverwriteMst,
            v38,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
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
          *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_up(0LL);
          if ( klass )
          {
            v45 = v42;
            v46 = v43;
            v47 = v44;
            Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                           klass,
                           (const MethodInfo_2AB5D9C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
            v68 = 0;
            v49 = Enumerator;
            while ( 1 )
            {
              if ( !v49 )
                sub_B0D97C(Enumerator);
              v57 = v49->klass;
              if ( *(_WORD *)&v49->klass->_2.bitflags1 )
              {
                v58 = 0LL;
                p_offset = &v57->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v58;
                  p_offset += 4;
                  if ( v58 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
                    goto LABEL_49;
                }
                p_method = (__int64)&v57->vtable[*p_offset].method;
              }
              else
              {
LABEL_49:
                p_method = sub_AA67A0(v49, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      v49,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v50 = v49->klass;
              if ( *(_WORD *)&v49->klass->_2.bitflags1 )
              {
                v51 = 0LL;
                v52 = &v50->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v52 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                {
                  ++v51;
                  v52 += 4;
                  if ( v51 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
                    goto LABEL_33;
                }
                v53 = (__int64)&v50->vtable[*v52].method;
              }
              else
              {
LABEL_33:
                v53 = sub_AA67A0(v49, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
              }
              v54 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v53)(
                      v49,
                      *(_QWORD *)(v53 + 8));
              if ( v54
                && (v55 = *(&AuraEffectPosOverwriteEntity_TypeInfo->_2.bitflags2 + 1),
                    *(unsigned __int8 *)(*(_QWORD *)v54 + 300LL) >= (unsigned int)v55) )
              {
                if ( *(AuraEffectPosOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v54 + 200LL) + 8 * v55 - 8) == AuraEffectPosOverwriteEntity_TypeInfo )
                  v56 = (AuraEffectPosOverwriteEntity_o *)v54;
                else
                  v56 = 0LL;
              }
              else
              {
                v56 = 0LL;
              }
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
                                                                            svtId,
                                                                            limitCount,
                                                                            effectId,
                                                                            v56,
                                                                            0LL);
              if ( ((unsigned __int8)Enumerator & 1) != 0 )
              {
                if ( !v56 )
                  sub_B0D97C(Enumerator);
                NodeName = v56->fields.nodeName;
                v69 = AuraEffectPosOverwriteEntity__GetOffset(v56, 0LL);
                x = v69.fields.x;
                y = v69.fields.y;
                z = v69.fields.z;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v56, 0LL);
                v45 = Rotation.fields.x;
                v46 = Rotation.fields.y;
                v47 = Rotation.fields.z;
                v68 = 1;
              }
            }
            v61 = v49->klass;
            if ( *(_WORD *)&v49->klass->_2.bitflags1 )
            {
              v62 = 0LL;
              v63 = &v61->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
              {
                ++v62;
                v63 += 4;
                if ( v62 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
                  goto LABEL_56;
              }
              v64 = (__int64)&v61->vtable[*v63].method;
            }
            else
            {
LABEL_56:
              v64 = sub_AA67A0(v49, System_IDisposable_TypeInfo, 0LL);
            }
            EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(
                                                                            v49,
                                                                            *(_QWORD *)(v64 + 8));
            if ( EffectObject )
            {
              EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                              EffectObject,
                                                                              0LL);
              if ( targetObject )
              {
                v65 = (UnityEngine_Transform_o *)EffectMaster;
                transform = UnityEngine_GameObject__get_transform(targetObject, 0LL);
                EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TransformHelper__getNodeFromLvName(
                                                                                transform,
                                                                                NodeName,
                                                                                limitCount,
                                                                                v68 & 1,
                                                                                0LL);
                if ( v65 )
                {
                  UnityEngine_Transform__set_parent(v65, (UnityEngine_Transform_o *)EffectMaster, 0LL);
                  zero = UnityEngine_Vector3__get_zero(0LL);
                  zero.fields.x = x + zero.fields.x;
                  zero.fields.y = y + zero.fields.y;
                  zero.fields.z = z + zero.fields.z;
                  UnityEngine_Transform__set_localPosition(v65, zero, 0LL);
                  v72.fields.x = v45;
                  v72.fields.y = v46;
                  v72.fields.z = v47;
                  UnityEngine_Transform__set_eulerAngles(v65, v72, 0LL);
                  one = UnityEngine_Vector3__get_one(0LL);
                  UnityEngine_Transform__set_localScale(v65, one, 0LL);
                  return EffectObject;
                }
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B0D97C(EffectMaster);
  }
  return EffectObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_22200024(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_42134FA & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    byte_42134FA = 1;
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

  if ( (byte_42134F6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, method);
    byte_42134F6 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  System_String_o *SideEffectPath; // x19
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x1
  __int64 v32; // x2
  AssetLoader_LoadEndDataHandler_o *v33; // x21

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_42134FD & 1) == 0 )
  {
    sub_B0D8A4(&AssetManager_TypeInfo, *(_QWORD *)&effectId);
    sub_B0D8A4(&BattleEffectUtility_TypeInfo, v9);
    sub_B0D8A4(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B0D8A4(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__, v11);
    sub_B0D8A4(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_18238/*"ef_enchant"*/, v13);
    byte_42134FD = 1;
  }
  v14 = sub_B0D974(BattleEffectUtility___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&effectId, method);
  BattleEffectUtility___c__DisplayClass23_0___ctor((BattleEffectUtility___c__DisplayClass23_0_o *)v14, 0LL);
  if ( !v14 )
    sub_B0D97C(v15);
  *(_QWORD *)(v14 + 24) = parent;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)parent, v16, v17, v18, v19, v20, v21);
  *(float *)(v14 + 32) = x;
  *(float *)(v14 + 36) = y;
  *(float *)(v14 + 40) = z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v22);
  v24 = (System_Int32_array **)StringLiteral_18238/*"ef_enchant"*/;
  *(_QWORD *)(v14 + 16) = StringLiteral_18238/*"ef_enchant"*/;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), v24, v25, v26, v27, v28, v29, v30);
  v33 = (AssetLoader_LoadEndDataHandler_o *)sub_B0D974(AssetLoader_LoadEndDataHandler_TypeInfo, v31, v32);
  AssetLoader_LoadEndDataHandler___ctor(
    v33,
    (Il2CppObject *)v14,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(SideEffectPath, v33, 1, 0LL);
}


void __fastcall BattleEffectUtility_BuffEffectLoadArgument___ctor(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        BattleActorControl_o *bActor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1

  if ( (byte_42138FC & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, bActor);
    byte_42138FC = 1;
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
      sub_B0D97C(v5);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields,
      (System_Int32_array **)BuffEffectNodeName_k__BackingField,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
  UnityEngine_Transform_o *transform; // x0

  IsNullOrEmpty = System_String__IsNullOrEmpty(this->fields.effectNodeName, 0LL);
  if ( IsNullOrEmpty )
    return defParentTr;
  if ( !targetObj )
    sub_B0D97C(IsNullOrEmpty);
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_Transform_o *v8; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42138FB & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, data);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (BattleEffectUtility___c__DisplayClass23_0_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_42138FB = 1;
  }
  if ( !data )
    goto LABEL_10;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               v4->fields.name,
                                                                               (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          Object_WarBoardWaitTimeSetting,
                                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  v8 = (UnityEngine_Transform_o *)this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v8, zero, 0LL);
  UnityEngine_Transform__set_localScale(v8, v4->fields.scl, 0LL);
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