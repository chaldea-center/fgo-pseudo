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
  __int64 v16; // x2
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x19
  void *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct BattleEffectUtility_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_40F8D12 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v1);
    sub_B16FFC(&string___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15988, v9);
    sub_B16FFC(&StringLiteral_15948, v10);
    sub_B16FFC(&StringLiteral_15943, v11);
    sub_B16FFC(&StringLiteral_1, v12);
    byte_40F8D12 = 1;
  }
  BattleEffectUtility_TypeInfo->static_fields->SendReportProbability = 1.0;
  v13 = BattleEffectUtility_TypeInfo;
  BattleEffectUtility_TypeInfo->static_fields->battleEffectId = 0;
  static_fields = v13->static_fields;
  static_fields->wkVec.fields.z = 0.0;
  *(_QWORD *)&static_fields->wkVec.fields.x = 0LL;
  v15 = v13->static_fields;
  v15->auraPosOverwriteMst = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v15->auraPosOverwriteMst, 0LL, v2, v3, v4, v5, v6, v7);
  v17 = sub_B17014(string___TypeInfo, 4LL, v16);
  if ( !v17 )
    sub_B170D4();
  v24 = (System_Int32_array **)v17;
  v25 = StringLiteral_1;
  if ( StringLiteral_1 )
  {
    v25 = (void *)sub_B170BC(StringLiteral_1, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( !v25 )
      goto LABEL_26;
    v26 = (System_Int32_array **)StringLiteral_1;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !*((_DWORD *)v24 + 6) )
    goto LABEL_25;
  v24[4] = (System_Int32_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 4), v26, v18, v19, v20, v21, v22, v23);
  v25 = (void *)StringLiteral_15988;
  if ( StringLiteral_15988 )
  {
    v25 = (void *)sub_B170BC(StringLiteral_15988, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( !v25 )
      goto LABEL_26;
    v26 = (System_Int32_array **)StringLiteral_15988;
  }
  else
  {
    v26 = 0LL;
  }
  if ( *((_DWORD *)v24 + 6) <= 1u )
    goto LABEL_25;
  v24[5] = (System_Int32_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 5), v26, v18, v27, v28, v29, v30, v31);
  v25 = (void *)StringLiteral_15948;
  if ( StringLiteral_15948 )
  {
    v25 = (void *)sub_B170BC(StringLiteral_15948, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( !v25 )
      goto LABEL_26;
    v26 = (System_Int32_array **)StringLiteral_15948;
  }
  else
  {
    v26 = 0LL;
  }
  if ( *((_DWORD *)v24 + 6) <= 2u )
    goto LABEL_25;
  v24[6] = (System_Int32_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 6), v26, v18, v32, v33, v34, v35, v36);
  v25 = (void *)StringLiteral_15943;
  if ( StringLiteral_15943 )
  {
    v25 = (void *)sub_B170BC(StringLiteral_15943, *(_QWORD *)&(*v24)->m_Items[9]);
    if ( v25 )
    {
      v26 = (System_Int32_array **)StringLiteral_15943;
      goto LABEL_23;
    }
LABEL_26:
    sub_B170F4();
    sub_B170A0();
  }
  v26 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v24 + 6) <= 3u )
  {
LABEL_25:
    sub_B17100(v25, v26, v18);
    sub_B170A0();
  }
  v24[7] = (System_Int32_array *)v26;
  sub_B16F98((BattleServantConfConponent_o *)(v24 + 7), v26, v18, v37, v38, v39, v40, v41);
  v42 = BattleEffectUtility_TypeInfo->static_fields;
  v42->scalelist = (struct System_String_array *)v24;
  sub_B16F98((BattleServantConfConponent_o *)&v42->scalelist, v24, v43, v44, v45, v46, v47, v48);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleEffectUtility_c *inited; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0

  if ( (byte_40F8D09 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v3);
    byte_40F8D09 = 1;
  }
  inited = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    inited = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)inited);
  if ( !NotPreloadEffectIdHashSet )
    sub_B170D4();
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_21D9180 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v14; // x21
  unsigned __int64 v15; // x24
  struct System_String_o *MasterName_k__BackingField; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x22
  unsigned __int64 v18; // x28
  int32_t v19; // w23

  if ( (byte_40F8D04 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_FunctionMaster___, effectIdList);
    sub_B16FFC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F8D04 = 1;
  }
  if ( funcIds )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_21:
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_FunctionMaster___);
    v13 = *(_QWORD *)&funcIds->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = MasterData_WarQuestSelectionMaster;
      v15 = 0LL;
      while ( 1 )
      {
        if ( v15 >= (unsigned int)v13 )
          goto LABEL_22;
        if ( !v14 )
          goto LABEL_21;
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                                              v14,
                                                                                              funcIds->m_Items[v15 + 1],
                                                                                              (const MethodInfo_266F388 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( MasterData_WarQuestSelectionMaster )
        {
          MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)FunctionEntity__getEffectList(
                                                                                                (FunctionEntity_o *)MasterData_WarQuestSelectionMaster,
                                                                                                0LL);
          if ( !MasterData_WarQuestSelectionMaster )
            goto LABEL_21;
          MasterName_k__BackingField = MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField;
          v17 = MasterData_WarQuestSelectionMaster;
          if ( (int)MasterName_k__BackingField >= 1 )
            break;
        }
LABEL_19:
        LODWORD(v13) = funcIds->max_length;
        if ( (__int64)++v15 >= (int)v13 )
          return;
      }
      v18 = 0LL;
      while ( v18 < (unsigned int)MasterName_k__BackingField )
      {
        if ( !*effectIdList )
          goto LABEL_21;
        v19 = *((_DWORD *)&v17->fields.list + v18);
        MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)System_Collections_Generic_List_int___Contains(
                                                                                              *effectIdList,
                                                                                              v19,
                                                                                              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
        {
          if ( !*effectIdList )
            goto LABEL_21;
          System_Collections_Generic_List_int___Add(
            *effectIdList,
            v19,
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        }
        LODWORD(MasterName_k__BackingField) = v17->fields._MasterName_k__BackingField;
        if ( (__int64)++v18 >= (int)MasterName_k__BackingField )
          goto LABEL_19;
      }
LABEL_22:
      sub_B17100(MasterData_WarQuestSelectionMaster, v11, v12);
      sub_B170A0();
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
  float v19; // s4
  float v20; // s5
  float v21; // s6
  float v22; // s7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x20
  __int64 v24; // x2
  __int64 v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x22
  __int64 OverwriteShadowServantEffectNodes; // x0
  System_Int32_array **v34; // x1
  __int64 v35; // x8
  unsigned __int64 v36; // x25
  System_String_o *v37; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x24
  ServantAssetLoadManager_o *Instance; // x0
  UnityEngine_GameObject_o *ShadowEffect; // x0
  UnityEngine_GameObject_o *v42; // x23
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Transform_o *v44; // x24
  int v45; // s0
  UnityEngine_Transform_o *v48; // x24
  int v49; // s0
  UnityEngine_Transform_o *v52; // x24
  int v53; // s0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  UnityEngine_Component_o *v60; // x0
  __int64 v61; // x8
  __int64 v62; // x21
  unsigned __int64 v63; // x23
  UnityEngine_Object_o *v64; // x22
  int v65; // w8
  __int64 v66; // x22
  unsigned int v67; // w26
  UnityEngine_Material_o *v68; // x0
  UnityEngine_Component_o *v69; // x0
  __int64 v70; // x8
  __int64 v71; // x19
  unsigned __int64 v72; // x22
  UnityEngine_Object_o *v73; // x21
  int v74; // w8
  __int64 v75; // x21
  unsigned int v76; // w25
  UnityEngine_Material_o *v77; // x0
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8D10 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, isShadow);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v15);
    sub_B16FFC(&string___TypeInfo, v16);
    sub_B16FFC(&StringLiteral_18257, v17);
    sub_B16FFC(&StringLiteral_15891, v18);
    byte_40F8D10 = 1;
  }
  white = UnityEngine_Color__get_white(0LL);
  v23 = 0LL;
  methoda.methodPointer = *(Il2CppMethodPointer *)&white.fields.r;
  methoda.invoker_method = *(void **)&white.fields.b;
  if ( isShadow )
  {
    v82.fields.r = 0.05;
    v82.fields.a = 1.0;
    v82.fields.g = 0.05;
    v82.fields.b = 0.05;
    UnityEngine_Color___ctor(v82, v19, v20, v21, v22, &methoda);
    v25 = sub_B17014(string___TypeInfo, 1LL, v24);
    if ( !v25 )
      goto LABEL_76;
    v32 = v25;
    OverwriteShadowServantEffectNodes = StringLiteral_18257;
    if ( StringLiteral_18257 )
    {
      OverwriteShadowServantEffectNodes = sub_B170BC(StringLiteral_18257, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
      if ( !OverwriteShadowServantEffectNodes )
      {
        sub_B170F4();
        sub_B170A0();
      }
      v34 = (System_Int32_array **)StringLiteral_18257;
    }
    else
    {
      v34 = 0LL;
    }
    if ( !*(_DWORD *)(v32 + 24) )
      goto LABEL_77;
    *(_QWORD *)(v32 + 32) = v34;
    sub_B16F98((BattleServantConfConponent_o *)(v32 + 32), v34, v26, v27, v28, v29, v30, v31);
    if ( limitAddEntity )
    {
      OverwriteShadowServantEffectNodes = (__int64)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
                                                     limitAddEntity,
                                                     0LL);
      v32 = OverwriteShadowServantEffectNodes;
      if ( !OverwriteShadowServantEffectNodes )
        goto LABEL_76;
    }
    v35 = *(_QWORD *)(v32 + 24);
    if ( (int)v35 >= 1 )
    {
      v23 = 0LL;
      v36 = 0LL;
      while ( v36 < (unsigned int)v35 )
      {
        if ( !actorObj )
          goto LABEL_76;
        v37 = *(System_String_o **)(v32 + 32 + 8 * v36);
        transform = UnityEngine_GameObject__get_transform(actorObj, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v37, 0, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !Instance )
            goto LABEL_76;
          ShadowEffect = ServantAssetLoadManager__createShadowEffect(Instance, 0, 0LL);
          if ( !ShadowEffect )
            goto LABEL_76;
          v42 = ShadowEffect;
          v43 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
          if ( !v43 )
            goto LABEL_76;
          UnityEngine_Transform__set_parent(v43, (UnityEngine_Transform_o *)NodeFromName, 0LL);
          v44 = UnityEngine_GameObject__get_transform(v42, 0LL);
          *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v44 )
            goto LABEL_76;
          UnityEngine_Transform__set_localPosition(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
          v48 = UnityEngine_GameObject__get_transform(v42, 0LL);
          *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v48 )
            goto LABEL_76;
          UnityEngine_Transform__set_localEulerAngles(v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
          v52 = UnityEngine_GameObject__get_transform(v42, 0LL);
          *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_one(0LL);
          if ( !v52 )
            goto LABEL_76;
          UnityEngine_Transform__set_localScale(v52, *(UnityEngine_Vector3_o *)&v53, 0LL);
          if ( !v23 )
          {
            v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_GameObject__TypeInfo, v56, v57, v58, v59);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v23,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            if ( !v23 )
              goto LABEL_76;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v23,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v42,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        LODWORD(v35) = *(_DWORD *)(v32 + 24);
        if ( (__int64)++v36 >= (int)v35 )
          goto LABEL_32;
      }
LABEL_77:
      sub_B17100(OverwriteShadowServantEffectNodes, v34, v26);
      sub_B170A0();
    }
    v23 = 0LL;
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
  v60 = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !v60 )
    goto LABEL_76;
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 v60,
                                                 (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v61 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v62 = OverwriteShadowServantEffectNodes;
    if ( (int)v61 >= 1 )
    {
      v63 = 0LL;
      while ( 1 )
      {
        if ( v63 >= (unsigned int)v61 )
          goto LABEL_77;
        v64 = *(UnityEngine_Object_o **)(v62 + 8 * v63 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v64 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v64,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v65 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v66 = OverwriteShadowServantEffectNodes;
          if ( v65 >= 1 )
            break;
        }
LABEL_54:
        LODWORD(v61) = *(_DWORD *)(v62 + 24);
        if ( (__int64)++v63 >= (int)v61 )
          goto LABEL_55;
      }
      v67 = 0;
      while ( v67 < v65 )
      {
        v68 = *(UnityEngine_Material_o **)(v66 + 8LL * (int)v67 + 32);
        if ( !v68 )
          goto LABEL_76;
        *(_QWORD *)&v83.fields.b = methoda.invoker_method;
        *(_QWORD *)&v83.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(v68, (System_String_o *)StringLiteral_15891, v83, 0LL);
        v65 = *(_DWORD *)(v66 + 24);
        if ( (int)++v67 >= v65 )
          goto LABEL_54;
      }
      goto LABEL_77;
    }
  }
LABEL_55:
  v69 = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !v69 )
LABEL_76:
    sub_B170D4();
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 v69,
                                                 (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v70 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v71 = OverwriteShadowServantEffectNodes;
    if ( (int)v70 >= 1 )
    {
      v72 = 0LL;
      while ( 1 )
      {
        if ( v72 >= (unsigned int)v70 )
          goto LABEL_77;
        v73 = *(UnityEngine_Object_o **)(v71 + 8 * v72 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v73, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v73 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v73,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v74 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v75 = OverwriteShadowServantEffectNodes;
          if ( v74 >= 1 )
            break;
        }
LABEL_71:
        LODWORD(v70) = *(_DWORD *)(v71 + 24);
        if ( (__int64)++v72 >= (int)v70 )
          goto LABEL_72;
      }
      v76 = 0;
      while ( v76 < v74 )
      {
        v77 = *(UnityEngine_Material_o **)(v75 + 8LL * (int)v76 + 32);
        if ( !v77 )
          goto LABEL_76;
        *(_QWORD *)&v84.fields.b = methoda.invoker_method;
        *(_QWORD *)&v84.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(v77, (System_String_o *)StringLiteral_15891, v84, 0LL);
        v74 = *(_DWORD *)(v75 + 24);
        if ( (int)++v76 >= v74 )
          goto LABEL_71;
      }
      goto LABEL_77;
    }
  }
LABEL_72:
  if ( v23 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0LL;
}


void __fastcall BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  BattleEffectUtility_c *inited; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0

  if ( (byte_40F8D0A & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Clear__, v2);
    byte_40F8D0A = 1;
  }
  inited = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    inited = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)inited);
  if ( !NotPreloadEffectIdHashSet )
    sub_B170D4();
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_21D8598 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  __int64 v7; // x1
  int32_t IndexOf_43817692; // w0
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

  if ( (byte_40F8D06 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_871, path);
    sub_B16FFC(&StringLiteral_5797, v7);
    byte_40F8D06 = 1;
  }
  if ( !baseName )
    sub_B170D4();
  IndexOf_43817692 = System_String__LastIndexOf_43817692(baseName, (System_String_o *)StringLiteral_871, 0LL);
  if ( IndexOf_43817692 == -1 )
  {
    v26 = System_String__Format((System_String_o *)StringLiteral_5797, (Il2CppObject *)baseName, 0LL);
    *path = v26;
    sub_B16F98((BattleServantConfConponent_o *)path, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
    v25 = name;
    v18 = baseName;
    *name = baseName;
  }
  else
  {
    v9 = IndexOf_43817692;
    v10 = (Il2CppObject *)System_String__Substring_43807468(baseName, 0, IndexOf_43817692, 0LL);
    v11 = System_String__Format((System_String_o *)StringLiteral_5797, v10, 0LL);
    *path = v11;
    sub_B16F98((BattleServantConfConponent_o *)path, (System_Int32_array **)v11, v12, v13, v14, v15, v16, v17);
    v18 = System_String__Substring(baseName, v9 + 1, 0LL);
    *name = v18;
    v25 = name;
  }
  sub_B16F98((BattleServantConfConponent_o *)v25, (System_Int32_array **)v18, v19, v20, v21, v22, v23, v24);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  WarEntity_o *Entity; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x8
  unsigned __int64 v22; // x23
  const MethodInfo *v23; // x3
  System_String_o *longName; // x22
  System_String_o *v26; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40F8D05 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_40F8D05 = 1;
  }
  v26 = 0LL;
  path = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EffectMaster___);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v13,
                                                                                                  v14,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_20;
  v21 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v21 )
      {
        sub_B17100(Entity, v19, v20);
        sub_B170A0();
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 MasterData_WarQuestSelectionMaster,
                 effectIdList->m_Items[v22 + 1],
                 (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Entity && *(&Entity->fields.id + 1) == 5 )
      {
        longName = Entity->fields.longName;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, &path, &v26, v23);
        if ( !v17 )
          break;
        Entity = (WarEntity_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v17,
                                  (WarBoardManager_TaskList_o *)path,
                                  (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Entity & 1) == 0 )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v17,
            (EventMissionProgressRequest_Argument_ProgressData_o *)path,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
      }
      LODWORD(v21) = effectIdList->max_length;
      if ( (__int64)++v22 >= (int)v21 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B170D4();
  }
LABEL_18:
  if ( !v17 )
    goto LABEL_20;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v17,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *v4; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F8D01 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    sub_B16FFC(&StringLiteral_5830, v3);
    byte_40F8D01 = 1;
  }
  v6 = effectId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v6);
  return System_String__Concat((Il2CppObject *)StringLiteral_5830, v4, 0LL);
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
  BattleEffectUtility_c *inited; // x0
  EffectMaster_o *EffectMaster; // x0
  WarEntity_o *Entity; // x0
  const MethodInfo *v15; // x3
  System_String_o *longName; // x20
  AssetManager_o *Instance; // x0
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8D08 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, effectPath);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v11);
    byte_40F8D08 = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( effectId < 1 )
    goto LABEL_15;
  inited = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    inited = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)inited);
  if ( !EffectMaster )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)EffectMaster,
             effectId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
    Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( Instance )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty(Instance, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_19:
    sub_B170D4();
  }
  return (unsigned __int8)Entity & 1;
}


void __fastcall BattleEffectUtility__LoadEffectAssetIfNotYet(
        int32_t effectId,
        System_Action_o *finishCallback,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  __int64 v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x2
  BattleEffectUtility_c *inited; // x0
  System_Collections_Generic_HashSet_int__o *SentEffectIdHashSet; // x0
  BattleEffectUtility_c *v30; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  BattleEffectUtility_c *v32; // x0
  float SendReportProbability; // s8
  Il2CppObject *v34; // x0
  System_String_o *v35; // x23
  CrashReporter_o *Instance; // x0
  BattleEffectUtility_c *v37; // x0
  System_Collections_Generic_HashSet_int__o *v38; // x0
  BattleDataDefine_c *v39; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v46; // x23
  AssetLoader_LoadEndDataHandler_o *v47; // x24
  System_String_o *v48; // x19
  AssetLoader_LoadEndDataHandler_o *v49; // x23
  int32_t v50; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *effectPath; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_40F8D0B & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, finishCallback);
    sub_B16FFC(&BattleDataDefine_TypeInfo, v8);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v15);
    sub_B16FFC(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__, v16);
    sub_B16FFC(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__, v17);
    sub_B16FFC(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_21025, v19);
    byte_40F8D0B = 1;
  }
  effectPath = 0LL;
  v20 = sub_B170CC(BattleEffectUtility___c__DisplayClass32_0_TypeInfo, finishCallback, perf, method, v4);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_45;
  *(_QWORD *)(v20 + 16) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v20 + 16),
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
  inited = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    inited = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SentEffectIdHashSet = BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)inited);
  if ( !SentEffectIdHashSet )
    goto LABEL_45;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          SentEffectIdHashSet,
          effectId,
          (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v30 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      v30 = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v30);
    if ( !NotPreloadEffectIdHashSet )
      goto LABEL_45;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            NotPreloadEffectIdHashSet,
            effectId,
            (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v32 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v32 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v32->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v50 = effectId;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
        v35 = System_String__Format((System_String_o *)StringLiteral_21025, v34, 0LL);
        Instance = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !Instance )
          goto LABEL_45;
        CrashReporter__SendReport_28515572(Instance, v35, 0LL, 0LL, 0LL);
        v37 = BattleEffectUtility_TypeInfo;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          v37 = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        v38 = BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v37);
        if ( !v38 )
          goto LABEL_45;
        System_Collections_Generic_HashSet_int___Add(
          v38,
          effectId,
          (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v39 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v39 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v39->static_fields->ASSET_PARALLEL_LOAD_MAX;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL) )
  {
    if ( perf )
    {
      assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField;
      v46 = effectPath;
      v47 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v41, v42, v43, v44);
      AssetLoader_LoadEndDataHandler___ctor(
        v47,
        (Il2CppObject *)v20,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v46,
               v47,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_43;
      }
    }
LABEL_45:
    sub_B170D4();
  }
  v48 = effectPath;
  v49 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v41, v42, v43, v44);
  AssetLoader_LoadEndDataHandler___ctor(
    v49,
    (Il2CppObject *)v20,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v48, v49, ASSET_PARALLEL_LOAD_MAX, 0LL) )
LABEL_43:
    ActionExtensions__Call(*(System_Action_o **)(v20 + 16), 0LL);
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
  System_String_o *NodeName; // x0
  System_String_o *v11; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Transform_o *v14; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F8D00 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EffectMaster___, *(_QWORD *)&effectId);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v8);
    byte_40F8D00 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          effectId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return;
  if ( !entity
    || (NodeName = EffectEntity__getNodeName((EffectEntity_o *)entity, 0LL), !effectObj)
    || (v11 = NodeName, transform = UnityEngine_GameObject__get_transform(effectObj, 0LL), !targetObj)
    || (v13 = transform,
        v14 = UnityEngine_GameObject__get_transform(targetObj, 0LL),
        NodeFromLvName = TransformHelper__getNodeFromLvName(v14, v11, -1, 0, 0LL),
        !v13) )
  {
LABEL_14:
    sub_B170D4();
  }
  UnityEngine_Transform__set_parent(v13, NodeFromLvName, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v13, zero, 0LL);
  up = UnityEngine_Vector3__get_up(0LL);
  UnityEngine_Transform__set_eulerAngles(v13, up, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v13, one, 0LL);
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
  BattleEffectUtility_c *inited; // x0
  EffectMaster_o *EffectMaster; // x0
  const MethodInfo *v13; // x3
  System_String_o *longName; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_40F8D07 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v10);
    byte_40F8D07 = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  inited = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    inited = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)inited);
  if ( !EffectMaster )
    goto LABEL_17;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)EffectMaster,
          &entity,
          effectId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
LABEL_17:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  EffectEntity_o *v30; // x19
  srcLineSprite_o *Component_srcLineSprite; // x0
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *v33; // x21
  System_String_o *v34; // x0
  UnityEngine_Object_o *v35; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v36; // x22
  System_String_o *v37; // x22
  System_String_o *v38; // x22
  System_String_o *v39; // x23
  UnityEngine_UI_Dropdown_DropdownItem_o *Manager__loadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  __int64 EffectFolder; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *v46; // x25
  int32_t v47; // w23
  BattleEffectUtility_c *v48; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v50; // x24
  _DWORD *monitor; // x8
  int32_t v52; // w23
  int32_t v53; // w22
  int32_t LimitCount; // w0
  System_String_o *v55; // x24
  int32_t v56; // w25
  BattleEffectUtility_c *v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x22
  AssetData_o *AssetStorage; // x0
  System_String_o *se; // x20
  BattleEffectUtility_c *inited; // x0
  System_Collections_Generic_HashSet_int__o *SentEffectIdHashSet; // x0
  BattleEffectUtility_c *v64; // x0
  float SendReportProbability; // s8
  UnityEngine_Object_o *v66; // x20
  Il2CppObject *v67; // x0
  System_String_o *v68; // x20
  CrashReporter_o *v69; // x0
  BattleEffectUtility_c *v70; // x0
  System_Collections_Generic_HashSet_int__o *v71; // x0
  changeVColor_array *v72; // x0
  changeVColor_array *v73; // x19
  float v74; // s0
  float v75; // s1
  float v76; // s2
  float v77; // s3
  int max_length; // w8
  float v79; // s8
  float v80; // s9
  float v81; // s10
  float v82; // s11
  unsigned int v83; // w21
  UIWidget_o *v84; // x0
  int32_t id; // [xsp+Ch] [xbp-74h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-70h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Color_o v89; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8D0D & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, procObject);
    sub_B16FFC(&AssetManager_TypeInfo, v7);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_EffectMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v12);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v15);
    sub_B16FFC(&int_TypeInfo, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v21);
    sub_B16FFC(&SoundManager_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_18154, v23);
    sub_B16FFC(&StringLiteral_18155, v24);
    sub_B16FFC(&StringLiteral_2747, v25);
    sub_B16FFC(&StringLiteral_2740, v26);
    byte_40F8D0D = 1;
  }
  name = 0LL;
  path = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_98;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_98;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             effectId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( !procObject )
    goto LABEL_98;
  v30 = (EffectEntity_o *)Entity;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              procObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
  if ( !v30 )
    goto LABEL_98;
  v33 = (UnityEngine_Object_o *)Component_srcLineSprite;
  switch ( v30->fields.folderType )
  {
    case 1:
      v34 = System_String__Concat_43743732((System_String_o *)StringLiteral_18155, v30->fields.name, 0LL);
      v35 = UnityEngine_Resources__Load(v34, 0LL);
      if ( !v35 )
        goto LABEL_12;
      if ( (UnityEngine_GameObject_c *)v35->klass == UnityEngine_GameObject_TypeInfo )
        v36 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v35;
      else
        v36 = 0LL;
      goto LABEL_53;
    case 2:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v36 = 0LL;
      if ( !UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
        goto LABEL_53;
      if ( !v33 )
        goto LABEL_98;
      monitor = v33[17].monitor;
      if ( !monitor )
        goto LABEL_98;
      v52 = monitor[162];
      v53 = monitor[174];
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v33, 0LL);
      v55 = v30->fields.name;
      v56 = LimitCount;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                                                     v52,
                                                                                     v56,
                                                                                     v55,
                                                                                     v53,
                                                                                     0LL);
      goto LABEL_52;
    case 3:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v36 = 0LL;
      if ( !UnityEngine_Object__op_Inequality(v33, 0LL, 0LL) )
        goto LABEL_53;
      if ( !v33 )
        goto LABEL_98;
      WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v33, 0LL);
      WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v33, 1, 0LL);
      EffectFolder = BattleActorControl__getEffectFolder((BattleActorControl_o *)v33, 0LL);
      v46 = v30->fields.name;
      v47 = EffectFolder;
      v48 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        EffectFolder = j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v48 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v48->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_98;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_99;
      v50 = System_String__Concat_43743732(v46, scalelist->m_Items[WeaponScale], 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                                                     v50,
                                                                                     WeaponGroup,
                                                                                     v47,
                                                                                     0LL);
LABEL_52:
      v36 = Manager__loadNoblePhantasmEffect;
LABEL_53:
      if ( EffectEntity__isSe(v30, 0LL) && isPlaySe )
      {
        se = v30->fields.se;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe_24823480((System_String_o *)StringLiteral_2740, se, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v36, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v66 = (UnityEngine_Object_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        v36,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( v30->fields.folderType != 3 )
          goto LABEL_95;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
          goto LABEL_95;
        if ( !v66 )
          goto LABEL_98;
        v72 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                (UnityEngine_GameObject_o *)v66,
                (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v33 )
          goto LABEL_98;
        v73 = v72;
        *(UnityEngine_Color_o *)&v74 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v33, 0LL);
        if ( !v73 )
          goto LABEL_98;
        max_length = v73->max_length;
        if ( max_length >= 1 )
        {
          v79 = v74;
          v80 = v75;
          v81 = v76;
          v82 = v77;
          v83 = 0;
          while ( 1 )
          {
            if ( v83 >= max_length )
            {
LABEL_99:
              sub_B17100(EffectFolder, v44, v45);
              sub_B170A0();
            }
            v84 = (UIWidget_o *)v73->m_Items[v83];
            if ( !v84 )
              break;
            v89.fields.r = v79;
            v89.fields.g = v80;
            v89.fields.b = v81;
            v89.fields.a = v82;
            UIWidget__set_color(v84, v89, 0LL);
            max_length = v73->max_length;
            if ( (int)++v83 >= max_length )
              goto LABEL_95;
          }
        }
        else
        {
LABEL_95:
          if ( v66 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v66, 0, 0LL);
            return (UnityEngine_GameObject_o *)v66;
          }
        }
LABEL_98:
        sub_B170D4();
      }
      inited = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        inited = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      SentEffectIdHashSet = BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)inited);
      if ( !SentEffectIdHashSet )
        goto LABEL_98;
      if ( System_Collections_Generic_HashSet_int___Contains(
             SentEffectIdHashSet,
             v30->fields.id,
             (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v64 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v64 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v64->static_fields->SendReportProbability;
      v66 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = v30->fields.id;
        v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
        v68 = System_String__Format((System_String_o *)StringLiteral_18154, v67, 0LL);
        v69 = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( v69 )
        {
          CrashReporter__SendReport_28515572(v69, v68, 0LL, 0LL, 0LL);
          v70 = BattleEffectUtility_TypeInfo;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            v70 = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          v71 = BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v70);
          if ( v71 )
          {
            System_Collections_Generic_HashSet_int___Add(
              v71,
              v30->fields.id,
              (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_98;
      }
      return (UnityEngine_GameObject_o *)v66;
    case 4:
      v57 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v57 = BattleEffectUtility_TypeInfo;
      }
      v58 = System_Int32__ToString((unsigned int)v57->static_fields + 24, 0LL);
      v59 = System_String__Concat_43743732((System_String_o *)StringLiteral_2747, v58, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetStorage = AssetManager__getAssetStorage(v59, 0LL);
      if ( !AssetStorage )
        goto LABEL_98;
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                     AssetStorage,
                                                                                     v30->fields.name,
                                                                                     (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      goto LABEL_52;
    case 5:
      v37 = v30->fields.name;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v37, &path, &name, v32);
      v39 = name;
      v38 = path;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                     v38,
                                                                                     v39,
                                                                                     0LL);
      goto LABEL_52;
    default:
LABEL_12:
      v36 = 0LL;
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
  __int64 v16; // x3
  __int64 v17; // x4
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v18; // x0

  if ( (byte_40F8D0C & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, procObject);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___, v9);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_5792, v12);
    byte_40F8D0C = 1;
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
    EffectObject = (UnityEngine_GameObject_o *)sub_B170CC(UnityEngine_GameObject_TypeInfo, v14, v15, v16, v17);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5792, 0LL);
    if ( !EffectObject
      || (v18 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  EffectObject,
                  (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_B170D4();
    }
    *(float *)&v18->fields.callbackQueue = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_23048660(
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
  BattleActorControl_o *Component_srcLineSprite; // x0
  System_String_o *v15; // x0

  if ( (byte_40F8D0F & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, name);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_2744, v9);
    sub_B16FFC(&StringLiteral_18155, v10);
    byte_40F8D0F = 1;
  }
  if ( folder == 2 )
  {
    v11 = &StringLiteral_18155;
LABEL_15:
    v15 = System_String__Concat_43743732((System_String_o *)*v11, name, 0LL);
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
    v11 = &StringLiteral_2744;
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
      || (Component_srcLineSprite = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              actorObject,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_B170D4();
    }
    return BattleActorControl__getActorEffect(Component_srcLineSprite, name, 0LL);
  }
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getEffectSeName(int32_t effectId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  EffectEntity_o *Entity; // x0
  EffectEntity_o *v8; // x19
  bool isSe; // w8
  System_String_o *result; // x0

  if ( (byte_40F8D0E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F8D0E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Entity = (EffectEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     effectId,
                                     (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_B170D4();
  }
  v8 = Entity;
  isSe = EffectEntity__isSe(Entity, 0LL);
  result = 0LL;
  if ( isSe )
    return v8->fields.se;
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *v6; // x19
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *NodeName; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F8D11 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B16FFC(&StringLiteral_18251, v5);
    byte_40F8D11 = 1;
  }
  entity = 0LL;
  v6 = (System_String_o *)StringLiteral_18251;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          id,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v6;
  if ( !entity )
LABEL_10:
    sub_B170D4();
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

  if ( (byte_40F8CFC & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_2747, v2);
    byte_40F8CFC = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v3 = BattleEffectUtility_TypeInfo;
  }
  v4 = System_Int32__ToString((unsigned int)v3->static_fields + 24, 0LL);
  return System_String__Concat_43743732((System_String_o *)StringLiteral_2747, v4, 0LL);
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

  if ( (byte_40F8CFD & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v1);
    sub_B16FFC(&Method_DataManager_GetMaster_EffectMaster___, v2);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F8CFD = 1;
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
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EffectMaster___);
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
    sub_B16F98((BattleServantConfConponent_o *)&static_fields->effectMst, effectMst, v7, v8, v9, v10, v11, v12);
  }
  return (EffectMaster_o *)effectMst;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_NotPreloadEffectIdHashSet(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  BattleEffectUtility_c *v7; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleEffectUtility_c *v15; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_40F8CFA & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v5);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_40F8CFA = 1;
  }
  v7 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v7 = BattleEffectUtility_TypeInfo;
  }
  notPreloadEffectIdHashSet = v7->static_fields->notPreloadEffectIdHashSet;
  if ( !notPreloadEffectIdHashSet )
  {
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                                               System_Collections_Generic_HashSet_int__TypeInfo,
                                                                               v1,
                                                                               v2,
                                                                               v3,
                                                                               v4);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
    v15 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v15 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->notPreloadEffectIdHashSet,
      (System_Int32_array **)notPreloadEffectIdHashSet,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return notPreloadEffectIdHashSet;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_SentEffectIdHashSet(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  BattleEffectUtility_c *v7; // x0
  System_Collections_Generic_HashSet_int__o *sentEffectIdHashSet; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleEffectUtility_c *v15; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_40F8CF9 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v5);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    byte_40F8CF9 = 1;
  }
  v7 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v7 = BattleEffectUtility_TypeInfo;
  }
  sentEffectIdHashSet = v7->static_fields->sentEffectIdHashSet;
  if ( !sentEffectIdHashSet )
  {
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                                         v1,
                                                                         v2,
                                                                         v3,
                                                                         v4);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
    v15 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v15 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v15->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_B16F98(
      (BattleServantConfConponent_o *)&static_fields->sentEffectIdHashSet,
      (System_Int32_array **)sentEffectIdHashSet,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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

  if ( (byte_40F8D03 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v1);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v2);
    sub_B16FFC(&Method_UnityEngine_Resources_Load_GameObject___, v3);
    sub_B16FFC(&StringLiteral_18190, v4);
    byte_40F8D03 = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_18190,
                                                        (const MethodInfo_19E149C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       UIAtlas,
                                       (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  BattleEffectUtility_c *inited; // x0
  EffectMaster_o *EffectMaster; // x0
  EffectEntity_o *Entity; // x0
  System_String_o *NodeName; // x22
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  BattleEffectUtility_c *v39; // x8
  System_Int32_array **v40; // x26
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  BattleEffectUtility_c *v42; // x0
  struct AuraEffectPosOverwriteMaster_o *auraPosOverwriteMst; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x25
  float v45; // s0
  float v46; // s1
  float v47; // s2
  float v48; // s11
  float v49; // s12
  float v50; // s13
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x25
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  unsigned __int64 v53; // x10
  int32_t *v54; // x11
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x10
  AuraEffectPosOverwriteEntity_o *v58; // x26
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  unsigned __int64 v60; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v63; // x8
  unsigned __int64 v64; // x10
  int32_t *v65; // x11
  __int64 v66; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v68; // x23
  UnityEngine_Transform_o *v69; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  char v72; // [xsp+14h] [xbp-8Ch]
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_40F8CFE & 1) == 0 )
  {
    sub_B16FFC(&AuraEffectPosOverwriteEntity_TypeInfo, *(_QWORD *)&effectId);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v17);
    sub_B16FFC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___, v19);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v20);
    sub_B16FFC(&System_IDisposable_TypeInfo, v21);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v22);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_40F8CFE = 1;
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
    inited = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      inited = (BattleEffectUtility_c *)j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)inited);
    if ( EffectMaster )
    {
      Entity = (EffectEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   (DataMasterBase_WarMaster__WarEntity__int__o *)EffectMaster,
                                   effectId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Entity )
      {
        NodeName = EffectEntity__getNodeName(Entity, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !Instance )
            goto LABEL_64;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)Instance,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v39 = BattleEffectUtility_TypeInfo;
          v40 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
            v39 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v39->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v40;
          sub_B16F98(
            (BattleServantConfConponent_o *)&static_fields->auraPosOverwriteMst,
            v40,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
        }
        if ( arg )
          NodeName = (System_String_o *)((__int64 (__fastcall *)(BattleEffectUtility_EffectLoadArgument_o *, System_String_o *, Il2CppMethodPointer))arg->klass->vtable._4_GetParentNodeName.method)(
                                          arg,
                                          NodeName,
                                          arg->klass->vtable._5_GetParentNode.methodPtr);
        v42 = BattleEffectUtility_TypeInfo;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          v42 = BattleEffectUtility_TypeInfo;
        }
        auraPosOverwriteMst = v42->static_fields->auraPosOverwriteMst;
        if ( auraPosOverwriteMst )
        {
          list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)auraPosOverwriteMst->fields.list;
          *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_up(0LL);
          if ( list )
          {
            v48 = v45;
            v49 = v46;
            v50 = v47;
            v72 = 0;
            Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                           list,
                           (const MethodInfo_290E508 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
            while ( 1 )
            {
              if ( !Enumerator )
                sub_B170D4();
              klass = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v60 = 0LL;
                p_offset = &klass->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v60;
                  p_offset += 4;
                  if ( v60 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_49;
                }
                p_method = (__int64)&klass->vtable[*p_offset].method;
              }
              else
              {
LABEL_49:
                p_method = sub_AAFEF8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      Enumerator,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v52 = Enumerator->klass;
              if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
              {
                v53 = 0LL;
                v54 = &v52->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v54 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                {
                  ++v53;
                  v54 += 4;
                  if ( v53 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                    goto LABEL_33;
                }
                v55 = (__int64)&v52->vtable[*v54].method;
              }
              else
              {
LABEL_33:
                v55 = sub_AAFEF8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
              }
              v56 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                      Enumerator,
                      *(_QWORD *)(v55 + 8));
              if ( v56
                && (v57 = *(&AuraEffectPosOverwriteEntity_TypeInfo->_2.bitflags2 + 1),
                    *(unsigned __int8 *)(*(_QWORD *)v56 + 300LL) >= (unsigned int)v57) )
              {
                if ( *(AuraEffectPosOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v56 + 200LL) + 8 * v57 - 8) == AuraEffectPosOverwriteEntity_TypeInfo )
                  v58 = (AuraEffectPosOverwriteEntity_o *)v56;
                else
                  v58 = 0LL;
              }
              else
              {
                v58 = 0LL;
              }
              if ( AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(svtId, limitCount, effectId, v58, 0LL) )
              {
                if ( !v58 )
                  sub_B170D4();
                NodeName = v58->fields.nodeName;
                v73 = AuraEffectPosOverwriteEntity__GetOffset(v58, 0LL);
                x = v73.fields.x;
                y = v73.fields.y;
                z = v73.fields.z;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v58, 0LL);
                v48 = Rotation.fields.x;
                v49 = Rotation.fields.y;
                v50 = Rotation.fields.z;
                v72 = 1;
              }
            }
            v63 = Enumerator->klass;
            if ( *(_WORD *)&Enumerator->klass->_2.bitflags1 )
            {
              v64 = 0LL;
              v65 = &v63->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
              {
                ++v64;
                v65 += 4;
                if ( v64 >= *(unsigned __int16 *)&Enumerator->klass->_2.bitflags1 )
                  goto LABEL_56;
              }
              v66 = (__int64)&v63->vtable[*v65].method;
            }
            else
            {
LABEL_56:
              v66 = sub_AAFEF8(Enumerator, System_IDisposable_TypeInfo, 0LL);
            }
            (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v66)(
              Enumerator,
              *(_QWORD *)(v66 + 8));
            if ( EffectObject )
            {
              transform = UnityEngine_GameObject__get_transform(EffectObject, 0LL);
              if ( targetObject )
              {
                v68 = transform;
                v69 = UnityEngine_GameObject__get_transform(targetObject, 0LL);
                NodeFromLvName = TransformHelper__getNodeFromLvName(v69, NodeName, limitCount, v72 & 1, 0LL);
                if ( v68 )
                {
                  UnityEngine_Transform__set_parent(v68, NodeFromLvName, 0LL);
                  zero = UnityEngine_Vector3__get_zero(0LL);
                  zero.fields.x = x + zero.fields.x;
                  zero.fields.y = y + zero.fields.y;
                  zero.fields.z = z + zero.fields.z;
                  UnityEngine_Transform__set_localPosition(v68, zero, 0LL);
                  v76.fields.x = v48;
                  v76.fields.y = v49;
                  v76.fields.z = v50;
                  UnityEngine_Transform__set_eulerAngles(v68, v76, 0LL);
                  one = UnityEngine_Vector3__get_one(0LL);
                  UnityEngine_Transform__set_localScale(v68, one, 0LL);
                  return EffectObject;
                }
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B170D4();
  }
  return EffectObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_23043844(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_40F8CFF & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    byte_40F8CFF = 1;
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

  if ( (byte_40F8CFB & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, method);
    byte_40F8CFB = 1;
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
  __int64 v4; // x3
  __int64 v5; // x4
  float z; // s8
  float y; // s9
  float x; // s10
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
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
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  AssetLoader_LoadEndDataHandler_o *v36; // x21

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_40F8D02 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, *(_QWORD *)&effectId);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v11);
    sub_B16FFC(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_B16FFC(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__, v13);
    sub_B16FFC(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_18114, v15);
    byte_40F8D02 = 1;
  }
  v16 = sub_B170CC(BattleEffectUtility___c__DisplayClass23_0_TypeInfo, *(_QWORD *)&effectId, method, v4, v5);
  BattleEffectUtility___c__DisplayClass23_0___ctor((BattleEffectUtility___c__DisplayClass23_0_o *)v16, 0LL);
  if ( !v16 )
    sub_B170D4();
  *(_QWORD *)(v16 + 24) = parent;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 24), (System_Int32_array **)parent, v17, v18, v19, v20, v21, v22);
  *(float *)(v16 + 32) = x;
  *(float *)(v16 + 36) = y;
  *(float *)(v16 + 40) = z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v23);
  v25 = (System_Int32_array **)StringLiteral_18114;
  *(_QWORD *)(v16 + 16) = StringLiteral_18114;
  sub_B16F98((BattleServantConfConponent_o *)(v16 + 16), v25, v26, v27, v28, v29, v30, v31);
  v36 = (AssetLoader_LoadEndDataHandler_o *)sub_B170CC(AssetLoader_LoadEndDataHandler_TypeInfo, v32, v33, v34, v35);
  AssetLoader_LoadEndDataHandler___ctor(
    v36,
    (Il2CppObject *)v16,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(SideEffectPath, v36, 1, 0LL);
}


void __fastcall BattleEffectUtility_BuffEffectLoadArgument___ctor(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        BattleActorControl_o *bActor,
        const MethodInfo *method)
{
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1

  if ( (byte_40F850D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, bActor);
    byte_40F850D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0LL, 0LL) )
  {
    if ( !bActor )
      sub_B170D4();
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_B16F98(&this->fields, BuffEffectNodeName_k__BackingField);
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
  UnityEngine_Transform_o *transform; // x0

  if ( System_String__IsNullOrEmpty(this->fields.effectNodeName, 0LL) )
    return defParentTr;
  if ( !targetObj )
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v10; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F850C & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F850C = 1;
  }
  if ( !data )
    goto LABEL_10;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               this->fields.name,
                                                                               (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                     Object_WarBoardWaitTimeSetting,
                                     (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v8 || (transform = UnityEngine_GameObject__get_transform(v8, 0LL)) == 0LL )
LABEL_10:
    sub_B170D4();
  v10 = transform;
  UnityEngine_Transform__SetParent(transform, this->fields.parent, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v10, zero, 0LL);
  UnityEngine_Transform__set_localScale(v10, this->fields.scl, 0LL);
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