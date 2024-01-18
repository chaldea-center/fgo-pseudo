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
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x19
  void *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x1
  struct BattleEffectUtility_StaticFields *v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x0
  __int64 v56; // x0

  if ( (byte_41868E4 & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v1);
    sub_B2C35C(&string___TypeInfo, v8);
    sub_B2C35C(&StringLiteral_16051/*"_S"*/, v9);
    sub_B2C35C(&StringLiteral_16011/*"_M"*/, v10);
    sub_B2C35C(&StringLiteral_16006/*"_L"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_41868E4 = 1;
  }
  BattleEffectUtility_TypeInfo->static_fields->SendReportProbability = 1.0;
  v13 = BattleEffectUtility_TypeInfo;
  BattleEffectUtility_TypeInfo->static_fields->battleEffectId = 0;
  static_fields = v13->static_fields;
  static_fields->wkVec.fields.z = 0.0;
  *(_QWORD *)&static_fields->wkVec.fields.x = 0LL;
  v15 = v13->static_fields;
  v15->auraPosOverwriteMst = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v15->auraPosOverwriteMst, 0LL, v2, v3, v4, v5, v6, v7);
  v16 = sub_B2C374(string___TypeInfo, 4LL);
  if ( !v16 )
    sub_B2C434(0LL, v17);
  v24 = (System_Int32_array **)v16;
  v25 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v25 = (void *)sub_B2C41C(StringLiteral_1/*""*/, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( !v25 )
      goto LABEL_26;
    v26 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !*((_DWORD *)v24 + 6) )
    goto LABEL_25;
  v24[4] = (System_Int32_array *)v26;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 4), v26, v18, v19, v20, v21, v22, v23);
  v25 = (void *)StringLiteral_16051/*"_S"*/;
  if ( StringLiteral_16051/*"_S"*/ )
  {
    v25 = (void *)sub_B2C41C(StringLiteral_16051/*"_S"*/, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( !v25 )
      goto LABEL_26;
    v33 = (System_Int32_array **)StringLiteral_16051/*"_S"*/;
  }
  else
  {
    v33 = 0LL;
  }
  if ( *((_DWORD *)v24 + 6) <= 1u )
    goto LABEL_25;
  v24[5] = (System_Int32_array *)v33;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 5), v33, v27, v28, v29, v30, v31, v32);
  v25 = (void *)StringLiteral_16011/*"_M"*/;
  if ( StringLiteral_16011/*"_M"*/ )
  {
    v25 = (void *)sub_B2C41C(StringLiteral_16011/*"_M"*/, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( !v25 )
      goto LABEL_26;
    v40 = (System_Int32_array **)StringLiteral_16011/*"_M"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( *((_DWORD *)v24 + 6) <= 2u )
    goto LABEL_25;
  v24[6] = (System_Int32_array *)v40;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 6), v40, v34, v35, v36, v37, v38, v39);
  v25 = (void *)StringLiteral_16006/*"_L"*/;
  if ( StringLiteral_16006/*"_L"*/ )
  {
    v25 = (void *)sub_B2C41C(StringLiteral_16006/*"_L"*/, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( v25 )
    {
      v47 = (System_Int32_array **)StringLiteral_16006/*"_L"*/;
      goto LABEL_23;
    }
LABEL_26:
    v56 = sub_B2C454();
    sub_B2C400(v56, 0LL);
  }
  v47 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v24 + 6) <= 3u )
  {
LABEL_25:
    v55 = sub_B2C460(v25);
    sub_B2C400(v55, 0LL);
  }
  v24[7] = (System_Int32_array *)v47;
  sub_B2C2F8((BattleServantConfConponent_o *)(v24 + 7), v47, v41, v42, v43, v44, v45, v46);
  v48 = BattleEffectUtility_TypeInfo->static_fields;
  v48->scalelist = (struct System_String_array *)v24;
  sub_B2C2F8((BattleServantConfConponent_o *)&v48->scalelist, v24, v49, v50, v51, v52, v53, v54);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v6; // x1

  if ( (byte_41868DB & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v3);
    byte_41868DB = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v4);
  if ( !NotPreloadEffectIdHashSet )
    sub_B2C434(0LL, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_2D86280 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x21
  unsigned __int64 v13; // x24
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v15; // x22
  unsigned __int64 v16; // x28
  int32_t v17; // w23
  __int64 v18; // x0

  if ( (byte_41868D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_FunctionMaster___, effectIdList);
    sub_B2C35C(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_41868D6 = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_21:
      sub_B2C434(Instance, v10);
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_FunctionMaster___);
    v11 = *(_QWORD *)&funcIds->max_length;
    if ( (int)v11 >= 1 )
    {
      v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v13 = 0LL;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v11 )
          goto LABEL_22;
        if ( !v12 )
          goto LABEL_21;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v12,
                                      funcIds->m_Items[v13 + 1],
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_21;
          datalist = Instance->fields.datalist;
          v15 = Instance;
          if ( (int)datalist >= 1 )
            break;
        }
LABEL_19:
        LODWORD(v11) = funcIds->max_length;
        if ( (__int64)++v13 >= (int)v11 )
          return;
      }
      v16 = 0LL;
      while ( v16 < (unsigned int)datalist )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_21;
        v17 = *((_DWORD *)&v15->fields.lookup + v16);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v17,
                                      (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_21;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Instance,
            v17,
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        }
        LODWORD(datalist) = v15->fields.datalist;
        if ( (__int64)++v16 >= (int)datalist )
          goto LABEL_19;
      }
LABEL_22:
      v18 = sub_B2C460(Instance);
      sub_B2C400(v18, 0LL);
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
  __int64 v20; // x1
  float v21; // s4
  float v22; // s5
  float v23; // s6
  float v24; // s7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x22
  System_Int32_array **v33; // x1
  __int64 v34; // x8
  unsigned __int64 v35; // x25
  System_String_o *v36; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x24
  UnityEngine_GameObject_o *v39; // x23
  UnityEngine_Transform_o *v40; // x24
  int v41; // s0
  UnityEngine_Transform_o *v44; // x24
  int v45; // s0
  UnityEngine_Transform_o *v48; // x24
  int v49; // s0
  __int64 v52; // x8
  __int64 v53; // x21
  unsigned __int64 v54; // x23
  UnityEngine_Object_o *v55; // x22
  int v56; // w8
  __int64 v57; // x22
  unsigned int v58; // w26
  __int64 v59; // x8
  __int64 v60; // x19
  unsigned __int64 v61; // x22
  UnityEngine_Object_o *v62; // x21
  int v63; // w8
  __int64 v64; // x21
  unsigned int v65; // w25
  __int64 v67; // x0
  __int64 v68; // x0
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v72; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v73; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v74; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41868E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, isShadow);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v15);
    sub_B2C35C(&string___TypeInfo, v16);
    sub_B2C35C(&StringLiteral_18326/*"en_waist"*/, v17);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v18);
    byte_41868E2 = 1;
  }
  white = UnityEngine_Color__get_white(0LL);
  v25 = 0LL;
  methoda.methodPointer = *(Il2CppMethodPointer *)&white.fields.r;
  methoda.invoker_method = *(void **)&white.fields.b;
  if ( isShadow )
  {
    v72.fields.r = 0.05;
    v72.fields.a = 1.0;
    v72.fields.g = 0.05;
    v72.fields.b = 0.05;
    UnityEngine_Color___ctor(v72, v21, v22, v23, v24, &methoda);
    OverwriteShadowServantEffectNodes = sub_B2C374(string___TypeInfo, 1LL);
    if ( !OverwriteShadowServantEffectNodes )
      goto LABEL_76;
    v32 = OverwriteShadowServantEffectNodes;
    OverwriteShadowServantEffectNodes = StringLiteral_18326/*"en_waist"*/;
    if ( StringLiteral_18326/*"en_waist"*/ )
    {
      OverwriteShadowServantEffectNodes = sub_B2C41C(StringLiteral_18326/*"en_waist"*/, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
      if ( !OverwriteShadowServantEffectNodes )
      {
        v68 = sub_B2C454();
        sub_B2C400(v68, 0LL);
      }
      v33 = (System_Int32_array **)StringLiteral_18326/*"en_waist"*/;
    }
    else
    {
      v33 = 0LL;
    }
    if ( !*(_DWORD *)(v32 + 24) )
      goto LABEL_77;
    *(_QWORD *)(v32 + 32) = v33;
    sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 32), v33, v26, v27, v28, v29, v30, v31);
    if ( limitAddEntity )
    {
      OverwriteShadowServantEffectNodes = (__int64)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
                                                     limitAddEntity,
                                                     0LL);
      v32 = OverwriteShadowServantEffectNodes;
      if ( !OverwriteShadowServantEffectNodes )
        goto LABEL_76;
    }
    v34 = *(_QWORD *)(v32 + 24);
    if ( (int)v34 >= 1 )
    {
      v25 = 0LL;
      v35 = 0LL;
      while ( v35 < (unsigned int)v34 )
      {
        if ( !actorObj )
          goto LABEL_76;
        v36 = *(System_String_o **)(v32 + 32 + 8 * v35);
        transform = UnityEngine_GameObject__get_transform(actorObj, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v36, 0, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          OverwriteShadowServantEffectNodes = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)ServantAssetLoadManager__createShadowEffect(
                                                         (ServantAssetLoadManager_o *)OverwriteShadowServantEffectNodes,
                                                         0,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v39 = (UnityEngine_GameObject_o *)OverwriteShadowServantEffectNodes;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)OverwriteShadowServantEffectNodes,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)OverwriteShadowServantEffectNodes,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v40 = UnityEngine_GameObject__get_transform(v39, 0LL);
          *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v40 )
            goto LABEL_76;
          UnityEngine_Transform__set_localPosition(v40, *(UnityEngine_Vector3_o *)&v41, 0LL);
          v44 = UnityEngine_GameObject__get_transform(v39, 0LL);
          *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v44 )
            goto LABEL_76;
          UnityEngine_Transform__set_localEulerAngles(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
          v48 = UnityEngine_GameObject__get_transform(v39, 0LL);
          *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_one(0LL);
          if ( !v48 )
            goto LABEL_76;
          UnityEngine_Transform__set_localScale(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
          if ( !v25 )
          {
            v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v25,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
            if ( !v25 )
              goto LABEL_76;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v39,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        LODWORD(v34) = *(_DWORD *)(v32 + 24);
        if ( (__int64)++v35 >= (int)v34 )
          goto LABEL_32;
      }
LABEL_77:
      v67 = sub_B2C460(OverwriteShadowServantEffectNodes);
      sub_B2C400(v67, 0LL);
    }
    v25 = 0LL;
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
                                                 (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v52 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v53 = OverwriteShadowServantEffectNodes;
    if ( (int)v52 >= 1 )
    {
      v54 = 0LL;
      while ( 1 )
      {
        if ( v54 >= (unsigned int)v52 )
          goto LABEL_77;
        v55 = *(UnityEngine_Object_o **)(v53 + 8 * v54 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v55, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v55 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v55,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v56 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v57 = OverwriteShadowServantEffectNodes;
          if ( v56 >= 1 )
            break;
        }
LABEL_54:
        LODWORD(v52) = *(_DWORD *)(v53 + 24);
        if ( (__int64)++v54 >= (int)v52 )
          goto LABEL_55;
      }
      v58 = 0;
      while ( v58 < v56 )
      {
        OverwriteShadowServantEffectNodes = *(_QWORD *)(v57 + 8LL * (int)v58 + 32);
        if ( !OverwriteShadowServantEffectNodes )
          goto LABEL_76;
        *(_QWORD *)&v73.fields.b = methoda.invoker_method;
        *(_QWORD *)&v73.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)OverwriteShadowServantEffectNodes,
          (System_String_o *)StringLiteral_15954/*"_Color"*/,
          v73,
          0LL);
        v56 = *(_DWORD *)(v57 + 24);
        if ( (int)++v58 >= v56 )
          goto LABEL_54;
      }
      goto LABEL_77;
    }
  }
LABEL_55:
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !OverwriteShadowServantEffectNodes )
LABEL_76:
    sub_B2C434(OverwriteShadowServantEffectNodes, v20);
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)OverwriteShadowServantEffectNodes,
                                                 (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v59 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v60 = OverwriteShadowServantEffectNodes;
    if ( (int)v59 >= 1 )
    {
      v61 = 0LL;
      while ( 1 )
      {
        if ( v61 >= (unsigned int)v59 )
          goto LABEL_77;
        v62 = *(UnityEngine_Object_o **)(v60 + 8 * v61 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v62 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v62,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v63 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v64 = OverwriteShadowServantEffectNodes;
          if ( v63 >= 1 )
            break;
        }
LABEL_71:
        LODWORD(v59) = *(_DWORD *)(v60 + 24);
        if ( (__int64)++v61 >= (int)v59 )
          goto LABEL_72;
      }
      v65 = 0;
      while ( v65 < v63 )
      {
        OverwriteShadowServantEffectNodes = *(_QWORD *)(v64 + 8LL * (int)v65 + 32);
        if ( !OverwriteShadowServantEffectNodes )
          goto LABEL_76;
        *(_QWORD *)&v74.fields.b = methoda.invoker_method;
        *(_QWORD *)&v74.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)OverwriteShadowServantEffectNodes,
          (System_String_o *)StringLiteral_15954/*"_Color"*/,
          v74,
          0LL);
        v63 = *(_DWORD *)(v64 + 24);
        if ( (int)++v65 >= v63 )
          goto LABEL_71;
      }
      goto LABEL_77;
    }
  }
LABEL_72:
  if ( v25 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
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

  if ( (byte_41868DC & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Clear__, v2);
    byte_41868DC = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_B2C434(0LL, v5);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_2D85698 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  __int64 v7; // x1
  int32_t IndexOf_44379492; // w0
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
  if ( (byte_41868D8 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_872/*"/"*/, path);
    baseName = (System_String_o *)sub_B2C35C(&StringLiteral_5814/*"Effect/BattleCommon/{0}"*/, v7);
    byte_41868D8 = 1;
  }
  if ( !v6 )
    sub_B2C434(baseName, path);
  IndexOf_44379492 = System_String__LastIndexOf_44379492(v6, (System_String_o *)StringLiteral_872/*"/"*/, 0LL);
  if ( IndexOf_44379492 == -1 )
  {
    v26 = System_String__Format((System_String_o *)StringLiteral_5814/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v26;
    sub_B2C2F8((BattleServantConfConponent_o *)path, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    v25 = name;
    v18 = v6;
    *name = v6;
  }
  else
  {
    v9 = IndexOf_44379492;
    v10 = (Il2CppObject *)System_String__Substring_44369268(v6, 0, IndexOf_44379492, 0LL);
    v11 = System_String__Format((System_String_o *)StringLiteral_5814/*"Effect/BattleCommon/{0}"*/, v10, 0LL);
    *path = v11;
    sub_B2C2F8((BattleServantConfConponent_o *)path, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
    v18 = System_String__Substring(v6, v9 + 1, 0LL);
    *name = v18;
    v25 = name;
  }
  sub_B2C2F8((BattleServantConfConponent_o *)v25, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
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
  __int64 v12; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x20
  __int64 v15; // x8
  unsigned __int64 v16; // x23
  const MethodInfo *v17; // x3
  System_String_o *v18; // x22
  __int64 v20; // x0
  System_String_o *v21; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_41868D7 & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v8);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_41868D7 = 1;
  }
  v21 = 0LL;
  path = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EffectMaster___);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !effectIdList )
    goto LABEL_20;
  v15 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
      {
        v20 = sub_B2C460(Instance);
        sub_B2C400(v20, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   effectIdList->m_Items[v16 + 1],
                   (const MethodInfo_24E40D0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && *((_DWORD *)Instance + 5) == 5 )
      {
        v18 = (System_String_o *)*((_QWORD *)Instance + 5);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        BattleEffectUtility__GetBattleCommonEffectPathAndName(v18, &path, &v21, v17);
        if ( !v14 )
          break;
        Instance = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v14,
                             (WarBoardManager_TaskList_o *)path,
                             (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v14,
            (EventMissionProgressRequest_Argument_ProgressData_o *)path,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
      }
      LODWORD(v15) = effectIdList->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B2C434(Instance, v12);
  }
LABEL_18:
  if ( !v14 )
    goto LABEL_20;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v14,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_41868D3 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&StringLiteral_5847/*"Effect/SideEffect/"*/, v3);
    byte_41868D3 = 1;
  }
  v6 = effectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_5847/*"Effect/SideEffect/"*/, v4, 0LL);
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
  __int64 v14; // x1
  WarEntity_o *Entity; // x0
  const MethodInfo *v16; // x3
  System_String_o *longName; // x20
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41868DA & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, effectPath);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v11);
    byte_41868DA = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
      BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, effectPath, &name, v16);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0LL) )
    {
LABEL_15:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_19:
    sub_B2C434(EffectMaster, v14);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x2
  BattleEffectUtility_c *v29; // x0
  BattleEffectUtility_c *v30; // x0
  BattleEffectUtility_c *v31; // x0
  float SendReportProbability; // s8
  Il2CppObject *v33; // x0
  System_String_o *v34; // x23
  BattleEffectUtility_c *v35; // x0
  BattleDataDefine_c *v36; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v39; // x23
  AssetLoader_LoadEndDataHandler_o *v40; // x24
  System_String_o *v41; // x19
  AssetLoader_LoadEndDataHandler_o *v42; // x23
  int32_t v43; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *effectPath; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_41868DD & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, finishCallback);
    sub_B2C35C(&BattleDataDefine_TypeInfo, v7);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v14);
    sub_B2C35C(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__, v15);
    sub_B2C35C(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__, v16);
    sub_B2C35C(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_21113/*"non-loaded asset was detected. effectId = {0}"*/, v18);
    byte_41868DD = 1;
  }
  effectPath = 0LL;
  v19 = sub_B2C42C(BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_45;
  *(_QWORD *)(v19 + 16) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v19 + 16),
    (System_Int32_array **)finishCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v28) )
    goto LABEL_43;
  v29 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v29);
  if ( !SentEffectIdHashSet )
    goto LABEL_45;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v30 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v30);
    if ( !SentEffectIdHashSet )
      goto LABEL_45;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v31 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v31 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v31->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v43 = effectId;
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
        v34 = System_String__Format((System_String_o *)StringLiteral_21113/*"non-loaded asset was detected. effectId = {0}"*/, v33, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_45;
        CrashReporter__SendReport_28292332(SentEffectIdHashSet, v34, 0LL, 0LL, 0LL);
        v35 = BattleEffectUtility_TypeInfo;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v35);
        if ( !SentEffectIdHashSet )
          goto LABEL_45;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v36 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v36 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v36->static_fields->ASSET_PARALLEL_LOAD_MAX;
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
      v39 = effectPath;
      v40 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v40,
        (Il2CppObject *)v19,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v39,
               v40,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_43;
      }
    }
LABEL_45:
    sub_B2C434(SentEffectIdHashSet, v21);
  }
  v41 = effectPath;
  v42 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v42,
    (Il2CppObject *)v19,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v41, v42, ASSET_PARALLEL_LOAD_MAX, 0LL) )
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
  __int64 v7; // x1
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  System_String_o *v11; // x21
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41868D2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_EffectMaster___, *(_QWORD *)&effectId);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v8);
    byte_41868D2 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          effectId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)EffectEntity__getNodeName(
                                                                                          (EffectEntity_o *)entity,
                                                                                          0LL),
        !effectObj)
    || (v11 = (System_String_o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                                          effectObj,
                                                                                          0LL),
        !targetObj)
    || (v12 = (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
        transform = UnityEngine_GameObject__get_transform(targetObj, 0LL),
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TransformHelper__getNodeFromLvName(
                                                                                          transform,
                                                                                          v11,
                                                                                          -1,
                                                                                          0,
                                                                                          0LL),
        !v12) )
  {
LABEL_14:
    sub_B2C434(Master_WarQuestSelectionMaster, v10);
  }
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v12, zero, 0LL);
  up = UnityEngine_Vector3__get_up(0LL);
  UnityEngine_Transform__set_eulerAngles(v12, up, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v12, one, 0LL);
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
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_String_o *longName; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_41868D9 & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v10);
    byte_41868D9 = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
                                     (const MethodInfo_24E412C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_17:
    sub_B2C434(EffectMaster, v13);
  if ( *(&entity->fields.id + 1) == 5 )
  {
    longName = entity->fields.longName;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, effectPath, &name, v14);
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
  __int64 v28; // x1
  EffectEntity_o *v29; // x19
  const MethodInfo *v30; // x3
  DataManager_o *v31; // x21
  System_String_o *v32; // x0
  UnityEngine_Object_o *v33; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v34; // x22
  System_String_o *v35; // x22
  System_String_o *v36; // x22
  System_String_o *v37; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *Manager__loadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  System_String_o *v41; // x25
  int32_t v42; // w23
  BattleEffectUtility_c *v43; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v45; // x24
  __int64 v46; // x8
  int32_t v47; // w23
  int32_t v48; // w22
  int32_t LimitCount; // w0
  System_String_o *v50; // x24
  int32_t v51; // w25
  BattleEffectUtility_c *v52; // x0
  System_String_o *v53; // x0
  System_String_o *v54; // x22
  System_String_o *se; // x20
  BattleEffectUtility_c *v56; // x0
  BattleEffectUtility_c *v57; // x0
  float SendReportProbability; // s8
  UnityEngine_Object_o *v59; // x20
  Il2CppObject *v60; // x0
  System_String_o *v61; // x20
  BattleEffectUtility_c *v62; // x0
  DataManager_o *v63; // x19
  float v64; // s0
  float v65; // s1
  float v66; // s2
  float v67; // s3
  int datalist; // w8
  float v69; // s8
  float v70; // s9
  float v71; // s10
  float v72; // s11
  unsigned int v73; // w21
  __int64 v75; // x0
  int32_t id; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Color_o v79; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_41868DF & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, procObject);
    sub_B2C35C(&AssetManager_TypeInfo, v7);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_EffectMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v12);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v15);
    sub_B2C35C(&int_TypeInfo, v16);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v21);
    sub_B2C35C(&SoundManager_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_18222/*"effect load failed. effectId = {0}"*/, v23);
    sub_B2C35C(&StringLiteral_18223/*"effect/"*/, v24);
    sub_B2C35C(&StringLiteral_2759/*"Battle/Effect/"*/, v25);
    sub_B2C35C(&StringLiteral_2752/*"Battle"*/, v26);
    byte_41868DF = 1;
  }
  name = 0LL;
  path = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_98;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                effectId,
                                (const MethodInfo_24E40D0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( !procObject )
    goto LABEL_98;
  v29 = (EffectEntity_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                procObject,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !v29 )
    goto LABEL_98;
  v31 = Instance;
  switch ( v29->fields.folderType )
  {
    case 1:
      v32 = System_String__Concat_44305532((System_String_o *)StringLiteral_18223/*"effect/"*/, v29->fields.name, 0LL);
      v33 = UnityEngine_Resources__Load(v32, 0LL);
      if ( !v33 )
        goto LABEL_12;
      if ( (UnityEngine_GameObject_c *)v33->klass == UnityEngine_GameObject_TypeInfo )
        v34 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v33;
      else
        v34 = 0LL;
      goto LABEL_53;
    case 2:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0LL, 0LL);
      v34 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_53;
      if ( !v31 )
        goto LABEL_98;
      v46 = *(_QWORD *)&v31[3].fields.m_CachedPtr;
      if ( !v46 )
        goto LABEL_98;
      v47 = *(_DWORD *)(v46 + 672);
      v48 = *(_DWORD *)(v46 + 720);
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v31, 0LL);
      v50 = v29->fields.name;
      v51 = LimitCount;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                                                     v47,
                                                                                     v51,
                                                                                     v50,
                                                                                     v48,
                                                                                     0LL);
      goto LABEL_52;
    case 3:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v31, 0LL, 0LL);
      v34 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_53;
      if ( !v31 )
        goto LABEL_98;
      WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v31, 0LL);
      WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v31, 1, 0LL);
      Instance = (DataManager_o *)BattleActorControl__getEffectFolder((BattleActorControl_o *)v31, 0LL);
      v41 = v29->fields.name;
      v42 = (int)Instance;
      v43 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v43 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v43->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_98;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_99;
      v45 = System_String__Concat_44305532(v41, scalelist->m_Items[WeaponScale], 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                                                     v45,
                                                                                     WeaponGroup,
                                                                                     v42,
                                                                                     0LL);
LABEL_52:
      v34 = Manager__loadNoblePhantasmEffect;
LABEL_53:
      if ( EffectEntity__isSe(v29, 0LL) && isPlaySe )
      {
        se = v29->fields.se;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe_24786276((System_String_o *)StringLiteral_2752/*"Battle"*/, se, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v34,
                                      (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v59 = (UnityEngine_Object_o *)Instance;
        if ( v29->fields.folderType != 3 )
          goto LABEL_95;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_95;
        if ( !v59 )
          goto LABEL_98;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                      (UnityEngine_GameObject_o *)v59,
                                      (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v31 )
          goto LABEL_98;
        v63 = Instance;
        *(UnityEngine_Color_o *)&v64 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v31, 0LL);
        if ( !v63 )
          goto LABEL_98;
        datalist = (int)v63->fields.datalist;
        if ( datalist >= 1 )
        {
          v69 = v64;
          v70 = v65;
          v71 = v66;
          v72 = v67;
          v73 = 0;
          while ( 1 )
          {
            if ( v73 >= datalist )
            {
LABEL_99:
              v75 = sub_B2C460(Instance);
              sub_B2C400(v75, 0LL);
            }
            Instance = (DataManager_o *)*((_QWORD *)&v63->fields.lookup + (int)v73);
            if ( !Instance )
              break;
            v79.fields.r = v69;
            v79.fields.g = v70;
            v79.fields.b = v71;
            v79.fields.a = v72;
            UIWidget__set_color((UIWidget_o *)Instance, v79, 0LL);
            datalist = (int)v63->fields.datalist;
            if ( (int)++v73 >= datalist )
              goto LABEL_95;
          }
        }
        else
        {
LABEL_95:
          if ( v59 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v59, 0, 0LL);
            return (UnityEngine_GameObject_o *)v59;
          }
        }
LABEL_98:
        sub_B2C434(Instance, v28);
      }
      v56 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v56);
      if ( !Instance )
        goto LABEL_98;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             v29->fields.id,
             (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v57 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v57 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v57->static_fields->SendReportProbability;
      v59 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = v29->fields.id;
        v60 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
        v61 = System_String__Format((System_String_o *)StringLiteral_18222/*"effect load failed. effectId = {0}"*/, v60, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_28292332((CrashReporter_o *)Instance, v61, 0LL, 0LL, 0LL);
          v62 = BattleEffectUtility_TypeInfo;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v62);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              v29->fields.id,
              (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_98;
      }
      return (UnityEngine_GameObject_o *)v59;
    case 4:
      v52 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v52 = BattleEffectUtility_TypeInfo;
      }
      v53 = System_Int32__ToString((unsigned int)v52->static_fields + 24, 0LL);
      v54 = System_String__Concat_44305532((System_String_o *)StringLiteral_2759/*"Battle/Effect/"*/, v53, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v54, 0LL);
      if ( !Instance )
        goto LABEL_98;
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                     (AssetData_o *)Instance,
                                                                                     v29->fields.name,
                                                                                     (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      goto LABEL_52;
    case 5:
      v35 = v29->fields.name;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v35, &path, &name, v30);
      v37 = name;
      v36 = path;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                     v36,
                                                                                     v37,
                                                                                     0LL);
      goto LABEL_52;
    default:
LABEL_12:
      v34 = 0LL;
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
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v14; // x0
  __int64 v15; // x1

  if ( (byte_41868DE & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, procObject);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___, v9);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_5809/*"Effect Default"*/, v12);
    byte_41868DE = 1;
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
    EffectObject = (UnityEngine_GameObject_o *)sub_B2C42C(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5809/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v14 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  EffectObject,
                  (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_B2C434(v14, v15);
    }
    *(float *)&v14->fields.callbackQueue = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_23040520(
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
  __int64 v12; // x1
  bool v13; // w8
  UnityEngine_GameObject_o *result; // x0
  System_String_o *v15; // x0

  if ( (byte_41868E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, name);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_2756/*"Battle/CommonEffects/"*/, v9);
    sub_B2C35C(&StringLiteral_18223/*"effect/"*/, v10);
    byte_41868E1 = 1;
  }
  if ( folder == 2 )
  {
    v11 = &StringLiteral_18223/*"effect/"*/;
LABEL_15:
    v15 = System_String__Concat_44305532((System_String_o *)*v11, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v15, 0LL);
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
    v11 = &StringLiteral_2756/*"Battle/CommonEffects/"*/;
    goto LABEL_15;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v13 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 actorObject,
                                                 (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_B2C434(result, v12);
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
  __int64 v6; // x1
  DataManager_o *v7; // x19
  bool isSe; // w8
  System_String_o *result; // x0

  if ( (byte_41868E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_41868E0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      effectId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  v7 = Instance;
  isSe = EffectEntity__isSe((EffectEntity_o *)Instance, 0LL);
  result = 0LL;
  if ( isSe )
    return (System_String_o *)v7->fields.lookup;
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x19
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  System_String_o *NodeName; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_41868E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B2C35C(&StringLiteral_18320/*"en_body"*/, v5);
    byte_41868E3 = 1;
  }
  entity = 0LL;
  v6 = (System_String_o *)StringLiteral_18320/*"en_body"*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          id,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v6;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B2C434(Instance, v8);
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

  if ( (byte_41868CE & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_2759/*"Battle/Effect/"*/, v2);
    byte_41868CE = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v3 = BattleEffectUtility_TypeInfo;
  }
  v4 = System_Int32__ToString((unsigned int)v3->static_fields + 24, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_2759/*"Battle/Effect/"*/, v4, 0LL);
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

  if ( (byte_41868CF & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v1);
    sub_B2C35C(&Method_DataManager_GetMaster_EffectMaster___, v2);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_41868CF = 1;
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EffectMaster___);
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
    sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->effectMst, effectMst, v7, v8, v9, v10, v11, v12);
  }
  return (EffectMaster_o *)effectMst;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_NotPreloadEffectIdHashSet(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleEffectUtility_c *v12; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_41868CC & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v2);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_41868CC = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v4 = BattleEffectUtility_TypeInfo;
  }
  notPreloadEffectIdHashSet = v4->static_fields->notPreloadEffectIdHashSet;
  if ( !notPreloadEffectIdHashSet )
  {
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
    v12 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v12 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&static_fields->notPreloadEffectIdHashSet,
      (System_Int32_array **)notPreloadEffectIdHashSet,
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
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  BattleEffectUtility_c *v12; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_41868CB & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v2);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_41868CB = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v4 = BattleEffectUtility_TypeInfo;
  }
  sentEffectIdHashSet = v4->static_fields->sentEffectIdHashSet;
  if ( !sentEffectIdHashSet )
  {
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
    v12 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v12 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&static_fields->sentEffectIdHashSet,
      (System_Int32_array **)sentEffectIdHashSet,
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
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19

  if ( (byte_41868D5 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v1);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v2);
    sub_B2C35C(&Method_UnityEngine_Resources_Load_GameObject___, v3);
    sub_B2C35C(&StringLiteral_18258/*"effect/ef_sideeffect01"*/, v4);
    byte_41868D5 = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_18258/*"effect/ef_sideeffect01"*/,
                                                        (const MethodInfo_20990C8 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       UIAtlas,
                                       (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  __int64 v29; // x1
  System_String_o *NodeName; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  BattleEffectUtility_c *v38; // x8
  System_Int32_array **v39; // x26
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *klass; // x25
  float v43; // s0
  float v44; // s1
  float v45; // s2
  float v46; // s11
  float v47; // s12
  float v48; // s13
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v50; // x1
  __int64 v51; // x3
  System_Collections_Generic_IEnumerator_T__o *v52; // x25
  System_Collections_Generic_IEnumerator_T__c *v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x10
  AuraEffectPosOverwriteEntity_o *v59; // x26
  System_Collections_Generic_IEnumerator_T__c *v60; // x8
  unsigned __int64 v61; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v64; // x3
  System_Collections_Generic_IEnumerator_T__c *v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  UnityEngine_Transform_o *v69; // x23
  UnityEngine_Transform_o *transform; // x0
  char v72; // [xsp+14h] [xbp-8Ch]
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_41868D0 & 1) == 0 )
  {
    sub_B2C35C(&AuraEffectPosOverwriteEntity_TypeInfo, *(_QWORD *)&effectId);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v17);
    sub_B2C35C(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___, v19);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v20);
    sub_B2C35C(&System_IDisposable_TypeInfo, v21);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v22);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_41868D0 = 1;
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
                                                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !EffectMaster )
            goto LABEL_64;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)EffectMaster,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v38 = BattleEffectUtility_TypeInfo;
          v39 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
            v38 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v38->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v39;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&static_fields->auraPosOverwriteMst,
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
          *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_up(0LL);
          if ( klass )
          {
            v46 = v43;
            v47 = v44;
            v48 = v45;
            Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                           klass,
                           (const MethodInfo_2A0E96C *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
            v72 = 0;
            v52 = Enumerator;
            while ( 1 )
            {
              if ( !v52 )
                sub_B2C434(Enumerator, v50);
              v60 = v52->klass;
              if ( *(_WORD *)&v52->klass->_2.bitflags1 )
              {
                v61 = 0LL;
                p_offset = &v60->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v61;
                  p_offset += 4;
                  if ( v61 >= *(unsigned __int16 *)&v52->klass->_2.bitflags1 )
                    goto LABEL_49;
                }
                p_method = (__int64)&v60->vtable[*p_offset].method;
              }
              else
              {
LABEL_49:
                p_method = sub_AC5258(v52, System_Collections_IEnumerator_TypeInfo, 0LL, v51);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      v52,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v53 = v52->klass;
              if ( *(_WORD *)&v52->klass->_2.bitflags1 )
              {
                v54 = 0LL;
                v55 = &v53->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v55 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                {
                  ++v54;
                  v55 += 4;
                  if ( v54 >= *(unsigned __int16 *)&v52->klass->_2.bitflags1 )
                    goto LABEL_33;
                }
                v56 = (__int64)&v53->vtable[*v55].method;
              }
              else
              {
LABEL_33:
                v56 = sub_AC5258(v52, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v64);
              }
              v57 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v56)(
                      v52,
                      *(_QWORD *)(v56 + 8));
              if ( v57
                && (v58 = *(&AuraEffectPosOverwriteEntity_TypeInfo->_2.bitflags2 + 1),
                    *(unsigned __int8 *)(*(_QWORD *)v57 + 300LL) >= (unsigned int)v58) )
              {
                if ( *(AuraEffectPosOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v57 + 200LL) + 8 * v58 - 8) == AuraEffectPosOverwriteEntity_TypeInfo )
                  v59 = (AuraEffectPosOverwriteEntity_o *)v57;
                else
                  v59 = 0LL;
              }
              else
              {
                v59 = 0LL;
              }
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
                                                                            svtId,
                                                                            limitCount,
                                                                            effectId,
                                                                            v59,
                                                                            0LL);
              if ( ((unsigned __int8)Enumerator & 1) != 0 )
              {
                if ( !v59 )
                  sub_B2C434(Enumerator, v50);
                NodeName = v59->fields.nodeName;
                v73 = AuraEffectPosOverwriteEntity__GetOffset(v59, 0LL);
                x = v73.fields.x;
                y = v73.fields.y;
                z = v73.fields.z;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v59, 0LL);
                v46 = Rotation.fields.x;
                v47 = Rotation.fields.y;
                v48 = Rotation.fields.z;
                v72 = 1;
              }
            }
            v65 = v52->klass;
            if ( *(_WORD *)&v52->klass->_2.bitflags1 )
            {
              v66 = 0LL;
              v67 = &v65->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
              {
                ++v66;
                v67 += 4;
                if ( v66 >= *(unsigned __int16 *)&v52->klass->_2.bitflags1 )
                  goto LABEL_56;
              }
              v68 = (__int64)&v65->vtable[*v67].method;
            }
            else
            {
LABEL_56:
              v68 = sub_AC5258(v52, System_IDisposable_TypeInfo, 0LL, v64);
            }
            EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v68)(
                                                                            v52,
                                                                            *(_QWORD *)(v68 + 8));
            if ( EffectObject )
            {
              EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                              EffectObject,
                                                                              0LL);
              if ( targetObject )
              {
                v69 = (UnityEngine_Transform_o *)EffectMaster;
                transform = UnityEngine_GameObject__get_transform(targetObject, 0LL);
                EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TransformHelper__getNodeFromLvName(
                                                                                transform,
                                                                                NodeName,
                                                                                limitCount,
                                                                                v72 & 1,
                                                                                0LL);
                if ( v69 )
                {
                  UnityEngine_Transform__set_parent(v69, (UnityEngine_Transform_o *)EffectMaster, 0LL);
                  zero = UnityEngine_Vector3__get_zero(0LL);
                  zero.fields.x = x + zero.fields.x;
                  zero.fields.y = y + zero.fields.y;
                  zero.fields.z = z + zero.fields.z;
                  UnityEngine_Transform__set_localPosition(v69, zero, 0LL);
                  v76.fields.x = v46;
                  v76.fields.y = v47;
                  v76.fields.z = v48;
                  UnityEngine_Transform__set_eulerAngles(v69, v76, 0LL);
                  one = UnityEngine_Vector3__get_one(0LL);
                  UnityEngine_Transform__set_localScale(v69, one, 0LL);
                  return EffectObject;
                }
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B2C434(EffectMaster, v29);
  }
  return EffectObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_23035704(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_41868D1 & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    byte_41868D1 = 1;
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

  if ( (byte_41868CD & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, method);
    byte_41868CD = 1;
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
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  System_String_o *SideEffectPath; // x19
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  AssetLoader_LoadEndDataHandler_o *v32; // x21

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_41868D4 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&effectId);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v9);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_B2C35C(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__, v11);
    sub_B2C35C(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_18182/*"ef_enchant"*/, v13);
    byte_41868D4 = 1;
  }
  v14 = sub_B2C42C(BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass23_0___ctor((BattleEffectUtility___c__DisplayClass23_0_o *)v14, 0LL);
  if ( !v14 )
    sub_B2C434(v15, v16);
  *(_QWORD *)(v14 + 24) = parent;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)parent, v17, v18, v19, v20, v21, v22);
  *(float *)(v14 + 32) = x;
  *(float *)(v14 + 36) = y;
  *(float *)(v14 + 40) = z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v23);
  v25 = (System_Int32_array **)StringLiteral_18182/*"ef_enchant"*/;
  *(_QWORD *)(v14 + 16) = StringLiteral_18182/*"ef_enchant"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), v25, v26, v27, v28, v29, v30, v31);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v14,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(SideEffectPath, v32, 1, 0LL);
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

  if ( (byte_4186A6F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, bActor);
    byte_4186A6F = 1;
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
      sub_B2C434(v5, v6);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_B2C2F8(
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
    sub_B2C434(IsNullOrEmpty, v8);
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
  if ( (byte_4186A6E & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (BattleEffectUtility___c__DisplayClass23_0_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4186A6E = 1;
  }
  if ( !data )
    goto LABEL_10;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               v4->fields.name,
                                                                               (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          Object_WarBoardWaitTimeSetting,
                                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_10:
    sub_B2C434(this, data);
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