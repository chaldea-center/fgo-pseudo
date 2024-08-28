void __fastcall BattleEffectUtility___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x19
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  struct BattleEffectUtility_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_4A2200E & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v1);
    sub_1B715CC(&string___TypeInfo, v4);
    sub_1B715CC(&StringLiteral_16269/*"_S"*/, v5);
    sub_1B715CC(&StringLiteral_16210/*"_M"*/, v6);
    sub_1B715CC(&StringLiteral_16203/*"_L"*/, v7);
    sub_1B715CC(&StringLiteral_1/*""*/, v8);
    byte_4A2200E = 1;
  }
  v9 = BattleEffectUtility_TypeInfo;
  static_fields = BattleEffectUtility_TypeInfo->static_fields;
  static_fields->SendReportProbability = 1.0;
  *(_QWORD *)&static_fields->battleEffectId = 0LL;
  *(_QWORD *)&static_fields->wkVec.fields.y = 0LL;
  v11 = v9->static_fields;
  v11->auraPosOverwriteMst = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v11->auraPosOverwriteMst, 0, v2, v3);
  v12 = sub_1B71674(string___TypeInfo, 4LL);
  if ( !v12 )
    sub_1B71828(0LL, v13);
  v16 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_9;
  v17 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v12 + 32) = StringLiteral_1/*""*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v12 + 32), v17, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u
    || (v20 = StringLiteral_16269/*"_S"*/,
        *(_QWORD *)(v16 + 40) = StringLiteral_16269/*"_S"*/,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 40), v20, v18, v19),
        *(_DWORD *)(v16 + 24) <= 2u)
    || (v23 = StringLiteral_16210/*"_M"*/,
        *(_QWORD *)(v16 + 48) = StringLiteral_16210/*"_M"*/,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 48), v23, v21, v22),
        *(_DWORD *)(v16 + 24) <= 3u) )
  {
LABEL_9:
    sub_1B71830(v12, v13);
  }
  v26 = StringLiteral_16203/*"_L"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_16203/*"_L"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v16 + 56), v26, v24, v25);
  v27 = BattleEffectUtility_TypeInfo->static_fields;
  v27->scalelist = (struct System_String_array *)v16;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v27->scalelist, v16, v28, v29);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleEffectUtility_c *v4; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v6; // x1

  if ( (byte_4A22005 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__UnionWith__, v3);
    byte_4A22005 = 1;
  }
  v4 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v4);
  if ( !NotPreloadEffectIdHashSet )
    sub_1B71828(0LL, v6);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_3389C24 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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

  if ( (byte_4A22000 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_FunctionMaster___, effectIdList);
    sub_1B715CC(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A22000 = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_1B71828(Instance, v10);
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_FunctionMaster___);
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
                                      (const MethodInfo_30F8760 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
                                      (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
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
              *(const MethodInfo_34B323C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
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
      sub_1B71830(Instance, v10);
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
  UnityEngine_GameObject_o *v8; // x20
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
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_GameObject_o *v22; // x22
  int32_t v23; // w1
  UnityEngine_GameObject_c *klass; // x8
  float v25; // s8
  System_Collections_Generic_List_object__o *v26; // x19
  unsigned __int64 v27; // x26
  System_String_o *v28; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x25
  UnityEngine_GameObject_o *v31; // x24
  UnityEngine_GameObject_o *v32; // x25
  UnityEngine_GameObject_o *v33; // x25
  UnityEngine_GameObject_o *v34; // x25
  int32_t v35; // w2
  int32_t v36; // w3
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  UnityEngine_GameObject_c *v41; // x8
  UnityEngine_GameObject_o *v42; // x21
  unsigned __int64 v43; // x23
  UnityEngine_Object_o *v44; // x22
  int v45; // w8
  UnityEngine_GameObject_o *v46; // x22
  unsigned int v47; // w26
  UnityEngine_GameObject_c *v48; // x8
  UnityEngine_GameObject_o *v49; // x20
  unsigned __int64 v50; // x22
  UnityEngine_Object_o *v51; // x21
  int v52; // w8
  UnityEngine_GameObject_o *v53; // x21
  unsigned int v54; // w25
  UnityEngine_Color_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v57; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = actorObj;
  if ( (byte_4A2200C & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___, isShadow);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_GameObject__Add__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_GameObject__ToArray__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_GameObject___ctor__, v12);
    sub_1B715CC(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v14);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v16);
    sub_1B715CC(&string___TypeInfo, v17);
    sub_1B715CC(&StringLiteral_18929/*"en_waist"*/, v18);
    actorObj = (UnityEngine_GameObject_o *)sub_1B715CC(&StringLiteral_16129/*"_Color"*/, v19);
    byte_4A2200C = 1;
  }
  if ( isShadow )
  {
    actorObj = (UnityEngine_GameObject_o *)sub_1B71674(string___TypeInfo, 1LL);
    if ( !actorObj )
      goto LABEL_78;
    v22 = actorObj;
    if ( !LODWORD(actorObj[1].klass) )
      goto LABEL_79;
    v23 = StringLiteral_18929/*"en_waist"*/;
    actorObj[1].monitor = (void *)StringLiteral_18929/*"en_waist"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&actorObj[1].monitor, v23, v20, v21);
    if ( limitAddEntity )
    {
      actorObj = (UnityEngine_GameObject_o *)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
                                               limitAddEntity,
                                               0LL);
      v22 = actorObj;
      if ( !actorObj )
        goto LABEL_78;
    }
    klass = v22[1].klass;
    v25 = 0.05;
    if ( (int)klass >= 1 )
    {
      v26 = 0LL;
      v27 = 0LL;
      do
      {
        if ( v27 >= (unsigned int)klass )
          goto LABEL_79;
        if ( !v8 )
          goto LABEL_78;
        v28 = (System_String_o *)*((_QWORD *)&v22[1].monitor + v27);
        transform = UnityEngine_GameObject__get_transform(v8, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v28, 0, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actorObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)actorObj & 1) != 0 )
        {
          actorObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !actorObj )
            goto LABEL_78;
          actorObj = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)actorObj, 0, 0LL);
          if ( !actorObj )
            goto LABEL_78;
          v31 = actorObj;
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
          if ( !actorObj )
            goto LABEL_78;
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)actorObj,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v31, 0LL);
          v32 = actorObj;
          if ( !byte_4A1A751 )
          {
            actorObj = (UnityEngine_GameObject_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, isShadow);
            byte_4A1A751 = 1;
          }
          if ( !v32 )
            goto LABEL_78;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)v32,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0LL);
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v31, 0LL);
          v33 = actorObj;
          if ( !byte_4A1A751 )
          {
            actorObj = (UnityEngine_GameObject_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, isShadow);
            byte_4A1A751 = 1;
          }
          if ( !v33 )
            goto LABEL_78;
          UnityEngine_Transform__set_localEulerAngles(
            (UnityEngine_Transform_o *)v33,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0LL);
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v31, 0LL);
          v34 = actorObj;
          if ( !byte_4A1A756 )
          {
            actorObj = (UnityEngine_GameObject_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, isShadow);
            byte_4A1A756 = 1;
          }
          if ( !v34 )
            goto LABEL_78;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v34,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          if ( !v26 )
          {
            v26 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v26,
              (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
            if ( !v26 )
              goto LABEL_78;
          }
          items = v26->fields._items;
          v38 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v26->fields._version;
          if ( !items )
            goto LABEL_78;
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v26,
              (Il2CppObject *)v31,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v26->fields._size = size + 1;
            v40[4] = (Il2CppClass *)v31;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v31, v35, v36);
          }
        }
        LODWORD(klass) = v22[1].klass;
        ++v27;
      }
      while ( (__int64)v27 < (int)klass );
      if ( !isChoco )
        goto LABEL_42;
      goto LABEL_39;
    }
    v26 = 0LL;
    if ( isChoco )
    {
LABEL_39:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__changeChocoSahder(v8, 0LL);
    }
  }
  else
  {
    v26 = 0LL;
    v25 = 1.0;
    if ( isChoco )
      goto LABEL_39;
  }
LABEL_42:
  if ( !v8 )
    goto LABEL_78;
  actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !actorObj )
    goto LABEL_78;
  actorObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object__48572668(
                                           (UnityEngine_Component_o *)actorObj,
                                           (const MethodInfo_2E528FC *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( actorObj )
  {
    v41 = actorObj[1].klass;
    v42 = actorObj;
    if ( (int)v41 >= 1 )
    {
      v43 = 0LL;
      while ( 1 )
      {
        if ( v43 >= (unsigned int)v41 )
          goto LABEL_79;
        v44 = (UnityEngine_Object_o *)*((_QWORD *)&v42[1].monitor + v43);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actorObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
        if ( ((unsigned __int8)actorObj & 1) != 0 )
        {
          if ( !v44 )
            goto LABEL_78;
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v44, 0LL);
          if ( !actorObj )
            goto LABEL_78;
          v45 = (int)actorObj[1].klass;
          v46 = actorObj;
          if ( v45 >= 1 )
            break;
        }
LABEL_58:
        LODWORD(v41) = v42[1].klass;
        if ( (__int64)++v43 >= (int)v41 )
          goto LABEL_59;
      }
      v47 = 0;
      while ( v47 < v45 )
      {
        actorObj = (UnityEngine_GameObject_o *)*((_QWORD *)&v46[1].monitor + (int)v47);
        if ( !actorObj )
          goto LABEL_78;
        v56.fields.a = 1.0;
        v56.fields.r = v25;
        v56.fields.g = v25;
        v56.fields.b = v25;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)actorObj,
          (System_String_o *)StringLiteral_16129/*"_Color"*/,
          v56,
          0LL);
        v45 = (int)v46[1].klass;
        if ( (int)++v47 >= v45 )
          goto LABEL_58;
      }
LABEL_79:
      sub_1B71830(actorObj, isShadow);
    }
  }
LABEL_59:
  actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !actorObj )
LABEL_78:
    sub_1B71828(actorObj, isShadow);
  actorObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object__48572668(
                                           (UnityEngine_Component_o *)actorObj,
                                           (const MethodInfo_2E528FC *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( actorObj )
  {
    v48 = actorObj[1].klass;
    v49 = actorObj;
    if ( (int)v48 >= 1 )
    {
      v50 = 0LL;
      while ( 1 )
      {
        if ( v50 >= (unsigned int)v48 )
          goto LABEL_79;
        v51 = (UnityEngine_Object_o *)*((_QWORD *)&v49[1].monitor + v50);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actorObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
        if ( ((unsigned __int8)actorObj & 1) != 0 )
        {
          if ( !v51 )
            goto LABEL_78;
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v51, 0LL);
          if ( !actorObj )
            goto LABEL_78;
          v52 = (int)actorObj[1].klass;
          v53 = actorObj;
          if ( v52 >= 1 )
            break;
        }
LABEL_74:
        LODWORD(v48) = v49[1].klass;
        if ( (__int64)++v50 >= (int)v48 )
          goto LABEL_75;
      }
      v54 = 0;
      while ( v54 < v52 )
      {
        actorObj = (UnityEngine_GameObject_o *)*((_QWORD *)&v53[1].monitor + (int)v54);
        if ( !actorObj )
          goto LABEL_78;
        v57.fields.a = 1.0;
        v57.fields.r = v25;
        v57.fields.g = v25;
        v57.fields.b = v25;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)actorObj,
          (System_String_o *)StringLiteral_16129/*"_Color"*/,
          v57,
          0LL);
        v52 = (int)v53[1].klass;
        if ( (int)++v54 >= v52 )
          goto LABEL_74;
      }
      goto LABEL_79;
    }
  }
LABEL_75:
  if ( v26 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                             v26,
                                             (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
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

  if ( (byte_4A22006 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v1);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__Clear__, v2);
    byte_4A22006 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_1B71828(0LL, v5);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_33890A4 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  __int64 v7; // x1
  int32_t IndexOf_61538844; // w0
  int32_t v9; // w22
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  System_String_o **v18; // x0
  System_String_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  v6 = baseName;
  if ( (byte_4A22002 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_1123/*"/"*/, path);
    baseName = (System_String_o *)sub_1B715CC(&StringLiteral_5795/*"Effect/BattleCommon/{0}"*/, v7);
    byte_4A22002 = 1;
  }
  if ( !v6 )
    sub_1B71828(baseName, path);
  IndexOf_61538844 = System_String__LastIndexOf_61538844(v6, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL);
  if ( IndexOf_61538844 == -1 )
  {
    v19 = System_String__Format((System_String_o *)StringLiteral_5795/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v19;
    sub_1B71570((ServantStatusBattleListViewItem_o *)path, (int32_t)v19, v20, v21);
    v18 = name;
    v17 = (int)v6;
    *name = v6;
  }
  else
  {
    v9 = IndexOf_61538844;
    v10 = (Il2CppObject *)System_String__Substring_61524508(v6, 0, IndexOf_61538844, 0LL);
    v11 = System_String__Format((System_String_o *)StringLiteral_5795/*"Effect/BattleCommon/{0}"*/, v10, 0LL);
    *path = v11;
    sub_1B71570((ServantStatusBattleListViewItem_o *)path, (int32_t)v11, v12, v13);
    v14 = System_String__Substring(v6, v9 + 1, 0LL);
    v17 = (int)v14;
    *name = v14;
    v18 = name;
  }
  sub_1B71570((ServantStatusBattleListViewItem_o *)v18, v17, v15, v16);
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
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4A22001 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, method);
    sub_1B715CC(&Method_DataManager_GetMasterData_EffectMaster___, v3);
    sub_1B715CC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__ToArray__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v8);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v9);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A22001 = 1;
  }
  path = 0LL;
  name = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EffectMaster___);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_22;
  v15 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v15 )
        sub_1B71830(Instance, v12);
      if ( !MasterData_object )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   effectIdList->m_Items[v16 + 1],
                   (const MethodInfo_30F8760 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
                                     (const MethodInfo_34D05F0 *)Method_System_Collections_Generic_List_string__Contains__);
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
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v12;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v24 + 4), (int32_t)v12, v19, v20);
          }
        }
      }
      LODWORD(v15) = effectIdList->max_length;
      if ( (__int64)++v16 >= (int)v15 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B71828(Instance, v12);
  }
LABEL_20:
  if ( !v14 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v14,
                                  (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A21FFD & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, method);
    sub_1B715CC(&StringLiteral_5829/*"Effect/SideEffect/"*/, v6);
    byte_4A21FFD = 1;
  }
  v9 = effectId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_5829/*"Effect/SideEffect/"*/, v7, 0LL);
}


bool __fastcall BattleEffectUtility__IsEffectNotLoadedYet(
        int32_t effectId,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  BattleEffectUtility_c *v8; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v12; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A22004 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, effectPath);
    sub_1B715CC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v6);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    byte_4A22004 = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)effectPath, 0, (int32_t)method, v3);
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
             (const MethodInfo_30F8760 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_17:
    sub_1B71828(EffectMaster, v10);
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
  int32_t v23; // w3
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

  if ( (byte_4A22007 & 1) == 0 )
  {
    sub_1B715CC(&AssetManager_TypeInfo, finishCallback);
    sub_1B715CC(&BattleDataDefine_TypeInfo, v7);
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_1B715CC(&int_TypeInfo, v11);
    sub_1B715CC(&AssetLoader_LoadEndDataHandler_TypeInfo, v12);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v13);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v14);
    sub_1B715CC(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__, v15);
    sub_1B715CC(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__, v16);
    sub_1B715CC(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo, v17);
    sub_1B715CC(&StringLiteral_22052/*"non-loaded asset was detected. effectId = {0}"*/, v18);
    byte_4A22007 = 1;
  }
  effectPath = 0LL;
  v19 = sub_1B71818(BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_37;
  *(_QWORD *)(v19 + 16) = finishCallback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)finishCallback, v22, v23);
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
          (const MethodInfo_3389104 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
            (const MethodInfo_3389104 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
        v33 = System_String__Format((System_String_o *)StringLiteral_22052/*"non-loaded asset was detected. effectId = {0}"*/, v32, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        CrashReporter__SendReport_30288108(SentEffectIdHashSet, v33, 0LL, 0LL, 0LL);
        v34 = BattleEffectUtility_TypeInfo;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v34);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_3389C14 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
      v39 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v39,
        (Il2CppObject *)v19,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
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
    sub_1B71828(SentEffectIdHashSet, v21);
  }
  v40 = effectPath;
  v41 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v41,
    (Il2CppObject *)v19,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
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

  if ( (byte_4A21FFC & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_EffectMaster___, *(_QWORD *)&effectId);
    sub_1B715CC(&DataManager_TypeInfo, v7);
    sub_1B715CC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v8);
    byte_4A21FFC = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          effectId,
          (const MethodInfo_30F87B4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
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
    sub_1B71828(Master_object, v10);
  }
  UnityEngine_Transform__set_parent(v12, (UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v14);
    byte_4A1A751 = 1;
  }
  UnityEngine_Transform__set_localPosition(v12, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A1A759 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4A1A759 = 1;
  }
  UnityEngine_Transform__set_eulerAngles(v12, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  if ( !byte_4A1A756 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v16);
    byte_4A1A756 = 1;
  }
  UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleEffectUtility__TryGetBattleCommonEffectPath(
        System_String_o **effectPath,
        int32_t effectId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  BattleEffectUtility_c *v7; // x0
  EffectMaster_o *EffectMaster; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A22003 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    sub_1B715CC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v6);
    byte_4A22003 = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)effectPath, 0, (int32_t)method, v3);
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
                                     (const MethodInfo_30F87B4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_1B71828(EffectMaster, v9);
  if ( HIDWORD(entity[1].klass) == 5 )
  {
    monitor = (System_String_o *)entity[2].monitor;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v10);
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
  EffectEntity_o *Entity; // x19
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x21
  System_String_o *v32; // x0
  UnityEngine_Object_o *v33; // x0
  Il2CppObject *v34; // x22
  UnityEngine_Object_c *klass; // x8
  int32_t v36; // w23
  int32_t gc_desc; // w22
  int32_t LimitCount; // w0
  System_String_o *v39; // x24
  int32_t v40; // w25
  Il2CppObject *Manager__loadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
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

  if ( (byte_4A22009 & 1) == 0 )
  {
    sub_1B715CC(&Method_AssetData_GetObject_GameObject____75846976, procObject);
    sub_1B715CC(&AssetManager_TypeInfo, v7);
    sub_1B715CC(&Method_BattleEffectUtility_getEffectObject__, v8);
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v9);
    sub_1B715CC(&Method_DataManager_GetMasterData_EffectMaster___, v10);
    sub_1B715CC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v11);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v12);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, v13);
    sub_1B715CC(&UnityEngine_GameObject_TypeInfo, v14);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__Add__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__Contains__, v16);
    sub_1B715CC(&int_TypeInfo, v17);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v18);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v19);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v20);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v21);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B715CC(&StringLiteral_18818/*"effect load failed. effectId = {0}"*/, v23);
    sub_1B715CC(&StringLiteral_18819/*"effect/"*/, v24);
    sub_1B715CC(&StringLiteral_3198/*"Battle/Effect/"*/, v25);
    sub_1B715CC(&StringLiteral_3190/*"Battle"*/, v26);
    byte_4A22009 = 1;
  }
  name = 0LL;
  path = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_86;
  Entity = (EffectEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               effectId,
                               (const MethodInfo_30F8760 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
                                  (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v31 = (UnityEngine_Object_o *)Instance;
  }
  if ( !Entity )
    goto LABEL_86;
  switch ( Entity->fields.folderType )
  {
    case 1:
      v32 = System_String__Concat_61505504((System_String_o *)StringLiteral_18819/*"effect/"*/, Entity->fields.name, 0LL);
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
      v36 = (int32_t)klass[1].vtable._1_Finalize.method;
      gc_desc = (int32_t)klass[2]._1.gc_desc;
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v31, 0LL);
      v39 = Entity->fields.name;
      v40 = LimitCount;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                           v36,
                                                           v40,
                                                           v39,
                                                           gc_desc,
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
      v48 = System_String__Concat_61505504(v44, scalelist->m_Items[WeaponScale], 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                           v48,
                                                           WeaponGroup,
                                                           v45,
                                                           0LL);
LABEL_47:
      v34 = Manager__loadNoblePhantasmEffect;
LABEL_48:
      if ( EffectEntity__isSe(Entity, 0LL) && isPlaySe )
      {
        v55 = Method_BattleEffectUtility_getEffectObject__;
        if ( (*((_BYTE *)Method_BattleEffectUtility_getEffectObject__ + 83) & 2) != 0 )
          v55 = (_QWORD *)sub_1B715E4(Method_BattleEffectUtility_getEffectObject__);
        v56 = (System_Reflection_MethodBase_o *)sub_1B715B0(v55, v55[4]);
        OverwriteAssetSoundName__PlaySe_38326716(
          v56,
          (System_String_o *)StringLiteral_3190/*"Battle"*/,
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
                                      (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48936380(
                                      (UnityEngine_GameObject_o *)v63,
                                      (const MethodInfo_2EAB5BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
              sub_1B71830(Instance, v28);
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
        sub_1B71828(Instance, v28);
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
             (const MethodInfo_3389104 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
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
        v65 = System_String__Format((System_String_o *)StringLiteral_18818/*"effect load failed. effectId = {0}"*/, v64, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_30288108((CrashReporter_o *)Instance, v65, 0LL, 0LL, 0LL);
          v66 = BattleEffectUtility_TypeInfo;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v66);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              Entity->fields.id,
              (const MethodInfo_3389C14 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
      v51 = System_String__Concat_61505504((System_String_o *)StringLiteral_3198/*"Battle/Effect/"*/, v50, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v51, 0LL);
      if ( !Instance )
        goto LABEL_86;
      Manager__loadNoblePhantasmEffect = AssetData__GetObject_object__48486748(
                                           (AssetData_o *)Instance,
                                           Entity->fields.name,
                                           (const MethodInfo_2E3D95C *)Method_AssetData_GetObject_GameObject____75846976);
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
      Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadBattleCommonEffect(v53, v54, 0LL);
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

  if ( (byte_4A22008 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, procObject);
    sub_1B715CC(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___, v9);
    sub_1B715CC(&UnityEngine_GameObject_TypeInfo, v10);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B715CC(&StringLiteral_5789/*"Effect Default"*/, v12);
    byte_4A22008 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, isPlaySe, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    EffectObject = (UnityEngine_GameObject_o *)sub_1B71818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5789/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v14 = UnityEngine_GameObject__AddComponent_object_(
                  EffectObject,
                  (const MethodInfo_2EAA8B0 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_1B71828(v14, v15);
    }
    *(float *)&v14[2].klass = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_42485192(
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

  if ( (byte_4A2200B & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, name);
    sub_1B715CC(&UnityEngine_GameObject_TypeInfo, v7);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_3194/*"Battle/CommonEffects/"*/, v9);
    sub_1B715CC(&StringLiteral_18819/*"effect/"*/, v10);
    byte_4A2200B = 1;
  }
  if ( folder == 2 )
  {
    v11 = &StringLiteral_18819/*"effect/"*/;
LABEL_8:
    v12 = System_String__Concat_61505504((System_String_o *)*v11, name, 0LL);
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
    v11 = &StringLiteral_3194/*"Battle/CommonEffects/"*/;
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
                                                 (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_1B71828(result, v14);
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

  if ( (byte_4A2200A & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_1B715CC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A2200A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     effectId,
                     (const MethodInfo_30F8760 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B71828(Instance, v6);
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

  if ( (byte_4A2200D & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_EffectMaster___, method);
    sub_1B715CC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B715CC(&StringLiteral_18923/*"en_body"*/, v5);
    byte_4A2200D = 1;
  }
  v6 = (System_String_o *)StringLiteral_18923/*"en_body"*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_30F87B4 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v6;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B71828(Instance, v8);
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

  if ( (byte_4A21FF8 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_3198/*"Battle/Effect/"*/, v2);
    byte_4A21FF8 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v3 = BattleEffectUtility_TypeInfo;
  }
  v4 = System_Int32__ToString((unsigned int)v3->static_fields + 24, 0LL);
  return System_String__Concat_61505504((System_String_o *)StringLiteral_3198/*"Battle/Effect/"*/, v4, 0LL);
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
  int32_t v8; // w3
  BattleEffectUtility_c *v9; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4A21FF9 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v1);
    sub_1B715CC(&Method_DataManager_GetMaster_EffectMaster___, v2);
    sub_1B715CC(&DataManager_TypeInfo, v3);
    byte_4A21FF9 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EffectMaster___);
    v9 = BattleEffectUtility_TypeInfo;
    effectMst = (EffectMaster_o *)Master_object;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v9 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->effectMst = effectMst;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->effectMst, (int32_t)effectMst, v7, v8);
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
  int32_t v7; // w3
  BattleEffectUtility_c *v8; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4A21FF6 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v1);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int___ctor__, v2);
    sub_1B715CC(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4A21FF6 = 1;
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
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1B71818(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_3388A10 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v8 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v8 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&static_fields->notPreloadEffectIdHashSet,
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
  int32_t v7; // w3
  BattleEffectUtility_c *v8; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4A21FF5 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v1);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int___ctor__, v2);
    sub_1B715CC(&System_Collections_Generic_HashSet_int__TypeInfo, v3);
    byte_4A21FF5 = 1;
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
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1B71818(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_3388A10 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v8 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v8 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v8->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&static_fields->sentEffectIdHashSet,
      (int32_t)sentEffectIdHashSet,
      v6,
      v7);
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

  if ( (byte_4A21FFF & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v1);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v2);
    sub_1B715CC(&Method_UnityEngine_Resources_Load_GameObject___, v3);
    sub_1B715CC(&StringLiteral_18853/*"effect/ef_sideeffect01"*/, v4);
    byte_4A21FFF = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_18853/*"effect/ef_sideeffect01"*/,
             (const MethodInfo_2EEEB78 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       object,
                                       (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  int32_t v32; // w2
  int32_t v33; // w3
  BattleEffectUtility_c *v34; // x8
  Il2CppObject *v35; // x25
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  System_Collections_ObjectModel_Collection_T__o *klass; // x22
  struct UnityEngine_Vector3_StaticFields *v39; // x8
  float v40; // s9
  float v41; // s11
  float v42; // s10
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v44; // x1
  System_Collections_Generic_IEnumerator_T__o *v45; // x22
  System_String_o *v46; // x25
  float v47; // s10
  float v48; // s11
  float v49; // s9
  System_Collections_Generic_IEnumerator_T__c *v50; // x8
  __int64 v51; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 methodPtr_low; // x10
  AuraEffectPosOverwriteEntity_o *v60; // x27
  System_Collections_Generic_IEnumerator_T__c *v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  UnityEngine_Transform_o *v65; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v67; // x1
  struct UnityEngine_Vector3_StaticFields *v68; // x8
  __int64 v69; // x1
  UnityEngine_GameObject_o *v71; // [xsp+18h] [xbp-B8h]
  UnityEngine_Vector3_o Rotation; // [xsp+20h] [xbp-B0h]
  char v73; // [xsp+2Ch] [xbp-A4h]
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4A21FFA & 1) == 0 )
  {
    sub_1B715CC(&AuraEffectPosOverwriteEntity_TypeInfo, *(_QWORD *)&effectId);
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v17);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v18);
    sub_1B715CC(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___, v19);
    sub_1B715CC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v20);
    sub_1B715CC(&System_IDisposable_TypeInfo, v21);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v22);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v23);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v24);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    byte_4A21FFA = 1;
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
                                                                     (const MethodInfo_30F8760 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !EffectMaster )
            goto LABEL_65;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)EffectMaster,
                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v34 = BattleEffectUtility_TypeInfo;
          v35 = MasterData_object;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
            v34 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v34->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v35;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->auraPosOverwriteMst, (int32_t)v35, v32, v33);
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
          if ( !byte_4A1A759 )
          {
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v29);
            byte_4A1A759 = 1;
          }
          v71 = targetObject;
          if ( klass )
          {
            v39 = UnityEngine_Vector3_TypeInfo->static_fields;
            v41 = v39->upVector.fields.y;
            v40 = v39->upVector.fields.z;
            v42 = v39->upVector.fields.x;
            Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                           klass,
                           (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
            v73 = 0;
            v45 = Enumerator;
            Rotation.fields.y = v41;
            Rotation.fields.z = v40;
            Rotation.fields.x = v42;
            v46 = NodeName;
            v47 = x;
            v48 = y;
            v49 = z;
            while ( 1 )
            {
              if ( !v45 )
                sub_1B71828(Enumerator, v44);
              v50 = v45->klass;
              v51 = *(unsigned __int16 *)(&v45->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v45->klass->_2.bitflags2 + 3) )
              {
                p_offset = &v50->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v51;
                  p_offset += 4;
                  if ( !v51 )
                    goto LABEL_31;
                }
                p_method = (__int64)&v50->vtable[*p_offset].method;
              }
              else
              {
LABEL_31:
                p_method = sub_1BC35AC(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      v45,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v54 = v45->klass;
              v55 = *(unsigned __int16 *)(&v45->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v45->klass->_2.bitflags2 + 3) )
              {
                v56 = &v54->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v56 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                {
                  --v55;
                  v56 += 4;
                  if ( !v55 )
                    goto LABEL_38;
                }
                v57 = (__int64)&v54->vtable[*v56].method;
              }
              else
              {
LABEL_38:
                v57 = sub_1BC35AC(v45, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
              }
              v58 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v57)(
                      v45,
                      *(_QWORD *)(v57 + 8));
              if ( v58
                && (methodPtr_low = LOBYTE(AuraEffectPosOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr),
                    *(unsigned __int8 *)(*(_QWORD *)v58 + 304LL) >= (unsigned int)methodPtr_low) )
              {
                if ( *(AuraEffectPosOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v58 + 200LL) + 8 * methodPtr_low - 8) == AuraEffectPosOverwriteEntity_TypeInfo )
                  v60 = (AuraEffectPosOverwriteEntity_o *)v58;
                else
                  v60 = 0LL;
              }
              else
              {
                v60 = 0LL;
              }
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
                                                                            svtId,
                                                                            limitCount,
                                                                            effectId,
                                                                            v60,
                                                                            0LL);
              if ( ((unsigned __int8)Enumerator & 1) != 0 )
              {
                if ( !v60 )
                  sub_1B71828(Enumerator, v44);
                v46 = v60->fields.nodeName;
                v74 = AuraEffectPosOverwriteEntity__GetOffset(v60, 0LL);
                v47 = v74.fields.x;
                v48 = v74.fields.y;
                v49 = v74.fields.z;
                v73 = 1;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v60, 0LL);
              }
            }
            v61 = v45->klass;
            v62 = *(unsigned __int16 *)(&v45->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v45->klass->_2.bitflags2 + 3) )
            {
              v63 = &v61->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
              {
                --v62;
                v63 += 4;
                if ( !v62 )
                  goto LABEL_53;
              }
              v64 = (__int64)&v61->vtable[*v63].method;
            }
            else
            {
LABEL_53:
              v64 = sub_1BC35AC(v45, System_IDisposable_TypeInfo, 0LL);
            }
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v64)(
                                                                           v45,
                                                                           *(_QWORD *)(v64 + 8));
            if ( EffectObject )
            {
              EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                             EffectObject,
                                                                             0LL);
              if ( v71 )
              {
                v65 = (UnityEngine_Transform_o *)EffectMaster;
                transform = UnityEngine_GameObject__get_transform(v71, 0LL);
                EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                               transform,
                                                                               v46,
                                                                               limitCount,
                                                                               v73 & 1,
                                                                               0LL);
                if ( v65 )
                {
                  UnityEngine_Transform__set_parent(v65, (UnityEngine_Transform_o *)EffectMaster, 0LL);
                  if ( !byte_4A1A751 )
                  {
                    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v67);
                    byte_4A1A751 = 1;
                  }
                  v68 = UnityEngine_Vector3_TypeInfo->static_fields;
                  v75.fields.x = v47 + v68->zeroVector.fields.x;
                  v75.fields.y = v48 + v68->zeroVector.fields.y;
                  v75.fields.z = v49 + v68->zeroVector.fields.z;
                  UnityEngine_Transform__set_localPosition(v65, v75, 0LL);
                  UnityEngine_Transform__set_eulerAngles(v65, Rotation, 0LL);
                  if ( !byte_4A1A756 )
                  {
                    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v69);
                    byte_4A1A756 = 1;
                  }
                  UnityEngine_Transform__set_localScale(
                    v65,
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
    sub_1B71828(EffectMaster, v29);
  }
  return EffectObject;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_42480336(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_4A21FFB & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, *(_QWORD *)&effectId);
    byte_4A21FFB = 1;
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

  if ( (byte_4A21FF7 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, method);
    byte_4A21FF7 = 1;
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
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  System_String_o *SideEffectPath; // x0
  int32_t v21; // w1
  System_String_o *v22; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  AssetLoader_LoadEndDataHandler_o *v25; // x20

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_4A21FFE & 1) == 0 )
  {
    sub_1B715CC(&AssetManager_TypeInfo, *(_QWORD *)&effectId);
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v9);
    sub_1B715CC(&AssetLoader_LoadEndDataHandler_TypeInfo, v10);
    sub_1B715CC(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__, v11);
    sub_1B715CC(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo, v12);
    sub_1B715CC(&StringLiteral_18777/*"ef_enchant"*/, v13);
    byte_4A21FFE = 1;
  }
  v14 = sub_1B71818(BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1B71828(v15, v16);
  *(_QWORD *)(v14 + 24) = parent;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)parent, v17, v18);
  *(float *)(v14 + 32) = x;
  *(float *)(v14 + 36) = y;
  *(float *)(v14 + 40) = z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v19);
  v21 = StringLiteral_18777/*"ef_enchant"*/;
  v22 = SideEffectPath;
  *(_QWORD *)(v14 + 16) = StringLiteral_18777/*"ef_enchant"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v14 + 16), v21, v23, v24);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1B71818(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v14,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
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
  int32_t v8; // w3
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x1

  if ( (byte_4A2200F & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, bActor);
    byte_4A2200F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !bActor )
      sub_1B71828(v5, v6);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)BuffEffectNodeName_k__BackingField, v7, v8);
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
    sub_1B71828(IsNullOrEmpty, v8);
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
  Il2CppObject *Object_object__48486748; // x20
  BattleEffectUtility___c__DisplayClass23_0_o *v8; // x20
  __int64 v9; // x1

  v4 = this;
  if ( (byte_4A22010 & 1) == 0 )
  {
    sub_1B715CC(&Method_AssetData_GetObject_GameObject____75846976, data);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (BattleEffectUtility___c__DisplayClass23_0_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v6);
    byte_4A22010 = 1;
  }
  if ( !data )
    goto LABEL_11;
  Object_object__48486748 = AssetData__GetObject_object__48486748(
                              data,
                              v4->fields.name,
                              (const MethodInfo_2E3D95C *)Method_AssetData_GetObject_GameObject____75846976);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object_(
                                                          Object_object__48486748,
                                                          (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_11:
    sub_1B71828(this, data);
  }
  v8 = this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0LL);
  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4A1A751 = 1;
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