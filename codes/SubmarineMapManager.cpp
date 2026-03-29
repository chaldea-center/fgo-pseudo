void SubmarineMapManager___ctor(SubmarineMapManager_o *this, const MethodInfo *method)
{
  this->fields.ACCELERATION_TIME_SCALE = 4.0;
  this->fields.isEnableClickPanel = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SubmarineMapManager__AdjustDepth(
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

  if ( (byte_4D2D2F7 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_4D2D2F7 = 1;
  }
  if ( !go )
    goto LABEL_23;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                    go,
                                    (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1C93D34(this);
  }
  v8 = 0x7FFFFFFF;
LABEL_14:
  if ( v8 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__52415656(
                                      go,
                                      (const MethodInfo_31FCCA8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
          UIWidget__set_depth((UIWidget_o *)this, v14 + *(_DWORD *)&this->fields.isEnableClickPanel, 0);
          v11 = (int)v12->fields.m_CancellationTokenSource;
          if ( (int)++v13 >= v11 )
            return;
        }
        goto LABEL_22;
      }
      return;
    }
LABEL_23:
    sub_1C93D2C(this, go);
  }
}


void SubmarineMapManager__AdjustEachSpotsPositions(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v4; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v6; // x20
  unsigned int v7; // w22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v9; // x2

  if ( (byte_4D2D2F4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D2F4 = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0);
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
        sub_1C93D34(Children);
      Children = (UnityEngine_GameObject_array *)v6->m_Items[v7];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_object, v9);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_15:
    sub_1C93D2C(Children, v4);
  }
}


void SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v4; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v6; // x21
  unsigned int v7; // w19
  Il2CppObject *Component_object; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_Dictionary_int__object__o *v19; // x21
  int v20; // w8
  UnityEngine_GameObject_o *v21; // x22
  unsigned int v22; // w19
  UnityEngine_Object_o *v23; // x23
  intptr_t m_CachedPtr; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v26; // x24
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t current; // w1
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
  const MethodInfo *v46; // x2
  SubmarineMapDataManager_o *v47; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v49; // x23
  __int64 v50; // x0
  __int64 v51; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v53; // x1
  float32x2_t v54; // d9
  __int128 v55; // q0
  _BOOL8 v56; // x0
  __int64 v57; // x1
  __int128 v58; // q1
  int8x8_t v59; // d0
  int8x8_t v60; // d2
  __int64 v61; // x1
  UnityEngine_Transform_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // d0
  unsigned __int64 localPosition; // kr00_8
  __int128 v69; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+70h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v74; // 0:kr14_12.12

  if ( (byte_4D2D2F6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___79020896);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_SrcSpotBasePrefab__TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    byte_4D2D2F6 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  value = 0;
  memset(&v71, 0, sizeof(v71));
  v2 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0);
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
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
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
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v2,
            Component_object,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          v2->fields._size = size + 1;
          v18[4] = (Il2CppClass *)Component_object;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)Component_object, v9, v10, v11, v12, v13, v14);
        }
      }
      klass = (int)v6[1].klass;
      if ( (int)++v7 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_1C93D34(Children);
  }
LABEL_17:
  v19 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v19,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0);
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
      v23 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                      Children,
                                      (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v23, 0, 0);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_59;
        m_CachedPtr = v23[4].fields.m_CachedPtr;
        if ( !m_CachedPtr || !v19 )
          goto LABEL_59;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v19,
          *(_DWORD *)(m_CachedPtr + 20),
          (Il2CppObject *)v23,
          (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
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
    || (Children = (UnityEngine_GameObject_o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0 )
  {
LABEL_59:
    sub_1C93D2C(Children, v4);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v73 = v70;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v26 = sub_1C93D20(SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass59_0___ctor((SubmarineMapManager___c__DisplayClass59_0_o *)v26, 0);
    if ( !v26 )
      sub_1C93D2C(v27, v28);
    current = (int32_t)v73.fields._current;
    *(_QWORD *)(v26 + 16) = v73.fields._current;
    v36 = (SubmarineSilhouetteData_o **)(v26 + 16);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 16), current, v29, v30, v31, v32, v33, v34);
    if ( !*(_QWORD *)(v26 + 16) )
      sub_1C93D2C(v37, v38);
    if ( *(int *)(*(_QWORD *)(v26 + 16) + 20LL) > 0 )
    {
      v39 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_object____ctor(
        v39,
        (Il2CppObject *)v26,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0);
      if ( !v2 )
        sub_1C93D2C(v40, v41);
      v42 = System_Collections_Generic_List_object___Find(
              v2,
              (System_Predicate_T__o *)v39,
              (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v42, 0, 0);
      if ( !v43 )
      {
        if ( !*v36 )
          sub_1C93D2C(v43, v44);
        if ( !v19 )
          sub_1C93D2C(v43, v44);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v19,
               (*v36)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v47 = this->fields.submarineData;
          if ( !v47 )
            sub_1C93D2C(0, v45);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v47,
                                                                                      *v36,
                                                                                      v46);
          v49 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_object____ctor_59216528(
            v49,
            SilhouetteOccupiedPanels,
            (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___79020896);
          if ( !v42 )
            sub_1C93D2C(v50, v51);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v42, 0);
          if ( !transform )
            sub_1C93D2C(0, v53);
          localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(transform, 0);
          LODWORD(v66) = localPosition;
          *(_QWORD *)&v69 = v66;
          if ( !byte_4D2A139 )
          {
            v64 = sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
            byte_4D2A139 = 1;
          }
          if ( !v49 )
            sub_1C93D2C(v64, v65);
          v54.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v70,
            v49,
            (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v71 = v70;
          v55 = v69;
          DWORD1(v55) = HIDWORD(localPosition);
          while ( 1 )
          {
            v69 = v55;
            v56 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v71,
                    (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v56 )
              break;
            if ( !v71.fields._current )
              sub_1C93D2C(v56, v57);
            v59.n64_u64[0] = *(unsigned __int64 *)((char *)&v71.fields._current[1].monitor + 4);
            *(int8x8_t *)&v58 = vbsl_s8(vcgt_f32(v59, *(float32x2_t *)&v69), *(int8x8_t *)&v69, v59);
            v60.n64_u64[0] = vadd_f32(
                               *(float32x2_t *)&v58,
                               vsub_f32(vadd_f32(v54, *(float32x2_t *)&v69), *(float32x2_t *)&v58)).n64_u64[0];
            v54.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v60, v59), v60, v59), *(float32x2_t *)&v58).n64_u64[0];
            v55 = v58;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v71,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_1C93D2C(0, v61);
          v62 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0);
          if ( !v62 )
            sub_1C93D2C(0, v63);
          *(float32x2_t *)&v74.fields.x = vadd_f32(
                                            vmul_f32(v54, (float32x2_t)0x3F0000003F000000LL),
                                            *(float32x2_t *)&v69);
          v74.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v62, v74, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
}


void SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  SubmarineMapManager_o *v4; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo_39A43D0 *v7; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v9; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v10; // 0:x0.12
  System_Nullable_Vector3__o v11; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4D2D2F3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Nullable_Vector2___ctor__);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    byte_4D2D2F3 = 1;
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
  *(_QWORD *)&v9.fields.hasValue = 0;
  System_Nullable_Vector2____ctor(v10, PanelUnitSize_k__BackingField, (const MethodInfo_39A3B50 *)method);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  *(_QWORD *)&v11.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v11.fields.hasValue = &centerPosition;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v11, zeroVector, v7);
  if ( !spot )
LABEL_9:
    sub_1C93D2C(this, spot);
  SrcSpotBasePrefab__AdjustBtnColliderArea(spot, v9, centerPosition, 0);
}


void SubmarineMapManager__AdjustSpotPosition(
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
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v13; // x2
  float32x2_t v14; // d0
  unsigned __int64 v; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o v16; // 0:kr00_12.12
  UnityEngine_Vector3_o v17; // 0:kr14_12.12

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
                                    method);
  if ( !this )
  {
    this = (SubmarineMapManager_o *)spot->fields.mMapCtrl_SpotInfo;
    if ( this )
    {
      this = (SubmarineMapManager_o *)MapControl_SpotInfo__GetMine((MapControl_SpotInfo_o *)this, 0);
      if ( this )
      {
        v9 = this;
        this = (SubmarineMapManager_o *)v5->fields.terminalMap;
        if ( this )
        {
          v16 = ScrTerminalMap__LocalPosFromCoord(
                  (ScrTerminalMap_o *)this,
                  (float)SHIDWORD(v9->fields.warInfo),
                  (float)SLODWORD(v9->fields.terminalMap),
                  0.0,
                  0.0,
                  0);
          v14.n64_u32[0] = LODWORD(v16.fields.x);
          submarineData = v5->fields.submarineData;
          if ( submarineData )
          {
            Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
            if ( Settings_k__BackingField )
            {
              v14.n64_u32[1] = LODWORD(v16.fields.y);
              v8 = v16.fields.z + Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.z;
              v = vadd_f32(v14, *(float32x2_t *)&Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.x).n64_u64[0];
              goto LABEL_14;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1C93D2C(this, spot);
  }
  v6 = v5->fields.submarineData;
  if ( !v6 )
    goto LABEL_15;
  PositionCalculator_k__BackingField = (float32x2_t *)v6->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_15;
  v = vadd_f32(
        PositionCalculator_k__BackingField[4],
        vmul_f32(
          vmul_f32(
            PositionCalculator_k__BackingField[2],
            vcvt_f32_s32(
              vsub_s32(
                (int32x2_t)(vshl_n_s32((int32x2_t)this->fields.m_CachedPtr, 1u).n64_u64[0] | 0x100000001LL),
                PositionCalculator_k__BackingField[3]))),
          (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v8 = 0.0;
LABEL_14:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spot, 0);
  *(_QWORD *)&v17.fields.x = v;
  v17.fields.z = v8;
  GameObjectExtensions__SetLocalPosition(gameObject, v17, 0);
  SubmarineMapManager__AdjustSpotCollider(v5, spot, v13);
}


void SubmarineMapManager__CheckNewPlayableEventQuest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v4; // x1
  System_Int32_array *eventId; // x0
  __int64 v6; // x1
  System_Int32_array *v7; // x20
  CommonUI_o *v8; // x19
  int32_t v9; // w20
  SubmarineMapManager___c_c *v10; // x0
  System_Action_o *_9__49_0; // x22
  System_String_o *v12; // x21
  Il2CppObject *v13; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2D2EE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C93AD4(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__);
    sub_1C93AD4(&SubmarineMapManager___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_6974/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/);
    byte_4D2D2EE = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = (System_Int32_array *)SubmarineMapManager__get_eventId(this, v4);
  if ( !Instance )
    goto LABEL_21;
  eventId = clsQuestCheck__GetNewPlayableEventQuestId((clsQuestCheck_o *)Instance, (int32_t)eventId, 0);
  if ( !eventId )
    goto LABEL_21;
  v7 = eventId;
  if ( !eventId->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  eventId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !LODWORD(v7->max_length) )
    goto LABEL_22;
  if ( !eventId )
    goto LABEL_21;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)eventId, v7->m_Items[0], 143, 0) )
    return;
  eventId = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LODWORD(v7->max_length) )
LABEL_22:
    sub_1C93D34(eventId);
  v8 = (CommonUI_o *)eventId;
  v9 = v7->m_Items[0];
  v10 = SubmarineMapManager___c_TypeInfo;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v10 = SubmarineMapManager___c_TypeInfo;
  }
  _9__49_0 = v10->static_fields->__9__49_0;
  v12 = (System_String_o *)StringLiteral_6974/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__49_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SubmarineMapManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v13, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__49_0,
      (int32_t)_9__49_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  messagePosY = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&messagePosY,
    30.0,
    (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
  if ( !v8 )
LABEL_21:
    sub_1C93D2C(eventId, v6);
  CommonUI__OpenQuestNewPlayableDialog(v8, v9, v12, _9__49_0, 0, messagePosY, 0.0, 0);
}


void SubmarineMapManager__ClickPanel(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x2
  SubmarineMapPanelData_o *v21; // x1
  _QWORD *v22; // x0
  System_Reflection_MethodBase_o *v23; // x0
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  __int64 v29; // x21
  System_Delegate_o **v30; // x22
  System_Delegate_o *v31; // x23
  SchedulerTaskBase_TaskCallback_o *v32; // x24
  System_Delegate_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  SchedulerTaskBase_TaskCallback_c *v40; // x1
  TaskScheduler_o *taskScheduler; // x19
  __int64 v42; // x20
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // x0

  if ( (byte_4D2D2E4 & 1) == 0 )
  {
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager_ClickPanel__);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
    byte_4D2D2E4 = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass35_0___ctor((SubmarineMapManager___c__DisplayClass35_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = panelData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)panelData, v14, v15, v16, v17, v18, v19);
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
      v24 = (_QWORD *)sub_1C93AEC(Method_SubmarineMapManager_ClickPanel__);
    v25 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v29 = sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v29, PanelSelectDelaySecond_k__BackingField, 0);
        if ( v29 )
        {
          v30 = (System_Delegate_o **)(v29 + 32);
          v31 = *(System_Delegate_o **)(v29 + 32);
          v32 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(
            v32,
            (Il2CppObject *)v5,
            Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__,
            0);
          v33 = System_Delegate__Combine(v31, (System_Delegate_o *)v32, 0);
          if ( v33 )
          {
            v40 = SchedulerTaskBase_TaskCallback_TypeInfo;
            if ( (SchedulerTaskBase_TaskCallback_c *)v33->klass != SchedulerTaskBase_TaskCallback_TypeInfo
              || (*v30 = v33, (SchedulerTaskBase_TaskCallback_c *)v33->klass != v40) )
            {
              sub_1C940C8(v33);
              return;
            }
          }
          else
          {
            *v30 = 0;
          }
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
          taskScheduler = this->fields.taskScheduler;
          v6 = sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
          if ( v6 )
          {
            v42 = v6;
            v43 = sub_1C93C10(v29, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
            if ( !v43 )
            {
              v50 = sub_1C93D50();
              sub_1C93BFC(v50, 0);
            }
            if ( !*(_DWORD *)(v42 + 24) )
              sub_1C93D34(v43);
            *(_QWORD *)(v42 + 32) = v29;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 32), v29, v44, v45, v46, v47, v48, v49);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v42, 0);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C93D2C(v6, v7);
  }
  v22 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_1C93AEC(Method_SubmarineMapManager_ClickPanel__);
  v23 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v22, v22[4]);
  OverwriteAssetSoundName__PlaySystemSe(v23, 2, 0, 0);
}


System_Collections_IEnumerator_o *SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2D2DB & 1) == 0 )
  {
    sub_1C93AD4(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
    byte_4D2D2DB = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
  SubmarineMapManager__CoInitRequest_d__20___ctor((SubmarineMapManager__CoInitRequest_d__20_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2D2DC & 1) == 0 )
  {
    sub_1C93AD4(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
    byte_4D2D2DC = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
  SubmarineMapManager__CoOnAfterSpotCreated_d__23___ctor((SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  BaseDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  Il2CppObject *ScanConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  EventMapManagerBase_o *v16; // x0
  const MethodInfo *v17; // x2
  BaseDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v20; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  EventMapManagerBase_o *v29; // x0
  const MethodInfo *v30; // x2
  GrandQuestFolderBoardItem_o *p_newScannerDialog; // x20
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v33; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x19
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  EventMapManagerBase_o *v42; // x0
  const MethodInfo *v43; // x2

  if ( (byte_4D2D2F8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D2F8 = 1;
  }
  p_scanConfirmDialog = (BaseDialog_o **)&this->fields.scanConfirmDialog;
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(scanConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_28;
    ScanConfirmDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._ScanConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__Instantiate_object_(
           ScanConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v5,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    *p_scanConfirmDialog = (BaseDialog_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.scanConfirmDialog,
      (int32_t)Component_object,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    EventMapManagerBase__LocateDialogToUiRoot(v16, *p_scanConfirmDialog, v17);
  }
  p_selectScannerDialog = (BaseDialog_o **)&this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(selectScannerDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v20 = this->fields.assetManager;
    if ( !v20 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v20->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__Instantiate_object_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_28;
    v22 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v5,
            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    *p_selectScannerDialog = (BaseDialog_o *)v22;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.selectScannerDialog,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    EventMapManagerBase__LocateDialogToUiRoot(v29, *p_selectScannerDialog, v30);
  }
  p_newScannerDialog = (GrandQuestFolderBoardItem_o *)&this->fields.newScannerDialog;
  newScannerDialog = (UnityEngine_Object_o *)this->fields.newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(newScannerDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v33 = this->fields.assetManager;
    if ( v33 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v33->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__Instantiate_object_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v35 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v5,
                (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        p_newScannerDialog->klass = (GrandQuestFolderBoardItem_c *)v35;
        sub_1C93A78(p_newScannerDialog, (int32_t)v35, v36, v37, v38, v39, v40, v41);
        EventMapManagerBase__LocateDialogToUiRoot(v42, (BaseDialog_o *)p_newScannerDialog->klass, v43);
        return;
      }
    }
LABEL_28:
    sub_1C93D2C(v5, v6);
  }
}


void SubmarineMapManager__CreateAssetManagerIfNotExists(SubmarineMapManager_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  const MethodInfo *v13; // x1

  if ( (byte_4D2D2E1 & 1) == 0 )
  {
    sub_1C93AD4(&SubmarineMapAssetManager_TypeInfo);
    byte_4D2D2E1 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (GrandQuestFolderBoardItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_1C93D20(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    p_assetManager->klass = (GrandQuestFolderBoardItem_c *)v5;
    sub_1C93A78(p_assetManager, (int32_t)v5, v7, v8, v9, v10, v11, v12);
    if ( !p_assetManager->klass )
      sub_1C93D2C(0, v13);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v13);
  }
}


void SubmarineMapManager__CreateContainers(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x9
  Il2CppObject *PanelContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct SubmarineMapAssetManager_o *v14; // x8
  struct ScrTerminalMap_o *v15; // x9
  Il2CppObject *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v17; // x0
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct SubmarineMapAssetManager_o *v25; // x8
  struct ScrTerminalMap_o *v26; // x9
  Il2CppObject *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v28; // x0
  Il2CppObject *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  v2 = this;
  if ( (byte_4D2D2EF & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D2EF = 1;
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
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object__52629400(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.panelContainer, (int32_t)v7, v8, v9, v10, v11, v12, v13);
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
  v17 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v18 = UnityEngine_Object__Instantiate_object__52629400(
          EffectContainerPrefab_k__BackingField,
          v17,
          (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.effectContainer, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = v2->fields.assetManager;
  if ( !v25 || (v26 = v2->fields.terminalMap) == 0 || (this = (SubmarineMapManager_o *)v26->fields.dispRoot) == 0 )
LABEL_15:
    sub_1C93D2C(this, method);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v25->fields._GridLinePrefab_k__BackingField;
  v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v29 = UnityEngine_Object__Instantiate_object__52629400(
          GridLinePrefab_k__BackingField,
          v28,
          (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v29;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.gridLine, (int32_t)v29, v30, v31, v32, v33, v34, v35);
}


System_Collections_Generic_List_SchedulerTaskBase__o *SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t current; // w1
  SubmarineSilhouetteData_o **v19; // x22
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  SubmarineSilhouetteData_o *v22; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  SubmarineMapDataManager_o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v30; // x24
  __int64 v31; // x0
  __int64 v32; // x1
  SubmarineMapManager___c_c *v33; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v35; // x26
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v44; // x1
  System_Collections_Generic_List_object__o *v45; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  System_Predicate_object__o *v48; // x26
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v54; // x1
  UnityEngine_Transform_o *v55; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v58; // x0
  __int64 v59; // x1
  struct SubmarineMapDataManager_o *v60; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  Il2CppObject *v69; // x1
  struct System_Object_array *items; // x8
  _QWORD *v71; // x9
  __int64 size; // x10
  Il2CppClass **v73; // x0
  System_Object_array *v74; // x1
  const MethodInfo *v75; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  Il2CppObject *v83; // x1
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x0
  __int64 v89; // x0
  const MethodInfo *v90; // x1
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v92; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D311 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___79020896);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C93AD4(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1C93AD4(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C93AD4(&SrcSpotBasePrefab_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    sub_1C93AD4(&SubmarineMapManager___c_TypeInfo);
    byte_4D2D311 = 1;
  }
  memset(&v92, 0, sizeof(v92));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0 )
  {
    sub_1C93D2C(SilhouetteDataList_k__BackingField, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v91,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v92 = v91;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v92,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v9 = sub_1C93D20(SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass101_0___ctor((SubmarineMapManager___c__DisplayClass101_0_o *)v9, 0);
    if ( !v9 )
      sub_1C93D2C(v10, v11);
    current = (int32_t)v92.fields._current;
    *(_QWORD *)(v9 + 16) = v92.fields._current;
    v19 = (SubmarineSilhouetteData_o **)(v9 + 16);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), current, v12, v13, v14, v15, v16, v17);
    v22 = *(SubmarineSilhouetteData_o **)(v9 + 16);
    if ( !v22 )
      sub_1C93D2C(0, v20);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v22, beforeClearQuestId, v21);
    if ( HasClearCondQuestId )
    {
      if ( !*v19 )
        sub_1C93D2C(HasClearCondQuestId, v24);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v19)->fields._ObjectQuestIds_k__BackingField, -1, 0, v25) )
      {
        v28 = this->fields.submarineData;
        if ( !v28 )
          sub_1C93D2C(0, v26);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v28,
                                                                                    *v19,
                                                                                    v27);
        v30 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_object____ctor_59216528(
          v30,
          SilhouetteOccupiedPanels,
          (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___79020896);
        v33 = SubmarineMapManager___c_TypeInfo;
        if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v33 = SubmarineMapManager___c_TypeInfo;
        }
        _9__101_0 = (System_Predicate_object__o *)v33->static_fields->__9__101_0;
        if ( !_9__101_0 )
        {
          if ( !v33->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v33);
            v33 = SubmarineMapManager___c_TypeInfo;
          }
          v35 = (Il2CppObject *)v33->static_fields->__9;
          _9__101_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_object____ctor(
            _9__101_0,
            v35,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0);
          static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          static_fields->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__101_0,
            (int32_t)_9__101_0,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
        }
        if ( !v30 )
          sub_1C93D2C(v31, v32);
        All = System_Collections_Generic_List_object___FindAll(
                v30,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_387A0AC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v45 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_1C93D2C(0, v44);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_1C93D2C(0, v44);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0);
          v48 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            v48,
            (Il2CppObject *)v9,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0);
          if ( !SpotList )
            sub_1C93D2C(v49, v50);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v48,
                 (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_1C93D2C(0, v51);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0);
            if ( !*v19 )
              sub_1C93D2C(transform, v54);
            v55 = transform;
            SpotId_k__BackingField = (*v19)->fields._SpotId_k__BackingField;
            if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0);
            if ( !v55 )
              sub_1C93D2C(GobjName, GobjName);
            v58 = UnityEngine_Transform__Find(v55, GobjName, 0);
            if ( !v58 )
              sub_1C93D2C(0, v59);
            localPosition = UnityEngine_Transform__get_localPosition(v58, 0);
            v60 = this->fields.submarineData;
            if ( !v60 )
              sub_1C93D2C(v89, v90);
            Settings_k__BackingField = v60->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_1C93D2C(v89, v90);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         localPosition,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v90);
            v69 = MoveCameraToPositionTask;
            if ( !v5 )
              sub_1C93D2C(MoveCameraToPositionTask, MoveCameraToPositionTask);
            items = v5->fields._items;
            v71 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v5->fields._version;
            if ( !items )
              sub_1C93D2C(MoveCameraToPositionTask, MoveCameraToPositionTask);
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                MoveCameraToPositionTask,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
            }
            else
            {
              v73 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v73[4] = (Il2CppClass *)v69;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v69, v63, v64, v65, v66, v67, v68);
            }
          }
          v74 = System_Collections_Generic_List_object___ToArray(
                  v45,
                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v74,
                                                           v75);
          v83 = OpenPanelsAndRevealSpotsTask;
          if ( !v5 )
            sub_1C93D2C(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v84 = v5->fields._items;
          v85 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
          ++v5->fields._version;
          if ( !v84 )
            sub_1C93D2C(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v86 = v5->fields._size;
          if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v87 = &v84->obj.klass + v86;
            v5->fields._size = v86 + 1;
            v87[4] = (Il2CppClass *)v83;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v87 + 4), (int32_t)v83, v77, v78, v79, v80, v81, v82);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v92,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
}


SchedulerTaskBase_o *SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_4D2D30E & 1) == 0 )
  {
    sub_1C93AD4(&SchedulerTaskNone_TypeInfo);
    byte_4D2D30E = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_1C93D20(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v4, 0, 0, 0);
  return (SchedulerTaskBase_o *)v4;
}


SchedulerTaskBase_o *SubmarineMapManager__CreateMoveCameraToPositionTask(
        SubmarineMapManager_o *this,
        UnityEngine_Vector3_o destPos,
        float size,
        float second,
        const MethodInfo *method)
{
  const MethodInfo_39A3B50 *v5; // x2
  float y; // s10
  float x; // s11
  MapCamera_o *mapCamera; // x19
  MapCameraPerformance_o *v12; // x20
  System_Nullable_float__o v14; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector2__o v15; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector2__o v16; // 0:x0.12
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_4D2D307 & 1) == 0 )
  {
    sub_1C93AD4(&MapCameraPerformance_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector2___ctor__);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    byte_4D2D307 = 1;
  }
  LODWORD(v16.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v16.fields.hasValue = &v15;
  v17.fields.x = x;
  v17.fields.y = y;
  v15.fields.value.fields.y = 0.0;
  *(_QWORD *)&v15.fields.hasValue = 0;
  System_Nullable_Vector2____ctor(v16, v17, v5);
  v14 = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&v14,
    size,
    (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
  v12 = (MapCameraPerformance_o *)sub_1C93D20(MapCameraPerformance_TypeInfo);
  MapCameraPerformance___ctor(v12, mapCamera, second, v15, v14, 15, 0);
  return (SchedulerTaskBase_o *)v12;
}


void SubmarineMapManager__CreateNeverOpenSurrounds(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  const MethodInfo *v7; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SubmarineMapManager_o *v10; // x20
  int v11; // w24
  int v12; // w25
  struct SubmarineMapAssetManager_o *v13; // x8
  __int64 v14; // x21
  Il2CppObject *v15; // x22
  UnityEngine_Transform_o *transform; // x23
  SubmarineMapManager_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  SubmarineMapPanelComponent_o *v24; // x22
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  struct SubmarineMapDataManager_o *v29; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v31; // x20
  int32_t v32; // w21
  int32_t v33; // w22
  int v34; // w26
  struct SubmarineMapDataManager_o *v35; // x8
  struct SubmarineMapAssetManager_o *v36; // x8
  SubmarineMapManager_o *v37; // x23
  Il2CppObject *v38; // x24
  UnityEngine_Transform_o *v39; // x25
  SubmarineMapManager_o *v40; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  SubmarineMapPanelComponent_o *v47; // x24
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  UnityEngine_Vector3_o v51; // 0:kr00_12.12
  UnityEngine_Vector3_o v52; // 0:kr14_12.12
  UnityEngine_Vector3_o v53; // 0:kr20_12.12

  v2 = this;
  if ( (byte_4D2D2F1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&PanelUniqueIDUtil_TypeInfo);
    byte_4D2D2F1 = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_54;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0, 0) )
    return;
  panelContainer = (UnityEngine_Object_o *)v2->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(panelContainer, 0, 0) )
    return;
  closedPanelTexture = (UnityEngine_Object_o *)v2->fields.closedPanelTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  submarineData = v2->fields.submarineData;
  if ( !submarineData
    || (this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
                                          submarineData->fields._PositionCalculator_k__BackingField,
                                          v2->fields.closedPanelTexture,
                                          v7)) == 0 )
  {
LABEL_54:
    sub_1C93D2C(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v10 = this;
  v11 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      v13 = v2->fields.assetManager;
      if ( !v13 )
        goto LABEL_54;
      this = (SubmarineMapManager_o *)v2->fields.panelContainer;
      if ( !this )
        goto LABEL_54;
      v14 = *((_QWORD *)&v10->fields.mapInfo + v12);
      v15 = (Il2CppObject *)v13->fields._PanelPrefab_k__BackingField;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__52629400(
                                        v15,
                                        transform,
                                        (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
      if ( !this )
        goto LABEL_54;
      v17 = this;
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !v14 )
        goto LABEL_54;
      if ( !this )
        goto LABEL_54;
      *(float32x2_t *)&v51.fields.x = vadd_f32(
                                        *(float32x2_t *)(v14 + 16),
                                        vmul_f32(*(float32x2_t *)(v14 + 24), (float32x2_t)0x3F0000003F000000LL));
      v51.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v51, 0);
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)v17,
                                        (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
      if ( !this )
        goto LABEL_54;
      v24 = (SubmarineMapPanelComponent_o *)this;
      this->fields.mapCamera = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mapCamera, 0, v18, v19, v20, v21, v22, v23);
      SubmarineMapPanelComponent__SetSize(v24, (ObjectDomain_o *)v14, v25);
      SubmarineMapPanelComponent__SetClosedPanelTexture(v24, (ObjectDomain_o *)v14, v2->fields.closedPanelTexture, v26);
      SubmarineMapPanelComponent__SetClosedPanelVisible(v24, 1, v27);
      if ( v11 == v12 )
        break;
      if ( (unsigned int)++v12 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        sub_1C93D34(this);
    }
  }
  this = (SubmarineMapManager_o *)v2->fields.submarineData;
  if ( !this )
    goto LABEL_54;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                    (SubmarineMapDataManager_o *)this,
                                    method);
  v29 = v2->fields.submarineData;
  if ( !v29 )
    goto LABEL_54;
  PositionCalculator_k__BackingField = v29->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_54;
  v31 = this;
  v32 = 0;
  while ( v32 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
  {
    v33 = 0;
    v34 = 1;
    while ( v33 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
    {
      if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
      this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v32, v33, (System_Int32_array *)v31, v28);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v35 = v2->fields.submarineData;
        if ( !v35 )
          goto LABEL_54;
        this = (SubmarineMapManager_o *)v35->fields._PositionCalculator_k__BackingField;
        if ( !this )
          goto LABEL_54;
        *(float32x2_t *)&v52.fields.x = vadd_f32(
                                          (float32x2_t)this->fields.mapInfo,
                                          vmul_f32(
                                            vmul_f32(
                                              (float32x2_t)this->fields.m_CachedPtr,
                                              vcvt_f32_s32(
                                                vsub_s32(
                                                  (int32x2_t)__PAIR64__(v34, (2 * v32) | 1u),
                                                  (int32x2_t)this->fields.m_CancellationTokenSource))),
                                            (float32x2_t)0x3F0000003F000000LL));
        v52.fields.z = 0.0;
        this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                          v52,
                                          (SubmarinePanelPositionCalculator_o *)this,
                                          method);
        v36 = v2->fields.assetManager;
        if ( !v36 )
          goto LABEL_54;
        v37 = this;
        this = (SubmarineMapManager_o *)v2->fields.panelContainer;
        if ( !this )
          goto LABEL_54;
        v38 = (Il2CppObject *)v36->fields._PanelPrefab_k__BackingField;
        v39 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__52629400(
                                          v38,
                                          v39,
                                          (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
        if ( !this )
          goto LABEL_54;
        v40 = this;
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !v37 )
          goto LABEL_54;
        if ( !this )
          goto LABEL_54;
        *(float32x2_t *)&v53.fields.x = vadd_f32(
                                          (float32x2_t)v37->fields.m_CachedPtr,
                                          vmul_f32(
                                            (float32x2_t)v37->fields.m_CancellationTokenSource,
                                            (float32x2_t)0x3F0000003F000000LL));
        v53.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v53, 0);
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v40,
                                          (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
        if ( !this )
          goto LABEL_54;
        v47 = (SubmarineMapPanelComponent_o *)this;
        this->fields.mapCamera = 0;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mapCamera, 0, v41, v42, v43, v44, v45, v46);
        SubmarineMapPanelComponent__SetSize(v47, (ObjectDomain_o *)v37, v48);
        SubmarineMapPanelComponent__SetClosedPanelTexture(
          v47,
          (ObjectDomain_o *)v37,
          v2->fields.closedPanelTexture,
          v49);
        SubmarineMapPanelComponent__SetClosedPanelVisible(v47, 1, v50);
      }
      v29 = v2->fields.submarineData;
      if ( v29 )
      {
        PositionCalculator_k__BackingField = v29->fields._PositionCalculator_k__BackingField;
        ++v33;
        v34 += 2;
        if ( PositionCalculator_k__BackingField )
          continue;
      }
      goto LABEL_54;
    }
    PositionCalculator_k__BackingField = v29->fields._PositionCalculator_k__BackingField;
    ++v32;
    if ( !PositionCalculator_k__BackingField )
      goto LABEL_54;
  }
}


SchedulerTaskBase_o *SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effectContainer; // x0
  const MethodInfo_39A43D0 *v8; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v10; // x22
  SchedulerTaskCommonEffect_o *v11; // x0
  SchedulerTaskCommonEffect_o *v12; // x21
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v15; // x24
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Delegate_o *v23; // x8
  SchedulerTaskBase_TaskCallback_c *v24; // x1
  SchedulerTaskBase_array *v25; // x22
  SchedulerTaskWaitTime_o *v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  SchedulerTaskOrthostichy_o *v39; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v42; // s8
  System_Collections_Generic_List_object__o *v43; // x22
  SchedulerTaskWaitTime_o *v44; // x23
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  const MethodInfo *v55; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v57; // x19
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  SchedulerTaskBase_array *v64; // x20
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  SchedulerTaskParallel_o *v71; // x19
  __int64 v73; // x0
  System_Nullable_Vector3__o v74; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v75; // 0:x0.16
  System_Nullable_Vector3__o v76; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D30B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskCommonEffect_TypeInfo);
    sub_1C93AD4(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C93AD4(&SchedulerTaskParallel_TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapPanelData_OpenPanel__);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4D2D30B = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0);
  if ( !panelData )
    goto LABEL_32;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  *(_QWORD *)&v75.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  v10 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v75.fields.hasValue = &v74;
  *(_QWORD *)&v74.fields.hasValue = 0;
  *(_QWORD *)&v74.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v75, LocalPosition_k__BackingField, v8);
  v11 = (SchedulerTaskCommonEffect_o *)sub_1C93D20(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v76.fields.hasValue = 0;
  *(_QWORD *)&v76.fields.value.fields.y = 0;
  v12 = v11;
  SchedulerTaskCommonEffect___ctor_44996860(
    v11,
    v10,
    effectScanedPanelObjPool,
    v74,
    v76,
    (System_Nullable_Vector3__o)0,
    1,
    0);
  if ( !v12 )
    goto LABEL_32;
  p_StartCallback = (System_Delegate_o **)&v12->fields.StartCallback;
  StartCallback = (System_Delegate_o *)v12->fields.StartCallback;
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v15, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0);
  v16 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v15, 0);
  v23 = v16;
  if ( v16 )
  {
    v24 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *p_StartCallback = v16;
      if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == v24 )
        goto LABEL_11;
    }
    sub_1C940C8(v16);
  }
  *p_StartCallback = v23;
LABEL_11:
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v12->fields.StartCallback, (int32_t)v23, v17, v18, v19, v20, v21, v22);
  v25 = (SchedulerTaskBase_array *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 2);
  v26 = (SchedulerTaskWaitTime_o *)sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v26, waitTime, 0);
  if ( !v25 )
    goto LABEL_32;
  if ( v26 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C93C10(v26, v25->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !LODWORD(v25->max_length) )
    goto LABEL_33;
  v25->m_Items[0] = (SchedulerTaskBase_o *)v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v25->m_Items, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  effectContainer = (UnityEngine_GameObject_o *)sub_1C93C10(v12, v25->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( LODWORD(v25->max_length) <= 1 )
    goto LABEL_33;
  v25->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v25->m_Items[1], (int32_t)v12, v33, v34, v35, v36, v37, v38);
  v39 = (SchedulerTaskOrthostichy_o *)sub_1C93D20(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v39, v25, 0);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v42 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v43 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v44 = (SchedulerTaskWaitTime_o *)sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v44, v42, 0);
  if ( !v43 )
    goto LABEL_32;
  items = v43->fields._items;
  v52 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v43->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v43->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v43,
      (Il2CppObject *)v44,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v54 = &items->obj.klass + size;
    v43->fields._size = size + 1;
    v54[4] = (Il2CppClass *)v44;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v54 + 4), (int32_t)v44, v45, v46, v47, v48, v49, v50);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v55);
  System_Collections_Generic_List_object___AddRange(
    v43,
    RevealSpotOnPanelTasks,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v57 = (SchedulerTaskOrthostichy_o *)sub_1C93D20(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor_45000036(v57, (System_Collections_Generic_List_SchedulerTaskBase__o *)v43, 0);
  effectContainer = (UnityEngine_GameObject_o *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 2);
  if ( !effectContainer )
LABEL_32:
    sub_1C93D2C(effectContainer, panelData);
  v64 = (SchedulerTaskBase_array *)effectContainer;
  if ( v39 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C93C10(v39, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !LODWORD(v64->max_length) )
    goto LABEL_33;
  v64->m_Items[0] = (SchedulerTaskBase_o *)v39;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v64->m_Items, (int32_t)v39, v58, v59, v60, v61, v62, v63);
  if ( v57 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C93C10(v57, v64->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v73 = sub_1C93D50();
      sub_1C93BFC(v73, 0);
    }
  }
  if ( LODWORD(v64->max_length) <= 1 )
LABEL_33:
    sub_1C93D34(effectContainer);
  v64->m_Items[1] = (SchedulerTaskBase_o *)v57;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->m_Items[1], (int32_t)v57, v65, v66, v67, v68, v69, v70);
  v71 = (SchedulerTaskParallel_o *)sub_1C93D20(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v71, v64, 0);
  return (SchedulerTaskBase_o *)v71;
}


SchedulerTaskBase_o *SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_array *panelDataArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  Il2CppObject *OpenPanelAndRevealSpotTask; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0
  SchedulerTaskParallel_o *v22; // x19

  if ( (byte_4D2D30C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C93AD4(&SchedulerTaskParallel_TypeInfo);
    byte_4D2D30C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  max_length = panelDataArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C93D34(OpenPanelAndRevealSpotTask);
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
      v20 = OpenPanelAndRevealSpotTask;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          OpenPanelAndRevealSpotTask,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v20;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
      }
      LODWORD(max_length) = panelDataArray->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C93D2C(OpenPanelAndRevealSpotTask, v7);
  }
LABEL_13:
  v22 = (SchedulerTaskParallel_o *)sub_1C93D20(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_45001068(v22, (System_Collections_Generic_List_SchedulerTaskBase__o *)v5, 0);
  return (SchedulerTaskBase_o *)v22;
}


void SubmarineMapManager__CreatePanels(SubmarineMapManager_o *this, const MethodInfo *method)
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
  const MethodInfo *v19; // x1
  struct SubmarineMapDataManager_o *v20; // x8
  Il2CppObject *v21; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v23; // s8
  float v24; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  ObjectDomain_o *v33; // x23
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Action_object__o *v42; // x21
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4D2D2F0 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_SubmarineMapPanelData__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&Method_SubmarineMapManager_ClickPanel__);
    byte_4D2D2F0 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_36;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0, 0) )
  {
    panelContainer = (UnityEngine_Object_o *)v2->fields.panelContainer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0, 0) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)v2->fields.closedPanelTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        submarineData = v2->fields.submarineData;
        if ( submarineData )
        {
          this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField;
          if ( this )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v44,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v45 = v44;
            while ( 1 )
            {
              v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v45,
                     (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v8 )
                break;
              v10 = v2->fields.assetManager;
              if ( !v10 )
                sub_1C93D2C(v8, v9);
              v11 = v2->fields.panelContainer;
              if ( !v11 )
                sub_1C93D2C(0, v9);
              current = v45.fields._current;
              v13 = (Il2CppObject *)v10->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v11, 0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v15 = UnityEngine_Object__Instantiate_object__52629400(
                      v13,
                      transform,
                      (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
              v17 = (UnityEngine_GameObject_o *)v15;
              if ( !v15 )
                sub_1C93D2C(0, v16);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v15,
                                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v20 = v2->fields.submarineData;
              if ( !v20 )
                sub_1C93D2C(Component_object, v19);
              if ( !current )
                sub_1C93D2C(Component_object, v19);
              v21 = Component_object;
              PositionCalculator_k__BackingField = v20->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_1C93D2C(0, v19);
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
              v46.fields.z = 0.0;
              v46.fields.x = v23;
              v46.fields.y = v24;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v46,
                                    PositionCalculator_k__BackingField,
                                    v19);
              if ( !v21 )
                sub_1C93D2C(ClosedPanelDomain, v26);
              v33 = ClosedPanelDomain;
              v21[3].monitor = 0;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21[3].monitor, 0, v27, v28, v29, v30, v31, v32);
              v47.fields.z = 0.0;
              v47.fields.x = v23;
              v47.fields.y = v24;
              GameObjectExtensions__SetLocalPosition(v17, v47, 0);
              SubmarineMapPanelComponent__SetSize((SubmarineMapPanelComponent_o *)v21, v33, v34);
              SubmarineMapPanelComponent__SetClosedPanelTexture(
                (SubmarineMapPanelComponent_o *)v21,
                v33,
                v2->fields.closedPanelTexture,
                v35);
              current[3].klass = (Il2CppClass *)v21;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&current[3], (int32_t)v21, v36, v37, v38, v39, v40, v41);
              v42 = (System_Action_object__o *)sub_1C93D20(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_object____ctor(
                v42,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                0);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v42,
                v43);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v45,
              (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_1C93D2C(this, method);
      }
    }
  }
}


System_Collections_Generic_List_SchedulerTaskBase__o *SubmarineMapManager__CreateRevealEachSpotsTasks(
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

  if ( (byte_4D2D30F & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D30F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0);
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
        sub_1C93D34(Children);
      Children = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v10);
        if ( !v3 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v3,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
    }
LABEL_15:
    sub_1C93D2C(Children, v5);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
}


System_Collections_Generic_List_SchedulerTaskBase__o *SubmarineMapManager__CreateRevealSpotOnPanelTasks(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x22
  MapControl_MapInfo_o *mapInfo; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x21
  System_Collections_Generic_List_object__o *v15; // x20
  SchedulerTaskNone_o *v16; // x23
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
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

  if ( (byte_4D2D30A & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C93AD4(&SchedulerTaskNone_TypeInfo);
    sub_1C93AD4(&SrcSpotBasePrefab_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
    byte_4D2D30A = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass94_0___ctor((SubmarineMapManager___c__DisplayClass94_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = panelData;
  v14 = v5 + 16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)panelData, v8, v9, v10, v11, v12, v13);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v16 = (SchedulerTaskNone_o *)sub_1C93D20(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v16, 0, 0, 0);
  if ( !v15 )
    goto LABEL_25;
  items = v15->fields._items;
  v24 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v15->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)v16,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  }
  if ( !*(_QWORD *)v14 || *(int *)(*(_QWORD *)v14 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0);
  v28 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_MapControl_SpotInfo__TypeInfo);
  System_Predicate_object____ctor(
    v28,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__,
    0);
  if ( !SpotList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Find(
          SpotList,
          (System_Predicate_T__o *)v28,
          (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_25;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0);
  v29 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_25;
  v30 = (UnityEngine_Transform_o *)mapInfo;
  v31 = *(_DWORD *)(v29 + 40);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v31, 0);
  if ( !v30 )
    goto LABEL_25;
  v32 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v30, (System_String_o *)mapInfo, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v32, 0, 0);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  if ( !v32 )
LABEL_25:
    sub_1C93D2C(mapInfo, v7);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v32,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v35);
}


System_Collections_Generic_List_SchedulerTaskBase__o *SubmarineMapManager__CreateRevealSpotTasks(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  __int64 v7; // x1
  SpotEntity_o *Mine; // x21
  const MethodInfo *v9; // x2
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4D2D310 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&SubmarineLightenSpotPerformance_TypeInfo);
    sub_1C93AD4(&SubmarineRevealSpotPerformance_TypeInfo);
    byte_4D2D310 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v9);
  v10 = sub_1C93D20(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v10, 0);
  *(_QWORD *)(v10 + 48) = spot;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 48), (int32_t)spot, v11, v12, v13, v14, v15, v16);
  if ( !v5 )
    goto LABEL_20;
  items = v5->fields._items;
  v24 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v10,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v10;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), v10, v17, v18, v19, v20, v21, v22);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  v27 = sub_1C93D20(SubmarineLightenSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v27, 0);
  *(_QWORD *)(v27 + 48) = spot;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 48), (int32_t)spot, v28, v29, v30, v31, v32, v33);
  v40 = v5->fields._items;
  v41 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v5->fields._version;
  if ( !v40 )
LABEL_20:
    sub_1C93D2C(mMapCtrl_SpotInfo, v7);
  v42 = v5->fields._size;
  if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v27,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &v40->obj.klass + v42;
    v5->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)v27;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v43 + 4), v27, v34, v35, v36, v37, v38, v39);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
}


SchedulerTaskBase_o *SubmarineMapManager__CreateScanOpenPanelTask(
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
  const MethodInfo *v13; // x3
  SubmarineMapManager___c_c *v14; // x8
  System_Collections_Generic_List_object__o *v15; // x21
  System_Predicate_object__o *_9__97_0; // x22
  Il2CppObject *v17; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v29; // x23
  struct SubmarineMapManager___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w23
  SubmarineMapManager___c__DisplayClass97_0_o *v38; // x22
  int v39; // w29
  float v40; // s9
  System_Predicate_object__o *v41; // x23
  System_Collections_Generic_List_T__o *v42; // x23
  System_Collections_Generic_List_object__o *v43; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v48; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v50; // x2
  float v51; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  Il2CppObject *v59; // x1
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v65; // w8
  SchedulerTaskParallel_o *v66; // x19
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4D2D30D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_1C93AD4(&System_Func_SubmarineScanEvent__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C93AD4(&System_Predicate_SubmarineScanEvent__TypeInfo);
    sub_1C93AD4(&SchedulerTaskParallel_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__);
    sub_1C93AD4(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
    sub_1C93AD4(&SubmarineMapManager___c_TypeInfo);
    byte_4D2D30D = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
                                                             v13);
  v14 = SubmarineMapManager___c_TypeInfo;
  v15 = (System_Collections_Generic_List_object__o *)Settings_k__BackingField;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v14 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_0 = (System_Predicate_object__o *)v14->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = SubmarineMapManager___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__97_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_object____ctor(_9__97_0, v17, Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__, 0);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__97_0,
      (int32_t)_9__97_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( !v15 )
    goto LABEL_48;
  All = System_Collections_Generic_List_object___FindAll(
          v15,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_387A0AC *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v26 = SubmarineMapManager___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v26 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_1 = (System_Func_object__int__o *)v26->static_fields->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = SubmarineMapManager___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_object__int____ctor(_9__97_1, v29, Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__, 0);
    v30 = SubmarineMapManager___c_TypeInfo->static_fields;
    v30->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v30->__9__97_1, (int32_t)_9__97_1, v31, v32, v33, v34, v35, v36);
  }
  v37 = System_Linq_Enumerable__Max_object_(
          v27,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_31D24AC *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v38 = (SubmarineMapManager___c__DisplayClass97_0_o *)sub_1C93D20(SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass97_0___ctor(v38, 0);
  if ( !v38 )
LABEL_48:
    sub_1C93D2C(Settings_k__BackingField, v9);
  v39 = v37 + 1;
  v38->fields.i = 0;
  if ( v37 + 1 >= 1 )
  {
    v40 = 0.0;
    do
    {
      v41 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_object____ctor(
        v41,
        (Il2CppObject *)v38,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0);
      if ( !v27 )
        goto LABEL_48;
      v42 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v27,
              (System_Predicate_T__o *)v41,
              (const MethodInfo_387A0AC *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v43 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v43,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v42 )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v68,
        (System_Collections_Generic_List_object__o *)v42,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v69 = v68;
      while ( 1 )
      {
        v44 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v69,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v44 )
          break;
        current = v69.fields._current;
        if ( !v69.fields._current )
          sub_1C93D2C(v44, v45);
        v48 = this->fields.submarineData;
        if ( !v48 )
          sub_1C93D2C(0, v45);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v48,
                           (int32_t)v69.fields._current[1].klass,
                           HIDWORD(v69.fields._current[1].klass),
                           v46);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v51,
                                v50);
            v59 = (Il2CppObject *)HitObstractTask;
            if ( !v7 )
              sub_1C93D2C(HitObstractTask, HitObstractTask);
            items = v7->fields._items;
            v61 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v7->fields._version;
            if ( !items )
              sub_1C93D2C(HitObstractTask, HitObstractTask);
            size = v7->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v59,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v40,
                                           v50);
            v59 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v7 )
              sub_1C93D2C(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            items = v7->fields._items;
            v61 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v7->fields._version;
            if ( !items )
              sub_1C93D2C(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
              goto LABEL_37;
LABEL_32:
            v63 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v63[4] = (Il2CppClass *)v59;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v63 + 4), (int32_t)v59, v53, v54, v55, v56, v57, v58);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v69,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v40 = ScanOpenPanelInterval + v40;
      v65 = v38->fields.i + 1;
      v38->fields.i = v65;
    }
    while ( v65 < v39 );
  }
  v66 = (SchedulerTaskParallel_o *)sub_1C93D20(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_45001068(v66, (System_Collections_Generic_List_SchedulerTaskBase__o *)v7, 0);
  return (SchedulerTaskBase_o *)v66;
}


System_Collections_Generic_List_SchedulerTaskBase__o *SubmarineMapManager__CreateScanTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        int32_t scanId,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 MoveCameraToPositionTask; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v18; // d11
  float32x2_t v19; // d9
  int32x2_t v20; // d10
  float32x2_t v21; // d8
  System_Collections_Generic_List_object__o *v22; // x19
  struct SubmarineMapDataManager_o *v23; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v25; // d0
  float v26; // s8
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x1
  Il2CppClass **v37; // x0
  const MethodInfo *v38; // x2
  Il2CppObject *ScanAnimObjectPrefab; // x22
  const MethodInfo *v40; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v43; // x0
  __int64 v44; // x24
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  SubmarineScannerComponent_o *Component_object; // x22
  float32x2_t v52; // d0
  struct SubmarineMapDataManager_o *v53; // x8
  struct SubmarineSettingsManager_o *v54; // x8
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  __int64 v64; // x1
  Il2CppClass **v65; // x0
  const MethodInfo *v66; // x1
  float JumpStartTime; // s10
  SchedulerTaskWaitTime_o *v68; // x25
  __int64 p_StartCallback; // x25
  GrandQuestFolderBoardItem_o *v70; // x26
  System_Delegate_o *StartCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v72; // x27
  System_Delegate_o *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  System_Delegate_o *v80; // x8
  SchedulerTaskBase_TaskCallback_c *v81; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v83; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v84; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v87; // x0
  __int64 v88; // x25
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  System_String_o *v95; // x27
  SchedulerTaskWaitLoadAsset_o *v96; // x26
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  __int64 v113; // x1
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  __int64 v120; // x1
  float v121; // s10
  System_Delegate_o *v122; // x27
  SchedulerTaskBase_TaskCallback_o *v123; // x28
  System_Delegate_o *v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  System_String_o *v127; // x4
  int32_t v128; // w5
  int64_t v129; // x6
  System_String_o *v130; // x7
  SchedulerTaskBase_TaskCallback_c *v131; // x1
  int32_t v132; // w2
  int32_t v133; // w3
  System_String_o *v134; // x4
  int32_t v135; // w5
  int64_t v136; // x6
  System_String_o *v137; // x7
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  Il2CppClass **v141; // x0
  const MethodInfo *v142; // x1
  float SelectedPanelEffecFinishTime; // s10
  System_Delegate_o *v144; // x27
  SchedulerTaskBase_TaskCallback_o *v145; // x28
  System_Delegate_o *v146; // x0
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  SchedulerTaskBase_TaskCallback_c *v153; // x1
  const MethodInfo *v154; // x1
  const MethodInfo_39A3B50 *v155; // x2
  float JumpDuration; // s10
  float32x2_t v157; // d12
  MapCamera_o *mapCamera; // x21
  MapCameraPerformance_o *v159; // x26
  UnityEngine_GameObject_o *v160; // x24
  SchedulerTaskMovePerformance_o *v161; // x0
  SchedulerTaskBase_o *v162; // x21
  int32_t v163; // w2
  int32_t v164; // w3
  System_String_o *v165; // x4
  int32_t v166; // w5
  int64_t v167; // x6
  System_String_o *v168; // x7
  SchedulerTaskBase_array *v169; // x24
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  const MethodInfo *v176; // x1
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8
  System_String_o *v180; // x27
  System_Delegate_o *v181; // x27
  SchedulerTaskBase_TaskCallback_o *v182; // x28
  System_Delegate_o *v183; // x0
  int32_t v184; // w2
  int32_t v185; // w3
  System_String_o *v186; // x4
  int32_t v187; // w5
  int64_t v188; // x6
  System_String_o *v189; // x7
  SchedulerTaskBase_TaskCallback_c *v190; // x1
  __int64 v191; // x20
  int32_t v192; // w2
  int32_t v193; // w3
  System_String_o *v194; // x4
  int32_t v195; // w5
  int64_t v196; // x6
  System_String_o *v197; // x7
  __int64 v198; // x24
  int32_t v199; // w2
  int32_t v200; // w3
  System_String_o *v201; // x4
  int32_t v202; // w5
  int64_t v203; // x6
  System_String_o *v204; // x7
  int32_t v205; // w2
  int32_t v206; // w3
  System_String_o *v207; // x4
  int32_t v208; // w5
  int64_t v209; // x6
  System_String_o *v210; // x7
  SchedulerTaskOrthostichy_o *v211; // x21
  int32_t v212; // w2
  int32_t v213; // w3
  System_String_o *v214; // x4
  int32_t v215; // w5
  int64_t v216; // x6
  System_String_o *v217; // x7
  SchedulerTaskParallel_o *v218; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v220; // x20
  int32_t v221; // w2
  int32_t v222; // w3
  System_String_o *v223; // x4
  int32_t v224; // w5
  int64_t v225; // x6
  System_String_o *v226; // x7
  struct System_Object_array *v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  Il2CppClass **v230; // x0
  int32_t v231; // w2
  int32_t v232; // w3
  System_String_o *v233; // x4
  int32_t v234; // w5
  int64_t v235; // x6
  System_String_o *v236; // x7
  struct System_Object_array *v237; // x8
  _QWORD *v238; // x9
  __int64 v239; // x10
  Il2CppClass **v240; // x0
  int32_t v241; // w2
  int32_t v242; // w3
  System_String_o *v243; // x4
  int32_t v244; // w5
  int64_t v245; // x6
  System_String_o *v246; // x7
  struct System_Object_array *v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x10
  Il2CppClass **v250; // x0
  __int64 v252; // x0
  SchedulerTaskWaitTime_o *v253; // [xsp+8h] [xbp-E8h]
  float32x2_t value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_Vector2__o v257; // 0:x0.12
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v259; // 0:kr14_12.12
  UnityEngine_Vector2_o v260; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v261; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4D2D309 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    sub_1C93AD4(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C93AD4(&MapCameraPerformance_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector2___ctor__);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskMovePerformance_TypeInfo);
    sub_1C93AD4(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C93AD4(&SchedulerTaskParallel_TypeInfo);
    sub_1C93AD4(&SchedulerTaskSimpleAnimation_TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitLoadAsset_TypeInfo);
    sub_1C93AD4(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
    byte_4D2D309 = 1;
  }
  v7 = sub_1C93D20(SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass93_0___ctor((SubmarineMapManager___c__DisplayClass93_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_131;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_131;
  if ( !panelData )
    goto LABEL_131;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_131;
  v18.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v19.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v20.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v21.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v22 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v23 = this->fields.submarineData;
  if ( !v23 )
    goto LABEL_131;
  Settings_k__BackingField = v23->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_131;
  v25 = vadd_f32(
          v21,
          vmul_f32(
            vmul_f32(v19, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v18, 1u).n64_u64[0] | 0x100000001LL), v20))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v26 = *((float *)&v25 + 1);
  value.n64_u64[0] = v25;
  *(_QWORD *)&v259.fields.x = v25;
  v259.fields.z = 0.0;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        v259,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v9);
  if ( !v22 )
    goto LABEL_131;
  items = v22->fields._items;
  v34 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_131;
  v35 = v22->fields._size;
  v36 = MoveCameraToPositionTask;
  if ( (unsigned int)v35 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &items->obj.klass + v35;
    v22->fields._size = v35 + 1;
    v37[4] = (Il2CppClass *)v36;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v37 + 4), v36, v27, v28, v29, v30, v31, v32);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_131;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_131;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_3463274 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  if ( !this->fields.assetManager )
    goto LABEL_131;
  ScanAnimObjectPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                           this->fields.assetManager,
                                           *(_DWORD *)(MoveCameraToPositionTask + 56),
                                           v38);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanAnimObjectPrefab, 0, 0) )
  {
    HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v40);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    MoveCameraToPositionTask = UnityEngine_Object__op_Equality(HomeSpot, 0, 0);
    if ( (MoveCameraToPositionTask & 1) == 0 )
    {
      if ( !HomeSpot )
        goto LABEL_131;
      MoveCameraToPositionTask = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)MoveCameraToPositionTask, 0);
      MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__Instantiate_object__52629400(
              ScanAnimObjectPrefab,
              transform,
              (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
      *(_QWORD *)(v7 + 16) = v43;
      v44 = v7 + 16;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)v43, v45, v46, v47, v48, v49, v50);
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v7 + 16), localPosition, 0);
      MoveCameraToPositionTask = *(_QWORD *)(v7 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0);
      Component_object = (SubmarineScannerComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                          *(UnityEngine_GameObject_o **)v44,
                                                          (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_4D2A13B )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13B = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !Component_object )
        goto LABEL_131;
      v52.n64_u64[0] = vsub_f32(*(float32x2_t *)&localPosition.fields.x, value).n64_u64[0];
      SubmarineScannerComponent__PrepareAnimation(
        Component_object,
        sqrtf((float)(localPosition.fields.z * localPosition.fields.z) + vaddv_f32(vmul_f32(v52, v52))),
        v9);
      if ( !Component_object->fields.state )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
      v22 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v22,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v53 = this->fields.submarineData;
      if ( !v53 )
        goto LABEL_131;
      v54 = v53->fields._Settings_k__BackingField;
      if ( !v54 )
        goto LABEL_131;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            localPosition,
                                            1.0,
                                            v54->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v9);
      if ( !v22 )
        goto LABEL_131;
      v61 = v22->fields._items;
      v62 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v22->fields._version;
      if ( !v61 )
        goto LABEL_131;
      v63 = v22->fields._size;
      v64 = MoveCameraToPositionTask;
      if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        v65 = &v61->obj.klass + v63;
        v22->fields._size = v63 + 1;
        v65[4] = (Il2CppClass *)v64;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v65 + 4), v64, v55, v56, v57, v58, v59, v60);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(Component_object, v66);
      v68 = (SchedulerTaskWaitTime_o *)sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor(v68, JumpStartTime, 0);
      if ( !v68 )
        goto LABEL_131;
      v253 = v68;
      StartCallback = (System_Delegate_o *)v68->fields.StartCallback;
      p_StartCallback = (__int64)&v68->fields.StartCallback;
      v70 = (GrandQuestFolderBoardItem_o *)StartCallback;
      v72 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v72,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0);
      v73 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v72, 0);
      v80 = v73;
      if ( v73 )
      {
        v81 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v73->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        *(_QWORD *)p_StartCallback = v73;
        if ( (SchedulerTaskBase_TaskCallback_c *)v73->klass != v81 )
          goto LABEL_103;
      }
      else
      {
        *(_QWORD *)p_StartCallback = 0;
      }
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p_StartCallback, (int32_t)v73, v74, v75, v76, v77, v78, v79);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_131;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v83 = this->fields.playingScanVoiceData;
        if ( !v83 )
          goto LABEL_131;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v83->fields.assetName, 0);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v84 = this->fields.playingScanVoiceData;
          if ( !v84 )
            goto LABEL_131;
          assetName = v84->fields.assetName;
          vcName = v84->fields.vcName;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0);
        }
      }
      v87 = GameObjectExtensions__SafeGetComponent_object_(
              *(UnityEngine_GameObject_o **)(v7 + 16),
              (const MethodInfo_31FDB6C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v7 + 24) = v87;
      v88 = v7 + 24;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v87, v89, v90, v91, v92, v93, v94);
      if ( !*(_QWORD *)(v7 + 24) )
        goto LABEL_131;
      v95 = *(System_String_o **)(*(_QWORD *)(v7 + 24) + 56LL);
      v96 = (SchedulerTaskWaitLoadAsset_o *)sub_1C93D20(SchedulerTaskWaitLoadAsset_TypeInfo);
      SchedulerTaskWaitLoadAsset___ctor(v96, v95, 0);
      v103 = v22->fields._items;
      v104 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v22->fields._version;
      if ( !v103 )
        goto LABEL_131;
      v105 = v22->fields._size;
      if ( (unsigned int)v105 >= LODWORD(v103->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v96,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
      }
      else
      {
        v106 = &v103->obj.klass + v105;
        v22->fields._size = v105 + 1;
        v106[4] = (Il2CppClass *)v96;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v106 + 4), (int32_t)v96, v97, v98, v99, v100, v101, v102);
      }
      if ( !*(_QWORD *)v88 )
        goto LABEL_131;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v113 = *(_QWORD *)(*(_QWORD *)v88 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v113;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)(MoveCameraToPositionTask + 16),
        v113,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
      if ( !*(_QWORD *)v88
        || (MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData) == 0
        || (v120 = *(_QWORD *)(*(_QWORD *)v88 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v120,
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)(MoveCameraToPositionTask + 24),
              v120,
              v114,
              v115,
              v116,
              v117,
              v118,
              v119),
            !*(_QWORD *)v88)
        || (v121 = *(float *)(*(_QWORD *)v88 + 32LL),
            p_StartCallback = sub_1C93D20(SchedulerTaskWaitTime_TypeInfo),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)p_StartCallback, v121, 0),
            !p_StartCallback) )
      {
LABEL_131:
        sub_1C93D2C(MoveCameraToPositionTask, v9);
      }
      v70 = (GrandQuestFolderBoardItem_o *)(p_StartCallback + 24);
      v122 = *(System_Delegate_o **)(p_StartCallback + 24);
      v123 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v123,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0);
      v124 = System_Delegate__Combine(v122, (System_Delegate_o *)v123, 0);
      v80 = v124;
      if ( v124 )
      {
        v131 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v124->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        v70->klass = (GrandQuestFolderBoardItem_c *)v124;
        if ( (SchedulerTaskBase_TaskCallback_c *)v124->klass != v131 )
          goto LABEL_103;
      }
      else
      {
        v70->klass = 0;
      }
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)(p_StartCallback + 24),
        (int32_t)v124,
        v125,
        v126,
        v127,
        v128,
        v129,
        v130);
      v138 = v22->fields._items;
      v139 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v22->fields._version;
      if ( !v138 )
        goto LABEL_131;
      v140 = v22->fields._size;
      if ( (unsigned int)v140 >= LODWORD(v138->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)p_StartCallback,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
      }
      else
      {
        v141 = &v138->obj.klass + v140;
        v22->fields._size = v140 + 1;
        v141[4] = (Il2CppClass *)p_StartCallback;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v141 + 4), p_StartCallback, v132, v133, v134, v135, v136, v137);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(Component_object, v142);
      p_StartCallback = sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)p_StartCallback, SelectedPanelEffecFinishTime, 0);
      if ( !p_StartCallback )
        goto LABEL_131;
      v70 = (GrandQuestFolderBoardItem_o *)(p_StartCallback + 32);
      v144 = *(System_Delegate_o **)(p_StartCallback + 32);
      v145 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v145,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0);
      v146 = System_Delegate__Combine(v144, (System_Delegate_o *)v145, 0);
      v80 = v146;
      if ( v146 )
      {
        v153 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v146->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        v70->klass = (GrandQuestFolderBoardItem_c *)v146;
        if ( (SchedulerTaskBase_TaskCallback_c *)v146->klass != v153 )
          goto LABEL_103;
      }
      else
      {
        v70->klass = 0;
      }
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)(p_StartCallback + 32),
        (int32_t)v146,
        v147,
        v148,
        v149,
        v150,
        v151,
        v152);
      *(_BYTE *)(p_StartCallback + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration(Component_object, v154);
      if ( !byte_4D2A13B )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13B = 1;
      }
      LODWORD(v260.fields.x) = value.n64_u32[0];
      v157.n64_u64[0] = vsub_f32(value, *(float32x2_t *)&localPosition.fields.x).n64_u64[0];
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        LODWORD(v260.fields.x) = value.n64_u32[0];
      }
      mapCamera = this->fields.mapCamera;
      position.fields.value.fields.y = 0.0;
      LODWORD(v257.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&v257.fields.hasValue = &position;
      v260.fields.y = v26;
      *(_QWORD *)&position.fields.hasValue = 0;
      System_Nullable_Vector2____ctor(v257, v260, v155);
      size = 0;
      System_Nullable_float____ctor(
        (System_Nullable_float__o)&size,
        1.0,
        (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
      v159 = (MapCameraPerformance_o *)sub_1C93D20(MapCameraPerformance_TypeInfo);
      MapCameraPerformance___ctor(v159, mapCamera, JumpDuration, position, size, 0, 0);
      v160 = *(UnityEngine_GameObject_o **)v44;
      v161 = (SchedulerTaskMovePerformance_o *)sub_1C93D20(SchedulerTaskMovePerformance_TypeInfo);
      v261.fields.z = 0.0;
      LODWORD(v261.fields.x) = value.n64_u32[0];
      v261.fields.y = v26;
      v162 = (SchedulerTaskBase_o *)v161;
      SchedulerTaskMovePerformance___ctor(
        v161,
        v160,
        localPosition,
        v261,
        sqrtf(
          (float)((float)(0.0 - localPosition.fields.z) * (float)(0.0 - localPosition.fields.z))
        + vaddv_f32(vmul_f32(v157, v157)))
      / JumpDuration,
        0,
        0);
      MoveCameraToPositionTask = sub_1C93B7C(SchedulerTaskBase___TypeInfo, 2);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v169 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v159 )
      {
        MoveCameraToPositionTask = sub_1C93C10(v159, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_133;
      }
      if ( !LODWORD(v169->max_length) )
        goto LABEL_132;
      v169->m_Items[0] = (SchedulerTaskBase_o *)v159;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)v169->m_Items, (int32_t)v159, v163, v164, v165, v166, v167, v168);
      if ( v162 )
      {
        MoveCameraToPositionTask = sub_1C93C10(v162, v169->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_133;
      }
      if ( LODWORD(v169->max_length) <= 1 )
        goto LABEL_132;
      v169->m_Items[1] = v162;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v169->m_Items[1], (int32_t)v162, v170, v171, v172, v173, v174, v175);
      this = (SubmarineMapManager_o *)sub_1C93D20(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v169, 0);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(Component_object, v176);
      if ( (byte_4D2D24C & 1) == 0 )
      {
        sub_1C93AD4(&StringLiteral_1/*""*/);
        byte_4D2D24C = 1;
      }
      state = Component_object->fields.state;
      if ( state )
        p_name = &state->fields.name;
      else
        p_name = (System_String_o **)&StringLiteral_1/*""*/;
      v180 = *p_name;
      v44 = sub_1C93D20(SchedulerTaskSimpleAnimation_TypeInfo);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v44, AnimationComponent, v180, 0);
      if ( !v44 )
        goto LABEL_131;
      v70 = (GrandQuestFolderBoardItem_o *)(v44 + 32);
      v181 = *(System_Delegate_o **)(v44 + 32);
      v182 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v182,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0);
      v183 = System_Delegate__Combine(v181, (System_Delegate_o *)v182, 0);
      v80 = v183;
      if ( !v183 )
        goto LABEL_104;
      v190 = SchedulerTaskBase_TaskCallback_TypeInfo;
      if ( (SchedulerTaskBase_TaskCallback_c *)v183->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v70->klass = (GrandQuestFolderBoardItem_c *)v183;
        if ( (SchedulerTaskBase_TaskCallback_c *)v183->klass == v190 )
        {
LABEL_105:
          sub_1C93A78(v70, (int32_t)v80, v184, v185, v186, v187, v188, v189);
          MoveCameraToPositionTask = sub_1C93B7C(SchedulerTaskBase___TypeInfo, 2);
          if ( !MoveCameraToPositionTask )
            goto LABEL_131;
          v191 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_1C93C10(v44, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v191 + 24) )
              goto LABEL_132;
            *(_QWORD *)(v191 + 32) = v44;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v191 + 32), v44, v192, v193, v194, v195, v196, v197);
            MoveCameraToPositionTask = sub_1C93B7C(SchedulerTaskBase___TypeInfo, 2);
            if ( !MoveCameraToPositionTask )
              goto LABEL_131;
            v198 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_1C93C10(v253, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v198 + 24) )
                goto LABEL_132;
              *(_QWORD *)(v198 + 32) = v253;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v198 + 32), (int32_t)v253, v199, v200, v201, v202, v203, v204);
              if ( !this || (MoveCameraToPositionTask = sub_1C93C10(this, *(_QWORD *)(*(_QWORD *)v198 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v198 + 24) <= 1u )
                  goto LABEL_132;
                *(_QWORD *)(v198 + 40) = this;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v198 + 40),
                  (int32_t)this,
                  v205,
                  v206,
                  v207,
                  v208,
                  v209,
                  v210);
                v211 = (SchedulerTaskOrthostichy_o *)sub_1C93D20(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v211, (SchedulerTaskBase_array *)v198, 0);
                if ( !v211 || (MoveCameraToPositionTask = sub_1C93C10(v211, *(_QWORD *)(*(_QWORD *)v191 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v191 + 24) > 1u )
                  {
                    *(_QWORD *)(v191 + 40) = v211;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)(v191 + 40),
                      (int32_t)v211,
                      v212,
                      v213,
                      v214,
                      v215,
                      v216,
                      v217);
                    v218 = (SchedulerTaskParallel_o *)sub_1C93D20(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v218, (SchedulerTaskBase_array *)v191, 0);
                    if ( v218 )
                    {
                      v218->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(Component_object, v9);
                      v220 = (SchedulerTaskWaitTime_o *)sub_1C93D20(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v220, TimeToStartOpenPanel, 0);
                      v227 = v22->fields._items;
                      v228 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v22->fields._version;
                      if ( v227 )
                      {
                        v229 = v22->fields._size;
                        if ( (unsigned int)v229 >= LODWORD(v227->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v22,
                            (Il2CppObject *)p_StartCallback,
                            *(const MethodInfo_387999C **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v230 = &v227->obj.klass + v229;
                          v22->fields._size = v229 + 1;
                          v230[4] = (Il2CppClass *)p_StartCallback;
                          sub_1C93A78(
                            (GrandQuestFolderBoardItem_o *)(v230 + 4),
                            p_StartCallback,
                            v221,
                            v222,
                            v223,
                            v224,
                            v225,
                            v226);
                        }
                        v237 = v22->fields._items;
                        v238 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v22->fields._version;
                        if ( v237 )
                        {
                          v239 = v22->fields._size;
                          if ( (unsigned int)v239 >= LODWORD(v237->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v22,
                              (Il2CppObject *)v218,
                              *(const MethodInfo_387999C **)(*(_QWORD *)(v238[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v240 = &v237->obj.klass + v239;
                            v22->fields._size = v239 + 1;
                            v240[4] = (Il2CppClass *)v218;
                            sub_1C93A78(
                              (GrandQuestFolderBoardItem_o *)(v240 + 4),
                              (int32_t)v218,
                              v231,
                              v232,
                              v233,
                              v234,
                              v235,
                              v236);
                          }
                          v247 = v22->fields._items;
                          v248 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v22->fields._version;
                          if ( v247 )
                          {
                            v249 = v22->fields._size;
                            if ( (unsigned int)v249 >= LODWORD(v247->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v22,
                                (Il2CppObject *)v220,
                                *(const MethodInfo_387999C **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v250 = &v247->obj.klass + v249;
                              v22->fields._size = v249 + 1;
                              v250[4] = (Il2CppClass *)v220;
                              sub_1C93A78(
                                (GrandQuestFolderBoardItem_o *)(v250 + 4),
                                (int32_t)v220,
                                v241,
                                v242,
                                v243,
                                v244,
                                v245,
                                v246);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
                          }
                        }
                      }
                    }
                    goto LABEL_131;
                  }
LABEL_132:
                  sub_1C93D34(MoveCameraToPositionTask);
                }
              }
            }
          }
LABEL_133:
          v252 = sub_1C93D50();
          sub_1C93BFC(v252, 0);
        }
      }
LABEL_103:
      sub_1C940C8(v80);
LABEL_104:
      v70->klass = (GrandQuestFolderBoardItem_c *)v80;
      goto LABEL_105;
    }
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
}


System_Collections_Generic_List_SchedulerTaskBase__o *SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
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
  const MethodInfo *v13; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct SubmarineMapDataManager_o *v23; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Object_array *v29; // x0
  const MethodInfo *v30; // x2
  int32x2_t v31; // d1
  struct SubmarineMapDataManager_o *v32; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  SchedulerTaskBase_o *v44; // x1
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v59; // 0:kr00_12.12

  if ( (byte_4D2D312 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    byte_4D2D312 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v58 = v57;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v11 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_1C93D2C(v11, v12);
    if ( !LOBYTE(v58.fields._current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v58.fields._current,
                                          -1,
                                          v13);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v23 = this->fields.submarineData;
        if ( !v23 )
          sub_1C93D2C(IsPanelSatisfyCommonReleaseCond, v16);
        PositionCalculator_k__BackingField = (float32x2_t *)v23->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_1C93D2C(IsPanelSatisfyCommonReleaseCond, v16);
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
                                    (int32x2_t)(vshl_n_s32((int32x2_t)current[1].klass, 1u).n64_u64[0] | 0x100000001LL),
                                    PositionCalculator_k__BackingField[3]))),
                              (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
        if ( !v7 )
          sub_1C93D2C(IsPanelSatisfyCommonReleaseCond, v16);
        items = v7->fields._items;
        v26 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1C93D2C(IsPanelSatisfyCommonReleaseCond, v16);
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            current,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v28[4] = (Il2CppClass *)current;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)current, v17, v18, v19, v20, v21, v22);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v7 )
    goto LABEL_34;
  if ( v7->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
  v29 = System_Collections_Generic_List_object___ToArray(
          v7,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                    this,
                                    (SubmarineMapPanelData_array *)v29,
                                    v30);
  v32 = this->fields.submarineData;
  if ( !v32 )
    goto LABEL_34;
  Settings_k__BackingField = v32->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_34;
  v34 = (Il2CppObject *)PanelDataList_k__BackingField;
  v31.n64_f32[0] = (float)v7->fields._size;
  *(float32x2_t *)&v59.fields.x = vdiv_f32(v5, vdup_lane_s32(v31, 0));
  v59.fields.z = z / v31.n64_f32[0];
  PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                    this,
                                    v59,
                                    1.0,
                                    Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                    v9);
  if ( !v3 )
    goto LABEL_34;
  v41 = v3->fields._items;
  v42 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v3->fields._version;
  if ( !v41 )
    goto LABEL_34;
  v43 = v3->fields._size;
  v44 = PanelDataList_k__BackingField;
  if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)PanelDataList_k__BackingField,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v41->obj.klass + v43;
    v3->fields._size = v43 + 1;
    v45[4] = (Il2CppClass *)v44;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)v44, v35, v36, v37, v38, v39, v40);
  }
  v52 = v3->fields._items;
  v53 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v3->fields._version;
  if ( !v52 )
LABEL_34:
    sub_1C93D2C(PanelDataList_k__BackingField, v9);
  v54 = v3->fields._size;
  if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      v34,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &v52->obj.klass + v54;
    v3->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)v34;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)v34, v46, v47, v48, v49, v50, v51);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
}


void SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct SubmarineScanConfirmDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  __int64 v5; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  GrandQuestFolderBoardItem_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v24; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7

  if ( (byte_4D2D2FC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D2FC = 1;
  }
  p_scanConfirmDialog = &this->fields.scanConfirmDialog;
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scanConfirmDialog, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)*p_scanConfirmDialog;
    if ( !*p_scanConfirmDialog )
      goto LABEL_25;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(gameObject, 0);
    *p_scanConfirmDialog = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.scanConfirmDialog, 0, v8, v9, v10, v11, v12, v13);
  }
  p_selectScannerDialog = &this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selectScannerDialog, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)*p_selectScannerDialog;
    if ( !*p_selectScannerDialog )
      goto LABEL_25;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(v16, 0);
    *p_selectScannerDialog = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.selectScannerDialog, 0, v17, v18, v19, v20, v21, v22);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (GrandQuestFolderBoardItem_o *)&this->fields.newScannerDialog;
  v24 = (UnityEngine_Object_o *)newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v24, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72119908(v26, 0);
      p_newScannerDialog->klass = 0;
      sub_1C93A78(p_newScannerDialog, 0, v27, v28, v29, v30, v31, v32);
      return;
    }
LABEL_25:
    sub_1C93D2C(klass, v5);
  }
}


void SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4D2D2DF & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D2DF = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(panelContainer, 0);
  UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)this->fields.gridLine, 0);
  UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)this->fields.effectContainer, 0);
  SubmarineMapManager__DestroyDialog(this, v4);
}


void SubmarineMapManager__DoPerformancesByVariedCond(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_IEnumerable_T__o *HideEnemyOccupiedPanelTasks; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_List_object__o *v20; // x20
  const MethodInfo *v21; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v24; // w1
  __int64 v25; // x22
  SchedulerTaskBase_TaskCallback_o *v26; // x23
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_4D2D2E3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C93AD4(&SchedulerTaskNone_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
    byte_4D2D2E3 = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass34_0___ctor((SubmarineMapManager___c__DisplayClass34_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v25 = sub_1C93D20(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v25, 0, 0, 0);
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0);
  if ( !v25 )
    goto LABEL_18;
  *(_QWORD *)(v25 + 32) = v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
  items = v20->fields._items;
  v40 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v20->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v25,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v25;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 4), v25, v33, v34, v35, v36, v37, v38);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_1C93D2C(HideEnemyOccupiedPanelTasks, v7);
  TaskScheduler__AddTask_45006804(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v20,
    0);
}


void SubmarineMapManager__ExtractMapObjectFromAssetData(
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
  if ( !mapInfo || (assetManager = this->fields.assetManager) == 0 )
    sub_1C93D2C(assetManager, v6);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v7);
}


void SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v9; // x1

  this->fields.submarineData = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.submarineData, 0, v2, v3, v4, v5, v6, v7);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, v9);
}


SrcSpotBasePrefab_o *SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
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

  if ( (byte_4D2D2F5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D2F5 = 1;
  }
  HasChild = (UnityEngine_GameObject_array *)GameObjectExtensions__HasChild(this->fields.rootSpotP, 0);
  v5 = 0;
  if ( ((unsigned __int8)HasChild & 1) != 0 )
  {
    submarineData = this->fields.submarineData;
    if ( !submarineData
      || (Settings_k__BackingField = submarineData->fields._Settings_k__BackingField) == 0
      || (HomeSpotId_k__BackingField = Settings_k__BackingField->fields._HomeSpotId_k__BackingField,
          (HasChild = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0)) == 0) )
    {
LABEL_27:
      sub_1C93D2C(HasChild, v4);
    }
    max_length = HasChild->max_length;
    v10 = HasChild;
    if ( max_length >= 1 )
    {
      v11 = 0;
      v5 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_1C93D34(HasChild);
        HasChild = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        HasChild = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                     (UnityEngine_Object_o *)Component_object,
                                                     0,
                                                     0);
        if ( ((unsigned __int8)HasChild & 1) == 0 )
        {
          if ( !Component_object )
            goto LABEL_27;
          if ( HomeSpotId_k__BackingField == LODWORD(Component_object[9].klass) )
            return (SrcSpotBasePrefab_o *)Component_object;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          HasChild = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v5, 0, 0);
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
    return 0;
  }
  return (SrcSpotBasePrefab_o *)v5;
}


bool SubmarineMapManager__HasSelfQuestAfterAction(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineMapManager_o *v3; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t QuestId_k__BackingField; // w1
  System_Collections_Generic_List_object__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v8; // x1

  v3 = this;
  if ( (byte_4D2D2E2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    byte_4D2D2E2 = 1;
  }
  submarineData = v3->fields.submarineData;
  if ( !submarineData
    || (BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField) == 0
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
    sub_1C93D2C(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D302 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
    byte_4D2D302 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_3257770 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2D306 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D306 = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = (GrandQuestFolderBoardItem_o *)&this->fields.scanRangeNotificator;
  v4 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_scanRangeNotificator->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72119908(klass, 0);
    p_scanRangeNotificator->klass = 0;
    sub_1C93A78(p_scanRangeNotificator, 0, v7, v8, v9, v10, v11, v12);
  }
}


void SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D300 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
    byte_4D2D300 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_3257770 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4D2D304 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
    byte_4D2D304 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_3257770 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v5; // x22
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  TaskScheduler_o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  SubmarineMapManager_PlayingScanVoiceData_o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7

  if ( (byte_4D2D2D9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
    sub_1C93AD4(&SubmarineMapDataManager_TypeInfo);
    sub_1C93AD4(&TaskScheduler_TypeInfo);
    byte_4D2D2D9 = 1;
  }
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v5 = (SubmarineMapDataManager_o *)sub_1C93D20(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v5, mapInfo, warInfo, v6);
  this->fields.submarineData = v5;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.submarineData, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  v13 = (TaskScheduler_o *)sub_1C93D20(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v13, 0);
  this->fields.taskScheduler = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.taskScheduler, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  taskScheduler = this->fields.taskScheduler;
  v21 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v21, (Il2CppObject *)this, (intptr_t)this->klass->vtable._30_SetAllTouchBlock.method, 0);
  if ( !taskScheduler )
    sub_1C93D2C(v22, v23);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v21;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v21,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_1C93D20(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v30, 0);
  this->fields.playingScanVoiceData = v30;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.playingScanVoiceData,
    (int32_t)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
}


bool SubmarineMapManager__IsShowQuestListWhenComingBackToMap(SubmarineMapManager_o *this, const MethodInfo *method)
{
  return !SubmarineMapManager__HasSelfQuestAfterAction(this, method);
}


void SubmarineMapManager__LoadAssets(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x19

  if ( (byte_4D2D2DA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
    byte_4D2D2DA = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass19_0___ctor((SubmarineMapManager___c__DisplayClass19_0_o *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v20, 5, 1, 0);
}


void SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct SubmarineMapAssetManager_o *v12; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct SubmarineMapAssetManager_o *v21; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct SubmarineMapAssetManager_o *v30; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  v2 = this;
  if ( (byte_4D2D2FD & 1) == 0 )
  {
    sub_1C93AD4(&Method_ComponentPool_CommonEffectComponent__Preload__);
    sub_1C93AD4(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__);
    sub_1C93AD4(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
    sub_1C93AD4(&Method_ComponentPool_CommonEffectComponent___ctor__);
    sub_1C93AD4(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
    sub_1C93AD4(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
    sub_1C93AD4(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
    sub_1C93AD4(&ComponentPool_CommonEffectComponent__TypeInfo);
    sub_1C93AD4(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
    byte_4D2D2FD = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v5 = (ComponentPool_T__o *)sub_1C93D20(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_object____ctor(
    v5,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_343E1C0 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v5;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.effectScanedPanelObjPool,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this = (SubmarineMapManager_o *)v2->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_object___Preload(
    (ComponentPool_T__o *)this,
    9,
    (const MethodInfo_343E284 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v12 = v2->fields.assetManager;
  if ( !v12 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v12->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v14 = (ComponentPool_T__o *)sub_1C93D20(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v14,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_343E1C0 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v14;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.effectScanObstaclePanelObjPool,
    (int32_t)v14,
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
  v23 = (ComponentPool_T__o *)sub_1C93D20(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v23,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_343E1C0 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v23;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.effectScannablePanelObjPool,
    (int32_t)v23,
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
          (const MethodInfo_343E284 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v30 = v2->fields.assetManager) == 0) )
  {
LABEL_10:
    sub_1C93D2C(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v30->fields._EffectSelectedPanelPrefab_k__BackingField;
  v32 = (ComponentPool_T__o *)sub_1C93D20(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v32,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_343E1C0 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v32;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v2->fields.effectSelectedPanelObjPool,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
}


void SubmarineMapManager__OnAfterQuestAfterAction(
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
    || (SubmarineMapDataManager__UpdateParams(submarineData, -1, method),
        SubmarineMapManager__UpdateClosedPanelDisplay(this, v6),
        SubmarineMapManager__HideScanObstacleEffect(this, v7),
        SubmarineMapManager__ShowScanObstacleEffect(this, v8),
        (submarineData = this->fields.submarineData) == 0) )
  {
    sub_1C93D2C(submarineData, finishCallback);
  }
  SubmarineMapDataManager__DeleteBeforeQuestInfo(submarineData, (const MethodInfo *)finishCallback);
  ActionExtensions__Call(finishCallback, 0);
}


void SubmarineMapManager__OnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = SubmarineMapManager__CoOnAfterSpotCreated(this, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_4D2D2DD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
    byte_4D2D2DD = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass25_0___ctor((SubmarineMapManager___c__DisplayClass25_0_o *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__,
    0);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v20, v21);
}


void SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct MapControl_WarInfo_o *warInfo; // x8
  QuestTree_o *v6; // x20
  int32_t warId; // w21
  System_Action_o *v8; // x22
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_4D2D2EB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&Method_SubmarineMapManager__OnEndScan_b__42_0__);
    byte_4D2D2EB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v6 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0),
        !v6) )
  {
    sub_1C93D2C(Instance, v4);
  }
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v6, warId, v8, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4D2D2DE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__);
    byte_4D2D2DE = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v4 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, 0);
    ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, const MethodInfo *))this->klass->vtable._23_OnBeforeQuestAfterAction.methodPtr)(
      this,
      v4,
      this->klass->vtable._23_OnBeforeQuestAfterAction.method);
  }
  else
  {
    SubmarineMapManager__HideScannableEffect(this, v3);
    SubmarineMapManager__ShowScannableEffect(this, v5);
  }
}


void SubmarineMapManager__OnScanDecided(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 eventId; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  const MethodInfo *v23; // x1
  Il2CppObject *Instance; // x22
  const MethodInfo *v25; // x1
  NetworkManager_ResultCallbackFunc_o *v26; // x22
  Il2CppObject *Request_object; // x22
  const MethodInfo *v28; // x1
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_4D2D2E6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
    byte_4D2D2E6 = 1;
  }
  v7 = sub_1C93D20(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass37_0___ctor((SubmarineMapManager___c__DisplayClass37_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = panelData;
  v16 = v7 + 32;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)panelData, v17, v18, v19, v20, v21, v22);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))this->klass->vtable._30_SetAllTouchBlock.methodPtr)(
    this,
    1,
    this->klass->vtable._30_SetAllTouchBlock.method);
  SubmarineMapManager__HideScannableEffect(this, v23);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v25);
  if ( !Instance )
    goto LABEL_11;
  clsQuestCheck__SaveEventQuestIdListPlayable((clsQuestCheck_o *)Instance, eventId, 0);
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v26,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v28);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*(_QWORD *)v16 || !Request_object )
LABEL_11:
    sub_1C93D2C(eventId, v9);
  EventScanPanelMapRequest__beginRequest(
    (EventScanPanelMapRequest_o *)Request_object,
    eventId,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v16 + 24LL),
    *(_DWORD *)(v7 + 24),
    0);
}


void SubmarineMapManager__OnScanPanelRequestFinished(
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_String_o *value; // x8
  EventSaveData_o *v21; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v24; // x10
  __int64 v25; // x9
  TerminalPramsManager_c *v26; // x0
  EventSaveData_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  TerminalPramsManager_c *v34; // x0
  GrandQuestFolderBoardItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v36; // x0
  System_String_array *ValueByArray; // x0
  int max_length; // w8
  System_String_o **v39; // x9
  System_String_o *v40; // x21
  System_String_o **v41; // x9
  System_String_o *v42; // x20
  System_String_o **v43; // x8
  System_String_o *v44; // x22
  TerminalPramsManager_c *v45; // x0
  struct EventSaveData_o *v46; // x23
  System_String_o *v47; // x24
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  EventSaveData_c *v54; // x8
  GrandQuestFolderBoardItem_c *namespaze; // x19
  TerminalPramsManager_c *v56; // x0
  GrandQuestFolderBoardItem_o *p_mResultEventPanelRewardInfos; // x0
  System_String_c *v58; // x8
  int v59; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2D2E7 & 1) == 0 )
  {
    sub_1C93AD4(&EventSaveData_TypeInfo);
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_22483/*"ng"*/);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_6671/*"False"*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2D2E7 = 1;
  }
  v59 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22483/*"ng"*/, 0) )
  {
    SubmarineMapManager__OnEndScan(this, v9);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v10);
  v11 = (Il2CppObject *)System_String__Concat_64463988(
                          (System_String_o *)StringLiteral_15904/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16156/*"]"*/,
                          0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v11,
                                                                      (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v21 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_71:
    sub_1C93D34(BeforeEventSubmarineSaveData_k__BackingField);
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
        if ( !byte_4D2D31A )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D31A = 1;
        }
        v26 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v26 = TerminalPramsManager_TypeInfo;
        }
        if ( !v26->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v27 = (EventSaveData_o *)sub_1C93D20(EventSaveData_TypeInfo);
          EventSaveData___ctor(v27, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D2D31B )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2D31B = 1;
          }
          v34 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v34 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (GrandQuestFolderBoardItem_o *)&v34->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v27;
          sub_1C93A78(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v27, v28, v29, v30, v31, v32, v33);
          v26 = TerminalPramsManager_TypeInfo;
        }
        if ( !v26->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v26);
        if ( !byte_4D2D31A )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D31A = 1;
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
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v39 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v39 = (System_String_o **)&StringLiteral_1116/*"0"*/;
            v40 = *v39;
            v41 = max_length <= 2 ? (System_String_o **)&StringLiteral_1116/*"0"*/ : &ValueByArray->m_Items[2];
            v42 = *v41;
            v43 = max_length <= 3 ? (System_String_o **)&StringLiteral_6671/*"False"*/ : &ValueByArray->m_Items[3];
          }
          else
          {
            v42 = (System_String_o *)StringLiteral_1116/*"0"*/;
            v43 = (System_String_o **)&StringLiteral_6671/*"False"*/;
            v40 = (System_String_o *)StringLiteral_1116/*"0"*/;
          }
          v44 = *v43;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D2D31A )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2D31A = 1;
          }
          v45 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
          }
          v46 = v45->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v47 = System_Int32__ToString((int32_t)&v59, 0);
          if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_40500140(
                                                                              v47,
                                                                              v40,
                                                                              v42,
                                                                              v44,
                                                                              0);
          if ( v46 )
          {
            v46->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v46->fields.value,
              (int32_t)BeforeEventSubmarineSaveData_k__BackingField,
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
        sub_1C93D2C(BeforeEventSubmarineSaveData_k__BackingField, v13);
      }
    }
  }
LABEL_56:
  if ( !(_DWORD)value )
    goto LABEL_71;
  v54 = v21[1].klass;
  if ( !v54 )
    goto LABEL_70;
  namespaze = (GrandQuestFolderBoardItem_c *)v54->_1.namespaze;
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (GrandQuestFolderBoardItem_o *)&v56->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = namespaze;
  sub_1C93A78(p_mResultEventPanelRewardInfos, (int32_t)namespaze, v14, v15, v16, v17, v18, v19);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
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
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)v58->_2.genericContainerHandle;
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  TitleInfoControl__UpdateEventSubmarineItemDisp((TitleInfoControl_o *)BeforeEventSubmarineSaveData_k__BackingField, 0);
}


void SubmarineMapManager__OnScannerSelected(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v23; // x4
  SchedulerTaskBase_o *v24; // x21
  SchedulerTaskBase_TaskCallback_o *v25; // x22
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v33; // x20
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  __int64 v44; // x0

  if ( (byte_4D2D2E5 & 1) == 0 )
  {
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
    byte_4D2D2E5 = 1;
  }
  v7 = sub_1C93D20(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass36_0___ctor((SubmarineMapManager___c__DisplayClass36_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = panelData;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)panelData, v16, v17, v18, v19, v20, v21);
  klass = this->klass;
  if ( *(int *)(v7 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))klass->vtable._30_SetAllTouchBlock.methodPtr)(
      this,
      1,
      klass->vtable._30_SetAllTouchBlock.method);
    *(_BYTE *)(v7 + 40) = 0;
    v24 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v7 + 24),
            *(SubmarineMapPanelData_o **)(v7 + 32),
            (bool *)(v7 + 40),
            v23);
    v25 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v25,
      (Il2CppObject *)v7,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0);
    if ( v24 )
    {
      v24->fields.EndCallback = v25;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->fields.EndCallback, (int32_t)v25, v26, v27, v28, v29, v30, v31);
      taskScheduler = this->fields.taskScheduler;
      v8 = sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
      if ( v8 )
      {
        v33 = v8;
        v34 = sub_1C93C10(v24, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v34 )
        {
          v44 = sub_1C93D50();
          sub_1C93BFC(v44, 0);
        }
        if ( !*(_DWORD *)(v33 + 24) )
          sub_1C93D34(v34);
        *(_QWORD *)(v33 + 32) = v24;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 32), (int32_t)v24, v35, v36, v37, v38, v39, v40);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v33, 0);
          return;
        }
      }
    }
LABEL_12:
    sub_1C93D2C(v8, v9);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, const MethodInfo *))klass->vtable._32_AllTouchBlockForceFalse.methodPtr)(
    this,
    klass->vtable._32_AllTouchBlockForceFalse.method);
  SubmarineMapManager__HideScannableEffect(this, v41);
  SubmarineMapManager__ShowScannableEffect(this, v42);
  SubmarineMapManager__HideSelectedPanelEffect(this, v43);
}


void SubmarineMapManager__OpenScanConfirmDialog(
        SubmarineMapManager_o *this,
        int32_t scanId,
        bool isShowDialogUpper,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v25; // x22
  const MethodInfo *v26; // x4

  if ( (byte_4D2D2FB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
    byte_4D2D2FB = 1;
  }
  v9 = sub_1C93D20(SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass68_0___ctor((SubmarineMapManager___c__DisplayClass68_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    this,
    1,
    this->klass->vtable._31_SetCameraWorkBlock.method);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v25 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v25,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_1C93D2C(v10, v11);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v25, v26);
}


void SubmarineMapManager__OpenSelectScannerDialog(
        SubmarineMapManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v21; // x1
  int32_t eventId; // w22
  System_Action_int__o *v23; // x23
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x4

  if ( (byte_4D2D2F9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
    byte_4D2D2F9 = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass66_0___ctor((SubmarineMapManager___c__DisplayClass66_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    this,
    1,
    this->klass->vtable._31_SetCameraWorkBlock.method);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v21);
  v23 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v23,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
    0);
  v24 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0);
  if ( !selectScannerDialog )
LABEL_6:
    sub_1C93D2C(v6, v7);
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v23, v24, v25);
}


void SubmarineMapManager__ReleaseAssets(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapAssetManager_o *assetManager; // x0
  GrandQuestFolderBoardItem_o *p_assetManager; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_assetManager = (GrandQuestFolderBoardItem_o *)&this->fields.assetManager;
  assetManager = this->fields.assetManager;
  if ( assetManager )
  {
    SubmarineMapAssetManager__Finish(assetManager, method);
    p_assetManager->klass = 0;
    sub_1C93A78(p_assetManager, 0, v5, v6, v7, v8, v9, v10);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
}


void SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  ComponentPool_T__o *effectScanedPanelObjPool; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  ComponentPool_T__o *effectScannablePanelObjPool; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  ComponentPool_T__o *v17; // x0
  GrandQuestFolderBoardItem_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D2D2FE & 1) == 0 )
  {
    sub_1C93AD4(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    sub_1C93AD4(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    sub_1C93AD4(&Method_ComponentPool_CommonEffectComponent__Finish__);
    byte_4D2D2FE = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_343EA60 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.effectScanedPanelObjPool, 0, v4, v5, v6, v7, v8, v9);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_343EA60 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.effectScannablePanelObjPool,
      0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (GrandQuestFolderBoardItem_o *)&this->fields.effectScanObstaclePanelObjPool;
  v17 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v17,
      (const MethodInfo_343EA60 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0;
    sub_1C93A78(p_effectScanObstaclePanelObjPool, 0, v20, v21, v22, v23, v24, v25);
  }
}


void SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_3257584 *method)
{
  bool hasValue; // w19
  bool v8; // w20
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Component_o *v14; // x21
  UnityEngine_Transform_o *v15; // x22
  const MethodInfo_39A43EC *v16; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo_39A43EC *v18; // x2
  bool v19; // zf
  UnityEngine_Transform_o *v20; // x19
  float x; // s0
  float y; // s1
  float z; // s2
  System_Nullable_Vector3__o v24; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v25; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o Value; // 0:kr20_12.12
  System_Nullable_Vector3__o v28; // 0:x0.16
  System_Nullable_Vector3__o v29; // 0:x0.16
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PositionByIndices; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4

  v25 = offset;
  v24 = scale;
  hasValue = scale.fields.hasValue;
  v8 = offset.fields.hasValue;
  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C93AD4(&Method_System_Nullable_Vector3__get_Value__);
    if ( !method->rgctx_data )
      sub_1C69BC4();
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_21;
  transform = UnityEngine_GameObject__get_transform(effectContainer, 0);
  effectContainer = (UnityEngine_GameObject_o *)SubmarineMapManager__get_positionCalculator(this, 0);
  if ( !panelData )
    goto LABEL_21;
  if ( !effectContainer )
    goto LABEL_21;
  PositionByIndices = SubmarinePanelPositionCalculator__GetPositionByIndices(
                        (SubmarinePanelPositionCalculator_o *)effectContainer,
                        panelData->fields._HIndex_k__BackingField,
                        panelData->fields._VIndex_k__BackingField,
                        0);
  if ( !pool )
    goto LABEL_21;
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_54781328(
                                                  pool,
                                                  transform,
                                                  PositionByIndices,
                                                  (const MethodInfo_343E590 *)method->rgctx_data->_1_ComponentPool_T__Rent);
  if ( !effectContainer )
    goto LABEL_21;
  v14 = (UnityEngine_Component_o *)effectContainer;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)effectContainer,
                                                  0);
  if ( !effectContainer )
    goto LABEL_21;
  v15 = (UnityEngine_Transform_o *)effectContainer;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)effectContainer, 0);
  if ( v8 )
  {
    *(_QWORD *)&v28.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v28.fields.hasValue = &v25;
    Value = System_Nullable_Vector3___get_Value(v28, v16);
    x = Value.fields.x;
    y = Value.fields.y;
    z = Value.fields.z;
    hasValue = v24.fields.hasValue;
  }
  else
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  v30.fields.z = localPosition.fields.z + z;
  v30.fields.y = localPosition.fields.y + y;
  v30.fields.x = localPosition.fields.x + x;
  UnityEngine_Transform__set_localPosition(v15, v30, 0);
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0);
  v19 = !hasValue;
  v20 = (UnityEngine_Transform_o *)effectContainer;
  if ( !v19 )
  {
    *(_QWORD *)&v29.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v29.fields.hasValue = &v24;
    oneVector = System_Nullable_Vector3___get_Value(v29, v18);
    if ( v20 )
      goto LABEL_17;
LABEL_21:
    sub_1C93D2C(effectContainer, pool);
  }
  if ( !byte_4D2A13E )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A13E = 1;
  }
  oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
  if ( !v20 )
    goto LABEL_21;
LABEL_17:
  UnityEngine_Transform__set_localScale(v20, oneVector, 0);
}


void SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0);
}


void SubmarineMapManager__ReturnEffectsToPool_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_3257770 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  unsigned int v10; // w22

  if ( !method->rgctx_data )
    sub_1C69BC4();
  Children = GameObjectExtensions__GetChildren(this->fields.effectContainer, 0, 0);
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
        sub_1C93D34(Children);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_31FC084 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_343E668 *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1C93D2C(Children, v7);
  }
}


void SubmarineMapManager__RevealAvailableSpots(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_SchedulerTaskBase__o *RevealEachSpotsTasks; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v15; // x1
  __int64 v16; // x20
  System_Delegate_o **v17; // x22
  System_Delegate_o *v18; // x23
  SchedulerTaskBase_TaskCallback_o *v19; // x24
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Delegate_o *v27; // x8
  SchedulerTaskBase_TaskCallback_c *v28; // x1
  TaskScheduler_o *v29; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v30; // x21
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x0

  if ( (byte_4D2D2EA & 1) == 0 )
  {
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskNone_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
    byte_4D2D2EA = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass41_0___ctor((SubmarineMapManager___c__DisplayClass41_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = finishCallback,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9, v10, v11, v12, v13),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v15),
        !taskScheduler)
    || (TaskScheduler__AddTask_45006804(taskScheduler, 0, RevealEachSpotsTasks, 0),
        v16 = sub_1C93D20(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v16, 0, 0, 0),
        !v16) )
  {
LABEL_16:
    sub_1C93D2C(RevealEachSpotsTasks, v7);
  }
  v17 = (System_Delegate_o **)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__,
    0);
  v20 = System_Delegate__Combine(v18, (System_Delegate_o *)v19, 0);
  v27 = v20;
  if ( v20 )
  {
    v28 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v17 = v20;
      if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass == v28 )
        goto LABEL_11;
    }
    sub_1C940C8(v20);
  }
  *v17 = v27;
LABEL_11:
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 32), (int32_t)v27, v21, v22, v23, v24, v25, v26);
  v29 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_1C93B7C(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v30 = RevealEachSpotsTasks;
  v31 = sub_1C93C10(v16, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v31 )
  {
    v38 = sub_1C93D50();
    sub_1C93BFC(v38, 0);
  }
  if ( !v30->fields._size )
    sub_1C93D34(v31);
  v30->fields._syncRoot = (Il2CppObject *)v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v30->fields._syncRoot, v16, v32, v33, v34, v35, v36, v37);
  if ( !v29 )
    goto LABEL_16;
  TaskScheduler__AddTask(v29, 0, (SchedulerTaskBase_array *)v30, 0);
}


void SubmarineMapManager__SetClickPanelEnable(SubmarineMapManager_o *this, bool isEnable, const MethodInfo *method)
{
  this->fields.isEnableClickPanel = isEnable;
}


void SubmarineMapManager__SetGridLine(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *gridLine; // x20
  SubmarineMapDataManager_o *submarineData; // x0
  const MethodInfo *v5; // x1
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

  if ( (byte_4D2D2F2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D2F2 = 1;
  }
  gridLine = (UnityEngine_Object_o *)this->fields.gridLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  submarineData = (SubmarineMapDataManager_o *)UnityEngine_Object__op_Equality(gridLine, 0, 0);
  if ( ((unsigned __int8)submarineData & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
    {
      GridTexture_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._GridTexture_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(GridTexture_k__BackingField, 0, 0) )
        return;
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, v5);
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
                                                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
              if ( v11 )
              {
                v12 = (UIWidget_o *)submarineData;
                submarineData = (SubmarineMapDataManager_o *)((__int64 (__fastcall *)(SubmarineMapDataManager_o *, void *))v11->klass[1]._1.image)(
                                                               v11,
                                                               v11->klass[1]._1.gc_desc);
                if ( v12 )
                {
                  UIWidget__set_width(v12, (int32_t)submarineData, 0);
                  v13 = ((__int64 (__fastcall *)(SubmarineMapDataManager_o *, _QWORD))v11->klass[1]._1.byval_arg.data)(
                          v11,
                          *(_QWORD *)&v11->klass[1]._1.byval_arg.bits);
                  UIWidget__set_height(v12, v13, 0);
                  ((void (__fastcall *)(UIWidget_o *, SubmarineMapDataManager_o *, const MethodInfo *))v12->klass->vtable._27_set_mainTexture.methodPtr)(
                    v12,
                    v11,
                    v12->klass->vtable._27_set_mainTexture.method);
                  submarineData = (SubmarineMapDataManager_o *)this->fields.gridLine;
                  if ( submarineData )
                  {
                    submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)submarineData,
                                                                   0);
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
                            0);
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
    sub_1C93D2C(submarineData, v5);
  }
}


void SubmarineMapManager__SetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0);
}


void SubmarineMapManager__ShowScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v7; // 0:x3.16
  System_Nullable_Vector3__o v8; // 0:x5.16

  v2 = this;
  if ( (byte_4D2D301 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
    byte_4D2D301 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0 )
      sub_1C93D2C(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v6,
             (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields._current )
        sub_1C93D2C(v4, v5);
      if ( *((_BYTE *)&v6.fields._current->klass + (unsigned __int64)&word_38 + 1) )
      {
        *(_QWORD *)&v7.fields.hasValue = 0;
        *(_QWORD *)&v7.fields.value.fields.y = 0;
        *(_QWORD *)&v8.fields.hasValue = 0;
        *(_QWORD *)&v8.fields.value.fields.y = 0;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v6.fields._current,
          v7,
          v8,
          (const MethodInfo_3257584 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void SubmarineMapManager__ShowScanRange(
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  if ( (byte_4D2D305 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject____79146536);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D305 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_3463274 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_1C93D2C(Instance, v8);
  ScanRangeNotificatorPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                                 this->fields.assetManager,
                                                 *((_DWORD *)Instance + 14),
                                                 v9);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0, 0) )
  {
    SubmarineMapManager__HideScanRange(this, v11);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__Instantiate_object__52629400(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_3230F98 *)Method_UnityEngine_Object_Instantiate_GameObject____79146536);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v13;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)p_scanRangeNotificator, (int32_t)v13, v15, v16, v17, v18, v19, v20);
      Instance = *p_scanRangeNotificator;
      if ( *p_scanRangeNotificator )
      {
        Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
        if ( basePanelData )
        {
          if ( Instance )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)Instance,
              basePanelData->fields._LocalPosition_k__BackingField,
              0);
            return;
          }
        }
      }
    }
    goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *SubmarineMapManager__ShowScanRangeTask(
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
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  int m_CancellationTokenSource; // w8
  SubmarineMapManager_o *v32; // x21
  unsigned int v33; // w24
  __int64 v34; // x28
  struct SubmarineMapDataManager_o *v35; // x8
  struct SubmarineSettingsManager_o *v36; // x8
  float32x2_t v37; // d2
  float32x2_t v38; // d0
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v40; // x8
  __int64 size; // x10
  unsigned __int64 v42; // d0
  float32x2_t *v43; // x9
  Submarine2DUILocationInfo_o *v44; // x22
  const MethodInfo *v45; // x1
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v48; // x22
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  Submarine2DUILocationInfo_o *v53; // x22
  const MethodInfo *v54; // x1
  UnityEngine_Rect_array *v55; // x0
  MapCamera_o *v56; // x23
  UnityEngine_Rect_array *v57; // x22
  UnityEngine_Vector2_o v58; // kr40_8
  struct System_Threading_CancellationTokenSource_o *v59; // x8
  float v60; // s3
  __int64 v61; // x8
  struct MapControl_WarInfo_o **p_warInfo; // x9
  float v63; // t1
  float v64; // s0
  struct SubmarineMapDataManager_o *v65; // x8
  struct SubmarineSettingsManager_o *v66; // x8
  Submarine2DUILocationInfo_o *v68; // x22
  const MethodInfo *v69; // x1
  UnityEngine_Rect_array *v70; // x0
  MapCamera_o *v71; // x23
  UnityEngine_Rect_array *v72; // x22
  float v73; // s0
  float v74; // s1
  float v75; // s2
  float v76; // s3
  int32_t failedReason; // [xsp+3Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v78; // 0:kr00_16.16
  UnityEngine_Rect_o v79; // 0:kr10_16.16
  UnityEngine_Rect_o v80; // 0:kr20_16.16
  UnityEngine_Rect_o v81; // 0:kr30_16.16
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4D2D308 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Rect__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_Rect__TypeInfo);
    sub_1C93AD4(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_1C93AD4(&UnityEngine_Rect___TypeInfo);
    sub_1C93AD4(&float___TypeInfo);
    sub_1C93AD4(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    sub_1C93AD4(&Submarine2DUILocationInfo_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    byte_4D2D308 = 1;
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
                                            (const MethodInfo *)isShowDialogUpper);
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
          this = (SubmarineMapManager_o *)sub_1C93B7C(UnityEngine_Rect___TypeInfo, 1);
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
    sub_1C93D2C(this, *(_QWORD *)&scanId);
  }
  v28 = (System_Collections_Generic_List_Rect__o *)sub_1C93D20(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v28,
    (const MethodInfo_388CA04 *)Method_System_Collections_Generic_List_Rect___ctor__);
  this = (SubmarineMapManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                    scanId,
                                    panelData,
                                    v8->fields.submarineData,
                                    v29);
  if ( !v8->fields.submarineData )
    goto LABEL_73;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelsByScanEvents(
                                    v8->fields.submarineData,
                                    (System_Collections_Generic_List_SubmarineScanEvent__o *)this,
                                    v30);
  if ( !this )
    goto LABEL_73;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v32 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v33 = 0;
    while ( v33 < m_CancellationTokenSource )
    {
      v34 = *((_QWORD *)&v32->fields.mapInfo + (int)v33);
      if ( !byte_4D2A139 )
      {
        this = (SubmarineMapManager_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      v35 = v8->fields.submarineData;
      if ( !v35 )
        goto LABEL_73;
      v36 = v35->fields._Settings_k__BackingField;
      if ( !v36 )
        goto LABEL_73;
      if ( !v34 )
        goto LABEL_73;
      if ( !v28 )
        goto LABEL_73;
      v37.n64_u64[0] = (unsigned __int64)v36->fields._PanelUnitSize_k__BackingField;
      v38.n64_u64[0] = *(unsigned __int64 *)(v34 + 28);
      items = v28->fields._items;
      v40 = Method_System_Collections_Generic_List_Rect__Add__;
      ++v28->fields._version;
      if ( !items )
        goto LABEL_73;
      size = v28->fields._size;
      v42 = vadd_f32(v38, vmul_f32(v37, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        *(_QWORD *)&v81.fields.m_XMin = v42;
        *(float32x2_t *)&v81.fields.m_Width = v37;
        System_Collections_Generic_List_Rect___AddWithResize(
          v28,
          v81,
          *(const MethodInfo_388D290 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v43 = (float32x2_t *)(&items->obj + size);
        v28->fields._size = size + 1;
        v43[4].n64_u64[0] = v42;
        v43[5].n64_u64[0] = v37.n64_u64[0];
      }
      m_CancellationTokenSource = (int)v32->fields.m_CancellationTokenSource;
      if ( (int)++v33 >= m_CancellationTokenSource )
        goto LABEL_43;
    }
    goto LABEL_74;
  }
LABEL_43:
  if ( !v28 )
    goto LABEL_73;
  v27 = System_Collections_Generic_List_Rect___ToArray(
          v28,
          (const MethodInfo_388EE24 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_45:
  v44 = (Submarine2DUILocationInfo_o *)sub_1C93D20(Submarine2DUILocationInfo_TypeInfo);
  Submarine2DUILocationInfo___ctor(v44, v45);
  if ( !v44 )
    goto LABEL_73;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v44, 0);
  mapCamera = v8->fields.mapCamera;
  v48 = Rects;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v78 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(mapCamera, v27, v48, &failedReason, 0);
  *isShowDialogUpper = 0;
  m_XMin = v78.fields.m_XMin;
  m_YMin = v78.fields.m_YMin;
  m_Width = v78.fields.m_Width;
  m_Height = v78.fields.m_Height;
  if ( failedReason == 1 )
  {
    v53 = (Submarine2DUILocationInfo_o *)sub_1C93D20(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v53, v54);
    if ( !v53 )
      goto LABEL_73;
    v55 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v53, 0);
    v56 = v8->fields.mapCamera;
    v57 = v55;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    v79 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(v56, v27, v57, &failedReason, 0);
    v73 = v79.fields.m_XMin;
    v74 = v79.fields.m_YMin;
    v75 = v79.fields.m_Width;
    v76 = v79.fields.m_Height;
    if ( failedReason != 1 )
    {
      if ( failedReason )
        goto LABEL_55;
      goto LABEL_54;
    }
    v68 = (Submarine2DUILocationInfo_o *)sub_1C93D20(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v68, v69);
    if ( !v68 )
      goto LABEL_73;
    v70 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v68, 0);
    v71 = v8->fields.mapCamera;
    v72 = v70;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    v80 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(v71, v27, v72, &failedReason, 0);
    v73 = v80.fields.m_XMin;
    v74 = v80.fields.m_YMin;
    v75 = v80.fields.m_Width;
    v76 = v80.fields.m_Height;
    if ( !failedReason )
    {
LABEL_54:
      m_XMin = v73;
      m_YMin = v74;
      m_Width = v75;
      m_Height = v76;
      *isShowDialogUpper = 1;
    }
  }
LABEL_55:
  v58 = FSWindowUtil__GetSize(0);
  this = (SubmarineMapManager_o *)sub_1C93B7C(float___TypeInfo, 3);
  if ( !this )
    goto LABEL_73;
  v59 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v59
    || (LODWORD(this->fields.mapInfo) = 1065353216, (_DWORD)v59 == 1)
    || (*((float *)&this->fields.mapInfo + 1) = m_Width / v58.fields.x, (unsigned int)v59 <= 2) )
  {
LABEL_74:
    sub_1C93D34(this);
  }
  v60 = 1.0;
  *(float *)&this->fields.warInfo = m_Height / v58.fields.y;
  if ( (int)v59 >= 2 )
  {
    v61 = (unsigned int)v59 - 2LL;
    v60 = fmaxf(m_Width / v58.fields.x, 1.0);
    if ( v61 )
    {
      p_warInfo = &this->fields.warInfo;
      do
      {
        v63 = *(float *)p_warInfo;
        p_warInfo = (struct MapControl_WarInfo_o **)((char *)p_warInfo + 4);
        v64 = v63;
        if ( v63 > v60 )
          v60 = v64;
        --v61;
      }
      while ( v61 );
    }
  }
  v65 = v8->fields.submarineData;
  if ( !v65 )
    goto LABEL_73;
  v66 = v65->fields._Settings_k__BackingField;
  if ( !v66 )
    goto LABEL_73;
  v82.fields.y = m_YMin + (float)(m_Height * 0.5);
  v82.fields.x = m_XMin + (float)(m_Width * 0.5);
  v82.fields.z = 0.0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v8,
           v82,
           v60,
           v66->fields._ViewScanRangeCameraDuration_k__BackingField,
           *(const MethodInfo **)&scanId);
}


void SubmarineMapManager__ShowScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Enumerator_object__o v6; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v7; // 0:x3.16
  System_Nullable_Vector3__o v8; // 0:x5.16

  v2 = this;
  if ( (byte_4D2D2FF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
    byte_4D2D2FF = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0 )
      sub_1C93D2C(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v6,
             (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields._current )
        sub_1C93D2C(v4, v5);
      if ( *((_BYTE *)&v6.fields._current->klass + (unsigned __int64)&word_3A) )
      {
        *(_QWORD *)&v7.fields.hasValue = 0;
        *(_QWORD *)&v7.fields.value.fields.y = 0;
        *(_QWORD *)&v8.fields.hasValue = 0;
        *(_QWORD *)&v8.fields.value.fields.y = 0;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v6.fields._current,
          v7,
          v8,
          (const MethodInfo_3257584 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_4D2D303 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
    byte_4D2D303 = 1;
  }
  *(_QWORD *)&v5.fields.hasValue = 0;
  *(_QWORD *)&v5.fields.value.fields.y = 0;
  *(_QWORD *)&v6.fields.hasValue = 0;
  *(_QWORD *)&v6.fields.value.fields.y = 0;
  SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    panelData,
    v5,
    v6,
    (const MethodInfo_3257584 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
}


void SubmarineMapManager__StartScanPerformance(
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
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  MissionNotifyManager_o *v22; // x20
  __int64 v23; // x20
  System_Delegate_o **v24; // x21
  System_Delegate_o *v25; // x22
  SchedulerTaskBase_TaskCallback_o *v26; // x23
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Delegate_o *v34; // x8
  SchedulerTaskBase_TaskCallback_c *v35; // x1
  TaskScheduler_o *v36; // x19
  MissionNotifyManager_o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  __int64 v44; // x0

  if ( (byte_4D2D2E8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&SchedulerTaskBase___TypeInfo);
    sub_1C93AD4(&SchedulerTaskNone_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__);
    sub_1C93AD4(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4D2D2E8 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0);
  if ( !v9 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v9, v10, 0);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v12);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_45006804(taskScheduler, 0, (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance, 0);
  v13 = this->fields.taskScheduler;
  v14 = (SchedulerTaskBase_array *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v15);
  if ( !v14 )
    goto LABEL_22;
  v22 = Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_1C93C10(Instance, v14->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_23;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v14->m_Items, (int32_t)v22, v16, v17, v18, v19, v20, v21);
  if ( !v13
    || (TaskScheduler__AddTask(v13, 0, v14, 0),
        v23 = sub_1C93D20(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v23, 0, 0, 0),
        !v23) )
  {
LABEL_22:
    sub_1C93D2C(Instance, v8);
  }
  v24 = (System_Delegate_o **)(v23 + 32);
  v25 = *(System_Delegate_o **)(v23 + 32);
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__39_1__,
    0);
  v27 = System_Delegate__Combine(v25, (System_Delegate_o *)v26, 0);
  v34 = v27;
  if ( !v27 )
    goto LABEL_16;
  v35 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v27->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v24 = v27, (SchedulerTaskBase_TaskCallback_c *)v27->klass != v35) )
  {
    sub_1C940C8(v27);
LABEL_16:
    *v24 = v34;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 32), (int32_t)v34, v28, v29, v30, v31, v32, v33);
  v36 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_1C93B7C(SchedulerTaskBase___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_22;
  v37 = Instance;
  Instance = (MissionNotifyManager_o *)sub_1C93C10(v23, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v44 = sub_1C93D50();
    sub_1C93BFC(v44, 0);
  }
  if ( !LODWORD(v37->fields.mNoDispInfos) )
LABEL_23:
    sub_1C93D34(Instance);
  v37->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v23;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v37->fields.mMissionNotifyComps, v23, v38, v39, v40, v41, v42, v43);
  if ( !v36 )
    goto LABEL_22;
  TaskScheduler__AddTask(v36, 0, (SchedulerTaskBase_array *)v37, 0);
}


void SubmarineMapManager__SubsequentialOpenPanelTaskChain(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *SubsequentialOpenPanelTasks; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o **p_syncRoot; // x22
  const MethodInfo *v15; // x1
  int size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v17; // x20
  System_Delegate_o *syncRoot; // x23
  SchedulerTaskBase_TaskCallback_o *v19; // x24
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  SchedulerTaskBase_TaskCallback_c *v27; // x1

  if ( (byte_4D2D2E9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
    sub_1C93AD4(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
    byte_4D2D2E9 = 1;
  }
  v5 = sub_1C93D20(SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass40_0___ctor((SubmarineMapManager___c__DisplayClass40_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v5 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9, v10, v11, v12, v13);
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
    ActionExtensions__Call(*p_syncRoot, 0);
    return;
  }
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SubsequentialOpenPanelTasks,
                                                                               size - 1,
                                                                               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1C93D20(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__,
    0);
  v20 = System_Delegate__Combine(syncRoot, (System_Delegate_o *)v19, 0);
  if ( v20 )
  {
    v27 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass != SchedulerTaskBase_TaskCallback_TypeInfo
      || (*p_syncRoot = (System_Action_o *)v20, (SchedulerTaskBase_TaskCallback_c *)v20->klass != v27) )
    {
      sub_1C940C8(v20);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_syncRoot, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_1C93D2C(SubsequentialOpenPanelTasks, v7);
  TaskScheduler__AddTask_45006804((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v17, 0);
}


void SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 eventId; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct MapControl_MapInfo_o *mapInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  Il2CppObject *Request_object; // x20
  const MethodInfo *v9; // x1
  struct MapControl_MapInfo_o *v10; // x8

  if ( (byte_4D2D2E0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager__TryInitRequest_b__31_0__);
    byte_4D2D2E0 = 1;
  }
  this->fields.initRequestFinished = 0;
  eventId = SubmarineMapManager__get_eventId(this, method);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_11;
  if ( SubmarineMapDataManager__HasUserMapData(eventId, mapInfo->fields.mapId, v5) )
  {
    this->fields.initRequestFinished = 1;
    return;
  }
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v9);
  v10 = this->fields.mapInfo;
  if ( !v10 || !Request_object )
LABEL_11:
    sub_1C93D2C(eventId, v4);
  EventScanPanelMapRequest__beginRequest(
    (EventScanPanelMapRequest_o *)Request_object,
    eventId,
    v10->fields.mapId,
    0,
    0,
    0);
}


void SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  int32_t v5; // w20
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  System_Action_o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4D2D2FA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    byte_4D2D2FA = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    v5 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v7 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v5, v7, v8);
      return;
    }
LABEL_8:
    sub_1C93D2C(submarineData, method);
  }
}


void SubmarineMapManager__Update(SubmarineMapManager_o *this, const MethodInfo *method)
{
  TaskScheduler_o *taskScheduler; // x0

  taskScheduler = this->fields.taskScheduler;
  if ( taskScheduler )
    TaskScheduler__TaskUpdate(taskScheduler, 0);
}


void SubmarineMapManager__UpdateClosedPanelDisplay(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapDataManager_o *submarineData; // x8
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_4D2D2EC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    this = (SubmarineMapManager_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    byte_4D2D2EC = 1;
  }
  memset(&v5, 0, sizeof(v5));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0 )
    sub_1C93D2C(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C93D2C(0, v4);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C93D2C(0, beforeClearQuestId);
  SubmarineMapDataManager__UpdateParams(submarineData, beforeClearQuestId, method);
}


void SubmarineMapManager__UpdateScannObstacleEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SubmarineMapManager__HideScanObstacleEffect(this, method);
  SubmarineMapManager__ShowScanObstacleEffect(this, v3);
}


void SubmarineMapManager__UpdateScannableEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SubmarineMapManager__HideScannableEffect(this, method);
  SubmarineMapManager__ShowScannableEffect(this, v3);
}


void SubmarineMapManager__UpdateTerminalInfo(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  ScrTerminalMap_o *terminalMap; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_GameObject_c *klass; // x8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v14; // x1
  TerminalPramsManager_c *v15; // x0
  TerminalPramsManager_c *v16; // x0
  System_String_array *ValueByArray; // x0
  il2cpp_array_size_t max_length; // x8
  UnityEngine_GameObject_c *v19; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  EventDetailEntity_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  if ( (byte_4D2D2ED & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__);
    sub_1C93AD4(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
    byte_4D2D2ED = 1;
  }
  v3 = sub_1C93D20(SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass48_0___ctor((SubmarineMapManager___c__DisplayClass48_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_46;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_46;
  ScrTerminalMap__UpdateMapButtonBadge(terminalMap, 0);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_46;
  ScrTerminalMap__UpdateCaldeaFolderBoardList(terminalMap, 0);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_46;
  ScrTerminalMap__UpdateAreaBoardList(terminalMap, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = terminalMap->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_46;
  terminalMap = (ScrTerminalMap_o *)klass->_2.genericContainerHandle;
  if ( !terminalMap )
    goto LABEL_46;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)terminalMap, 0);
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)terminalMap,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  terminalMap = (ScrTerminalMap_o *)SubmarineMapManager__get_eventId(this, v14);
  if ( !MasterData_object )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         (Il2CppObject **)(v3 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v3 + 32) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D31A )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D31A = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    if ( v15->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v15->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v15);
      if ( !byte_4D2D31A )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D31A = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v16->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_46;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0);
      if ( ValueByArray )
      {
        max_length = ValueByArray->max_length;
        if ( max_length )
        {
          if ( !(_DWORD)max_length )
            sub_1C93D34(ValueByArray);
          *(_DWORD *)(v3 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0);
        }
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v19 = terminalMap->fields.subRootGimmickP->klass;
    if ( v19 )
    {
      genericContainerHandle = (TitleInfoControl_o *)v19->_2.genericContainerHandle;
      v21 = *(EventDetailEntity_o **)(v3 + 24);
      v22 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v3,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0);
      if ( genericContainerHandle )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(genericContainerHandle, v21, v22, 0);
        return;
      }
    }
LABEL_46:
    sub_1C93D2C(terminalMap, v5);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, const MethodInfo *))this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr)(
    this,
    this->klass->vtable._32_AllTouchBlockForceFalse.method);
  SubmarineMapManager__HideScannableEffect(this, v23);
  SubmarineMapManager__ShowScannableEffect(this, v24);
}


void SubmarineMapManager__UserControllable(SubmarineMapManager_o *this, bool value, const MethodInfo *method)
{
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  klass = this->klass;
  if ( value )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, const MethodInfo *, const MethodInfo *))klass->vtable._32_AllTouchBlockForceFalse.methodPtr)(
      this,
      klass->vtable._32_AllTouchBlockForceFalse.method,
      method);
    SubmarineMapManager__HideScannableEffect(this, v5);
    SubmarineMapManager__ShowScannableEffect(this, v6);
  }
  else
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))klass->vtable._30_SetAllTouchBlock.methodPtr)(
      this,
      1,
      klass->vtable._30_SetAllTouchBlock.method);
    SubmarineMapManager__HideScannableEffect(this, v7);
  }
}


bool SubmarineMapManager___CoInitRequest_b__20_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  return this->fields.initRequestFinished;
}


void SubmarineMapManager___OnEndScan_b__42_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineMapDataManager_o *submarineData; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C93D2C(0, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4D2D313 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__);
    byte_4D2D313 = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, 0);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, const MethodInfo *))this->klass->vtable._24_OnAfterQuestAfterAction.methodPtr)(
    this,
    v3,
    this->klass->vtable._24_OnAfterQuestAfterAction.method);
}


void SubmarineMapManager___OnEveryActionEnd_b__27_1(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SubmarineMapManager__HideScannableEffect(this, method);
  SubmarineMapManager__ShowScannableEffect(this, v3);
}


void SubmarineMapManager___StartScanPerformance_b__39_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2D314 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D2D314 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  CommonUI__SetSkipAnimation((CommonUI_o *)Instance, 1, 0);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0);
}


void SubmarineMapManager___StartScanPerformance_b__39_1(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D2D315 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__);
    byte_4D2D315 = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_2__, 0);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v3, v4);
}


void SubmarineMapManager___StartScanPerformance_b__39_2(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D2D316 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__);
    byte_4D2D316 = 1;
  }
  v3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_3__, 0);
  SubmarineMapManager__RevealAvailableSpots(this, v3, v4);
}


void SubmarineMapManager___StartScanPerformance_b__39_3(SubmarineMapManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4D2D317 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D2D317 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  SubmarineMapManager__OnEndScan(this, v5);
}


void SubmarineMapManager___TryInitRequest_b__31_0(
        SubmarineMapManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.initRequestFinished = 1;
}


int32_t SubmarineMapManager__get_eventId(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields.WarInfo) == 0 )
    sub_1C93D2C(this, method);
  return MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0);
}


SubmarinePanelPositionCalculator_o *SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C93D2C(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *SubmarineMapManager__get_settings(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C93D2C(this, method);
  return submarineData->fields._Settings_k__BackingField;
}


void SubmarineMapManager_PlayingScanVoiceData___ctor(
        SubmarineMapManager_PlayingScanVoiceData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager__CoInitRequest_d__20___ctor(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SubmarineMapManager__CoInitRequest_d__20__MoveNext(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager__CoInitRequest_d__20_o *v2; // x19
  int32_t _1__state; // w8
  struct SubmarineMapManager_o *_4__this; // x20
  bool v5; // w21
  System_Func_bool__o *v6; // x22
  UnityEngine_WaitUntil_o *v7; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v2 = this;
  if ( (byte_4D2D326 & 1) == 0 )
  {
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SubmarineMapManager__CoInitRequest_b__20_0__);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_1C93AD4(&UnityEngine_WaitUntil_TypeInfo);
    byte_4D2D326 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData) == 0 )
    {
LABEL_14:
      sub_1C93D2C(this, method);
    }
    SubmarineMapDataManager__ConstructParams((SubmarineMapDataManager_o *)this, 0);
    ActionExtensions__Call(v2->fields.finishCallback, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  SubmarineMapManager__TryInitRequest(_4__this, 0);
  this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
  v6 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0);
  v7 = (UnityEngine_WaitUntil_o *)sub_1C93D20(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C93A78(p__2__current, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
  return v5;
}


Il2CppObject *SubmarineMapManager__CoInitRequest_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SubmarineMapManager__CoInitRequest_d__20__System_Collections_IEnumerator_Reset(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *SubmarineMapManager__CoInitRequest_d__20__System_Collections_IEnumerator_get_Current(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SubmarineMapManager__CoInitRequest_d__20__System_IDisposable_Dispose(
        SubmarineMapManager__CoInitRequest_d__20_o *this,
        const MethodInfo *method)
{
  ;
}


void SubmarineMapManager__CoOnAfterSpotCreated_d__23___ctor(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SubmarineMapManager__CoOnAfterSpotCreated_d__23__MoveNext(
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct SubmarineMapAssetManager_o *v15; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct SubmarineMapDataManager_o *submarineData; // x8
  int32_t v25; // w0

  v2 = this;
  if ( (byte_4D2D327 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2D327 = 1;
  }
  if ( !v2->fields.__1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SubmarineMapManager__get_eventId(_4__this, 0);
    mapInfo = _4__this->fields.mapInfo;
    if ( !mapInfo )
      goto LABEL_25;
    if ( SubmarineMapDataManager__HasUserMapData((int32_t)this, mapInfo->fields.mapId, 0) )
    {
      this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)_4__this->fields.taskScheduler;
      if ( this )
      {
        TaskScheduler__Activate((TaskScheduler_o *)this, 0);
        assetManager = _4__this->fields.assetManager;
        if ( assetManager )
        {
          this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)assetManager->fields._ClosedPanelTexture_k__BackingField;
          terminalMap = _4__this->fields.terminalMap;
          if ( this )
          {
            if ( !terminalMap )
              goto LABEL_25;
          }
          else
          {
            if ( !terminalMap )
              goto LABEL_25;
            this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)terminalMap->fields._currentMapTexture_k__BackingField;
          }
          ResizedTexture2D = ClosePanelTextureUtil__CreateResizedTexture2D(
                               (UnityEngine_Texture2D_o *)this,
                               terminalMap->fields._currentMapImageW_k__BackingField,
                               terminalMap->fields._currentMapImageH_k__BackingField,
                               0);
          _4__this->fields.closedPanelTexture = ResizedTexture2D;
          p_closedPanelTexture = &_4__this->fields.closedPanelTexture;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields.closedPanelTexture,
            (int32_t)ResizedTexture2D,
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
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0, 0) )
            {
              DarkTexture2D = ClosePanelTextureUtil__CreateDarkTexture2D(*p_closedPanelTexture, 0.4, 0);
              *p_closedPanelTexture = DarkTexture2D;
              sub_1C93A78(
                (GrandQuestFolderBoardItem_o *)&_4__this->fields.closedPanelTexture,
                (int32_t)DarkTexture2D,
                v18,
                v19,
                v20,
                v21,
                v22,
                v23);
            }
            SubmarineMapManager__AdjustEachSpotsPositions(_4__this, 0);
            SubmarineMapManager__CreateContainers(_4__this, 0);
            SubmarineMapManager__CreatePanels(_4__this, 0);
            SubmarineMapManager__CreateNeverOpenSurrounds(_4__this, 0);
            SubmarineMapManager__SetGridLine(_4__this, 0);
            SubmarineMapManager__AdjustSilhouetteGimmicks(_4__this, 0);
            SubmarineMapManager__ConstructOnPartOfDialog(_4__this, 0);
            submarineData = _4__this->fields.submarineData;
            if ( submarineData )
            {
              this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)submarineData->fields._BeforeQuestInfo_k__BackingField;
              if ( this )
              {
                v25 = SubmarineQuestSaveInfo__get_BeforeClearQuestId((SubmarineQuestSaveInfo_o *)this, 0);
                SubmarineMapManager__UpdateParams(_4__this, v25, 0);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, 0);
                SubmarineMapManager__UpdateScannObstacleEffects(_4__this, 0);
                ActionExtensions__Call(v2->fields.finishCallback, 0);
                return 0;
              }
            }
          }
        }
      }
LABEL_25:
      sub_1C93D2C(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0, 0, 0);
  }
  return 0;
}


Il2CppObject *SubmarineMapManager__CoOnAfterSpotCreated_d__23__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SubmarineMapManager__CoOnAfterSpotCreated_d__23__System_Collections_IEnumerator_Reset(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *SubmarineMapManager__CoOnAfterSpotCreated_d__23__System_Collections_IEnumerator_get_Current(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SubmarineMapManager__CoOnAfterSpotCreated_d__23__System_IDisposable_Dispose(
        SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *this,
        const MethodInfo *method)
{
  ;
}


void SubmarineMapManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D31C & 1) == 0 )
  {
    sub_1C93AD4(&SubmarineMapManager___c_TypeInfo);
    byte_4D2D31C = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SubmarineMapManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SubmarineMapManager___c___ctor(SubmarineMapManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c___CheckNewPlayableEventQuest_b__49_0(
        SubmarineMapManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool SubmarineMapManager___c___CreateHideEnemyOccupiedPanelTasks_b__101_0(
        SubmarineMapManager___c_o *this,
        SubmarineMapPanelData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._IsOpened_k__BackingField;
}


bool SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._Chain_k__BackingField;
}


void SubmarineMapManager___c__DisplayClass101_0___ctor(
        SubmarineMapManager___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SubmarineMapManager___c__DisplayClass101_0___CreateHideEnemyOccupiedPanelTasks_b__1(
        SubmarineMapManager___c__DisplayClass101_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  struct SubmarineSilhouetteData_o *silhouetteData; // x8

  if ( !x || (silhouetteData = this->fields.silhouetteData) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.spotId == silhouetteData->fields._SpotId_k__BackingField;
}


void SubmarineMapManager___c__DisplayClass19_0___ctor(
        SubmarineMapManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass19_0___LoadAssets_b__0(
        SubmarineMapManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  UnityEngine_MonoBehaviour_o *v4; // x20
  SubmarineMapAssetManager_o *klass; // x21
  System_Action_o *_9__1; // x23
  int32_t v7; // w22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_4D2D31D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__);
    byte_4D2D31D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  SubmarineMapManager__CreateAssetManagerIfNotExists(_4__this, 0);
  v4 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v4 )
    goto LABEL_9;
  klass = (SubmarineMapAssetManager_o *)v4[5].klass;
  _4__this = (SubmarineMapManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0);
  _9__1 = this->fields.__9__1;
  v7 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !klass )
LABEL_9:
    sub_1C93D2C(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v7, _9__1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100(v4, Assets, 0);
}


void SubmarineMapManager___c__DisplayClass19_0___LoadAssets_b__1(
        SubmarineMapManager___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  struct SubmarineMapManager_o *v4; // x8
  struct SubmarineMapAssetManager_o *assetManager; // x9
  UnityEngine_MonoBehaviour_o *v6; // x20
  System_Collections_IEnumerator_o *inited; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (SubmarineMapManager__LoadPoolEffects(_4__this, 0), (v4 = this->fields.__4__this) == 0)
    || (assetManager = v4->fields.assetManager) == 0
    || (_4__this = (SubmarineMapManager_o *)v4->fields.submarineData) == 0
    || (SubmarineMapDataManager__LoadSettings(
          (SubmarineMapDataManager_o *)_4__this,
          assetManager->fields._Settings_k__BackingField,
          0),
        (v6 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100(v6, inited, 0);
}


void SubmarineMapManager___c__DisplayClass25_0___ctor(
        SubmarineMapManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass25_0___OnBeforeQuestAfterAction_b__0(
        SubmarineMapManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  __int64 v6; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2D31E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D31E = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.__4__this )
    goto LABEL_18;
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0);
  if ( !v5 )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v5,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_34632C0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    }
    v6 = **(_QWORD **)&Instance[1].fields._DispLog;
    if ( v6 )
    {
      Instance = *(DataManager_o **)(v6 + 240);
      if ( Instance )
      {
        TitleInfoControl__CheckEventPointReward(
          (TitleInfoControl_o *)Instance,
          (EventDetailEntity_o *)entity,
          this->fields.finishCallback,
          0,
          0);
        return;
      }
    }
LABEL_18:
    sub_1C93D2C(Instance, v4);
  }
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void SubmarineMapManager___c__DisplayClass34_0___ctor(
        SubmarineMapManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass34_0___DoPerformancesByVariedCond_b__0(
        SubmarineMapManager___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(_4__this, this->fields.finishCallback, 0);
}


void SubmarineMapManager___c__DisplayClass35_0___ctor(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__0(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2D31F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__);
    byte_4D2D31F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0);
  _9__1 = this->fields.__9__1;
  v5 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !v5 )
LABEL_8:
    sub_1C93D2C(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v5, _9__1, 0);
}


void SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, scanId);
  SubmarineMapManager__OnScannerSelected(_4__this, scanId, this->fields.panelData, 0);
}


void SubmarineMapManager___c__DisplayClass36_0___ctor(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__0(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v6; // x21
  _BOOL4 isShowDialogUpper; // w24
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2D320 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__);
    byte_4D2D320 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  ((void (__fastcall *)(SubmarineMapManager_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._30_SetAllTouchBlock.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._30_SetAllTouchBlock.method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  SubmarineMapManager__ShowScanRange(_4__this, this->fields.scanId, this->fields.panelData, 0);
  _9__1 = this->fields.__9__1;
  scanId = this->fields.scanId;
  v6 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
LABEL_9:
    sub_1C93D2C(_4__this, method);
  SubmarineMapManager__OpenScanConfirmDialog(v6, scanId, isShowDialogUpper, _9__1, 0);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0
  SubmarineMapManager_o *v6; // x20
  System_Action_int__o *_9__2; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2D321 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__);
    byte_4D2D321 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, 0);
  v6 = this->fields.__4__this;
  if ( yes )
  {
    if ( v6 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, 0);
      return;
    }
LABEL_11:
    sub_1C93D2C(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v6, _9__2, 0);
}


void SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, lscanId);
  SubmarineMapManager__OnScannerSelected(_4__this, lscanId, this->fields.panelData, 0);
}


void SubmarineMapManager___c__DisplayClass37_0___ctor(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass37_0___OnScanDecided_b__0(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, result);
  SubmarineMapManager__OnScanPanelRequestFinished(_4__this, result, this->fields.scanId, this->fields.panelData, 0);
}


void SubmarineMapManager___c__DisplayClass40_0___ctor(
        SubmarineMapManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass40_0___SubsequentialOpenPanelTaskChain_b__0(
        SubmarineMapManager___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void SubmarineMapManager___c__DisplayClass41_0___ctor(
        SubmarineMapManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass41_0___RevealAvailableSpots_b__0(
        SubmarineMapManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void SubmarineMapManager___c__DisplayClass48_0___ctor(
        SubmarineMapManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass48_0___UpdateTerminalInfo_b__0(
        SubmarineMapManager___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  ErrorDialog_c *klass; // x8
  ErrorDialog_c *v6; // x8

  if ( (byte_4D2D322 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D322 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_22;
  SubmarineMapManager__ResetTimeAcceleration((SubmarineMapManager_o *)Instance, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass )
    goto LABEL_22;
  Instance = (CommonUI_o *)klass->_2.genericContainerHandle;
  if ( !Instance )
    goto LABEL_22;
  TitleInfoControl__CheckEventPointReward(
    (TitleInfoControl_o *)Instance,
    this->fields.eventDetailEntity,
    0,
    this->fields.beforePoint,
    0);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = Instance->fields.errorDialog->klass;
  if ( !v6
    || (Instance = *(CommonUI_o **)&v6->_2.static_fields_size) == 0
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
LABEL_22:
    sub_1C93D2C(Instance, v4);
  }
  SubmarineMapManager__UserControllable((SubmarineMapManager_o *)Instance, 1, 0);
}


void SubmarineMapManager___c__DisplayClass59_0___ctor(
        SubmarineMapManager___c__DisplayClass59_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SubmarineMapManager___c__DisplayClass59_0___AdjustSilhouetteGimmicks_b__0(
        SubmarineMapManager___c__DisplayClass59_0_o *this,
        SrcSpotBasePrefab_o *x,
        const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct SubmarineSilhouetteData_o *silhouetteData; // x9

  if ( !x
    || (mMapCtrl_SpotInfo = x->fields.mMapCtrl_SpotInfo) == 0
    || (silhouetteData = this->fields.silhouetteData) == 0 )
  {
    sub_1C93D2C(this, x);
  }
  return mMapCtrl_SpotInfo->fields.spotId == silhouetteData->fields._SpotId_k__BackingField;
}


void SubmarineMapManager___c__DisplayClass66_0___ctor(
        SubmarineMapManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineMapManager___c__DisplayClass66_0___OpenSelectScannerDialog_b__0(
        SubmarineMapManager___c__DisplayClass66_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  struct SubmarineMapManager_o *_4__this; // x0

  if ( (byte_4D2D323 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_int___);
    byte_4D2D323 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._31_SetCameraWorkBlock.method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_30EBBB4 *)Method_ActionExtensions_Call_int___);
}


void SubmarineMapManager___c__DisplayClass68_0___ctor(
        SubmarineMapManager___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineMapManager___c__DisplayClass68_0___OpenScanConfirmDialog_b__0(
        SubmarineMapManager___c__DisplayClass68_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  struct SubmarineMapManager_o *_4__this; // x0

  if ( (byte_4D2D324 & 1) == 0 )
  {
    sub_1C93AD4(&Method_ActionExtensions_Call_bool___);
    byte_4D2D324 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._31_SetCameraWorkBlock.method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_30EBB64 *)Method_ActionExtensions_Call_bool___);
}


void SubmarineMapManager___c__DisplayClass93_0___ctor(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__0(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *scanAnimObj; // x0

  scanAnimObj = this->fields.scanAnimObj;
  if ( !scanAnimObj )
    sub_1C93D2C(0, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_1C93D2C(0, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_4D2D325 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D325 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(scanAnimObj, 0);
}


void SubmarineMapManager___c__DisplayClass94_0___ctor(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SubmarineMapManager___c__DisplayClass94_0___CreateRevealSpotOnPanelTasks_b__0(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  struct SubmarineMapPanelData_o *panelData; // x8

  if ( !x || (panelData = this->fields.panelData) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.spotId == panelData->fields._SpotId_k__BackingField;
}


void SubmarineMapManager___c__DisplayClass97_0___ctor(
        SubmarineMapManager___c__DisplayClass97_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SubmarineMapManager___c__DisplayClass97_0___CreateScanOpenPanelTask_b__2(
        SubmarineMapManager___c__DisplayClass97_0_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._Chain_k__BackingField == this->fields.i;
}