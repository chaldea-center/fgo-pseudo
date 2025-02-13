void __fastcall SubmarineMapManager___ctor(SubmarineMapManager_o *this, const MethodInfo *method)
{
  this->fields.ACCELERATION_TIME_SCALE = 4.0;
  this->fields.isEnableClickPanel = 1;
  EventMapManagerBase___ctor((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__AdjustDepth(
        SubmarineMapManager_o *this,
        UnityEngine_GameObject_o *go,
        int32_t minDepth,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w9
  int v7; // w10
  int v8; // w22
  __int64 v9; // x11
  int v10; // w11
  int v11; // w8
  SubmarineMapManager_o *v12; // x20
  unsigned int v13; // w21
  int v14; // w19

  if ( (byte_4BD9119 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_4BD9119 = 1;
  }
  if ( !go )
    goto LABEL_23;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                    go,
                                    (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    v8 = 0x7FFFFFFF;
    while ( m_CancellationTokenSource != v7 )
    {
      v9 = *((_QWORD *)&this->fields.mapInfo + v7);
      if ( !v9 )
        goto LABEL_23;
      v10 = *(_DWORD *)(v9 + 176);
      ++v7;
      if ( v10 < v8 )
        v8 = v10;
      if ( m_CancellationTokenSource == v7 )
        goto LABEL_14;
    }
LABEL_22:
    sub_1C2209C(this, go);
  }
  v8 = 0x7FFFFFFF;
LABEL_14:
  if ( v8 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                      go,
                                      (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    if ( this )
    {
      v11 = (int)this->fields.m_CancellationTokenSource;
      v12 = this;
      if ( v11 >= 1 )
      {
        v13 = 0;
        v14 = minDepth - v8;
        while ( v13 < v11 )
        {
          this = (SubmarineMapManager_o *)*((_QWORD *)&v12->fields.mapInfo + (int)v13);
          if ( !this )
            goto LABEL_23;
          UIWidget__set_depth((UIWidget_o *)this, v14 + *(_DWORD *)&this->fields.isEnableClickPanel, 0LL);
          v11 = (int)v12->fields.m_CancellationTokenSource;
          if ( (int)++v13 >= v11 )
            return;
        }
        goto LABEL_22;
      }
      return;
    }
LABEL_23:
    sub_1C22094(this, go);
  }
}


void __fastcall SubmarineMapManager__AdjustEachSpotsPositions(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v4; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v6; // x20
  unsigned int v7; // w22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4BD9116 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9116 = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_15;
  max_length = Children->max_length;
  v6 = Children;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1C2209C(Children, v4);
      Children = (UnityEngine_GameObject_array *)v6->m_Items[v7];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_object, v9);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_15:
    sub_1C22094(Children, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v4; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v6; // x21
  unsigned int v7; // w19
  Il2CppObject *Component_object; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_Dictionary_int__object__o *v19; // x21
  int v20; // w8
  UnityEngine_GameObject_o *v21; // x22
  unsigned int v22; // w19
  Il2CppObject *v23; // x23
  Il2CppClass *v24; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v26; // x24
  __int64 v27; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  Il2CppObject *current; // x1
  SubmarineSilhouetteData_o **v36; // x23
  __int64 v37; // x0
  __int64 v38; // x1
  System_Predicate_object__o *v39; // x25
  __int64 v40; // x0
  __int64 v41; // x1
  Il2CppObject *v42; // x24
  _BOOL8 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x1
  SubmarineMapDataManager_o *v46; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v48; // x23
  __int64 v49; // x0
  __int64 v50; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v52; // x1
  __int64 v53; // x0
  __int64 v54; // x1
  float32x2_t v55; // d9
  __int128 v56; // q0
  _BOOL8 v57; // x0
  __int64 v58; // x1
  __int128 v59; // q1
  int8x8_t v60; // d0
  int8x8_t v61; // d2
  __int64 v62; // x1
  UnityEngine_Transform_o *v63; // x0
  __int64 v64; // x1
  unsigned __int64 v65; // d0 OVERLAPPED
  int v66; // s1
  int v67; // s2
  float y; // [xsp+10h] [xbp-F0h]
  __int128 v70; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v74; // [xsp+70h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4BD9118 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___77588504);
    sub_1C21E38(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_SrcSpotBasePrefab__TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    byte_4BD9118 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  value = 0LL;
  memset(&v72, 0, sizeof(v72));
  v2 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  klass = (int)Children[1].klass;
  v6 = Children;
  if ( klass >= 1 )
  {
    v7 = 0;
    while ( v7 < klass )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v6[1].monitor + (int)v7);
      if ( !Children )
        goto LABEL_59;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Children,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v2 )
          goto LABEL_59;
        items = v2->fields._items;
        v16 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
        ++v2->fields._version;
        if ( !items )
          goto LABEL_59;
        size = v2->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v2,
            Component_object,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v2->fields._size = size + 1;
          v18[4] = (Il2CppClass *)Component_object;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)Component_object, v9, v10, v11, v12, v13, v14);
        }
      }
      klass = (int)v6[1].klass;
      if ( (int)++v7 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_1C2209C(Children, v4);
  }
LABEL_17:
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  v20 = (int)Children[1].klass;
  v21 = Children;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( v22 < v20 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v21[1].monitor + (int)v22);
      if ( !Children )
        goto LABEL_59;
      v23 = UnityEngine_GameObject__GetComponent_object_(
              Children,
              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v23, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_59;
        v24 = v23[7].klass;
        if ( !v24 || !v19 )
          goto LABEL_59;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v19,
          HIDWORD(v24->_1.name),
          v23,
          (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v20 = (int)v21[1].klass;
      if ( (int)++v22 >= v20 )
        goto LABEL_30;
    }
    goto LABEL_60;
  }
LABEL_30:
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (Children = (UnityEngine_GameObject_o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
LABEL_59:
    sub_1C22094(Children, v4);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v74 = v71;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v74,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v26 = sub_1C22084(SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0LL);
    if ( !v26 )
      sub_1C22094(v27, v28);
    current = v74.fields._current;
    *(_QWORD *)(v26 + 16) = v74.fields._current;
    v36 = (SubmarineSilhouetteData_o **)(v26 + 16);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)current, v29, v30, v31, v32, v33, v34);
    if ( !*(_QWORD *)(v26 + 16) )
      sub_1C22094(v37, v38);
    if ( *(int *)(*(_QWORD *)(v26 + 16) + 20LL) > 0 )
    {
      v39 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_object____ctor(
        v39,
        (Il2CppObject *)v26,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0LL);
      if ( !v2 )
        sub_1C22094(v40, v41);
      v42 = System_Collections_Generic_List_object___Find(
              v2,
              (System_Predicate_T__o *)v39,
              (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v42, 0LL, 0LL);
      if ( !v43 )
      {
        if ( !*v36 )
          sub_1C22094(v43, v44);
        if ( !v19 )
          sub_1C22094(v43, v44);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v19,
               (*v36)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_32B71D8 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v46 = this->fields.submarineData;
          if ( !v46 )
            sub_1C22094(0LL, v45);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v46,
                                                                                      *v36,
                                                                                      0LL);
          v48 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_object____ctor_56945064(
            v48,
            SilhouetteOccupiedPanels,
            (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___77588504);
          if ( !v42 )
            sub_1C22094(v49, v50);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v42, 0LL);
          if ( !transform )
            sub_1C22094(0LL, v52);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          *(_QWORD *)&v70 = *(_QWORD *)&localPosition.fields.x;
          y = localPosition.fields.y;
          if ( !byte_4BD6BB1 )
          {
            v53 = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB1 = 1;
          }
          if ( !v48 )
            sub_1C22094(v53, v54);
          v55.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v71,
            v48,
            (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v72 = v71;
          v56 = v70;
          *((float *)&v56 + 1) = y;
          while ( 1 )
          {
            v70 = v56;
            v57 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v72,
                    (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v57 )
              break;
            if ( !v72.fields._current )
              sub_1C22094(v57, v58);
            v60.n64_u64[0] = *(unsigned __int64 *)((char *)&v72.fields._current[1].monitor + 4);
            *(int8x8_t *)&v59 = vbsl_s8(vcgt_f32(v60, *(float32x2_t *)&v70), *(int8x8_t *)&v70, v60);
            v61.n64_u64[0] = vadd_f32(
                               *(float32x2_t *)&v59,
                               vsub_f32(vadd_f32(v55, *(float32x2_t *)&v70), *(float32x2_t *)&v59)).n64_u64[0];
            v55.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v61, v60), v61, v60), *(float32x2_t *)&v59).n64_u64[0];
            v56 = v59;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v72,
            (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_1C22094(0LL, v62);
          v63 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0LL);
          if ( !v63 )
            sub_1C22094(0LL, v64);
          v65 = vadd_f32(vmul_f32(v55, (float32x2_t)0x3F0000003F000000LL), *(float32x2_t *)&v70).n64_u64[0];
          v66 = HIDWORD(v65);
          v67 = 0;
          UnityEngine_Transform__set_localPosition(v63, *(UnityEngine_Vector3_o *)&v65, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v74,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
}


void __fastcall SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  SubmarineMapManager_o *v4; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo_376FA28 *v7; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v9; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v10; // 0:x0.12
  System_Nullable_Vector3__o v11; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4BD9115 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Nullable_Vector2___ctor__);
    this = (SubmarineMapManager_o *)sub_1C21E38(&Method_System_Nullable_Vector3___ctor__);
    byte_4BD9115 = 1;
  }
  submarineData = v4->fields.submarineData;
  if ( !submarineData )
    goto LABEL_9;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_9;
  PanelUnitSize_k__BackingField = Settings_k__BackingField->fields._PanelUnitSize_k__BackingField;
  *(_QWORD *)&v10.fields.hasValue = &v9;
  LODWORD(v10.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  v9.fields.value.fields.y = 0.0;
  *(_QWORD *)&v9.fields.hasValue = 0LL;
  System_Nullable_Vector2____ctor(v10, PanelUnitSize_k__BackingField, (const MethodInfo_376F608 *)method);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  *(_QWORD *)&v11.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v11.fields.hasValue = &centerPosition;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v11, zeroVector, v7);
  if ( !spot )
LABEL_9:
    sub_1C22094(this, spot);
  SrcSpotBasePrefab__AdjustBtnColliderArea(spot, v9, centerPosition, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSpotPosition(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  SubmarineMapManager_o *v5; // x20
  struct SubmarineMapDataManager_o *v6; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  float v8; // s8
  SubmarineMapManager_o *v9; // x8
  float32x2_t v10; // d0
  unsigned __int32 v11; // s1
  float v12; // s2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v16; // x2
  unsigned __int64 v17; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( !spot )
    goto LABEL_15;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_15;
  v5 = this;
  this = (SubmarineMapManager_o *)this->fields.submarineData;
  if ( !this )
    goto LABEL_15;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelBySpotId(
                                    (SubmarineMapDataManager_o *)this,
                                    mMapCtrl_SpotInfo->fields.spotId,
                                    0LL);
  if ( !this )
  {
    this = (SubmarineMapManager_o *)spot->fields.mMapCtrl_SpotInfo;
    if ( this )
    {
      this = (SubmarineMapManager_o *)MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)this, 0LL);
      if ( this )
      {
        v9 = this;
        this = (SubmarineMapManager_o *)v5->fields.terminalMap;
        if ( this )
        {
          *(UnityEngine_Vector3_o *)v10.n64_u64 = ScrTerminalMap__LocalPosFromCoord(
                                                    (ScrTerminalMap_o *)this,
                                                    (float)SHIDWORD(v9->fields.warInfo),
                                                    (float)SLODWORD(v9->fields.terminalMap),
                                                    0.0,
                                                    0.0,
                                                    0LL);
          submarineData = v5->fields.submarineData;
          if ( submarineData )
          {
            Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
            if ( Settings_k__BackingField )
            {
              v10.n64_u32[1] = v11;
              v8 = v12 + Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.z;
              v17 = vadd_f32(
                      v10,
                      *(float32x2_t *)&Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.x).n64_u64[0];
              goto LABEL_14;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1C22094(this, spot);
  }
  v6 = v5->fields.submarineData;
  if ( !v6 )
    goto LABEL_15;
  PositionCalculator_k__BackingField = (float32x2_t *)v6->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_15;
  v17 = vadd_f32(
          PositionCalculator_k__BackingField[4],
          vmul_f32(
            vmul_f32(
              PositionCalculator_k__BackingField[2],
              vcvt_f32_s32(
                vsub_s32(
                  (int32x2_t)(vshl_n_s32(*(int32x2_t *)&this->fields.m_CachedPtr, 1uLL).n64_u64[0] | 0x100000001LL),
                  PositionCalculator_k__BackingField[3]))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v8 = 0.0;
LABEL_14:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spot, 0LL);
  LODWORD(v18.fields.x) = v17;
  v18.fields.z = v8;
  v18.fields.y = *((float *)&v17 + 1);
  GameObjectExtensions__SetLocalPosition(gameObject, v18, 0LL);
  SubmarineMapManager__AdjustSpotCollider(v5, spot, v16);
}


void __fastcall SubmarineMapManager__CheckNewPlayableEventQuest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Int32_array *Instance; // x0
  __int64 v4; // x1
  SubmarineMapDataManager_o *submarineData; // x8
  clsQuestCheck_o *v6; // x19
  System_Int32_array *v7; // x20
  CommonUI_o *v8; // x19
  int32_t v9; // w20
  SubmarineMapManager___c_c *v10; // x0
  System_Action_o *_9__49_0; // x22
  System_String_o *v12; // x21
  Il2CppObject *v13; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v23; // 0:x5.8

  if ( (byte_4BD9110 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__);
    sub_1C21E38(&SubmarineMapManager___c_TypeInfo);
    sub_1C21E38(&StringLiteral_7075/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/);
    byte_4BD9110 = 1;
  }
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_22;
  v6 = (clsQuestCheck_o *)Instance;
  Instance = (System_Int32_array *)SubmarineMapDataManager__get_EventId(submarineData, 0LL);
  if ( !v6 )
    goto LABEL_22;
  Instance = clsQuestCheck__GetNewPlayableEventQuestId(v6, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  v7 = Instance;
  if ( !*(_QWORD *)&Instance->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v7->max_length )
    goto LABEL_23;
  if ( !Instance )
    goto LABEL_22;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)Instance, v7->m_Items[1], 143, 0LL) )
    return;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v7->max_length )
LABEL_23:
    sub_1C2209C(Instance, v4);
  v8 = (CommonUI_o *)Instance;
  v9 = v7->m_Items[1];
  v10 = SubmarineMapManager___c_TypeInfo;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v10 = SubmarineMapManager___c_TypeInfo;
  }
  _9__49_0 = v10->static_fields->__9__49_0;
  v12 = (System_String_o *)StringLiteral_7075/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__49_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SubmarineMapManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v13, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
  if ( !v8 )
LABEL_22:
    sub_1C22094(Instance, v4);
  v23 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v8, v9, v12, _9__49_0, 0, v23, 0.0, 0LL);
}


void __fastcall SubmarineMapManager__ClickPanel(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2
  SubmarineMapPanelData_o *v21; // x1
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  int64_t v29; // x21
  System_Delegate_o **v30; // x22
  System_Delegate_o *v31; // x23
  SchedulerTaskBase_TaskCallback_o *v32; // x24
  System_Delegate_o *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  SchedulerTaskBase_TaskCallback_c *v40; // x1
  TaskScheduler_o *taskScheduler; // x19
  __int64 v42; // x20
  __int64 v43; // x0
  __int64 v44; // x1
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x0

  if ( (byte_4BD9106 & 1) == 0 )
  {
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager_ClickPanel__);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
    byte_4BD9106 = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = panelData;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)panelData, v14, v15, v16, v17, v18, v19);
  v21 = *(SubmarineMapPanelData_o **)(v5 + 24);
  if ( !v21 || !this->fields.isEnableClickPanel )
    return;
  if ( !v21->fields._IsOpened_k__BackingField || !v21->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v21->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v21, v20);
    v24 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
      v24 = (_QWORD *)sub_1C21E50(Method_SubmarineMapManager_ClickPanel__);
    v25 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v29 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v29, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v29 )
        {
          v30 = (System_Delegate_o **)(v29 + 32);
          v31 = *(System_Delegate_o **)(v29 + 32);
          v32 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(
            v32,
            (Il2CppObject *)v5,
            Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__,
            0LL);
          v33 = System_Delegate__Combine(v31, (System_Delegate_o *)v32, 0LL);
          if ( v33 )
          {
            v40 = SchedulerTaskBase_TaskCallback_TypeInfo;
            if ( (SchedulerTaskBase_TaskCallback_c *)v33->klass != SchedulerTaskBase_TaskCallback_TypeInfo
              || (*v30 = v33, (SchedulerTaskBase_TaskCallback_c *)v33->klass != v40) )
            {
              sub_1C22354(v33);
              return;
            }
          }
          else
          {
            *v30 = 0LL;
          }
          sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 32), (int64_t)v33, v34, v35, v36, v37, v38, v39);
          taskScheduler = this->fields.taskScheduler;
          v6 = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v6 )
          {
            v42 = v6;
            v43 = sub_1C21F74(v29, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
            if ( !v43 )
            {
              v51 = sub_1C220B8();
              sub_1C21F60(v51, 0LL);
            }
            if ( !*(_DWORD *)(v42 + 24) )
              sub_1C2209C(v43, v44);
            *(_QWORD *)(v42 + 32) = v29;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 32), v29, v45, v46, v47, v48, v49, v50);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v42, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C22094(v6, v7);
  }
  v22 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1C21E50(Method_SubmarineMapManager_ClickPanel__);
  v23 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BD90FD & 1) == 0 )
  {
    sub_1C21E38(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
    byte_4BD90FD = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)finishCallback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4BD90FE & 1) == 0 )
  {
    sub_1C21E38(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
    byte_4BD90FE = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)finishCallback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *scanConfirmDialog; // x21
  Il2CppObject *v4; // x0
  __int64 v5; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  Il2CppObject *ScanConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v16; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v26; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4BD911A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD911A = 1;
  }
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(scanConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_28;
    ScanConfirmDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._ScanConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           ScanConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v4,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = (struct SubmarineScanConfirmDialog_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.scanConfirmDialog,
      (int64_t)Component_object,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    EventMapManagerBase__LocateDialogToUiRoot(
      (EventMapManagerBase_o *)this,
      (BaseDialog_o *)this->fields.scanConfirmDialog,
      0LL);
  }
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(selectScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( !v16 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v16->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_28;
    v18 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = (struct SubmarineSelectScannerDialog_o *)v18;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.selectScannerDialog,
      (int64_t)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    EventMapManagerBase__LocateDialogToUiRoot(
      (EventMapManagerBase_o *)this,
      (BaseDialog_o *)this->fields.selectScannerDialog,
      0LL);
  }
  newScannerDialog = (UnityEngine_Object_o *)this->fields.newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = (Il2CppObject *)UnityEngine_Object__op_Equality(newScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v4 & 1) != 0 )
  {
    v26 = this->fields.assetManager;
    if ( v26 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v26->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = UnityEngine_Object__Instantiate_object_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v4 )
      {
        v28 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v4,
                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = (struct SubmarineNewScannerDialog_o *)v28;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.newScannerDialog,
          (int64_t)v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_28:
    sub_1C22094(v4, v5);
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4BD9103 & 1) == 0 )
  {
    sub_1C21E38(&SubmarineMapAssetManager_TypeInfo);
    byte_4BD9103 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_1C22084(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v5;
    sub_1C21DDC(p_assetManager, (int64_t)v5, v7, v8, v9, v10, v11, v12);
    if ( !p_assetManager->klass )
      sub_1C22094(0LL, v13);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v13);
  }
}


void __fastcall SubmarineMapManager__CreateContainers(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x9
  Il2CppObject *PanelContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct SubmarineMapAssetManager_o *v14; // x8
  struct ScrTerminalMap_o *v15; // x9
  Il2CppObject *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v17; // x0
  Il2CppObject *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct SubmarineMapAssetManager_o *v25; // x8
  struct ScrTerminalMap_o *v26; // x9
  Il2CppObject *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v28; // x0
  Il2CppObject *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  v2 = this;
  if ( (byte_4BD9111 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    this = (SubmarineMapManager_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9111 = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_15;
  terminalMap = v2->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_15;
  this = (SubmarineMapManager_o *)terminalMap->fields.dispRoot;
  if ( !this )
    goto LABEL_15;
  PanelContainerPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._PanelContainerPrefab_k__BackingField;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object__50551272(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.panelContainer, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = v2->fields.assetManager;
  if ( !v14 )
    goto LABEL_15;
  v15 = v2->fields.terminalMap;
  if ( !v15 )
    goto LABEL_15;
  this = (SubmarineMapManager_o *)v15->fields.dispRoot;
  if ( !this )
    goto LABEL_15;
  EffectContainerPrefab_k__BackingField = (Il2CppObject *)v14->fields._EffectContainerPrefab_k__BackingField;
  v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v18 = UnityEngine_Object__Instantiate_object__50551272(
          EffectContainerPrefab_k__BackingField,
          v17,
          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.effectContainer, (int64_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = v2->fields.assetManager;
  if ( !v25 || (v26 = v2->fields.terminalMap) == 0LL || (this = (SubmarineMapManager_o *)v26->fields.dispRoot) == 0LL )
LABEL_15:
    sub_1C22094(this, method);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v25->fields._GridLinePrefab_k__BackingField;
  v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v29 = UnityEngine_Object__Instantiate_object__50551272(
          GridLinePrefab_k__BackingField,
          v28,
          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v29;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.gridLine, (int64_t)v29, v30, v31, v32, v33, v34, v35);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  __int64 v7; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *current; // x1
  SubmarineSilhouetteData_o **v19; // x22
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  SubmarineSilhouetteData_o *v22; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  SubmarineMapDataManager_o *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v28; // x24
  __int64 v29; // x0
  __int64 v30; // x1
  SubmarineMapManager___c_c *v31; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v33; // x26
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v42; // x1
  System_Collections_Generic_List_object__o *v43; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  System_Predicate_object__o *v46; // x26
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v52; // x1
  UnityEngine_Transform_o *v53; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x0
  const MethodInfo *v59; // x1
  int v60; // s0
  struct SubmarineMapDataManager_o *v63; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  int64_t v72; // x1
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  System_Object_array *v77; // x1
  const MethodInfo *v78; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x1
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BD9133 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___77588504);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    sub_1C21E38(&SubmarineMapManager___c_TypeInfo);
    byte_4BD9133 = 1;
  }
  memset(&v93, 0, sizeof(v93));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_1C22094(SilhouetteDataList_k__BackingField, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v92,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v93 = v92;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v93,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v9 = sub_1C22084(SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    if ( !v9 )
      sub_1C22094(v10, v11);
    current = v93.fields._current;
    *(_QWORD *)(v9 + 16) = v93.fields._current;
    v19 = (SubmarineSilhouetteData_o **)(v9 + 16);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)current, v12, v13, v14, v15, v16, v17);
    v22 = *(SubmarineSilhouetteData_o **)(v9 + 16);
    if ( !v22 )
      sub_1C22094(0LL, v20);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v22, beforeClearQuestId, v21);
    if ( HasClearCondQuestId )
    {
      if ( !*v19 )
        sub_1C22094(HasClearCondQuestId, v24);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v19)->fields._ObjectQuestIds_k__BackingField, -1, 0, 0LL) )
      {
        v26 = this->fields.submarineData;
        if ( !v26 )
          sub_1C22094(0LL, v25);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v26,
                                                                                    *v19,
                                                                                    0LL);
        v28 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_object____ctor_56945064(
          v28,
          SilhouetteOccupiedPanels,
          (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___77588504);
        v31 = SubmarineMapManager___c_TypeInfo;
        if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v31 = SubmarineMapManager___c_TypeInfo;
        }
        _9__101_0 = (System_Predicate_object__o *)v31->static_fields->__9__101_0;
        if ( !_9__101_0 )
        {
          if ( !v31->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v31);
            v31 = SubmarineMapManager___c_TypeInfo;
          }
          v33 = (Il2CppObject *)v31->static_fields->__9;
          _9__101_0 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_object____ctor(
            _9__101_0,
            v33,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0LL);
          static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          static_fields->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__101_0,
            (int64_t)_9__101_0,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
        }
        if ( !v28 )
          sub_1C22094(v29, v30);
        All = System_Collections_Generic_List_object___FindAll(
                v28,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v43 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_1C22094(0LL, v42);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_1C22094(0LL, v42);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v46 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            v46,
            (Il2CppObject *)v9,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0LL);
          if ( !SpotList )
            sub_1C22094(v47, v48);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v46,
                 (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_1C22094(0LL, v49);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v19 )
              sub_1C22094(transform, v52);
            v53 = transform;
            SpotId_k__BackingField = (*v19)->fields._SpotId_k__BackingField;
            if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v53 )
              sub_1C22094(GobjName, GobjName);
            v56 = UnityEngine_Transform__Find(v53, GobjName, 0LL);
            if ( !v56 )
              sub_1C22094(0LL, v57);
            *(UnityEngine_Vector3_o *)&v60 = UnityEngine_Transform__get_localPosition(v56, 0LL);
            v63 = this->fields.submarineData;
            if ( !v63 )
              sub_1C22094(v58, v59);
            Settings_k__BackingField = v63->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_1C22094(v58, v59);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         *(UnityEngine_Vector3_o *)&v60,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v59);
            v72 = (int64_t)MoveCameraToPositionTask;
            if ( !v5 )
              sub_1C22094(MoveCameraToPositionTask, MoveCameraToPositionTask);
            items = v5->fields._items;
            v74 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v5->fields._version;
            if ( !items )
              sub_1C22094(MoveCameraToPositionTask, MoveCameraToPositionTask);
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                MoveCameraToPositionTask,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
            }
            else
            {
              v76 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v76[4] = (Il2CppClass *)v72;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v76 + 4), v72, v66, v67, v68, v69, v70, v71);
            }
          }
          v77 = System_Collections_Generic_List_object___ToArray(
                  v43,
                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v77,
                                                           v78);
          v86 = (int64_t)OpenPanelsAndRevealSpotsTask;
          if ( !v5 )
            sub_1C22094(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v87 = v5->fields._items;
          v88 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
          ++v5->fields._version;
          if ( !v87 )
            sub_1C22094(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v89 = v5->fields._size;
          if ( (unsigned int)v89 >= v87->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v90 = &v87->obj.klass + v89;
            v5->fields._size = v89 + 1;
            v90[4] = (Il2CppClass *)v86;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v90 + 4), v86, v80, v81, v82, v83, v84, v85);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v93,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_4BD9130 & 1) == 0 )
  {
    sub_1C21E38(&SchedulerTaskNone_TypeInfo);
    byte_4BD9130 = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_1C22084(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v4, 0LL);
  return (SchedulerTaskBase_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateMoveCameraToPositionTask(
        SubmarineMapManager_o *this,
        UnityEngine_Vector3_o destPos,
        float size,
        float second,
        const MethodInfo *method)
{
  const MethodInfo_376F608 *v5; // x2
  float y; // s10
  float x; // s11
  MapCamera_o *mapCamera; // x19
  MapCameraPerformance_o *v12; // x0
  SchedulerTaskBase_o *v13; // x20
  System_Nullable_float__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector2__o v16; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o v17; // 0:x0.8
  System_Nullable_float__o v18; // 0:x4.8
  System_Nullable_Vector2__o v19; // 0:x0.12
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_4BD9129 & 1) == 0 )
  {
    sub_1C21E38(&MapCameraPerformance_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Vector2___ctor__);
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    byte_4BD9129 = 1;
  }
  LODWORD(v19.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v19.fields.hasValue = &v16;
  v20.fields.x = x;
  v20.fields.y = y;
  v16.fields.value.fields.y = 0.0;
  *(_QWORD *)&v16.fields.hasValue = 0LL;
  System_Nullable_Vector2____ctor(v19, v20, v5);
  v17 = (System_Nullable_float__o)&v15;
  v15 = 0LL;
  System_Nullable_float____ctor(v17, size, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
  v12 = (MapCameraPerformance_o *)sub_1C22084(MapCameraPerformance_TypeInfo);
  v18 = v15;
  v13 = (SchedulerTaskBase_o *)v12;
  MapCameraPerformance___ctor(v12, mapCamera, second, v16, v18, 15, 0LL);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__CreateNeverOpenSurrounds(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SubmarineMapManager_o *v9; // x20
  int v10; // w24
  int v11; // w25
  struct SubmarineMapAssetManager_o *v12; // x8
  ObjectDomain_o *v13; // x21
  Il2CppObject *v14; // x22
  UnityEngine_Transform_o *transform; // x23
  SubmarineMapManager_o *v16; // x22
  SubmarineMapManager_o *v17; // x23
  int v18; // s0
  SubmarineMapPanelComponent_o *v21; // x22
  struct SubmarineMapDataManager_o *v22; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v24; // x20
  int32_t v25; // w21
  int32_t v26; // w22
  int v27; // w26
  struct SubmarineMapDataManager_o *v28; // x8
  unsigned __int64 v29; // d0 OVERLAPPED
  int v30; // s1
  int v31; // s2
  struct SubmarineMapAssetManager_o *v32; // x8
  ObjectDomain_o *v33; // x23
  Il2CppObject *v34; // x24
  UnityEngine_Transform_o *v35; // x25
  SubmarineMapManager_o *v36; // x24
  SubmarineMapManager_o *v37; // x25
  int v38; // s0
  SubmarineMapPanelComponent_o *v41; // x24

  v2 = this;
  if ( (byte_4BD9113 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C21E38(&PanelUniqueIDUtil_TypeInfo);
    byte_4BD9113 = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_54;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0LL, 0LL) )
    return;
  panelContainer = (UnityEngine_Object_o *)v2->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    return;
  closedPanelTexture = (UnityEngine_Object_o *)v2->fields.closedPanelTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  submarineData = v2->fields.submarineData;
  if ( !submarineData
    || (this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
                                          submarineData->fields._PositionCalculator_k__BackingField,
                                          v2->fields.closedPanelTexture,
                                          0LL)) == 0LL )
  {
LABEL_54:
    sub_1C22094(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  v10 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = v2->fields.assetManager;
      if ( !v12 )
        goto LABEL_54;
      this = (SubmarineMapManager_o *)v2->fields.panelContainer;
      if ( !this )
        goto LABEL_54;
      v13 = (ObjectDomain_o *)*((_QWORD *)&v9->fields.mapInfo + v11);
      v14 = (Il2CppObject *)v12->fields._PanelPrefab_k__BackingField;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__50551272(
                                        v14,
                                        transform,
                                        (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
      if ( !this )
        goto LABEL_54;
      v16 = this;
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !v13 )
        goto LABEL_54;
      v17 = this;
      *(UnityEngine_Vector3_o *)&v18 = ObjectDomain__get_center(v13, 0LL);
      if ( !v17 )
        goto LABEL_54;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v17, *(UnityEngine_Vector3_o *)&v18, 0LL);
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)v16,
                                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
      if ( !this )
        goto LABEL_54;
      v21 = (SubmarineMapPanelComponent_o *)this;
      SubmarineMapPanelComponent__Initialize((SubmarineMapPanelComponent_o *)this, 0LL);
      SubmarineMapPanelComponent__SetSize(v21, v13, 0LL);
      SubmarineMapPanelComponent__SetClosedPanelTexture(v21, v13, v2->fields.closedPanelTexture, 0LL);
      SubmarineMapPanelComponent__SetClosedPanelVisible(v21, 1, 0LL);
      if ( v10 == v11 )
        break;
      if ( (unsigned int)++v11 >= LODWORD(v9->fields.m_CancellationTokenSource) )
        sub_1C2209C(this, method);
    }
  }
  this = (SubmarineMapManager_o *)v2->fields.submarineData;
  if ( !this )
    goto LABEL_54;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                    (SubmarineMapDataManager_o *)this,
                                    0LL);
  v22 = v2->fields.submarineData;
  if ( !v22 )
    goto LABEL_54;
  PositionCalculator_k__BackingField = v22->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_54;
  v24 = this;
  v25 = 0;
  while ( v25 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
  {
    v26 = 0;
    v27 = 1;
    while ( v26 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
    {
      if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
      this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v25, v26, (System_Int32_array *)v24, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = v2->fields.submarineData;
        if ( !v28 )
          goto LABEL_54;
        this = (SubmarineMapManager_o *)v28->fields._PositionCalculator_k__BackingField;
        if ( !this )
          goto LABEL_54;
        v29 = vadd_f32(
                (float32x2_t)this->fields.mapInfo,
                vmul_f32(
                  vmul_f32(
                    *(float32x2_t *)&this->fields.m_CachedPtr,
                    vcvt_f32_s32(
                      vsub_s32(
                        (int32x2_t)__PAIR64__(v27, (2 * v25) | 1u),
                        (int32x2_t)this->fields.m_CancellationTokenSource))),
                  (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v30 = HIDWORD(v29);
        v31 = 0;
        this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                          *(UnityEngine_Vector3_o *)&v29,
                                          (SubmarinePanelPositionCalculator_o *)this,
                                          0LL);
        v32 = v2->fields.assetManager;
        if ( !v32 )
          goto LABEL_54;
        v33 = (ObjectDomain_o *)this;
        this = (SubmarineMapManager_o *)v2->fields.panelContainer;
        if ( !this )
          goto LABEL_54;
        v34 = (Il2CppObject *)v32->fields._PanelPrefab_k__BackingField;
        v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__50551272(
                                          v34,
                                          v35,
                                          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
        if ( !this )
          goto LABEL_54;
        v36 = this;
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !v33 )
          goto LABEL_54;
        v37 = this;
        *(UnityEngine_Vector3_o *)&v38 = ObjectDomain__get_center(v33, 0LL);
        if ( !v37 )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v36,
                                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
        if ( !this )
          goto LABEL_54;
        v41 = (SubmarineMapPanelComponent_o *)this;
        SubmarineMapPanelComponent__Initialize((SubmarineMapPanelComponent_o *)this, 0LL);
        SubmarineMapPanelComponent__SetSize(v41, v33, 0LL);
        SubmarineMapPanelComponent__SetClosedPanelTexture(v41, v33, v2->fields.closedPanelTexture, 0LL);
        SubmarineMapPanelComponent__SetClosedPanelVisible(v41, 1, 0LL);
      }
      v22 = v2->fields.submarineData;
      if ( v22 )
      {
        PositionCalculator_k__BackingField = v22->fields._PositionCalculator_k__BackingField;
        ++v26;
        v27 += 2;
        if ( PositionCalculator_k__BackingField )
          continue;
      }
      goto LABEL_54;
    }
    PositionCalculator_k__BackingField = v22->fields._PositionCalculator_k__BackingField;
    ++v25;
    if ( !PositionCalculator_k__BackingField )
      goto LABEL_54;
  }
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effectContainer; // x0
  const MethodInfo_376FA28 *v8; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v10; // x22
  SchedulerTaskCommonEffect_o *v11; // x0
  int64_t v12; // x21
  _QWORD *v13; // x22
  System_Delegate_o *v14; // x23
  SchedulerTaskBase_TaskCallback_o *v15; // x24
  System_Delegate_o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x8
  SchedulerTaskBase_TaskCallback_c *v24; // x1
  SchedulerTaskBase_array *v25; // x22
  SchedulerTaskWaitTime_o *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  SchedulerTaskOrthostichy_o *v39; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v42; // s8
  System_Collections_Generic_List_object__o *v43; // x22
  SchedulerTaskWaitTime_o *v44; // x23
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  const MethodInfo *v55; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v57; // x19
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  SchedulerTaskBase_array *v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  SchedulerTaskParallel_o *v71; // x19
  __int64 v73; // x0
  System_Nullable_Vector3__o v74; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v75; // 0:x0.16
  System_Nullable_Vector3__o v76; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD912D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Vector3___ctor__);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskCommonEffect_TypeInfo);
    sub_1C21E38(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapPanelData_OpenPanel__);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4BD912D = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_32;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  *(_QWORD *)&v75.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  v10 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v75.fields.hasValue = &v74;
  *(_QWORD *)&v74.fields.hasValue = 0LL;
  *(_QWORD *)&v74.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v75, LocalPosition_k__BackingField, v8);
  v11 = (SchedulerTaskCommonEffect_o *)sub_1C22084(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v76.fields.hasValue = 0LL;
  *(_QWORD *)&v76.fields.value.fields.y = 0LL;
  v12 = (int64_t)v11;
  SchedulerTaskCommonEffect___ctor_42552280(
    v11,
    v10,
    effectScanedPanelObjPool,
    v74,
    v76,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v12 )
    goto LABEL_32;
  v13 = (_QWORD *)(v12 + 24);
  v14 = *(System_Delegate_o **)(v12 + 24);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v15, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v16 = System_Delegate__Combine(v14, (System_Delegate_o *)v15, 0LL);
  v23 = (int64_t)v16;
  if ( v16 )
  {
    v24 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v13 = v16;
      if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == v24 )
        goto LABEL_11;
    }
    sub_1C22354(v16);
  }
  *v13 = v23;
LABEL_11:
  sub_1C21DDC((PartyOrganizationUtility_o *)(v12 + 24), v23, v17, v18, v19, v20, v21, v22);
  v25 = (SchedulerTaskBase_array *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL);
  v26 = (SchedulerTaskWaitTime_o *)sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v26, waitTime, 0LL);
  if ( !v25 )
    goto LABEL_32;
  if ( v26 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C21F74(v26, v25->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v25->max_length )
    goto LABEL_33;
  v25->m_Items[0] = (SchedulerTaskBase_o *)v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)v25->m_Items, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  effectContainer = (UnityEngine_GameObject_o *)sub_1C21F74(v12, v25->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( v25->max_length <= 1 )
    goto LABEL_33;
  v25->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v25->m_Items[1], v12, v33, v34, v35, v36, v37, v38);
  v39 = (SchedulerTaskOrthostichy_o *)sub_1C22084(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v39, v25, 0LL);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v42 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v43 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v44 = (SchedulerTaskWaitTime_o *)sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v44, v42, 0LL);
  if ( !v43 )
    goto LABEL_32;
  items = v43->fields._items;
  v52 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v43->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v43->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v43,
      (Il2CppObject *)v44,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &items->obj.klass + size;
    v43->fields._size = size + 1;
    v54[4] = (Il2CppClass *)v44;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v44, v45, v46, v47, v48, v49, v50);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v55);
  System_Collections_Generic_List_object___AddRange(
    v43,
    RevealSpotOnPanelTasks,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v57 = (SchedulerTaskOrthostichy_o *)sub_1C22084(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor_42555136(v57, (System_Collections_Generic_List_SchedulerTaskBase__o *)v43, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !effectContainer )
LABEL_32:
    sub_1C22094(effectContainer, panelData);
  v64 = (SchedulerTaskBase_array *)effectContainer;
  if ( v39 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C21F74(v39, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v64->max_length )
    goto LABEL_33;
  v64->m_Items[0] = (SchedulerTaskBase_o *)v39;
  sub_1C21DDC((PartyOrganizationUtility_o *)v64->m_Items, (int64_t)v39, v58, v59, v60, v61, v62, v63);
  if ( v57 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C21F74(v57, v64->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v73 = sub_1C220B8();
      sub_1C21F60(v73, 0LL);
    }
  }
  if ( v64->max_length <= 1 )
LABEL_33:
    sub_1C2209C(effectContainer, panelData);
  v64->m_Items[1] = (SchedulerTaskBase_o *)v57;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v64->m_Items[1], (int64_t)v57, v65, v66, v67, v68, v69, v70);
  v71 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v71, v64, 0LL);
  return (SchedulerTaskBase_o *)v71;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_array *panelDataArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppObject *OpenPanelAndRevealSpotTask; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  __int64 v9; // x8
  unsigned __int64 v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  int64_t v20; // x1
  Il2CppClass **v21; // x0
  SchedulerTaskParallel_o *v22; // x19

  if ( (byte_4BD912E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    byte_4BD912E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  v9 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
        sub_1C2209C(OpenPanelAndRevealSpotTask, v7);
      OpenPanelAndRevealSpotTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                     this,
                                                     panelDataArray->m_Items[v10],
                                                     0.0,
                                                     v8);
      if ( !v5 )
        break;
      items = v5->fields._items;
      v18 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      v20 = (int64_t)OpenPanelAndRevealSpotTask;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          OpenPanelAndRevealSpotTask,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v20;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), v20, v11, v12, v13, v14, v15, v16);
      }
      LODWORD(v9) = panelDataArray->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C22094(OpenPanelAndRevealSpotTask, v7);
  }
LABEL_13:
  v22 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_42556168(v22, (System_Collections_Generic_List_SchedulerTaskBase__o *)v5, 0LL);
  return (SchedulerTaskBase_o *)v22;
}


void __fastcall SubmarineMapManager__CreatePanels(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct SubmarineMapAssetManager_o *v10; // x8
  UnityEngine_GameObject_o *v11; // x0
  Il2CppObject *current; // x20
  Il2CppObject *v13; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  UnityEngine_GameObject_o *v17; // x22
  Il2CppObject *Component_object; // x0
  __int64 v19; // x1
  struct SubmarineMapDataManager_o *v20; // x8
  SubmarineMapPanelComponent_o *v21; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v23; // s8
  float v24; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  __int64 v26; // x1
  ObjectDomain_o *v27; // x23
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Action_object__o *v34; // x21
  const MethodInfo *v35; // x2
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4BD9112 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C21E38(&Method_SubmarineMapManager_ClickPanel__);
    byte_4BD9112 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_36;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0LL, 0LL) )
  {
    panelContainer = (UnityEngine_Object_o *)v2->fields.panelContainer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)v2->fields.closedPanelTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        submarineData = v2->fields.submarineData;
        if ( submarineData )
        {
          this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField;
          if ( this )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v36,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v37 = v36;
            while ( 1 )
            {
              v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v37,
                     (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v8 )
                break;
              v10 = v2->fields.assetManager;
              if ( !v10 )
                sub_1C22094(v8, v9);
              v11 = v2->fields.panelContainer;
              if ( !v11 )
                sub_1C22094(0LL, v9);
              current = v37.fields._current;
              v13 = (Il2CppObject *)v10->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v11, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v15 = UnityEngine_Object__Instantiate_object__50551272(
                      v13,
                      transform,
                      (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
              v17 = (UnityEngine_GameObject_o *)v15;
              if ( !v15 )
                sub_1C22094(0LL, v16);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v15,
                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v20 = v2->fields.submarineData;
              if ( !v20 )
                sub_1C22094(Component_object, v19);
              if ( !current )
                sub_1C22094(Component_object, v19);
              v21 = (SubmarineMapPanelComponent_o *)Component_object;
              PositionCalculator_k__BackingField = v20->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_1C22094(0LL, v19);
              v23 = PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.x
                                  * (float)(((2 * LODWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField))
                          * 0.5);
              v24 = PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.y
                                  * (float)(((2 * HIDWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField))
                          * 0.5);
              v38.fields.z = 0.0;
              v38.fields.x = v23;
              v38.fields.y = v24;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v38,
                                    PositionCalculator_k__BackingField,
                                    0LL);
              if ( !v21 )
                sub_1C22094(ClosedPanelDomain, v26);
              v27 = ClosedPanelDomain;
              SubmarineMapPanelComponent__Initialize(v21, 0LL);
              v39.fields.z = 0.0;
              v39.fields.x = v23;
              v39.fields.y = v24;
              GameObjectExtensions__SetLocalPosition(v17, v39, 0LL);
              SubmarineMapPanelComponent__SetSize(v21, v27, 0LL);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v21, v27, v2->fields.closedPanelTexture, 0LL);
              current[3].klass = (Il2CppClass *)v21;
              sub_1C21DDC((PartyOrganizationUtility_o *)&current[3], (int64_t)v21, v28, v29, v30, v31, v32, v33);
              v34 = (System_Action_object__o *)sub_1C22084(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_object____ctor(
                v34,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                0LL);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v34,
                v35);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v37,
              (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_1C22094(this, method);
      }
    }
  }
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealEachSpotsTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  void *Children; // x0
  __int64 v5; // x1
  int v6; // w8
  void *v7; // x21
  unsigned int v8; // w23
  Il2CppObject *Component_object; // x22
  const MethodInfo *v10; // x2

  if ( (byte_4BD9131 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9131 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_15;
  v6 = *((_DWORD *)Children + 6);
  v7 = Children;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
        sub_1C2209C(Children, v5);
      Children = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v10);
        if ( !v3 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v3,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
    }
LABEL_15:
    sub_1C22094(Children, v5);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotOnPanelTasks(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x22
  MapControl_MapInfo_o *mapInfo; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x21
  System_Collections_Generic_List_object__o *v15; // x20
  SchedulerTaskNone_o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_object__o *SpotList; // x23
  System_Predicate_object__o *v28; // x24
  __int64 v29; // x8
  UnityEngine_Transform_o *v30; // x21
  int32_t v31; // w22
  UnityEngine_Object_o *v32; // x21
  Il2CppObject *Component_object; // x1
  const MethodInfo *v35; // x2

  if ( (byte_4BD912C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C21E38(&SchedulerTaskNone_TypeInfo);
    sub_1C21E38(&SrcSpotBasePrefab_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
    byte_4BD912C = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = panelData;
  v14 = v5 + 16;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)panelData, v8, v9, v10, v11, v12, v13);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v16 = (SchedulerTaskNone_o *)sub_1C22084(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v16, 0LL);
  if ( !v15 )
    goto LABEL_25;
  items = v15->fields._items;
  v24 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v15->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v16,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v16;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v16, v17, v18, v19, v20, v21, v22);
  }
  if ( !*(_QWORD *)v14 || *(int *)(*(_QWORD *)v14 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v28 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_MapControl_SpotInfo__TypeInfo);
  System_Predicate_object____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__,
    0LL);
  if ( !SpotList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Find(
          SpotList,
          (System_Predicate_T__o *)v28,
          (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_25;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v29 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_25;
  v30 = (UnityEngine_Transform_o *)mapInfo;
  v31 = *(_DWORD *)(v29 + 40);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v31, 0LL);
  if ( !v30 )
    goto LABEL_25;
  v32 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v30, (System_String_o *)mapInfo, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v32, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  if ( !v32 )
LABEL_25:
    sub_1C22094(mapInfo, v7);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v32,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v35);
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotTasks(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  __int64 v7; // x1
  SpotEntity_o *Mine; // x21
  const MethodInfo *v9; // x2
  int64_t v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  int64_t v27; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4BD9132 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&SubmarineLightenSpotPerformance_TypeInfo);
    sub_1C21E38(&SubmarineRevealSpotPerformance_TypeInfo);
    byte_4BD9132 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v9);
  v10 = sub_1C22084(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v10, 0LL);
  *(_QWORD *)(v10 + 48) = spot;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v10 + 48), (int64_t)spot, v11, v12, v13, v14, v15, v16);
  if ( !v5 )
    goto LABEL_20;
  items = v5->fields._items;
  v24 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v10,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v10;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), v10, v17, v18, v19, v20, v21, v22);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  v27 = sub_1C22084(SubmarineLightenSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v27, 0LL);
  *(_QWORD *)(v27 + 48) = spot;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 48), (int64_t)spot, v28, v29, v30, v31, v32, v33);
  v40 = v5->fields._items;
  v41 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v5->fields._version;
  if ( !v40 )
LABEL_20:
    sub_1C22094(mMapCtrl_SpotInfo, v7);
  v42 = v5->fields._size;
  if ( (unsigned int)v42 >= v40->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v27,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &v40->obj.klass + v42;
    v5->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)v27;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v43 + 4), v27, v34, v35, v36, v37, v38, v39);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateScanOpenPanelTask(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  float ScanOpenPanelInterval; // s8
  SubmarineMapManager___c_c *v13; // x8
  System_Collections_Generic_List_object__o *v14; // x21
  System_Predicate_object__o *_9__97_0; // x22
  Il2CppObject *v16; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x21
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v28; // x23
  struct SubmarineMapManager___c_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int32_t v36; // w23
  __int64 v37; // x22
  int v38; // w29
  float v39; // s9
  System_Predicate_object__o *v40; // x23
  System_Collections_Generic_List_T__o *v41; // x23
  System_Collections_Generic_List_object__o *v42; // x0
  _BOOL8 v43; // x0
  __int64 v44; // x1
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v46; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v48; // x2
  float v49; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  Il2CppObject *v57; // x1
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v63; // w8
  SchedulerTaskParallel_o *v64; // x19
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4BD912F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_1C21E38(&System_Func_SubmarineScanEvent__int__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&System_Predicate_SubmarineScanEvent__TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__);
    sub_1C21E38(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
    sub_1C21E38(&SubmarineMapManager___c_TypeInfo);
    byte_4BD912F = 1;
  }
  memset(&v67, 0, sizeof(v67));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_48;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_48;
  ScanOpenPanelInterval = SubmarineSettingsManager__GetScanOpenPanelInterval(Settings_k__BackingField, scanId, v10);
  Settings_k__BackingField = (SubmarineSettingsManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                                             scanId,
                                                             panelData,
                                                             this->fields.submarineData,
                                                             0LL);
  v13 = SubmarineMapManager___c_TypeInfo;
  v14 = (System_Collections_Generic_List_object__o *)Settings_k__BackingField;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v13 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_0 = (System_Predicate_object__o *)v13->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = SubmarineMapManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__97_0 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_object____ctor(
      _9__97_0,
      v16,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__,
      0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__97_0,
      (int64_t)_9__97_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v14 )
    goto LABEL_48;
  All = System_Collections_Generic_List_object___FindAll(
          v14,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v25 = SubmarineMapManager___c_TypeInfo;
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v25 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_1 = (System_Func_object__int__o *)v25->static_fields->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = SubmarineMapManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__97_1,
      v28,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__,
      0LL);
    v29 = SubmarineMapManager___c_TypeInfo->static_fields;
    v29->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v29->__9__97_1, (int64_t)_9__97_1, v30, v31, v32, v33, v34, v35);
  }
  v36 = System_Linq_Enumerable__Max_object_(
          v26,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_2FD7B90 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v37 = sub_1C22084(SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  if ( !v37 )
LABEL_48:
    sub_1C22094(Settings_k__BackingField, v9);
  v38 = v36 + 1;
  *(_DWORD *)(v37 + 16) = 0;
  if ( v36 + 1 >= 1 )
  {
    v39 = 0.0;
    do
    {
      v40 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_object____ctor(
        v40,
        (Il2CppObject *)v37,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0LL);
      if ( !v26 )
        goto LABEL_48;
      v41 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v26,
              (System_Predicate_T__o *)v40,
              (const MethodInfo_364F7C4 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v42 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v42,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v41 )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v66,
        (System_Collections_Generic_List_object__o *)v41,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v67 = v66;
      while ( 1 )
      {
        v43 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v67,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v43 )
          break;
        current = v67.fields._current;
        if ( !v67.fields._current )
          sub_1C22094(v43, v44);
        v46 = this->fields.submarineData;
        if ( !v46 )
          sub_1C22094(0LL, v44);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v46,
                           (int32_t)v67.fields._current[1].klass,
                           HIDWORD(v67.fields._current[1].klass),
                           0LL);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v49,
                                v48);
            v57 = (Il2CppObject *)HitObstractTask;
            if ( !v7 )
              sub_1C22094(HitObstractTask, HitObstractTask);
            items = v7->fields._items;
            v59 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v7->fields._version;
            if ( !items )
              sub_1C22094(HitObstractTask, HitObstractTask);
            size = v7->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v57,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v39,
                                           v48);
            v57 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v7 )
              sub_1C22094(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            items = v7->fields._items;
            v59 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v7->fields._version;
            if ( !items )
              sub_1C22094(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_32:
            v61 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v61[4] = (Il2CppClass *)v57;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)v57, v51, v52, v53, v54, v55, v56);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v67,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v39 = ScanOpenPanelInterval + v39;
      v63 = *(_DWORD *)(v37 + 16) + 1;
      *(_DWORD *)(v37 + 16) = v63;
    }
    while ( v63 < v38 );
  }
  v64 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_42556168(v64, (System_Collections_Generic_List_SchedulerTaskBase__o *)v7, 0LL);
  return (SchedulerTaskBase_o *)v64;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateScanTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        int32_t scanId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 MoveCameraToPositionTask; // x0
  const MethodInfo *v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v18; // d11
  float32x2_t v19; // d9
  int32x2_t v20; // d10
  float32x2_t v21; // d8
  System_Collections_Generic_List_object__o *v22; // x19
  struct SubmarineMapDataManager_o *v23; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v25; // d0 OVERLAPPED
  float v26; // s8
  int v27; // s2
  int v28; // s1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  int64_t v38; // x1
  Il2CppClass **v39; // x0
  const MethodInfo *v40; // x2
  Il2CppObject *ScanAnimObjectPrefab; // x22
  const MethodInfo *v42; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v44; // s2
  float v45; // s0
  float v46; // s1
  float v47; // s9
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v49; // x0
  int64_t v50; // x24
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  Il2CppObject *Component_object; // x22
  float32x2_t v58; // d0
  struct SubmarineMapDataManager_o *v59; // x8
  struct SubmarineSettingsManager_o *v60; // x8
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  int64_t v70; // x1
  Il2CppClass **v71; // x0
  float JumpStartTime; // s10
  __int64 v73; // x28
  int64_t v74; // x25
  System_Delegate_o *v75; // x26
  SchedulerTaskBase_TaskCallback_o *v76; // x27
  System_Delegate_o *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x8
  SchedulerTaskBase_TaskCallback_c *v85; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v87; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v88; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v91; // x0
  __int64 v92; // x25
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  System_String_o *v99; // x27
  SchedulerTaskWaitLoadAsset_o *v100; // x26
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  int64_t v111; // x2
  int32_t v112; // w3
  System_String_o *v113; // x4
  BattleSetupInfo_o *v114; // x5
  FollowerInfo_o *v115; // x6
  PartyListViewItem_o *v116; // x7
  int64_t v117; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x1
  float v125; // s10
  System_Delegate_o *v126; // x27
  SchedulerTaskBase_TaskCallback_o *v127; // x28
  System_Delegate_o *v128; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7
  SchedulerTaskBase_TaskCallback_c *v135; // x1
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  struct System_Object_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  Il2CppClass **v145; // x0
  float SelectedPanelEffecFinishTime; // s10
  System_Delegate_o *v147; // x27
  SchedulerTaskBase_TaskCallback_o *v148; // x28
  System_Delegate_o *v149; // x0
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  SchedulerTaskBase_TaskCallback_c *v156; // x1
  __int64 *v157; // x27
  const MethodInfo_376F608 *v158; // x2
  float JumpDuration; // s10
  float x; // s0
  float32x2_t v161; // d12
  MapCamera_o *mapCamera; // x21
  float v163; // s1
  MapCameraPerformance_o *v164; // x0
  int64_t v165; // x26
  UnityEngine_GameObject_o *v166; // x24
  SchedulerTaskMovePerformance_o *v167; // x0
  int64_t v168; // x21
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  SchedulerTaskBase_array *v175; // x24
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  SimpleAnimation_o *AnimationComponent; // x26
  System_String_o *AnimName; // x27
  System_Delegate_o *v184; // x27
  SchedulerTaskBase_TaskCallback_o *v185; // x28
  System_Delegate_o *v186; // x0
  int64_t v187; // x2
  int32_t v188; // w3
  System_String_o *v189; // x4
  BattleSetupInfo_o *v190; // x5
  FollowerInfo_o *v191; // x6
  PartyListViewItem_o *v192; // x7
  SchedulerTaskBase_TaskCallback_c *v193; // x1
  int64_t v194; // x27
  __int64 v195; // x20
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  __int64 v202; // x24
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7
  SchedulerTaskOrthostichy_o *v215; // x21
  int64_t v216; // x2
  int32_t v217; // w3
  System_String_o *v218; // x4
  BattleSetupInfo_o *v219; // x5
  FollowerInfo_o *v220; // x6
  PartyListViewItem_o *v221; // x7
  SchedulerTaskParallel_o *v222; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v224; // x20
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  struct System_Object_array *v231; // x8
  _QWORD *v232; // x9
  __int64 v233; // x10
  Il2CppClass **v234; // x0
  int64_t v235; // x2
  int32_t v236; // w3
  System_String_o *v237; // x4
  BattleSetupInfo_o *v238; // x5
  FollowerInfo_o *v239; // x6
  PartyListViewItem_o *v240; // x7
  struct System_Object_array *v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  Il2CppClass **v244; // x0
  int64_t v245; // x2
  int32_t v246; // w3
  System_String_o *v247; // x4
  BattleSetupInfo_o *v248; // x5
  FollowerInfo_o *v249; // x6
  PartyListViewItem_o *v250; // x7
  struct System_Object_array *v251; // x8
  _QWORD *v252; // x9
  __int64 v253; // x10
  Il2CppClass **v254; // x0
  __int64 v256; // x0
  __int64 v257; // [xsp+8h] [xbp-E8h]
  float v258; // [xsp+20h] [xbp-D0h]
  float v259; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v264; // 0:x4.8
  System_Nullable_Vector2__o v265; // 0:x0.12
  UnityEngine_Vector3_o v266; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v267; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v268; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v269; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4BD912B & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    sub_1C21E38(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&MapCameraPerformance_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_Vector2___ctor__);
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskMovePerformance_TypeInfo);
    sub_1C21E38(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C21E38(&SchedulerTaskParallel_TypeInfo);
    sub_1C21E38(&SchedulerTaskSimpleAnimation_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitLoadAsset_TypeInfo);
    sub_1C21E38(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
    byte_4BD912B = 1;
  }
  v7 = sub_1C22084(SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_126;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_126;
  if ( !panelData )
    goto LABEL_126;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_126;
  v18.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v19.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v20.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v21.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v22 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v23 = this->fields.submarineData;
  if ( !v23 )
    goto LABEL_126;
  Settings_k__BackingField = v23->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_126;
  v25 = vadd_f32(
          v21,
          vmul_f32(
            vmul_f32(v19, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v18, 1uLL).n64_u64[0] | 0x100000001LL), v20))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v26 = *((float *)&v25 + 1);
  v27 = 0;
  v28 = HIDWORD(v25);
  value = (UnityEngine_Vector2_o)v25;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v25,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v9);
  if ( !v22 )
    goto LABEL_126;
  items = v22->fields._items;
  v36 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_126;
  v37 = v22->fields._size;
  v38 = MoveCameraToPositionTask;
  if ( (unsigned int)v37 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &items->obj.klass + v37;
    v22->fields._size = v37 + 1;
    v39[4] = (Il2CppClass *)v38;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 4), v38, v29, v30, v31, v32, v33, v34);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  if ( !this->fields.assetManager )
    goto LABEL_126;
  ScanAnimObjectPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                           this->fields.assetManager,
                                           *(_DWORD *)(MoveCameraToPositionTask + 56),
                                           v40);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanAnimObjectPrefab, 0LL, 0LL) )
  {
    HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v42);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    MoveCameraToPositionTask = UnityEngine_Object__op_Equality(HomeSpot, 0LL, 0LL);
    if ( (MoveCameraToPositionTask & 1) == 0 )
    {
      if ( !HomeSpot )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      *(UnityEngine_Vector3_o *)(&v44 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                               0LL);
      MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
      v259 = v45;
      v258 = v46;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v47 = v44;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v49 = UnityEngine_Object__Instantiate_object__50551272(
              ScanAnimObjectPrefab,
              transform,
              (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
      *(_QWORD *)(v7 + 16) = v49;
      v50 = v7 + 16;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)v49, v51, v52, v53, v54, v55, v56);
      v266.fields.y = v258;
      v266.fields.x = v259;
      v266.fields.z = v47;
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v7 + 16), v266, 0LL);
      MoveCameraToPositionTask = *(_QWORD *)(v7 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *(UnityEngine_GameObject_o **)v50,
                           (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_4BD6BB3 )
      {
        sub_1C21E38(&System_Math_TypeInfo);
        byte_4BD6BB3 = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !Component_object )
        goto LABEL_126;
      v58.n64_u64[0] = vsub_f32((float32x2_t)__PAIR64__(LODWORD(v258), LODWORD(v259)), (float32x2_t)value).n64_u64[0];
      SubmarineScannerComponent__Initialize(
        (SubmarineScannerComponent_o *)Component_object,
        sqrtf((float)(v47 * v47) + vaddv_f32(vmul_f32(v58, v58))),
        0LL);
      if ( !SubmarineScannerComponent__IsAnimationPrepared((SubmarineScannerComponent_o *)Component_object, 0LL) )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
      v22 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v22,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v59 = this->fields.submarineData;
      if ( !v59 )
        goto LABEL_126;
      v60 = v59->fields._Settings_k__BackingField;
      if ( !v60 )
        goto LABEL_126;
      v267.fields.y = v258;
      v267.fields.x = v259;
      v267.fields.z = v47;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            v267,
                                            1.0,
                                            v60->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v9);
      if ( !v22 )
        goto LABEL_126;
      v67 = v22->fields._items;
      v68 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v22->fields._version;
      if ( !v67 )
        goto LABEL_126;
      v69 = v22->fields._size;
      v70 = MoveCameraToPositionTask;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v71 = &v67->obj.klass + v69;
        v22->fields._size = v69 + 1;
        v71[4] = (Il2CppClass *)v70;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v71 + 4), v70, v61, v62, v63, v64, v65, v66);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime((SubmarineScannerComponent_o *)Component_object, 0LL);
      v73 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v73, JumpStartTime, 0LL);
      if ( !v73 )
        goto LABEL_126;
      v74 = v73 + 24;
      v75 = *(System_Delegate_o **)(v73 + 24);
      v76 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v76,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0LL);
      v77 = System_Delegate__Combine(v75, (System_Delegate_o *)v76, 0LL);
      v84 = (int64_t)v77;
      if ( v77 )
      {
        v85 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v77->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        *(_QWORD *)v74 = v77;
        if ( (SchedulerTaskBase_TaskCallback_c *)v77->klass != v85 )
          goto LABEL_98;
      }
      else
      {
        *(_QWORD *)v74 = 0LL;
      }
      sub_1C21DDC((PartyOrganizationUtility_o *)(v73 + 24), (int64_t)v77, v78, v79, v80, v81, v82, v83);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_126;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v87 = this->fields.playingScanVoiceData;
        if ( !v87 )
          goto LABEL_126;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v87->fields.assetName, 0LL);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v88 = this->fields.playingScanVoiceData;
          if ( !v88 )
            goto LABEL_126;
          assetName = v88->fields.assetName;
          vcName = v88->fields.vcName;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
        }
      }
      v91 = GameObjectExtensions__SafeGetComponent_object_(
              *(UnityEngine_GameObject_o **)(v7 + 16),
              (const MethodInfo_300201C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v7 + 24) = v91;
      v92 = v7 + 24;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)v91, v93, v94, v95, v96, v97, v98);
      if ( !*(_QWORD *)(v7 + 24) )
        goto LABEL_126;
      v99 = *(System_String_o **)(*(_QWORD *)(v7 + 24) + 56LL);
      v100 = (SchedulerTaskWaitLoadAsset_o *)sub_1C22084(SchedulerTaskWaitLoadAsset_TypeInfo);
      SchedulerTaskWaitLoadAsset___ctor(v100, v99, 0LL);
      v107 = v22->fields._items;
      v108 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v22->fields._version;
      if ( !v107 )
        goto LABEL_126;
      v109 = v22->fields._size;
      if ( (unsigned int)v109 >= v107->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v100,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = &v107->obj.klass + v109;
        v22->fields._size = v109 + 1;
        v110[4] = (Il2CppClass *)v100;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v110 + 4), (int64_t)v100, v101, v102, v103, v104, v105, v106);
      }
      if ( !*(_QWORD *)v92 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v117 = *(_QWORD *)(*(_QWORD *)v92 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v117;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)(MoveCameraToPositionTask + 16),
        v117,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
      if ( !*(_QWORD *)v92 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask
        || (v124 = *(_QWORD *)(*(_QWORD *)v92 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v124,
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)(MoveCameraToPositionTask + 24),
              v124,
              v118,
              v119,
              v120,
              v121,
              v122,
              v123),
            !*(_QWORD *)v92)
        || (v257 = v73,
            v125 = *(float *)(*(_QWORD *)v92 + 32LL),
            v74 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v74, v125, 0LL),
            !v74) )
      {
LABEL_126:
        sub_1C22094(MoveCameraToPositionTask, v9);
      }
      v75 = (System_Delegate_o *)(v74 + 24);
      v126 = *(System_Delegate_o **)(v74 + 24);
      v127 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v127,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0LL);
      v128 = System_Delegate__Combine(v126, (System_Delegate_o *)v127, 0LL);
      v84 = (int64_t)v128;
      if ( v128 )
      {
        v135 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v128->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v75->klass = (System_Delegate_c *)v128;
        if ( (SchedulerTaskBase_TaskCallback_c *)v128->klass != v135 )
          goto LABEL_98;
      }
      else
      {
        v75->klass = 0LL;
      }
      sub_1C21DDC((PartyOrganizationUtility_o *)(v74 + 24), (int64_t)v128, v129, v130, v131, v132, v133, v134);
      v142 = v22->fields._items;
      v143 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v22->fields._version;
      if ( !v142 )
        goto LABEL_126;
      v144 = v22->fields._size;
      if ( (unsigned int)v144 >= v142->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v74,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
      }
      else
      {
        v145 = &v142->obj.klass + v144;
        v22->fields._size = v144 + 1;
        v145[4] = (Il2CppClass *)v74;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v145 + 4), v74, v136, v137, v138, v139, v140, v141);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
                                       (SubmarineScannerComponent_o *)Component_object,
                                       0LL);
      v74 = sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v74, SelectedPanelEffecFinishTime, 0LL);
      if ( !v74 )
        goto LABEL_126;
      v75 = (System_Delegate_o *)(v74 + 32);
      v147 = *(System_Delegate_o **)(v74 + 32);
      v148 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v148,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0LL);
      v149 = System_Delegate__Combine(v147, (System_Delegate_o *)v148, 0LL);
      v84 = (int64_t)v149;
      if ( v149 )
      {
        v156 = SchedulerTaskBase_TaskCallback_TypeInfo;
        v157 = &qword_4BD6000;
        if ( (SchedulerTaskBase_TaskCallback_c *)v149->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v75->klass = (System_Delegate_c *)v149;
        if ( (SchedulerTaskBase_TaskCallback_c *)v149->klass != v156 )
          goto LABEL_98;
      }
      else
      {
        v75->klass = 0LL;
        v157 = &qword_4BD6000;
      }
      sub_1C21DDC((PartyOrganizationUtility_o *)(v74 + 32), (int64_t)v149, v150, v151, v152, v153, v154, v155);
      *(_BYTE *)(v74 + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration((SubmarineScannerComponent_o *)Component_object, 0LL);
      if ( !*((_BYTE *)v157 + 2995) )
      {
        sub_1C21E38(&System_Math_TypeInfo);
        *((_BYTE *)v157 + 2995) = 1;
      }
      x = value.fields.x;
      v161.n64_u64[0] = vsub_f32((float32x2_t)value, (float32x2_t)__PAIR64__(LODWORD(v258), LODWORD(v259))).n64_u64[0];
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        x = value.fields.x;
      }
      mapCamera = this->fields.mapCamera;
      position.fields.value.fields.y = 0.0;
      LODWORD(v265.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&v265.fields.hasValue = &position;
      v163 = v26;
      *(_QWORD *)&position.fields.hasValue = 0LL;
      System_Nullable_Vector2____ctor(v265, *(UnityEngine_Vector2_o *)&x, v158);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, 1.0, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
      v164 = (MapCameraPerformance_o *)sub_1C22084(MapCameraPerformance_TypeInfo);
      v264 = size;
      v165 = (int64_t)v164;
      MapCameraPerformance___ctor(v164, mapCamera, JumpDuration, position, v264, 0, 0LL);
      v166 = *(UnityEngine_GameObject_o **)v50;
      v167 = (SchedulerTaskMovePerformance_o *)sub_1C22084(SchedulerTaskMovePerformance_TypeInfo);
      v269.fields.z = 0.0;
      v268.fields.y = v258;
      v268.fields.x = v259;
      v268.fields.z = v47;
      v269.fields.x = value.fields.x;
      v269.fields.y = v26;
      v168 = (int64_t)v167;
      SchedulerTaskMovePerformance___ctor(
        v167,
        v166,
        v268,
        v269,
        sqrtf((float)((float)(0.0 - v47) * (float)(0.0 - v47)) + vaddv_f32(vmul_f32(v161, v161))) / JumpDuration,
        0,
        0LL);
      MoveCameraToPositionTask = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v175 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v165 )
      {
        MoveCameraToPositionTask = sub_1C21F74(v165, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( !v175->max_length )
        goto LABEL_127;
      v175->m_Items[0] = (SchedulerTaskBase_o *)v165;
      sub_1C21DDC((PartyOrganizationUtility_o *)v175->m_Items, v165, v169, v170, v171, v172, v173, v174);
      if ( v168 )
      {
        MoveCameraToPositionTask = sub_1C21F74(v168, v175->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( v175->max_length <= 1 )
        goto LABEL_127;
      v175->m_Items[1] = (SchedulerTaskBase_o *)v168;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v175->m_Items[1], v168, v176, v177, v178, v179, v180, v181);
      this = (SubmarineMapManager_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v175, 0LL);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(
                             (SubmarineScannerComponent_o *)Component_object,
                             0LL);
      AnimName = SubmarineScannerComponent__get_AnimName((SubmarineScannerComponent_o *)Component_object, 0LL);
      v50 = sub_1C22084(SchedulerTaskSimpleAnimation_TypeInfo);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v50, AnimationComponent, AnimName, 0LL);
      if ( !v50 )
        goto LABEL_126;
      v75 = (System_Delegate_o *)(v50 + 32);
      v184 = *(System_Delegate_o **)(v50 + 32);
      v185 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v185,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0LL);
      v186 = System_Delegate__Combine(v184, (System_Delegate_o *)v185, 0LL);
      v84 = (int64_t)v186;
      if ( !v186 )
        goto LABEL_99;
      v193 = SchedulerTaskBase_TaskCallback_TypeInfo;
      v194 = v257;
      if ( (SchedulerTaskBase_TaskCallback_c *)v186->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v75->klass = (System_Delegate_c *)v186;
        if ( (SchedulerTaskBase_TaskCallback_c *)v186->klass == v193 )
        {
LABEL_100:
          sub_1C21DDC((PartyOrganizationUtility_o *)v75, v84, v187, v188, v189, v190, v191, v192);
          MoveCameraToPositionTask = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_126;
          v195 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_1C21F74(v50, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v195 + 24) )
              goto LABEL_127;
            *(_QWORD *)(v195 + 32) = v50;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v195 + 32), v50, v196, v197, v198, v199, v200, v201);
            MoveCameraToPositionTask = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_126;
            v202 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_1C21F74(v194, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v202 + 24) )
                goto LABEL_127;
              *(_QWORD *)(v202 + 32) = v194;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v202 + 32), v194, v203, v204, v205, v206, v207, v208);
              if ( !this || (MoveCameraToPositionTask = sub_1C21F74(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v202 + 24) <= 1u )
                  goto LABEL_127;
                *(_QWORD *)(v202 + 40) = this;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)(v202 + 40),
                  (int64_t)this,
                  v209,
                  v210,
                  v211,
                  v212,
                  v213,
                  v214);
                v215 = (SchedulerTaskOrthostichy_o *)sub_1C22084(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v215, (SchedulerTaskBase_array *)v202, 0LL);
                if ( !v215 || (MoveCameraToPositionTask = sub_1C21F74(v215, *(_QWORD *)(*(_QWORD *)v195 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v195 + 24) > 1u )
                  {
                    *(_QWORD *)(v195 + 40) = v215;
                    sub_1C21DDC(
                      (PartyOrganizationUtility_o *)(v195 + 40),
                      (int64_t)v215,
                      v216,
                      v217,
                      v218,
                      v219,
                      v220,
                      v221);
                    v222 = (SchedulerTaskParallel_o *)sub_1C22084(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v222, (SchedulerTaskBase_array *)v195, 0LL);
                    if ( v222 )
                    {
                      v222->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(
                                               (SubmarineScannerComponent_o *)Component_object,
                                               0LL);
                      v224 = (SchedulerTaskWaitTime_o *)sub_1C22084(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v224, TimeToStartOpenPanel, 0LL);
                      v231 = v22->fields._items;
                      v232 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v22->fields._version;
                      if ( v231 )
                      {
                        v233 = v22->fields._size;
                        if ( (unsigned int)v233 >= v231->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v22,
                            (Il2CppObject *)v74,
                            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v234 = &v231->obj.klass + v233;
                          v22->fields._size = v233 + 1;
                          v234[4] = (Il2CppClass *)v74;
                          sub_1C21DDC((PartyOrganizationUtility_o *)(v234 + 4), v74, v225, v226, v227, v228, v229, v230);
                        }
                        v241 = v22->fields._items;
                        v242 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v22->fields._version;
                        if ( v241 )
                        {
                          v243 = v22->fields._size;
                          if ( (unsigned int)v243 >= v241->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v22,
                              (Il2CppObject *)v222,
                              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v244 = &v241->obj.klass + v243;
                            v22->fields._size = v243 + 1;
                            v244[4] = (Il2CppClass *)v222;
                            sub_1C21DDC(
                              (PartyOrganizationUtility_o *)(v244 + 4),
                              (int64_t)v222,
                              v235,
                              v236,
                              v237,
                              v238,
                              v239,
                              v240);
                          }
                          v251 = v22->fields._items;
                          v252 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v22->fields._version;
                          if ( v251 )
                          {
                            v253 = v22->fields._size;
                            if ( (unsigned int)v253 >= v251->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v22,
                                (Il2CppObject *)v224,
                                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v254 = &v251->obj.klass + v253;
                              v22->fields._size = v253 + 1;
                              v254[4] = (Il2CppClass *)v224;
                              sub_1C21DDC(
                                (PartyOrganizationUtility_o *)(v254 + 4),
                                (int64_t)v224,
                                v245,
                                v246,
                                v247,
                                v248,
                                v249,
                                v250);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
                          }
                        }
                      }
                    }
                    goto LABEL_126;
                  }
LABEL_127:
                  sub_1C2209C(MoveCameraToPositionTask, v9);
                }
              }
            }
          }
LABEL_128:
          v256 = sub_1C220B8();
          sub_1C21F60(v256, 0LL);
        }
      }
LABEL_98:
      sub_1C22354(v84);
LABEL_99:
      v75->klass = (System_Delegate_c *)v84;
      v194 = v257;
      goto LABEL_100;
    }
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v5; // d8
  float z; // s9
  System_Collections_Generic_List_object__o *v7; // x21
  SchedulerTaskBase_o *PanelDataList_k__BackingField; // x0
  const MethodInfo *v9; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct SubmarineMapDataManager_o *v22; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Object_array *v28; // x0
  const MethodInfo *v29; // x2
  int32x2_t v30; // d1
  struct SubmarineMapDataManager_o *v31; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *v33; // x22
  unsigned __int64 v34; // d0 OVERLAPPED
  float v35; // s2
  int v36; // s1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  int64_t v46; // x1
  Il2CppClass **v47; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4BD9134 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_1C21E38(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    byte_4BD9134 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v11 )
      break;
    current = v60.fields._current;
    if ( !v60.fields._current )
      sub_1C22094(v11, v12);
    if ( !LOBYTE(v60.fields._current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v60.fields._current,
                                          -1,
                                          0LL);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v22 = this->fields.submarineData;
        if ( !v22 )
          sub_1C22094(IsPanelSatisfyCommonReleaseCond, v15);
        PositionCalculator_k__BackingField = (float32x2_t *)v22->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_1C22094(IsPanelSatisfyCommonReleaseCond, v15);
        z = z + 0.0;
        v5.n64_u64[0] = vadd_f32(
                          v5,
                          vadd_f32(
                            PositionCalculator_k__BackingField[4],
                            vmul_f32(
                              vmul_f32(
                                PositionCalculator_k__BackingField[2],
                                vcvt_f32_s32(
                                  vsub_s32(
                                    (int32x2_t)(vshl_n_s32((int32x2_t)current[1].klass, 1uLL).n64_u64[0] | 0x100000001LL),
                                    PositionCalculator_k__BackingField[3]))),
                              (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
        if ( !v7 )
          sub_1C22094(IsPanelSatisfyCommonReleaseCond, v15);
        items = v7->fields._items;
        v25 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1C22094(IsPanelSatisfyCommonReleaseCond, v15);
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            current,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v27[4] = (Il2CppClass *)current;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v27 + 4), (int64_t)current, v16, v17, v18, v19, v20, v21);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v7 )
    goto LABEL_34;
  if ( v7->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
  v28 = System_Collections_Generic_List_object___ToArray(
          v7,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                    this,
                                    (SubmarineMapPanelData_array *)v28,
                                    v29);
  v31 = this->fields.submarineData;
  if ( !v31 )
    goto LABEL_34;
  Settings_k__BackingField = v31->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_34;
  v33 = (Il2CppObject *)PanelDataList_k__BackingField;
  v30.n64_f32[0] = (float)v7->fields._size;
  v34 = vdiv_f32(v5, vdup_lane_s32(v30, 0)).n64_u64[0];
  v35 = z / v30.n64_f32[0];
  v36 = HIDWORD(v34);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                    this,
                                    *(UnityEngine_Vector3_o *)&v34,
                                    1.0,
                                    Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                    v9);
  if ( !v3 )
    goto LABEL_34;
  v43 = v3->fields._items;
  v44 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v3->fields._version;
  if ( !v43 )
    goto LABEL_34;
  v45 = v3->fields._size;
  v46 = (int64_t)PanelDataList_k__BackingField;
  if ( (unsigned int)v45 >= v43->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)PanelDataList_k__BackingField,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v47 = &v43->obj.klass + v45;
    v3->fields._size = v45 + 1;
    v47[4] = (Il2CppClass *)v46;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v47 + 4), v46, v37, v38, v39, v40, v41, v42);
  }
  v54 = v3->fields._items;
  v55 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v3->fields._version;
  if ( !v54 )
LABEL_34:
    sub_1C22094(PanelDataList_k__BackingField, v9);
  v56 = v3->fields._size;
  if ( (unsigned int)v56 >= v54->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      v33,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &v54->obj.klass + v56;
    v3->fields._size = v56 + 1;
    v57[4] = (Il2CppClass *)v33;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v33, v48, v49, v50, v51, v52, v53);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
}


void __fastcall SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct SubmarineScanConfirmDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  __int64 v5; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  PartyOrganizationUtility_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v24; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v26; // x20
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4BD911E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD911E = 1;
  }
  p_scanConfirmDialog = &this->fields.scanConfirmDialog;
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scanConfirmDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)*p_scanConfirmDialog;
    if ( !*p_scanConfirmDialog )
      goto LABEL_25;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.scanConfirmDialog, 0LL, v8, v9, v10, v11, v12, v13);
  }
  p_selectScannerDialog = &this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectScannerDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)*p_selectScannerDialog;
    if ( !*p_selectScannerDialog )
      goto LABEL_25;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v16, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selectScannerDialog, 0LL, v17, v18, v19, v20, v21, v22);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (PartyOrganizationUtility_o *)&this->fields.newScannerDialog;
  v24 = (UnityEngine_Object_o *)newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v26, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_1C21DDC(p_newScannerDialog, 0LL, v27, v28, v29, v30, v31, v32);
      return;
    }
LABEL_25:
    sub_1C22094(klass, v5);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4BD9101 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9101 = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(panelContainer, 0LL);
  UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
  SubmarineMapManager__DestroyDialog(this, v4);
  EventMapManagerBase__DestroyMapObjects((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__DoPerformancesByVariedCond(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_IEnumerable_T__o *HideEnemyOccupiedPanelTasks; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x20
  const MethodInfo *v21; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v24; // w1
  int64_t v25; // x22
  SchedulerTaskBase_TaskCallback_o *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_4BD9105 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C21E38(&SchedulerTaskNone_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
    byte_4BD9105 = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_18;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_18;
  v24 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v24,
                                                                                 v21);
  if ( !v20 )
    goto LABEL_18;
  System_Collections_Generic_List_object___AddRange(
    v20,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v25 = sub_1C22084(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v25, 0LL);
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v25 )
    goto LABEL_18;
  *(_QWORD *)(v25 + 32) = v26;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v25 + 32), (int64_t)v26, v27, v28, v29, v30, v31, v32);
  items = v20->fields._items;
  v40 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v20->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v25,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v25;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v42 + 4), v25, v33, v34, v35, v36, v37, v38);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_1C22094(HideEnemyOccupiedPanelTasks, v7);
  TaskScheduler__AddTask_42561352(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v20,
    0LL);
}


void __fastcall SubmarineMapManager__ExtractMapObjectFromAssetData(
        SubmarineMapManager_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  SubmarineMapAssetManager_o *assetManager; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct MapControl_MapInfo_o *mapInfo; // x8

  SubmarineMapManager__CreateAssetManagerIfNotExists(this, (const MethodInfo *)assetData);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || (assetManager = this->fields.assetManager) == 0LL )
    sub_1C22094(assetManager, v6);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v7);
}


void __fastcall SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.submarineData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.submarineData, 0LL, v2, v3, v4, v5, v6, v7);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, 0LL);
}


SrcSpotBasePrefab_o *__fastcall SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_array *HasChild; // x0
  __int64 v4; // x1
  Il2CppObject *v5; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  int32_t HomeSpotId_k__BackingField; // w22
  int max_length; // w8
  UnityEngine_GameObject_array *v10; // x19
  unsigned int v11; // w23
  Il2CppObject *Component_object; // x21

  if ( (byte_4BD9117 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9117 = 1;
  }
  HasChild = (UnityEngine_GameObject_array *)GameObjectExtensions__HasChild(this->fields.rootSpotP, 0LL);
  v5 = 0LL;
  if ( ((unsigned __int8)HasChild & 1) != 0 )
  {
    submarineData = this->fields.submarineData;
    if ( !submarineData
      || (Settings_k__BackingField = submarineData->fields._Settings_k__BackingField) == 0LL
      || (HomeSpotId_k__BackingField = Settings_k__BackingField->fields._HomeSpotId_k__BackingField,
          (HasChild = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL)) == 0LL) )
    {
LABEL_27:
      sub_1C22094(HasChild, v4);
    }
    max_length = HasChild->max_length;
    v10 = HasChild;
    if ( max_length >= 1 )
    {
      v11 = 0;
      v5 = 0LL;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_1C2209C(HasChild, v4);
        HasChild = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HasChild = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0LL,
                                                     0LL);
        if ( ((unsigned __int8)HasChild & 1) == 0 )
        {
          if ( !Component_object )
            goto LABEL_27;
          if ( HomeSpotId_k__BackingField == LODWORD(Component_object[9].klass) )
            return (SrcSpotBasePrefab_o *)Component_object;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          HasChild = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)v5,
                                                       0LL,
                                                       0LL);
          if ( ((unsigned __int8)HasChild & 1) != 0 )
            goto LABEL_21;
          if ( !v5 )
            goto LABEL_27;
          if ( SLODWORD(Component_object[9].klass) < SLODWORD(v5[9].klass) )
LABEL_21:
            v5 = Component_object;
        }
        max_length = v10->max_length;
        if ( (int)++v11 >= max_length )
          return (SrcSpotBasePrefab_o *)v5;
      }
    }
    return 0LL;
  }
  return (SrcSpotBasePrefab_o *)v5;
}


bool __fastcall SubmarineMapManager__HasSelfQuestAfterAction(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineMapManager_o *v3; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t QuestId_k__BackingField; // w1
  System_Collections_Generic_List_object__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v8; // x1

  v3 = this;
  if ( (byte_4BD9104 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    this = (SubmarineMapManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    byte_4BD9104 = 1;
  }
  submarineData = v3->fields.submarineData;
  if ( !submarineData
    || (BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField) == 0LL
    || (!BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     && !BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? (QuestId_k__BackingField = -1)
      : (QuestId_k__BackingField = BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField),
        HideEnemyOccupiedPanelTasks = (System_Collections_Generic_List_object__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                     v3,
                                                                                     QuestId_k__BackingField,
                                                                                     v2),
        this = (SubmarineMapManager_o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(v3, v8),
        !HideEnemyOccupiedPanelTasks) )
  {
    sub_1C22094(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BD9124 & 1) == 0 )
  {
    sub_1C21E38(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
    byte_4BD9124 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_305B768 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void __fastcall SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BD9128 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9128 = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = (PartyOrganizationUtility_o *)&this->fields.scanRangeNotificator;
  v4 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_scanRangeNotificator->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_1C21DDC(p_scanRangeNotificator, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BD9122 & 1) == 0 )
  {
    sub_1C21E38(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
    byte_4BD9122 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_305B768 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4BD9126 & 1) == 0 )
  {
    sub_1C21E38(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
    byte_4BD9126 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_305B768 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v5; // x22
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  TaskScheduler_o *v12; // x20
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *v29; // x20
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BD90FB & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
    sub_1C21E38(&SubmarineMapDataManager_TypeInfo);
    sub_1C21E38(&TaskScheduler_TypeInfo);
    byte_4BD90FB = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v5 = (SubmarineMapDataManager_o *)sub_1C22084(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v5, mapInfo, warInfo, 0LL);
  this->fields.submarineData = v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.submarineData, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (TaskScheduler_o *)sub_1C22084(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v12, 0LL);
  this->fields.taskScheduler = v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.taskScheduler, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  taskScheduler = this->fields.taskScheduler;
  v20 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v20,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
    0LL);
  if ( !taskScheduler )
    sub_1C22094(v21, v22);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v20;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int64_t)v20,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (Il2CppObject *)sub_1C22084(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  System_Object___ctor(v29, 0LL);
  this->fields.playingScanVoiceData = (struct SubmarineMapManager_PlayingScanVoiceData_o *)v29;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.playingScanVoiceData,
    (int64_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


bool __fastcall SubmarineMapManager__IsShowQuestListWhenComingBackToMap(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  return !SubmarineMapManager__HasSelfQuestAfterAction(this, method);
}


void __fastcall SubmarineMapManager__LoadAssets(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *v20; // x19

  if ( (byte_4BD90FC & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
    byte_4BD90FC = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v20, 5, 1, 0LL);
}


void __fastcall SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct SubmarineMapAssetManager_o *v12; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct SubmarineMapAssetManager_o *v21; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct SubmarineMapAssetManager_o *v30; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  v2 = this;
  if ( (byte_4BD911F & 1) == 0 )
  {
    sub_1C21E38(&Method_ComponentPool_CommonEffectComponent__Preload__);
    sub_1C21E38(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__);
    sub_1C21E38(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
    sub_1C21E38(&Method_ComponentPool_CommonEffectComponent___ctor__);
    sub_1C21E38(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
    sub_1C21E38(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
    sub_1C21E38(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
    sub_1C21E38(&ComponentPool_CommonEffectComponent__TypeInfo);
    sub_1C21E38(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C21E38(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
    byte_4BD911F = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v5 = (ComponentPool_T__o *)sub_1C22084(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_object____ctor(
    v5,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_32359B4 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.effectScanedPanelObjPool, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  this = (SubmarineMapManager_o *)v2->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_object___Preload(
    (ComponentPool_T__o *)this,
    9,
    (const MethodInfo_3235A78 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v12 = v2->fields.assetManager;
  if ( !v12 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v12->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v14 = (ComponentPool_T__o *)sub_1C22084(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v14,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_32359B4 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v14;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.effectScanObstaclePanelObjPool,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = v2->fields.assetManager;
  if ( !v21 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v21->fields._EffectScannablePanelPrafab_k__BackingField;
  v23 = (ComponentPool_T__o *)sub_1C22084(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v23,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_32359B4 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v23;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.effectScannablePanelObjPool,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this = (SubmarineMapManager_o *)v2->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_object___Preload(
          (ComponentPool_T__o *)this,
          50,
          (const MethodInfo_3235A78 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v30 = v2->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_1C22094(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v30->fields._EffectSelectedPanelPrefab_k__BackingField;
  v32 = (ComponentPool_T__o *)sub_1C22084(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v32,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_32359B4 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v32;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields.effectSelectedPanelObjPool,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
}


void __fastcall SubmarineMapManager__OnAfterQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SubmarineMapDataManager__UpdateParams(submarineData, -1, 0LL),
        SubmarineMapManager__UpdateClosedPanelDisplay(this, v6),
        SubmarineMapManager__HideScanObstacleEffect(this, v7),
        SubmarineMapManager__ShowScanObstacleEffect(this, v8),
        (submarineData = this->fields.submarineData) == 0LL) )
  {
    sub_1C22094(submarineData, finishCallback);
  }
  SubmarineMapDataManager__DeleteBeforeQuestInfo(submarineData, 0LL);
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall SubmarineMapManager__OnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = SubmarineMapManager__CoOnAfterSpotCreated(this, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4BD90FF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
    byte_4BD90FF = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v20, v21);
}


void __fastcall SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct MapControl_WarInfo_o *warInfo; // x8
  QuestTree_o *v6; // x20
  int32_t warId; // w21
  System_Action_o *v8; // x22
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4BD910D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C21E38(&Method_SubmarineMapManager__OnEndScan_b__42_0__);
    byte_4BD910D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v6 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0LL),
        !v6) )
  {
    sub_1C22094(Instance, v4);
  }
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v6, warId, v8, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4BD9100 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__);
    byte_4BD9100 = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, 0LL);
    ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._23_OnBeforeQuestAfterAction.method)(
      this,
      v4,
      this->klass->vtable._24_OnAfterQuestAfterAction.methodPtr);
  }
  else
  {
    SubmarineMapManager__HideScannableEffect(this, v3);
    SubmarineMapManager__ShowScannableEffect(this, v5);
  }
}


void __fastcall SubmarineMapManager__OnScanDecided(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  clsQuestCheck_o *v24; // x22
  NetworkManager_ResultCallbackFunc_o *v25; // x22
  EventScanPanelMapRequest_o *v26; // x22
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_4BD9108 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
    byte_4BD9108 = 1;
  }
  v7 = sub_1C22084(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = panelData;
  v16 = v7 + 32;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)panelData, v17, v18, v19, v20, v21, v22);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v23);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !this->fields.submarineData )
    goto LABEL_13;
  v24 = (clsQuestCheck_o *)Instance;
  Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v24 )
    goto LABEL_13;
  clsQuestCheck__SaveEventQuestIdListPlayable(v24, (int32_t)Instance, 0LL);
  v25 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v25,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v25,
               (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v26 = (EventScanPanelMapRequest_o *)Instance,
        Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL),
        (mapInfo = this->fields.mapInfo) == 0LL)
    || !*(_QWORD *)v16
    || !v26 )
  {
LABEL_13:
    sub_1C22094(Instance, v9);
  }
  EventScanPanelMapRequest__beginRequest(
    v26,
    (int32_t)Instance,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v16 + 24LL),
    *(_DWORD *)(v7 + 24),
    0LL);
}


void __fastcall SubmarineMapManager__OnScanPanelRequestFinished(
        SubmarineMapManager_o *this,
        System_String_o *result,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x19
  EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_String_o *value; // x8
  EventSaveData_o *v21; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v24; // x10
  __int64 v25; // x9
  TerminalPramsManager_c *v26; // x0
  EventSaveData_o *v27; // x20
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  TerminalPramsManager_c *v34; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v36; // x0
  System_String_array *ValueByArray; // x0
  int max_length; // w8
  System_String_o **v39; // x9
  System_String_o *v40; // x21
  System_String_o **v41; // x9
  System_String_o *v42; // x20
  void **v43; // x8
  System_String_o *v44; // x22
  TerminalPramsManager_c *v45; // x0
  struct EventSaveData_o *v46; // x23
  System_String_o *v47; // x24
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  EventSaveData_c *v54; // x8
  int64_t namespaze; // x19
  TerminalPramsManager_c *v56; // x0
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  System_String_c *v58; // x8
  int v59; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BD9109 & 1) == 0 )
  {
    sub_1C21E38(&EventSaveData_TypeInfo);
    sub_1C21E38(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_6775/*"False"*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    sub_1C21E38(&StringLiteral_1212/*"0"*/);
    byte_4BD9109 = 1;
  }
  v59 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22456/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v9);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v10);
  v11 = (Il2CppObject *)System_String__Concat_63126736(
                          (System_String_o *)StringLiteral_16086/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16345/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v11,
                                                                      (const MethodInfo_3017804 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v21 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_71:
    sub_1C2209C(BeforeEventSubmarineSaveData_k__BackingField, v13);
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_70;
  name = klass->_1.name;
  if ( name )
  {
    v24 = *((_QWORD *)name + 3);
    if ( v24 )
    {
      if ( !(_DWORD)v24 )
        goto LABEL_71;
      v25 = *((_QWORD *)name + 4);
      if ( v25 )
      {
        v59 = *(_QWORD *)(v25 + 32);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD918D )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD918D = 1;
        }
        v26 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v26 = TerminalPramsManager_TypeInfo;
        }
        if ( !v26->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v27 = (EventSaveData_o *)sub_1C22084(EventSaveData_TypeInfo);
          EventSaveData___ctor(v27, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD918E )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD918E = 1;
          }
          v34 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v34 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v34->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v27;
          sub_1C21DDC(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v27, v28, v29, v30, v31, v32, v33);
          v26 = TerminalPramsManager_TypeInfo;
        }
        if ( !v26->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v26);
        if ( !byte_4BD918D )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD918D = 1;
        }
        v36 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v36 = TerminalPramsManager_TypeInfo;
        }
        BeforeEventSubmarineSaveData_k__BackingField = v36->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( BeforeEventSubmarineSaveData_k__BackingField )
        {
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v39 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v39 = (System_String_o **)&StringLiteral_1212/*"0"*/;
            v40 = *v39;
            v41 = max_length <= 2 ? (System_String_o **)&StringLiteral_1212/*"0"*/ : &ValueByArray->m_Items[2];
            v42 = *v41;
            v43 = max_length <= 3 ? &StringLiteral_6775/*"False"*/ : (void **)&ValueByArray->m_Items[3];
          }
          else
          {
            v42 = (System_String_o *)StringLiteral_1212/*"0"*/;
            v43 = &StringLiteral_6775/*"False"*/;
            v40 = (System_String_o *)StringLiteral_1212/*"0"*/;
          }
          v44 = (System_String_o *)*v43;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4BD918D )
          {
            sub_1C21E38(&TerminalPramsManager_TypeInfo);
            byte_4BD918D = 1;
          }
          v45 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
          }
          v46 = v45->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v47 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_38323224(
                                                                              v47,
                                                                              v40,
                                                                              v42,
                                                                              v44,
                                                                              0LL);
          if ( v46 )
          {
            v46->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v46->fields.value,
              (int64_t)BeforeEventSubmarineSaveData_k__BackingField,
              v48,
              v49,
              v50,
              v51,
              v52,
              v53);
            value = v21->fields.value;
            goto LABEL_56;
          }
        }
LABEL_70:
        sub_1C22094(BeforeEventSubmarineSaveData_k__BackingField, v13);
      }
    }
  }
LABEL_56:
  if ( !(_DWORD)value )
    goto LABEL_71;
  v54 = v21[1].klass;
  if ( !v54 )
    goto LABEL_70;
  namespaze = (int64_t)v54->_1.namespaze;
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v56->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)namespaze;
  sub_1C21DDC(p_mResultEventPanelRewardInfos, namespaze, v14, v15, v16, v17, v18, v19);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v58 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v58 )
    goto LABEL_70;
  BeforeEventSubmarineSaveData_k__BackingField = *(EventSaveData_o **)&v58->_2.instance_size;
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  TitleInfoControl__UpdateEventSubmarineItemDisp(
    (TitleInfoControl_o *)BeforeEventSubmarineSaveData_k__BackingField,
    0LL);
}


void __fastcall SubmarineMapManager__OnScannerSelected(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v23; // x4
  SchedulerTaskBase_o *v24; // x21
  SchedulerTaskBase_TaskCallback_o *v25; // x22
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v33; // x20
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  const MethodInfo *v44; // x1
  __int64 v45; // x0

  if ( (byte_4BD9107 & 1) == 0 )
  {
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
    byte_4BD9107 = 1;
  }
  v7 = sub_1C22084(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = panelData;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)panelData, v16, v17, v18, v19, v20, v21);
  klass = this->klass;
  if ( *(int *)(v7 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v7 + 40) = 0;
    v24 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v7 + 24),
            *(SubmarineMapPanelData_o **)(v7 + 32),
            (bool *)(v7 + 40),
            v23);
    v25 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v25,
      (Il2CppObject *)v7,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0LL);
    if ( v24 )
    {
      v24->fields.EndCallback = v25;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v24->fields.EndCallback, (int64_t)v25, v26, v27, v28, v29, v30, v31);
      taskScheduler = this->fields.taskScheduler;
      v8 = sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v8 )
      {
        v33 = v8;
        v34 = sub_1C21F74(v24, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v34 )
        {
          v45 = sub_1C220B8();
          sub_1C21F60(v45, 0LL);
        }
        if ( !*(_DWORD *)(v33 + 24) )
          sub_1C2209C(v34, v35);
        *(_QWORD *)(v33 + 32) = v24;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)v24, v36, v37, v38, v39, v40, v41);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v33, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1C22094(v8, v9);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v42);
  SubmarineMapManager__ShowScannableEffect(this, v43);
  SubmarineMapManager__HideSelectedPanelEffect(this, v44);
}


void __fastcall SubmarineMapManager__OpenScanConfirmDialog(
        SubmarineMapManager_o *this,
        int32_t scanId,
        bool isShowDialogUpper,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v25; // x22
  const MethodInfo *v26; // x4

  if ( (byte_4BD911D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
    byte_4BD911D = 1;
  }
  v9 = sub_1C22084(SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v25 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v25,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0LL);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_1C22094(v10, v11);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v25, v26);
}


void __fastcall SubmarineMapManager__OpenSelectScannerDialog(
        SubmarineMapManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  SubmarineMapDataManager_o *submarineData; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  int32_t EventId; // w22
  System_Action_int__o *v22; // x23
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x4

  if ( (byte_4BD911B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
    byte_4BD911B = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callback, v14, v15, v16, v17, v18, v19);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (selectScannerDialog = this->fields.selectScannerDialog,
        EventId = SubmarineMapDataManager__get_EventId(submarineData, 0LL),
        v22 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v22,
          (Il2CppObject *)v5,
          Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
          0LL),
        v23 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo),
        System_Action___ctor(v23, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL),
        !selectScannerDialog) )
  {
LABEL_7:
    sub_1C22094(submarineData, v7);
  }
  SubmarineSelectScannerDialog__Open(selectScannerDialog, EventId, v22, v23, v24);
}


void __fastcall SubmarineMapManager__ReleaseAssets(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapAssetManager_o *assetManager; // x0
  PartyOrganizationUtility_o *p_assetManager; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
  assetManager = this->fields.assetManager;
  if ( assetManager )
  {
    SubmarineMapAssetManager__Finish(assetManager, method);
    p_assetManager->klass = 0LL;
    sub_1C21DDC(p_assetManager, 0LL, v5, v6, v7, v8, v9, v10);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
  EventMapManagerBase__ReleaseAssets((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  ComponentPool_T__o *effectScanedPanelObjPool; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  ComponentPool_T__o *effectScannablePanelObjPool; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  ComponentPool_T__o *v17; // x0
  PartyOrganizationUtility_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BD9120 & 1) == 0 )
  {
    sub_1C21E38(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    sub_1C21E38(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    sub_1C21E38(&Method_ComponentPool_CommonEffectComponent__Finish__);
    byte_4BD9120 = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_3236254 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effectScanedPanelObjPool, 0LL, v4, v5, v6, v7, v8, v9);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_3236254 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.effectScannablePanelObjPool,
      0LL,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (PartyOrganizationUtility_o *)&this->fields.effectScanObstaclePanelObjPool;
  v17 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v17,
      (const MethodInfo_3236254 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_1C21DDC(p_effectScanObstaclePanelObjPool, 0LL, v20, v21, v22, v23, v24, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_305B57C *method)
{
  bool hasValue; // w19
  bool v8; // w20
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  int v14; // s0
  UnityEngine_Component_o *v17; // x21
  UnityEngine_Transform_o *v18; // x22
  const MethodInfo_376FA44 *v19; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v23; // s0
  float v24; // s1
  float v25; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo_376FA44 *v27; // x2
  bool v28; // zf
  UnityEngine_Transform_o *v29; // x19
  float v30; // s0
  float v31; // s1
  float v32; // s2
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  System_Nullable_Vector3__o v34; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v35; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v36; // 0:x0.16
  System_Nullable_Vector3__o v37; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  v35 = offset;
  v34 = scale;
  hasValue = scale.fields.hasValue;
  v8 = offset.fields.hasValue;
  if ( !method->rgctx_data )
  {
    sub_1C21E38(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_Vector3__get_Value__);
    if ( !method->rgctx_data )
      sub_1C73D70();
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_21;
  transform = UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)SubmarineMapManager__get_positionCalculator(this, 0LL);
  if ( !panelData )
    goto LABEL_21;
  if ( !effectContainer )
    goto LABEL_21;
  *(UnityEngine_Vector3_o *)&v14 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                     (SubmarinePanelPositionCalculator_o *)effectContainer,
                                     panelData->fields._HIndex_k__BackingField,
                                     panelData->fields._VIndex_k__BackingField,
                                     0LL);
  if ( !pool )
    goto LABEL_21;
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_52649348(
                                                  pool,
                                                  transform,
                                                  *(UnityEngine_Vector3_o *)&v14,
                                                  (const MethodInfo_3235D84 *)method->rgctx_data->_1_ComponentPool_T__Rent);
  if ( !effectContainer )
    goto LABEL_21;
  v17 = (UnityEngine_Component_o *)effectContainer;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)effectContainer,
                                                  0LL);
  if ( !effectContainer )
    goto LABEL_21;
  v18 = (UnityEngine_Transform_o *)effectContainer;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)effectContainer, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( v8 )
  {
    *(_QWORD *)&v36.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v36.fields.hasValue = &v35;
    *(UnityEngine_Vector3_o *)&v23 = System_Nullable_Vector3___get_Value(v36, v19);
    hasValue = v34.fields.hasValue;
  }
  else
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v23 = static_fields->zeroVector.fields.x;
    v24 = static_fields->zeroVector.fields.y;
    v25 = static_fields->zeroVector.fields.z;
  }
  v39.fields.z = z + v25;
  v39.fields.y = y + v24;
  v39.fields.x = x + v23;
  UnityEngine_Transform__set_localPosition(v18, v39, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v17, 0LL);
  v28 = !hasValue;
  v29 = (UnityEngine_Transform_o *)effectContainer;
  if ( !v28 )
  {
    *(_QWORD *)&v37.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v37.fields.hasValue = &v34;
    *(UnityEngine_Vector3_o *)&v30 = System_Nullable_Vector3___get_Value(v37, v27);
    if ( v29 )
      goto LABEL_17;
LABEL_21:
    sub_1C22094(effectContainer, pool);
  }
  if ( !byte_4BD6BB6 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  v33 = UnityEngine_Vector3_TypeInfo->static_fields;
  v30 = v33->oneVector.fields.x;
  v31 = v33->oneVector.fields.y;
  v32 = v33->oneVector.fields.z;
  if ( !v29 )
    goto LABEL_21;
LABEL_17:
  UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
}


void __fastcall SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0LL);
}


void __fastcall SubmarineMapManager__ReturnEffectsToPool_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_305B768 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  unsigned int v10; // w22

  if ( !method->rgctx_data )
    sub_1C73D70();
  Children = GameObjectExtensions__GetChildren(this->fields.effectContainer, 0, 0LL);
  if ( !Children )
    goto LABEL_11;
  max_length = Children->max_length;
  v9 = Children;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C2209C(Children, v7);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_3000534 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_3235E5C *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1C22094(Children, v7);
  }
}


void __fastcall SubmarineMapManager__RevealAvailableSpots(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_SchedulerTaskBase__o *RevealEachSpotsTasks; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v15; // x1
  int64_t v16; // x20
  _QWORD *v17; // x22
  System_Delegate_o *v18; // x23
  SchedulerTaskBase_TaskCallback_o *v19; // x24
  System_Delegate_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x8
  SchedulerTaskBase_TaskCallback_c *v28; // x1
  TaskScheduler_o *v29; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  __int64 v39; // x0

  if ( (byte_4BD910C & 1) == 0 )
  {
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskNone_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
    byte_4BD910C = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = finishCallback,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)finishCallback, v8, v9, v10, v11, v12, v13),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v15),
        !taskScheduler)
    || (TaskScheduler__AddTask_42561352(taskScheduler, 0, RevealEachSpotsTasks, 0LL),
        v16 = sub_1C22084(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v16, 0LL),
        !v16) )
  {
LABEL_16:
    sub_1C22094(RevealEachSpotsTasks, v7);
  }
  v17 = (_QWORD *)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__,
    0LL);
  v20 = System_Delegate__Combine(v18, (System_Delegate_o *)v19, 0LL);
  v27 = (int64_t)v20;
  if ( v20 )
  {
    v28 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v17 = v20;
      if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass == v28 )
        goto LABEL_11;
    }
    sub_1C22354(v20);
  }
  *v17 = v27;
LABEL_11:
  sub_1C21DDC((PartyOrganizationUtility_o *)(v16 + 32), v27, v21, v22, v23, v24, v25, v26);
  v29 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_1C21EE0(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1LL);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v30 = RevealEachSpotsTasks;
  v31 = sub_1C21F74(v16, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v31 )
  {
    v39 = sub_1C220B8();
    sub_1C21F60(v39, 0LL);
  }
  if ( !v30->fields._size )
    sub_1C2209C(v31, v32);
  v30->fields._syncRoot = (Il2CppObject *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v30->fields._syncRoot, v16, v33, v34, v35, v36, v37, v38);
  if ( !v29 )
    goto LABEL_16;
  TaskScheduler__AddTask(v29, 0, (SchedulerTaskBase_array *)v30, 0LL);
}


void __fastcall SubmarineMapManager__SetClickPanelEnable(
        SubmarineMapManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  this->fields.isEnableClickPanel = isEnable;
}


void __fastcall SubmarineMapManager__SetGridLine(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gridLine; // x20
  SubmarineMapDataManager_o *submarineData; // x0
  __int64 v5; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *GridTexture_k__BackingField; // x20
  const MethodInfo *v8; // x3
  struct SubmarineMapDataManager_o *v9; // x8
  struct SubmarineMapAssetManager_o *v10; // x9
  SubmarineMapDataManager_o *v11; // x20
  UIWidget_o *v12; // x21
  int32_t v13; // w0
  struct SubmarineMapDataManager_o *v14; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_4BD9114 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9114 = 1;
  }
  gridLine = (UnityEngine_Object_o *)this->fields.gridLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  submarineData = (SubmarineMapDataManager_o *)UnityEngine_Object__op_Equality(gridLine, 0LL, 0LL);
  if ( ((unsigned __int8)submarineData & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
    {
      GridTexture_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._GridTexture_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(GridTexture_k__BackingField, 0LL, 0LL) )
        return;
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, 0LL);
        v9 = this->fields.submarineData;
        if ( v9 )
        {
          v10 = this->fields.assetManager;
          if ( v10 )
          {
            submarineData = (SubmarineMapDataManager_o *)GridLineTextureUtil__CreateWholeGridTexture(
                                                           (System_Int32_array *)submarineData,
                                                           v9->fields._PositionCalculator_k__BackingField,
                                                           v10->fields._GridTexture_k__BackingField,
                                                           v8);
            if ( this->fields.gridLine )
            {
              v11 = submarineData;
              submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             this->fields.gridLine,
                                                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
              if ( v11 )
              {
                v12 = (UIWidget_o *)submarineData;
                submarineData = (SubmarineMapDataManager_o *)((__int64 (__fastcall *)(SubmarineMapDataManager_o *, const char *))v11->klass[1]._1.gc_desc)(
                                                               v11,
                                                               v11->klass[1]._1.name);
                if ( v12 )
                {
                  UIWidget__set_width(v12, (int32_t)submarineData, 0LL);
                  v13 = (*(__int64 (__fastcall **)(SubmarineMapDataManager_o *, void *))&v11->klass[1]._1.byval_arg.bits)(
                          v11,
                          v11->klass[1]._1.this_arg.data);
                  UIWidget__set_height(v12, v13, 0LL);
                  ((void (__fastcall *)(UIWidget_o *, SubmarineMapDataManager_o *, Il2CppMethodPointer))v12->klass->vtable._27_set_mainTexture.method)(
                    v12,
                    v11,
                    v12->klass->vtable._28_get_shader.methodPtr);
                  submarineData = (SubmarineMapDataManager_o *)this->fields.gridLine;
                  if ( submarineData )
                  {
                    submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)submarineData,
                                                                   0LL);
                    v14 = this->fields.submarineData;
                    if ( v14 )
                    {
                      Settings_k__BackingField = v14->fields._Settings_k__BackingField;
                      if ( Settings_k__BackingField )
                      {
                        if ( submarineData )
                        {
                          UnityEngine_Transform__set_localPosition(
                            (UnityEngine_Transform_o *)submarineData,
                            Settings_k__BackingField->fields._BoardOffset_k__BackingField,
                            0LL);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_1C22094(submarineData, v5);
  }
}


void __fastcall SubmarineMapManager__SetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
}


void __fastcall SubmarineMapManager__ShowScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v7; // 0:x3.16
  System_Nullable_Vector3__o v8; // 0:x5.16

  v2 = this;
  if ( (byte_4BD9123 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_1C21E38(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
    byte_4BD9123 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1C22094(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v6,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields._current )
        sub_1C22094(v4, v5);
      if ( BYTE1(v6.fields._current[3].monitor) )
      {
        *(_QWORD *)&v7.fields.hasValue = 0LL;
        *(_QWORD *)&v7.fields.value.fields.y = 0LL;
        *(_QWORD *)&v8.fields.hasValue = 0LL;
        *(_QWORD *)&v8.fields.value.fields.y = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v6.fields._current,
          v7,
          v8,
          (const MethodInfo_305B57C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowScanRange(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *basePanelData,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v11; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v13; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BD9127 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BD9127 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_1C22094(Instance, v8);
  ScanRangeNotificatorPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                                 this->fields.assetManager,
                                                 *((_DWORD *)Instance + 14),
                                                 v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0LL, 0LL) )
  {
    SubmarineMapManager__HideScanRange(this, v11);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__Instantiate_object__50551272(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v13;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_1C21DDC((PartyOrganizationUtility_o *)p_scanRangeNotificator, (int64_t)v13, v15, v16, v17, v18, v19, v20);
      Instance = *p_scanRangeNotificator;
      if ( *p_scanRangeNotificator )
      {
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
        if ( basePanelData )
        {
          if ( Instance )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)Instance,
              basePanelData->fields._LocalPosition_k__BackingField,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall SubmarineMapManager__ShowScanRangeTask(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        bool *isShowDialogUpper,
        const MethodInfo *method)
{
  SubmarineMapManager_o *v8; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float y; // s8
  float x; // s10
  float v13; // s9
  int v14; // w23
  float v15; // s11
  int i; // w24
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  float v21; // s2
  float v22; // s0
  struct SubmarineMapDataManager_o *v23; // x8
  struct SubmarineSettingsManager_o *v24; // x8
  float v25; // s12
  float v26; // s13
  UnityEngine_Rect_array *v27; // x21
  System_Collections_Generic_List_Rect__o *v28; // x22
  int m_CancellationTokenSource; // w8
  SubmarineMapManager_o *v30; // x21
  unsigned int v31; // w24
  __int64 v32; // x28
  struct SubmarineMapDataManager_o *v33; // x8
  struct SubmarineSettingsManager_o *v34; // x8
  float32x2_t v35; // d2
  float32x2_t v36; // d0
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v38; // x8
  __int64 size; // x10
  unsigned __int64 v40; // d0
  float32x2_t *v41; // x9
  int v42; // s1
  unsigned __int32 v43; // s3
  Submarine2DUILocationInfo_o *v44; // x22
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v47; // x22
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  SubmarineScanDialogUpsideLocationInfo_o *v52; // x22
  UnityEngine_Rect_array *v53; // x0
  MapCamera_o *v54; // x23
  UnityEngine_Rect_array *v55; // x22
  float v56; // s0
  float v57; // s1
  float v58; // s2
  float v59; // s3
  UnityEngine_Vector2_o v60; // kr00_8
  struct System_Threading_CancellationTokenSource_o *v61; // x8
  float v62; // s3
  __int64 v63; // x8
  struct MapControl_WarInfo_o **p_warInfo; // x9
  float v65; // t1
  float v66; // s0
  struct SubmarineMapDataManager_o *v67; // x8
  struct SubmarineSettingsManager_o *v68; // x8
  SubmarinScanDialogUpSideWeakLocationInfo_o *v70; // x22
  UnityEngine_Rect_array *v71; // x0
  MapCamera_o *v72; // x23
  UnityEngine_Rect_array *v73; // x22
  int32_t failedReason; // [xsp+3Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4BD912A & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Rect__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Rect__TypeInfo);
    sub_1C21E38(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_1C21E38(&UnityEngine_Rect___TypeInfo);
    sub_1C21E38(&float___TypeInfo);
    sub_1C21E38(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    sub_1C21E38(&Submarine2DUILocationInfo_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C21E38(&SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    byte_4BD912A = 1;
  }
  failedReason = 0;
  submarineData = v8->fields.submarineData;
  if ( !submarineData )
    goto LABEL_73;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_73;
  if ( Settings_k__BackingField->fields._RegardScanRangeAsSimpleSquare_k__BackingField )
  {
    if ( panelData )
    {
      x = panelData->fields._LocalPosition_k__BackingField.fields.x;
      y = panelData->fields._LocalPosition_k__BackingField.fields.y;
      v13 = 0.0;
      v14 = -2;
      v15 = 0.0;
      do
      {
        for ( i = -2; i != 3; ++i )
        {
          this = (SubmarineMapManager_o *)v8->fields.submarineData;
          if ( !this )
            goto LABEL_73;
          this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelByIndices(
                                            (SubmarineMapDataManager_o *)this,
                                            panelData->fields._HIndex_k__BackingField + v14,
                                            i + panelData->fields._VIndex_k__BackingField,
                                            0LL);
          if ( this )
          {
            v17 = *((float *)&this->fields.m_CancellationTokenSource + 1);
            v18 = *(float *)&this->fields.mapInfo;
            v19 = x + v15;
            v20 = y + v13;
            if ( x >= v17 )
              x = *((float *)&this->fields.m_CancellationTokenSource + 1);
            v21 = x + (float)(v19 - x);
            if ( v21 > v17 )
              v17 = v21;
            if ( y >= v18 )
              y = *(float *)&this->fields.mapInfo;
            v15 = v17 - x;
            v22 = y + (float)(v20 - y);
            if ( v22 <= v18 )
              v22 = *(float *)&this->fields.mapInfo;
            v13 = v22 - y;
          }
        }
        ++v14;
      }
      while ( v14 != 3 );
      v23 = v8->fields.submarineData;
      if ( v23 )
      {
        v24 = v23->fields._Settings_k__BackingField;
        if ( v24 )
        {
          v25 = v24->fields._PanelUnitSize_k__BackingField.fields.x;
          v26 = v24->fields._PanelUnitSize_k__BackingField.fields.y;
          this = (SubmarineMapManager_o *)sub_1C21EE0(UnityEngine_Rect___TypeInfo, 1LL);
          if ( this )
          {
            v27 = (UnityEngine_Rect_array *)this;
            if ( !LODWORD(this->fields.m_CancellationTokenSource) )
              goto LABEL_74;
            *(float *)&this->fields.mapInfo = x - v25;
            *((float *)&this->fields.mapInfo + 1) = y - v26;
            *(float *)&this->fields.warInfo = (float)(v25
                                                    + (float)((float)(x - v25)
                                                            + (float)((float)(x + v15) - (float)(x - v25))))
                                            - (float)(x - v25);
            *((float *)&this->fields.warInfo + 1) = (float)(v26
                                                          + (float)((float)(y - v26)
                                                                  + (float)((float)(y + v13) - (float)(y - v26))))
                                                  - (float)(y - v26);
            goto LABEL_45;
          }
        }
      }
    }
LABEL_73:
    sub_1C22094(this, *(_QWORD *)&scanId);
  }
  v28 = (System_Collections_Generic_List_Rect__o *)sub_1C22084(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v28,
    (const MethodInfo_365F5C8 *)Method_System_Collections_Generic_List_Rect___ctor__);
  this = (SubmarineMapManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                    scanId,
                                    panelData,
                                    v8->fields.submarineData,
                                    0LL);
  if ( !v8->fields.submarineData )
    goto LABEL_73;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelsByScanEvents(
                                    v8->fields.submarineData,
                                    (System_Collections_Generic_List_SubmarineScanEvent__o *)this,
                                    0LL);
  if ( !this )
    goto LABEL_73;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v30 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v31 = 0;
    while ( v31 < m_CancellationTokenSource )
    {
      v32 = *((_QWORD *)&v30->fields.mapInfo + (int)v31);
      if ( !byte_4BD6BB1 )
      {
        this = (SubmarineMapManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
      }
      v33 = v8->fields.submarineData;
      if ( !v33 )
        goto LABEL_73;
      v34 = v33->fields._Settings_k__BackingField;
      if ( !v34 )
        goto LABEL_73;
      if ( !v32 )
        goto LABEL_73;
      if ( !v28 )
        goto LABEL_73;
      v35.n64_u64[0] = (unsigned __int64)v34->fields._PanelUnitSize_k__BackingField;
      v36.n64_u64[0] = *(unsigned __int64 *)(v32 + 28);
      items = v28->fields._items;
      v38 = Method_System_Collections_Generic_List_Rect__Add__;
      ++v28->fields._version;
      if ( !items )
        goto LABEL_73;
      size = v28->fields._size;
      v40 = vadd_f32(v36, vmul_f32(v35, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
      if ( (unsigned int)size >= items->max_length )
      {
        v42 = HIDWORD(v40);
        v43 = v35.n64_u32[1];
        System_Collections_Generic_List_Rect___AddWithResize(
          v28,
          *(UnityEngine_Rect_o *)(&v35 - 1),
          *(const MethodInfo_365FE54 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = (float32x2_t *)(&items->obj + size);
        v28->fields._size = size + 1;
        v41[4].n64_u64[0] = v40;
        v41[5].n64_u64[0] = v35.n64_u64[0];
      }
      m_CancellationTokenSource = (int)v30->fields.m_CancellationTokenSource;
      if ( (int)++v31 >= m_CancellationTokenSource )
        goto LABEL_43;
    }
    goto LABEL_74;
  }
LABEL_43:
  if ( !v28 )
    goto LABEL_73;
  v27 = System_Collections_Generic_List_Rect___ToArray(
          v28,
          (const MethodInfo_36619E8 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_45:
  v44 = (Submarine2DUILocationInfo_o *)sub_1C22084(Submarine2DUILocationInfo_TypeInfo);
  Submarine2DUILocationInfo___ctor(v44, 0LL);
  if ( !v44 )
    goto LABEL_73;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v44, 0LL);
  mapCamera = v8->fields.mapCamera;
  v47 = Rects;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v76 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(mapCamera, v27, v47, &failedReason, 0LL);
  *isShowDialogUpper = 0;
  m_XMin = v76.fields.m_XMin;
  m_YMin = v76.fields.m_YMin;
  m_Width = v76.fields.m_Width;
  m_Height = v76.fields.m_Height;
  if ( failedReason == 1 )
  {
    v52 = (SubmarineScanDialogUpsideLocationInfo_o *)sub_1C22084(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    SubmarineScanDialogUpsideLocationInfo___ctor(v52, 0LL);
    if ( !v52 )
      goto LABEL_73;
    v53 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v52, 0LL);
    v54 = v8->fields.mapCamera;
    v55 = v53;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(UnityEngine_Rect_o *)&v56 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v54,
                                    v27,
                                    v55,
                                    &failedReason,
                                    0LL);
    if ( failedReason != 1 )
    {
      if ( failedReason )
        goto LABEL_55;
      goto LABEL_54;
    }
    v70 = (SubmarinScanDialogUpSideWeakLocationInfo_o *)sub_1C22084(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    SubmarinScanDialogUpSideWeakLocationInfo___ctor(v70, 0LL);
    if ( !v70 )
      goto LABEL_73;
    v71 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v70, 0LL);
    v72 = v8->fields.mapCamera;
    v73 = v71;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(UnityEngine_Rect_o *)&v56 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v72,
                                    v27,
                                    v73,
                                    &failedReason,
                                    0LL);
    if ( !failedReason )
    {
LABEL_54:
      m_XMin = v56;
      m_YMin = v57;
      m_Width = v58;
      m_Height = v59;
      *isShowDialogUpper = 1;
    }
  }
LABEL_55:
  v60 = FSWindowUtil__GetSize(0LL);
  this = (SubmarineMapManager_o *)sub_1C21EE0(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_73;
  v61 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v61
    || (LODWORD(this->fields.mapInfo) = 1065353216, (_DWORD)v61 == 1)
    || (*((float *)&this->fields.mapInfo + 1) = m_Width / v60.fields.x, (unsigned int)v61 <= 2) )
  {
LABEL_74:
    sub_1C2209C(this, *(_QWORD *)&scanId);
  }
  v62 = 1.0;
  *(float *)&this->fields.warInfo = m_Height / v60.fields.y;
  if ( (int)v61 >= 2 )
  {
    v63 = (unsigned int)v61 - 2LL;
    v62 = fmaxf(m_Width / v60.fields.x, 1.0);
    if ( v63 )
    {
      p_warInfo = &this->fields.warInfo;
      do
      {
        v65 = *(float *)p_warInfo;
        p_warInfo = (struct MapControl_WarInfo_o **)((char *)p_warInfo + 4);
        v66 = v65;
        if ( v65 > v62 )
          v62 = v66;
        --v63;
      }
      while ( v63 );
    }
  }
  v67 = v8->fields.submarineData;
  if ( !v67 )
    goto LABEL_73;
  v68 = v67->fields._Settings_k__BackingField;
  if ( !v68 )
    goto LABEL_73;
  v75.fields.y = m_YMin + (float)(m_Height * 0.5);
  v75.fields.x = m_XMin + (float)(m_Width * 0.5);
  v75.fields.z = 0.0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v8,
           v75,
           v62,
           v68->fields._ViewScanRangeCameraDuration_k__BackingField,
           *(const MethodInfo **)&scanId);
}


void __fastcall SubmarineMapManager__ShowScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v7; // 0:x3.16
  System_Nullable_Vector3__o v8; // 0:x5.16

  v2 = this;
  if ( (byte_4BD9121 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_1C21E38(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
    byte_4BD9121 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1C22094(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v6,
             (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields._current )
        sub_1C22094(v4, v5);
      if ( BYTE2(v6.fields._current[3].monitor) )
      {
        *(_QWORD *)&v7.fields.hasValue = 0LL;
        *(_QWORD *)&v7.fields.value.fields.y = 0LL;
        *(_QWORD *)&v8.fields.hasValue = 0LL;
        *(_QWORD *)&v8.fields.value.fields.y = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v6.fields._current,
          v7,
          v8,
          (const MethodInfo_305B57C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_4BD9125 & 1) == 0 )
  {
    sub_1C21E38(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
    byte_4BD9125 = 1;
  }
  *(_QWORD *)&v5.fields.hasValue = 0LL;
  *(_QWORD *)&v5.fields.value.fields.y = 0LL;
  *(_QWORD *)&v6.fields.hasValue = 0LL;
  *(_QWORD *)&v6.fields.value.fields.y = 0LL;
  SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    panelData,
    v5,
    v6,
    (const MethodInfo_305B57C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__StartScanPerformance(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  System_Action_o *v10; // x23
  TaskScheduler_o *taskScheduler; // x22
  const MethodInfo *v12; // x3
  TaskScheduler_o *v13; // x22
  SchedulerTaskBase_array *v14; // x23
  const MethodInfo *v15; // x3
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x20
  int64_t v23; // x20
  _QWORD *v24; // x21
  System_Delegate_o *v25; // x22
  SchedulerTaskBase_TaskCallback_o *v26; // x23
  System_Delegate_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x8
  SchedulerTaskBase_TaskCallback_c *v35; // x1
  TaskScheduler_o *v36; // x19
  MissionNotifyManager_o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x0

  if ( (byte_4BD910A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&SchedulerTaskBase___TypeInfo);
    sub_1C21E38(&SchedulerTaskNone_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__);
    sub_1C21E38(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4BD910A = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0LL);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0LL);
  if ( !v9 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v9, v10, 0LL);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v12);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_42561352(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance,
    0LL);
  v13 = this->fields.taskScheduler;
  v14 = (SchedulerTaskBase_array *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v15);
  if ( !v14 )
    goto LABEL_22;
  v22 = (int64_t)Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_1C21F74(Instance, v14->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !v14->max_length )
    goto LABEL_23;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_1C21DDC((PartyOrganizationUtility_o *)v14->m_Items, v22, v16, v17, v18, v19, v20, v21);
  if ( !v13
    || (TaskScheduler__AddTask(v13, 0, v14, 0LL),
        v23 = sub_1C22084(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v23, 0LL),
        !v23) )
  {
LABEL_22:
    sub_1C22094(Instance, v8);
  }
  v24 = (_QWORD *)(v23 + 32);
  v25 = *(System_Delegate_o **)(v23 + 32);
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__39_1__,
    0LL);
  v27 = System_Delegate__Combine(v25, (System_Delegate_o *)v26, 0LL);
  v34 = (int64_t)v27;
  if ( !v27 )
    goto LABEL_16;
  v35 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v27->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v24 = v27, (SchedulerTaskBase_TaskCallback_c *)v27->klass != v35) )
  {
    sub_1C22354(v27);
LABEL_16:
    *v24 = v34;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 32), v34, v28, v29, v30, v31, v32, v33);
  v36 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_1C21EE0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_22;
  v37 = Instance;
  Instance = (MissionNotifyManager_o *)sub_1C21F74(v23, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v44 = sub_1C220B8();
    sub_1C21F60(v44, 0LL);
  }
  if ( !LODWORD(v37->fields.mNoDispInfos) )
LABEL_23:
    sub_1C2209C(Instance, v8);
  v37->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v37->fields.mMissionNotifyComps, v23, v38, v39, v40, v41, v42, v43);
  if ( !v36 )
    goto LABEL_22;
  TaskScheduler__AddTask(v36, 0, (SchedulerTaskBase_array *)v37, 0LL);
}


void __fastcall SubmarineMapManager__SubsequentialOpenPanelTaskChain(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *SubsequentialOpenPanelTasks; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Action_o **p_syncRoot; // x22
  const MethodInfo *v15; // x1
  int size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v17; // x20
  System_Delegate_o *syncRoot; // x23
  SchedulerTaskBase_TaskCallback_o *v19; // x24
  System_Delegate_o *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  SchedulerTaskBase_TaskCallback_c *v27; // x1

  if ( (byte_4BD910B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
    sub_1C21E38(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
    byte_4BD910B = 1;
  }
  v5 = sub_1C22084(SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v5 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)finishCallback, v8, v9, v10, v11, v12, v13);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
                                                                               this,
                                                                               v15);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  size = SubsequentialOpenPanelTasks->fields._size;
  v17 = (System_Collections_Generic_List_SchedulerTaskBase__o *)SubsequentialOpenPanelTasks;
  if ( size < 1 )
  {
LABEL_11:
    ActionExtensions__Call(*p_syncRoot, 0LL);
    return;
  }
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SubsequentialOpenPanelTasks,
                                                                               size - 1,
                                                                               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1C22084(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__,
    0LL);
  v20 = System_Delegate__Combine(syncRoot, (System_Delegate_o *)v19, 0LL);
  if ( v20 )
  {
    v27 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass != SchedulerTaskBase_TaskCallback_TypeInfo
      || (*p_syncRoot = (System_Action_o *)v20, (SchedulerTaskBase_TaskCallback_c *)v20->klass != v27) )
    {
      sub_1C22354(v20);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0LL;
  }
  sub_1C21DDC((PartyOrganizationUtility_o *)p_syncRoot, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_1C22094(SubsequentialOpenPanelTasks, v7);
  TaskScheduler__AddTask_42561352((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v17, 0LL);
}


void __fastcall SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0
  struct MapControl_MapInfo_o *mapInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  EventScanPanelMapRequest_o *v6; // x20
  struct MapControl_MapInfo_o *v7; // x8

  if ( (byte_4BD9102 & 1) == 0 )
  {
    sub_1C21E38(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager__TryInitRequest_b__31_0__);
    byte_4BD9102 = 1;
  }
  submarineData = this->fields.submarineData;
  this->fields.initRequestFinished = 0;
  if ( !submarineData )
    goto LABEL_13;
  submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_EventId(submarineData, 0LL);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_13;
  if ( SubmarineMapDataManager__HasUserMapData((int32_t)submarineData, mapInfo->fields.mapId, 0LL) )
  {
    this->fields.initRequestFinished = 1;
    return;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  submarineData = (SubmarineMapDataManager_o *)NetworkManager__getRequest_object_(
                                                 v5,
                                                 (const MethodInfo_30345EC *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v6 = (EventScanPanelMapRequest_o *)submarineData,
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_EventId(
                                                       this->fields.submarineData,
                                                       0LL),
        (v7 = this->fields.mapInfo) == 0LL)
    || !v6 )
  {
LABEL_13:
    sub_1C22094(submarineData, method);
  }
  EventScanPanelMapRequest__beginRequest(v6, (int32_t)submarineData, v7->fields.mapId, 0, 0, 0LL);
}


void __fastcall SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  int32_t v5; // w20
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4BD911C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    byte_4BD911C = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, 0LL);
  if ( NewReleasedScanId >= 1 )
  {
    v5 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v5, v7, v8);
      return;
    }
LABEL_8:
    sub_1C22094(submarineData, method);
  }
}


void __fastcall SubmarineMapManager__Update(SubmarineMapManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0

  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0LL);
}


void __fastcall SubmarineMapManager__UpdateClosedPanelDisplay(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4BD910E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    this = (SubmarineMapManager_o *)sub_1C21E38(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    byte_4BD910E = 1;
  }
  memset(&v5, 0, sizeof(v5));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_1C22094(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C22094(0LL, v4);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C22094(0LL, beforeClearQuestId);
  SubmarineMapDataManager__UpdateParams(submarineData, beforeClearQuestId, 0LL);
}


void __fastcall SubmarineMapManager__UpdateScannObstacleEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SubmarineMapManager__HideScanObstacleEffect(this, method);
  SubmarineMapManager__ShowScanObstacleEffect(this, v3);
}


void __fastcall SubmarineMapManager__UpdateScannableEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SubmarineMapManager__HideScannableEffect(this, method);
  SubmarineMapManager__ShowScannableEffect(this, v3);
}


void __fastcall SubmarineMapManager__UpdateTerminalInfo(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  ScrTerminalMap_o *terminalMap; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  UnityEngine_GameObject_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x21
  TerminalPramsManager_c *v14; // x0
  TerminalPramsManager_c *v15; // x0
  System_String_array *ValueByArray; // x0
  __int64 v17; // x8
  UnityEngine_GameObject_c *v18; // x8
  TitleInfoControl_o *v19; // x20
  EventDetailEntity_o *v20; // x21
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_4BD910F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__);
    sub_1C21E38(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
    byte_4BD910F = 1;
  }
  v3 = sub_1C22084(SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_47;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_47;
  ScrTerminalMap__UpdateMapButtonBadge(terminalMap, 0LL);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_47;
  ScrTerminalMap__UpdateCaldeaFolderBoardList(terminalMap, 0LL);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_47;
  ScrTerminalMap__UpdateAreaBoardList(terminalMap, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = terminalMap->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_47;
  terminalMap = *(ScrTerminalMap_o **)&klass->_2.instance_size;
  if ( !terminalMap )
    goto LABEL_47;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)terminalMap, 0LL);
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_47;
  terminalMap = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)terminalMap,
                                      (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.submarineData )
    goto LABEL_47;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)terminalMap;
  terminalMap = (ScrTerminalMap_o *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v13 )
    goto LABEL_47;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v13,
         (Il2CppObject **)(v3 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v3 + 32) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD918D )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD918D = 1;
    }
    v14 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v14 = TerminalPramsManager_TypeInfo;
    }
    if ( v14->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v14->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v14);
      if ( !byte_4BD918D )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD918D = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v15->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_47;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v17 = *(_QWORD *)&ValueByArray->max_length;
        if ( v17 )
        {
          if ( !(_DWORD)v17 )
            sub_1C2209C(ValueByArray, v5);
          *(_DWORD *)(v3 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v18 = terminalMap->fields.subRootGimmickP->klass;
    if ( v18 )
    {
      v19 = *(TitleInfoControl_o **)&v18->_2.instance_size;
      v20 = *(EventDetailEntity_o **)(v3 + 24);
      v21 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v21,
        (Il2CppObject *)v3,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( v19 )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(v19, v20, v21, 0LL);
        return;
      }
    }
LABEL_47:
    sub_1C22094(terminalMap, v5);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v22);
  SubmarineMapManager__ShowScannableEffect(this, v23);
}


void __fastcall SubmarineMapManager__UserControllable(
        SubmarineMapManager_o *this,
        bool value,
        const MethodInfo *method)
{
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  klass = this->klass;
  if ( value )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, void *, const MethodInfo *))klass->vtable._32_AllTouchBlockForceFalse.method)(
      this,
      klass[1]._1.image,
      method);
    SubmarineMapManager__HideScannableEffect(this, v5);
    SubmarineMapManager__ShowScannableEffect(this, v6);
  }
  else
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    SubmarineMapManager__HideScannableEffect(this, v7);
  }
}


bool __fastcall SubmarineMapManager___CoInitRequest_b__20_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  return this->fields.initRequestFinished;
}


void __fastcall SubmarineMapManager___OnEndScan_b__42_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C22094(0LL, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, 0LL);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v4);
  SubmarineMapManager__HideSelectedPanelEffect(this, v5);
  SubmarineMapManager__UpdateTerminalInfo(this, v6);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4BD9135 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__);
    byte_4BD9135 = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, 0LL);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._24_OnAfterQuestAfterAction.method)(
    this,
    v3,
    this->klass->vtable._25_OnEveryActionEnd.methodPtr);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__27_1(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SubmarineMapManager__HideScannableEffect(this, method);
  SubmarineMapManager__ShowScannableEffect(this, v3);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_0(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BD9136 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BD9136 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  CommonUI__SetSkipAnimation((CommonUI_o *)Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4BD9137 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__);
    byte_4BD9137 = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v3, v4);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4BD9138 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__);
    byte_4BD9138 = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_3__, 0LL);
  SubmarineMapManager__RevealAvailableSpots(this, v3, v4);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_3(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4BD9139 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4BD9139 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  SubmarineMapManager__OnEndScan(this, v5);
}


void __fastcall SubmarineMapManager___TryInitRequest_b__31_0(
        SubmarineMapManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.initRequestFinished = 1;
}


int32_t __fastcall SubmarineMapManager__get_eventId(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C22094(0LL, method);
  return SubmarineMapDataManager__get_EventId(submarineData, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C22094(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C22094(this, method);
  return submarineData->fields._Settings_k__BackingField;
}


void __fastcall SubmarineMapManager_PlayingScanVoiceData___ctor(
        SubmarineMapManager_PlayingScanVoiceData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager__CoInitRequest_d__20___ctor(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SubmarineMapManager__CoInitRequest_d__20__MoveNext(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager__CoInitRequest_d__20_o *v2; // x19
  int32_t _1__state; // w8
  struct SubmarineMapManager_o *_4__this; // x20
  bool v5; // w21
  System_Func_bool__o *v6; // x22
  UnityEngine_WaitUntil_o *v7; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v2 = this;
  if ( (byte_4BD9144 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SubmarineMapManager__CoInitRequest_b__20_0__);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    byte_4BD9144 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_1C22094(this, method);
    }
    SubmarineMapDataManager__ConstructParams((SubmarineMapDataManager_o *)this, 0LL);
    ActionExtensions__Call(v2->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  SubmarineMapManager__TryInitRequest(_4__this, method);
  this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v6 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0LL);
  v7 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(p__2__current, (int64_t)v7, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v5;
}


Il2CppObject *__fastcall SubmarineMapManager__CoInitRequest_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SubmarineMapManager__CoInitRequest_d__20__System_Collections_IEnumerator_Reset(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall SubmarineMapManager__CoInitRequest_d__20__System_Collections_IEnumerator_get_Current(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SubmarineMapManager__CoInitRequest_d__20__System_IDisposable_Dispose(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__23___ctor(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__23__MoveNext(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *v2; // x19
  struct SubmarineMapManager_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x8
  UnityEngine_Texture2D_o *ResizedTexture2D; // x0
  UnityEngine_Texture2D_o **p_closedPanelTexture; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct SubmarineMapAssetManager_o *v15; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  const MethodInfo *v17; // x1
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  __int64 v31; // x8
  int32_t v32; // w1
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1

  v2 = this;
  if ( (byte_4BD9145 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4BD9145 = 1;
  }
  if ( !v2->fields.__1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_30;
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)_4__this->fields.submarineData;
    if ( !this )
      goto LABEL_30;
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SubmarineMapDataManager__get_EventId(
                                                                  (SubmarineMapDataManager_o *)this,
                                                                  0LL);
    mapInfo = _4__this->fields.mapInfo;
    if ( !mapInfo )
      goto LABEL_30;
    if ( SubmarineMapDataManager__HasUserMapData((int32_t)this, mapInfo->fields.mapId, 0LL) )
    {
      this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)_4__this->fields.taskScheduler;
      if ( this )
      {
        TaskScheduler__Activate((TaskScheduler_o *)this, 0LL);
        assetManager = _4__this->fields.assetManager;
        if ( assetManager )
        {
          this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)assetManager->fields._ClosedPanelTexture_k__BackingField;
          terminalMap = _4__this->fields.terminalMap;
          if ( this )
          {
            if ( !terminalMap )
              goto LABEL_30;
          }
          else
          {
            if ( !terminalMap )
              goto LABEL_30;
            this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)terminalMap->fields._currentMapTexture_k__BackingField;
          }
          ResizedTexture2D = ClosePanelTextureUtil__CreateResizedTexture2D(
                               (UnityEngine_Texture2D_o *)this,
                               terminalMap->fields._currentMapImageW_k__BackingField,
                               terminalMap->fields._currentMapImageH_k__BackingField,
                               0LL);
          _4__this->fields.closedPanelTexture = ResizedTexture2D;
          p_closedPanelTexture = &_4__this->fields.closedPanelTexture;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&_4__this->fields.closedPanelTexture,
            (int64_t)ResizedTexture2D,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14);
          v15 = _4__this->fields.assetManager;
          if ( v15 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v15->fields._ClosedPanelTexture_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0LL, 0LL) )
            {
              DarkTexture2D = ClosePanelTextureUtil__CreateDarkTexture2D(*p_closedPanelTexture, 0.4, 0LL);
              *p_closedPanelTexture = DarkTexture2D;
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&_4__this->fields.closedPanelTexture,
                (int64_t)DarkTexture2D,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
            }
            SubmarineMapManager__AdjustEachSpotsPositions(_4__this, v17);
            SubmarineMapManager__CreateContainers(_4__this, v25);
            SubmarineMapManager__CreatePanels(_4__this, v26);
            SubmarineMapManager__CreateNeverOpenSurrounds(_4__this, v27);
            SubmarineMapManager__SetGridLine(_4__this, v28);
            SubmarineMapManager__AdjustSilhouetteGimmicks(_4__this, v29);
            SubmarineMapManager__ConstructOnPartOfDialog(_4__this, v30);
            this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)_4__this->fields.submarineData;
            if ( this )
            {
              v31 = *(_QWORD *)&this[1].fields.__1__state;
              if ( v31 )
              {
                if ( *(_BYTE *)(v31 + 24) || *(_BYTE *)(v31 + 25) )
                  v32 = *(_DWORD *)(v31 + 16);
                else
                  v32 = -1;
                SubmarineMapDataManager__UpdateParams((SubmarineMapDataManager_o *)this, v32, 0LL);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, v33);
                SubmarineMapManager__HideScanObstacleEffect(_4__this, v34);
                SubmarineMapManager__ShowScanObstacleEffect(_4__this, v35);
                ActionExtensions__Call(v2->fields.finishCallback, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_30:
      sub_1C22094(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_30;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0LL, 0, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SubmarineMapManager__CoOnAfterSpotCreated_d__23__System_Collections_IEnumerator_Reset(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__23__System_Collections_IEnumerator_get_Current(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__23__System_IDisposable_Dispose(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SubmarineMapManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD913A & 1) == 0 )
  {
    sub_1C21E38(&SubmarineMapManager___c_TypeInfo);
    byte_4BD913A = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)SubmarineMapManager___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall SubmarineMapManager___c___ctor(SubmarineMapManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c___CheckNewPlayableEventQuest_b__49_0(
        SubmarineMapManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall SubmarineMapManager___c___CreateHideEnemyOccupiedPanelTasks_b__101_0(
        SubmarineMapManager___c_o *this,
        SubmarineMapPanelData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields._Chain_k__BackingField;
}


void __fastcall SubmarineMapManager___c__DisplayClass101_0___ctor(
        SubmarineMapManager___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapManager___c__DisplayClass101_0___CreateHideEnemyOccupiedPanelTasks_b__1(
        SubmarineMapManager___c__DisplayClass101_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  struct SubmarineSilhouetteData_o *silhouetteData; // x8

  if ( !x || (silhouetteData = this->fields.silhouetteData) == 0LL )
    sub_1C22094(this, x);
  return x->fields.spotId == silhouetteData->fields._SpotId_k__BackingField;
}


void __fastcall SubmarineMapManager___c__DisplayClass19_0___ctor(
        SubmarineMapManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass19_0___LoadAssets_b__0(
        SubmarineMapManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  UnityEngine_MonoBehaviour_o *v4; // x20
  SubmarineMapAssetManager_o *klass; // x21
  const MethodInfo *v6; // x3
  System_Action_o *_9__1; // x23
  int32_t v8; // w22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_4BD913B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__);
    byte_4BD913B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  SubmarineMapManager__CreateAssetManagerIfNotExists(_4__this, method);
  v4 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v4 )
    goto LABEL_10;
  _4__this = (SubmarineMapManager_o *)v4[4].fields.m_CancellationTokenSource;
  if ( !_4__this )
    goto LABEL_10;
  klass = (SubmarineMapAssetManager_o *)v4[5].klass;
  _4__this = (SubmarineMapManager_o *)SubmarineMapDataManager__get_EventId((SubmarineMapDataManager_o *)_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v8 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v9, v10, v11, v12, v13, v14);
  }
  if ( !klass )
LABEL_10:
    sub_1C22094(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v8, _9__1, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884(v4, Assets, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass19_0___LoadAssets_b__1(
        SubmarineMapManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  struct SubmarineMapManager_o *v4; // x8
  struct SubmarineMapAssetManager_o *assetManager; // x9
  const MethodInfo *v6; // x2
  UnityEngine_MonoBehaviour_o *v7; // x20
  System_Collections_IEnumerator_o *inited; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (SubmarineMapManager__LoadPoolEffects(_4__this, method), (v4 = this->fields.__4__this) == 0LL)
    || (assetManager = v4->fields.assetManager) == 0LL
    || (_4__this = (SubmarineMapManager_o *)v4->fields.submarineData) == 0LL
    || (SubmarineMapDataManager__LoadSettings(
          (SubmarineMapDataManager_o *)_4__this,
          assetManager->fields._Settings_k__BackingField,
          0LL),
        (v7 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1C22094(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884(v7, inited, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass25_0___ctor(
        SubmarineMapManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass25_0___OnBeforeQuestAfterAction_b__0(
        SubmarineMapManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct SubmarineMapManager_o *_4__this; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x20
  __int64 v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BD913C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C21E38(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD913C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)_4__this->fields.submarineData;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)SubmarineMapDataManager__get_EventId((SubmarineMapDataManager_o *)Instance, 0LL);
  if ( !v6 )
    goto LABEL_19;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v6,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4BD7183 )
    {
      sub_1C21E38(&TerminalSceneComponent_TypeInfo);
      byte_4BD7183 = 1;
    }
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    }
    v7 = **(_QWORD **)&Instance[1].fields._DispLog;
    if ( v7 )
    {
      Instance = *(DataManager_o **)(v7 + 240);
      if ( Instance )
      {
        TitleInfoControl__CheckEventPointReward(
          (TitleInfoControl_o *)Instance,
          (EventDetailEntity_o *)entity,
          this->fields.finishCallback,
          0,
          0LL);
        return;
      }
    }
LABEL_19:
    sub_1C22094(Instance, v4);
  }
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass34_0___ctor(
        SubmarineMapManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass34_0___DoPerformancesByVariedCond_b__0(
        SubmarineMapManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this->fields.__4__this, this->fields.finishCallback, v2);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___ctor(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__0(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  const MethodInfo *v4; // x2
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BD913D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__);
    byte_4BD913D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, method);
  _9__1 = this->fields.__9__1;
  v6 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
LABEL_8:
    sub_1C22094(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v6, _9__1, v4);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C22094(this, scanId);
  SubmarineMapManager__OnScannerSelected(this->fields.__4__this, scanId, this->fields.panelData, v3);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___ctor(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__0(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x4
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v8; // x21
  _BOOL4 isShowDialogUpper; // w24
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD913E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_bool__TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__);
    byte_4BD913E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  ((void (__fastcall *)(SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._30_SetAllTouchBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  SubmarineMapManager__ShowScanRange(_4__this, this->fields.scanId, this->fields.panelData, v4);
  _9__1 = this->fields.__9__1;
  scanId = this->fields.scanId;
  v8 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_1C22084(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
LABEL_9:
    sub_1C22094(_4__this, method);
  SubmarineMapManager__OpenScanConfirmDialog(v8, scanId, isShowDialogUpper, _9__1, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  SubmarineMapManager_o *v8; // x20
  System_Action_int__o *_9__2; // x22
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BD913F & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__);
    byte_4BD913F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, (const MethodInfo *)yes);
  v8 = this->fields.__4__this;
  if ( yes )
  {
    if ( v8 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, v7);
      return;
    }
LABEL_11:
    sub_1C22094(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v10, v11, v12, v13, v14, v15);
  }
  if ( !v8 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v8, _9__2, v6);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C22094(this, lscanId);
  SubmarineMapManager__OnScannerSelected(this->fields.__4__this, lscanId, this->fields.panelData, v3);
}


void __fastcall SubmarineMapManager___c__DisplayClass37_0___ctor(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScanDecided_b__0(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( !this->fields.__4__this )
    sub_1C22094(this, result);
  SubmarineMapManager__OnScanPanelRequestFinished(
    this->fields.__4__this,
    result,
    this->fields.scanId,
    this->fields.panelData,
    v3);
}


void __fastcall SubmarineMapManager___c__DisplayClass40_0___ctor(
        SubmarineMapManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass40_0___SubsequentialOpenPanelTaskChain_b__0(
        SubmarineMapManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass41_0___ctor(
        SubmarineMapManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass41_0___RevealAvailableSpots_b__0(
        SubmarineMapManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass48_0___ctor(
        SubmarineMapManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass48_0___UpdateTerminalInfo_b__0(
        SubmarineMapManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  ConnectMark_c *klass; // x8
  ConnectMark_c *v6; // x8
  SubmarineMapManager_o *_4__this; // x19
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4BD9140 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD9140 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0LL);
  if ( !this->fields.__4__this )
    goto LABEL_22;
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.connectMark->klass;
  if ( !klass )
    goto LABEL_22;
  Instance = *(CommonUI_o **)&klass->_2.instance_size;
  if ( !Instance )
    goto LABEL_22;
  TitleInfoControl__CheckEventPointReward(
    (TitleInfoControl_o *)Instance,
    this->fields.eventDetailEntity,
    0LL,
    this->fields.beforePoint,
    0LL);
  if ( !byte_4BD7183 )
  {
    sub_1C21E38(&TerminalSceneComponent_TypeInfo);
    byte_4BD7183 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = Instance->fields.connectMark->klass;
  if ( !v6
    || (Instance = *(CommonUI_o **)&v6->_2.thread_static_fields_offset) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, v4),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_22:
    sub_1C22094(Instance, v4);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))_4__this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    _4__this,
    _4__this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(_4__this, v8);
  SubmarineMapManager__ShowScannableEffect(_4__this, v9);
}


void __fastcall SubmarineMapManager___c__DisplayClass59_0___ctor(
        SubmarineMapManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapManager___c__DisplayClass59_0___AdjustSilhouetteGimmicks_b__0(
        SubmarineMapManager___c__DisplayClass59_0_o *this,
        SrcSpotBasePrefab_o *x,
        const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct SubmarineSilhouetteData_o *silhouetteData; // x9

  if ( !x
    || (mMapCtrl_SpotInfo = x->fields.mMapCtrl_SpotInfo) == 0LL
    || (silhouetteData = this->fields.silhouetteData) == 0LL )
  {
    sub_1C22094(this, x);
  }
  return mMapCtrl_SpotInfo->fields.spotId == silhouetteData->fields._SpotId_k__BackingField;
}


void __fastcall SubmarineMapManager___c__DisplayClass66_0___ctor(
        SubmarineMapManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass66_0___OpenSelectScannerDialog_b__0(
        SubmarineMapManager___c__DisplayClass66_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  struct SubmarineMapManager_o *_4__this; // x0

  if ( (byte_4BD9141 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_int___);
    byte_4BD9141 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2F02570 *)Method_ActionExtensions_Call_int___);
}


void __fastcall SubmarineMapManager___c__DisplayClass68_0___ctor(
        SubmarineMapManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass68_0___OpenScanConfirmDialog_b__0(
        SubmarineMapManager___c__DisplayClass68_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  struct SubmarineMapManager_o *_4__this; // x0

  if ( (byte_4BD9142 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_bool___);
    byte_4BD9142 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2F02520 *)Method_ActionExtensions_Call_bool___);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___ctor(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__0(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *scanAnimObj; // x0

  scanAnimObj = this->fields.scanAnimObj;
  if ( !scanAnimObj )
    sub_1C22094(0LL, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_1C22094(0LL, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C22094(0LL, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, method);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_4BD9143 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD9143 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(scanAnimObj, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___ctor(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateRevealSpotOnPanelTasks_b__0(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  struct SubmarineMapPanelData_o *panelData; // x8

  if ( !x || (panelData = this->fields.panelData) == 0LL )
    sub_1C22094(this, x);
  return x->fields.spotId == panelData->fields._SpotId_k__BackingField;
}


void __fastcall SubmarineMapManager___c__DisplayClass97_0___ctor(
        SubmarineMapManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapManager___c__DisplayClass97_0___CreateScanOpenPanelTask_b__2(
        SubmarineMapManager___c__DisplayClass97_0_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields._Chain_k__BackingField == this->fields.i;
}