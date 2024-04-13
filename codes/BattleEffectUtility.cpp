void __fastcall BattleEffectUtility___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleEffectUtility_c *v23; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **v34; // x19
  void *v35; // x0
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  struct BattleEffectUtility_StaticFields *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x0
  __int64 v66; // x0

  if ( (byte_42E7868 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&string___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16243/*"_S"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16203/*"_M"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16198/*"_L"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1/*""*/, v20, v21, v22);
    byte_42E7868 = 1;
  }
  BattleEffectUtility_TypeInfo->static_fields->SendReportProbability = 1.0;
  v23 = BattleEffectUtility_TypeInfo;
  BattleEffectUtility_TypeInfo->static_fields->battleEffectId = 0;
  static_fields = v23->static_fields;
  static_fields->wkVec.fields.z = 0.0;
  *(_QWORD *)&static_fields->wkVec.fields.x = 0LL;
  v25 = v23->static_fields;
  v25->auraPosOverwriteMst = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v25->auraPosOverwriteMst, 0LL, v2, v3, v4, v5, v6, v7);
  v26 = sub_B5D5DC(string___TypeInfo, 4LL);
  if ( !v26 )
    sub_B5D69C(0LL, v27);
  v34 = (System_Int32_array **)v26;
  v35 = StringLiteral_1/*""*/;
  if ( StringLiteral_1/*""*/ )
  {
    v35 = (void *)sub_B5D684(StringLiteral_1/*""*/, *(_QWORD *)&(*v34)->m_Items[9]);
    if ( !v35 )
      goto LABEL_26;
    v36 = (System_Int32_array **)StringLiteral_1/*""*/;
  }
  else
  {
    v36 = 0LL;
  }
  if ( !*((_DWORD *)v34 + 6) )
    goto LABEL_25;
  v34[4] = (System_Int32_array *)v36;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 4), v36, v28, v29, v30, v31, v32, v33);
  v35 = (void *)StringLiteral_16243/*"_S"*/;
  if ( StringLiteral_16243/*"_S"*/ )
  {
    v35 = (void *)sub_B5D684(StringLiteral_16243/*"_S"*/, *(_QWORD *)&(*v34)->m_Items[9]);
    if ( !v35 )
      goto LABEL_26;
    v43 = (System_Int32_array **)StringLiteral_16243/*"_S"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( *((_DWORD *)v34 + 6) <= 1u )
    goto LABEL_25;
  v34[5] = (System_Int32_array *)v43;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 5), v43, v37, v38, v39, v40, v41, v42);
  v35 = (void *)StringLiteral_16203/*"_M"*/;
  if ( StringLiteral_16203/*"_M"*/ )
  {
    v35 = (void *)sub_B5D684(StringLiteral_16203/*"_M"*/, *(_QWORD *)&(*v34)->m_Items[9]);
    if ( !v35 )
      goto LABEL_26;
    v50 = (System_Int32_array **)StringLiteral_16203/*"_M"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( *((_DWORD *)v34 + 6) <= 2u )
    goto LABEL_25;
  v34[6] = (System_Int32_array *)v50;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 6), v50, v44, v45, v46, v47, v48, v49);
  v35 = (void *)StringLiteral_16198/*"_L"*/;
  if ( StringLiteral_16198/*"_L"*/ )
  {
    v35 = (void *)sub_B5D684(StringLiteral_16198/*"_L"*/, *(_QWORD *)&(*v34)->m_Items[9]);
    if ( v35 )
    {
      v57 = (System_Int32_array **)StringLiteral_16198/*"_L"*/;
      goto LABEL_23;
    }
LABEL_26:
    v66 = sub_B5D6BC();
    sub_B5D668(v66, 0LL);
  }
  v57 = 0LL;
LABEL_23:
  if ( *((_DWORD *)v34 + 6) <= 3u )
  {
LABEL_25:
    v65 = sub_B5D6C8(v35);
    sub_B5D668(v65, 0LL);
  }
  v34[7] = (System_Int32_array *)v57;
  sub_B5D560((BattleServantConfConponent_o *)(v34 + 7), v57, v51, v52, v53, v54, v55, v56);
  v58 = BattleEffectUtility_TypeInfo->static_fields;
  v58->scalelist = (struct System_String_array *)v34;
  sub_B5D560((BattleServantConfConponent_o *)&v58->scalelist, v34, v59, v60, v61, v62, v63, v64);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleEffectUtility_c *v8; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v10; // x1

  if ( (byte_42E785F & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v5, v6, v7);
    byte_42E785F = 1;
  }
  v8 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v8);
  if ( !NotPreloadEffectIdHashSet )
    sub_B5D69C(0LL, v10);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_2500678 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
}


void __fastcall BattleEffectUtility__AddRelatedFunctionEffectIdList(
        System_Int32_array *funcIds,
        System_Collections_Generic_List_int__o **effectIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x21
  unsigned __int64 v22; // x24
  struct DataMasterBase_array *datalist; // x8
  DataManager_o *v24; // x22
  unsigned __int64 v25; // x28
  int32_t v26; // w23
  __int64 v27; // x0

  if ( (byte_42E785A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_FunctionMaster___, (_DWORD)effectIdList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E785A = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_21:
      sub_B5D69C(Instance, v19);
    Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  Instance,
                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_FunctionMaster___);
    v20 = *(_QWORD *)&funcIds->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
      v22 = 0LL;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)v20 )
          goto LABEL_22;
        if ( !v21 )
          goto LABEL_21;
        Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      v21,
                                      funcIds->m_Items[v22 + 1],
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_21;
          datalist = Instance->fields.datalist;
          v24 = Instance;
          if ( (int)datalist >= 1 )
            break;
        }
LABEL_19:
        LODWORD(v20) = funcIds->max_length;
        if ( (__int64)++v22 >= (int)v20 )
          return;
      }
      v25 = 0LL;
      while ( v25 < (unsigned int)datalist )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_21;
        v26 = *((_DWORD *)&v24->fields.lookup + v25);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v26,
                                      (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_21;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Instance,
            v26,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        LODWORD(datalist) = v24->fields.datalist;
        if ( (__int64)++v25 >= (int)datalist )
          goto LABEL_19;
      }
LABEL_22:
      v27 = sub_B5D6C8(Instance);
      sub_B5D668(v27, 0LL);
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
  char v8; // w1
  char v9; // w2
  __int64 v10; // x3
  char v11; // w1
  char v12; // w2
  __int64 v13; // x3
  char v14; // w1
  char v15; // w2
  __int64 v16; // x3
  char v17; // w1
  char v18; // w2
  __int64 v19; // x3
  char v20; // w1
  char v21; // w2
  __int64 v22; // x3
  char v23; // w1
  char v24; // w2
  __int64 v25; // x3
  char v26; // w1
  char v27; // w2
  __int64 v28; // x3
  char v29; // w1
  char v30; // w2
  __int64 v31; // x3
  char v32; // w1
  char v33; // w2
  __int64 v34; // x3
  char v35; // w1
  char v36; // w2
  __int64 v37; // x3
  char v38; // w1
  char v39; // w2
  __int64 v40; // x3
  __int64 OverwriteShadowServantEffectNodes; // x0
  __int64 v42; // x1
  float v43; // s4
  float v44; // s5
  float v45; // s6
  float v46; // s7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v47; // x20
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x22
  System_Int32_array **v55; // x1
  __int64 v56; // x8
  unsigned __int64 v57; // x25
  System_String_o *v58; // x23
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x24
  UnityEngine_GameObject_o *v61; // x23
  UnityEngine_Transform_o *v62; // x24
  int v63; // s0
  UnityEngine_Transform_o *v66; // x24
  int v67; // s0
  UnityEngine_Transform_o *v70; // x24
  int v71; // s0
  __int64 v74; // x8
  __int64 v75; // x21
  unsigned __int64 v76; // x23
  UnityEngine_Object_o *v77; // x22
  int v78; // w8
  __int64 v79; // x22
  unsigned int v80; // w26
  __int64 v81; // x8
  __int64 v82; // x19
  unsigned __int64 v83; // x22
  UnityEngine_Object_o *v84; // x21
  int v85; // w8
  __int64 v86; // x21
  unsigned int v87; // w25
  __int64 v89; // x0
  __int64 v90; // x0
  MethodInfo methoda; // [xsp+10h] [xbp-60h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v94; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7866 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, isShadow, isChoco, limitAddEntity);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&string___TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_18554/*"en_waist"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v38, v39, v40);
    byte_42E7866 = 1;
  }
  white = UnityEngine_Color__get_white(0LL);
  v47 = 0LL;
  methoda.methodPointer = *(Il2CppMethodPointer *)&white.fields.r;
  methoda.invoker_method = *(void **)&white.fields.b;
  if ( isShadow )
  {
    v94.fields.r = 0.05;
    v94.fields.a = 1.0;
    v94.fields.g = 0.05;
    v94.fields.b = 0.05;
    UnityEngine_Color___ctor(v94, v43, v44, v45, v46, &methoda);
    OverwriteShadowServantEffectNodes = sub_B5D5DC(string___TypeInfo, 1LL);
    if ( !OverwriteShadowServantEffectNodes )
      goto LABEL_76;
    v54 = OverwriteShadowServantEffectNodes;
    OverwriteShadowServantEffectNodes = StringLiteral_18554/*"en_waist"*/;
    if ( StringLiteral_18554/*"en_waist"*/ )
    {
      OverwriteShadowServantEffectNodes = sub_B5D684(StringLiteral_18554/*"en_waist"*/, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
      if ( !OverwriteShadowServantEffectNodes )
      {
        v90 = sub_B5D6BC();
        sub_B5D668(v90, 0LL);
      }
      v55 = (System_Int32_array **)StringLiteral_18554/*"en_waist"*/;
    }
    else
    {
      v55 = 0LL;
    }
    if ( !*(_DWORD *)(v54 + 24) )
      goto LABEL_77;
    *(_QWORD *)(v54 + 32) = v55;
    sub_B5D560((BattleServantConfConponent_o *)(v54 + 32), v55, v48, v49, v50, v51, v52, v53);
    if ( limitAddEntity )
    {
      OverwriteShadowServantEffectNodes = (__int64)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
                                                     limitAddEntity,
                                                     0LL);
      v54 = OverwriteShadowServantEffectNodes;
      if ( !OverwriteShadowServantEffectNodes )
        goto LABEL_76;
    }
    v56 = *(_QWORD *)(v54 + 24);
    if ( (int)v56 >= 1 )
    {
      v47 = 0LL;
      v57 = 0LL;
      while ( v57 < (unsigned int)v56 )
      {
        if ( !actorObj )
          goto LABEL_76;
        v58 = *(System_String_o **)(v54 + 32 + 8 * v57);
        transform = UnityEngine_GameObject__get_transform(actorObj, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v58, 0, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          OverwriteShadowServantEffectNodes = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)ServantAssetLoadManager__createShadowEffect(
                                                         (ServantAssetLoadManager_o *)OverwriteShadowServantEffectNodes,
                                                         0,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v61 = (UnityEngine_GameObject_o *)OverwriteShadowServantEffectNodes;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)OverwriteShadowServantEffectNodes,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)OverwriteShadowServantEffectNodes,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          v62 = UnityEngine_GameObject__get_transform(v61, 0LL);
          *(UnityEngine_Vector3_o *)&v63 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v62 )
            goto LABEL_76;
          UnityEngine_Transform__set_localPosition(v62, *(UnityEngine_Vector3_o *)&v63, 0LL);
          v66 = UnityEngine_GameObject__get_transform(v61, 0LL);
          *(UnityEngine_Vector3_o *)&v67 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v66 )
            goto LABEL_76;
          UnityEngine_Transform__set_localEulerAngles(v66, *(UnityEngine_Vector3_o *)&v67, 0LL);
          v70 = UnityEngine_GameObject__get_transform(v61, 0LL);
          *(UnityEngine_Vector3_o *)&v71 = UnityEngine_Vector3__get_one(0LL);
          if ( !v70 )
            goto LABEL_76;
          UnityEngine_Transform__set_localScale(v70, *(UnityEngine_Vector3_o *)&v71, 0LL);
          if ( !v47 )
          {
            v47 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v47,
              (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
            if ( !v47 )
              goto LABEL_76;
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v47,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        LODWORD(v56) = *(_DWORD *)(v54 + 24);
        if ( (__int64)++v57 >= (int)v56 )
          goto LABEL_32;
      }
LABEL_77:
      v89 = sub_B5D6C8(OverwriteShadowServantEffectNodes);
      sub_B5D668(v89, 0LL);
    }
    v47 = 0LL;
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
                                                 (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v74 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v75 = OverwriteShadowServantEffectNodes;
    if ( (int)v74 >= 1 )
    {
      v76 = 0LL;
      while ( 1 )
      {
        if ( v76 >= (unsigned int)v74 )
          goto LABEL_77;
        v77 = *(UnityEngine_Object_o **)(v75 + 8 * v76 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v77, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v77 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v77,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v78 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v79 = OverwriteShadowServantEffectNodes;
          if ( v78 >= 1 )
            break;
        }
LABEL_54:
        LODWORD(v74) = *(_DWORD *)(v75 + 24);
        if ( (__int64)++v76 >= (int)v74 )
          goto LABEL_55;
      }
      v80 = 0;
      while ( v80 < v78 )
      {
        OverwriteShadowServantEffectNodes = *(_QWORD *)(v79 + 8LL * (int)v80 + 32);
        if ( !OverwriteShadowServantEffectNodes )
          goto LABEL_76;
        *(_QWORD *)&v95.fields.b = methoda.invoker_method;
        *(_QWORD *)&v95.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)OverwriteShadowServantEffectNodes,
          (System_String_o *)StringLiteral_16146/*"_Color"*/,
          v95,
          0LL);
        v78 = *(_DWORD *)(v79 + 24);
        if ( (int)++v80 >= v78 )
          goto LABEL_54;
      }
      goto LABEL_77;
    }
  }
LABEL_55:
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !OverwriteShadowServantEffectNodes )
LABEL_76:
    sub_B5D69C(OverwriteShadowServantEffectNodes, v42);
  OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                 (UnityEngine_Component_o *)OverwriteShadowServantEffectNodes,
                                                 (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( OverwriteShadowServantEffectNodes )
  {
    v81 = *(_QWORD *)(OverwriteShadowServantEffectNodes + 24);
    v82 = OverwriteShadowServantEffectNodes;
    if ( (int)v81 >= 1 )
    {
      v83 = 0LL;
      while ( 1 )
      {
        if ( v83 >= (unsigned int)v81 )
          goto LABEL_77;
        v84 = *(UnityEngine_Object_o **)(v82 + 8 * v83 + 32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        OverwriteShadowServantEffectNodes = UnityEngine_Object__op_Inequality(v84, 0LL, 0LL);
        if ( (OverwriteShadowServantEffectNodes & 1) != 0 )
        {
          if ( !v84 )
            goto LABEL_76;
          OverwriteShadowServantEffectNodes = (__int64)UnityEngine_Renderer__get_materials(
                                                         (UnityEngine_Renderer_o *)v84,
                                                         0LL);
          if ( !OverwriteShadowServantEffectNodes )
            goto LABEL_76;
          v85 = *(_DWORD *)(OverwriteShadowServantEffectNodes + 24);
          v86 = OverwriteShadowServantEffectNodes;
          if ( v85 >= 1 )
            break;
        }
LABEL_71:
        LODWORD(v81) = *(_DWORD *)(v82 + 24);
        if ( (__int64)++v83 >= (int)v81 )
          goto LABEL_72;
      }
      v87 = 0;
      while ( v87 < v85 )
      {
        OverwriteShadowServantEffectNodes = *(_QWORD *)(v86 + 8LL * (int)v87 + 32);
        if ( !OverwriteShadowServantEffectNodes )
          goto LABEL_76;
        *(_QWORD *)&v96.fields.b = methoda.invoker_method;
        *(_QWORD *)&v96.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)OverwriteShadowServantEffectNodes,
          (System_String_o *)StringLiteral_16146/*"_Color"*/,
          v96,
          0LL);
        v85 = *(_DWORD *)(v86 + 24);
        if ( (int)++v87 >= v85 )
          goto LABEL_71;
      }
      goto LABEL_77;
    }
  }
LABEL_72:
  if ( v47 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v47,
                                             (const MethodInfo_305910C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0LL;
}


void __fastcall BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  BattleEffectUtility_c *v7; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v9; // x1

  if ( (byte_42E7860 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Clear__, v4, v5, v6);
    byte_42E7860 = 1;
  }
  v7 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v7);
  if ( !NotPreloadEffectIdHashSet )
    sub_B5D69C(0LL, v9);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_24FFA90 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int32_t IndexOf_44651748; // w0
  int32_t v11; // w22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_o **v27; // x0
  System_String_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  v6 = baseName;
  if ( (byte_42E785C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_885/*"/"*/, (_DWORD)path, (_DWORD)name, method);
    baseName = (System_String_o *)sub_B5D5C4(&StringLiteral_5892/*"Effect/BattleCommon/{0}"*/, v7, v8, v9);
    byte_42E785C = 1;
  }
  if ( !v6 )
    sub_B5D69C(baseName, path);
  IndexOf_44651748 = System_String__LastIndexOf_44651748(v6, (System_String_o *)StringLiteral_885/*"/"*/, 0LL);
  if ( IndexOf_44651748 == -1 )
  {
    v28 = System_String__Format((System_String_o *)StringLiteral_5892/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v28;
    sub_B5D560((BattleServantConfConponent_o *)path, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
    v27 = name;
    v20 = v6;
    *name = v6;
  }
  else
  {
    v11 = IndexOf_44651748;
    v12 = (Il2CppObject *)System_String__Substring_44641524(v6, 0, IndexOf_44651748, 0LL);
    v13 = System_String__Format((System_String_o *)StringLiteral_5892/*"Effect/BattleCommon/{0}"*/, v12, 0LL);
    *path = v13;
    sub_B5D560((BattleServantConfConponent_o *)path, (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
    v20 = System_String__Substring(v6, v11 + 1, 0LL);
    *name = v20;
    v27 = name;
  }
  sub_B5D560((BattleServantConfConponent_o *)v27, (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
}


System_String_array *__fastcall BattleEffectUtility__GetBattleCommonEffectPathList(
        System_Int32_array *effectIdList,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  void *Instance; // x0
  __int64 v30; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  __int64 v33; // x8
  unsigned __int64 v34; // x23
  const MethodInfo *v35; // x3
  System_String_o *v36; // x22
  __int64 v38; // x0
  System_String_o *v39; // [xsp+0h] [xbp-60h] BYREF
  System_String_o *path; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E785B & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EffectMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26, v27, v28);
    byte_42E785B = 1;
  }
  v39 = 0LL;
  path = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EffectMaster___);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_20;
  v33 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v33 >= 1 )
  {
    v34 = 0LL;
    while ( 1 )
    {
      if ( v34 >= (unsigned int)v33 )
      {
        v38 = sub_B5D6C8(Instance);
        sub_B5D668(v38, 0LL);
      }
      if ( !MasterData_WarQuestSelectionMaster )
        break;
      Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   MasterData_WarQuestSelectionMaster,
                   effectIdList->m_Items[v34 + 1],
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && *((_DWORD *)Instance + 5) == 5 )
      {
        v36 = (System_String_o *)*((_QWORD *)Instance + 5);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        BattleEffectUtility__GetBattleCommonEffectPathAndName(v36, &path, &v39, v35);
        if ( !v32 )
          break;
        Instance = (void *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v32,
                             (WarBoardManager_TaskList_o *)path,
                             (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v32,
            (EventMissionProgressRequest_Argument_ProgressData_o *)path,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
      }
      LODWORD(v33) = effectIdList->max_length;
      if ( (__int64)++v34 >= (int)v33 )
        goto LABEL_18;
    }
LABEL_20:
    sub_B5D69C(Instance, v30);
  }
LABEL_18:
  if ( !v32 )
    goto LABEL_20;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v32,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E7857 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_5926/*"Effect/SideEffect/"*/, v5, v6, v7);
    byte_42E7857 = 1;
  }
  v10 = effectId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Concat((Il2CppObject *)StringLiteral_5926/*"Effect/SideEffect/"*/, v8, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  BattleEffectUtility_c *v16; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *EffectMaster; // x0
  __int64 v18; // x1
  WarEntity_o *Entity; // x0
  const MethodInfo *v20; // x3
  System_String_o *longName; // x20
  System_String_o *name; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E785E & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)effectPath, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v13, v14, v15);
    byte_42E785E = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( effectId < 1 )
    goto LABEL_15;
  v16 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v16);
  if ( !EffectMaster )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
      BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, effectPath, &name, v20);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0LL) )
    {
LABEL_15:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_19:
    sub_B5D69C(EffectMaster, v18);
  }
  return (unsigned __int8)Entity & 1;
}


void __fastcall BattleEffectUtility__LoadEffectAssetIfNotYet(
        int32_t effectId,
        System_Action_o *finishCallback,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  __int64 v43; // x21
  CrashReporter_o *SentEffectIdHashSet; // x0
  __int64 v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x2
  BattleEffectUtility_c *v53; // x0
  BattleEffectUtility_c *v54; // x0
  BattleEffectUtility_c *v55; // x0
  float SendReportProbability; // s8
  Il2CppObject *v57; // x0
  System_String_o *v58; // x23
  BattleEffectUtility_c *v59; // x0
  BattleDataDefine_c *v60; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v63; // x23
  AssetLoader_LoadEndDataHandler_o *v64; // x24
  System_String_o *v65; // x19
  AssetLoader_LoadEndDataHandler_o *v66; // x23
  int32_t v67; // [xsp+Ch] [xbp-44h] BYREF
  System_String_o *effectPath; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_42E7861 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)finishCallback, (_DWORD)perf, method);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v16, v17, v18);
    sub_B5D5C4(&int_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v28, v29, v30);
    sub_B5D5C4(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__, v31, v32, v33);
    sub_B5D5C4(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__, v34, v35, v36);
    sub_B5D5C4(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_21391/*"non-loaded asset was detected. effectId = {0}"*/, v40, v41, v42);
    byte_42E7861 = 1;
  }
  effectPath = 0LL;
  v43 = sub_B5D694(BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v43, 0LL);
  if ( !v43 )
    goto LABEL_45;
  *(_QWORD *)(v43 + 16) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v43 + 16),
    (System_Int32_array **)finishCallback,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v52) )
    goto LABEL_43;
  v53 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v53);
  if ( !SentEffectIdHashSet )
    goto LABEL_45;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v54 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v54);
    if ( !SentEffectIdHashSet )
      goto LABEL_45;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v55 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v55 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v55->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v67 = effectId;
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v67);
        v58 = System_String__Format((System_String_o *)StringLiteral_21391/*"non-loaded asset was detected. effectId = {0}"*/, v57, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_45;
        CrashReporter__SendReport_28777404(SentEffectIdHashSet, v58, 0LL, 0LL, 0LL);
        v59 = BattleEffectUtility_TypeInfo;
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v59);
        if ( !SentEffectIdHashSet )
          goto LABEL_45;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v60 = BattleDataDefine_TypeInfo;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v60 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v60->static_fields->ASSET_PARALLEL_LOAD_MAX;
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
      v63 = effectPath;
      v64 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v64,
        (Il2CppObject *)v43,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v63,
               v64,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_43;
      }
    }
LABEL_45:
    sub_B5D69C(SentEffectIdHashSet, v45);
  }
  v65 = effectPath;
  v66 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v66,
    (Il2CppObject *)v43,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v65, v66, ASSET_PARALLEL_LOAD_MAX, 0LL) )
LABEL_43:
    ActionExtensions__Call(*(System_Action_o **)(v43 + 16), 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v14; // x1
  System_String_o *v15; // x21
  UnityEngine_Transform_o *v16; // x20
  UnityEngine_Transform_o *transform; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o up; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7856 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EffectMaster___, effectId, (_DWORD)targetObj, method);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v10, v11, v12);
    byte_42E7856 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          effectId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return;
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)entity;
  if ( !entity
    || (Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)EffectEntity__getNodeName(
                                                                                          (EffectEntity_o *)entity,
                                                                                          0LL),
        !effectObj)
    || (v15 = (System_String_o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                                          effectObj,
                                                                                          0LL),
        !targetObj)
    || (v16 = (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster,
        transform = UnityEngine_GameObject__get_transform(targetObj, 0LL),
        Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TransformHelper__getNodeFromLvName(
                                                                                          transform,
                                                                                          v15,
                                                                                          -1,
                                                                                          0,
                                                                                          0LL),
        !v16) )
  {
LABEL_14:
    sub_B5D69C(Master_WarQuestSelectionMaster, v14);
  }
  UnityEngine_Transform__set_parent(v16, (UnityEngine_Transform_o *)Master_WarQuestSelectionMaster, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v16, zero, 0LL);
  up = UnityEngine_Vector3__get_up(0LL);
  UnityEngine_Transform__set_eulerAngles(v16, up, 0LL);
  one = UnityEngine_Vector3__get_one(0LL);
  UnityEngine_Transform__set_localScale(v16, one, 0LL);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  BattleEffectUtility_c *v13; // x0
  EffectMaster_o *EffectMaster; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  System_String_o *longName; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF
  WarEntity_o *entity; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E785D & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, effectId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v10, v11, v12);
    byte_42E785D = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)effectPath, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  v13 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v13);
  if ( !EffectMaster )
    goto LABEL_17;
  EffectMaster = (EffectMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                     (DataMasterBase_WarMaster__WarEntity__int__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_23FAE6C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_17:
    sub_B5D69C(EffectMaster, v15);
  if ( *(&entity->fields.id + 1) == 5 )
  {
    longName = entity->fields.longName;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__GetBattleCommonEffectPathAndName(longName, effectPath, &name, v16);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  int v55; // w1
  char v56; // w2
  __int64 v57; // x3
  int v58; // w1
  char v59; // w2
  __int64 v60; // x3
  int v61; // w1
  char v62; // w2
  __int64 v63; // x3
  int v64; // w1
  char v65; // w2
  __int64 v66; // x3
  DataManager_o *Instance; // x0
  __int64 v68; // x1
  EffectEntity_o *Entity; // x19
  const MethodInfo *v70; // x3
  UnityEngine_Object_o *v71; // x21
  System_String_o *v72; // x0
  UnityEngine_Object_o *v73; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v74; // x22
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  System_String_o *v77; // x25
  int32_t v78; // w23
  BattleEffectUtility_c *v79; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v81; // x24
  UnityEngine_UI_Dropdown_DropdownItem_o *Manager__loadNoblePhantasmEffect; // x0
  System_String_o *v83; // x22
  System_String_o *v84; // x22
  System_String_o *v85; // x23
  _DWORD *monitor; // x8
  int32_t v87; // w23
  int32_t v88; // w22
  int32_t LimitCount; // w0
  System_String_o *v90; // x24
  int32_t v91; // w25
  BattleEffectUtility_c *v92; // x0
  System_String_o *v93; // x0
  System_String_o *v94; // x22
  System_String_o *se; // x20
  BattleEffectUtility_c *v96; // x0
  BattleEffectUtility_c *v97; // x0
  float SendReportProbability; // s8
  UnityEngine_Object_o *v99; // x20
  Il2CppObject *v100; // x0
  System_String_o *v101; // x20
  BattleEffectUtility_c *v102; // x0
  DataManager_o *v103; // x19
  float v104; // s0
  float v105; // s1
  float v106; // s2
  float v107; // s3
  int datalist; // w8
  float v109; // s8
  float v110; // s9
  float v111; // s10
  float v112; // s11
  unsigned int v113; // w21
  __int64 v115; // x0
  int32_t id; // [xsp+4h] [xbp-7Ch] BYREF
  System_String_o *name; // [xsp+8h] [xbp-78h] BYREF
  System_String_o *path; // [xsp+38h] [xbp-48h] BYREF
  UnityEngine_Color_o v119; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7863 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)procObject, isPlaySe, method);
    sub_B5D5C4(&AssetManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EffectMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v19, v20, v21);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Contains__, v31, v32, v33);
    sub_B5D5C4(&int_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v37, v38, v39);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&SoundManager_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_18451/*"effect load failed. effectId = {0}"*/, v55, v56, v57);
    sub_B5D5C4(&StringLiteral_18452/*"effect/"*/, v58, v59, v60);
    sub_B5D5C4(&StringLiteral_2813/*"Battle/Effect/"*/, v61, v62, v63);
    sub_B5D5C4(&StringLiteral_2806/*"Battle"*/, v64, v65, v66);
    byte_42E7863 = 1;
  }
  path = 0LL;
  name = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_103;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_103;
  Entity = (EffectEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                               effectId,
                               (const MethodInfo_23FAE10 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)procObject, 0LL, 0LL);
  v71 = 0LL;
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !procObject )
      goto LABEL_103;
    Instance = (DataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  procObject,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v71 = (UnityEngine_Object_o *)Instance;
  }
  if ( !Entity )
    goto LABEL_103;
  switch ( Entity->fields.folderType )
  {
    case 1:
      v72 = System_String__Concat_44577788((System_String_o *)StringLiteral_18452/*"effect/"*/, Entity->fields.name, 0LL);
      v73 = UnityEngine_Resources__Load(v72, 0LL);
      if ( !v73 )
        goto LABEL_17;
      if ( (UnityEngine_GameObject_c *)v73->klass == UnityEngine_GameObject_TypeInfo )
        v74 = (UnityEngine_UI_Dropdown_DropdownItem_o *)v73;
      else
        v74 = 0LL;
      goto LABEL_58;
    case 2:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v71, 0LL, 0LL);
      v74 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_58;
      if ( !v71 )
        goto LABEL_103;
      monitor = v71[18].monitor;
      if ( !monitor )
        goto LABEL_103;
      v87 = monitor[168];
      v88 = monitor[180];
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v71, 0LL);
      v90 = Entity->fields.name;
      v91 = LimitCount;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                                                     v87,
                                                                                     v91,
                                                                                     v90,
                                                                                     v88,
                                                                                     0LL);
      goto LABEL_57;
    case 3:
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v71, 0LL, 0LL);
      v74 = 0LL;
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_58;
      if ( !v71 )
        goto LABEL_103;
      WeaponScale = BattleActorControl__getWeaponScale((BattleActorControl_o *)v71, 0LL);
      WeaponGroup = BattleActorControl__getWeaponGroup((BattleActorControl_o *)v71, 1, 0LL);
      Instance = (DataManager_o *)BattleActorControl__getEffectFolder((BattleActorControl_o *)v71, 0LL);
      v77 = Entity->fields.name;
      v78 = (int)Instance;
      v79 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v79 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v79->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_103;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_104;
      v81 = System_String__Concat_44577788(v77, scalelist->m_Items[WeaponScale], 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                                                     v81,
                                                                                     WeaponGroup,
                                                                                     v78,
                                                                                     0LL);
LABEL_57:
      v74 = Manager__loadNoblePhantasmEffect;
LABEL_58:
      if ( EffectEntity__isSe(Entity, 0LL) && isPlaySe )
      {
        se = Entity->fields.se;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe_23390804((System_String_o *)StringLiteral_2806/*"Battle"*/, se, 0LL);
      }
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v74, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      v74,
                                      (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v99 = (UnityEngine_Object_o *)Instance;
        if ( Entity->fields.folderType != 3 )
          goto LABEL_100;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v99, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_100;
        if ( !v99 )
          goto LABEL_103;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                      (UnityEngine_GameObject_o *)v99,
                                      (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v71 )
          goto LABEL_103;
        v103 = Instance;
        *(UnityEngine_Color_o *)&v104 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v71, 0LL);
        if ( !v103 )
          goto LABEL_103;
        datalist = (int)v103->fields.datalist;
        if ( datalist >= 1 )
        {
          v109 = v104;
          v110 = v105;
          v111 = v106;
          v112 = v107;
          v113 = 0;
          while ( 1 )
          {
            if ( v113 >= datalist )
            {
LABEL_104:
              v115 = sub_B5D6C8(Instance);
              sub_B5D668(v115, 0LL);
            }
            Instance = (DataManager_o *)*((_QWORD *)&v103->fields.lookup + (int)v113);
            if ( !Instance )
              break;
            v119.fields.r = v109;
            v119.fields.g = v110;
            v119.fields.b = v111;
            v119.fields.a = v112;
            UIWidget__set_color((UIWidget_o *)Instance, v119, 0LL);
            datalist = (int)v103->fields.datalist;
            if ( (int)++v113 >= datalist )
              goto LABEL_100;
          }
        }
        else
        {
LABEL_100:
          if ( v99 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v99, 0, 0LL);
            return (UnityEngine_GameObject_o *)v99;
          }
        }
LABEL_103:
        sub_B5D69C(Instance, v68);
      }
      v96 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v96);
      if ( !Instance )
        goto LABEL_103;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             Entity->fields.id,
             (const MethodInfo_24FFAFC *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v97 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v97 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v97->static_fields->SendReportProbability;
      v99 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = Entity->fields.id;
        v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id);
        v101 = System_String__Format((System_String_o *)StringLiteral_18451/*"effect load failed. effectId = {0}"*/, v100, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_28777404((CrashReporter_o *)Instance, v101, 0LL, 0LL, 0LL);
          v102 = BattleEffectUtility_TypeInfo;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v102);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              Entity->fields.id,
              (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_103;
      }
      return (UnityEngine_GameObject_o *)v99;
    case 4:
      v92 = BattleEffectUtility_TypeInfo;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v92 = BattleEffectUtility_TypeInfo;
      }
      v93 = System_Int32__ToString((unsigned int)v92->static_fields + 24, 0LL);
      v94 = System_String__Concat_44577788((System_String_o *)StringLiteral_2813/*"Battle/Effect/"*/, v93, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v94, 0LL);
      if ( !Instance )
        goto LABEL_103;
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                     (AssetData_o *)Instance,
                                                                                     Entity->fields.name,
                                                                                     (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
      goto LABEL_57;
    case 5:
      v83 = Entity->fields.name;
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v83, &path, &name, v70);
      v84 = path;
      v85 = name;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      Manager__loadNoblePhantasmEffect = (UnityEngine_UI_Dropdown_DropdownItem_o *)ServantAssetLoadManager__loadBattleCommonEffect(
                                                                                     v84,
                                                                                     v85,
                                                                                     0LL);
      goto LABEL_57;
    default:
LABEL_17:
      v74 = 0LL;
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
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  int v18; // w1
  char v19; // w2
  __int64 v20; // x3
  UnityEngine_GameObject_o *EffectObject; // x19
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v22; // x0
  __int64 v23; // x1

  if ( (byte_42E7862 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)procObject, isPlaySe, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_5887/*"Effect Default"*/, v18, v19, v20);
    byte_42E7862 = 1;
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
    EffectObject = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5887/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v22 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                  EffectObject,
                  (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_B5D69C(v22, v23);
    }
    *(float *)&v22->fields.callbackQueue = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_23314880(
        int32_t folder,
        System_String_o *name,
        UnityEngine_GameObject_o *actorObject,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  __int64 *v19; // x8
  __int64 v20; // x1
  bool v21; // w8
  UnityEngine_GameObject_o *result; // x0
  System_String_o *v23; // x0

  if ( (byte_42E7865 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleActorControl___,
      (_DWORD)name,
      (_DWORD)actorObject,
      method);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_2809/*"Battle/CommonEffects/"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18452/*"effect/"*/, v16, v17, v18);
    byte_42E7865 = 1;
  }
  if ( folder == 2 )
  {
    v19 = &StringLiteral_18452/*"effect/"*/;
LABEL_15:
    v23 = System_String__Concat_44577788((System_String_o *)*v19, name, 0LL);
    result = (UnityEngine_GameObject_o *)UnityEngine_Resources__Load(v23, 0LL);
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
    v19 = &StringLiteral_2809/*"Battle/CommonEffects/"*/;
    goto LABEL_15;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actorObject, 0LL, 0LL);
  result = 0LL;
  if ( v21 )
  {
    if ( !actorObject
      || (result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 actorObject,
                                                 (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_B5D69C(result, v20);
    }
    return BattleActorControl__getActorEffect((BattleActorControl_o *)result, name, 0LL);
  }
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getEffectSeName(int32_t effectId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  DataManager_o *v13; // x19
  bool isSe; // w8
  System_String_o *result; // x0

  if ( (byte_42E7864 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EffectMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E7864 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      effectId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_B5D69C(Instance, v12);
  }
  v13 = Instance;
  isSe = EffectEntity__isSe((EffectEntity_o *)Instance, 0LL);
  result = 0LL;
  if ( isSe )
    return (System_String_o *)v13->fields.lookup;
  return result;
}


System_String_o *__fastcall BattleEffectUtility__getNodeNameFromEffectEntity(int32_t id, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *v14; // x19
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  System_String_o *NodeName; // x20
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7867 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EffectMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18548/*"en_body"*/, v11, v12, v13);
    byte_42E7867 = 1;
  }
  entity = 0LL;
  v14 = (System_String_o *)StringLiteral_18548/*"en_body"*/;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          id,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v14;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B5D69C(Instance, v16);
  NodeName = EffectEntity__getNodeName((EffectEntity_o *)entity, 0LL);
  if ( !System_String__IsNullOrEmpty(NodeName, 0LL) )
    return NodeName;
  return v14;
}


System_String_o *__fastcall BattleEffectUtility__get_EffectAssetName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  BattleEffectUtility_c *v7; // x0
  System_String_o *v8; // x0

  if ( (byte_42E7852 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&StringLiteral_2813/*"Battle/Effect/"*/, v4, v5, v6);
    byte_42E7852 = 1;
  }
  v7 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v7 = BattleEffectUtility_TypeInfo;
  }
  v8 = System_Int32__ToString((unsigned int)v7->static_fields + 24, 0LL);
  return System_String__Concat_44577788((System_String_o *)StringLiteral_2813/*"Battle/Effect/"*/, v8, 0LL);
}


EffectMaster_o *__fastcall BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BattleEffectUtility_c *v10; // x0
  System_Int32_array **effectMst; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleEffectUtility_c *v19; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_42E7853 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_EffectMaster___, v4, v5, v6);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    byte_42E7853 = 1;
  }
  v10 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v10 = BattleEffectUtility_TypeInfo;
  }
  effectMst = (System_Int32_array **)v10->static_fields->effectMst;
  if ( !effectMst )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EffectMaster___);
    v19 = BattleEffectUtility_TypeInfo;
    effectMst = (System_Int32_array **)Master_WarQuestSelectionMaster;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v19 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v19->static_fields;
    static_fields->effectMst = (struct EffectMaster_o *)effectMst;
    sub_B5D560((BattleServantConfConponent_o *)&static_fields->effectMst, effectMst, v13, v14, v15, v16, v17, v18);
  }
  return (EffectMaster_o *)effectMst;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_NotPreloadEffectIdHashSet(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BattleEffectUtility_c *v10; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleEffectUtility_c *v18; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_42E7850 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v7, v8, v9);
    byte_42E7850 = 1;
  }
  v10 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v10 = BattleEffectUtility_TypeInfo;
  }
  notPreloadEffectIdHashSet = v10->static_fields->notPreloadEffectIdHashSet;
  if ( !notPreloadEffectIdHashSet )
  {
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
    v18 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v18 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v18->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->notPreloadEffectIdHashSet,
      (System_Int32_array **)notPreloadEffectIdHashSet,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  return notPreloadEffectIdHashSet;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_SentEffectIdHashSet(
        const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  BattleEffectUtility_c *v10; // x0
  System_Collections_Generic_HashSet_int__o *sentEffectIdHashSet; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleEffectUtility_c *v18; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_42E784F & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v7, v8, v9);
    byte_42E784F = 1;
  }
  v10 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v10 = BattleEffectUtility_TypeInfo;
  }
  sentEffectIdHashSet = v10->static_fields->sentEffectIdHashSet;
  if ( !sentEffectIdHashSet )
  {
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
    v18 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v18 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v18->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->sentEffectIdHashSet,
      (System_Int32_array **)sentEffectIdHashSet,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  return sentEffectIdHashSet;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadActivateSideEffect(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *UIAtlas; // x19

  if ( (byte_42E7859 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v1, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_UnityEngine_Resources_Load_GameObject___, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_18486/*"effect/ef_sideeffect01"*/, v10, v11, v12);
    byte_42E7859 = 1;
  }
  UIAtlas = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Resources__Load_UIAtlas_(
                                                        (System_String_o *)StringLiteral_18486/*"effect/ef_sideeffect01"*/,
                                                        (const MethodInfo_1E6964C *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                       UIAtlas,
                                       (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  UnityEngine_GameObject_o *EffectObject; // x21
  BattleEffectUtility_c *v45; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *EffectMaster; // x0
  __int64 v47; // x1
  System_String_o *NodeName; // x22
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  BattleEffectUtility_c *v56; // x8
  System_Int32_array **v57; // x26
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *klass; // x25
  float v61; // s0
  float v62; // s1
  float v63; // s2
  float v64; // s11
  float v65; // s12
  float v66; // s13
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v68; // x1
  __int64 v69; // x3
  System_Collections_Generic_IEnumerator_T__o *v70; // x25
  System_Collections_Generic_IEnumerator_T__c *v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x10
  AuraEffectPosOverwriteEntity_o *v77; // x26
  System_Collections_Generic_IEnumerator_T__c *v78; // x8
  unsigned __int64 v79; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  __int64 v82; // x3
  System_Collections_Generic_IEnumerator_T__c *v83; // x8
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0
  UnityEngine_Transform_o *v87; // x23
  UnityEngine_Transform_o *transform; // x0
  char v90; // [xsp+14h] [xbp-8Ch]
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_42E7854 & 1) == 0 )
  {
    sub_B5D5C4(&AuraEffectPosOverwriteEntity_TypeInfo, effectId, (_DWORD)procObject, *(_QWORD *)&svtId);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v26, v27, v28);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v41, v42, v43);
    byte_42E7854 = 1;
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
    v45 = BattleEffectUtility_TypeInfo;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v45);
    if ( EffectMaster )
    {
      EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                                      EffectMaster,
                                                                      effectId,
                                                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !EffectMaster )
            goto LABEL_64;
          MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)EffectMaster,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v56 = BattleEffectUtility_TypeInfo;
          v57 = (System_Int32_array **)MasterData_WarQuestSelectionMaster;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
            v56 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v56->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v57;
          sub_B5D560(
            (BattleServantConfConponent_o *)&static_fields->auraPosOverwriteMst,
            v57,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55);
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
          *(UnityEngine_Vector3_o *)&v61 = UnityEngine_Vector3__get_up(0LL);
          if ( klass )
          {
            v64 = v61;
            v65 = v62;
            v66 = v63;
            Enumerator = System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___GetEnumerator(
                           klass,
                           (const MethodInfo_2BB8C48 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
            v90 = 0;
            v70 = Enumerator;
            while ( 1 )
            {
              if ( !v70 )
                sub_B5D69C(Enumerator, v68);
              v78 = v70->klass;
              if ( *(_WORD *)&v70->klass->_2.bitflags1 )
              {
                v79 = 0LL;
                p_offset = &v78->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  ++v79;
                  p_offset += 4;
                  if ( v79 >= *(unsigned __int16 *)&v70->klass->_2.bitflags1 )
                    goto LABEL_49;
                }
                p_method = (__int64)&v78->vtable[*p_offset].method;
              }
              else
              {
LABEL_49:
                p_method = sub_AF54C0(v70, System_Collections_IEnumerator_TypeInfo, 0LL, v69);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      v70,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v71 = v70->klass;
              if ( *(_WORD *)&v70->klass->_2.bitflags1 )
              {
                v72 = 0LL;
                v73 = &v71->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v73 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                {
                  ++v72;
                  v73 += 4;
                  if ( v72 >= *(unsigned __int16 *)&v70->klass->_2.bitflags1 )
                    goto LABEL_33;
                }
                v74 = (__int64)&v71->vtable[*v73].method;
              }
              else
              {
LABEL_33:
                v74 = sub_AF54C0(v70, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL, v82);
              }
              v75 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v74)(
                      v70,
                      *(_QWORD *)(v74 + 8));
              if ( v75
                && (v76 = *(&AuraEffectPosOverwriteEntity_TypeInfo->_2.bitflags2 + 1),
                    *(unsigned __int8 *)(*(_QWORD *)v75 + 300LL) >= (unsigned int)v76) )
              {
                if ( *(AuraEffectPosOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v75 + 200LL) + 8 * v76 - 8) == AuraEffectPosOverwriteEntity_TypeInfo )
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
                  sub_B5D69C(Enumerator, v68);
                NodeName = v77->fields.nodeName;
                v91 = AuraEffectPosOverwriteEntity__GetOffset(v77, 0LL);
                x = v91.fields.x;
                y = v91.fields.y;
                z = v91.fields.z;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v77, 0LL);
                v64 = Rotation.fields.x;
                v65 = Rotation.fields.y;
                v66 = Rotation.fields.z;
                v90 = 1;
              }
            }
            v83 = v70->klass;
            if ( *(_WORD *)&v70->klass->_2.bitflags1 )
            {
              v84 = 0LL;
              v85 = &v83->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
              {
                ++v84;
                v85 += 4;
                if ( v84 >= *(unsigned __int16 *)&v70->klass->_2.bitflags1 )
                  goto LABEL_56;
              }
              v86 = (__int64)&v83->vtable[*v85].method;
            }
            else
            {
LABEL_56:
              v86 = sub_AF54C0(v70, System_IDisposable_TypeInfo, 0LL, v82);
            }
            EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v86)(
                                                                            v70,
                                                                            *(_QWORD *)(v86 + 8));
            if ( EffectObject )
            {
              EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)UnityEngine_GameObject__get_transform(
                                                                              EffectObject,
                                                                              0LL);
              if ( targetObject )
              {
                v87 = (UnityEngine_Transform_o *)EffectMaster;
                transform = UnityEngine_GameObject__get_transform(targetObject, 0LL);
                EffectMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)TransformHelper__getNodeFromLvName(
                                                                                transform,
                                                                                NodeName,
                                                                                limitCount,
                                                                                v90 & 1,
                                                                                0LL);
                if ( v87 )
                {
                  UnityEngine_Transform__set_parent(v87, (UnityEngine_Transform_o *)EffectMaster, 0LL);
                  zero = UnityEngine_Vector3__get_zero(0LL);
                  zero.fields.x = x + zero.fields.x;
                  zero.fields.y = y + zero.fields.y;
                  zero.fields.z = z + zero.fields.z;
                  UnityEngine_Transform__set_localPosition(v87, zero, 0LL);
                  v94.fields.x = v64;
                  v94.fields.y = v65;
                  v94.fields.z = v66;
                  UnityEngine_Transform__set_eulerAngles(v87, v94, 0LL);
                  one = UnityEngine_Vector3__get_one(0LL);
                  UnityEngine_Transform__set_localScale(v87, one, 0LL);
                  return EffectObject;
                }
              }
            }
          }
        }
      }
    }
LABEL_64:
    sub_B5D69C(EffectMaster, v47);
  }
  return EffectObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_23310064(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_42E7855 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, effectId, (_DWORD)procObject, *(_QWORD *)&svtId);
    byte_42E7855 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  BattleEffectUtility_c *v5; // x0

  if ( (byte_42E7851 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7851 = 1;
  }
  v5 = BattleEffectUtility_TypeInfo;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v5 = BattleEffectUtility_TypeInfo;
  }
  v5->static_fields->battleEffectId = inId;
  return v5->static_fields->battleEffectId;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x1
  System_String_o *SideEffectPath; // x19
  System_Int32_array **v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  AssetLoader_LoadEndDataHandler_o *v43; // x21

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_42E7858 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, effectId, (_DWORD)method, v4);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__, v16, v17, v18);
    sub_B5D5C4(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_18410/*"ef_enchant"*/, v22, v23, v24);
    byte_42E7858 = 1;
  }
  v25 = sub_B5D694(BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass23_0___ctor((BattleEffectUtility___c__DisplayClass23_0_o *)v25, 0LL);
  if ( !v25 )
    sub_B5D69C(v26, v27);
  *(_QWORD *)(v25 + 24) = parent;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)parent, v28, v29, v30, v31, v32, v33);
  *(float *)(v25 + 32) = x;
  *(float *)(v25 + 36) = y;
  *(float *)(v25 + 40) = z;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v34);
  v36 = (System_Int32_array **)StringLiteral_18410/*"ef_enchant"*/;
  *(_QWORD *)(v25 + 16) = StringLiteral_18410/*"ef_enchant"*/;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), v36, v37, v38, v39, v40, v41, v42);
  v43 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v43,
    (Il2CppObject *)v25,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(SideEffectPath, v43, 1, 0LL);
}


void __fastcall BattleEffectUtility_BuffEffectLoadArgument___ctor(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        BattleActorControl_o *bActor,
        const MethodInfo *method)
{
  __int64 v3; // x3
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1

  if ( (byte_42E7C27 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)bActor, (_DWORD)method, v3);
    byte_42E7C27 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0LL, 0LL);
  if ( v6 )
  {
    if ( !bActor )
      sub_B5D69C(v6, v7);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields,
      (System_Int32_array **)BuffEffectNodeName_k__BackingField,
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
    sub_B5D69C(IsNullOrEmpty, v8);
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
  __int64 v3; // x3
  BattleEffectUtility___c__DisplayClass23_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E7C26 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6, v7, v8);
    this = (BattleEffectUtility___c__DisplayClass23_0_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E7C26 = 1;
  }
  if ( !data )
    goto LABEL_10;
  Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                               data,
                                                                               v5->fields.name,
                                                                               (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                          Object_WarBoardWaitTimeSetting,
                                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_10:
    sub_B5D69C(this, data);
  }
  v13 = (UnityEngine_Transform_o *)this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v5->fields.parent, 0LL);
  zero = UnityEngine_Vector3__get_zero(0LL);
  UnityEngine_Transform__set_localPosition(v13, zero, 0LL);
  UnityEngine_Transform__set_localScale(v13, v5->fields.scl, 0LL);
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