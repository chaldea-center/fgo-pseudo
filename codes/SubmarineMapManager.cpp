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

  if ( (byte_4C53735 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_1C3E564(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_4C53735 = 1;
  }
  if ( !go )
    goto LABEL_23;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                    go,
                                    (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1C3E7C8(this, go);
  }
  v8 = 0x7FFFFFFF;
LABEL_14:
  if ( v8 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51715312(
                                      go,
                                      (const MethodInfo_3151CF0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1C3E7C0(this, go);
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

  if ( (byte_4C53732 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53732 = 1;
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
        sub_1C3E7C8(Children, v4);
      Children = (UnityEngine_GameObject_array *)v6->m_Items[v7];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
    sub_1C3E7C0(Children, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_Dictionary_int__object__o *v15; // x21
  int v16; // w8
  UnityEngine_GameObject_o *v17; // x22
  unsigned int v18; // w19
  UnityEngine_Object_o *v19; // x23
  intptr_t m_CachedPtr; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t current; // w1
  SubmarineSilhouetteData_o **v28; // x23
  __int64 v29; // x0
  __int64 v30; // x1
  System_Predicate_object__o *v31; // x25
  __int64 v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x24
  _BOOL8 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  SubmarineMapDataManager_o *v39; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v41; // x23
  __int64 v42; // x0
  __int64 v43; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v45; // x1
  __int64 v46; // x0
  __int64 v47; // x1
  float32x2_t v48; // d9
  __int128 v49; // q0
  _BOOL8 v50; // x0
  __int64 v51; // x1
  __int128 v52; // q1
  int8x8_t v53; // d0
  int8x8_t v54; // d2
  __int64 v55; // x1
  UnityEngine_Transform_o *v56; // x0
  __int64 v57; // x1
  unsigned __int64 v58; // d0 OVERLAPPED
  int v59; // s1
  int v60; // s2
  float y; // [xsp+10h] [xbp-F0h]
  __int128 v63; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+70h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C53734 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C3E564(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___78148248);
    sub_1C3E564(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Predicate_SrcSpotBasePrefab__TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    byte_4C53734 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  value = 0;
  memset(&v65, 0, sizeof(v65));
  v2 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
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
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
        v12 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
        ++v2->fields._version;
        if ( !items )
          goto LABEL_59;
        size = v2->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v2,
            Component_object,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v2->fields._size = size + 1;
          v14[4] = (Il2CppClass *)Component_object;
          sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)Component_object, v9, v10);
        }
      }
      klass = (int)v6[1].klass;
      if ( (int)++v7 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_1C3E7C8(Children, v4);
  }
LABEL_17:
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0);
  if ( !Children )
    goto LABEL_59;
  v16 = (int)Children[1].klass;
  v17 = Children;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( v18 < v16 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v17[1].monitor + (int)v18);
      if ( !Children )
        goto LABEL_59;
      v19 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                      Children,
                                      (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v19, 0, 0);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v19 )
          goto LABEL_59;
        m_CachedPtr = v19[4].fields.m_CachedPtr;
        if ( !m_CachedPtr || !v15 )
          goto LABEL_59;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v15,
          *(_DWORD *)(m_CachedPtr + 20),
          (Il2CppObject *)v19,
          (const MethodInfo_340C428 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v16 = (int)v17[1].klass;
      if ( (int)++v18 >= v16 )
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
    sub_1C3E7C0(Children, v4);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v64,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v67 = v64;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v67,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v22 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass59_0___ctor((SubmarineMapManager___c__DisplayClass59_0_o *)v22, 0);
    if ( !v22 )
      sub_1C3E7C0(v23, v24);
    current = (int32_t)v67.fields._current;
    *(_QWORD *)(v22 + 16) = v67.fields._current;
    v28 = (SubmarineSilhouetteData_o **)(v22 + 16);
    sub_1C3E508((CGThumbnailListItem_o *)(v22 + 16), current, v25, v26);
    if ( !*(_QWORD *)(v22 + 16) )
      sub_1C3E7C0(v29, v30);
    if ( *(int *)(*(_QWORD *)(v22 + 16) + 20LL) > 0 )
    {
      v31 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_object____ctor(
        v31,
        (Il2CppObject *)v22,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0);
      if ( !v2 )
        sub_1C3E7C0(v32, v33);
      v34 = System_Collections_Generic_List_object___Find(
              v2,
              (System_Predicate_T__o *)v31,
              (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v35 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0, 0);
      if ( !v35 )
      {
        if ( !*v28 )
          sub_1C3E7C0(v35, v36);
        if ( !v15 )
          sub_1C3E7C0(v35, v36);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v15,
               (*v28)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_340DBC8 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v39 = this->fields.submarineData;
          if ( !v39 )
            sub_1C3E7C0(0, v37);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v39,
                                                                                      *v28,
                                                                                      v38);
          v41 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_object____ctor_58412372(
            v41,
            SilhouetteOccupiedPanels,
            (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___78148248);
          if ( !v34 )
            sub_1C3E7C0(v42, v43);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v34, 0);
          if ( !transform )
            sub_1C3E7C0(0, v45);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0);
          *(_QWORD *)&v63 = *(_QWORD *)&localPosition.fields.x;
          y = localPosition.fields.y;
          if ( !byte_4C506A1 )
          {
            v46 = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
            byte_4C506A1 = 1;
          }
          if ( !v41 )
            sub_1C3E7C0(v46, v47);
          v48.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v64,
            v41,
            (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v65 = v64;
          v49 = v63;
          *((float *)&v49 + 1) = y;
          while ( 1 )
          {
            v63 = v49;
            v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v65,
                    (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v50 )
              break;
            if ( !v65.fields._current )
              sub_1C3E7C0(v50, v51);
            v53.n64_u64[0] = *(unsigned __int64 *)((char *)&v65.fields._current[1].monitor + 4);
            *(int8x8_t *)&v52 = vbsl_s8(vcgt_f32(v53, *(float32x2_t *)&v63), *(int8x8_t *)&v63, v53);
            v54.n64_u64[0] = vadd_f32(
                               *(float32x2_t *)&v52,
                               vsub_f32(vadd_f32(v48, *(float32x2_t *)&v63), *(float32x2_t *)&v52)).n64_u64[0];
            v48.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v54, v53), v54, v53), *(float32x2_t *)&v52).n64_u64[0];
            v49 = v52;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v65,
            (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_1C3E7C0(0, v55);
          v56 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0);
          if ( !v56 )
            sub_1C3E7C0(0, v57);
          v58 = vadd_f32(vmul_f32(v48, (float32x2_t)0x3F0000003F000000LL), *(float32x2_t *)&v63).n64_u64[0];
          v59 = HIDWORD(v58);
          v60 = 0;
          UnityEngine_Transform__set_localPosition(v56, *(UnityEngine_Vector3_o *)&v58, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v67,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
}


void SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  SubmarineMapManager_o *v4; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo_38DF7A4 *v7; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v9; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v10; // 0:x0.12
  System_Nullable_Vector3__o v11; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C53731 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Nullable_Vector2___ctor__);
    this = (SubmarineMapManager_o *)sub_1C3E564(&Method_System_Nullable_Vector3___ctor__);
    byte_4C53731 = 1;
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
  System_Nullable_Vector2____ctor(v10, PanelUnitSize_k__BackingField, (const MethodInfo_38DEF24 *)method);
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  *(_QWORD *)&v11.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v11.fields.hasValue = &centerPosition;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v11, zeroVector, v7);
  if ( !spot )
LABEL_9:
    sub_1C3E7C0(this, spot);
  SrcSpotBasePrefab__AdjustBtnColliderArea(spot, v9, centerPosition, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  float y; // v0.s[1]
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v14; // x2
  unsigned __int64 v; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o v16; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

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
          submarineData = v5->fields.submarineData;
          if ( submarineData )
          {
            Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
            if ( Settings_k__BackingField )
            {
              y = v16.fields.y;
              v8 = v16.fields.z + Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.z;
              v = vadd_f32(
                    *(float32x2_t *)&v16.fields.x,
                    *(float32x2_t *)&Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.x).n64_u64[0];
              goto LABEL_14;
            }
          }
        }
      }
    }
LABEL_15:
    sub_1C3E7C0(this, spot);
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
  LODWORD(v17.fields.x) = v;
  v17.fields.z = v8;
  v17.fields.y = *((float *)&v + 1);
  GameObjectExtensions__SetLocalPosition(gameObject, v17, 0);
  SubmarineMapManager__AdjustSpotCollider(v5, spot, v14);
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
  const MethodInfo *v16; // x3
  System_Nullable_float__o p_messagePosY; // x0
  System_Nullable_float__o v18; // x5
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C5372C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_float___ctor__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__);
    sub_1C3E564(&SubmarineMapManager___c_TypeInfo);
    sub_1C3E564(&StringLiteral_6939/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/);
    byte_4C5372C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  eventId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !LODWORD(v7->max_length) )
    goto LABEL_22;
  if ( !eventId )
    goto LABEL_21;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)eventId, v7->m_Items[0], 143, 0) )
    return;
  eventId = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LODWORD(v7->max_length) )
LABEL_22:
    sub_1C3E7C8(eventId, v6);
  v8 = (CommonUI_o *)eventId;
  v9 = v7->m_Items[0];
  v10 = SubmarineMapManager___c_TypeInfo;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v10 = SubmarineMapManager___c_TypeInfo;
  }
  _9__49_0 = v10->static_fields->__9__49_0;
  v12 = (System_String_o *)StringLiteral_6939/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__49_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SubmarineMapManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v13, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v15, v16);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_38DD2E0 *)Method_System_Nullable_float___ctor__);
  if ( !v8 )
LABEL_21:
    sub_1C3E7C0(eventId, v6);
  v18 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v8, v9, v12, _9__49_0, 0, v18, 0.0, 0);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  SubmarineMapPanelData_o *v13; // x1
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  __int64 v21; // x21
  System_Delegate_o **v22; // x22
  System_Delegate_o *v23; // x23
  SchedulerTaskBase_TaskCallback_o *v24; // x24
  System_Delegate_o *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  SchedulerTaskBase_TaskCallback_c *v28; // x1
  TaskScheduler_o *taskScheduler; // x19
  __int64 v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x0

  if ( (byte_4C53722 & 1) == 0 )
  {
    sub_1C3E564(&SchedulerTaskBase___TypeInfo);
    sub_1C3E564(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager_ClickPanel__);
    sub_1C3E564(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
    byte_4C53722 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass35_0___ctor((SubmarineMapManager___c__DisplayClass35_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = panelData;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)panelData, v10, v11);
  v13 = *(SubmarineMapPanelData_o **)(v5 + 24);
  if ( !v13 || !this->fields.isEnableClickPanel )
    return;
  if ( !v13->fields._IsOpened_k__BackingField || !v13->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v13->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v13, v12);
    v16 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C3E57C(Method_SubmarineMapManager_ClickPanel__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C3E548(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v21 = sub_1C3E7B0(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v21, PanelSelectDelaySecond_k__BackingField, 0);
        if ( v21 )
        {
          v22 = (System_Delegate_o **)(v21 + 32);
          v23 = *(System_Delegate_o **)(v21 + 32);
          v24 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(
            v24,
            (Il2CppObject *)v5,
            Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__,
            0);
          v25 = System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0);
          if ( v25 )
          {
            v28 = SchedulerTaskBase_TaskCallback_TypeInfo;
            if ( (SchedulerTaskBase_TaskCallback_c *)v25->klass != SchedulerTaskBase_TaskCallback_TypeInfo
              || (*v22 = v25, (SchedulerTaskBase_TaskCallback_c *)v25->klass != v28) )
            {
              sub_1C3EA80(v25);
              return;
            }
          }
          else
          {
            *v22 = 0;
          }
          sub_1C3E508((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v25, v26, v27);
          taskScheduler = this->fields.taskScheduler;
          v6 = sub_1C3E60C(SchedulerTaskBase___TypeInfo, 1);
          if ( v6 )
          {
            v30 = v6;
            v31 = sub_1C3E6A0(v21, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
            if ( !v31 )
            {
              v35 = sub_1C3E7E4();
              sub_1C3E68C(v35, 0);
            }
            if ( !*(_DWORD *)(v30 + 24) )
              sub_1C3E7C8(v31, v32);
            *(_QWORD *)(v30 + 32) = v21;
            sub_1C3E508((CGThumbnailListItem_o *)(v30 + 32), v21, v33, v34);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v30, 0);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C3E7C0(v6, v7);
  }
  v14 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C3E57C(Method_SubmarineMapManager_ClickPanel__);
  v15 = (System_Reflection_MethodBase_o *)sub_1C3E548(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C53719 & 1) == 0 )
  {
    sub_1C3E564(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
    byte_4C53719 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
  SubmarineMapManager__CoInitRequest_d__20___ctor((SubmarineMapManager__CoInitRequest_d__20_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 40), (int32_t)finishCallback, v10, v11);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C5371A & 1) == 0 )
  {
    sub_1C3E564(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
    byte_4C5371A = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
  SubmarineMapManager__CoOnAfterSpotCreated_d__23___ctor((SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 40), (int32_t)finishCallback, v10, v11);
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
  const MethodInfo *v11; // x3
  EventMapManagerBase_o *v12; // x0
  const MethodInfo *v13; // x2
  BaseDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v16; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  EventMapManagerBase_o *v21; // x0
  const MethodInfo *v22; // x2
  CGThumbnailListItem_o *p_newScannerDialog; // x20
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v25; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x19
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  EventMapManagerBase_o *v30; // x0
  const MethodInfo *v31; // x2

  if ( (byte_4C53736 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53736 = 1;
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
           (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v5,
                         (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    *p_scanConfirmDialog = (BaseDialog_o *)Component_object;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.scanConfirmDialog, (int32_t)Component_object, v10, v11);
    EventMapManagerBase__LocateDialogToUiRoot(v12, *p_scanConfirmDialog, v13);
  }
  p_selectScannerDialog = (BaseDialog_o **)&this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(selectScannerDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( !v16 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v16->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = UnityEngine_Object__Instantiate_object_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v5 )
      goto LABEL_28;
    v18 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v5,
            (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    *p_selectScannerDialog = (BaseDialog_o *)v18;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectScannerDialog, (int32_t)v18, v19, v20);
    EventMapManagerBase__LocateDialogToUiRoot(v21, *p_selectScannerDialog, v22);
  }
  p_newScannerDialog = (CGThumbnailListItem_o *)&this->fields.newScannerDialog;
  newScannerDialog = (UnityEngine_Object_o *)this->fields.newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = (Il2CppObject *)UnityEngine_Object__op_Equality(newScannerDialog, 0, 0);
  if ( ((unsigned __int8)v5 & 1) != 0 )
  {
    v25 = this->fields.assetManager;
    if ( v25 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v25->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__Instantiate_object_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_3185EB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v5 )
      {
        v27 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v5,
                (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        p_newScannerDialog->klass = (CGThumbnailListItem_c *)v27;
        sub_1C3E508(p_newScannerDialog, (int32_t)v27, v28, v29);
        EventMapManagerBase__LocateDialogToUiRoot(v30, (BaseDialog_o *)p_newScannerDialog->klass, v31);
        return;
      }
    }
LABEL_28:
    sub_1C3E7C0(v5, v6);
  }
}


void SubmarineMapManager__CreateAssetManagerIfNotExists(SubmarineMapManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_4C5371F & 1) == 0 )
  {
    sub_1C3E564(&SubmarineMapAssetManager_TypeInfo);
    byte_4C5371F = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (CGThumbnailListItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_1C3E7B0(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    p_assetManager->klass = (CGThumbnailListItem_c *)v5;
    sub_1C3E508(p_assetManager, (int32_t)v5, v7, v8);
    if ( !p_assetManager->klass )
      sub_1C3E7C0(0, v9);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v9);
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
  const MethodInfo *v9; // x3
  struct SubmarineMapAssetManager_o *v10; // x8
  struct ScrTerminalMap_o *v11; // x9
  Il2CppObject *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v13; // x0
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct SubmarineMapAssetManager_o *v17; // x8
  struct ScrTerminalMap_o *v18; // x9
  Il2CppObject *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v20; // x0
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  v2 = this;
  if ( (byte_4C5372D & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    this = (SubmarineMapManager_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5372D = 1;
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
  v7 = UnityEngine_Object__Instantiate_object__51929056(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v7;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.panelContainer, (int32_t)v7, v8, v9);
  v10 = v2->fields.assetManager;
  if ( !v10 )
    goto LABEL_15;
  v11 = v2->fields.terminalMap;
  if ( !v11 )
    goto LABEL_15;
  this = (SubmarineMapManager_o *)v11->fields.dispRoot;
  if ( !this )
    goto LABEL_15;
  EffectContainerPrefab_k__BackingField = (Il2CppObject *)v10->fields._EffectContainerPrefab_k__BackingField;
  v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v14 = UnityEngine_Object__Instantiate_object__51929056(
          EffectContainerPrefab_k__BackingField,
          v13,
          (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v14;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.effectContainer, (int32_t)v14, v15, v16);
  v17 = v2->fields.assetManager;
  if ( !v17 || (v18 = v2->fields.terminalMap) == 0 || (this = (SubmarineMapManager_o *)v18->fields.dispRoot) == 0 )
LABEL_15:
    sub_1C3E7C0(this, method);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v17->fields._GridLinePrefab_k__BackingField;
  v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v21 = UnityEngine_Object__Instantiate_object__51929056(
          GridLinePrefab_k__BackingField,
          v20,
          (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v21;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.gridLine, (int32_t)v21, v22, v23);
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
  const MethodInfo *v13; // x3
  int32_t current; // w1
  SubmarineSilhouetteData_o **v15; // x22
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  SubmarineSilhouetteData_o *v18; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  SubmarineMapDataManager_o *v24; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v26; // x24
  __int64 v27; // x0
  __int64 v28; // x1
  SubmarineMapManager___c_c *v29; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v31; // x26
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_object__o *v37; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  System_Predicate_object__o *v40; // x26
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v46; // x1
  UnityEngine_Transform_o *v47; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v50; // x0
  __int64 v51; // x1
  __int64 v52; // x0
  const MethodInfo *v53; // x1
  struct SubmarineMapDataManager_o *v54; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x1
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Object_array *v64; // x1
  const MethodInfo *v65; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x1
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5374F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___78148248);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C3E564(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C3E564(&SrcSpotBasePrefab_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    sub_1C3E564(&SubmarineMapManager___c_TypeInfo);
    byte_4C5374F = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0 )
  {
    sub_1C3E7C0(SilhouetteDataList_k__BackingField, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v76 = v75;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v76,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v9 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass101_0___ctor((SubmarineMapManager___c__DisplayClass101_0_o *)v9, 0);
    if ( !v9 )
      sub_1C3E7C0(v10, v11);
    current = (int32_t)v76.fields._current;
    *(_QWORD *)(v9 + 16) = v76.fields._current;
    v15 = (SubmarineSilhouetteData_o **)(v9 + 16);
    sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), current, v12, v13);
    v18 = *(SubmarineSilhouetteData_o **)(v9 + 16);
    if ( !v18 )
      sub_1C3E7C0(0, v16);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v18, beforeClearQuestId, v17);
    if ( HasClearCondQuestId )
    {
      if ( !*v15 )
        sub_1C3E7C0(HasClearCondQuestId, v20);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v15)->fields._ObjectQuestIds_k__BackingField, -1, 0, v21) )
      {
        v24 = this->fields.submarineData;
        if ( !v24 )
          sub_1C3E7C0(0, v22);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v24,
                                                                                    *v15,
                                                                                    v23);
        v26 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_object____ctor_58412372(
          v26,
          SilhouetteOccupiedPanels,
          (const MethodInfo_37B4D54 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___78148248);
        v29 = SubmarineMapManager___c_TypeInfo;
        if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v29 = SubmarineMapManager___c_TypeInfo;
        }
        _9__101_0 = (System_Predicate_object__o *)v29->static_fields->__9__101_0;
        if ( !_9__101_0 )
        {
          if ( !v29->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v29);
            v29 = SubmarineMapManager___c_TypeInfo;
          }
          v31 = (Il2CppObject *)v29->static_fields->__9;
          _9__101_0 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_object____ctor(
            _9__101_0,
            v31,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0);
          static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          static_fields->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__101_0, (int32_t)_9__101_0, v33, v34);
        }
        if ( !v26 )
          sub_1C3E7C0(v27, v28);
        All = System_Collections_Generic_List_object___FindAll(
                v26,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v37 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_1C3E7C0(0, v36);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_1C3E7C0(0, v36);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0);
          v40 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            v40,
            (Il2CppObject *)v9,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0);
          if ( !SpotList )
            sub_1C3E7C0(v41, v42);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v40,
                 (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_1C3E7C0(0, v43);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0);
            if ( !*v15 )
              sub_1C3E7C0(transform, v46);
            v47 = transform;
            SpotId_k__BackingField = (*v15)->fields._SpotId_k__BackingField;
            if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0);
            if ( !v47 )
              sub_1C3E7C0(GobjName, GobjName);
            v50 = UnityEngine_Transform__Find(v47, GobjName, 0);
            if ( !v50 )
              sub_1C3E7C0(0, v51);
            localPosition = UnityEngine_Transform__get_localPosition(v50, 0);
            v54 = this->fields.submarineData;
            if ( !v54 )
              sub_1C3E7C0(v52, v53);
            Settings_k__BackingField = v54->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_1C3E7C0(v52, v53);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         localPosition,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v53);
            v59 = MoveCameraToPositionTask;
            if ( !v5 )
              sub_1C3E7C0(MoveCameraToPositionTask, MoveCameraToPositionTask);
            items = v5->fields._items;
            v61 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v5->fields._version;
            if ( !items )
              sub_1C3E7C0(MoveCameraToPositionTask, MoveCameraToPositionTask);
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                MoveCameraToPositionTask,
                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
            }
            else
            {
              v63 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v63[4] = (Il2CppClass *)v59;
              sub_1C3E508((CGThumbnailListItem_o *)(v63 + 4), (int32_t)v59, v57, v58);
            }
          }
          v64 = System_Collections_Generic_List_object___ToArray(
                  v37,
                  (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v64,
                                                           v65);
          v69 = OpenPanelsAndRevealSpotsTask;
          if ( !v5 )
            sub_1C3E7C0(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v70 = v5->fields._items;
          v71 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
          ++v5->fields._version;
          if ( !v70 )
            sub_1C3E7C0(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v72 = v5->fields._size;
          if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v73 = &v70->obj.klass + v72;
            v5->fields._size = v72 + 1;
            v73[4] = (Il2CppClass *)v69;
            sub_1C3E508((CGThumbnailListItem_o *)(v73 + 4), (int32_t)v69, v67, v68);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v76,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
}


SchedulerTaskBase_o *SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_4C5374C & 1) == 0 )
  {
    sub_1C3E564(&SchedulerTaskNone_TypeInfo);
    byte_4C5374C = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_1C3E7B0(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v4, 0);
  return (SchedulerTaskBase_o *)v4;
}


SchedulerTaskBase_o *SubmarineMapManager__CreateMoveCameraToPositionTask(
        SubmarineMapManager_o *this,
        UnityEngine_Vector3_o destPos,
        float size,
        float second,
        const MethodInfo *method)
{
  const MethodInfo_38DEF24 *v5; // x2
  float y; // s10
  float x; // s11
  MapCamera_o *mapCamera; // x19
  System_Nullable_float__o v12; // x0
  MapCameraPerformance_o *v13; // x0
  System_Nullable_float__o v14; // x4
  SchedulerTaskBase_o *v15; // x20
  System_Nullable_float__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector2__o v18; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector2__o v19; // 0:x0.12
  UnityEngine_Vector2_o v20; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_4C53745 & 1) == 0 )
  {
    sub_1C3E564(&MapCameraPerformance_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_Vector2___ctor__);
    sub_1C3E564(&Method_System_Nullable_float___ctor__);
    byte_4C53745 = 1;
  }
  LODWORD(v19.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v19.fields.hasValue = &v18;
  v20.fields.x = x;
  v20.fields.y = y;
  v18.fields.value.fields.y = 0.0;
  *(_QWORD *)&v18.fields.hasValue = 0;
  System_Nullable_Vector2____ctor(v19, v20, v5);
  v12 = (System_Nullable_float__o)&v17;
  v17 = 0;
  System_Nullable_float____ctor(v12, size, (const MethodInfo_38DD2E0 *)Method_System_Nullable_float___ctor__);
  v13 = (MapCameraPerformance_o *)sub_1C3E7B0(MapCameraPerformance_TypeInfo);
  v14 = v17;
  v15 = (SchedulerTaskBase_o *)v13;
  MapCameraPerformance___ctor(v13, mapCamera, second, v18, v14, 15, 0);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
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
  int v18; // s2 OVERLAPPED
  unsigned __int64 v19; // d0 OVERLAPPED
  int v20; // s1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  SubmarineMapPanelComponent_o *v23; // x22
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  struct SubmarineMapDataManager_o *v28; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v30; // x20
  int32_t v31; // w21
  int32_t v32; // w22
  int v33; // w26
  struct SubmarineMapDataManager_o *v34; // x8
  unsigned __int64 v35; // d0 OVERLAPPED
  int v36; // s1
  int v37; // s2
  struct SubmarineMapAssetManager_o *v38; // x8
  SubmarineMapManager_o *v39; // x23
  Il2CppObject *v40; // x24
  UnityEngine_Transform_o *v41; // x25
  SubmarineMapManager_o *v42; // x24
  int v43; // s2 OVERLAPPED
  unsigned __int64 v44; // d0 OVERLAPPED
  int v45; // s1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  SubmarineMapPanelComponent_o *v48; // x24
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x2

  v2 = this;
  if ( (byte_4C5372F & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C3E564(&PanelUniqueIDUtil_TypeInfo);
    byte_4C5372F = 1;
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
    sub_1C3E7C0(this, method);
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
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__51929056(
                                        v15,
                                        transform,
                                        (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
      if ( !this )
        goto LABEL_54;
      v17 = this;
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !v14 )
        goto LABEL_54;
      if ( !this )
        goto LABEL_54;
      v18 = 0;
      v19 = vadd_f32(
              *(float32x2_t *)(v14 + 16),
              vmul_f32(*(float32x2_t *)(v14 + 24), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
      v20 = HIDWORD(v19);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)(&v18 - 2), 0);
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)v17,
                                        (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
      if ( !this )
        goto LABEL_54;
      v23 = (SubmarineMapPanelComponent_o *)this;
      this->fields.mapCamera = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mapCamera, 0, v21, v22);
      SubmarineMapPanelComponent__SetSize(v23, (ObjectDomain_o *)v14, v24);
      SubmarineMapPanelComponent__SetClosedPanelTexture(v23, (ObjectDomain_o *)v14, v2->fields.closedPanelTexture, v25);
      SubmarineMapPanelComponent__SetClosedPanelVisible(v23, 1, v26);
      if ( v11 == v12 )
        break;
      if ( (unsigned int)++v12 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        sub_1C3E7C8(this, method);
    }
  }
  this = (SubmarineMapManager_o *)v2->fields.submarineData;
  if ( !this )
    goto LABEL_54;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                    (SubmarineMapDataManager_o *)this,
                                    method);
  v28 = v2->fields.submarineData;
  if ( !v28 )
    goto LABEL_54;
  PositionCalculator_k__BackingField = v28->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_54;
  v30 = this;
  v31 = 0;
  while ( v31 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
  {
    v32 = 0;
    v33 = 1;
    while ( v32 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
    {
      if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
      this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v31, v32, (System_Int32_array *)v30, v27);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v34 = v2->fields.submarineData;
        if ( !v34 )
          goto LABEL_54;
        this = (SubmarineMapManager_o *)v34->fields._PositionCalculator_k__BackingField;
        if ( !this )
          goto LABEL_54;
        v35 = vadd_f32(
                (float32x2_t)this->fields.mapInfo,
                vmul_f32(
                  vmul_f32(
                    (float32x2_t)this->fields.m_CachedPtr,
                    vcvt_f32_s32(
                      vsub_s32(
                        (int32x2_t)__PAIR64__(v33, (2 * v31) | 1u),
                        (int32x2_t)this->fields.m_CancellationTokenSource))),
                  (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v36 = HIDWORD(v35);
        v37 = 0;
        this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                          *(UnityEngine_Vector3_o *)&v35,
                                          (SubmarinePanelPositionCalculator_o *)this,
                                          method);
        v38 = v2->fields.assetManager;
        if ( !v38 )
          goto LABEL_54;
        v39 = this;
        this = (SubmarineMapManager_o *)v2->fields.panelContainer;
        if ( !this )
          goto LABEL_54;
        v40 = (Il2CppObject *)v38->fields._PanelPrefab_k__BackingField;
        v41 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__51929056(
                                          v40,
                                          v41,
                                          (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
        if ( !this )
          goto LABEL_54;
        v42 = this;
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !v39 )
          goto LABEL_54;
        if ( !this )
          goto LABEL_54;
        v43 = 0;
        v44 = vadd_f32(
                (float32x2_t)v39->fields.m_CachedPtr,
                vmul_f32((float32x2_t)v39->fields.m_CancellationTokenSource, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v45 = HIDWORD(v44);
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          *(UnityEngine_Vector3_o *)(&v43 - 2),
          0);
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v42,
                                          (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
        if ( !this )
          goto LABEL_54;
        v48 = (SubmarineMapPanelComponent_o *)this;
        this->fields.mapCamera = 0;
        sub_1C3E508((CGThumbnailListItem_o *)&this->fields.mapCamera, 0, v46, v47);
        SubmarineMapPanelComponent__SetSize(v48, (ObjectDomain_o *)v39, v49);
        SubmarineMapPanelComponent__SetClosedPanelTexture(
          v48,
          (ObjectDomain_o *)v39,
          v2->fields.closedPanelTexture,
          v50);
        SubmarineMapPanelComponent__SetClosedPanelVisible(v48, 1, v51);
      }
      v28 = v2->fields.submarineData;
      if ( v28 )
      {
        PositionCalculator_k__BackingField = v28->fields._PositionCalculator_k__BackingField;
        ++v32;
        v33 += 2;
        if ( PositionCalculator_k__BackingField )
          continue;
      }
      goto LABEL_54;
    }
    PositionCalculator_k__BackingField = v28->fields._PositionCalculator_k__BackingField;
    ++v31;
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
  const MethodInfo_38DF7A4 *v8; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v10; // x22
  SchedulerTaskCommonEffect_o *v11; // x0
  SchedulerTaskCommonEffect_o *v12; // x21
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v15; // x24
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Delegate_o *v19; // x8
  SchedulerTaskBase_TaskCallback_c *v20; // x1
  SchedulerTaskBase_array *v21; // x22
  SchedulerTaskWaitTime_o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  SchedulerTaskOrthostichy_o *v27; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v30; // s8
  System_Collections_Generic_List_object__o *v31; // x22
  SchedulerTaskWaitTime_o *v32; // x23
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  const MethodInfo *v39; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v41; // x19
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  SchedulerTaskBase_array *v44; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  SchedulerTaskParallel_o *v47; // x19
  __int64 v49; // x0
  System_Nullable_Vector3__o v50; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v51; // 0:x0.16
  System_Nullable_Vector3__o v52; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C53749 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C3E564(&Method_System_Nullable_Vector3___ctor__);
    sub_1C3E564(&SchedulerTaskBase___TypeInfo);
    sub_1C3E564(&SchedulerTaskCommonEffect_TypeInfo);
    sub_1C3E564(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C3E564(&SchedulerTaskParallel_TypeInfo);
    sub_1C3E564(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapPanelData_OpenPanel__);
    sub_1C3E564(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4C53749 = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0);
  if ( !panelData )
    goto LABEL_32;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  *(_QWORD *)&v51.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  v10 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v51.fields.hasValue = &v50;
  *(_QWORD *)&v50.fields.hasValue = 0;
  *(_QWORD *)&v50.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v51, LocalPosition_k__BackingField, v8);
  v11 = (SchedulerTaskCommonEffect_o *)sub_1C3E7B0(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v52.fields.hasValue = 0;
  *(_QWORD *)&v52.fields.value.fields.y = 0;
  v12 = v11;
  SchedulerTaskCommonEffect___ctor_44359008(
    v11,
    v10,
    effectScanedPanelObjPool,
    v50,
    v52,
    (System_Nullable_Vector3__o)0,
    1,
    0);
  if ( !v12 )
    goto LABEL_32;
  p_StartCallback = (System_Delegate_o **)&v12->fields.StartCallback;
  StartCallback = (System_Delegate_o *)v12->fields.StartCallback;
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v15, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0);
  v16 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v15, 0);
  v19 = v16;
  if ( v16 )
  {
    v20 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *p_StartCallback = v16;
      if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == v20 )
        goto LABEL_11;
    }
    sub_1C3EA80(v16);
  }
  *p_StartCallback = v19;
LABEL_11:
  sub_1C3E508((CGThumbnailListItem_o *)&v12->fields.StartCallback, (int32_t)v19, v17, v18);
  v21 = (SchedulerTaskBase_array *)sub_1C3E60C(SchedulerTaskBase___TypeInfo, 2);
  v22 = (SchedulerTaskWaitTime_o *)sub_1C3E7B0(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v22, waitTime, 0);
  if ( !v21 )
    goto LABEL_32;
  if ( v22 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C3E6A0(v22, v21->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !LODWORD(v21->max_length) )
    goto LABEL_33;
  v21->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_1C3E508((CGThumbnailListItem_o *)v21->m_Items, (int32_t)v22, v23, v24);
  effectContainer = (UnityEngine_GameObject_o *)sub_1C3E6A0(v12, v21->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( LODWORD(v21->max_length) <= 1 )
    goto LABEL_33;
  v21->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v21->m_Items[1], (int32_t)v12, v25, v26);
  v27 = (SchedulerTaskOrthostichy_o *)sub_1C3E7B0(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v27, v21, 0);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v30 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v31 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v32 = (SchedulerTaskWaitTime_o *)sub_1C3E7B0(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v32, v30, 0);
  if ( !v31 )
    goto LABEL_32;
  items = v31->fields._items;
  v36 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v31->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v31->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v31,
      (Il2CppObject *)v32,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v31->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v32;
    sub_1C3E508((CGThumbnailListItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v39);
  System_Collections_Generic_List_object___AddRange(
    v31,
    RevealSpotOnPanelTasks,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v41 = (SchedulerTaskOrthostichy_o *)sub_1C3E7B0(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor_44361864(v41, (System_Collections_Generic_List_SchedulerTaskBase__o *)v31, 0);
  effectContainer = (UnityEngine_GameObject_o *)sub_1C3E60C(SchedulerTaskBase___TypeInfo, 2);
  if ( !effectContainer )
LABEL_32:
    sub_1C3E7C0(effectContainer, panelData);
  v44 = (SchedulerTaskBase_array *)effectContainer;
  if ( v27 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C3E6A0(v27, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !LODWORD(v44->max_length) )
    goto LABEL_33;
  v44->m_Items[0] = (SchedulerTaskBase_o *)v27;
  sub_1C3E508((CGThumbnailListItem_o *)v44->m_Items, (int32_t)v27, v42, v43);
  if ( v41 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C3E6A0(v41, v44->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v49 = sub_1C3E7E4();
      sub_1C3E68C(v49, 0);
    }
  }
  if ( LODWORD(v44->max_length) <= 1 )
LABEL_33:
    sub_1C3E7C8(effectContainer, panelData);
  v44->m_Items[1] = (SchedulerTaskBase_o *)v41;
  sub_1C3E508((CGThumbnailListItem_o *)&v44->m_Items[1], (int32_t)v41, v45, v46);
  v47 = (SchedulerTaskParallel_o *)sub_1C3E7B0(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v47, v44, 0);
  return (SchedulerTaskBase_o *)v47;
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
  const MethodInfo *v12; // x3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *v16; // x1
  Il2CppClass **v17; // x0
  SchedulerTaskParallel_o *v18; // x19

  if ( (byte_4C5374A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C3E564(&SchedulerTaskParallel_TypeInfo);
    byte_4C5374A = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  max_length = panelDataArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_1C3E7C8(OpenPanelAndRevealSpotTask, v7);
      OpenPanelAndRevealSpotTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                     this,
                                                     panelDataArray->m_Items[v10],
                                                     0.0,
                                                     v8);
      if ( !v5 )
        break;
      items = v5->fields._items;
      v14 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      v16 = OpenPanelAndRevealSpotTask;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          OpenPanelAndRevealSpotTask,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v16;
        sub_1C3E508((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
      }
      LODWORD(max_length) = panelDataArray->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C3E7C0(OpenPanelAndRevealSpotTask, v7);
  }
LABEL_13:
  v18 = (SchedulerTaskParallel_o *)sub_1C3E7B0(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_44362896(v18, (System_Collections_Generic_List_SchedulerTaskBase__o *)v5, 0);
  return (SchedulerTaskBase_o *)v18;
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
  const MethodInfo *v28; // x3
  ObjectDomain_o *v29; // x23
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Action_object__o *v34; // x21
  const MethodInfo *v35; // x2
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C5372E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_SubmarineMapPanelData__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C3E564(&Method_SubmarineMapManager_ClickPanel__);
    byte_4C5372E = 1;
  }
  memset(&v37, 0, sizeof(v37));
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v36,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v37 = v36;
            while ( 1 )
            {
              v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v37,
                     (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v8 )
                break;
              v10 = v2->fields.assetManager;
              if ( !v10 )
                sub_1C3E7C0(v8, v9);
              v11 = v2->fields.panelContainer;
              if ( !v11 )
                sub_1C3E7C0(0, v9);
              current = v37.fields._current;
              v13 = (Il2CppObject *)v10->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v11, 0);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v15 = UnityEngine_Object__Instantiate_object__51929056(
                      v13,
                      transform,
                      (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
              v17 = (UnityEngine_GameObject_o *)v15;
              if ( !v15 )
                sub_1C3E7C0(0, v16);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v15,
                                   (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v20 = v2->fields.submarineData;
              if ( !v20 )
                sub_1C3E7C0(Component_object, v19);
              if ( !current )
                sub_1C3E7C0(Component_object, v19);
              v21 = Component_object;
              PositionCalculator_k__BackingField = v20->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_1C3E7C0(0, v19);
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
                                    v19);
              if ( !v21 )
                sub_1C3E7C0(ClosedPanelDomain, v26);
              v29 = ClosedPanelDomain;
              v21[3].monitor = 0;
              sub_1C3E508((CGThumbnailListItem_o *)&v21[3].monitor, 0, v27, v28);
              v39.fields.z = 0.0;
              v39.fields.x = v23;
              v39.fields.y = v24;
              GameObjectExtensions__SetLocalPosition(v17, v39, 0);
              SubmarineMapPanelComponent__SetSize((SubmarineMapPanelComponent_o *)v21, v29, v30);
              SubmarineMapPanelComponent__SetClosedPanelTexture(
                (SubmarineMapPanelComponent_o *)v21,
                v29,
                v2->fields.closedPanelTexture,
                v31);
              current[3].klass = (Il2CppClass *)v21;
              sub_1C3E508((CGThumbnailListItem_o *)&current[3], (int32_t)v21, v32, v33);
              v34 = (System_Action_object__o *)sub_1C3E7B0(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_object____ctor(
                v34,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                0);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v34,
                v35);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v37,
              (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_1C3E7C0(this, method);
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

  if ( (byte_4C5374D & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5374D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
        sub_1C3E7C8(Children, v5);
      Children = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
          (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
    }
LABEL_15:
    sub_1C3E7C0(Children, v5);
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
  const MethodInfo *v9; // x3
  __int64 v10; // x21
  System_Collections_Generic_List_object__o *v11; // x20
  SchedulerTaskNone_o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Collections_Generic_List_object__o *SpotList; // x23
  System_Predicate_object__o *v20; // x24
  __int64 v21; // x8
  UnityEngine_Transform_o *v22; // x21
  int32_t v23; // w22
  UnityEngine_Object_o *v24; // x21
  Il2CppObject *Component_object; // x1
  const MethodInfo *v27; // x2

  if ( (byte_4C53748 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1C3E564(&SchedulerTaskNone_TypeInfo);
    sub_1C3E564(&SrcSpotBasePrefab_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
    byte_4C53748 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass94_0___ctor((SubmarineMapManager___c__DisplayClass94_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = panelData;
  v10 = v5 + 16;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)panelData, v8, v9);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v12 = (SchedulerTaskNone_o *)sub_1C3E7B0(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v12, 0);
  if ( !v11 )
    goto LABEL_25;
  items = v11->fields._items;
  v16 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v11->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  if ( !*(_QWORD *)v10 || *(int *)(*(_QWORD *)v10 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0);
  v20 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_MapControl_SpotInfo__TypeInfo);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__,
    0);
  if ( !SpotList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Find(
          SpotList,
          (System_Predicate_T__o *)v20,
          (const MethodInfo_37B5AC8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_25;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0);
  v21 = *(_QWORD *)v10;
  if ( !*(_QWORD *)v10 )
    goto LABEL_25;
  v22 = (UnityEngine_Transform_o *)mapInfo;
  v23 = *(_DWORD *)(v21 + 40);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v23, 0);
  if ( !v22 )
    goto LABEL_25;
  v24 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v22, (System_String_o *)mapInfo, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v24, 0, 0);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
  if ( !v24 )
LABEL_25:
    sub_1C3E7C0(mapInfo, v7);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v24,
                       (const MethodInfo_30F0240 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v27);
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
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  __int64 v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4C5374E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&SubmarineLightenSpotPerformance_TypeInfo);
    sub_1C3E564(&SubmarineRevealSpotPerformance_TypeInfo);
    byte_4C5374E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v9);
  v10 = sub_1C3E7B0(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v10, 0);
  *(_QWORD *)(v10 + 48) = spot;
  sub_1C3E508((CGThumbnailListItem_o *)(v10 + 48), (int32_t)spot, v11, v12);
  if ( !v5 )
    goto LABEL_20;
  items = v5->fields._items;
  v16 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v10,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v10;
    sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), v10, v13, v14);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  v19 = sub_1C3E7B0(SubmarineLightenSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v19, 0);
  *(_QWORD *)(v19 + 48) = spot;
  sub_1C3E508((CGThumbnailListItem_o *)(v19 + 48), (int32_t)spot, v20, v21);
  v24 = v5->fields._items;
  v25 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v5->fields._version;
  if ( !v24 )
LABEL_20:
    sub_1C3E7C0(mMapCtrl_SpotInfo, v7);
  v26 = v5->fields._size;
  if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v19,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v5->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v19;
    sub_1C3E508((CGThumbnailListItem_o *)(v27 + 4), v19, v22, v23);
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
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v25; // x23
  struct SubmarineMapManager___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w23
  SubmarineMapManager___c__DisplayClass97_0_o *v30; // x22
  int v31; // w29
  float v32; // s9
  System_Predicate_object__o *v33; // x23
  System_Collections_Generic_List_T__o *v34; // x23
  System_Collections_Generic_List_object__o *v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v40; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v42; // x2
  float v43; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  Il2CppObject *v47; // x1
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v53; // w8
  SchedulerTaskParallel_o *v54; // x19
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4C5374B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_1C3E564(&System_Func_SubmarineScanEvent__int__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C3E564(&System_Predicate_SubmarineScanEvent__TypeInfo);
    sub_1C3E564(&SchedulerTaskParallel_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__);
    sub_1C3E564(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
    sub_1C3E564(&SubmarineMapManager___c_TypeInfo);
    byte_4C5374B = 1;
  }
  memset(&v57, 0, sizeof(v57));
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
    _9__97_0 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_object____ctor(_9__97_0, v17, Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__, 0);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__97_0, (int32_t)_9__97_0, v19, v20);
  }
  if ( !v15 )
    goto LABEL_48;
  All = System_Collections_Generic_List_object___FindAll(
          v15,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v22 = SubmarineMapManager___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v22 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_1 = (System_Func_object__int__o *)v22->static_fields->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = SubmarineMapManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_object__int____ctor(_9__97_1, v25, Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__, 0);
    v26 = SubmarineMapManager___c_TypeInfo->static_fields;
    v26->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_1C3E508((CGThumbnailListItem_o *)&v26->__9__97_1, (int32_t)_9__97_1, v27, v28);
  }
  v29 = System_Linq_Enumerable__Max_object_(
          v23,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_3127E7C *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v30 = (SubmarineMapManager___c__DisplayClass97_0_o *)sub_1C3E7B0(SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass97_0___ctor(v30, 0);
  if ( !v30 )
LABEL_48:
    sub_1C3E7C0(Settings_k__BackingField, v9);
  v31 = v29 + 1;
  v30->fields.i = 0;
  if ( v29 + 1 >= 1 )
  {
    v32 = 0.0;
    do
    {
      v33 = (System_Predicate_object__o *)sub_1C3E7B0(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_object____ctor(
        v33,
        (Il2CppObject *)v30,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0);
      if ( !v23 )
        goto LABEL_48;
      v34 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v23,
              (System_Predicate_T__o *)v33,
              (const MethodInfo_37B5B70 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v35 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v35,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v34 )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v56,
        (System_Collections_Generic_List_object__o *)v34,
        (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v57 = v56;
      while ( 1 )
      {
        v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v57,
                (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v36 )
          break;
        current = v57.fields._current;
        if ( !v57.fields._current )
          sub_1C3E7C0(v36, v37);
        v40 = this->fields.submarineData;
        if ( !v40 )
          sub_1C3E7C0(0, v37);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v40,
                           (int32_t)v57.fields._current[1].klass,
                           HIDWORD(v57.fields._current[1].klass),
                           v38);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v43,
                                v42);
            v47 = (Il2CppObject *)HitObstractTask;
            if ( !v7 )
              sub_1C3E7C0(HitObstractTask, HitObstractTask);
            items = v7->fields._items;
            v49 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v7->fields._version;
            if ( !items )
              sub_1C3E7C0(HitObstractTask, HitObstractTask);
            size = v7->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v47,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v32,
                                           v42);
            v47 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v7 )
              sub_1C3E7C0(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            items = v7->fields._items;
            v49 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v7->fields._version;
            if ( !items )
              sub_1C3E7C0(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
              goto LABEL_37;
LABEL_32:
            v51 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v51[4] = (Il2CppClass *)v47;
            sub_1C3E508((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v47, v45, v46);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v57,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v32 = ScanOpenPanelInterval + v32;
      v53 = v30->fields.i + 1;
      v30->fields.i = v53;
    }
    while ( v53 < v31 );
  }
  v54 = (SchedulerTaskParallel_o *)sub_1C3E7B0(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_44362896(v54, (System_Collections_Generic_List_SchedulerTaskBase__o *)v7, 0);
  return (SchedulerTaskBase_o *)v54;
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v11; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v14; // d11
  float32x2_t v15; // d9
  int32x2_t v16; // d10
  float32x2_t v17; // d8
  System_Collections_Generic_List_object__o *v18; // x19
  struct SubmarineMapDataManager_o *v19; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v21; // d0 OVERLAPPED
  float v22; // s8
  int v23; // s2
  int v24; // s1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x1
  Il2CppClass **v31; // x0
  const MethodInfo *v32; // x2
  Il2CppObject *ScanAnimObjectPrefab; // x22
  const MethodInfo *v34; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float z; // s9
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v38; // x0
  __int64 v39; // x24
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  SubmarineScannerComponent_o *Component_object; // x22
  float32x2_t v43; // d0
  struct SubmarineMapDataManager_o *v44; // x8
  struct SubmarineSettingsManager_o *v45; // x8
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  __int64 v51; // x1
  Il2CppClass **v52; // x0
  const MethodInfo *v53; // x1
  float JumpStartTime; // s10
  SchedulerTaskWaitTime_o *v55; // x25
  __int64 p_StartCallback; // x25
  CGThumbnailListItem_o *v57; // x26
  System_Delegate_o *StartCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v59; // x27
  System_Delegate_o *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Delegate_o *v63; // x8
  SchedulerTaskBase_TaskCallback_c *v64; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v66; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v67; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v70; // x0
  __int64 v71; // x25
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  System_String_o *v74; // x27
  SchedulerTaskWaitLoadAsset_o *v75; // x26
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x1
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  __int64 v87; // x1
  float v88; // s10
  System_Delegate_o *v89; // x27
  SchedulerTaskBase_TaskCallback_o *v90; // x28
  System_Delegate_o *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  SchedulerTaskBase_TaskCallback_c *v94; // x1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct System_Object_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  Il2CppClass **v100; // x0
  const MethodInfo *v101; // x1
  float SelectedPanelEffecFinishTime; // s10
  System_Delegate_o *v103; // x27
  SchedulerTaskBase_TaskCallback_o *v104; // x28
  System_Delegate_o *v105; // x0
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  SchedulerTaskBase_TaskCallback_c *v108; // x1
  const MethodInfo *v109; // x1
  const MethodInfo_38DEF24 *v110; // x2
  float JumpDuration; // s10
  unsigned __int32 v112; // s0 OVERLAPPED
  float32x2_t v113; // d12
  MapCamera_o *mapCamera; // x21
  float v115; // s1
  System_Nullable_float__o p_size; // x0
  MapCameraPerformance_o *v117; // x0
  System_Nullable_float__o v118; // x4
  SchedulerTaskBase_o *v119; // x26
  UnityEngine_GameObject_o *v120; // x24
  SchedulerTaskMovePerformance_o *v121; // x0
  SchedulerTaskBase_o *v122; // x21
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  SchedulerTaskBase_array *v125; // x24
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  const MethodInfo *v128; // x1
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8
  System_String_o *v132; // x27
  System_Delegate_o *v133; // x27
  SchedulerTaskBase_TaskCallback_o *v134; // x28
  System_Delegate_o *v135; // x0
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  SchedulerTaskBase_TaskCallback_c *v138; // x1
  __int64 v139; // x20
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  __int64 v142; // x24
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  SchedulerTaskOrthostichy_o *v147; // x21
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  SchedulerTaskParallel_o *v150; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v152; // x20
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  struct System_Object_array *v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  Il2CppClass **v158; // x0
  int32_t v159; // w2
  const MethodInfo *v160; // x3
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  struct System_Object_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  Il2CppClass **v170; // x0
  __int64 v172; // x0
  SchedulerTaskWaitTime_o *v173; // [xsp+8h] [xbp-E8h]
  float y; // [xsp+20h] [xbp-D0h]
  float x; // [xsp+30h] [xbp-C0h]
  float32x2_t value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_Vector2__o v179; // 0:x0.12
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v181; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v182; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v183; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v184; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C53747 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C3E564(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    sub_1C3E564(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C3E564(&MapCameraPerformance_TypeInfo);
    sub_1C3E564(&Method_System_Nullable_Vector2___ctor__);
    sub_1C3E564(&Method_System_Nullable_float___ctor__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&SchedulerTaskBase___TypeInfo);
    sub_1C3E564(&SchedulerTaskMovePerformance_TypeInfo);
    sub_1C3E564(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1C3E564(&SchedulerTaskParallel_TypeInfo);
    sub_1C3E564(&SchedulerTaskSimpleAnimation_TypeInfo);
    sub_1C3E564(&SchedulerTaskWaitLoadAsset_TypeInfo);
    sub_1C3E564(&SchedulerTaskWaitTime_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
    byte_4C53747 = 1;
  }
  v7 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass93_0___ctor((SubmarineMapManager___c__DisplayClass93_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_131;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_131;
  if ( !panelData )
    goto LABEL_131;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_131;
  v14.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v15.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v16.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v17.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v19 = this->fields.submarineData;
  if ( !v19 )
    goto LABEL_131;
  Settings_k__BackingField = v19->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_131;
  v21 = vadd_f32(
          v17,
          vmul_f32(
            vmul_f32(v15, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v14, 1u).n64_u64[0] | 0x100000001LL), v16))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v22 = *((float *)&v21 + 1);
  v23 = 0;
  v24 = HIDWORD(v21);
  value.n64_u64[0] = v21;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v21,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v9);
  if ( !v18 )
    goto LABEL_131;
  items = v18->fields._items;
  v28 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_131;
  v29 = v18->fields._size;
  v30 = MoveCameraToPositionTask;
  if ( (unsigned int)v29 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + v29;
    v18->fields._size = v29 + 1;
    v31[4] = (Il2CppClass *)v30;
    sub_1C3E508((CGThumbnailListItem_o *)(v31 + 4), v30, v25, v26);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_131;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_131;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v18;
  if ( !this->fields.assetManager )
    goto LABEL_131;
  ScanAnimObjectPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                           this->fields.assetManager,
                                           *(_DWORD *)(MoveCameraToPositionTask + 56),
                                           v32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanAnimObjectPrefab, 0, 0) )
  {
    HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v34);
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
      x = localPosition.fields.x;
      y = localPosition.fields.y;
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      z = localPosition.fields.z;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v38 = UnityEngine_Object__Instantiate_object__51929056(
              ScanAnimObjectPrefab,
              transform,
              (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
      *(_QWORD *)(v7 + 16) = v38;
      v39 = v7 + 16;
      sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v38, v40, v41);
      v181.fields.y = y;
      v181.fields.x = x;
      v181.fields.z = z;
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v7 + 16), v181, 0);
      MoveCameraToPositionTask = *(_QWORD *)(v7 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0);
      Component_object = (SubmarineScannerComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                          *(UnityEngine_GameObject_o **)v39,
                                                          (const MethodInfo_3152BB4 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_4C506A3 )
      {
        sub_1C3E564(&System_Math_TypeInfo);
        byte_4C506A3 = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !Component_object )
        goto LABEL_131;
      v43.n64_u64[0] = vsub_f32((float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x)), value).n64_u64[0];
      SubmarineScannerComponent__PrepareAnimation(
        Component_object,
        sqrtf((float)(z * z) + vaddv_f32(vmul_f32(v43, v43))),
        v9);
      if ( !Component_object->fields.state )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v18;
      v18 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v18,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v44 = this->fields.submarineData;
      if ( !v44 )
        goto LABEL_131;
      v45 = v44->fields._Settings_k__BackingField;
      if ( !v45 )
        goto LABEL_131;
      v182.fields.y = y;
      v182.fields.x = x;
      v182.fields.z = z;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            v182,
                                            1.0,
                                            v45->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v9);
      if ( !v18 )
        goto LABEL_131;
      v48 = v18->fields._items;
      v49 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v18->fields._version;
      if ( !v48 )
        goto LABEL_131;
      v50 = v18->fields._size;
      v51 = MoveCameraToPositionTask;
      if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &v48->obj.klass + v50;
        v18->fields._size = v50 + 1;
        v52[4] = (Il2CppClass *)v51;
        sub_1C3E508((CGThumbnailListItem_o *)(v52 + 4), v51, v46, v47);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(Component_object, v53);
      v55 = (SchedulerTaskWaitTime_o *)sub_1C3E7B0(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor(v55, JumpStartTime, 0);
      if ( !v55 )
        goto LABEL_131;
      v173 = v55;
      StartCallback = (System_Delegate_o *)v55->fields.StartCallback;
      p_StartCallback = (__int64)&v55->fields.StartCallback;
      v57 = (CGThumbnailListItem_o *)StartCallback;
      v59 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v59,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0);
      v60 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v59, 0);
      v63 = v60;
      if ( v60 )
      {
        v64 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v60->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        *(_QWORD *)p_StartCallback = v60;
        if ( (SchedulerTaskBase_TaskCallback_c *)v60->klass != v64 )
          goto LABEL_103;
      }
      else
      {
        *(_QWORD *)p_StartCallback = 0;
      }
      sub_1C3E508((CGThumbnailListItem_o *)p_StartCallback, (int32_t)v60, v61, v62);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_131;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v66 = this->fields.playingScanVoiceData;
        if ( !v66 )
          goto LABEL_131;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v66->fields.assetName, 0);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v67 = this->fields.playingScanVoiceData;
          if ( !v67 )
            goto LABEL_131;
          assetName = v67->fields.assetName;
          vcName = v67->fields.vcName;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0);
        }
      }
      v70 = GameObjectExtensions__SafeGetComponent_object_(
              *(UnityEngine_GameObject_o **)(v7 + 16),
              (const MethodInfo_3152BB4 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v7 + 24) = v70;
      v71 = v7 + 24;
      sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v70, v72, v73);
      if ( !*(_QWORD *)(v7 + 24) )
        goto LABEL_131;
      v74 = *(System_String_o **)(*(_QWORD *)(v7 + 24) + 56LL);
      v75 = (SchedulerTaskWaitLoadAsset_o *)sub_1C3E7B0(SchedulerTaskWaitLoadAsset_TypeInfo);
      SchedulerTaskWaitLoadAsset___ctor(v75, v74, 0);
      v78 = v18->fields._items;
      v79 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v18->fields._version;
      if ( !v78 )
        goto LABEL_131;
      v80 = v18->fields._size;
      if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v75,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = &v78->obj.klass + v80;
        v18->fields._size = v80 + 1;
        v81[4] = (Il2CppClass *)v75;
        sub_1C3E508((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v75, v76, v77);
      }
      if ( !*(_QWORD *)v71 )
        goto LABEL_131;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v84 = *(_QWORD *)(*(_QWORD *)v71 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v84;
      sub_1C3E508((CGThumbnailListItem_o *)(MoveCameraToPositionTask + 16), v84, v82, v83);
      if ( !*(_QWORD *)v71
        || (MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData) == 0
        || (v87 = *(_QWORD *)(*(_QWORD *)v71 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v87,
            sub_1C3E508((CGThumbnailListItem_o *)(MoveCameraToPositionTask + 24), v87, v85, v86),
            !*(_QWORD *)v71)
        || (v88 = *(float *)(*(_QWORD *)v71 + 32LL),
            p_StartCallback = sub_1C3E7B0(SchedulerTaskWaitTime_TypeInfo),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)p_StartCallback, v88, 0),
            !p_StartCallback) )
      {
LABEL_131:
        sub_1C3E7C0(MoveCameraToPositionTask, v9);
      }
      v57 = (CGThumbnailListItem_o *)(p_StartCallback + 24);
      v89 = *(System_Delegate_o **)(p_StartCallback + 24);
      v90 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v90,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0);
      v91 = System_Delegate__Combine(v89, (System_Delegate_o *)v90, 0);
      v63 = v91;
      if ( v91 )
      {
        v94 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v91->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        v57->klass = (CGThumbnailListItem_c *)v91;
        if ( (SchedulerTaskBase_TaskCallback_c *)v91->klass != v94 )
          goto LABEL_103;
      }
      else
      {
        v57->klass = 0;
      }
      sub_1C3E508((CGThumbnailListItem_o *)(p_StartCallback + 24), (int32_t)v91, v92, v93);
      v97 = v18->fields._items;
      v98 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v18->fields._version;
      if ( !v97 )
        goto LABEL_131;
      v99 = v18->fields._size;
      if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)p_StartCallback,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = &v97->obj.klass + v99;
        v18->fields._size = v99 + 1;
        v100[4] = (Il2CppClass *)p_StartCallback;
        sub_1C3E508((CGThumbnailListItem_o *)(v100 + 4), p_StartCallback, v95, v96);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(Component_object, v101);
      p_StartCallback = sub_1C3E7B0(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)p_StartCallback, SelectedPanelEffecFinishTime, 0);
      if ( !p_StartCallback )
        goto LABEL_131;
      v57 = (CGThumbnailListItem_o *)(p_StartCallback + 32);
      v103 = *(System_Delegate_o **)(p_StartCallback + 32);
      v104 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v104,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0);
      v105 = System_Delegate__Combine(v103, (System_Delegate_o *)v104, 0);
      v63 = v105;
      if ( v105 )
      {
        v108 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v105->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        v57->klass = (CGThumbnailListItem_c *)v105;
        if ( (SchedulerTaskBase_TaskCallback_c *)v105->klass != v108 )
          goto LABEL_103;
      }
      else
      {
        v57->klass = 0;
      }
      sub_1C3E508((CGThumbnailListItem_o *)(p_StartCallback + 32), (int32_t)v105, v106, v107);
      *(_BYTE *)(p_StartCallback + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration(Component_object, v109);
      if ( !byte_4C506A3 )
      {
        sub_1C3E564(&System_Math_TypeInfo);
        byte_4C506A3 = 1;
      }
      v112 = value.n64_u32[0];
      v113.n64_u64[0] = vsub_f32(value, (float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x))).n64_u64[0];
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v112 = value.n64_u32[0];
      }
      mapCamera = this->fields.mapCamera;
      position.fields.value.fields.y = 0.0;
      LODWORD(v179.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&v179.fields.hasValue = &position;
      v115 = v22;
      *(_QWORD *)&position.fields.hasValue = 0;
      System_Nullable_Vector2____ctor(v179, *(UnityEngine_Vector2_o *)&v112, v110);
      p_size = (System_Nullable_float__o)&size;
      size = 0;
      System_Nullable_float____ctor(p_size, 1.0, (const MethodInfo_38DD2E0 *)Method_System_Nullable_float___ctor__);
      v117 = (MapCameraPerformance_o *)sub_1C3E7B0(MapCameraPerformance_TypeInfo);
      v118 = size;
      v119 = (SchedulerTaskBase_o *)v117;
      MapCameraPerformance___ctor(v117, mapCamera, JumpDuration, position, v118, 0, 0);
      v120 = *(UnityEngine_GameObject_o **)v39;
      v121 = (SchedulerTaskMovePerformance_o *)sub_1C3E7B0(SchedulerTaskMovePerformance_TypeInfo);
      v184.fields.z = 0.0;
      v183.fields.y = y;
      v183.fields.x = x;
      v183.fields.z = z;
      LODWORD(v184.fields.x) = value.n64_u32[0];
      v184.fields.y = v22;
      v122 = (SchedulerTaskBase_o *)v121;
      SchedulerTaskMovePerformance___ctor(
        v121,
        v120,
        v183,
        v184,
        sqrtf((float)((float)(0.0 - z) * (float)(0.0 - z)) + vaddv_f32(vmul_f32(v113, v113))) / JumpDuration,
        0,
        0);
      MoveCameraToPositionTask = sub_1C3E60C(SchedulerTaskBase___TypeInfo, 2);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v125 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v119 )
      {
        MoveCameraToPositionTask = sub_1C3E6A0(v119, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_133;
      }
      if ( !LODWORD(v125->max_length) )
        goto LABEL_132;
      v125->m_Items[0] = v119;
      sub_1C3E508((CGThumbnailListItem_o *)v125->m_Items, (int32_t)v119, v123, v124);
      if ( v122 )
      {
        MoveCameraToPositionTask = sub_1C3E6A0(v122, v125->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_133;
      }
      if ( LODWORD(v125->max_length) <= 1 )
        goto LABEL_132;
      v125->m_Items[1] = v122;
      sub_1C3E508((CGThumbnailListItem_o *)&v125->m_Items[1], (int32_t)v122, v126, v127);
      this = (SubmarineMapManager_o *)sub_1C3E7B0(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v125, 0);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(Component_object, v128);
      if ( (byte_4C5368A & 1) == 0 )
      {
        sub_1C3E564(&StringLiteral_1/*""*/);
        byte_4C5368A = 1;
      }
      state = Component_object->fields.state;
      if ( state )
        p_name = &state->fields.name;
      else
        p_name = (System_String_o **)&StringLiteral_1/*""*/;
      v132 = *p_name;
      v39 = sub_1C3E7B0(SchedulerTaskSimpleAnimation_TypeInfo);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v39, AnimationComponent, v132, 0);
      if ( !v39 )
        goto LABEL_131;
      v57 = (CGThumbnailListItem_o *)(v39 + 32);
      v133 = *(System_Delegate_o **)(v39 + 32);
      v134 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v134,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0);
      v135 = System_Delegate__Combine(v133, (System_Delegate_o *)v134, 0);
      v63 = v135;
      if ( !v135 )
        goto LABEL_104;
      v138 = SchedulerTaskBase_TaskCallback_TypeInfo;
      if ( (SchedulerTaskBase_TaskCallback_c *)v135->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v57->klass = (CGThumbnailListItem_c *)v135;
        if ( (SchedulerTaskBase_TaskCallback_c *)v135->klass == v138 )
        {
LABEL_105:
          sub_1C3E508(v57, (int32_t)v63, v136, v137);
          MoveCameraToPositionTask = sub_1C3E60C(SchedulerTaskBase___TypeInfo, 2);
          if ( !MoveCameraToPositionTask )
            goto LABEL_131;
          v139 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_1C3E6A0(v39, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v139 + 24) )
              goto LABEL_132;
            *(_QWORD *)(v139 + 32) = v39;
            sub_1C3E508((CGThumbnailListItem_o *)(v139 + 32), v39, v140, v141);
            MoveCameraToPositionTask = sub_1C3E60C(SchedulerTaskBase___TypeInfo, 2);
            if ( !MoveCameraToPositionTask )
              goto LABEL_131;
            v142 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_1C3E6A0(v173, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v142 + 24) )
                goto LABEL_132;
              *(_QWORD *)(v142 + 32) = v173;
              sub_1C3E508((CGThumbnailListItem_o *)(v142 + 32), (int32_t)v173, v143, v144);
              if ( !this || (MoveCameraToPositionTask = sub_1C3E6A0(this, *(_QWORD *)(*(_QWORD *)v142 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v142 + 24) <= 1u )
                  goto LABEL_132;
                *(_QWORD *)(v142 + 40) = this;
                sub_1C3E508((CGThumbnailListItem_o *)(v142 + 40), (int32_t)this, v145, v146);
                v147 = (SchedulerTaskOrthostichy_o *)sub_1C3E7B0(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v147, (SchedulerTaskBase_array *)v142, 0);
                if ( !v147 || (MoveCameraToPositionTask = sub_1C3E6A0(v147, *(_QWORD *)(*(_QWORD *)v139 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v139 + 24) > 1u )
                  {
                    *(_QWORD *)(v139 + 40) = v147;
                    sub_1C3E508((CGThumbnailListItem_o *)(v139 + 40), (int32_t)v147, v148, v149);
                    v150 = (SchedulerTaskParallel_o *)sub_1C3E7B0(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v150, (SchedulerTaskBase_array *)v139, 0);
                    if ( v150 )
                    {
                      v150->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(Component_object, v9);
                      v152 = (SchedulerTaskWaitTime_o *)sub_1C3E7B0(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v152, TimeToStartOpenPanel, 0);
                      v155 = v18->fields._items;
                      v156 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v18->fields._version;
                      if ( v155 )
                      {
                        v157 = v18->fields._size;
                        if ( (unsigned int)v157 >= LODWORD(v155->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v18,
                            (Il2CppObject *)p_StartCallback,
                            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v158 = &v155->obj.klass + v157;
                          v18->fields._size = v157 + 1;
                          v158[4] = (Il2CppClass *)p_StartCallback;
                          sub_1C3E508((CGThumbnailListItem_o *)(v158 + 4), p_StartCallback, v153, v154);
                        }
                        v161 = v18->fields._items;
                        v162 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v18->fields._version;
                        if ( v161 )
                        {
                          v163 = v18->fields._size;
                          if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v18,
                              (Il2CppObject *)v150,
                              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v164 = &v161->obj.klass + v163;
                            v18->fields._size = v163 + 1;
                            v164[4] = (Il2CppClass *)v150;
                            sub_1C3E508((CGThumbnailListItem_o *)(v164 + 4), (int32_t)v150, v159, v160);
                          }
                          v167 = v18->fields._items;
                          v168 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v18->fields._version;
                          if ( v167 )
                          {
                            v169 = v18->fields._size;
                            if ( (unsigned int)v169 >= LODWORD(v167->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v18,
                                (Il2CppObject *)v152,
                                *(const MethodInfo_37B5460 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v170 = &v167->obj.klass + v169;
                              v18->fields._size = v169 + 1;
                              v170[4] = (Il2CppClass *)v152;
                              sub_1C3E508((CGThumbnailListItem_o *)(v170 + 4), (int32_t)v152, v165, v166);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v18;
                          }
                        }
                      }
                    }
                    goto LABEL_131;
                  }
LABEL_132:
                  sub_1C3E7C8(MoveCameraToPositionTask, v9);
                }
              }
            }
          }
LABEL_133:
          v172 = sub_1C3E7E4();
          sub_1C3E68C(v172, 0);
        }
      }
LABEL_103:
      sub_1C3EA80(v63);
LABEL_104:
      v57->klass = (CGThumbnailListItem_c *)v63;
      goto LABEL_105;
    }
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v18;
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v18; // x3
  struct SubmarineMapDataManager_o *v19; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Object_array *v25; // x0
  const MethodInfo *v26; // x2
  int32x2_t v27; // d1
  struct SubmarineMapDataManager_o *v28; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *v30; // x22
  unsigned __int64 v31; // d0 OVERLAPPED
  float v32; // s2
  int v33; // s1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  SchedulerTaskBase_o *v39; // x1
  Il2CppClass **v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4C53750 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    byte_4C53750 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v11 )
      break;
    current = v49.fields._current;
    if ( !v49.fields._current )
      sub_1C3E7C0(v11, v12);
    if ( !LOBYTE(v49.fields._current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v49.fields._current,
                                          -1,
                                          v13);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v19 = this->fields.submarineData;
        if ( !v19 )
          sub_1C3E7C0(IsPanelSatisfyCommonReleaseCond, v16);
        PositionCalculator_k__BackingField = (float32x2_t *)v19->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_1C3E7C0(IsPanelSatisfyCommonReleaseCond, v16);
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
          sub_1C3E7C0(IsPanelSatisfyCommonReleaseCond, v16);
        items = v7->fields._items;
        v22 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1C3E7C0(IsPanelSatisfyCommonReleaseCond, v16);
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            current,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v24[4] = (Il2CppClass *)current;
          sub_1C3E508((CGThumbnailListItem_o *)(v24 + 4), (int32_t)current, v17, v18);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v7 )
    goto LABEL_34;
  if ( v7->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
  v25 = System_Collections_Generic_List_object___ToArray(
          v7,
          (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                    this,
                                    (SubmarineMapPanelData_array *)v25,
                                    v26);
  v28 = this->fields.submarineData;
  if ( !v28 )
    goto LABEL_34;
  Settings_k__BackingField = v28->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_34;
  v30 = (Il2CppObject *)PanelDataList_k__BackingField;
  v27.n64_f32[0] = (float)v7->fields._size;
  v31 = vdiv_f32(v5, vdup_lane_s32(v27, 0)).n64_u64[0];
  v32 = z / v27.n64_f32[0];
  v33 = HIDWORD(v31);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                    this,
                                    *(UnityEngine_Vector3_o *)&v31,
                                    1.0,
                                    Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                    v9);
  if ( !v3 )
    goto LABEL_34;
  v36 = v3->fields._items;
  v37 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v3->fields._version;
  if ( !v36 )
    goto LABEL_34;
  v38 = v3->fields._size;
  v39 = PanelDataList_k__BackingField;
  if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)PanelDataList_k__BackingField,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &v36->obj.klass + v38;
    v3->fields._size = v38 + 1;
    v40[4] = (Il2CppClass *)v39;
    sub_1C3E508((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v39, v34, v35);
  }
  v43 = v3->fields._items;
  v44 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v3->fields._version;
  if ( !v43 )
LABEL_34:
    sub_1C3E7C0(PanelDataList_k__BackingField, v9);
  v45 = v3->fields._size;
  if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      v30,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v3->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)v30;
    sub_1C3E508((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v30, v41, v42);
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
  const MethodInfo *v9; // x3
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CGThumbnailListItem_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v16; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C5373A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5373A = 1;
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
    UnityEngine_Object__Destroy_71341564(gameObject, 0);
    *p_scanConfirmDialog = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.scanConfirmDialog, 0, v8, v9);
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
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(v12, 0);
    *p_selectScannerDialog = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selectScannerDialog, 0, v13, v14);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (CGThumbnailListItem_o *)&this->fields.newScannerDialog;
  v16 = (UnityEngine_Object_o *)newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v18, 0);
      p_newScannerDialog->klass = 0;
      sub_1C3E508(p_newScannerDialog, 0, v19, v20);
      return;
    }
LABEL_25:
    sub_1C3E7C0(klass, v5);
  }
}


void SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C5371D & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5371D = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71341564(panelContainer, 0);
  UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)this->fields.gridLine, 0);
  UnityEngine_Object__Destroy_71341564((UnityEngine_Object_o *)this->fields.effectContainer, 0);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  const MethodInfo *v13; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v16; // w1
  __int64 v17; // x22
  SchedulerTaskBase_TaskCallback_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4C53721 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1C3E564(&SchedulerTaskNone_TypeInfo);
    sub_1C3E564(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
    byte_4C53721 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass34_0___ctor((SubmarineMapManager___c__DisplayClass34_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_18;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_18;
  v16 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v16,
                                                                                 v13);
  if ( !v12 )
    goto LABEL_18;
  System_Collections_Generic_List_object___AddRange(
    v12,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v17 = sub_1C3E7B0(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v17, 0);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 32) = v18;
  sub_1C3E508((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v18, v19, v20);
  items = v12->fields._items;
  v24 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v12->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v17,
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v17;
    sub_1C3E508((CGThumbnailListItem_o *)(v26 + 4), v17, v21, v22);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_1C3E7C0(HideEnemyOccupiedPanelTasks, v7);
  TaskScheduler__AddTask_44368080(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v12,
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
    sub_1C3E7C0(assetManager, v6);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v7);
}


void SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.submarineData = 0;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.submarineData, 0, v2, v3);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, v5);
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

  if ( (byte_4C53733 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53733 = 1;
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
      sub_1C3E7C0(HasChild, v4);
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
          sub_1C3E7C8(HasChild, v4);
        HasChild = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
  if ( (byte_4C53720 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    this = (SubmarineMapManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    byte_4C53720 = 1;
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
    sub_1C3E7C0(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C53740 & 1) == 0 )
  {
    sub_1C3E564(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
    byte_4C53740 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_31AC524 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C53744 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53744 = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = (CGThumbnailListItem_o *)&this->fields.scanRangeNotificator;
  v4 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_scanRangeNotificator->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71341564(klass, 0);
    p_scanRangeNotificator->klass = 0;
    sub_1C3E508(p_scanRangeNotificator, 0, v7, v8);
  }
}


void SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C5373E & 1) == 0 )
  {
    sub_1C3E564(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
    byte_4C5373E = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_31AC524 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C53742 & 1) == 0 )
  {
    sub_1C3E564(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
    byte_4C53742 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_31AC524 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v5; // x22
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  TaskScheduler_o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  SubmarineMapManager_PlayingScanVoiceData_o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C53717 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_bool__TypeInfo);
    sub_1C3E564(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
    sub_1C3E564(&SubmarineMapDataManager_TypeInfo);
    sub_1C3E564(&TaskScheduler_TypeInfo);
    byte_4C53717 = 1;
  }
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v5 = (SubmarineMapDataManager_o *)sub_1C3E7B0(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v5, mapInfo, warInfo, v6);
  this->fields.submarineData = v5;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.submarineData, (int32_t)v5, v7, v8);
  v9 = (TaskScheduler_o *)sub_1C3E7B0(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v9, 0);
  this->fields.taskScheduler = v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.taskScheduler, (int32_t)v9, v10, v11);
  taskScheduler = this->fields.taskScheduler;
  v13 = (System_Action_bool__o *)sub_1C3E7B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, (Il2CppObject *)this, (intptr_t)this->klass->vtable._30_SetAllTouchBlock.method, 0);
  if ( !taskScheduler )
    sub_1C3E7C0(v14, v15);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v13;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v13,
    v16,
    v17);
  v18 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_1C3E7B0(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v18, 0);
  this->fields.playingScanVoiceData = v18;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.playingScanVoiceData, (int32_t)v18, v19, v20);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x19

  if ( (byte_4C53718 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
    byte_4C53718 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass19_0___ctor((SubmarineMapManager___c__DisplayClass19_0_o *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)v5, Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v12, 5, 1, 0);
}


void SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct SubmarineMapAssetManager_o *v8; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct SubmarineMapAssetManager_o *v13; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct SubmarineMapAssetManager_o *v18; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  v2 = this;
  if ( (byte_4C5373B & 1) == 0 )
  {
    sub_1C3E564(&Method_ComponentPool_CommonEffectComponent__Preload__);
    sub_1C3E564(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__);
    sub_1C3E564(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
    sub_1C3E564(&Method_ComponentPool_CommonEffectComponent___ctor__);
    sub_1C3E564(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
    sub_1C3E564(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
    sub_1C3E564(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
    sub_1C3E564(&ComponentPool_CommonEffectComponent__TypeInfo);
    sub_1C3E564(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C3E564(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
    byte_4C5373B = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v5 = (ComponentPool_T__o *)sub_1C3E7B0(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_object____ctor(
    v5,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_338E0F8 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v5;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.effectScanedPanelObjPool, (int32_t)v5, v6, v7);
  this = (SubmarineMapManager_o *)v2->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_object___Preload(
    (ComponentPool_T__o *)this,
    9,
    (const MethodInfo_338E1BC *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v8 = v2->fields.assetManager;
  if ( !v8 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v8->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v10 = (ComponentPool_T__o *)sub_1C3E7B0(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v10,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_338E0F8 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v10;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.effectScanObstaclePanelObjPool, (int32_t)v10, v11, v12);
  v13 = v2->fields.assetManager;
  if ( !v13 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v13->fields._EffectScannablePanelPrafab_k__BackingField;
  v15 = (ComponentPool_T__o *)sub_1C3E7B0(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v15,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_338E0F8 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v15;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.effectScannablePanelObjPool, (int32_t)v15, v16, v17);
  this = (SubmarineMapManager_o *)v2->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_object___Preload(
          (ComponentPool_T__o *)this,
          50,
          (const MethodInfo_338E1BC *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v18 = v2->fields.assetManager) == 0) )
  {
LABEL_10:
    sub_1C3E7C0(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v18->fields._EffectSelectedPanelPrefab_k__BackingField;
  v20 = (ComponentPool_T__o *)sub_1C3E7B0(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v20,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_338E0F8 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v20;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.effectSelectedPanelObjPool, (int32_t)v20, v21, v22);
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
    sub_1C3E7C0(submarineData, finishCallback);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v4, 0);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4C5371B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
    byte_4C5371B = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass25_0___ctor((SubmarineMapManager___c__DisplayClass25_0_o *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  v12 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__,
    0);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v12, v13);
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

  if ( (byte_4C53729 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&Method_SubmarineMapManager__OnEndScan_b__42_0__);
    byte_4C53729 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v6 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0),
        !v6) )
  {
    sub_1C3E7C0(Instance, v4);
  }
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v6, warId, v8, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4C5371C & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__);
    byte_4C5371C = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v4 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
  const MethodInfo *v11; // x3
  __int64 v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  Il2CppObject *Instance; // x22
  const MethodInfo *v17; // x1
  NetworkManager_ResultCallbackFunc_o *v18; // x22
  Il2CppObject *Request_object; // x22
  const MethodInfo *v20; // x1
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_4C53724 & 1) == 0 )
  {
    sub_1C3E564(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
    byte_4C53724 = 1;
  }
  v7 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass37_0___ctor((SubmarineMapManager___c__DisplayClass37_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = panelData;
  v12 = v7 + 32;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)panelData, v13, v14);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))this->klass->vtable._30_SetAllTouchBlock.methodPtr)(
    this,
    1,
    this->klass->vtable._30_SetAllTouchBlock.method);
  SubmarineMapManager__HideScannableEffect(this, v15);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v17);
  if ( !Instance )
    goto LABEL_11;
  clsQuestCheck__SaveEventQuestIdListPlayable((clsQuestCheck_o *)Instance, eventId, 0);
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v18,
                     (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v20);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*(_QWORD *)v12 || !Request_object )
LABEL_11:
    sub_1C3E7C0(eventId, v9);
  EventScanPanelMapRequest__beginRequest(
    (EventScanPanelMapRequest_o *)Request_object,
    eventId,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v12 + 24LL),
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
  const MethodInfo *v15; // x3
  struct System_String_o *value; // x8
  EventSaveData_o *v17; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v20; // x10
  __int64 v21; // x9
  TerminalPramsManager_c *v22; // x0
  EventSaveData_o *v23; // x20
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  TerminalPramsManager_c *v26; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v28; // x0
  System_String_array *ValueByArray; // x0
  int max_length; // w8
  System_String_o **v31; // x9
  System_String_o *v32; // x21
  System_String_o **v33; // x9
  System_String_o *v34; // x20
  System_String_o **v35; // x8
  System_String_o *v36; // x22
  TerminalPramsManager_c *v37; // x0
  struct EventSaveData_o *v38; // x23
  System_String_o *v39; // x24
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  EventSaveData_c *v42; // x8
  CGThumbnailListItem_c *namespaze; // x19
  TerminalPramsManager_c *v44; // x0
  CGThumbnailListItem_o *p_mResultEventPanelRewardInfos; // x0
  System_String_c *v46; // x8
  int v47; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C53725 & 1) == 0 )
  {
    sub_1C3E564(&EventSaveData_TypeInfo);
    sub_1C3E564(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
    sub_1C3E564(&JsonManager_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    sub_1C3E564(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1C3E564(&StringLiteral_22233/*"ng"*/);
    sub_1C3E564(&StringLiteral_15814/*"["*/);
    sub_1C3E564(&StringLiteral_6641/*"False"*/);
    sub_1C3E564(&StringLiteral_16068/*"]"*/);
    sub_1C3E564(&StringLiteral_1122/*"0"*/);
    byte_4C53725 = 1;
  }
  v47 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22233/*"ng"*/, 0) )
  {
    SubmarineMapManager__OnEndScan(this, v9);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v10);
  v11 = (Il2CppObject *)System_String__Concat_63674716(
                          (System_String_o *)StringLiteral_15814/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16068/*"]"*/,
                          0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v11,
                                                                      (const MethodInfo_3168FB8 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v17 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_71:
    sub_1C3E7C8(BeforeEventSubmarineSaveData_k__BackingField, v13);
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_70;
  name = klass->_1.name;
  if ( name )
  {
    v20 = *((_QWORD *)name + 3);
    if ( v20 )
    {
      if ( !(_DWORD)v20 )
        goto LABEL_71;
      v21 = *((_QWORD *)name + 4);
      if ( v21 )
      {
        v47 = *(_QWORD *)(v21 + 32);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C53758 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C53758 = 1;
        }
        v22 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v22 = TerminalPramsManager_TypeInfo;
        }
        if ( !v22->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v23 = (EventSaveData_o *)sub_1C3E7B0(EventSaveData_TypeInfo);
          EventSaveData___ctor(v23, 0);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C53759 )
          {
            sub_1C3E564(&TerminalPramsManager_TypeInfo);
            byte_4C53759 = 1;
          }
          v26 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v26 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v26->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v23;
          sub_1C3E508(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v23, v24, v25);
          v22 = TerminalPramsManager_TypeInfo;
        }
        if ( !v22->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v22);
        if ( !byte_4C53758 )
        {
          sub_1C3E564(&TerminalPramsManager_TypeInfo);
          byte_4C53758 = 1;
        }
        v28 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v28 = TerminalPramsManager_TypeInfo;
        }
        BeforeEventSubmarineSaveData_k__BackingField = v28->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( BeforeEventSubmarineSaveData_k__BackingField )
        {
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v31 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v31 = (System_String_o **)&StringLiteral_1122/*"0"*/;
            v32 = *v31;
            v33 = max_length <= 2 ? (System_String_o **)&StringLiteral_1122/*"0"*/ : &ValueByArray->m_Items[2];
            v34 = *v33;
            v35 = max_length <= 3 ? (System_String_o **)&StringLiteral_6641/*"False"*/ : &ValueByArray->m_Items[3];
          }
          else
          {
            v34 = (System_String_o *)StringLiteral_1122/*"0"*/;
            v35 = (System_String_o **)&StringLiteral_6641/*"False"*/;
            v32 = (System_String_o *)StringLiteral_1122/*"0"*/;
          }
          v36 = *v35;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C53758 )
          {
            sub_1C3E564(&TerminalPramsManager_TypeInfo);
            byte_4C53758 = 1;
          }
          v37 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v37 = TerminalPramsManager_TypeInfo;
          }
          v38 = v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v39 = System_Int32__ToString((int32_t)&v47, 0);
          if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_39847644(
                                                                              v39,
                                                                              v32,
                                                                              v34,
                                                                              v36,
                                                                              0);
          if ( v38 )
          {
            v38->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_1C3E508(
              (CGThumbnailListItem_o *)&v38->fields.value,
              (int32_t)BeforeEventSubmarineSaveData_k__BackingField,
              v40,
              v41);
            value = v17->fields.value;
            goto LABEL_56;
          }
        }
LABEL_70:
        sub_1C3E7C0(BeforeEventSubmarineSaveData_k__BackingField, v13);
      }
    }
  }
LABEL_56:
  if ( !(_DWORD)value )
    goto LABEL_71;
  v42 = v17[1].klass;
  if ( !v42 )
    goto LABEL_70;
  namespaze = (CGThumbnailListItem_c *)v42->_1.namespaze;
  v44 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v44 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (CGThumbnailListItem_o *)&v44->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = namespaze;
  sub_1C3E508(p_mResultEventPanelRewardInfos, (int32_t)namespaze, v14, v15);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v46 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v46 )
    goto LABEL_70;
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)v46->_2.genericContainerHandle;
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
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v15; // x4
  SchedulerTaskBase_o *v16; // x21
  SchedulerTaskBase_TaskCallback_o *v17; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  TaskScheduler_o *taskScheduler; // x19
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  __int64 v29; // x0

  if ( (byte_4C53723 & 1) == 0 )
  {
    sub_1C3E564(&SchedulerTaskBase___TypeInfo);
    sub_1C3E564(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
    byte_4C53723 = 1;
  }
  v7 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass36_0___ctor((SubmarineMapManager___c__DisplayClass36_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = panelData;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)panelData, v12, v13);
  klass = this->klass;
  if ( *(int *)(v7 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))klass->vtable._30_SetAllTouchBlock.methodPtr)(
      this,
      1,
      klass->vtable._30_SetAllTouchBlock.method);
    *(_BYTE *)(v7 + 40) = 0;
    v16 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v7 + 24),
            *(SubmarineMapPanelData_o **)(v7 + 32),
            (bool *)(v7 + 40),
            v15);
    v17 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v17,
      (Il2CppObject *)v7,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0);
    if ( v16 )
    {
      v16->fields.EndCallback = v17;
      sub_1C3E508((CGThumbnailListItem_o *)&v16->fields.EndCallback, (int32_t)v17, v18, v19);
      taskScheduler = this->fields.taskScheduler;
      v8 = sub_1C3E60C(SchedulerTaskBase___TypeInfo, 1);
      if ( v8 )
      {
        v21 = v8;
        v22 = sub_1C3E6A0(v16, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v22 )
        {
          v29 = sub_1C3E7E4();
          sub_1C3E68C(v29, 0);
        }
        if ( !*(_DWORD *)(v21 + 24) )
          sub_1C3E7C8(v22, v23);
        *(_QWORD *)(v21 + 32) = v16;
        sub_1C3E508((CGThumbnailListItem_o *)(v21 + 32), (int32_t)v16, v24, v25);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v21, 0);
          return;
        }
      }
    }
LABEL_12:
    sub_1C3E7C0(v8, v9);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, const MethodInfo *))klass->vtable._32_AllTouchBlockForceFalse.methodPtr)(
    this,
    klass->vtable._32_AllTouchBlockForceFalse.method);
  SubmarineMapManager__HideScannableEffect(this, v26);
  SubmarineMapManager__ShowScannableEffect(this, v27);
  SubmarineMapManager__HideSelectedPanelEffect(this, v28);
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v17; // x22
  const MethodInfo *v18; // x4

  if ( (byte_4C53739 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_bool__TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
    byte_4C53739 = 1;
  }
  v9 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass68_0___ctor((SubmarineMapManager___c__DisplayClass68_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    this,
    1,
    this->klass->vtable._31_SetCameraWorkBlock.method);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v17 = (System_Action_bool__o *)sub_1C3E7B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_1C3E7C0(v10, v11);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v17, v18);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v13; // x1
  int32_t eventId; // w22
  System_Action_int__o *v15; // x23
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x4

  if ( (byte_4C53737 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
    byte_4C53737 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass66_0___ctor((SubmarineMapManager___c__DisplayClass66_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    this,
    1,
    this->klass->vtable._31_SetCameraWorkBlock.method);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v13);
  v15 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
    0);
  v16 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0);
  if ( !selectScannerDialog )
LABEL_6:
    sub_1C3E7C0(v6, v7);
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v15, v16, v17);
}


void SubmarineMapManager__ReleaseAssets(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapAssetManager_o *assetManager; // x0
  CGThumbnailListItem_o *p_assetManager; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_assetManager = (CGThumbnailListItem_o *)&this->fields.assetManager;
  assetManager = this->fields.assetManager;
  if ( assetManager )
  {
    SubmarineMapAssetManager__Finish(assetManager, method);
    p_assetManager->klass = 0;
    sub_1C3E508(p_assetManager, 0, v5, v6);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
}


void SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  ComponentPool_T__o *effectScanedPanelObjPool; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  ComponentPool_T__o *effectScannablePanelObjPool; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  ComponentPool_T__o *v9; // x0
  CGThumbnailListItem_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C5373C & 1) == 0 )
  {
    sub_1C3E564(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    sub_1C3E564(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    sub_1C3E564(&Method_ComponentPool_CommonEffectComponent__Finish__);
    byte_4C5373C = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_338E998 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.effectScanedPanelObjPool, 0, v4, v5);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_338E998 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.effectScannablePanelObjPool, 0, v7, v8);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (CGThumbnailListItem_o *)&this->fields.effectScanObstaclePanelObjPool;
  v9 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v9,
      (const MethodInfo_338E998 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0;
    sub_1C3E508(p_effectScanObstaclePanelObjPool, 0, v12, v13);
  }
}


void SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_31AC338 *method)
{
  bool hasValue; // w19
  bool v8; // w20
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  UnityEngine_Component_o *v14; // x21
  UnityEngine_Transform_o *v15; // x22
  const MethodInfo_38DF7C0 *v16; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo_38DF7C0 *v20; // x2
  bool v21; // zf
  UnityEngine_Transform_o *v22; // x19
  System_Nullable_Vector3__o v23; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v24; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v25; // 0:x0.16
  System_Nullable_Vector3__o v26; // 0:x0.16
  UnityEngine_Vector3_o PositionByIndices; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Value; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4

  v24 = offset;
  v23 = scale;
  hasValue = scale.fields.hasValue;
  v8 = offset.fields.hasValue;
  if ( !method->rgctx_data )
  {
    sub_1C3E564(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1C3E564(&Method_System_Nullable_Vector3__get_Value__);
    if ( !method->rgctx_data )
      sub_1C8ECD4();
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
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_54060232(
                                                  pool,
                                                  transform,
                                                  PositionByIndices,
                                                  (const MethodInfo_338E4C8 *)method->rgctx_data->_1_ComponentPool_T__Rent);
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
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( v8 )
  {
    *(_QWORD *)&v25.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v25.fields.hasValue = &v24;
    Value = System_Nullable_Vector3___get_Value(v25, v16);
    hasValue = v23.fields.hasValue;
  }
  else
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    Value = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  }
  v30.fields.z = z + Value.fields.z;
  v30.fields.y = y + Value.fields.y;
  v30.fields.x = x + Value.fields.x;
  UnityEngine_Transform__set_localPosition(v15, v30, 0);
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0);
  v21 = !hasValue;
  v22 = (UnityEngine_Transform_o *)effectContainer;
  if ( !v21 )
  {
    *(_QWORD *)&v26.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v26.fields.hasValue = &v23;
    oneVector = System_Nullable_Vector3___get_Value(v26, v20);
    if ( v22 )
      goto LABEL_17;
LABEL_21:
    sub_1C3E7C0(effectContainer, pool);
  }
  if ( !byte_4C506A6 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A6 = 1;
  }
  oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
  if ( !v22 )
    goto LABEL_21;
LABEL_17:
  UnityEngine_Transform__set_localScale(v22, oneVector, 0);
}


void SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0);
}


void SubmarineMapManager__ReturnEffectsToPool_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_31AC524 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  unsigned int v10; // w22

  if ( !method->rgctx_data )
    sub_1C8ECD4();
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
        sub_1C3E7C8(Children, v7);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_31510CC *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_338E5A0 *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1C3E7C0(Children, v7);
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
  const MethodInfo *v9; // x3
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v11; // x1
  __int64 v12; // x20
  System_Delegate_o **v13; // x22
  System_Delegate_o *v14; // x23
  SchedulerTaskBase_TaskCallback_o *v15; // x24
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Delegate_o *v19; // x8
  SchedulerTaskBase_TaskCallback_c *v20; // x1
  TaskScheduler_o *v21; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0

  if ( (byte_4C53728 & 1) == 0 )
  {
    sub_1C3E564(&SchedulerTaskBase___TypeInfo);
    sub_1C3E564(&SchedulerTaskNone_TypeInfo);
    sub_1C3E564(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
    byte_4C53728 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass41_0___ctor((SubmarineMapManager___c__DisplayClass41_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = finishCallback,
        sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v11),
        !taskScheduler)
    || (TaskScheduler__AddTask_44368080(taskScheduler, 0, RevealEachSpotsTasks, 0),
        v12 = sub_1C3E7B0(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v12, 0),
        !v12) )
  {
LABEL_16:
    sub_1C3E7C0(RevealEachSpotsTasks, v7);
  }
  v13 = (System_Delegate_o **)(v12 + 32);
  v14 = *(System_Delegate_o **)(v12 + 32);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__,
    0);
  v16 = System_Delegate__Combine(v14, (System_Delegate_o *)v15, 0);
  v19 = v16;
  if ( v16 )
  {
    v20 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v13 = v16;
      if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == v20 )
        goto LABEL_11;
    }
    sub_1C3EA80(v16);
  }
  *v13 = v19;
LABEL_11:
  sub_1C3E508((CGThumbnailListItem_o *)(v12 + 32), (int32_t)v19, v17, v18);
  v21 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_1C3E60C(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v22 = RevealEachSpotsTasks;
  v23 = sub_1C3E6A0(v12, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v23 )
  {
    v27 = sub_1C3E7E4();
    sub_1C3E68C(v27, 0);
  }
  if ( !v22->fields._size )
    sub_1C3E7C8(v23, v24);
  v22->fields._syncRoot = (Il2CppObject *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&v22->fields._syncRoot, v12, v25, v26);
  if ( !v21 )
    goto LABEL_16;
  TaskScheduler__AddTask(v21, 0, (SchedulerTaskBase_array *)v22, 0);
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

  if ( (byte_4C53730 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53730 = 1;
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
                                                             (const MethodInfo_31510CC *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
    sub_1C3E7C0(submarineData, v5);
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
  if ( (byte_4C5373F & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_1C3E564(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
    byte_4C5373F = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0 )
      sub_1C3E7C0(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v6,
             (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields._current )
        sub_1C3E7C0(v4, v5);
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
          (const MethodInfo_31AC338 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  const MethodInfo *v16; // x3

  if ( (byte_4C53743 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C53743 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_33B2F58 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_1C3E7C0(Instance, v8);
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
      v13 = UnityEngine_Object__Instantiate_object__51929056(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v13;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_1C3E508((CGThumbnailListItem_o *)p_scanRangeNotificator, (int32_t)v13, v15, v16);
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
  float32x2_t v37; // d2 OVERLAPPED
  float32x2_t v38; // d0
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v40; // x8
  __int64 size; // x10
  unsigned __int64 v42; // d0
  float32x2_t *v43; // x9
  int v44; // s1
  unsigned __int32 v45; // s3
  Submarine2DUILocationInfo_o *v46; // x22
  const MethodInfo *v47; // x1
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v50; // x22
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  Submarine2DUILocationInfo_o *v55; // x22
  const MethodInfo *v56; // x1
  UnityEngine_Rect_array *v57; // x0
  MapCamera_o *v58; // x23
  UnityEngine_Rect_array *v59; // x22
  UnityEngine_Vector2_o v60; // kr00_8
  struct System_Threading_CancellationTokenSource_o *v61; // x8
  float v62; // s3
  __int64 v63; // x8
  struct MapControl_WarInfo_o **p_warInfo; // x9
  float v65; // t1
  float v66; // s0
  struct SubmarineMapDataManager_o *v67; // x8
  struct SubmarineSettingsManager_o *v68; // x8
  Submarine2DUILocationInfo_o *v70; // x22
  const MethodInfo *v71; // x1
  UnityEngine_Rect_array *v72; // x0
  MapCamera_o *v73; // x23
  UnityEngine_Rect_array *v74; // x22
  int32_t failedReason; // [xsp+3Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v78; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4C53746 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Rect__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_Rect__TypeInfo);
    sub_1C3E564(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_1C3E564(&UnityEngine_Rect___TypeInfo);
    sub_1C3E564(&float___TypeInfo);
    sub_1C3E564(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    sub_1C3E564(&Submarine2DUILocationInfo_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1C3E564(&SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    byte_4C53746 = 1;
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
          this = (SubmarineMapManager_o *)sub_1C3E60C(UnityEngine_Rect___TypeInfo, 1);
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
    sub_1C3E7C0(this, *(_QWORD *)&scanId);
  }
  v28 = (System_Collections_Generic_List_Rect__o *)sub_1C3E7B0(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v28,
    (const MethodInfo_37CAD74 *)Method_System_Collections_Generic_List_Rect___ctor__);
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
      if ( !byte_4C506A1 )
      {
        this = (SubmarineMapManager_o *)sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
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
        v44 = HIDWORD(v42);
        v45 = v37.n64_u32[1];
        System_Collections_Generic_List_Rect___AddWithResize(
          v28,
          *(UnityEngine_Rect_o *)(&v37 - 1),
          *(const MethodInfo_37CB600 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
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
          (const MethodInfo_37CD194 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_45:
  v46 = (Submarine2DUILocationInfo_o *)sub_1C3E7B0(Submarine2DUILocationInfo_TypeInfo);
  Submarine2DUILocationInfo___ctor(v46, v47);
  if ( !v46 )
    goto LABEL_73;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v46, 0);
  mapCamera = v8->fields.mapCamera;
  v50 = Rects;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v77 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(mapCamera, v27, v50, &failedReason, 0);
  *isShowDialogUpper = 0;
  m_XMin = v77.fields.m_XMin;
  m_YMin = v77.fields.m_YMin;
  m_Width = v77.fields.m_Width;
  m_Height = v77.fields.m_Height;
  if ( failedReason == 1 )
  {
    v55 = (Submarine2DUILocationInfo_o *)sub_1C3E7B0(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v55, v56);
    if ( !v55 )
      goto LABEL_73;
    v57 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v55, 0);
    v58 = v8->fields.mapCamera;
    v59 = v57;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    v78 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(v58, v27, v59, &failedReason, 0);
    if ( failedReason != 1 )
    {
      if ( failedReason )
        goto LABEL_55;
      goto LABEL_54;
    }
    v70 = (Submarine2DUILocationInfo_o *)sub_1C3E7B0(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v70, v71);
    if ( !v70 )
      goto LABEL_73;
    v72 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v70, 0);
    v73 = v8->fields.mapCamera;
    v74 = v72;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    v78 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(v73, v27, v74, &failedReason, 0);
    if ( !failedReason )
    {
LABEL_54:
      m_XMin = v78.fields.m_XMin;
      m_YMin = v78.fields.m_YMin;
      m_Width = v78.fields.m_Width;
      m_Height = v78.fields.m_Height;
      *isShowDialogUpper = 1;
    }
  }
LABEL_55:
  v60 = FSWindowUtil__GetSize(0);
  this = (SubmarineMapManager_o *)sub_1C3E60C(float___TypeInfo, 3);
  if ( !this )
    goto LABEL_73;
  v61 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v61
    || (LODWORD(this->fields.mapInfo) = 1065353216, (_DWORD)v61 == 1)
    || (*((float *)&this->fields.mapInfo + 1) = m_Width / v60.fields.x, (unsigned int)v61 <= 2) )
  {
LABEL_74:
    sub_1C3E7C8(this, *(_QWORD *)&scanId);
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
  v76.fields.y = m_YMin + (float)(m_Height * 0.5);
  v76.fields.x = m_XMin + (float)(m_Width * 0.5);
  v76.fields.z = 0.0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v8,
           v76,
           v62,
           v68->fields._ViewScanRangeCameraDuration_k__BackingField,
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
  if ( (byte_4C5373D & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_1C3E564(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
    byte_4C5373D = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0 )
      sub_1C3E7C0(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v6,
             (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields._current )
        sub_1C3E7C0(v4, v5);
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
          (const MethodInfo_31AC338 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_4C53741 & 1) == 0 )
  {
    sub_1C3E564(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
    byte_4C53741 = 1;
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
    (const MethodInfo_31AC338 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
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
  const MethodInfo *v17; // x3
  MissionNotifyManager_o *v18; // x20
  __int64 v19; // x20
  System_Delegate_o **v20; // x21
  System_Delegate_o *v21; // x22
  SchedulerTaskBase_TaskCallback_o *v22; // x23
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Delegate_o *v26; // x8
  SchedulerTaskBase_TaskCallback_c *v27; // x1
  TaskScheduler_o *v28; // x19
  MissionNotifyManager_o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0

  if ( (byte_4C53726 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&SchedulerTaskBase___TypeInfo);
    sub_1C3E564(&SchedulerTaskNone_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C3E564(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__);
    sub_1C3E564(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__);
    sub_1C3E564(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4C53726 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0);
  if ( !v9 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v9, v10, 0);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v12);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_44368080(taskScheduler, 0, (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance, 0);
  v13 = this->fields.taskScheduler;
  v14 = (SchedulerTaskBase_array *)sub_1C3E60C(SchedulerTaskBase___TypeInfo, 1);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v15);
  if ( !v14 )
    goto LABEL_22;
  v18 = Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_1C3E6A0(Instance, v14->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_23;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v18;
  sub_1C3E508((CGThumbnailListItem_o *)v14->m_Items, (int32_t)v18, v16, v17);
  if ( !v13
    || (TaskScheduler__AddTask(v13, 0, v14, 0),
        v19 = sub_1C3E7B0(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v19, 0),
        !v19) )
  {
LABEL_22:
    sub_1C3E7C0(Instance, v8);
  }
  v20 = (System_Delegate_o **)(v19 + 32);
  v21 = *(System_Delegate_o **)(v19 + 32);
  v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__39_1__,
    0);
  v23 = System_Delegate__Combine(v21, (System_Delegate_o *)v22, 0);
  v26 = v23;
  if ( !v23 )
    goto LABEL_16;
  v27 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v23->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v20 = v23, (SchedulerTaskBase_TaskCallback_c *)v23->klass != v27) )
  {
    sub_1C3EA80(v23);
LABEL_16:
    *v20 = v26;
  }
  sub_1C3E508((CGThumbnailListItem_o *)(v19 + 32), (int32_t)v26, v24, v25);
  v28 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_1C3E60C(SchedulerTaskBase___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_22;
  v29 = Instance;
  Instance = (MissionNotifyManager_o *)sub_1C3E6A0(v19, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v32 = sub_1C3E7E4();
    sub_1C3E68C(v32, 0);
  }
  if ( !LODWORD(v29->fields.mNoDispInfos) )
LABEL_23:
    sub_1C3E7C8(Instance, v8);
  v29->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v19;
  sub_1C3E508((CGThumbnailListItem_o *)&v29->fields.mMissionNotifyComps, v19, v30, v31);
  if ( !v28 )
    goto LABEL_22;
  TaskScheduler__AddTask(v28, 0, (SchedulerTaskBase_array *)v29, 0);
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
  const MethodInfo *v9; // x3
  System_Action_o **p_syncRoot; // x22
  const MethodInfo *v11; // x1
  int size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v13; // x20
  System_Delegate_o *syncRoot; // x23
  SchedulerTaskBase_TaskCallback_o *v15; // x24
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  SchedulerTaskBase_TaskCallback_c *v19; // x1

  if ( (byte_4C53727 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
    sub_1C3E564(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
    byte_4C53727 = 1;
  }
  v5 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass40_0___ctor((SubmarineMapManager___c__DisplayClass40_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v5 + 16);
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
                                                                               this,
                                                                               v11);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  size = SubsequentialOpenPanelTasks->fields._size;
  v13 = (System_Collections_Generic_List_SchedulerTaskBase__o *)SubsequentialOpenPanelTasks;
  if ( size < 1 )
  {
LABEL_11:
    ActionExtensions__Call(*p_syncRoot, 0);
    return;
  }
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SubsequentialOpenPanelTasks,
                                                                               size - 1,
                                                                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3E7B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__,
    0);
  v16 = System_Delegate__Combine(syncRoot, (System_Delegate_o *)v15, 0);
  if ( v16 )
  {
    v19 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass != SchedulerTaskBase_TaskCallback_TypeInfo
      || (*p_syncRoot = (System_Action_o *)v16, (SchedulerTaskBase_TaskCallback_c *)v16->klass != v19) )
    {
      sub_1C3EA80(v16);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0;
  }
  sub_1C3E508((CGThumbnailListItem_o *)p_syncRoot, (int32_t)v16, v17, v18);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_1C3E7C0(SubsequentialOpenPanelTasks, v7);
  TaskScheduler__AddTask_44368080((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v13, 0);
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

  if ( (byte_4C5371E & 1) == 0 )
  {
    sub_1C3E564(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager__TryInitRequest_b__31_0__);
    byte_4C5371E = 1;
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
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3E7B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_3184BE4 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v9);
  v10 = this->fields.mapInfo;
  if ( !v10 || !Request_object )
LABEL_11:
    sub_1C3E7C0(eventId, v4);
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

  if ( (byte_4C53738 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    byte_4C53738 = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    v5 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v7 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v5, v7, v8);
      return;
    }
LABEL_8:
    sub_1C3E7C0(submarineData, method);
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
  if ( (byte_4C5372A & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    this = (SubmarineMapManager_o *)sub_1C3E564(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    byte_4C5372A = 1;
  }
  memset(&v5, 0, sizeof(v5));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0 )
    sub_1C3E7C0(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C3E7C0(0, v4);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C3E7C0(0, *(_QWORD *)&beforeClearQuestId);
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
  const MethodInfo *v7; // x3
  UnityEngine_GameObject_c *klass; // x8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v10; // x1
  TerminalPramsManager_c *v11; // x0
  TerminalPramsManager_c *v12; // x0
  System_String_array *ValueByArray; // x0
  il2cpp_array_size_t max_length; // x8
  UnityEngine_GameObject_c *v15; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  EventDetailEntity_o *v17; // x21
  System_Action_o *v18; // x22
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1

  if ( (byte_4C5372B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__);
    sub_1C3E564(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
    byte_4C5372B = 1;
  }
  v3 = sub_1C3E7B0(SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass48_0___ctor((SubmarineMapManager___c__DisplayClass48_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_46;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)terminalMap,
                        (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  terminalMap = (ScrTerminalMap_o *)SubmarineMapManager__get_eventId(this, v10);
  if ( !MasterData_object )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         (Il2CppObject **)(v3 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v3 + 32) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C53758 )
    {
      sub_1C3E564(&TerminalPramsManager_TypeInfo);
      byte_4C53758 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    if ( v11->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v11->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v11);
      if ( !byte_4C53758 )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C53758 = 1;
      }
      v12 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v12 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v12->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_46;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0);
      if ( ValueByArray )
      {
        max_length = ValueByArray->max_length;
        if ( max_length )
        {
          if ( !(_DWORD)max_length )
            sub_1C3E7C8(ValueByArray, v5);
          *(_DWORD *)(v3 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0);
        }
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C50C86 )
    {
      sub_1C3E564(&TerminalSceneComponent_TypeInfo);
      byte_4C50C86 = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v15 = terminalMap->fields.subRootGimmickP->klass;
    if ( v15 )
    {
      genericContainerHandle = (TitleInfoControl_o *)v15->_2.genericContainerHandle;
      v17 = *(EventDetailEntity_o **)(v3 + 24);
      v18 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v3,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0);
      if ( genericContainerHandle )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(genericContainerHandle, v17, v18, 0);
        return;
      }
    }
LABEL_46:
    sub_1C3E7C0(terminalMap, v5);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, const MethodInfo *))this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr)(
    this,
    this->klass->vtable._32_AllTouchBlockForceFalse.method);
  SubmarineMapManager__HideScannableEffect(this, v19);
  SubmarineMapManager__ShowScannableEffect(this, v20);
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
    sub_1C3E7C0(0, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C53751 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__);
    byte_4C53751 = 1;
  }
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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

  if ( (byte_4C53752 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C53752 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  CommonUI__SetSkipAnimation((CommonUI_o *)Instance, 1, 0);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0);
}


void SubmarineMapManager___StartScanPerformance_b__39_1(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C53753 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__);
    byte_4C53753 = 1;
  }
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_2__, 0);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v3, v4);
}


void SubmarineMapManager___StartScanPerformance_b__39_2(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C53754 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__);
    byte_4C53754 = 1;
  }
  v3 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_3__, 0);
  SubmarineMapManager__RevealAvailableSpots(this, v3, v4);
}


void SubmarineMapManager___StartScanPerformance_b__39_3(SubmarineMapManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C53755 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C53755 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
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
    sub_1C3E7C0(this, method);
  return MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0);
}


SubmarinePanelPositionCalculator_o *SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C3E7C0(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *SubmarineMapManager__get_settings(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C3E7C0(this, method);
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  v2 = this;
  if ( (byte_4C53764 & 1) == 0 )
  {
    sub_1C3E564(&System_Func_bool__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SubmarineMapManager__CoInitRequest_b__20_0__);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_1C3E564(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C53764 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData) == 0 )
    {
LABEL_14:
      sub_1C3E7C0(this, method);
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
  this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
  v6 = (System_Func_bool__o *)sub_1C3E7B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0);
  v7 = (UnityEngine_WaitUntil_o *)sub_1C3E7B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C3E508(p__2__current, (int32_t)v7, v9, v10);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  const MethodInfo *v10; // x3
  struct SubmarineMapAssetManager_o *v11; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  int32_t v17; // w0

  v2 = this;
  if ( (byte_4C53765 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C53765 = 1;
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
          sub_1C3E508((CGThumbnailListItem_o *)&_4__this->fields.closedPanelTexture, (int32_t)ResizedTexture2D, v9, v10);
          v11 = _4__this->fields.assetManager;
          if ( v11 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v11->fields._ClosedPanelTexture_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0, 0) )
            {
              DarkTexture2D = ClosePanelTextureUtil__CreateDarkTexture2D(*p_closedPanelTexture, 0.4, 0);
              *p_closedPanelTexture = DarkTexture2D;
              sub_1C3E508(
                (CGThumbnailListItem_o *)&_4__this->fields.closedPanelTexture,
                (int32_t)DarkTexture2D,
                v14,
                v15);
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
                v17 = SubmarineQuestSaveInfo__get_BeforeClearQuestId((SubmarineQuestSaveInfo_o *)this, 0);
                SubmarineMapManager__UpdateParams(_4__this, v17, 0);
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
      sub_1C3E7C0(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C5375A & 1) == 0 )
  {
    sub_1C3E564(&SubmarineMapManager___c_TypeInfo);
    byte_4C5375A = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)SubmarineMapManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
  return !x->fields._IsOpened_k__BackingField;
}


bool SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, x);
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
  const MethodInfo *v9; // x3
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_4C5375B & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__);
    byte_4C5375B = 1;
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
    _9__1 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !klass )
LABEL_9:
    sub_1C3E7C0(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v7, _9__1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136(v4, Assets, 0);
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
    sub_1C3E7C0(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136(v6, inited, 0);
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

  if ( (byte_4C5375C & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C3E564(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C5375C = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
         (const MethodInfo_33B2FA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C50C86 )
    {
      sub_1C3E564(&TerminalSceneComponent_TypeInfo);
      byte_4C50C86 = 1;
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
    sub_1C3E7C0(Instance, v4);
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
    sub_1C3E7C0(0, method);
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
  const MethodInfo *v7; // x3

  if ( (byte_4C5375D & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__);
    byte_4C5375D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0);
  _9__1 = this->fields.__9__1;
  v5 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7);
  }
  if ( !v5 )
LABEL_8:
    sub_1C3E7C0(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v5, _9__1, 0);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, *(_QWORD *)&scanId);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C5375E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_bool__TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__);
    byte_4C5375E = 1;
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
    _9__1 = (System_Action_bool__o *)sub_1C3E7B0(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !v6 )
LABEL_9:
    sub_1C3E7C0(_4__this, method);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C5375F & 1) == 0 )
  {
    sub_1C3E564(&System_Action_int__TypeInfo);
    sub_1C3E564(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__);
    byte_4C5375F = 1;
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
    sub_1C3E7C0(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1C3E7B0(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !v6 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v6, _9__2, 0);
}


// local variable allocation has failed, the output may be wrong!
void SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, *(_QWORD *)&lscanId);
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
    sub_1C3E7C0(0, result);
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
  ConnectMark_c *klass; // x8
  ConnectMark_c *v6; // x8

  if ( (byte_4C53760 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C53760 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_22;
  SubmarineMapManager__ResetTimeAcceleration((SubmarineMapManager_o *)Instance, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
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
  Instance = (CommonUI_o *)klass->_2.genericContainerHandle;
  if ( !Instance )
    goto LABEL_22;
  TitleInfoControl__CheckEventPointReward(
    (TitleInfoControl_o *)Instance,
    this->fields.eventDetailEntity,
    0,
    this->fields.beforePoint,
    0);
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = Instance->fields.connectMark->klass;
  if ( !v6
    || (Instance = *(CommonUI_o **)&v6->_2.static_fields_size) == 0
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
LABEL_22:
    sub_1C3E7C0(Instance, v4);
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
    sub_1C3E7C0(this, x);
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

  if ( (byte_4C53761 & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_int___);
    byte_4C53761 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._31_SetCameraWorkBlock.method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_30462C0 *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_4C53762 & 1) == 0 )
  {
    sub_1C3E564(&Method_ActionExtensions_Call_bool___);
    byte_4C53762 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._31_SetCameraWorkBlock.method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_3046270 *)Method_ActionExtensions_Call_bool___);
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
    sub_1C3E7C0(0, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_1C3E7C0(0, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3E7C0(0, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_4C53763 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53763 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71341564(scanAnimObj, 0);
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
    sub_1C3E7C0(this, x);
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
    sub_1C3E7C0(this, 0);
  return x->fields._Chain_k__BackingField == this->fields.i;
}