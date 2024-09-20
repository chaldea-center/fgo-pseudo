void __fastcall BattleEffectUtility___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  BattleEffectUtility_c *v3; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x9
  struct BattleEffectUtility_StaticFields *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  struct BattleEffectUtility_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_4A5D6BD & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_16319/*"_S"*/);
    sub_1B885B0(&StringLiteral_16260/*"_M"*/);
    sub_1B885B0(&StringLiteral_16253/*"_L"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D6BD = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  static_fields = BattleEffectUtility_TypeInfo->static_fields;
  static_fields->SendReportProbability = 1.0;
  *(_QWORD *)&static_fields->battleEffectId = 0LL;
  *(_QWORD *)&static_fields->wkVec.fields.y = 0LL;
  v5 = v3->static_fields;
  v5->auraPosOverwriteMst = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->auraPosOverwriteMst, 0, v1, v2);
  v6 = sub_1B88658(string___TypeInfo, 4LL);
  if ( !v6 )
    sub_1B8880C(0LL, v7);
  v10 = v6;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_9;
  v11 = (int)StringLiteral_1/*""*/;
  *(_QWORD *)(v6 + 32) = StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 32), v11, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u
    || (v14 = StringLiteral_16319/*"_S"*/,
        *(_QWORD *)(v10 + 40) = StringLiteral_16319/*"_S"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 40), v14, v12, v13),
        *(_DWORD *)(v10 + 24) <= 2u)
    || (v17 = StringLiteral_16260/*"_M"*/,
        *(_QWORD *)(v10 + 48) = StringLiteral_16260/*"_M"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 48), v17, v15, v16),
        *(_DWORD *)(v10 + 24) <= 3u) )
  {
LABEL_9:
    sub_1B88814(v6, v7);
  }
  v20 = StringLiteral_16253/*"_L"*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_16253/*"_L"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 56), v20, v18, v19);
  v21 = BattleEffectUtility_TypeInfo->static_fields;
  v21->scalelist = (struct System_String_array *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->scalelist, v10, v22, v23);
}


void __fastcall BattleEffectUtility__AddNotPreloadEffectId(System_Int32_array *effectIdList, const MethodInfo *method)
{
  BattleEffectUtility_c *v3; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v5; // x1

  if ( (byte_4A5D6B4 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4A5D6B4 = 1;
  }
  v3 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v3);
  if ( !NotPreloadEffectIdHashSet )
    sub_1B8880C(0LL, v5);
  System_Collections_Generic_HashSet_int___UnionWith(
    NotPreloadEffectIdHashSet,
    (System_Collections_Generic_IEnumerable_T__o *)effectIdList,
    (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
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

  if ( (byte_4A5D6AF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D6AF = 1;
  }
  if ( funcIds )
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
LABEL_24:
      sub_1B8880C(Instance, v6);
    Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                  Instance,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___);
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
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
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
                                      (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
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
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
      sub_1B88814(Instance, v6);
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
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_GameObject_o *v11; // x22
  int32_t v12; // w1
  UnityEngine_GameObject_c *klass; // x8
  float v14; // s8
  System_Collections_Generic_List_object__o *v15; // x19
  unsigned __int64 v16; // x26
  System_String_o *v17; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x25
  UnityEngine_GameObject_o *v20; // x24
  UnityEngine_GameObject_o *v21; // x25
  UnityEngine_GameObject_o *v22; // x25
  UnityEngine_GameObject_o *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  UnityEngine_GameObject_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x21
  unsigned __int64 v32; // x23
  UnityEngine_Object_o *v33; // x22
  int v34; // w8
  UnityEngine_GameObject_o *v35; // x22
  unsigned int v36; // w26
  UnityEngine_GameObject_c *v37; // x8
  UnityEngine_GameObject_o *v38; // x20
  unsigned __int64 v39; // x22
  UnityEngine_Object_o *v40; // x21
  int v41; // w8
  UnityEngine_GameObject_o *v42; // x21
  unsigned int v43; // w25
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = actorObj;
  if ( (byte_4A5D6BB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_18980/*"en_waist"*/);
    actorObj = (UnityEngine_GameObject_o *)sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    byte_4A5D6BB = 1;
  }
  if ( isShadow )
  {
    actorObj = (UnityEngine_GameObject_o *)sub_1B88658(string___TypeInfo, 1LL);
    if ( !actorObj )
      goto LABEL_78;
    v11 = actorObj;
    if ( !LODWORD(actorObj[1].klass) )
      goto LABEL_79;
    v12 = StringLiteral_18980/*"en_waist"*/;
    actorObj[1].monitor = (void *)StringLiteral_18980/*"en_waist"*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&actorObj[1].monitor, v12, v9, v10);
    if ( limitAddEntity )
    {
      actorObj = (UnityEngine_GameObject_o *)ServantLimitAddEntity__GetOverwriteShadowServantEffectNodes(
                                               limitAddEntity,
                                               0LL);
      v11 = actorObj;
      if ( !actorObj )
        goto LABEL_78;
    }
    klass = v11[1].klass;
    v14 = 0.05;
    if ( (int)klass >= 1 )
    {
      v15 = 0LL;
      v16 = 0LL;
      do
      {
        if ( v16 >= (unsigned int)klass )
          goto LABEL_79;
        if ( !v8 )
          goto LABEL_78;
        v17 = (System_String_o *)*((_QWORD *)&v11[1].monitor + v16);
        transform = UnityEngine_GameObject__get_transform(v8, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(transform, v17, 0, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actorObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)actorObj & 1) != 0 )
        {
          actorObj = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
          if ( !actorObj )
            goto LABEL_78;
          actorObj = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)actorObj, 0, 0LL);
          if ( !actorObj )
            goto LABEL_78;
          v20 = actorObj;
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObj, 0LL);
          if ( !actorObj )
            goto LABEL_78;
          UnityEngine_Transform__set_parent(
            (UnityEngine_Transform_o *)actorObj,
            (UnityEngine_Transform_o *)NodeFromName,
            0LL);
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
          v21 = actorObj;
          if ( !byte_4A55CE1 )
          {
            actorObj = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( !v21 )
            goto LABEL_78;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)v21,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0LL);
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
          v22 = actorObj;
          if ( !byte_4A55CE1 )
          {
            actorObj = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( !v22 )
            goto LABEL_78;
          UnityEngine_Transform__set_localEulerAngles(
            (UnityEngine_Transform_o *)v22,
            UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
            0LL);
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v20, 0LL);
          v23 = actorObj;
          if ( !byte_4A55CE6 )
          {
            actorObj = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE6 = 1;
          }
          if ( !v23 )
            goto LABEL_78;
          UnityEngine_Transform__set_localScale(
            (UnityEngine_Transform_o *)v23,
            UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
            0LL);
          if ( !v15 )
          {
            v15 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v15,
              (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            if ( !v15 )
              goto LABEL_78;
          }
          items = v15->fields._items;
          v27 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v15->fields._version;
          if ( !items )
            goto LABEL_78;
          size = v15->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v15,
              (Il2CppObject *)v20,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &items->obj.klass + size;
            v15->fields._size = size + 1;
            v29[4] = (Il2CppClass *)v20;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v20, v24, v25);
          }
        }
        LODWORD(klass) = v11[1].klass;
        ++v16;
      }
      while ( (__int64)v16 < (int)klass );
      if ( !isChoco )
        goto LABEL_42;
      goto LABEL_39;
    }
    v15 = 0LL;
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
    v15 = 0LL;
    v14 = 1.0;
    if ( isChoco )
      goto LABEL_39;
  }
LABEL_42:
  if ( !v8 )
    goto LABEL_78;
  actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !actorObj )
    goto LABEL_78;
  actorObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object__48721436(
                                           (UnityEngine_Component_o *)actorObj,
                                           (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( actorObj )
  {
    v30 = actorObj[1].klass;
    v31 = actorObj;
    if ( (int)v30 >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)v30 )
          goto LABEL_79;
        v33 = (UnityEngine_Object_o *)*((_QWORD *)&v31[1].monitor + v32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actorObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
        if ( ((unsigned __int8)actorObj & 1) != 0 )
        {
          if ( !v33 )
            goto LABEL_78;
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v33, 0LL);
          if ( !actorObj )
            goto LABEL_78;
          v34 = (int)actorObj[1].klass;
          v35 = actorObj;
          if ( v34 >= 1 )
            break;
        }
LABEL_58:
        LODWORD(v30) = v31[1].klass;
        if ( (__int64)++v32 >= (int)v30 )
          goto LABEL_59;
      }
      v36 = 0;
      while ( v36 < v34 )
      {
        actorObj = (UnityEngine_GameObject_o *)*((_QWORD *)&v35[1].monitor + (int)v36);
        if ( !actorObj )
          goto LABEL_78;
        v45.fields.a = 1.0;
        v45.fields.r = v14;
        v45.fields.g = v14;
        v45.fields.b = v14;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)actorObj,
          (System_String_o *)StringLiteral_16179/*"_Color"*/,
          v45,
          0LL);
        v34 = (int)v35[1].klass;
        if ( (int)++v36 >= v34 )
          goto LABEL_58;
      }
LABEL_79:
      sub_1B88814(actorObj, isShadow);
    }
  }
LABEL_59:
  actorObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v8, 0LL);
  if ( !actorObj )
LABEL_78:
    sub_1B8880C(actorObj, isShadow);
  actorObj = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponentsInChildren_object__48721436(
                                           (UnityEngine_Component_o *)actorObj,
                                           (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_MeshRenderer___);
  if ( actorObj )
  {
    v37 = actorObj[1].klass;
    v38 = actorObj;
    if ( (int)v37 >= 1 )
    {
      v39 = 0LL;
      while ( 1 )
      {
        if ( v39 >= (unsigned int)v37 )
          goto LABEL_79;
        v40 = (UnityEngine_Object_o *)*((_QWORD *)&v38[1].monitor + v39);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        actorObj = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
        if ( ((unsigned __int8)actorObj & 1) != 0 )
        {
          if ( !v40 )
            goto LABEL_78;
          actorObj = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)v40, 0LL);
          if ( !actorObj )
            goto LABEL_78;
          v41 = (int)actorObj[1].klass;
          v42 = actorObj;
          if ( v41 >= 1 )
            break;
        }
LABEL_74:
        LODWORD(v37) = v38[1].klass;
        if ( (__int64)++v39 >= (int)v37 )
          goto LABEL_75;
      }
      v43 = 0;
      while ( v43 < v41 )
      {
        actorObj = (UnityEngine_GameObject_o *)*((_QWORD *)&v42[1].monitor + (int)v43);
        if ( !actorObj )
          goto LABEL_78;
        v46.fields.a = 1.0;
        v46.fields.r = v14;
        v46.fields.g = v14;
        v46.fields.b = v14;
        UnityEngine_Material__SetColor(
          (UnityEngine_Material_o *)actorObj,
          (System_String_o *)StringLiteral_16179/*"_Color"*/,
          v46,
          0LL);
        v41 = (int)v42[1].klass;
        if ( (int)++v43 >= v41 )
          goto LABEL_74;
      }
      goto LABEL_79;
    }
  }
LABEL_75:
  if ( v15 )
    return (UnityEngine_GameObject_array *)System_Collections_Generic_List_object___ToArray(
                                             v15,
                                             (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  else
    return 0LL;
}


void __fastcall BattleEffectUtility__ClearNotPreloadEffectId(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *NotPreloadEffectIdHashSet; // x0
  __int64 v3; // x1

  if ( (byte_4A5D6B5 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Clear__);
    byte_4A5D6B5 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  NotPreloadEffectIdHashSet = BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v1);
  if ( !NotPreloadEffectIdHashSet )
    sub_1B8880C(0LL, v3);
  System_Collections_Generic_HashSet_int___Clear(
    NotPreloadEffectIdHashSet,
    (const MethodInfo_33B3210 *)Method_System_Collections_Generic_HashSet_int__Clear__);
}


void __fastcall BattleEffectUtility__GetBattleCommonEffectPathAndName(
        System_String_o *baseName,
        System_String_o **path,
        System_String_o **name,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  int32_t IndexOf_61740372; // w0
  int32_t v8; // w22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  System_String_o **v17; // x0
  System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  v6 = baseName;
  if ( (byte_4A5D6B1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    baseName = (System_String_o *)sub_1B885B0(&StringLiteral_5815/*"Effect/BattleCommon/{0}"*/);
    byte_4A5D6B1 = 1;
  }
  if ( !v6 )
    sub_1B8880C(baseName, path);
  IndexOf_61740372 = System_String__LastIndexOf_61740372(v6, (System_String_o *)StringLiteral_1123/*"/"*/, 0LL);
  if ( IndexOf_61740372 == -1 )
  {
    v18 = System_String__Format((System_String_o *)StringLiteral_5815/*"Effect/BattleCommon/{0}"*/, (Il2CppObject *)v6, 0LL);
    *path = v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)path, (int32_t)v18, v19, v20);
    v17 = name;
    v16 = (int)v6;
    *name = v6;
  }
  else
  {
    v8 = IndexOf_61740372;
    v9 = (Il2CppObject *)System_String__Substring_61726036(v6, 0, IndexOf_61740372, 0LL);
    v10 = System_String__Format((System_String_o *)StringLiteral_5815/*"Effect/BattleCommon/{0}"*/, v9, 0LL);
    *path = v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)path, (int32_t)v10, v11, v12);
    v13 = System_String__Substring(v6, v8 + 1, 0LL);
    v16 = (int)v13;
    *name = v13;
    v17 = name;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)v17, v16, v14, v15);
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_String_o *name; // [xsp+8h] [xbp-68h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4A5D6B0 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D6B0 = 1;
  }
  path = 0LL;
  name = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EffectMaster___);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectIdList )
    goto LABEL_22;
  v7 = *(_QWORD *)&effectIdList->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1B88814(Instance, v4);
      if ( !MasterData_object )
        break;
      Instance = DataMasterBase_object__object__int___GetEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                   effectIdList->m_Items[v8 + 1],
                   (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
                                     (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v4 = (Il2CppObject *)path;
          items = v6->fields._items;
          v14 = Method_System_Collections_Generic_List_string__Add__;
          ++v6->fields._version;
          if ( !items )
            break;
          size = v6->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v6,
              v4,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
          }
          else
          {
            v16 = &items->obj.klass + size;
            v6->fields._size = size + 1;
            v16[4] = (Il2CppClass *)v4;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v4, v11, v12);
          }
        }
      }
      LODWORD(v7) = effectIdList->max_length;
      if ( (__int64)++v8 >= (int)v7 )
        goto LABEL_20;
    }
LABEL_22:
    sub_1B8880C(Instance, v4);
  }
LABEL_20:
  if ( !v6 )
    goto LABEL_22;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v6,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall BattleEffectUtility__GetSideEffectPath(int32_t effectId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5D6AC & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_5849/*"Effect/SideEffect/"*/);
    byte_4A5D6AC = 1;
  }
  v8 = effectId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Concat((Il2CppObject *)StringLiteral_5849/*"Effect/SideEffect/"*/, v6, 0LL);
}


bool __fastcall BattleEffectUtility__IsEffectNotLoadedYet(
        int32_t effectId,
        System_String_o **effectPath,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BattleEffectUtility_c *v6; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *EffectMaster; // x0
  __int64 v8; // x1
  Il2CppObject *Entity; // x0
  const MethodInfo *v10; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5D6B3 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4A5D6B3 = 1;
  }
  name = 0LL;
  *effectPath = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)effectPath, 0, (int32_t)method, v3);
  if ( effectId < 1 )
    goto LABEL_13;
  v6 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleEffectUtility__get_EffectMaster((const MethodInfo *)v6);
  if ( !EffectMaster )
    goto LABEL_17;
  Entity = DataMasterBase_object__object__int___GetEntity(
             EffectMaster,
             effectId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
  if ( Entity )
  {
    if ( HIDWORD(Entity[1].klass) == 5 )
    {
      monitor = (System_String_o *)Entity[2].monitor;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v10);
    }
    if ( System_String__IsNullOrEmpty(*effectPath, 0LL) )
    {
LABEL_13:
      LOBYTE(Entity) = 0;
      return (unsigned __int8)Entity & 1;
    }
    EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( EffectMaster )
    {
      LOBYTE(Entity) = AssetManager__IsAssetStorageExistsButEmpty((AssetManager_o *)EffectMaster, *effectPath, 0LL);
      return (unsigned __int8)Entity & 1;
    }
LABEL_17:
    sub_1B8880C(EffectMaster, v8);
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
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x2
  BattleEffectUtility_c *v13; // x0
  BattleEffectUtility_c *v14; // x0
  BattleEffectUtility_c *v15; // x0
  float SendReportProbability; // s8
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x0
  System_String_o *v21; // x23
  BattleEffectUtility_c *v22; // x0
  BattleDataDefine_c *v23; // x0
  int32_t ASSET_PARALLEL_LOAD_MAX; // w22
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper_k__BackingField; // x19
  System_String_o *v26; // x23
  AssetLoader_LoadEndDataHandler_o *v27; // x24
  System_String_o *v28; // x19
  AssetLoader_LoadEndDataHandler_o *v29; // x23
  int32_t v30; // [xsp+4h] [xbp-4Ch] BYREF
  System_String_o *effectPath; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5D6B6 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1B885B0(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__);
    sub_1B885B0(&Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__);
    sub_1B885B0(&BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
    sub_1B885B0(&StringLiteral_22107/*"non-loaded asset was detected. effectId = {0}"*/);
    byte_4A5D6B6 = 1;
  }
  effectPath = 0LL;
  v7 = sub_1B887FC(BattleEffectUtility___c__DisplayClass32_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass32_0___ctor((BattleEffectUtility___c__DisplayClass32_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_37;
  *(_QWORD *)(v7 + 16) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)finishCallback, v10, v11);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  if ( !BattleEffectUtility__IsEffectNotLoadedYet(effectId, &effectPath, v12) )
    goto LABEL_35;
  v13 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v13);
  if ( !SentEffectIdHashSet )
    goto LABEL_37;
  if ( !System_Collections_Generic_HashSet_int___Contains(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
  {
    v14 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_NotPreloadEffectIdHashSet((const MethodInfo *)v14);
    if ( !SentEffectIdHashSet )
      goto LABEL_37;
    if ( !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
            effectId,
            (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
    {
      v15 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v15 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v15->static_fields->SendReportProbability;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        v30 = effectId;
        v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v17, v18, v19);
        v21 = System_String__Format((System_String_o *)StringLiteral_22107/*"non-loaded asset was detected. effectId = {0}"*/, v20, 0LL);
        SentEffectIdHashSet = (CrashReporter_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        CrashReporter__SendReport_30382288(SentEffectIdHashSet, v21, 0LL, 0LL, 0LL);
        v22 = BattleEffectUtility_TypeInfo;
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        SentEffectIdHashSet = (CrashReporter_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v22);
        if ( !SentEffectIdHashSet )
          goto LABEL_37;
        System_Collections_Generic_HashSet_int___Add(
          (System_Collections_Generic_HashSet_int__o *)SentEffectIdHashSet,
          effectId,
          (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
    }
  }
  v23 = BattleDataDefine_TypeInfo;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v23 = BattleDataDefine_TypeInfo;
  }
  ASSET_PARALLEL_LOAD_MAX = v23->static_fields->ASSET_PARALLEL_LOAD_MAX;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  SentEffectIdHashSet = (CrashReporter_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)perf, 0LL, 0LL);
  if ( ((unsigned __int8)SentEffectIdHashSet & 1) != 0 )
  {
    if ( perf )
    {
      assetStorageLoadWrapper_k__BackingField = perf->fields._assetStorageLoadWrapper_k__BackingField;
      v26 = effectPath;
      v27 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v27,
        (Il2CppObject *)v7,
        Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__0__,
        0LL);
      if ( assetStorageLoadWrapper_k__BackingField )
      {
        if ( AssetStorageLoadWrapper__LoadAssetStorage(
               assetStorageLoadWrapper_k__BackingField,
               v26,
               v27,
               ASSET_PARALLEL_LOAD_MAX,
               0LL) )
        {
          return;
        }
        goto LABEL_35;
      }
    }
LABEL_37:
    sub_1B8880C(SentEffectIdHashSet, v9);
  }
  v28 = effectPath;
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v7,
    Method_BattleEffectUtility___c__DisplayClass32_0__LoadEffectAssetIfNotYet_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(v28, v29, ASSET_PARALLEL_LOAD_MAX, 0LL) )
LABEL_35:
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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v8; // x1
  System_String_o *v9; // x21
  UnityEngine_Transform_o *v10; // x19
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5D6AB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_4A5D6AB = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EffectMaster___);
  if ( !Master_object )
    goto LABEL_19;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          Master_object,
          &entity,
          effectId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
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
    sub_1B8880C(Master_object, v8);
  }
  UnityEngine_Transform__set_parent(v10, (UnityEngine_Transform_o *)Master_object, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  if ( !byte_4A55CE9 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE9 = 1;
  }
  UnityEngine_Transform__set_eulerAngles(v10, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  UnityEngine_Transform__set_localScale(v10, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
}


bool __fastcall BattleEffectUtility__TryGetBattleCommonEffectPath(
        System_String_o **effectPath,
        int32_t effectId,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BattleEffectUtility_c *v6; // x0
  EffectMaster_o *EffectMaster; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_String_o *monitor; // x20
  System_String_o *name; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4A5D6B2 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    byte_4A5D6B2 = 1;
  }
  entity = 0LL;
  name = 0LL;
  *effectPath = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)effectPath, 0, (int32_t)method, v3);
  v6 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectMaster = BattleEffectUtility__get_EffectMaster((const MethodInfo *)v6);
  if ( !EffectMaster )
    goto LABEL_15;
  EffectMaster = (EffectMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)EffectMaster,
                                     &entity,
                                     effectId,
                                     (const MethodInfo_311D988 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)EffectMaster & 1) == 0 )
    return 0;
  if ( !entity )
LABEL_15:
    sub_1B8880C(EffectMaster, v8);
  if ( HIDWORD(entity[1].klass) == 5 )
  {
    monitor = (System_String_o *)entity[2].monitor;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__GetBattleCommonEffectPathAndName(monitor, effectPath, &name, v9);
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
  UnityEngine_Object_o *v11; // x21
  System_String_o *v12; // x0
  UnityEngine_Object_o *v13; // x0
  Il2CppObject *v14; // x22
  UnityEngine_Object_c *klass; // x8
  int32_t methodPtr; // w23
  int32_t v17; // w22
  int32_t LimitCount; // w0
  System_String_o *v19; // x24
  int32_t v20; // w25
  Il2CppObject *Manager__loadNoblePhantasmEffect; // x0
  int32_t WeaponScale; // w24
  int32_t WeaponGroup; // w22
  System_String_o *v24; // x25
  int32_t v25; // w23
  BattleEffectUtility_c *v26; // x8
  struct System_String_array *scalelist; // x8
  System_String_o *v28; // x24
  BattleEffectUtility_c *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x22
  System_String_o *v32; // x22
  System_String_o *v33; // x22
  System_String_o *v34; // x23
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  BattleEffectUtility_c *v37; // x0
  BattleEffectUtility_c *v38; // x0
  float SendReportProbability; // s8
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  UnityEngine_Object_o *v43; // x20
  Il2CppObject *v44; // x0
  System_String_o *v45; // x20
  BattleEffectUtility_c *v46; // x0
  DataManager_o *v47; // x19
  float v48; // s0
  float v49; // s1
  float v50; // s2
  float v51; // s3
  int m_CancellationTokenSource; // w8
  float v53; // s8
  float v54; // s9
  float v55; // s10
  float v56; // s11
  unsigned int v57; // w21
  int32_t id; // [xsp+Ch] [xbp-84h] BYREF
  System_String_o *name; // [xsp+10h] [xbp-80h] BYREF
  System_String_o *path; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Color_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5D6B8 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_BattleEffectUtility_getEffectObject__);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_18869/*"effect load failed. effectId = {0}"*/);
    sub_1B885B0(&StringLiteral_18870/*"effect/"*/);
    sub_1B885B0(&StringLiteral_3214/*"Battle/Effect/"*/);
    sub_1B885B0(&StringLiteral_3206/*"Battle"*/);
    byte_4A5D6B8 = 1;
  }
  name = 0LL;
  path = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_86;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_86;
  Entity = (EffectEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               effectId,
                               (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
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
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    v11 = (UnityEngine_Object_o *)Instance;
  }
  if ( !Entity )
    goto LABEL_86;
  switch ( Entity->fields.folderType )
  {
    case 1:
      v12 = System_String__Concat_61707032((System_String_o *)StringLiteral_18870/*"effect/"*/, Entity->fields.name, 0LL);
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
      v17 = (int32_t)klass[2]._1.name;
      LimitCount = BattleActorControl__getLimitCount((BattleActorControl_o *)v11, 0LL);
      v19 = Entity->fields.name;
      v20 = LimitCount;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadNoblePhantasmEffect(
                                                           methodPtr,
                                                           v20,
                                                           v19,
                                                           v17,
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
      v24 = Entity->fields.name;
      v25 = (int)Instance;
      v26 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v26 = BattleEffectUtility_TypeInfo;
      }
      scalelist = v26->static_fields->scalelist;
      if ( !scalelist )
        goto LABEL_86;
      if ( WeaponScale >= scalelist->max_length )
        goto LABEL_87;
      v28 = System_String__Concat_61707032(v24, scalelist->m_Items[WeaponScale], 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadWeaponGroupEffect(
                                                           v28,
                                                           WeaponGroup,
                                                           v25,
                                                           0LL);
LABEL_47:
      v14 = Manager__loadNoblePhantasmEffect;
LABEL_48:
      if ( EffectEntity__isSe(Entity, 0LL) && isPlaySe )
      {
        v35 = Method_BattleEffectUtility_getEffectObject__;
        if ( (*((_BYTE *)Method_BattleEffectUtility_getEffectObject__ + 83) & 2) != 0 )
          v35 = (_QWORD *)sub_1B885C8(Method_BattleEffectUtility_getEffectObject__);
        v36 = (System_Reflection_MethodBase_o *)sub_1B88594(v35, v35[4]);
        OverwriteAssetSoundName__PlaySe_38530872(
          v36,
          (System_String_o *)StringLiteral_3206/*"Battle"*/,
          Entity->fields.se,
          1.0,
          0LL,
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
                                      (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        v43 = (UnityEngine_Object_o *)Instance;
        if ( Entity->fields.folderType != 3 )
          goto LABEL_83;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
          goto LABEL_83;
        if ( !v43 )
          goto LABEL_86;
        Instance = (DataManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                      (UnityEngine_GameObject_o *)v43,
                                      (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
        if ( !v11 )
          goto LABEL_86;
        v47 = Instance;
        *(UnityEngine_Color_o *)&v48 = BattleActorControl__getWeaponColor((BattleActorControl_o *)v11, 0LL);
        if ( !v47 )
          goto LABEL_86;
        m_CancellationTokenSource = (int)v47->fields.m_CancellationTokenSource;
        if ( m_CancellationTokenSource >= 1 )
        {
          v53 = v48;
          v54 = v49;
          v55 = v50;
          v56 = v51;
          v57 = 0;
          while ( 1 )
          {
            if ( v57 >= m_CancellationTokenSource )
LABEL_87:
              sub_1B88814(Instance, v8);
            Instance = (DataManager_o *)*((_QWORD *)&v47->fields._DispLog + (int)v57);
            if ( !Instance )
              break;
            v62.fields.r = v53;
            v62.fields.g = v54;
            v62.fields.b = v55;
            v62.fields.a = v56;
            UIWidget__set_color((UIWidget_o *)Instance, v62, 0LL);
            m_CancellationTokenSource = (int)v47->fields.m_CancellationTokenSource;
            if ( (int)++v57 >= m_CancellationTokenSource )
              goto LABEL_83;
          }
        }
        else
        {
LABEL_83:
          if ( v43 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v43, 0, 0LL);
            return (UnityEngine_GameObject_o *)v43;
          }
        }
LABEL_86:
        sub_1B8880C(Instance, v8);
      }
      v37 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v37);
      if ( !Instance )
        goto LABEL_86;
      if ( System_Collections_Generic_HashSet_int___Contains(
             (System_Collections_Generic_HashSet_int__o *)Instance,
             Entity->fields.id,
             (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__) )
      {
        return 0LL;
      }
      v38 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v38 = BattleEffectUtility_TypeInfo;
      }
      SendReportProbability = v38->static_fields->SendReportProbability;
      v43 = 0LL;
      if ( UnityEngine_Random__Range(0.0, 100.0, 0LL) <= SendReportProbability )
      {
        id = Entity->fields.id;
        v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v40, v41, v42);
        v45 = System_String__Format((System_String_o *)StringLiteral_18869/*"effect load failed. effectId = {0}"*/, v44, 0LL);
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
        if ( Instance )
        {
          CrashReporter__SendReport_30382288((CrashReporter_o *)Instance, v45, 0LL, 0LL, 0LL);
          v46 = BattleEffectUtility_TypeInfo;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          Instance = (DataManager_o *)BattleEffectUtility__get_SentEffectIdHashSet((const MethodInfo *)v46);
          if ( Instance )
          {
            System_Collections_Generic_HashSet_int___Add(
              (System_Collections_Generic_HashSet_int__o *)Instance,
              Entity->fields.id,
              (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
            return 0LL;
          }
        }
        goto LABEL_86;
      }
      return (UnityEngine_GameObject_o *)v43;
    case 4:
      v29 = BattleEffectUtility_TypeInfo;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v29 = BattleEffectUtility_TypeInfo;
      }
      v30 = System_Int32__ToString((unsigned int)v29->static_fields + 24, 0LL);
      v31 = System_String__Concat_61707032((System_String_o *)StringLiteral_3214/*"Battle/Effect/"*/, v30, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      Instance = (DataManager_o *)AssetManager__getAssetStorage(v31, 0LL);
      if ( !Instance )
        goto LABEL_86;
      Manager__loadNoblePhantasmEffect = AssetData__GetObject_object__48635516(
                                           (AssetData_o *)Instance,
                                           Entity->fields.name,
                                           (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
      goto LABEL_47;
    case 5:
      v32 = Entity->fields.name;
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      BattleEffectUtility__GetBattleCommonEffectPathAndName(v32, &path, &name, v10);
      v34 = name;
      v33 = path;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      Manager__loadNoblePhantasmEffect = (Il2CppObject *)ServantAssetLoadManager__loadBattleCommonEffect(v33, v34, 0LL);
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

  if ( (byte_4A5D6B7 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_5809/*"Effect Default"*/);
    byte_4A5D6B7 = 1;
  }
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  EffectObject = BattleEffectUtility__getEffectObject(effectId, procObject, isPlaySe, method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)EffectObject, 0LL, 0LL) )
  {
    EffectObject = (UnityEngine_GameObject_o *)sub_1B887FC(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(EffectObject, (System_String_o *)StringLiteral_5809/*"Effect Default"*/, 0LL);
    if ( !EffectObject
      || (v10 = UnityEngine_GameObject__AddComponent_object_(
                  EffectObject,
                  (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_AutoDestroyObjectComponent___)) == 0LL )
    {
      sub_1B8880C(v10, v11);
    }
    *(float *)&v10[2].klass = lostTime;
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__getEffectObject_42699024(
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

  if ( (byte_4A5D6BA & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3210/*"Battle/CommonEffects/"*/);
    sub_1B885B0(&StringLiteral_18870/*"effect/"*/);
    byte_4A5D6BA = 1;
  }
  if ( folder == 2 )
  {
    v7 = &StringLiteral_18870/*"effect/"*/;
LABEL_8:
    v8 = System_String__Concat_61707032((System_String_o *)*v7, name, 0LL);
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
    v7 = &StringLiteral_3210/*"Battle/CommonEffects/"*/;
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
                                                 (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___)) == 0LL )
    {
      sub_1B8880C(result, v10);
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

  if ( (byte_4A5D6B9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D6B9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EffectMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     effectId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
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

  if ( (byte_4A5D6BC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_18974/*"en_body"*/);
    byte_4A5D6BC = 1;
  }
  v3 = (System_String_o *)StringLiteral_18974/*"en_body"*/;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EffectMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          id,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__TryGetEntity__) )
    return v3;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B8880C(Instance, v5);
  NodeName = EffectEntity__getNodeName((EffectEntity_o *)entity, 0LL);
  if ( !System_String__IsNullOrEmpty(NodeName, 0LL) )
    return NodeName;
  return v3;
}


System_String_o *__fastcall BattleEffectUtility__get_EffectAssetName(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_String_o *v2; // x0

  if ( (byte_4A5D6A7 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&StringLiteral_3214/*"Battle/Effect/"*/);
    byte_4A5D6A7 = 1;
  }
  v1 = BattleEffectUtility_TypeInfo;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    v1 = BattleEffectUtility_TypeInfo;
  }
  v2 = System_Int32__ToString((unsigned int)v1->static_fields + 24, 0LL);
  return System_String__Concat_61707032((System_String_o *)StringLiteral_3214/*"Battle/Effect/"*/, v2, 0LL);
}


EffectMaster_o *__fastcall BattleEffectUtility__get_EffectMaster(const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  EffectMaster_o *effectMst; // x19
  Il2CppObject *Master_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  BattleEffectUtility_c *v6; // x8
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4A5D6A8 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EffectMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A5D6A8 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EffectMaster___);
    v6 = BattleEffectUtility_TypeInfo;
    effectMst = (EffectMaster_o *)Master_object;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v6 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v6->static_fields;
    static_fields->effectMst = effectMst;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->effectMst, (int32_t)effectMst, v4, v5);
  }
  return effectMst;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_NotPreloadEffectIdHashSet(
        const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *notPreloadEffectIdHashSet; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  BattleEffectUtility_c *v5; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4A5D6A5 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4A5D6A5 = 1;
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
    notPreloadEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      notPreloadEffectIdHashSet,
      (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v5 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v5 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->notPreloadEffectIdHashSet = notPreloadEffectIdHashSet;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&static_fields->notPreloadEffectIdHashSet,
      (int32_t)notPreloadEffectIdHashSet,
      v3,
      v4);
  }
  return notPreloadEffectIdHashSet;
}


System_Collections_Generic_HashSet_int__o *__fastcall BattleEffectUtility__get_SentEffectIdHashSet(
        const MethodInfo *method)
{
  BattleEffectUtility_c *v1; // x0
  System_Collections_Generic_HashSet_int__o *sentEffectIdHashSet; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  BattleEffectUtility_c *v5; // x0
  struct BattleEffectUtility_StaticFields *static_fields; // x0

  if ( (byte_4A5D6A4 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4A5D6A4 = 1;
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
    sentEffectIdHashSet = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      sentEffectIdHashSet,
      (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
    v5 = BattleEffectUtility_TypeInfo;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v5 = BattleEffectUtility_TypeInfo;
    }
    static_fields = v5->static_fields;
    static_fields->sentEffectIdHashSet = sentEffectIdHashSet;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&static_fields->sentEffectIdHashSet,
      (int32_t)sentEffectIdHashSet,
      v3,
      v4);
  }
  return sentEffectIdHashSet;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadActivateSideEffect(const MethodInfo *method)
{
  Il2CppObject *object; // x19

  if ( (byte_4A5D6AE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1B885B0(&StringLiteral_18904/*"effect/ef_sideeffect01"*/);
    byte_4A5D6AE = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_18904/*"effect/ef_sideeffect01"*/,
             (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                       object,
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  int32_t v23; // w2
  int32_t v24; // w3
  BattleEffectUtility_c *v25; // x8
  Il2CppObject *v26; // x25
  struct BattleEffectUtility_StaticFields *static_fields; // x0
  struct System_Collections_Generic_IEqualityComparer_TKey__o *comparer; // x8
  System_Collections_ObjectModel_Collection_T__o *klass; // x22
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  float v31; // s9
  float v32; // s11
  float v33; // s10
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v35; // x1
  System_Collections_Generic_IEnumerator_T__o *v36; // x22
  System_String_o *v37; // x25
  float v38; // s10
  float v39; // s11
  float v40; // s9
  System_Collections_Generic_IEnumerator_T__c *v41; // x8
  __int64 v42; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 methodPtr_low; // x10
  AuraEffectPosOverwriteEntity_o *v51; // x27
  System_Collections_Generic_IEnumerator_T__c *v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  UnityEngine_Transform_o *v56; // x22
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Vector3_StaticFields *v58; // x8
  UnityEngine_GameObject_o *v60; // [xsp+18h] [xbp-B8h]
  UnityEngine_Vector3_o Rotation; // [xsp+20h] [xbp-B0h]
  char v62; // [xsp+2Ch] [xbp-A4h]
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  z = offset.fields.z;
  y = offset.fields.y;
  x = offset.fields.x;
  if ( (byte_4A5D6A9 & 1) == 0 )
  {
    sub_1B885B0(&AuraEffectPosOverwriteEntity_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5D6A9 = 1;
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
                                                                     (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
      if ( EffectMaster )
      {
        NodeName = EffectEntity__getNodeName((EffectEntity_o *)EffectMaster, 0LL);
        if ( !BattleEffectUtility_TypeInfo->static_fields->auraPosOverwriteMst )
        {
          EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( !EffectMaster )
            goto LABEL_65;
          MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)EffectMaster,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_AuraEffectPosOverwriteMaster___);
          v25 = BattleEffectUtility_TypeInfo;
          v26 = MasterData_object;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
            v25 = BattleEffectUtility_TypeInfo;
          }
          static_fields = v25->static_fields;
          static_fields->auraPosOverwriteMst = (struct AuraEffectPosOverwriteMaster_o *)v26;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->auraPosOverwriteMst, (int32_t)v26, v23, v24);
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
          if ( !byte_4A55CE9 )
          {
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE9 = 1;
          }
          v60 = targetObject;
          if ( klass )
          {
            v30 = UnityEngine_Vector3_TypeInfo->static_fields;
            v32 = v30->upVector.fields.y;
            v31 = v30->upVector.fields.z;
            v33 = v30->upVector.fields.x;
            Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                           klass,
                           (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
            v62 = 0;
            v36 = Enumerator;
            Rotation.fields.y = v32;
            Rotation.fields.z = v31;
            Rotation.fields.x = v33;
            v37 = NodeName;
            v38 = x;
            v39 = y;
            v40 = z;
            while ( 1 )
            {
              if ( !v36 )
                sub_1B8880C(Enumerator, v35);
              v41 = v36->klass;
              v42 = *(unsigned __int16 *)(&v36->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v36->klass->_2.bitflags2 + 3) )
              {
                p_offset = &v41->_1.interfaceOffsets->offset;
                while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v42;
                  p_offset += 4;
                  if ( !v42 )
                    goto LABEL_31;
                }
                p_method = (__int64)&v41->vtable[*p_offset].method;
              }
              else
              {
LABEL_31:
                p_method = sub_1BDA590(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
              }
              if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
                      v36,
                      *(_QWORD *)(p_method + 8)) & 1) == 0 )
                break;
              v45 = v36->klass;
              v46 = *(unsigned __int16 *)(&v36->klass->_2.bitflags2 + 3);
              if ( *(_WORD *)(&v36->klass->_2.bitflags2 + 3) )
              {
                v47 = &v45->_1.interfaceOffsets->offset;
                while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v47 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
                {
                  --v46;
                  v47 += 4;
                  if ( !v46 )
                    goto LABEL_38;
                }
                v48 = (__int64)&v45->vtable[*v47].method;
              }
              else
              {
LABEL_38:
                v48 = sub_1BDA590(v36, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
              }
              v49 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v48)(
                      v36,
                      *(_QWORD *)(v48 + 8));
              if ( v49
                && (methodPtr_low = LOBYTE(AuraEffectPosOverwriteEntity_TypeInfo->vtable._0_Equals.methodPtr),
                    *(unsigned __int8 *)(*(_QWORD *)v49 + 304LL) >= (unsigned int)methodPtr_low) )
              {
                if ( *(AuraEffectPosOverwriteEntity_c **)(*(_QWORD *)(*(_QWORD *)v49 + 200LL) + 8 * methodPtr_low - 8) == AuraEffectPosOverwriteEntity_TypeInfo )
                  v51 = (AuraEffectPosOverwriteEntity_o *)v49;
                else
                  v51 = 0LL;
              }
              else
              {
                v51 = 0LL;
              }
              Enumerator = (System_Collections_Generic_IEnumerator_T__o *)AuraEffectPosOverwriteMaster__IsExistAuraPosOverwriteSettings(
                                                                            svtId,
                                                                            limitCount,
                                                                            effectId,
                                                                            v51,
                                                                            0LL);
              if ( ((unsigned __int8)Enumerator & 1) != 0 )
              {
                if ( !v51 )
                  sub_1B8880C(Enumerator, v35);
                v37 = v51->fields.nodeName;
                v63 = AuraEffectPosOverwriteEntity__GetOffset(v51, 0LL);
                v38 = v63.fields.x;
                v39 = v63.fields.y;
                v40 = v63.fields.z;
                v62 = 1;
                Rotation = AuraEffectPosOverwriteEntity__GetRotation(v51, 0LL);
              }
            }
            v52 = v36->klass;
            v53 = *(unsigned __int16 *)(&v36->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v36->klass->_2.bitflags2 + 3) )
            {
              v54 = &v52->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
              {
                --v53;
                v54 += 4;
                if ( !v53 )
                  goto LABEL_53;
              }
              v55 = (__int64)&v52->vtable[*v54].method;
            }
            else
            {
LABEL_53:
              v55 = sub_1BDA590(v36, System_IDisposable_TypeInfo, 0LL);
            }
            EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v55)(
                                                                           v36,
                                                                           *(_QWORD *)(v55 + 8));
            if ( EffectObject )
            {
              EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_GameObject__get_transform(
                                                                             EffectObject,
                                                                             0LL);
              if ( v60 )
              {
                v56 = (UnityEngine_Transform_o *)EffectMaster;
                transform = UnityEngine_GameObject__get_transform(v60, 0LL);
                EffectMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)TransformHelper__getNodeFromLvName(
                                                                               transform,
                                                                               v37,
                                                                               limitCount,
                                                                               v62 & 1,
                                                                               0LL);
                if ( v56 )
                {
                  UnityEngine_Transform__set_parent(v56, (UnityEngine_Transform_o *)EffectMaster, 0LL);
                  if ( !byte_4A55CE1 )
                  {
                    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                    byte_4A55CE1 = 1;
                  }
                  v58 = UnityEngine_Vector3_TypeInfo->static_fields;
                  v64.fields.x = v38 + v58->zeroVector.fields.x;
                  v64.fields.y = v39 + v58->zeroVector.fields.y;
                  v64.fields.z = v40 + v58->zeroVector.fields.z;
                  UnityEngine_Transform__set_localPosition(v56, v64, 0LL);
                  UnityEngine_Transform__set_eulerAngles(v56, Rotation, 0LL);
                  if ( !byte_4A55CE6 )
                  {
                    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                    byte_4A55CE6 = 1;
                  }
                  UnityEngine_Transform__set_localScale(
                    v56,
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
    sub_1B8880C(EffectMaster, v20);
  }
  return EffectObject;
}


UnityEngine_GameObject_o *__fastcall BattleEffectUtility__loadEffectToNode_42694176(
        UnityEngine_GameObject_o *targetObject,
        int32_t effectId,
        UnityEngine_GameObject_o *procObject,
        int32_t svtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x6
  BattleEffectUtility_c *v12; // x0

  if ( (byte_4A5D6AA & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    byte_4A5D6AA = 1;
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

  if ( (byte_4A5D6A6 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    byte_4A5D6A6 = 1;
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
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  System_String_o *SideEffectPath; // x0
  int32_t v16; // w1
  System_String_o *v17; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  AssetLoader_LoadEndDataHandler_o *v20; // x20

  z = scl.fields.z;
  y = scl.fields.y;
  x = scl.fields.x;
  if ( (byte_4A5D6AD & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__);
    sub_1B885B0(&BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
    sub_1B885B0(&StringLiteral_18828/*"ef_enchant"*/);
    byte_4A5D6AD = 1;
  }
  v9 = sub_1B887FC(BattleEffectUtility___c__DisplayClass23_0_TypeInfo);
  BattleEffectUtility___c__DisplayClass23_0___ctor((BattleEffectUtility___c__DisplayClass23_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 24) = parent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)parent, v12, v13);
  *(float *)(v9 + 32) = x;
  *(float *)(v9 + 36) = y;
  *(float *)(v9 + 40) = z;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  SideEffectPath = BattleEffectUtility__GetSideEffectPath(effectId, v14);
  v16 = StringLiteral_18828/*"ef_enchant"*/;
  v17 = SideEffectPath;
  *(_QWORD *)(v9 + 16) = StringLiteral_18828/*"ef_enchant"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), v16, v18, v19);
  v20 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BattleEffectUtility___c__DisplayClass23_0__showSideEffect_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v17, v20, 1, 0LL);
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

  if ( (byte_4A5D6BE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D6BE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)bActor, 0LL, 0LL);
  if ( v5 )
  {
    if ( !bActor )
      sub_1B8880C(v5, v6);
    BuffEffectNodeName_k__BackingField = bActor->fields._BuffEffectNodeName_k__BackingField;
    this->fields.effectNodeName = BuffEffectNodeName_k__BackingField;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)BuffEffectNodeName_k__BackingField, v7, v8);
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
    sub_1B8880C(IsNullOrEmpty, v8);
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
  Il2CppObject *Object_object__48635516; // x20
  BattleEffectUtility___c__DisplayClass23_0_o *v6; // x20

  v4 = this;
  if ( (byte_4A5D6BF & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (BattleEffectUtility___c__DisplayClass23_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D6BF = 1;
  }
  if ( !data )
    goto LABEL_11;
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              data,
                              v4->fields.name,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_Object__Instantiate_object_(
                                                          Object_object__48635516,
                                                          (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this
    || (this = (BattleEffectUtility___c__DisplayClass23_0_o *)UnityEngine_GameObject__get_transform(
                                                                (UnityEngine_GameObject_o *)this,
                                                                0LL)) == 0LL )
  {
LABEL_11:
    sub_1B8880C(this, data);
  }
  v6 = this;
  UnityEngine_Transform__SetParent((UnityEngine_Transform_o *)this, v4->fields.parent, 0LL);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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