void __fastcall BattleEffectUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleEffectUtility_c *v9; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v11; // x0
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  __int64 v16; // x19
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct BattleEffectUtility_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4B04872 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v1);
    sub_1BC3008(&string___TypeInfo, v4);
    sub_1BC3008(&StringLiteral_16177/*"_S"*/, v5);
    sub_1BC3008(&StringLiteral_16114/*"_M"*/, v6);
    sub_1BC3008(&StringLiteral_16107/*"_L"*/, v7);
    sub_1BC3008(&StringLiteral_1/*""*/, v8);
    byte_4B04872 = 1;
  }
  v9 = BattleEffectUtility_TypeInfo;
  static_fields = BattleEffectUtility_TypeInfo->static_fields;
  static_fields->SendReportProbability = 1.0;
  *(_QWORD *)&static_fields->battleEffectId = 0LL;
  *(_QWORD *)&static_fields->wkVec.fields.y = 0LL;
  v11 = v9->static_fields;
  v11->auraPosOverwriteMst = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v11->auraPosOverwriteMst, 0, v2, v3);
  v12 = sub_1BC30B0(string___TypeInfo, 4LL);
  if ( !v12 )
    sub_1BC3264(0LL, v13);
  v16 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_9;
  v17 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v12 + 32) = StringLiteral_1/*""*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 32), v17, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u
    || (v19 = StringLiteral_16177/*"_S"*/,
        *(_QWORD *)(v16 + 40) = StringLiteral_16177/*"_S"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 40), v19, v14, v18),
        *(_DWORD *)(v16 + 24) <= 2u)
    || (v21 = StringLiteral_16114/*"_M"*/,
        *(_QWORD *)(v16 + 48) = StringLiteral_16114/*"_M"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 48), v21, v14, v20),
        *(_DWORD *)(v16 + 24) <= 3u) )
  {
LABEL_9:
    sub_1BC326C(v12, v13, v14);
  }
  v23 = StringLiteral_16107/*"_L"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_16107/*"_L"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v16 + 56), v23, v14, v22);
  v24 = BattleEffectUtility_TypeInfo->static_fields;
  v24->scalelist = (struct System_String_array *)v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v24->scalelist, v16, v25, v26);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v6; // x1

  if ( (byte_4B04866 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, method);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v3);
    byte_4B04866 = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v4);
  if ( !NotPreloadEffectIdHashSet )
    sub_1BC3264(0LL, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_355909C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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
  __int64 v11; // x2
  __int64 v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  unsigned __int64 v14; // x24
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v16; // x22
  unsigned __int64 v17; // x28
  int32_t v18; // w23
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10

  if ( (byte_4B04861 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_FunctionMaster___, effectIdList);
    sub_1BC3008(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B04861 = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_1BC3264(Instance, v10);
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_FunctionMaster___);
    v12 = *(_QWORD *)&funcIds->max_length;
    if ( (int)v12 >= 1 )
    {
      v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v12 )
          goto LABEL_25;
        if ( !v13 )
          goto LABEL_24;
        Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      v13,
                                      funcIds->m_Items[v14 + 1],
                                      (const MethodInfo_32AF070 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
        if ( Instance )
        {
          Instance = (DataManager_o *)FunctionEntity__getEffectList((FunctionEntity_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_24;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v16 = Instance;
          if ( (int)m_CancellationTokenSource >= 1 )
            break;
        }
LABEL_22:
        LODWORD(v12) = funcIds->max_length;
        if ( (__int64)++v14 >= (int)v12 )
          return;
      }
      v17 = 0LL;
      while ( v17 < (unsigned int)m_CancellationTokenSource )
      {
        Instance = (DataManager_o *)*effectIdList;
        if ( !*effectIdList )
          goto LABEL_24;
        v18 = *((_DWORD *)&v16->fields._DispLog + v17);
        Instance = (DataManager_o *)System_Collections_Generic_List_int___Contains(
                                      (System_Collections_Generic_List_int__o *)Instance,
                                      v18,
                                      (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)*effectIdList;
          if ( !*effectIdList )
            goto LABEL_24;
          v19 = *(_QWORD *)&Instance->fields.m_CachedPtr;
          v20 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(Instance->fields.m_CancellationTokenSource);
          if ( !v19 )
            goto LABEL_24;
          m_CancellationTokenSource_low = SLODWORD(Instance->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)Instance,
              v18,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(Instance->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_DWORD *)(v19 + 4 * m_CancellationTokenSource_low + 32) = v18;
          }
        }
        LODWORD(m_CancellationTokenSource) = v16->fields.m_CancellationTokenSource;
        if ( (__int64)++v17 >= (int)m_CancellationTokenSource )
          goto LABEL_22;
      }
LABEL_25:
      sub_1BC326C(Instance, v10, v11);
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
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  BattleServantData_o *v39; // x23
  int32_t v40; // w1
  __int64 v41; // x8
  unsigned __int64 v42; // x27
  System_String_o *v43; // x25
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x26
  BattleServantData_o *v46; // x25
  BattleServantData_o *v47; // x26
  BattleServantData_o *v48; // x26
  BattleServantData_o *v49; // x26
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  BattleDataDefine_c *v56; // x0
  float *p_OVERWRITE_ATK_RATE_PRIORITY; // x8
  const MethodInfo *v58; // x2
  NpcServantDisplayTypeDetailEntity_o *v59; // x22
  __int64 v60; // x8
  BattleServantData_o *v61; // x21
  unsigned __int64 v62; // x24
  UnityEngine_Object_o *v63; // x22
  int32_t uniqueId; // w8
  BattleServantData_o *v65; // x22
  unsigned int v66; // w28
  BattleServantData_c **v67; // x8
  UnityEngine_Material_o *v68; // x23
  __int64 v69; // x8
  BattleServantData_o *v70; // x19
  unsigned __int64 v71; // x23
  UnityEngine_Object_o *v72; // x21
  int32_t v73; // w8
  BattleServantData_o *v74; // x21
  unsigned int v75; // w27
  BattleServantData_c **v76; // x8
  UnityEngine_Material_o *v77; // x22
  System_Nullable_Color__o v79; // [xsp+10h] [xbp-C0h] BYREF
  NpcServantDisplayTypeDetailEntity_o *entity; // [xsp+28h] [xbp-A8h] BYREF
  UnityEngine_Color_o v81; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v83; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = svtData;
  if ( (byte_4B0486D & 1) == 0 )
  {
    sub_1BC3008(&BattleDataDefine_TypeInfo, actorObj);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v11);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, v12);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__ToArray__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v16);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v17);
    sub_1BC3008(&Method_System_Nullable_Color__GetValueOrDefault__, v18);
    sub_1BC3008(&Method_System_Nullable_Color__get_HasValue__, v19);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v20);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v21);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v22);
    sub_1BC3008(&string___TypeInfo, v23);
    sub_1BC3008(&StringLiteral_18809/*"en_waist"*/, v24);
    sub_1BC3008(&StringLiteral_16025/*"_Color"*/, v25);
    svtData = (BattleServantData_o *)sub_1BC3008(&StringLiteral_15973/*"_AddColor"*/, v26);
    byte_4B0486D = 1;
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
  svtData = (BattleServantData_o *)sub_1BC30B0(string___TypeInfo, 1LL);
  if ( !svtData )
    goto LABEL_95;
  v39 = svtData;
  if ( !svtData->fields.uniqueId )
    goto LABEL_96;
  v40 = StringLiteral_18809/*"en_waist"*/;
  svtData->fields.userSvtId.fields.currentCryptoKey = StringLiteral_18809/*"en_waist"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&svtData->fields.userSvtId, v40, v37, v38);
  if ( limitAddEntity )
  {
    svtData = (BattleServantData_o *)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(limitAddEntity, 0LL);
    v39 = svtData;
    if ( !svtData )
      goto LABEL_95;
  }
  v41 = *(_QWORD *)&v39->fields.uniqueId;
  if ( (int)v41 >= 1 )
  {
    v29 = 0LL;
    v42 = 0LL;
    while ( v42 < (unsigned int)v41 )
    {
      if ( !actorObj )
        goto LABEL_95;
      v43 = (System_String_o *)*(&v39->fields.userSvtId.fields.currentCryptoKey + v42);
      transform = UnityEngine_GameObject__get_transform(actorObj, 0LL);
      NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v43, 0, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
      if ( ((unsigned __int8)svtData & 1) != 0 )
      {
        svtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !svtData )
          goto LABEL_95;
        svtData = (BattleServantData_o *)ServantAssetLoadManager__createShadowEffect(
                                           (ServantAssetLoadManager_o *)svtData,
                                           0,
                                           v28,
                                           0LL);
        if ( !svtData )
          goto LABEL_95;
        v46 = svtData;
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)svtData, 0LL);
        if ( !svtData )
          goto LABEL_95;
        UnityEngine_Transform__set_parent(
          (UnityEngine_Transform_o *)svtData,
          (UnityEngine_Transform_o *)NodeFromName,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
        v47 = svtData;
        if ( !byte_4AFBDB1 )
        {
          svtData = (BattleServantData_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, actorObj);
          byte_4AFBDB1 = 1;
        }
        if ( !v47 )
          goto LABEL_95;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)v47,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
        v48 = svtData;
        if ( !byte_4AFBDB1 )
        {
          svtData = (BattleServantData_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, actorObj);
          byte_4AFBDB1 = 1;
        }
        if ( !v48 )
          goto LABEL_95;
        UnityEngine_Transform__set_localEulerAngles(
          (UnityEngine_Transform_o *)v48,
          UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
          0LL);
        svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v46, 0LL);
        v49 = svtData;
        if ( !byte_4AFBDB6 )
        {
          svtData = (BattleServantData_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, actorObj);
          byte_4AFBDB6 = 1;
        }
        if ( !v49 )
          goto LABEL_95;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v49,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v29 )
        {
          v29 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v29,
            (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( !v29 )
            goto LABEL_95;
        }
        items = v29->fields._items;
        v53 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v29->fields._version;
        if ( !items )
          goto LABEL_95;
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v29,
            (Il2CppObject *)v46,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
        }
        else
        {
          v55 = &items->obj.klass + size;
          v29->fields._size = size + 1;
          v55[4] = (Il2CppClass *)v46;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v46, v50, v51);
        }
      }
      LODWORD(v41) = v39->fields.uniqueId;
      if ( (__int64)++v42 >= (int)v41 )
        goto LABEL_42;
    }
LABEL_96:
    sub_1BC326C(svtData, actorObj, v37);
  }
  v29 = 0LL;
LABEL_42:
  v56 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v56 = BattleDataDefine_TypeInfo;
  }
  p_OVERWRITE_ATK_RATE_PRIORITY = (float *)&v56->static_fields->OVERWRITE_ATK_RATE_PRIORITY;
  svtData = (BattleServantData_o *)entity;
  r = p_OVERWRITE_ATK_RATE_PRIORITY[14];
  g = p_OVERWRITE_ATK_RATE_PRIORITY[15];
  b = p_OVERWRITE_ATK_RATE_PRIORITY[16];
  a = p_OVERWRITE_ATK_RATE_PRIORITY[17];
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
  NpcServantDisplayTypeDetailEntity__get_MainColor(&v79, entity, 0LL);
  if ( v79.fields.hasValue )
  {
    r = v79.fields.value.fields.r;
    g = v79.fields.value.fields.g;
    b = v79.fields.value.fields.b;
    a = v79.fields.value.fields.a;
  }
  svtData = (BattleServantData_o *)entity;
  if ( !entity )
    goto LABEL_95;
  NpcServantDisplayTypeDetailEntity__get_AddColor(&v79, entity, 0LL);
  if ( v79.fields.hasValue )
  {
    v33 = v79.fields.value.fields.r;
    v32 = v79.fields.value.fields.g;
    v31 = v79.fields.value.fields.b;
    v27 = v79.fields.value.fields.a;
  }
  else
  {
    v27 = 0.0;
    v31 = 0.0;
    v32 = 0.0;
    v33 = 0.0;
  }
  v59 = entity;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetColorToShadowEffectParticles((System_Collections_Generic_List_GameObject__o *)v29, v59, v58);
  if ( isChoco )
    goto LABEL_56;
LABEL_59:
  if ( !actorObj )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !svtData )
    goto LABEL_95;
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__50303708(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_2FF92DC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( svtData )
  {
    v60 = *(_QWORD *)&svtData->fields.uniqueId;
    v61 = svtData;
    if ( (int)v60 >= 1 )
    {
      v62 = 0LL;
      while ( 1 )
      {
        if ( v62 >= (unsigned int)v60 )
          goto LABEL_96;
        v63 = (UnityEngine_Object_o *)*(&v61->fields.userSvtId.fields.currentCryptoKey + v62);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v63 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v63, 0LL);
          if ( !svtData )
            goto LABEL_95;
          uniqueId = svtData->fields.uniqueId;
          v65 = svtData;
          if ( uniqueId >= 1 )
            break;
        }
LABEL_75:
        LODWORD(v60) = v61->fields.uniqueId;
        if ( (__int64)++v62 >= (int)v60 )
          goto LABEL_76;
      }
      v66 = 0;
      while ( v66 < uniqueId )
      {
        v67 = &v65->klass + (int)v66;
        v68 = (UnityEngine_Material_o *)v67[4];
        if ( !v68 )
          goto LABEL_95;
        v81.fields.r = r;
        v81.fields.g = g;
        v81.fields.b = b;
        v81.fields.a = a;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)v67[4],
          (System_String_o *)StringLiteral_16025/*"_Color"*/,
          v81,
          0LL);
        v82.fields.r = v33;
        v82.fields.g = v32;
        v82.fields.b = v31;
        v82.fields.a = v27;
        UnityEngine_Material__SetColor(v68, (System_String_o *)StringLiteral_15973/*"_AddColor"*/, v82, 0LL);
        uniqueId = v65->fields.uniqueId;
        if ( (int)++v66 >= uniqueId )
          goto LABEL_75;
      }
      goto LABEL_96;
    }
  }
LABEL_76:
  svtData = (BattleServantData_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
  if ( !svtData )
LABEL_95:
    sub_1BC3264(svtData, actorObj);
  svtData = (BattleServantData_o *)UnityEngine_Component__GetComponentsInChildren_object__50303708(
                                     (UnityEngine_Component_o *)svtData,
                                     (const MethodInfo_2FF92DC *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( svtData )
  {
    v69 = *(_QWORD *)&svtData->fields.uniqueId;
    v70 = svtData;
    if ( (int)v69 >= 1 )
    {
      v71 = 0LL;
      while ( 1 )
      {
        if ( v71 >= (unsigned int)v69 )
          goto LABEL_96;
        v72 = (UnityEngine_Object_o *)*(&v70->fields.userSvtId.fields.currentCryptoKey + v71);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        svtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v72, 0LL, 0LL);
        if ( ((unsigned __int8)svtData & 1) != 0 )
        {
          if ( !v72 )
            goto LABEL_95;
          svtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v72, 0LL);
          if ( !svtData )
            goto LABEL_95;
          v73 = svtData->fields.uniqueId;
          v74 = svtData;
          if ( v73 >= 1 )
            break;
        }
LABEL_91:
        LODWORD(v69) = v70->fields.uniqueId;
        if ( (__int64)++v71 >= (int)v69 )
          goto LABEL_92;
      }
      v75 = 0;
      while ( v75 < v73 )
      {
        v76 = &v74->klass + (int)v75;
        v77 = (UnityEngine_Material_o *)v76[4];
        if ( !v77 )
          goto LABEL_95;
        v83.fields.r = r;
        v83.fields.g = g;
        v83.fields.b = b;
        v83.fields.a = a;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)v76[4],
          (System_String_o *)StringLiteral_16025/*"_Color"*/,
          v83,
          0LL);
        v84.fields.r = v33;
        v84.fields.g = v32;
        v84.fields.b = v31;
        v84.fields.a = v27;
        UnityEngine_Material__SetColor(v77, (System_String_o *)StringLiteral_15973/*"_AddColor"*/, v84, 0LL);
        v73 = v74->fields.uniqueId;
        if ( (int)++v75 >= v73 )
          goto LABEL_91;
      }
      goto LABEL_96;
    }
  }
LABEL_92:
  if ( v29 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                             v29,
                                             (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
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

  if ( (byte_4B04867 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Clear__, v2);
    byte_4B04867 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_1BC3264(0LL, v5);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_355851C *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


UnityEngine_GameObject_array *__fastcall BattleEffectUtility__CreateShadowEffectAndAttachForEachNodes(
        System_Collections_Generic_IEnumerable_Transform__o *nodeEnumerable,
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
  int32_t effectId; // w22
  System_Collections_Generic_List_object__o *v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_Transform__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x21
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  UnityEngine_Transform_o *v32; // x24
  Il2CppObject *Instance; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x0
  __int64 v36; // x1
  UnityEngine_GameObject_o *v37; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v39; // x1
  __int64 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  const MethodInfo *v52; // x2

  if ( (byte_4B0486E & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, displayTypeDetailEntity);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_Transform__TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_Transform__TypeInfo, v7);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__ToArray__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1BC3008(&System_Collections_Generic_List_GameObject__TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v13);
    byte_4B0486E = 1;
  }
  if ( displayTypeDetailEntity )
    effectId = displayTypeDetailEntity->fields.effectId;
  else
    effectId = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( !nodeEnumerable )
    goto LABEL_50;
  klass = nodeEnumerable->klass;
  v19 = *(unsigned __int16 *)(&nodeEnumerable->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&nodeEnumerable->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C13570(nodeEnumerable, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_Transform__o *, _QWORD))p_method)(
          nodeEnumerable,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_1BC3264(0LL, v22);
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
          goto LABEL_18;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_18:
      v27 = sub_1C13570(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v30 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_25;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_25:
      v31 = sub_1C13570(v23, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0LL);
    }
    v32 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Instance )
      sub_1BC3264(0LL, v34);
    ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)Instance, 0, effectId, 0LL);
    v37 = ShadowEffect;
    if ( !ShadowEffect )
      sub_1BC3264(0LL, v36);
    transform = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
    if ( !transform )
      sub_1BC3264(0LL, v39);
    UnityEngine_Transform__SetParent(transform, v32, 0LL);
    GameObjectExtensions__ResetTransform(v37, 0LL);
    if ( !v15 )
      sub_1BC3264(v40, v41);
    items = v15->fields._items;
    v45 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v15->fields._version;
    if ( !items )
      sub_1BC3264(v40, v41);
    size = v15->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v15,
        (Il2CppObject *)v37,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
    }
    else
    {
      v47 = &items->obj.klass + size;
      v15->fields._size = size + 1;
      v47[4] = (Il2CppClass *)v37;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v47 + 4), (int32_t)v37, v42, v43);
    }
  }
  v48 = *(_QWORD *)v23;
  v49 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
    {
      --v49;
      v50 += 4;
      if ( !v49 )
        goto LABEL_39;
    }
    v51 = v48 + 16LL * *v50 + 312;
  }
  else
  {
LABEL_39:
    v51 = sub_1C13570(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v51)(v23, *(_QWORD *)(v51 + 8));
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__SetColorToShadowEffectParticles(
    (System_Collections_Generic_List_GameObject__o *)v15,
    displayTypeDetailEntity,
    v52);
  if ( !v15 )
LABEL_50:
    sub_1BC3264(v16, v17);
  return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                           v15,
                                           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  __int64 v7; // x1
  int32_t IndexOf_62408788; // w0
  int32_t v9; // w22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  System_String_o **v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v6 = baseName;
  if ( (byte_4B04863 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1039/*"/"*/, path);
    baseName = (System_String_o *)sub_1BC3008(&StringLiteral_5799/*"Effect/BattleCommon/{0}"*/, v7);
    byte_4B04863 = 1;
  }
  if ( !v6 )
    sub_1BC3264(baseName, path);
  IndexOf_62408788 = System_String__LastIndexOf_62408788(v6, (System_String_o *)StringLiteral_1039/*"/"*/, 0LL);
  if ( IndexOf_62408788 == -1 )
  {
    v19 = System_String__Format((System_String_o *)StringLiteral_5799/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v19;
    sub_1BC2FAC((CGThumbnailListItem_o *)path, (int32_t)v19, v20, v21);
    v18 = name;
    v17 = (int)v6;
    *name = v6;
  }
  else
  {
    v9 = IndexOf_62408788;
    v10 = (Il2CppObject *)System_String__Substring_62394572(v6, 0, IndexOf_62408788, 0LL);
    v11 = System_String__Format((System_String_o *)StringLiteral_5799/*"Effect/BattleCommon/{0}"*/, v10, 0LL);
    *path = v11;
    sub_1BC2FAC((CGThumbnailListItem_o *)path, (int32_t)v11, v12, v13);
    v14 = System_String__Substring(v6, v9 + 1, 0LL);
    v17 = (int)v14;
    *name = v14;
    v18 = name;
  }
  sub_1BC2FAC((CGThumbnailListItem_o *)v18, v17, v15, v16);
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
  __int64 v15; // x2
  __int64 v16; // x8
  unsigned __int64 v17; // x23
  const MethodInfo *v18; // x3
  System_String_o *monitor; // x22
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4B04862 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_1BC3008(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B04862 = 1;
  }
  path = 0LL;
  name = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EffectMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_22;
  v16 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1BC326C(Instance, v12, v15);
      if ( !MasterData_object )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   effectIdList->m_Items[v17 + 1],
                   (const MethodInfo_32AF070 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( Instance && HIDWORD(Instance[1].klass) == 5 )
      {
        monitor = (System_String_o *)Instance[2].monitor;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, &path, &name, v18);
        if ( !v14 )
          break;
        Instance = (Il2CppObject *)System_Collections_Generic_List_object___Contains(
                                     v14,
                                     (Il2CppObject *)path,
                                     (const MethodInfo_36A11D0 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v12 = (Il2CppObject *)path;
          items = v14->fields._items;
          v22 = Method_System_Collections_Generic_List_string__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              v12,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v12;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v12, v15, v20);
          }
        }
      }
      LODWORD(v16) = effectIdList->max_length;
      if ( (__int64)++v17 >= (int)v16 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1BC3264(Instance, v12);
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B0485E & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, method);
    sub_1BC3008(&StringLiteral_5836/*"Effect/SideEffect/"*/, v6);
    byte_4B0485E = 1;
  }
  v9 = effectId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_5836/*"Effect/SideEffect/"*/, v7, 0LL);
}


bool __fastcall BattleEffectUtility__IsEffectNotLoadedYet(
        int32_t effectId,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  BattleEffectUtility_c *v8; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v12; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B04865 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, effectPath);
    sub_1BC3008(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4B04865 = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)effectPath, 0, (int32_t)method, v3);
  if ( effectId < 1 )
    goto LABEL_13;
  v8 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v8);
  if ( !EffectMaster )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_32AF070 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v12);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0LL) )
    {
LABEL_13:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_17:
    sub_1BC3264(EffectMaster, v10);
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
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  BattleEffectUtility_c *v25; // x0
  BattleEffectUtility_c *v26; // x0
  BattleEffectUtility_c *v27; // x0
  float SendReportProbability; // s8
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  System_String_o *v33; // x23
  BattleEffectUtility_c *v34; // x0
  BattleDataDefine_c *v35; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v38; // x23
  AssetLoader_LoadEndDataHandler_o *v39; // x24
  System_String_o *v40; // x19
  AssetLoader_LoadEndDataHandler_o *v41; // x23
  int32_t v42; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *effectPath; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B04868 & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, finishCallback);
    sub_1BC3008(&BattleDataDefine_TypeInfo, v7);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_1BC3008(&int_TypeInfo, v11);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v14);
    sub_1BC3008(&Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__0__, v15);
    sub_1BC3008(&Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__1__, v16);
    sub_1BC3008(&BattleEffectUtility___c__DisplayClass33_0_TypeInfo, v17);
    sub_1BC3008(&StringLiteral_22046/*"non-loaded asset was detected. effectId = {0}"*/, v18);
    byte_4B04868 = 1;
  }
  effectPath = 0LL;
  v19 = sub_1BC3254(BattleEffectUtility___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_37;
  *(_QWORD *)(v19 + 16) = finishCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v19 + 16), (int32_t)finishCallback, v22, v23);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v24) )
    goto LABEL_35;
  v25 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v25);
  if ( !SentEffectIdHashSet )
    goto LABEL_37;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_355857C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v26 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v26);
    if ( !SentEffectIdHashSet )
      goto LABEL_37;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_355857C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v27 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v27 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v27->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v42 = effectId;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v29, v30, v31);
        v33 = System_String__Format((System_String_o *)StringLiteral_22046/*"non-loaded asset was detected. effectId = {0}"*/, v32, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        CrashReporter__SendReport_30614984(SentEffectIdHashSet, v33, 0LL, 0LL, 0LL);
        v34 = BattleEffectUtility_TypeInfo;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v34);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v35 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v35 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v35->static_fields->ASSET_PARALLEL_LOAD_MAX;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  if ( ((unsigned __int8)SentEffectIdHashSet & 1) != 0 )
  {
    if ( perf )
    {
      assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField;
      v38 = effectPath;
      v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v39,
        (Il2CppObject *)v19,
        Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v38,
               v39,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1BC3264(SentEffectIdHashSet, v21);
  }
  v40 = effectPath;
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v41,
    (Il2CppObject *)v19,
    Method_BattleEffectUtility___c__DisplayClass33_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v40, v41, ASSET_PARALLEL_LOAD_MAX, 0LL) )
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BattleEffectUtility___c_c *v18; // x0
  System_Func_object__object__o *_9__42_1; // x20
  Il2CppObject *v20; // x21
  struct BattleEffectUtility___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TResult__o *v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x19
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
  UnityEngine_Component_o *v41; // x0
  __int64 v42; // x1
  UnityEngine_ParticleSystem_o *v43; // x20
  UnityEngine_Object_o *gameObject; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x2
  System_String_o *name; // x21
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  UnityEngine_ParticleSystem_MinMaxGradient_o v52; // [xsp+0h] [xbp-100h] BYREF
  UnityEngine_ParticleSystem_MinMaxGradient_o v53; // [xsp+38h] [xbp-C8h] BYREF
  System_Nullable_Color__o v54; // [xsp+70h] [xbp-90h] BYREF
  BattleEffectUtility___c__DisplayClass42_0_o v55; // [xsp+90h] [xbp-70h] BYREF
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+B8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v57; // 0:x0.8
  UnityEngine_Color_o Value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B0486F & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, displayTypeDetailEntity);
    sub_1BC3008(&Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___, v5);
    sub_1BC3008(&System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo, v6);
    sub_1BC3008(&System_IDisposable_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&Method_System_Nullable_Color__get_HasValue__, v11);
    sub_1BC3008(&Method_System_Nullable_Color__get_Value__, v12);
    sub_1BC3008(&Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__42_1__, v13);
    sub_1BC3008(&BattleEffectUtility___c_TypeInfo, v14);
    byte_4B0486F = 1;
  }
  memset(&v54, 0, sizeof(v54));
  memset(&v55, 0, sizeof(v55));
  m_ParticleSystem = 0LL;
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)objectList, 0LL);
  if ( displayTypeDetailEntity )
  {
    if ( !IsNullOrEmpty )
    {
      NpcServantDisplayTypeDetailEntity__get_EffectColor((System_Nullable_Color__o *)&v53, displayTypeDetailEntity, 0LL);
      *(_OWORD *)&v55.fields.effectColor.fields.hasValue = *(_OWORD *)&v53.fields.m_Mode;
      v55.fields.effectColor.fields.value.fields.a = *(float *)&v53.fields.m_GradientMax;
      v55.fields.effectColorDetailDict = NpcServantDisplayTypeDetailEntity__GetEffectColorDetailDict(
                                           displayTypeDetailEntity,
                                           0LL);
      sub_1BC2FAC((CGThumbnailListItem_o *)&v55, (int32_t)v55.fields.effectColorDetailDict, v16, v17);
      if ( v55.fields.effectColor.fields.hasValue || v55.fields.effectColorDetailDict )
      {
        v18 = BattleEffectUtility___c_TypeInfo;
        if ( !BattleEffectUtility___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility___c_TypeInfo);
          v18 = BattleEffectUtility___c_TypeInfo;
        }
        _9__42_1 = (System_Func_object__object__o *)v18->static_fields->__9__42_1;
        if ( !_9__42_1 )
        {
          if ( !v18->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v18);
            v18 = BattleEffectUtility___c_TypeInfo;
          }
          v20 = (Il2CppObject *)v18->static_fields->__9;
          _9__42_1 = (System_Func_object__object__o *)sub_1BC3254(System_Func_GameObject__IEnumerable_ParticleSystem___TypeInfo);
          System_Func_object__object____ctor(
            _9__42_1,
            v20,
            Method_BattleEffectUtility___c__SetColorToShadowEffectParticles_b__42_1__,
            0LL);
          static_fields = BattleEffectUtility___c_TypeInfo->static_fields;
          static_fields->__9__42_1 = (struct System_Func_GameObject__IEnumerable_ParticleSystem___o *)_9__42_1;
          sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__42_1, (int32_t)_9__42_1, v22, v23);
        }
        v24 = System_Linq_Enumerable__SelectMany_object__object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)objectList,
                (System_Func_TSource__IEnumerable_TResult___o *)_9__42_1,
                (const MethodInfo_3038834 *)Method_System_Linq_Enumerable_SelectMany_GameObject__ParticleSystem___);
        if ( !v24 )
          sub_1BC3264(0LL, v25);
        klass = v24->klass;
        v27 = v24;
        v28 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
        if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
          {
            --v28;
            p_offset += 4;
            if ( !v28 )
              goto LABEL_18;
          }
          p_method = (__int64)&klass->vtable[*p_offset].method;
        }
        else
        {
LABEL_18:
          p_method = sub_1C13570(v24, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
        }
        v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
                v27,
                *(_QWORD *)(p_method + 8));
        if ( !v32 )
          sub_1BC3264(0LL, v31);
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
                goto LABEL_25;
            }
            v36 = v33 + 16LL * *v35 + 312;
          }
          else
          {
LABEL_25:
            v36 = sub_1C13570(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
            break;
          v37 = *(_QWORD *)v32;
          v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
          {
            v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
            while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v39 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
            {
              --v38;
              v39 += 4;
              if ( !v38 )
                goto LABEL_32;
            }
            v40 = v37 + 16LL * *v39 + 312;
          }
          else
          {
LABEL_32:
            v40 = sub_1C13570(v32, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
          }
          v41 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
          v43 = (UnityEngine_ParticleSystem_o *)v41;
          if ( !v41 )
            sub_1BC3264(0LL, v42);
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v41, 0LL);
          if ( !gameObject )
            sub_1BC3264(0LL, v45);
          name = UnityEngine_Object__get_name(gameObject, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_42_0(
            (System_Nullable_Color__o *)&v53,
            name,
            &v55,
            v46);
          *(_OWORD *)&v54.fields.hasValue = *(_OWORD *)&v53.fields.m_Mode;
          v54.fields.value.fields.a = *(float *)&v53.fields.m_GradientMax;
          if ( LOBYTE(v53.fields.m_Mode) )
          {
            m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v43, 0LL).fields.m_ParticleSystem;
            Value = System_Nullable_Color___get_Value(
                      &v54,
                      (const MethodInfo_37BD5F0 *)Method_System_Nullable_Color__get_Value__);
            UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit(&v53, Value, 0LL);
            v52 = v53;
            v57.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
            UnityEngine_ParticleSystem_MainModule__set_startColor(v57, &v52, 0LL);
          }
        }
        v48 = *(_QWORD *)v32;
        v49 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
          {
            --v49;
            v50 += 4;
            if ( !v49 )
              goto LABEL_44;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_44:
          v51 = sub_1C13570(v32, System_IDisposable_TypeInfo, 0LL);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v51)(v32, *(_QWORD *)(v51 + 8));
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

  if ( (byte_4B0485D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EffectMaster___, *(_QWORD *)&effectId);
    sub_1BC3008(&DataManager_TypeInfo, v7);
    sub_1BC3008(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v8);
    byte_4B0485D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          effectId,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
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
    sub_1BC3264(Master_object, v10);
  }
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4AFBDB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4AFBDB9 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4AFBDB9 = 1;
  }
  UnityEngine_Transform__set_eulerAngles(v12, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  if ( !byte_4AFBDB6 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v16);
    byte_4AFBDB6 = 1;
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

  if ( (byte_4B04870 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_ExcludeNull_Material___, displayTypeDetailEntity);
    sub_1BC3008(&BattleDataDefine_TypeInfo, v5);
    sub_1BC3008(&System_IDisposable_TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_Material__TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_Material__TypeInfo, v8);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BC3008(&Method_System_Nullable_Color__GetValueOrDefault__, v10);
    sub_1BC3008(&Method_System_Nullable_Color__get_HasValue__, v11);
    sub_1BC3008(&StringLiteral_16025/*"_Color"*/, v12);
    sub_1BC3008(&StringLiteral_15973/*"_AddColor"*/, v13);
    byte_4B04870 = 1;
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
    r = p_OVERWRITE_ATK_RATE_PRIORITY[14];
    g = p_OVERWRITE_ATK_RATE_PRIORITY[15];
    b = p_OVERWRITE_ATK_RATE_PRIORITY[16];
    a = p_OVERWRITE_ATK_RATE_PRIORITY[17];
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
          (const MethodInfo_2FEBC30 *)Method_BasicHelper_ExcludeNull_Material___);
  if ( !v24 )
    sub_1BC3264(0LL, v25);
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
    p_method = sub_1C13570(v24, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_T__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_1BC3264(0LL, v31);
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
      v36 = sub_1C13570(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v40 = sub_1C13570(v32, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
    }
    v41 = (UnityEngine_Material_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41 )
      sub_1BC3264(0LL, v42);
    v49.fields.r = r;
    v49.fields.g = g;
    v49.fields.b = b;
    v49.fields.a = a;
    UnityEngine_Material__SetColor(v41, (System_String_o *)StringLiteral_16025/*"_Color"*/, v49, 0LL);
    v50.fields.r = v20;
    v50.fields.g = v21;
    v50.fields.b = v22;
    v50.fields.a = v23;
    UnityEngine_Material__SetColor(v43, (System_String_o *)StringLiteral_15973/*"_AddColor"*/, v50, 0LL);
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
    v47 = sub_1C13570(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v32, *(_QWORD *)(v47 + 8));
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleEffectUtility__TryGetAuraEffectPosOverwriteEntity(
        AuraEffectPosOverwriteEntity_o **ent,
        int32_t auraEffectId,
        int32_t svtId,
        int32_t limitCount,
        BattleEffectUtility_EffectLoadArgument_o *arg,
        const MethodInfo *method)
{
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
  BattleEffectUtility_c *v21; // x0
  Il2CppObject *Master_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleEffectUtility_c *v25; // x8
  Il2CppObject *v26; // x24
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  System_Collections_Generic_List_ValueTuple_int__int___o *v28; // x24
  __int64 v29; // x0
  struct System_ValueTuple_int__int__array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  __int64 v33; // x1
  bool v34; // w21
  BattleEffectUtility_c *v35; // x0
  int32_t current_high; // w22
  int32_t current; // w23
  AuraEffectPosOverwriteMaster_o *auraPosOverwriteMst; // x0
  int v39; // w19
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-80h] BYREF
  System_ValueTuple_int__int__o item; // [xsp+48h] [xbp-58h] BYREF
  System_ValueTuple_int__int__o p_item; // 0:x0.8
  System_ValueTuple_int__int__o v45; // 0:x1.8

  if ( (byte_4B0485B & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, *(_QWORD *)&auraEffectId);
    sub_1BC3008(&Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___Dispose__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___MoveNext__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___get_Current__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_ValueTuple_int__int___Add__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_ValueTuple_int__int___GetEnumerator__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_ValueTuple_int__int____ctor__, v18);
    sub_1BC3008(&System_Collections_Generic_List_ValueTuple_int__int___TypeInfo, v19);
    sub_1BC3008(&Method_System_ValueTuple_int__int___ctor__, v20);
    byte_4B0485B = 1;
  }
  v21 = BattleEffectUtility_TypeInfo;
  memset(&v42, 0, sizeof(v42));
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v21 = BattleEffectUtility_TypeInfo;
  }
  if ( !v21->static_fields->auraPosOverwriteMst )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AuraEffectPosOverwriteMaster___);
    v25 = BattleEffectUtility_TypeInfo;
    v26 = Master_object;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v25 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v25->static_fields;
    static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v26;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->auraPosOverwriteMst, (int32_t)v26, v23, v24);
  }
  *ent = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)ent, 0, svtId, *(const MethodInfo **)&limitCount);
  v28 = (System_Collections_Generic_List_ValueTuple_int__int___o *)sub_1BC3254(System_Collections_Generic_List_ValueTuple_int__int___TypeInfo);
  System_Collections_Generic_List_ValueTuple_int__int_____ctor(
    v28,
    (const MethodInfo_364ACBC *)Method_System_Collections_Generic_List_ValueTuple_int__int____ctor__);
  if ( arg )
    ((void (__fastcall *)(BattleEffectUtility_EffectLoadArgument_o *, System_Collections_Generic_List_ValueTuple_int__int___o *, void *))arg->klass->vtable._6_AddAuraPosOverwriteTarget.method)(
      arg,
      v28,
      arg->klass[1]._1.image);
  p_item = (System_ValueTuple_int__int__o)&item;
  item = 0LL;
  System_ValueTuple_int__int____ctor(
    p_item,
    svtId,
    limitCount,
    (const MethodInfo_39EC364 *)Method_System_ValueTuple_int__int___ctor__);
  if ( !v28
    || (v45 = item,
        items = v28->fields._items,
        v31 = Method_System_Collections_Generic_List_ValueTuple_int__int___Add__,
        ++v28->fields._version,
        !items) )
  {
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BC3264)(v29, v45);
  }
  size = v28->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_int__int____AddWithResize(
      v28,
      v45,
      *(const MethodInfo_364B510 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v28->fields._size = size + 1;
    *(System_ValueTuple_int__int__o *)&items->m_Items[size].fields.Item2 = v45;
  }
  System_Collections_Generic_List_ValueTuple_int__int____GetEnumerator(
    &v41,
    v28,
    (const MethodInfo_364BFE4 *)Method_System_Collections_Generic_List_ValueTuple_int__int___GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_ValueTuple_int__int____MoveNext(
            &v42,
            (const MethodInfo_3416288 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___MoveNext__);
    if ( !v34 )
      break;
    v35 = BattleEffectUtility_TypeInfo;
    current = (int32_t)v42.fields._current;
    current_high = HIDWORD(v42.fields._current);
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v35 = BattleEffectUtility_TypeInfo;
    }
    auraPosOverwriteMst = v35->static_fields->auraPosOverwriteMst;
    if ( !auraPosOverwriteMst )
      sub_1BC3264(0LL, v33);
    if ( AuraEffectPosOverwriteMaster__TryGetEntity(auraPosOverwriteMst, ent, auraEffectId, current, current_high, 0LL) )
    {
      v39 = 6;
      goto LABEL_26;
    }
  }
  v39 = 7;
LABEL_26:
  System_Collections_Generic_List_Enumerator_ValueTuple_int__int____Dispose(
    &v42,
    (const MethodInfo_3416284 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_int__int___Dispose__);
  return v34 && v39 == 6;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleEffectUtility__TryGetBattleCommonEffectPath(
        System_String_o **effectPath,
        int32_t effectId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  BattleEffectUtility_c *v7; // x0
  EffectMaster_o *EffectMaster; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B04864 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    sub_1BC3008(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v6);
    byte_4B04864 = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)effectPath, 0, (int32_t)method, v3);
  v7 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v7);
  if ( !EffectMaster )
    goto LABEL_15;
  EffectMaster = (EffectMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_32AF0BC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_1BC3264(EffectMaster, v9);
  if ( HIDWORD(entity[1].klass) == 5 )
  {
    monitor = (System_String_o *)entity[2].monitor;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v10);
  }
  return !System_String__IsNullOrEmpty(*effectPath, 0LL);
}


System_Nullable_Color__o *__fastcall BattleEffectUtility___SetColorToShadowEffectParticles_g__GetColor_42_0(
        System_Nullable_Color__o *retstr,
        System_String_o *objectName,
        BattleEffectUtility___c__DisplayClass42_0_o *a3,
        const MethodInfo *method)
{
  System_Nullable_Color__o *result; // x0
  float a; // w8
  __int128 v9; // q0
  System_Nullable_Color__o v10; // [xsp+0h] [xbp-60h] BYREF
  System_Nullable_Color__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B04873 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_GetValue_string__Nullable_Color____, a3);
    byte_4B04873 = 1;
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
               (const MethodInfo_2FEFF1C *)Method_BasicHelper_GetValue_string__Nullable_Color____);
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
  _DWORD *monitor; // x8
  int32_t v36; // w22
  int32_t LimitCount; // w0
  System_String_o *v38; // x23
  int32_t v39; // w24
  Il2CppObject *Manager__LoadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  __int64 v43; // x2
  System_String_o *v44; // x25
  int32_t v45; // w23
  BattleEffectUtility_c *v46; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v48; // x24
  BattleEffectUtility_c *v49; // x0
  System_String_o *v50; // x0
  System_String_o *v51; // x22
  System_String_o *v52; // x22
  System_String_o *v53; // x22
  System_String_o *v54; // x23
  _QWORD *v55; // x0
  System_Reflection_MethodBase_o *v56; // x0
  BattleEffectUtility_c *v57; // x0
  BattleEffectUtility_c *v58; // x0
  float SendReportProbability; // s8
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  UnityEngine_Object_o *v63; // x20
  Il2CppObject *v64; // x0
  System_String_o *v65; // x20
  BattleEffectUtility_c *v66; // x0
  DataManager_o *v67; // x19
  float v68; // s0
  float v69; // s1
  float v70; // s2
  float v71; // s3
  int m_CancellationTokenSource; // w8
  float v73; // s8
  float v74; // s9
  float v75; // s10
  float v76; // s11
  unsigned int v77; // w21
  int32_t id; // [xsp+Ch] [xbp-84h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Color_o v82; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B0486A & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, procObject);
    sub_1BC3008(&AssetManager_TypeInfo, v7);
    sub_1BC3008(&Method_BattleEffectUtility_getEffectObject__, v8);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_EffectMaster___, v10);
    sub_1BC3008(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v11);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v13);
    sub_1BC3008(&UnityEngine_GameObject_TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Contains__, v16);
    sub_1BC3008(&int_TypeInfo, v17);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v19);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v20);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v21);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1BC3008(&StringLiteral_18696/*"effect load failed. effectId = {0}"*/, v23);
    sub_1BC3008(&StringLiteral_18697/*"effect/"*/, v24);
    sub_1BC3008(&StringLiteral_3071/*"Battle/Effect/"*/, v25);
    sub_1BC3008(&StringLiteral_3063/*"Battle"*/, v26);
    byte_4B0486A = 1;
  }
  name = 0LL;
  path = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_86;
  Entity = (EffectEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               effectId,
                               (const MethodInfo_32AF070 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v31 = (UnityEngine_Object_o *)Instance;
  }
  if ( !Entity )
    goto LABEL_86;
  switch ( Entity->fields.folderType )
  {
    case 1:
      v32 = System_String__Concat_62348648((System_String_o *)StringLiteral_18697/*"effect/"*/, Entity->fields.name, 0LL);
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
      monitor = v31[21].monitor;
      if ( !monitor )
        goto LABEL_86;
      v36 = monitor[178];
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v31, 0LL);
      v38 = Entity->fields.name;
      v39 = LimitCount;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__LoadNoblePhantasmEffect(
                                                           v36,
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
      v44 = Entity->fields.name;
      v45 = (int)Instance;
      v46 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v46 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v46->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_86;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_87;
      v48 = System_String__Concat_62348648(v44, scalelist->m_Items[WeaponScale], 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                           v48,
                                                           WeaponGroup,
                                                           v45,
                                                           0LL);
LABEL_47:
      v34 = Manager__LoadNoblePhantasmEffect;
LABEL_48:
      if ( EffectEntity__isSe(Entity, 0LL) && isPlaySe )
      {
        v55 = Method_BattleEffectUtility_getEffectObject__;
        if ( (*((_BYTE *)Method_BattleEffectUtility_getEffectObject__ + 83) & 2) != 0 )
          v55 = (_QWORD *)sub_1BC3020(Method_BattleEffectUtility_getEffectObject__);
        v56 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v55, v55[4]);
        OverwriteAssetSoundName__PlaySe_40441768(
          v56,
          (System_String_o *)StringLiteral_3063/*"Battle"*/,
          Entity->fields.se,
          1.0,
          0LL,
          0,
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
                                      (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v63 = (UnityEngine_Object_o *)Instance;
        if ( Entity->fields.folderType != 3 )
          goto LABEL_83;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_83;
        if ( !v63 )
          goto LABEL_86;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50685372(
                                      (UnityEngine_GameObject_o *)v63,
                                      (const MethodInfo_30565BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v31 )
          goto LABEL_86;
        v67 = Instance;
        *(UnityEngine_Color_o *)&v68 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v31, 0LL);
        if ( !v67 )
          goto LABEL_86;
        m_CancellationTokenSource = (int)v67->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource >= 1 )
        {
          v73 = v68;
          v74 = v69;
          v75 = v70;
          v76 = v71;
          v77 = 0;
          while ( 1 )
          {
            if ( v77 >= m_CancellationTokenSource )
LABEL_87:
              sub_1BC326C(Instance, v28, v43);
            Instance = (DataManager_o *)*((_QWORD *)&v67->fields._DispLog + (int)v77);
            if ( !Instance )
              break;
            v82.fields.r = v73;
            v82.fields.g = v74;
            v82.fields.b = v75;
            v82.fields.a = v76;
            UIWidget__set_color((UIWidget_o *)Instance, v82, 0LL);
            m_CancellationTokenSource = (int)v67->fields.m_CancellationTokenSource;
            if ( (int)++v77 >= m_CancellationTokenSource )
              goto LABEL_83;
          }
        }
        else
        {
LABEL_83:
          if ( v63 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v63, 0, 0LL);
            return (UnityEngine_GameObject_o *)v63;
          }
        }
LABEL_86:
        sub_1BC3264(Instance, v28);
      }
      v57 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v57);
      if ( !Instance )
        goto LABEL_86;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             Entity->fields.id,
             (const MethodInfo_355857C *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v58 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v58 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v58->static_fields->SendReportProbability;
      v63 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = Entity->fields.id;
        v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v60, v61, v62);
        v65 = System_String__Format((System_String_o *)StringLiteral_18696/*"effect load failed. effectId = {0}"*/, v64, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_30614984((CrashReporter_o *)Instance, v65, 0LL, 0LL, 0LL);
          v66 = BattleEffectUtility_TypeInfo;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v66);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              Entity->fields.id,
              (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_86;
      }
      return (UnityEngine_GameObject_o *)v63;
    case 4:
      v49 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v49 = BattleEffectUtility_TypeInfo;
      }
      v50 = System_Int32__ToString((unsigned int)v49->static_fields + 24, 0LL);
      v51 = System_String__Concat_62348648((System_String_o *)StringLiteral_3071/*"Battle/Effect/"*/, v50, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v51, 0LL);
      if ( !Instance )
        goto LABEL_86;
      Manager__LoadNoblePhantasmEffect = AssetData__GetObject_object__50213776(
                                           (AssetData_o *)Instance,
                                           Entity->fields.name,
                                           (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
      goto LABEL_47;
    case 5:
      v52 = Entity->fields.name;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v52, &path, &name, v30);
      v54 = name;
      v53 = path;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__LoadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadBattleCommonEffect(v53, v54, 0LL);
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

  if ( (byte_4B04869 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, procObject);
    sub_1BC3008(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___, v9);
    sub_1BC3008(&UnityEngine_GameObject_TypeInfo, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_5793/*"Effect Default"*/, v12);
    byte_4B04869 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, isPlaySe, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    EffectObject = (UnityEngine_GameObject_o *)sub_1BC3254(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5793/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  EffectObject,
                  (const MethodInfo_30558B0 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_1BC3264(v14, v15);
    }
    *(float *)&v14[2].klass = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_44809964(
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

  if ( (byte_4B0486C & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, name);
    sub_1BC3008(&UnityEngine_GameObject_TypeInfo, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_3067/*"Battle/CommonEffects/"*/, v9);
    sub_1BC3008(&StringLiteral_18697/*"effect/"*/, v10);
    byte_4B0486C = 1;
  }
  if ( folder == 2 )
  {
    v11 = &StringLiteral_18697/*"effect/"*/;
LABEL_8:
    v12 = System_String__Concat_62348648((System_String_o *)*v11, name, 0LL);
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
    v11 = &StringLiteral_3067/*"Battle/CommonEffects/"*/;
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
                                                 (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_1BC3264(result, v14);
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

  if ( (byte_4B0486B & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B0486B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     effectId,
                     (const MethodInfo_32AF070 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BC3264(Instance, v6);
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

  if ( (byte_4B04871 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_1BC3008(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BC3008(&StringLiteral_18803/*"en_body"*/, v5);
    byte_4B04871 = 1;
  }
  v6 = (System_String_o *)StringLiteral_18803/*"en_body"*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_32AF0BC *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v6;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BC3264(Instance, v8);
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

  if ( (byte_4B04858 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_3071/*"Battle/Effect/"*/, v2);
    byte_4B04858 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v3 = BattleEffectUtility_TypeInfo;
  }
  v4 = System_Int32__ToString((unsigned int)v3->static_fields + 24, 0LL);
  return System_String__Concat_62348648((System_String_o *)StringLiteral_3071/*"Battle/Effect/"*/, v4, 0LL);
}


EffectMaster_o *__fastcall BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  EffectMaster_o *effectMst; // x19
  Il2CppObject *Master_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BattleEffectUtility_c *v9; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4B04859 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v1);
    sub_1BC3008(&Method_DataManager_GetMaster_EffectMaster___, v2);
    sub_1BC3008(&DataManager_TypeInfo, v3);
    byte_4B04859 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EffectMaster___);
    v9 = BattleEffectUtility_TypeInfo;
    effectMst = (EffectMaster_o *)Master_object;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v9 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->effectMst = effectMst;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->effectMst, (int32_t)effectMst, v7, v8);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BattleEffectUtility_c *v8; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4B04856 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v2);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4B04856 = 1;
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
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v8 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v8 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&static_fields->notPreloadEffectIdHashSet,
      (int32_t)notPreloadEffectIdHashSet,
      v6,
      v7);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  BattleEffectUtility_c *v8; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4B04855 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v1);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v2);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4B04855 = 1;
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
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v8 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v8 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->sentEffectIdHashSet, (int32_t)sentEffectIdHashSet, v6, v7);
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

  if ( (byte_4B04860 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v1);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v2);
    sub_1BC3008(&Method_UnityEngine_Resources_Load_GameObject___, v3);
    sub_1BC3008(&StringLiteral_18731/*"effect/ef_sideeffect01"*/, v4);
    byte_4B04860 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_18731/*"effect/ef_sideeffect01"*/,
             (const MethodInfo_309AA50 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       object,
                                       (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  float z; // s9
  float y; // s8
  float x; // s10
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *EffectObject; // x19
  BattleEffectUtility_c *v20; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  const MethodInfo *v24; // x5
  System_String_o *NodeName; // x25
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v27; // s11
  float v28; // s12
  float v29; // s13
  char v30; // w23
  float v31; // s0
  float v32; // s1
  float v33; // s2
  UnityEngine_Transform_o *v34; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v36; // x1
  struct UnityEngine_Vector3_StaticFields *v37; // x8
  __int64 v38; // x1
  AuraEffectPosOverwriteEntity_o *ent; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4B0485A & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    sub_1BC3008(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v17);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v18);
    byte_4B0485A = 1;
  }
  ent = 0LL;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, 1, *(const MethodInfo **)&svtId);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    v20 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v20);
    if ( EffectMaster )
    {
      EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                     EffectMaster,
                                                                     effectId,
                                                                     (const MethodInfo_32AF070 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( arg )
          NodeName = (System_String_o *)((__int64 (__fastcall *)(BattleEffectUtility_EffectLoadArgument_o *, System_String_o *, Il2CppMethodPointer))arg->klass->vtable._4_GetParentNodeName.method)(
                                          arg,
                                          NodeName,
                                          arg->klass->vtable._5_GetParentNode.methodPtr);
        if ( !byte_4AFBDB9 )
        {
          sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v23);
          byte_4AFBDB9 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v27 = static_fields->upVector.fields.x;
        v28 = static_fields->upVector.fields.y;
        v29 = static_fields->upVector.fields.z;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__TryGetAuraEffectPosOverwriteEntity(
                                                                       &ent,
                                                                       effectId,
                                                                       svtId,
                                                                       limitCount,
                                                                       arg,
                                                                       v24);
        v30 = (char)EffectMaster;
        if ( ((unsigned __int8)EffectMaster & 1) != 0 )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ent;
          if ( !ent )
            goto LABEL_31;
          NodeName = ent->fields.nodeName;
          *(UnityEngine_Vector3_o *)&v31 = AuraEffectPosOverwriteEntity__GetOffset(ent, 0LL);
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)ent;
          if ( !ent )
            goto LABEL_31;
          x = v31;
          y = v32;
          z = v33;
          Rotation = AuraEffectPosOverwriteEntity__GetRotation(ent, 0LL);
          v27 = Rotation.fields.x;
          v28 = Rotation.fields.y;
          v29 = Rotation.fields.z;
        }
        if ( EffectObject )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                         EffectObject,
                                                                         0LL);
          if ( targetObject )
          {
            v34 = (UnityEngine_Transform_o *)EffectMaster;
            transform = UnityEngine_GameObject__get_transform(targetObject, 0LL);
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                           transform,
                                                                           NodeName,
                                                                           limitCount,
                                                                           v30 & 1,
                                                                           0LL);
            if ( v34 )
            {
              UnityEngine_Transform__set_parent(v34, (UnityEngine_Transform_o *)EffectMaster, 0LL);
              if ( !byte_4AFBDB1 )
              {
                sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v36);
                byte_4AFBDB1 = 1;
              }
              v37 = UnityEngine_Vector3_TypeInfo->static_fields;
              v42.fields.x = x + v37->zeroVector.fields.x;
              v42.fields.y = y + v37->zeroVector.fields.y;
              v42.fields.z = z + v37->zeroVector.fields.z;
              UnityEngine_Transform__set_localPosition(v34, v42, 0LL);
              v43.fields.x = v27;
              v43.fields.y = v28;
              v43.fields.z = v29;
              UnityEngine_Transform__set_eulerAngles(v34, v43, 0LL);
              if ( !byte_4AFBDB6 )
              {
                sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v38);
                byte_4AFBDB6 = 1;
              }
              UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              return EffectObject;
            }
          }
        }
      }
    }
LABEL_31:
    sub_1BC3264(EffectMaster, v22);
  }
  return EffectObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_44805100(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_4B0485C & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    byte_4B0485C = 1;
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

  if ( (byte_4B04857 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility_TypeInfo, method);
    byte_4B04857 = 1;
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  System_String_o *SideEffectPath; // x0
  int32_t v21; // w1
  System_String_o *v22; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  AssetLoader_LoadEndDataHandler_o *v25; // x20

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_4B0485F & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, *(_QWORD *)&effectId);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v9);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1BC3008(&Method_BattleEffectUtility___c__DisplayClass24_0__showSideEffect_b__0__, v11);
    sub_1BC3008(&BattleEffectUtility___c__DisplayClass24_0_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_18652/*"ef_enchant"*/, v13);
    byte_4B0485F = 1;
  }
  v14 = sub_1BC3254(BattleEffectUtility___c__DisplayClass24_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BC3264(v15, v16);
  *(_QWORD *)(v14 + 24) = parent;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 24), (int32_t)parent, v17, v18);
  *(float *)(v14 + 32) = x;
  *(float *)(v14 + 36) = y;
  *(float *)(v14 + 40) = z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v19);
  v21 = StringLiteral_18652/*"ef_enchant"*/;
  v22 = SideEffectPath;
  *(_QWORD *)(v14 + 16) = StringLiteral_18652/*"ef_enchant"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v14 + 16), v21, v23, v24);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v14,
    Method_BattleEffectUtility___c__DisplayClass24_0__showSideEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v22, v25, 1, 0LL);
}


void __fastcall BattleEffectUtility_BuffEffectLoadArgument___ctor(
        BattleEffectUtility_BuffEffectLoadArgument_o *this,
        BattleActorControl_o *bActor,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleServantData_o *battleSvtData; // x8
  struct ChangeModelData_o *ChangeModelData_k__BackingField; // x1

  if ( (byte_4B04875 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, bActor);
    byte_4B04875 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !bActor )
      sub_1BC3264(v5, v6);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)BuffEffectNodeName_k__BackingField, v7, v8);
    battleSvtData = bActor->fields.battleSvtData;
    if ( battleSvtData )
      ChangeModelData_k__BackingField = battleSvtData->fields._ChangeModelData_k__BackingField;
    else
      ChangeModelData_k__BackingField = 0LL;
    this->fields.ChangeModelData = ChangeModelData_k__BackingField;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.ChangeModelData,
      (int32_t)ChangeModelData_k__BackingField,
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


void __fastcall BattleEffectUtility_EffectLoadArgument__AddAuraPosOverwriteTarget(
        BattleEffectUtility_EffectLoadArgument_o *this,
        System_Collections_Generic_List_ValueTuple_int__int___o *targetList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct ChangeModelData_o *ChangeModelData; // x8
  int32_t modelId; // w1
  __int64 v8; // x0
  struct System_ValueTuple_int__int__array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  System_ValueTuple_int__int__o item; // [xsp+8h] [xbp-28h] BYREF
  System_ValueTuple_int__int__o p_item; // 0:x0.8
  System_ValueTuple_int__int__o v14; // 0:x1.8

  if ( (byte_4B04874 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ValueTuple_int__int___Add__, targetList);
    sub_1BC3008(&Method_System_ValueTuple_int__int___ctor__, v5);
    byte_4B04874 = 1;
  }
  ChangeModelData = this->fields.ChangeModelData;
  if ( ChangeModelData )
  {
    modelId = ChangeModelData->fields.modelId;
    p_item = (System_ValueTuple_int__int__o)&item;
    item = 0LL;
    System_ValueTuple_int__int____ctor(
      p_item,
      modelId,
      0,
      (const MethodInfo_39EC364 *)Method_System_ValueTuple_int__int___ctor__);
    if ( !targetList
      || (v14 = item,
          items = targetList->fields._items,
          v10 = Method_System_Collections_Generic_List_ValueTuple_int__int___Add__,
          ++targetList->fields._version,
          !items) )
    {
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1BC3264)(v8, v14);
    }
    size = targetList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_ValueTuple_int__int____AddWithResize(
        targetList,
        v14,
        *(const MethodInfo_364B510 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      targetList->fields._size = size + 1;
      *(System_ValueTuple_int__int__o *)&items->m_Items[size].fields.Item2 = v14;
    }
  }
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
    sub_1BC3264(IsNullOrEmpty, v8);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B04876 & 1) == 0 )
  {
    sub_1BC3008(&BattleEffectUtility___c_TypeInfo, v1);
    byte_4B04876 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BattleEffectUtility___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleEffectUtility___c_TypeInfo->static_fields->__9 = (struct BattleEffectUtility___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleEffectUtility___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleEffectUtility___c___ctor(BattleEffectUtility___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_ParticleSystem__o *__fastcall BattleEffectUtility___c___SetColorToShadowEffectParticles_b__42_1(
        BattleEffectUtility___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B04877 & 1) == 0 )
  {
    this = (BattleEffectUtility___c_o *)sub_1BC3008(
                                          &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76879504,
                                          x);
    byte_4B04877 = 1;
  }
  if ( !x )
    sub_1BC3264(this, x);
  return (System_Collections_Generic_IEnumerable_ParticleSystem__o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       x,
                                                                       1,
                                                                       (const MethodInfo_3056638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76879504);
}


void __fastcall BattleEffectUtility___c__DisplayClass24_0___ctor(
        BattleEffectUtility___c__DisplayClass24_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectUtility___c__DisplayClass24_0___showSideEffect_b__0(
        BattleEffectUtility___c__DisplayClass24_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattleEffectUtility___c__DisplayClass24_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Object_object__50213776; // x20
  BattleEffectUtility___c__DisplayClass24_0_o *v8; // x20
  __int64 v9; // x1

  v4 = this;
  if ( (byte_4B04878 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, data);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (BattleEffectUtility___c__DisplayClass24_0_o *)sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B04878 = 1;
  }
  if ( !data )
    goto LABEL_11;
  Object_object__50213776 = AssetData__GetObject_object__50213776(
                              data,
                              v4->fields.name,
                              (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleEffectUtility___c__DisplayClass24_0_o *)UnityEngine_Object__Instantiate_object_(
                                                          Object_object__50213776,
                                                          (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass24_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_11:
    sub_1BC3264(this, data);
  }
  v8 = this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0LL);
  if ( !byte_4AFBDB1 )
  {
    sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4AFBDB1 = 1;
  }
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v8,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v8, v4->fields.scl, 0LL);
}


void __fastcall BattleEffectUtility___c__DisplayClass33_0___ctor(
        BattleEffectUtility___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectUtility___c__DisplayClass33_0___LoadEffectAssetIfNotYet_b__0(
        BattleEffectUtility___c__DisplayClass33_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BattleEffectUtility___c__DisplayClass33_0___LoadEffectAssetIfNotYet_b__1(
        BattleEffectUtility___c__DisplayClass33_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}