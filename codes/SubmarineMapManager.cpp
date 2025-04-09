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

  if ( (byte_49B7A02 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, go);
    byte_49B7A02 = 1;
  }
  if ( !go )
    goto LABEL_23;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49627240(
                                    go,
                                    (const MethodInfo_2F54068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1B4D1F4(this, go);
  }
  v8 = 0x7FFFFFFF;
LABEL_14:
  if ( v8 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49627240(
                                      go,
                                      (const MethodInfo_2F54068 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1B4D1EC(this, go);
  }
}


void __fastcall SubmarineMapManager__AdjustEachSpotsPositions(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_array *Children; // x0
  __int64 v5; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v7; // x20
  unsigned int v8; // w22
  Il2CppObject *Component_object; // x21
  const MethodInfo *v10; // x2

  if ( (byte_49B79FF & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B79FF = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_15;
  max_length = Children->max_length;
  v7 = Children;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1B4D1F4(Children, v5);
      Children = (UnityEngine_GameObject_array *)v7->m_Items[v8];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_object, v10);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_15:
    sub_1B4D1EC(Children, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_Collections_Generic_List_object__o *v25; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v27; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v29; // x21
  unsigned int v30; // w19
  Il2CppObject *Component_object; // x22
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_Dictionary_int__object__o *v38; // x21
  int v39; // w8
  UnityEngine_GameObject_o *v40; // x22
  unsigned int v41; // w19
  Il2CppObject *v42; // x23
  Il2CppClass *v43; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v45; // x24
  __int64 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t current; // w1
  SubmarineSilhouetteData_o **v51; // x23
  __int64 v52; // x0
  __int64 v53; // x1
  System_Predicate_object__o *v54; // x25
  __int64 v55; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x24
  _BOOL8 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x1
  SubmarineMapDataManager_o *v61; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v63; // x23
  __int64 v64; // x0
  __int64 v65; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v67; // x1
  __int64 v68; // x0
  __int64 v69; // x1
  float32x2_t v70; // d9
  __int128 v71; // q0
  _BOOL8 v72; // x0
  __int64 v73; // x1
  __int128 v74; // q1
  int8x8_t v75; // d0
  int8x8_t v76; // d2
  __int64 v77; // x1
  UnityEngine_Transform_o *v78; // x0
  __int64 v79; // x1
  unsigned __int64 v80; // d0 OVERLAPPED
  int v81; // s1
  int v82; // s2
  float y; // [xsp+10h] [xbp-F0h]
  __int128 v85; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+70h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_49B7A01 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__, v2);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__, v3);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v10);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___, v11);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v16);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___75455736, v17);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__, v18);
    sub_1B4CF90(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v19);
    sub_1B4CF90(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo, v20);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v21);
    sub_1B4CF90(&System_Predicate_SrcSpotBasePrefab__TypeInfo, v22);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__, v23);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo, v24);
    byte_49B7A01 = 1;
  }
  memset(&v89, 0, sizeof(v89));
  value = 0LL;
  memset(&v87, 0, sizeof(v87));
  v25 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  klass = (int)Children[1].klass;
  v29 = Children;
  if ( klass >= 1 )
  {
    v30 = 0;
    while ( v30 < klass )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v29[1].monitor + (int)v30);
      if ( !Children )
        goto LABEL_59;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Children,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v25 )
          goto LABEL_59;
        items = v25->fields._items;
        v35 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
        ++v25->fields._version;
        if ( !items )
          goto LABEL_59;
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            Component_object,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v37[4] = (Il2CppClass *)Component_object;
          sub_1B4CF34((CGThumbnailListItem_o *)(v37 + 4), (int32_t)Component_object, v32, v33);
        }
      }
      klass = (int)v29[1].klass;
      if ( (int)++v30 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_1B4D1F4(Children, v27);
  }
LABEL_17:
  v38 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v38,
    (const MethodInfo_31F64AC *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  v39 = (int)Children[1].klass;
  v40 = Children;
  if ( v39 >= 1 )
  {
    v41 = 0;
    while ( v41 < v39 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v40[1].monitor + (int)v41);
      if ( !Children )
        goto LABEL_59;
      v42 = UnityEngine_GameObject__GetComponent_object_(
              Children,
              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v42, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v42 )
          goto LABEL_59;
        v43 = v42[7].klass;
        if ( !v43 || !v38 )
          goto LABEL_59;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v38,
          HIDWORD(v43->_1.name),
          v42,
          (const MethodInfo_31F6E6C *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v39 = (int)v40[1].klass;
      if ( (int)++v41 >= v39 )
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
    sub_1B4D1EC(Children, v27);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v89 = v86;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v89,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v45 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v45, 0LL);
    if ( !v45 )
      sub_1B4D1EC(v46, v47);
    current = (int32_t)v89.fields._current;
    *(_QWORD *)(v45 + 16) = v89.fields._current;
    v51 = (SubmarineSilhouetteData_o **)(v45 + 16);
    sub_1B4CF34((CGThumbnailListItem_o *)(v45 + 16), current, v48, v49);
    if ( !*(_QWORD *)(v45 + 16) )
      sub_1B4D1EC(v52, v53);
    if ( *(int *)(*(_QWORD *)(v45 + 16) + 20LL) > 0 )
    {
      v54 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_object____ctor(
        v54,
        (Il2CppObject *)v45,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0LL);
      if ( !v25 )
        sub_1B4D1EC(v55, v56);
      v57 = System_Collections_Generic_List_object___Find(
              v25,
              (System_Predicate_T__o *)v54,
              (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v58 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v57, 0LL, 0LL);
      if ( !v58 )
      {
        if ( !*v51 )
          sub_1B4D1EC(v58, v59);
        if ( !v38 )
          sub_1B4D1EC(v58, v59);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v38,
               (*v51)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_31F860C *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v61 = this->fields.submarineData;
          if ( !v61 )
            sub_1B4D1EC(0LL, v60);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v61,
                                                                                      *v51,
                                                                                      0LL);
          v63 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_object____ctor_56097488(
            v63,
            SilhouetteOccupiedPanels,
            (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___75455736);
          if ( !v57 )
            sub_1B4D1EC(v64, v65);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v57, 0LL);
          if ( !transform )
            sub_1B4D1EC(0LL, v67);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          *(_QWORD *)&v85 = *(_QWORD *)&localPosition.fields.x;
          y = localPosition.fields.y;
          if ( !byte_49B5361 )
          {
            v68 = sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v69);
            byte_49B5361 = 1;
          }
          if ( !v63 )
            sub_1B4D1EC(v68, v69);
          v70.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v86,
            v63,
            (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v87 = v86;
          v71 = v85;
          *((float *)&v71 + 1) = y;
          while ( 1 )
          {
            v85 = v71;
            v72 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v87,
                    (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v72 )
              break;
            if ( !v87.fields._current )
              sub_1B4D1EC(v72, v73);
            v75.n64_u64[0] = *(unsigned __int64 *)((char *)&v87.fields._current[1].monitor + 4);
            *(int8x8_t *)&v74 = vbsl_s8(vcgt_f32(v75, *(float32x2_t *)&v85), *(int8x8_t *)&v85, v75);
            v76.n64_u64[0] = vadd_f32(
                               *(float32x2_t *)&v74,
                               vsub_f32(vadd_f32(v70, *(float32x2_t *)&v85), *(float32x2_t *)&v74)).n64_u64[0];
            v70.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v76, v75), v76, v75), *(float32x2_t *)&v74).n64_u64[0];
            v71 = v74;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v87,
            (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_1B4D1EC(0LL, v77);
          v78 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0LL);
          if ( !v78 )
            sub_1B4D1EC(0LL, v79);
          v80 = vadd_f32(vmul_f32(v70, (float32x2_t)0x3F0000003F000000LL), *(float32x2_t *)&v85).n64_u64[0];
          v81 = HIDWORD(v80);
          v82 = 0;
          UnityEngine_Transform__set_localPosition(v78, *(UnityEngine_Vector3_o *)&v80, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v89,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
}


void __fastcall SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  SubmarineMapManager_o *v4; // x20
  __int64 v5; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  __int64 v8; // x1
  const MethodInfo_369DEB4 *v9; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v11; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v12; // 0:x0.12
  System_Nullable_Vector3__o v13; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49B79FE & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Nullable_Vector2___ctor__, spot);
    this = (SubmarineMapManager_o *)sub_1B4CF90(&Method_System_Nullable_Vector3___ctor__, v5);
    byte_49B79FE = 1;
  }
  submarineData = v4->fields.submarineData;
  if ( !submarineData )
    goto LABEL_9;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_9;
  PanelUnitSize_k__BackingField = Settings_k__BackingField->fields._PanelUnitSize_k__BackingField;
  *(_QWORD *)&v12.fields.hasValue = &v11;
  LODWORD(v12.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  v11.fields.value.fields.y = 0.0;
  *(_QWORD *)&v11.fields.hasValue = 0LL;
  System_Nullable_Vector2____ctor(v12, PanelUnitSize_k__BackingField, (const MethodInfo_369DA94 *)method);
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v8);
    byte_49B5361 = 1;
  }
  *(_QWORD *)&v13.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v13.fields.hasValue = &centerPosition;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v13, zeroVector, v9);
  if ( !spot )
LABEL_9:
    sub_1B4D1EC(this, spot);
  SrcSpotBasePrefab__AdjustBtnColliderArea(spot, v11, centerPosition, 0LL);
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
    sub_1B4D1EC(this, spot);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array *Instance; // x0
  __int64 v12; // x1
  SubmarineMapDataManager_o *submarineData; // x8
  clsQuestCheck_o *v14; // x19
  System_Int32_array *v15; // x20
  CommonUI_o *v16; // x19
  int32_t v17; // w20
  SubmarineMapManager___c_c *v18; // x0
  System_Action_o *_9__49_0; // x22
  System_String_o *v20; // x21
  Il2CppObject *v21; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v27; // 0:x5.8

  if ( (byte_49B79F9 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_System_Nullable_float___ctor__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_1B4CF90(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, v8);
    sub_1B4CF90(&SubmarineMapManager___c_TypeInfo, v9);
    sub_1B4CF90(&StringLiteral_6822/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v10);
    byte_49B79F9 = 1;
  }
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_22;
  v14 = (clsQuestCheck_o *)Instance;
  Instance = (System_Int32_array *)SubmarineMapDataManager__get_EventId(submarineData, 0LL);
  if ( !v14 )
    goto LABEL_22;
  Instance = clsQuestCheck__GetNewPlayableEventQuestId(v14, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  v15 = Instance;
  if ( !*(_QWORD *)&Instance->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v15->max_length )
    goto LABEL_23;
  if ( !Instance )
    goto LABEL_22;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)Instance, v15->m_Items[1], 143, 0LL) )
    return;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v15->max_length )
LABEL_23:
    sub_1B4D1F4(Instance, v12);
  v16 = (CommonUI_o *)Instance;
  v17 = v15->m_Items[1];
  v18 = SubmarineMapManager___c_TypeInfo;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v18 = SubmarineMapManager___c_TypeInfo;
  }
  _9__49_0 = v18->static_fields->__9__49_0;
  v20 = (System_String_o *)StringLiteral_6822/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__49_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = SubmarineMapManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v21, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v23, v24);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
  if ( !v16 )
LABEL_22:
    sub_1B4D1EC(Instance, v12);
  v27 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v16, v17, v20, _9__49_0, 0, v27, 0.0, 0LL);
}


void __fastcall SubmarineMapManager__ClickPanel(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  SubmarineMapPanelData_o *v18; // x1
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  __int64 v26; // x21
  System_Delegate_o **v27; // x22
  System_Delegate_o *v28; // x23
  SchedulerTaskBase_TaskCallback_o *v29; // x24
  System_Delegate_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  SchedulerTaskBase_TaskCallback_c *v33; // x1
  TaskScheduler_o *taskScheduler; // x19
  __int64 v35; // x20
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x0

  if ( (byte_49B79EF & 1) == 0 )
  {
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, panelData);
    sub_1B4CF90(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1B4CF90(&Method_SubmarineMapManager_ClickPanel__, v6);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__, v8);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo, v9);
    byte_49B79EF = 1;
  }
  v10 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_28;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = panelData;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 24), (int32_t)panelData, v15, v16);
  v18 = *(SubmarineMapPanelData_o **)(v10 + 24);
  if ( !v18 || !this->fields.isEnableClickPanel )
    return;
  if ( !v18->fields._IsOpened_k__BackingField || !v18->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v18->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v18, v17);
    v21 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1B4CFA8(Method_SubmarineMapManager_ClickPanel__);
    v22 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v26 = sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v26, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v26 )
        {
          v27 = (System_Delegate_o **)(v26 + 32);
          v28 = *(System_Delegate_o **)(v26 + 32);
          v29 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(
            v29,
            (Il2CppObject *)v10,
            Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__,
            0LL);
          v30 = System_Delegate__Combine(v28, (System_Delegate_o *)v29, 0LL);
          if ( v30 )
          {
            v33 = SchedulerTaskBase_TaskCallback_TypeInfo;
            if ( (SchedulerTaskBase_TaskCallback_c *)v30->klass != SchedulerTaskBase_TaskCallback_TypeInfo
              || (*v27 = v30, (SchedulerTaskBase_TaskCallback_c *)v30->klass != v33) )
            {
              sub_1B4D4AC(v30);
              return;
            }
          }
          else
          {
            *v27 = 0LL;
          }
          sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v30, v31, v32);
          taskScheduler = this->fields.taskScheduler;
          v11 = sub_1B4D038(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v11 )
          {
            v35 = v11;
            v36 = sub_1B4D0CC(v26, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
            if ( !v36 )
            {
              v40 = sub_1B4D210();
              sub_1B4D0B8(v40, 0LL);
            }
            if ( !*(_DWORD *)(v35 + 24) )
              sub_1B4D1F4(v36, v37);
            *(_QWORD *)(v35 + 32) = v26;
            sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 32), v26, v38, v39);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v35, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1B4D1EC(v11, v12);
  }
  v19 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1B4CFA8(Method_SubmarineMapManager_ClickPanel__);
  v20 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B79E6 & 1) == 0 )
  {
    sub_1B4CF90(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo, finishCallback);
    byte_49B79E6 = 1;
  }
  v5 = sub_1B4D1DC(SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 40), (int32_t)finishCallback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B79E7 & 1) == 0 )
  {
    sub_1B4CF90(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo, finishCallback);
    byte_49B79E7 = 1;
  }
  v5 = sub_1B4D1DC(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v5 + 40), (int32_t)finishCallback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *scanConfirmDialog; // x21
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  Il2CppObject *ScanConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v16; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v22; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_49B7A03 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___, method);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___, v3);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___, v4);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    byte_49B7A03 = 1;
  }
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(scanConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_28;
    ScanConfirmDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._ScanConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__Instantiate_object_(
           ScanConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v8,
                         (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = (struct SubmarineScanConfirmDialog_o *)Component_object;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scanConfirmDialog, (int32_t)Component_object, v13, v14);
    EventMapManagerBase__LocateDialogToUiRoot(
      (EventMapManagerBase_o *)this,
      (BaseDialog_o *)this->fields.scanConfirmDialog,
      0LL);
  }
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(selectScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v16 = this->fields.assetManager;
    if ( !v16 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v16->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__Instantiate_object_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_28;
    v18 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v8,
            (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = (struct SubmarineSelectScannerDialog_o *)v18;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.selectScannerDialog, (int32_t)v18, v19, v20);
    EventMapManagerBase__LocateDialogToUiRoot(
      (EventMapManagerBase_o *)this,
      (BaseDialog_o *)this->fields.selectScannerDialog,
      0LL);
  }
  newScannerDialog = (UnityEngine_Object_o *)this->fields.newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = (Il2CppObject *)UnityEngine_Object__op_Equality(newScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v22 = this->fields.assetManager;
    if ( v22 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v22->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__Instantiate_object_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_2F87DCC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v24 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v8,
                (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = (struct SubmarineNewScannerDialog_o *)v24;
        sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.newScannerDialog, (int32_t)v24, v25, v26);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_28:
    sub_1B4D1EC(v8, v9);
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1

  if ( (byte_49B79EC & 1) == 0 )
  {
    sub_1B4CF90(&SubmarineMapAssetManager_TypeInfo, method);
    byte_49B79EC = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (CGThumbnailListItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_1B4D1DC(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    p_assetManager->klass = (CGThumbnailListItem_c *)v5;
    sub_1B4CF34(p_assetManager, (int32_t)v5, v7, v8);
    if ( !p_assetManager->klass )
      sub_1B4D1EC(0LL, v9);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v9);
  }
}


void __fastcall SubmarineMapManager__CreateContainers(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  __int64 v3; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x9
  Il2CppObject *PanelContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct SubmarineMapAssetManager_o *v11; // x8
  struct ScrTerminalMap_o *v12; // x9
  Il2CppObject *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v14; // x0
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct SubmarineMapAssetManager_o *v18; // x8
  struct ScrTerminalMap_o *v19; // x9
  Il2CppObject *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  v2 = this;
  if ( (byte_49B79FA & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, method);
    this = (SubmarineMapManager_o *)sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B79FA = 1;
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
  v8 = UnityEngine_Object__Instantiate_object__49839864(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v8;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.panelContainer, (int32_t)v8, v9, v10);
  v11 = v2->fields.assetManager;
  if ( !v11 )
    goto LABEL_15;
  v12 = v2->fields.terminalMap;
  if ( !v12 )
    goto LABEL_15;
  this = (SubmarineMapManager_o *)v12->fields.dispRoot;
  if ( !this )
    goto LABEL_15;
  EffectContainerPrefab_k__BackingField = (Il2CppObject *)v11->fields._EffectContainerPrefab_k__BackingField;
  v14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v15 = UnityEngine_Object__Instantiate_object__49839864(
          EffectContainerPrefab_k__BackingField,
          v14,
          (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v15;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.effectContainer, (int32_t)v15, v16, v17);
  v18 = v2->fields.assetManager;
  if ( !v18 || (v19 = v2->fields.terminalMap) == 0LL || (this = (SubmarineMapManager_o *)v19->fields.dispRoot) == 0LL )
LABEL_15:
    sub_1B4D1EC(this, method);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v18->fields._GridLinePrefab_k__BackingField;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22 = UnityEngine_Object__Instantiate_object__49839864(
          GridLinePrefab_k__BackingField,
          v21,
          (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v22;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.gridLine, (int32_t)v22, v23, v24);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x19
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  __int64 v26; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v28; // x23
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t current; // w1
  SubmarineSilhouetteData_o **v34; // x22
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  SubmarineSilhouetteData_o *v37; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  SubmarineMapDataManager_o *v41; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v43; // x24
  __int64 v44; // x0
  __int64 v45; // x1
  SubmarineMapManager___c_c *v46; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v48; // x26
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v53; // x1
  System_Collections_Generic_List_object__o *v54; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  System_Predicate_object__o *v57; // x26
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v63; // x1
  UnityEngine_Transform_o *v64; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x0
  const MethodInfo *v70; // x1
  int v71; // s0
  struct SubmarineMapDataManager_o *v74; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  Il2CppObject *v79; // x1
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  System_Object_array *v84; // x1
  const MethodInfo *v85; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  Il2CppObject *v89; // x1
  struct System_Object_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  Il2CppClass **v93; // x0
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v96; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49B7A1C & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___75455736, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v15);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v16);
    sub_1B4CF90(&System_Predicate_SubmarineMapPanelData__TypeInfo, v17);
    sub_1B4CF90(&System_Predicate_MapControl_SpotInfo__TypeInfo, v18);
    sub_1B4CF90(&SrcSpotBasePrefab_TypeInfo, v19);
    sub_1B4CF90(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__, v20);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__, v21);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo, v22);
    sub_1B4CF90(&SubmarineMapManager___c_TypeInfo, v23);
    byte_49B7A1C = 1;
  }
  memset(&v96, 0, sizeof(v96));
  v24 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_1B4D1EC(SilhouetteDataList_k__BackingField, v26);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v95,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v96 = v95;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v96,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v28 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0LL);
    if ( !v28 )
      sub_1B4D1EC(v29, v30);
    current = (int32_t)v96.fields._current;
    *(_QWORD *)(v28 + 16) = v96.fields._current;
    v34 = (SubmarineSilhouetteData_o **)(v28 + 16);
    sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 16), current, v31, v32);
    v37 = *(SubmarineSilhouetteData_o **)(v28 + 16);
    if ( !v37 )
      sub_1B4D1EC(0LL, v35);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v37, beforeClearQuestId, v36);
    if ( HasClearCondQuestId )
    {
      if ( !*v34 )
        sub_1B4D1EC(HasClearCondQuestId, v39);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v34)->fields._ObjectQuestIds_k__BackingField, -1, 0, 0LL) )
      {
        v41 = this->fields.submarineData;
        if ( !v41 )
          sub_1B4D1EC(0LL, v40);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v41,
                                                                                    *v34,
                                                                                    0LL);
        v43 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_object____ctor_56097488(
          v43,
          SilhouetteOccupiedPanels,
          (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___75455736);
        v46 = SubmarineMapManager___c_TypeInfo;
        if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v46 = SubmarineMapManager___c_TypeInfo;
        }
        _9__101_0 = (System_Predicate_object__o *)v46->static_fields->__9__101_0;
        if ( !_9__101_0 )
        {
          if ( !v46->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v46);
            v46 = SubmarineMapManager___c_TypeInfo;
          }
          v48 = (Il2CppObject *)v46->static_fields->__9;
          _9__101_0 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_object____ctor(
            _9__101_0,
            v48,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0LL);
          static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          static_fields->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__101_0, (int32_t)_9__101_0, v50, v51);
        }
        if ( !v43 )
          sub_1B4D1EC(v44, v45);
        All = System_Collections_Generic_List_object___FindAll(
                v43,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_35808EC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v54 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_1B4D1EC(0LL, v53);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_1B4D1EC(0LL, v53);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v57 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            v57,
            (Il2CppObject *)v28,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0LL);
          if ( !SpotList )
            sub_1B4D1EC(v58, v59);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v57,
                 (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_1B4D1EC(0LL, v60);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v34 )
              sub_1B4D1EC(transform, v63);
            v64 = transform;
            SpotId_k__BackingField = (*v34)->fields._SpotId_k__BackingField;
            if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v64 )
              sub_1B4D1EC(GobjName, GobjName);
            v67 = UnityEngine_Transform__Find(v64, GobjName, 0LL);
            if ( !v67 )
              sub_1B4D1EC(0LL, v68);
            *(UnityEngine_Vector3_o *)&v71 = UnityEngine_Transform__get_localPosition(v67, 0LL);
            v74 = this->fields.submarineData;
            if ( !v74 )
              sub_1B4D1EC(v69, v70);
            Settings_k__BackingField = v74->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_1B4D1EC(v69, v70);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         *(UnityEngine_Vector3_o *)&v71,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v70);
            v79 = MoveCameraToPositionTask;
            if ( !v24 )
              sub_1B4D1EC(MoveCameraToPositionTask, MoveCameraToPositionTask);
            items = v24->fields._items;
            v81 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v24->fields._version;
            if ( !items )
              sub_1B4D1EC(MoveCameraToPositionTask, MoveCameraToPositionTask);
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v24,
                MoveCameraToPositionTask,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
            }
            else
            {
              v83 = &items->obj.klass + size;
              v24->fields._size = size + 1;
              v83[4] = (Il2CppClass *)v79;
              sub_1B4CF34((CGThumbnailListItem_o *)(v83 + 4), (int32_t)v79, v77, v78);
            }
          }
          v84 = System_Collections_Generic_List_object___ToArray(
                  v54,
                  (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v84,
                                                           v85);
          v89 = OpenPanelsAndRevealSpotsTask;
          if ( !v24 )
            sub_1B4D1EC(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v90 = v24->fields._items;
          v91 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
          ++v24->fields._version;
          if ( !v90 )
            sub_1B4D1EC(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v92 = v24->fields._size;
          if ( (unsigned int)v92 >= v90->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
          }
          else
          {
            v93 = &v90->obj.klass + v92;
            v24->fields._size = v92 + 1;
            v93[4] = (Il2CppClass *)v89;
            sub_1B4CF34((CGThumbnailListItem_o *)(v93 + 4), (int32_t)v89, v87, v88);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v96,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v24;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_49B7A19 & 1) == 0 )
  {
    sub_1B4CF90(&SchedulerTaskNone_TypeInfo, panelData);
    byte_49B7A19 = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_1B4D1DC(SchedulerTaskNone_TypeInfo);
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
  const MethodInfo_369DA94 *v5; // x2
  float y; // s10
  float x; // s11
  __int64 v11; // x1
  __int64 v12; // x1
  MapCamera_o *mapCamera; // x19
  MapCameraPerformance_o *v14; // x0
  SchedulerTaskBase_o *v15; // x20
  System_Nullable_float__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector2__o v18; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o v19; // 0:x0.8
  System_Nullable_float__o v20; // 0:x4.8
  System_Nullable_Vector2__o v21; // 0:x0.12
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_49B7A12 & 1) == 0 )
  {
    sub_1B4CF90(&MapCameraPerformance_TypeInfo, method);
    sub_1B4CF90(&Method_System_Nullable_Vector2___ctor__, v11);
    sub_1B4CF90(&Method_System_Nullable_float___ctor__, v12);
    byte_49B7A12 = 1;
  }
  LODWORD(v21.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v21.fields.hasValue = &v18;
  v22.fields.x = x;
  v22.fields.y = y;
  v18.fields.value.fields.y = 0.0;
  *(_QWORD *)&v18.fields.hasValue = 0LL;
  System_Nullable_Vector2____ctor(v21, v22, v5);
  v19 = (System_Nullable_float__o)&v17;
  v17 = 0LL;
  System_Nullable_float____ctor(v19, size, (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
  v14 = (MapCameraPerformance_o *)sub_1B4D1DC(MapCameraPerformance_TypeInfo);
  v20 = v17;
  v15 = (SchedulerTaskBase_o *)v14;
  MapCameraPerformance___ctor(v14, mapCamera, second, v18, v20, 15, 0LL);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__CreateNeverOpenSurrounds(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SubmarineMapManager_o *v12; // x20
  int v13; // w24
  int v14; // w25
  struct SubmarineMapAssetManager_o *v15; // x8
  ObjectDomain_o *v16; // x21
  Il2CppObject *v17; // x22
  UnityEngine_Transform_o *transform; // x23
  SubmarineMapManager_o *v19; // x22
  SubmarineMapManager_o *v20; // x23
  int v21; // s0
  SubmarineMapPanelComponent_o *v24; // x22
  struct SubmarineMapDataManager_o *v25; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v27; // x20
  int32_t v28; // w21
  int32_t v29; // w22
  int v30; // w26
  struct SubmarineMapDataManager_o *v31; // x8
  unsigned __int64 v32; // d0 OVERLAPPED
  int v33; // s1
  int v34; // s2
  struct SubmarineMapAssetManager_o *v35; // x8
  ObjectDomain_o *v36; // x23
  Il2CppObject *v37; // x24
  UnityEngine_Transform_o *v38; // x25
  SubmarineMapManager_o *v39; // x24
  SubmarineMapManager_o *v40; // x25
  int v41; // s0
  SubmarineMapPanelComponent_o *v44; // x24

  v2 = this;
  if ( (byte_49B79FC & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, method);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    this = (SubmarineMapManager_o *)sub_1B4CF90(&PanelUniqueIDUtil_TypeInfo, v5);
    byte_49B79FC = 1;
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
    sub_1B4D1EC(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v12 = this;
  v13 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = v2->fields.assetManager;
      if ( !v15 )
        goto LABEL_54;
      this = (SubmarineMapManager_o *)v2->fields.panelContainer;
      if ( !this )
        goto LABEL_54;
      v16 = (ObjectDomain_o *)*((_QWORD *)&v12->fields.mapInfo + v14);
      v17 = (Il2CppObject *)v15->fields._PanelPrefab_k__BackingField;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__49839864(
                                        v17,
                                        transform,
                                        (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
      if ( !this )
        goto LABEL_54;
      v19 = this;
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !v16 )
        goto LABEL_54;
      v20 = this;
      *(UnityEngine_Vector3_o *)&v21 = ObjectDomain__get_center(v16, 0LL);
      if ( !v20 )
        goto LABEL_54;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)v19,
                                        (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
      if ( !this )
        goto LABEL_54;
      v24 = (SubmarineMapPanelComponent_o *)this;
      SubmarineMapPanelComponent__Initialize((SubmarineMapPanelComponent_o *)this, 0LL);
      SubmarineMapPanelComponent__SetSize(v24, v16, 0LL);
      SubmarineMapPanelComponent__SetClosedPanelTexture(v24, v16, v2->fields.closedPanelTexture, 0LL);
      SubmarineMapPanelComponent__SetClosedPanelVisible(v24, 1, 0LL);
      if ( v13 == v14 )
        break;
      if ( (unsigned int)++v14 >= LODWORD(v12->fields.m_CancellationTokenSource) )
        sub_1B4D1F4(this, method);
    }
  }
  this = (SubmarineMapManager_o *)v2->fields.submarineData;
  if ( !this )
    goto LABEL_54;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                    (SubmarineMapDataManager_o *)this,
                                    0LL);
  v25 = v2->fields.submarineData;
  if ( !v25 )
    goto LABEL_54;
  PositionCalculator_k__BackingField = v25->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_54;
  v27 = this;
  v28 = 0;
  while ( v28 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
  {
    v29 = 0;
    v30 = 1;
    while ( v29 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
    {
      if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
      this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v28, v29, (System_Int32_array *)v27, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v31 = v2->fields.submarineData;
        if ( !v31 )
          goto LABEL_54;
        this = (SubmarineMapManager_o *)v31->fields._PositionCalculator_k__BackingField;
        if ( !this )
          goto LABEL_54;
        v32 = vadd_f32(
                (float32x2_t)this->fields.mapInfo,
                vmul_f32(
                  vmul_f32(
                    *(float32x2_t *)&this->fields.m_CachedPtr,
                    vcvt_f32_s32(
                      vsub_s32(
                        (int32x2_t)__PAIR64__(v30, (2 * v28) | 1u),
                        (int32x2_t)this->fields.m_CancellationTokenSource))),
                  (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v33 = HIDWORD(v32);
        v34 = 0;
        this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                          *(UnityEngine_Vector3_o *)&v32,
                                          (SubmarinePanelPositionCalculator_o *)this,
                                          0LL);
        v35 = v2->fields.assetManager;
        if ( !v35 )
          goto LABEL_54;
        v36 = (ObjectDomain_o *)this;
        this = (SubmarineMapManager_o *)v2->fields.panelContainer;
        if ( !this )
          goto LABEL_54;
        v37 = (Il2CppObject *)v35->fields._PanelPrefab_k__BackingField;
        v38 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__49839864(
                                          v37,
                                          v38,
                                          (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
        if ( !this )
          goto LABEL_54;
        v39 = this;
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !v36 )
          goto LABEL_54;
        v40 = this;
        *(UnityEngine_Vector3_o *)&v41 = ObjectDomain__get_center(v36, 0LL);
        if ( !v40 )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v40, *(UnityEngine_Vector3_o *)&v41, 0LL);
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v39,
                                          (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
        if ( !this )
          goto LABEL_54;
        v44 = (SubmarineMapPanelComponent_o *)this;
        SubmarineMapPanelComponent__Initialize((SubmarineMapPanelComponent_o *)this, 0LL);
        SubmarineMapPanelComponent__SetSize(v44, v36, 0LL);
        SubmarineMapPanelComponent__SetClosedPanelTexture(v44, v36, v2->fields.closedPanelTexture, 0LL);
        SubmarineMapPanelComponent__SetClosedPanelVisible(v44, 1, 0LL);
      }
      v25 = v2->fields.submarineData;
      if ( v25 )
      {
        PositionCalculator_k__BackingField = v25->fields._PositionCalculator_k__BackingField;
        ++v29;
        v30 += 2;
        if ( PositionCalculator_k__BackingField )
          continue;
      }
      goto LABEL_54;
    }
    PositionCalculator_k__BackingField = v25->fields._PositionCalculator_k__BackingField;
    ++v28;
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
  UnityEngine_GameObject_o *effectContainer; // x0
  const MethodInfo_369DEB4 *v19; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v21; // x22
  SchedulerTaskCommonEffect_o *v22; // x0
  SchedulerTaskCommonEffect_o *v23; // x21
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v26; // x24
  System_Delegate_o *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Delegate_o *v30; // x8
  SchedulerTaskBase_TaskCallback_c *v31; // x1
  SchedulerTaskBase_array *v32; // x22
  SchedulerTaskWaitTime_o *v33; // x23
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  SchedulerTaskOrthostichy_o *v38; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v41; // s8
  System_Collections_Generic_List_object__o *v42; // x22
  SchedulerTaskWaitTime_o *v43; // x23
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  const MethodInfo *v50; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v52; // x19
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  SchedulerTaskBase_array *v55; // x20
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  SchedulerTaskParallel_o *v58; // x19
  __int64 v60; // x0
  System_Nullable_Vector3__o v61; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v62; // 0:x0.16
  System_Nullable_Vector3__o v63; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B7A16 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, panelData);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9);
    sub_1B4CF90(&Method_System_Nullable_Vector3___ctor__, v10);
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, v11);
    sub_1B4CF90(&SchedulerTaskCommonEffect_TypeInfo, v12);
    sub_1B4CF90(&SchedulerTaskOrthostichy_TypeInfo, v13);
    sub_1B4CF90(&SchedulerTaskParallel_TypeInfo, v14);
    sub_1B4CF90(&SchedulerTaskWaitTime_TypeInfo, v15);
    sub_1B4CF90(&Method_SubmarineMapPanelData_OpenPanel__, v16);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v17);
    byte_49B7A16 = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_32;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  *(_QWORD *)&v62.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  v21 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v62.fields.hasValue = &v61;
  *(_QWORD *)&v61.fields.hasValue = 0LL;
  *(_QWORD *)&v61.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v62, LocalPosition_k__BackingField, v19);
  v22 = (SchedulerTaskCommonEffect_o *)sub_1B4D1DC(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v63.fields.hasValue = 0LL;
  *(_QWORD *)&v63.fields.value.fields.y = 0LL;
  v23 = v22;
  SchedulerTaskCommonEffect___ctor_41886000(
    v22,
    v21,
    effectScanedPanelObjPool,
    v61,
    v63,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v23 )
    goto LABEL_32;
  p_StartCallback = (System_Delegate_o **)&v23->fields.StartCallback;
  StartCallback = (System_Delegate_o *)v23->fields.StartCallback;
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v26, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v27 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v26, 0LL);
  v30 = v27;
  if ( v27 )
  {
    v31 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v27->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *p_StartCallback = v27;
      if ( (SchedulerTaskBase_TaskCallback_c *)v27->klass == v31 )
        goto LABEL_11;
    }
    sub_1B4D4AC(v27);
  }
  *p_StartCallback = v30;
LABEL_11:
  sub_1B4CF34((CGThumbnailListItem_o *)&v23->fields.StartCallback, (int32_t)v30, v28, v29);
  v32 = (SchedulerTaskBase_array *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 2LL);
  v33 = (SchedulerTaskWaitTime_o *)sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v33, waitTime, 0LL);
  if ( !v32 )
    goto LABEL_32;
  if ( v33 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B4D0CC(v33, v32->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v32->max_length )
    goto LABEL_33;
  v32->m_Items[0] = (SchedulerTaskBase_o *)v33;
  sub_1B4CF34((CGThumbnailListItem_o *)v32->m_Items, (int32_t)v33, v34, v35);
  effectContainer = (UnityEngine_GameObject_o *)sub_1B4D0CC(v23, v32->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( v32->max_length <= 1 )
    goto LABEL_33;
  v32->m_Items[1] = (SchedulerTaskBase_o *)v23;
  sub_1B4CF34((CGThumbnailListItem_o *)&v32->m_Items[1], (int32_t)v23, v36, v37);
  v38 = (SchedulerTaskOrthostichy_o *)sub_1B4D1DC(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v38, v32, 0LL);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v41 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v42 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v42,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v43 = (SchedulerTaskWaitTime_o *)sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v43, v41, 0LL);
  if ( !v42 )
    goto LABEL_32;
  items = v42->fields._items;
  v47 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v42->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v42->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v42,
      (Il2CppObject *)v43,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    v42->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v43;
    sub_1B4CF34((CGThumbnailListItem_o *)(v49 + 4), (int32_t)v43, v44, v45);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v50);
  System_Collections_Generic_List_object___AddRange(
    v42,
    RevealSpotOnPanelTasks,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v52 = (SchedulerTaskOrthostichy_o *)sub_1B4D1DC(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor_41888856(v52, (System_Collections_Generic_List_SchedulerTaskBase__o *)v42, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !effectContainer )
LABEL_32:
    sub_1B4D1EC(effectContainer, panelData);
  v55 = (SchedulerTaskBase_array *)effectContainer;
  if ( v38 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B4D0CC(v38, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v55->max_length )
    goto LABEL_33;
  v55->m_Items[0] = (SchedulerTaskBase_o *)v38;
  sub_1B4CF34((CGThumbnailListItem_o *)v55->m_Items, (int32_t)v38, v53, v54);
  if ( v52 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B4D0CC(v52, v55->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v60 = sub_1B4D210();
      sub_1B4D0B8(v60, 0LL);
    }
  }
  if ( v55->max_length <= 1 )
LABEL_33:
    sub_1B4D1F4(effectContainer, panelData);
  v55->m_Items[1] = (SchedulerTaskBase_o *)v52;
  sub_1B4CF34((CGThumbnailListItem_o *)&v55->m_Items[1], (int32_t)v52, v56, v57);
  v58 = (SchedulerTaskParallel_o *)sub_1B4D1DC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v58, v55, 0LL);
  return (SchedulerTaskBase_o *)v58;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_array *panelDataArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x21
  Il2CppObject *OpenPanelAndRevealSpotTask; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppObject *v19; // x1
  Il2CppClass **v20; // x0
  SchedulerTaskParallel_o *v21; // x19

  if ( (byte_49B7A17 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, panelDataArray);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_1B4CF90(&SchedulerTaskParallel_TypeInfo, v7);
    byte_49B7A17 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  v12 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1B4D1F4(OpenPanelAndRevealSpotTask, v10);
      OpenPanelAndRevealSpotTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                     this,
                                                     panelDataArray->m_Items[v13],
                                                     0.0,
                                                     v11);
      if ( !v8 )
        break;
      items = v8->fields._items;
      v17 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      v19 = OpenPanelAndRevealSpotTask;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          OpenPanelAndRevealSpotTask,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1B4CF34((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
      }
      LODWORD(v12) = panelDataArray->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1B4D1EC(OpenPanelAndRevealSpotTask, v10);
  }
LABEL_13:
  v21 = (SchedulerTaskParallel_o *)sub_1B4D1DC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_41889888(v21, (System_Collections_Generic_List_SchedulerTaskBase__o *)v8, 0LL);
  return (SchedulerTaskBase_o *)v21;
}


void __fastcall SubmarineMapManager__CreatePanels(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct SubmarineMapAssetManager_o *v18; // x8
  UnityEngine_GameObject_o *v19; // x0
  Il2CppObject *current; // x20
  Il2CppObject *v21; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x22
  Il2CppObject *Component_object; // x0
  __int64 v27; // x1
  struct SubmarineMapDataManager_o *v28; // x8
  SubmarineMapPanelComponent_o *v29; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v31; // s8
  float v32; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  __int64 v34; // x1
  ObjectDomain_o *v35; // x23
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Action_object__o *v38; // x21
  const MethodInfo *v39; // x2
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49B79FB & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_SubmarineMapPanelData__TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v5);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v7);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    this = (SubmarineMapManager_o *)sub_1B4CF90(&Method_SubmarineMapManager_ClickPanel__, v10);
    byte_49B79FB = 1;
  }
  memset(&v41, 0, sizeof(v41));
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v40,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v41 = v40;
            while ( 1 )
            {
              v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v41,
                      (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v16 )
                break;
              v18 = v2->fields.assetManager;
              if ( !v18 )
                sub_1B4D1EC(v16, v17);
              v19 = v2->fields.panelContainer;
              if ( !v19 )
                sub_1B4D1EC(0LL, v17);
              current = v41.fields._current;
              v21 = (Il2CppObject *)v18->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v19, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v23 = UnityEngine_Object__Instantiate_object__49839864(
                      v21,
                      transform,
                      (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
              v25 = (UnityEngine_GameObject_o *)v23;
              if ( !v23 )
                sub_1B4D1EC(0LL, v24);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v23,
                                   (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v28 = v2->fields.submarineData;
              if ( !v28 )
                sub_1B4D1EC(Component_object, v27);
              if ( !current )
                sub_1B4D1EC(Component_object, v27);
              v29 = (SubmarineMapPanelComponent_o *)Component_object;
              PositionCalculator_k__BackingField = v28->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_1B4D1EC(0LL, v27);
              v31 = PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.x
                                  * (float)(((2 * LODWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField))
                          * 0.5);
              v32 = PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.y
                                  * (float)(((2 * HIDWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField))
                          * 0.5);
              v42.fields.z = 0.0;
              v42.fields.x = v31;
              v42.fields.y = v32;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v42,
                                    PositionCalculator_k__BackingField,
                                    0LL);
              if ( !v29 )
                sub_1B4D1EC(ClosedPanelDomain, v34);
              v35 = ClosedPanelDomain;
              SubmarineMapPanelComponent__Initialize(v29, 0LL);
              v43.fields.z = 0.0;
              v43.fields.x = v31;
              v43.fields.y = v32;
              GameObjectExtensions__SetLocalPosition(v25, v43, 0LL);
              SubmarineMapPanelComponent__SetSize(v29, v35, 0LL);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v29, v35, v2->fields.closedPanelTexture, 0LL);
              current[3].klass = (Il2CppClass *)v29;
              sub_1B4CF34((CGThumbnailListItem_o *)&current[3], (int32_t)v29, v36, v37);
              v38 = (System_Action_object__o *)sub_1B4D1DC(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_object____ctor(
                v38,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                0LL);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v38,
                v39);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v41,
              (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_1B4D1EC(this, method);
      }
    }
  }
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealEachSpotsTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  void *Children; // x0
  __int64 v9; // x1
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w23
  Il2CppObject *Component_object; // x22
  const MethodInfo *v14; // x2

  if ( (byte_49B7A1A & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v4);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v5);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v6);
    byte_49B7A1A = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_15;
  v10 = *((_DWORD *)Children + 6);
  v11 = Children;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        sub_1B4D1F4(Children, v9);
      Children = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v14);
        if ( !v7 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v7;
    }
LABEL_15:
    sub_1B4D1EC(Children, v9);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v7;
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotOnPanelTasks(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
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
  __int64 v15; // x22
  MapControl_MapInfo_o *mapInfo; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x21
  System_Collections_Generic_List_object__o *v21; // x20
  SchedulerTaskNone_o *v22; // x23
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *SpotList; // x23
  System_Predicate_object__o *v30; // x24
  __int64 v31; // x8
  UnityEngine_Transform_o *v32; // x21
  int32_t v33; // w22
  UnityEngine_Object_o *v34; // x21
  Il2CppObject *Component_object; // x1
  const MethodInfo *v37; // x2

  if ( (byte_49B7A15 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___, panelData);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&System_Predicate_MapControl_SpotInfo__TypeInfo, v10);
    sub_1B4CF90(&SchedulerTaskNone_TypeInfo, v11);
    sub_1B4CF90(&SrcSpotBasePrefab_TypeInfo, v12);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__, v13);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo, v14);
    byte_49B7A15 = 1;
  }
  v15 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_25;
  *(_QWORD *)(v15 + 16) = panelData;
  v20 = v15 + 16;
  sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 16), (int32_t)panelData, v18, v19);
  v21 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v22 = (SchedulerTaskNone_o *)sub_1B4D1DC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v22, 0LL);
  if ( !v21 )
    goto LABEL_25;
  items = v21->fields._items;
  v26 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v21->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v21->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v21,
      (Il2CppObject *)v22,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v21->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v22;
    sub_1B4CF34((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
  }
  if ( !*(_QWORD *)v20 || *(int *)(*(_QWORD *)v20 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v21;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v30 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_MapControl_SpotInfo__TypeInfo);
  System_Predicate_object____ctor(
    v30,
    (Il2CppObject *)v15,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__,
    0LL);
  if ( !SpotList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Find(
          SpotList,
          (System_Predicate_T__o *)v30,
          (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v21;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_25;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v31 = *(_QWORD *)v20;
  if ( !*(_QWORD *)v20 )
    goto LABEL_25;
  v32 = (UnityEngine_Transform_o *)mapInfo;
  v33 = *(_DWORD *)(v31 + 40);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v33, 0LL);
  if ( !v32 )
    goto LABEL_25;
  v34 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v32, (System_String_o *)mapInfo, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v21;
  if ( !v34 )
LABEL_25:
    sub_1B4D1EC(mapInfo, v17);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v34,
                       (const MethodInfo_2EF852C *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v37);
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotTasks(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x20
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  __int64 v12; // x1
  SpotEntity_o *Mine; // x21
  const MethodInfo *v14; // x2
  __int64 v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  __int64 v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0

  if ( (byte_49B7A1B & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, spot);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_1B4CF90(&SubmarineLightenSpotPerformance_TypeInfo, v8);
    sub_1B4CF90(&SubmarineRevealSpotPerformance_TypeInfo, v9);
    byte_49B7A1B = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v14);
  v15 = sub_1B4D1DC(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v15, 0LL);
  *(_QWORD *)(v15 + 48) = spot;
  sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 48), (int32_t)spot, v16, v17);
  if ( !v10 )
    goto LABEL_20;
  items = v10->fields._items;
  v21 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v15,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v15;
    sub_1B4CF34((CGThumbnailListItem_o *)(v23 + 4), v15, v18, v19);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  v24 = sub_1B4D1DC(SubmarineLightenSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v24, 0LL);
  *(_QWORD *)(v24 + 48) = spot;
  sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 48), (int32_t)spot, v25, v26);
  v29 = v10->fields._items;
  v30 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v10->fields._version;
  if ( !v29 )
LABEL_20:
    sub_1B4D1EC(mMapCtrl_SpotInfo, v12);
  v31 = v10->fields._size;
  if ( (unsigned int)v31 >= v29->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v24,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v10->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v24;
    sub_1B4CF34((CGThumbnailListItem_o *)(v32 + 4), v24, v27, v28);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateScanOpenPanelTask(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
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
  System_Collections_Generic_List_object__o *v23; // x20
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  float ScanOpenPanelInterval; // s8
  SubmarineMapManager___c_c *v29; // x8
  System_Collections_Generic_List_object__o *v30; // x21
  System_Predicate_object__o *_9__97_0; // x22
  Il2CppObject *v32; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x21
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v40; // x23
  struct SubmarineMapManager___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w23
  __int64 v45; // x22
  int v46; // w29
  float v47; // s9
  System_Predicate_object__o *v48; // x23
  System_Collections_Generic_List_T__o *v49; // x23
  System_Collections_Generic_List_object__o *v50; // x0
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v54; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v56; // x2
  float v57; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x1
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v67; // w8
  SchedulerTaskParallel_o *v68; // x19
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_49B7A18 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___, *(_QWORD *)&scanId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v9);
    sub_1B4CF90(&System_Func_SubmarineScanEvent__int__TypeInfo, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v14);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v15);
    sub_1B4CF90(&System_Predicate_SubmarineScanEvent__TypeInfo, v16);
    sub_1B4CF90(&SchedulerTaskParallel_TypeInfo, v17);
    sub_1B4CF90(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__, v18);
    sub_1B4CF90(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__, v19);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__, v20);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo, v21);
    sub_1B4CF90(&SubmarineMapManager___c_TypeInfo, v22);
    byte_49B7A18 = 1;
  }
  memset(&v71, 0, sizeof(v71));
  v23 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_48;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_48;
  ScanOpenPanelInterval = SubmarineSettingsManager__GetScanOpenPanelInterval(Settings_k__BackingField, scanId, v26);
  Settings_k__BackingField = (SubmarineSettingsManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                                             scanId,
                                                             panelData,
                                                             this->fields.submarineData,
                                                             0LL);
  v29 = SubmarineMapManager___c_TypeInfo;
  v30 = (System_Collections_Generic_List_object__o *)Settings_k__BackingField;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v29 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_0 = (System_Predicate_object__o *)v29->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = SubmarineMapManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__97_0 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_object____ctor(
      _9__97_0,
      v32,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__,
      0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__97_0, (int32_t)_9__97_0, v34, v35);
  }
  if ( !v30 )
    goto LABEL_48;
  All = System_Collections_Generic_List_object___FindAll(
          v30,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_35808EC *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v37 = SubmarineMapManager___c_TypeInfo;
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v37 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_1 = (System_Func_object__int__o *)v37->static_fields->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = SubmarineMapManager___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v37->static_fields->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__97_1,
      v40,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__,
      0LL);
    v41 = SubmarineMapManager___c_TypeInfo->static_fields;
    v41->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v41->__9__97_1, (int32_t)_9__97_1, v42, v43);
  }
  v44 = System_Linq_Enumerable__Max_object_(
          v38,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_2F2C7B4 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v45 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v45, 0LL);
  if ( !v45 )
LABEL_48:
    sub_1B4D1EC(Settings_k__BackingField, v25);
  v46 = v44 + 1;
  *(_DWORD *)(v45 + 16) = 0;
  if ( v44 + 1 >= 1 )
  {
    v47 = 0.0;
    do
    {
      v48 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_object____ctor(
        v48,
        (Il2CppObject *)v45,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0LL);
      if ( !v38 )
        goto LABEL_48;
      v49 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v38,
              (System_Predicate_T__o *)v48,
              (const MethodInfo_35808EC *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v50 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v50,
        (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v49 )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v70,
        (System_Collections_Generic_List_object__o *)v49,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v71 = v70;
      while ( 1 )
      {
        v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v71,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v51 )
          break;
        current = v71.fields._current;
        if ( !v71.fields._current )
          sub_1B4D1EC(v51, v52);
        v54 = this->fields.submarineData;
        if ( !v54 )
          sub_1B4D1EC(0LL, v52);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v54,
                           (int32_t)v71.fields._current[1].klass,
                           HIDWORD(v71.fields._current[1].klass),
                           0LL);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v57,
                                v56);
            v61 = (Il2CppObject *)HitObstractTask;
            if ( !v23 )
              sub_1B4D1EC(HitObstractTask, HitObstractTask);
            items = v23->fields._items;
            v63 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1B4D1EC(HitObstractTask, HitObstractTask);
            size = v23->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              v61,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v47,
                                           v56);
            v61 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v23 )
              sub_1B4D1EC(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            items = v23->fields._items;
            v63 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1B4D1EC(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_32:
            v65 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v65[4] = (Il2CppClass *)v61;
            sub_1B4CF34((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v61, v59, v60);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v71,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v47 = ScanOpenPanelInterval + v47;
      v67 = *(_DWORD *)(v45 + 16) + 1;
      *(_DWORD *)(v45 + 16) = v67;
    }
    while ( v67 < v46 );
  }
  v68 = (SchedulerTaskParallel_o *)sub_1B4D1DC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_41889888(v68, (System_Collections_Generic_List_SchedulerTaskBase__o *)v23, 0LL);
  return (SchedulerTaskBase_o *)v68;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateScanTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        int32_t scanId,
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x20
  __int64 MoveCameraToPositionTask; // x0
  const MethodInfo *v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v40; // d11
  float32x2_t v41; // d9
  int32x2_t v42; // d10
  float32x2_t v43; // d8
  System_Collections_Generic_List_object__o *v44; // x19
  struct SubmarineMapDataManager_o *v45; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v47; // d0 OVERLAPPED
  float v48; // s8
  int v49; // s2
  int v50; // s1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct System_Object_array *items; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  __int64 v56; // x1
  Il2CppClass **v57; // x0
  const MethodInfo *v58; // x2
  Il2CppObject *ScanAnimObjectPrefab; // x22
  const MethodInfo *v60; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v62; // s2
  float v63; // s0
  float v64; // s1
  float v65; // s9
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v67; // x0
  __int64 v68; // x24
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  Il2CppObject *Component_object; // x22
  float32x2_t v72; // d0
  struct SubmarineMapDataManager_o *v73; // x8
  struct SubmarineSettingsManager_o *v74; // x8
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  __int64 v80; // x1
  Il2CppClass **v81; // x0
  float JumpStartTime; // s10
  __int64 v83; // x28
  __int64 v84; // x25
  System_Delegate_o *v85; // x26
  SchedulerTaskBase_TaskCallback_o *v86; // x27
  System_Delegate_o *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  System_Delegate_c *v90; // x8
  SchedulerTaskBase_TaskCallback_c *v91; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v93; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v94; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v97; // x0
  __int64 v98; // x25
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  System_String_o *v101; // x27
  SchedulerTaskWaitLoadAsset_o *v102; // x26
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  __int64 v111; // x1
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  __int64 v114; // x1
  float v115; // s10
  System_Delegate_o *v116; // x27
  SchedulerTaskBase_TaskCallback_o *v117; // x28
  System_Delegate_o *v118; // x0
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  SchedulerTaskBase_TaskCallback_c *v121; // x1
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x0
  float SelectedPanelEffecFinishTime; // s10
  System_Delegate_o *v129; // x27
  SchedulerTaskBase_TaskCallback_o *v130; // x28
  System_Delegate_o *v131; // x0
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  SchedulerTaskBase_TaskCallback_c *v134; // x1
  __int64 *v135; // x27
  __int64 v136; // x1
  const MethodInfo_369DA94 *v137; // x2
  float JumpDuration; // s10
  float x; // s0
  float32x2_t v140; // d12
  MapCamera_o *mapCamera; // x21
  float v142; // s1
  MapCameraPerformance_o *v143; // x0
  SchedulerTaskBase_o *v144; // x26
  UnityEngine_GameObject_o *v145; // x24
  SchedulerTaskMovePerformance_o *v146; // x0
  SchedulerTaskBase_o *v147; // x21
  int32_t v148; // w2
  const MethodInfo *v149; // x3
  SchedulerTaskBase_array *v150; // x24
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  SimpleAnimation_o *AnimationComponent; // x26
  System_String_o *AnimName; // x27
  System_Delegate_o *v155; // x27
  SchedulerTaskBase_TaskCallback_o *v156; // x28
  System_Delegate_o *v157; // x0
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  SchedulerTaskBase_TaskCallback_c *v160; // x1
  __int64 v161; // x27
  __int64 v162; // x20
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  __int64 v165; // x24
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  SchedulerTaskOrthostichy_o *v170; // x21
  int32_t v171; // w2
  const MethodInfo *v172; // x3
  SchedulerTaskParallel_o *v173; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v175; // x20
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  struct System_Object_array *v178; // x8
  _QWORD *v179; // x9
  __int64 v180; // x10
  Il2CppClass **v181; // x0
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  struct System_Object_array *v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  Il2CppClass **v187; // x0
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  struct System_Object_array *v190; // x8
  _QWORD *v191; // x9
  __int64 v192; // x10
  Il2CppClass **v193; // x0
  __int64 v195; // x0
  __int64 v196; // [xsp+8h] [xbp-E8h]
  float v197; // [xsp+20h] [xbp-D0h]
  float v198; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v203; // 0:x4.8
  System_Nullable_Vector2__o v204; // 0:x0.12
  UnityEngine_Vector3_o v205; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v206; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v207; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v208; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49B7A14 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventPanelScanMaster___, panelData);
    sub_1B4CF90(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___, v8);
    sub_1B4CF90(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v12);
    sub_1B4CF90(&MapCameraPerformance_TypeInfo, v13);
    sub_1B4CF90(&Method_System_Nullable_Vector2___ctor__, v14);
    sub_1B4CF90(&Method_System_Nullable_float___ctor__, v15);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v16);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v17);
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, v18);
    sub_1B4CF90(&SchedulerTaskMovePerformance_TypeInfo, v19);
    sub_1B4CF90(&SchedulerTaskOrthostichy_TypeInfo, v20);
    sub_1B4CF90(&SchedulerTaskParallel_TypeInfo, v21);
    sub_1B4CF90(&SchedulerTaskSimpleAnimation_TypeInfo, v22);
    sub_1B4CF90(&SchedulerTaskWaitLoadAsset_TypeInfo, v23);
    sub_1B4CF90(&SchedulerTaskWaitTime_TypeInfo, v24);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B4CF90(&SoundManager_TypeInfo, v26);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v27);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__, v28);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__, v29);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__, v30);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__, v31);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo, v32);
    byte_49B7A14 = 1;
  }
  v33 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_126;
  *(_QWORD *)(v33 + 32) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 32), (int32_t)this, v36, v37);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_126;
  if ( !panelData )
    goto LABEL_126;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_126;
  v40.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v41.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v42.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v43.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v44 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v45 = this->fields.submarineData;
  if ( !v45 )
    goto LABEL_126;
  Settings_k__BackingField = v45->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_126;
  v47 = vadd_f32(
          v43,
          vmul_f32(
            vmul_f32(v41, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v40, 1uLL).n64_u64[0] | 0x100000001LL), v42))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v48 = *((float *)&v47 + 1);
  v49 = 0;
  v50 = HIDWORD(v47);
  value = (UnityEngine_Vector2_o)v47;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v47,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v35);
  if ( !v44 )
    goto LABEL_126;
  items = v44->fields._items;
  v54 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v44->fields._version;
  if ( !items )
    goto LABEL_126;
  v55 = v44->fields._size;
  v56 = MoveCameraToPositionTask;
  if ( (unsigned int)v55 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v44,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &items->obj.klass + v55;
    v44->fields._size = v55 + 1;
    v57[4] = (Il2CppClass *)v56;
    sub_1B4CF34((CGThumbnailListItem_o *)(v57 + 4), v56, v51, v52);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_319D99C *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v44;
  if ( !this->fields.assetManager )
    goto LABEL_126;
  ScanAnimObjectPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                           this->fields.assetManager,
                                           *(_DWORD *)(MoveCameraToPositionTask + 56),
                                           v58);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanAnimObjectPrefab, 0LL, 0LL) )
  {
    HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v60);
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
      *(UnityEngine_Vector3_o *)(&v62 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                               0LL);
      MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
      v198 = v63;
      v197 = v64;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v65 = v62;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v67 = UnityEngine_Object__Instantiate_object__49839864(
              ScanAnimObjectPrefab,
              transform,
              (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
      *(_QWORD *)(v33 + 16) = v67;
      v68 = v33 + 16;
      sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 16), (int32_t)v67, v69, v70);
      v205.fields.y = v197;
      v205.fields.x = v198;
      v205.fields.z = v65;
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v33 + 16), v205, 0LL);
      MoveCameraToPositionTask = *(_QWORD *)(v33 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *(UnityEngine_GameObject_o **)v68,
                           (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_49B5363 )
      {
        sub_1B4CF90(&System_Math_TypeInfo, v35);
        byte_49B5363 = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !Component_object )
        goto LABEL_126;
      v72.n64_u64[0] = vsub_f32((float32x2_t)__PAIR64__(LODWORD(v197), LODWORD(v198)), (float32x2_t)value).n64_u64[0];
      SubmarineScannerComponent__Initialize(
        (SubmarineScannerComponent_o *)Component_object,
        sqrtf((float)(v65 * v65) + vaddv_f32(vmul_f32(v72, v72))),
        0LL);
      if ( !SubmarineScannerComponent__IsAnimationPrepared((SubmarineScannerComponent_o *)Component_object, 0LL) )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v44;
      v44 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v44,
        (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v73 = this->fields.submarineData;
      if ( !v73 )
        goto LABEL_126;
      v74 = v73->fields._Settings_k__BackingField;
      if ( !v74 )
        goto LABEL_126;
      v206.fields.y = v197;
      v206.fields.x = v198;
      v206.fields.z = v65;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            v206,
                                            1.0,
                                            v74->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v35);
      if ( !v44 )
        goto LABEL_126;
      v77 = v44->fields._items;
      v78 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v44->fields._version;
      if ( !v77 )
        goto LABEL_126;
      v79 = v44->fields._size;
      v80 = MoveCameraToPositionTask;
      if ( (unsigned int)v79 >= v77->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = &v77->obj.klass + v79;
        v44->fields._size = v79 + 1;
        v81[4] = (Il2CppClass *)v80;
        sub_1B4CF34((CGThumbnailListItem_o *)(v81 + 4), v80, v75, v76);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime((SubmarineScannerComponent_o *)Component_object, 0LL);
      v83 = sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v83, JumpStartTime, 0LL);
      if ( !v83 )
        goto LABEL_126;
      v84 = v83 + 24;
      v85 = *(System_Delegate_o **)(v83 + 24);
      v86 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v86,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0LL);
      v87 = System_Delegate__Combine(v85, (System_Delegate_o *)v86, 0LL);
      v90 = (System_Delegate_c *)v87;
      if ( v87 )
      {
        v91 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v87->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        *(_QWORD *)v84 = v87;
        if ( (SchedulerTaskBase_TaskCallback_c *)v87->klass != v91 )
          goto LABEL_98;
      }
      else
      {
        *(_QWORD *)v84 = 0LL;
      }
      sub_1B4CF34((CGThumbnailListItem_o *)(v83 + 24), (int32_t)v87, v88, v89);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_126;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v93 = this->fields.playingScanVoiceData;
        if ( !v93 )
          goto LABEL_126;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v93->fields.assetName, 0LL);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v94 = this->fields.playingScanVoiceData;
          if ( !v94 )
            goto LABEL_126;
          assetName = v94->fields.assetName;
          vcName = v94->fields.vcName;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
        }
      }
      v97 = GameObjectExtensions__SafeGetComponent_object_(
              *(UnityEngine_GameObject_o **)(v33 + 16),
              (const MethodInfo_2F54F2C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v33 + 24) = v97;
      v98 = v33 + 24;
      sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 24), (int32_t)v97, v99, v100);
      if ( !*(_QWORD *)(v33 + 24) )
        goto LABEL_126;
      v101 = *(System_String_o **)(*(_QWORD *)(v33 + 24) + 56LL);
      v102 = (SchedulerTaskWaitLoadAsset_o *)sub_1B4D1DC(SchedulerTaskWaitLoadAsset_TypeInfo);
      SchedulerTaskWaitLoadAsset___ctor(v102, v101, 0LL);
      v105 = v44->fields._items;
      v106 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v44->fields._version;
      if ( !v105 )
        goto LABEL_126;
      v107 = v44->fields._size;
      if ( (unsigned int)v107 >= v105->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v102,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
      }
      else
      {
        v108 = &v105->obj.klass + v107;
        v44->fields._size = v107 + 1;
        v108[4] = (Il2CppClass *)v102;
        sub_1B4CF34((CGThumbnailListItem_o *)(v108 + 4), (int32_t)v102, v103, v104);
      }
      if ( !*(_QWORD *)v98 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v111 = *(_QWORD *)(*(_QWORD *)v98 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v111;
      sub_1B4CF34((CGThumbnailListItem_o *)(MoveCameraToPositionTask + 16), v111, v109, v110);
      if ( !*(_QWORD *)v98 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask
        || (v114 = *(_QWORD *)(*(_QWORD *)v98 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v114,
            sub_1B4CF34((CGThumbnailListItem_o *)(MoveCameraToPositionTask + 24), v114, v112, v113),
            !*(_QWORD *)v98)
        || (v196 = v83,
            v115 = *(float *)(*(_QWORD *)v98 + 32LL),
            v84 = sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v84, v115, 0LL),
            !v84) )
      {
LABEL_126:
        sub_1B4D1EC(MoveCameraToPositionTask, v35);
      }
      v85 = (System_Delegate_o *)(v84 + 24);
      v116 = *(System_Delegate_o **)(v84 + 24);
      v117 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v117,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0LL);
      v118 = System_Delegate__Combine(v116, (System_Delegate_o *)v117, 0LL);
      v90 = (System_Delegate_c *)v118;
      if ( v118 )
      {
        v121 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v118->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v85->klass = (System_Delegate_c *)v118;
        if ( (SchedulerTaskBase_TaskCallback_c *)v118->klass != v121 )
          goto LABEL_98;
      }
      else
      {
        v85->klass = 0LL;
      }
      sub_1B4CF34((CGThumbnailListItem_o *)(v84 + 24), (int32_t)v118, v119, v120);
      v124 = v44->fields._items;
      v125 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v44->fields._version;
      if ( !v124 )
        goto LABEL_126;
      v126 = v44->fields._size;
      if ( (unsigned int)v126 >= v124->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v84,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
      }
      else
      {
        v127 = &v124->obj.klass + v126;
        v44->fields._size = v126 + 1;
        v127[4] = (Il2CppClass *)v84;
        sub_1B4CF34((CGThumbnailListItem_o *)(v127 + 4), v84, v122, v123);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
                                       (SubmarineScannerComponent_o *)Component_object,
                                       0LL);
      v84 = sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v84, SelectedPanelEffecFinishTime, 0LL);
      if ( !v84 )
        goto LABEL_126;
      v85 = (System_Delegate_o *)(v84 + 32);
      v129 = *(System_Delegate_o **)(v84 + 32);
      v130 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v130,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0LL);
      v131 = System_Delegate__Combine(v129, (System_Delegate_o *)v130, 0LL);
      v90 = (System_Delegate_c *)v131;
      if ( v131 )
      {
        v134 = SchedulerTaskBase_TaskCallback_TypeInfo;
        v135 = &qword_49B5000;
        if ( (SchedulerTaskBase_TaskCallback_c *)v131->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v85->klass = (System_Delegate_c *)v131;
        if ( (SchedulerTaskBase_TaskCallback_c *)v131->klass != v134 )
          goto LABEL_98;
      }
      else
      {
        v85->klass = 0LL;
        v135 = &qword_49B5000;
      }
      sub_1B4CF34((CGThumbnailListItem_o *)(v84 + 32), (int32_t)v131, v132, v133);
      *(_BYTE *)(v84 + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration((SubmarineScannerComponent_o *)Component_object, 0LL);
      if ( !*((_BYTE *)v135 + 867) )
      {
        sub_1B4CF90(&System_Math_TypeInfo, v136);
        *((_BYTE *)v135 + 867) = 1;
      }
      x = value.fields.x;
      v140.n64_u64[0] = vsub_f32((float32x2_t)value, (float32x2_t)__PAIR64__(LODWORD(v197), LODWORD(v198))).n64_u64[0];
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        x = value.fields.x;
      }
      mapCamera = this->fields.mapCamera;
      position.fields.value.fields.y = 0.0;
      LODWORD(v204.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&v204.fields.hasValue = &position;
      v142 = v48;
      *(_QWORD *)&position.fields.hasValue = 0LL;
      System_Nullable_Vector2____ctor(v204, *(UnityEngine_Vector2_o *)&x, v137);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, 1.0, (const MethodInfo_369BE50 *)Method_System_Nullable_float___ctor__);
      v143 = (MapCameraPerformance_o *)sub_1B4D1DC(MapCameraPerformance_TypeInfo);
      v203 = size;
      v144 = (SchedulerTaskBase_o *)v143;
      MapCameraPerformance___ctor(v143, mapCamera, JumpDuration, position, v203, 0, 0LL);
      v145 = *(UnityEngine_GameObject_o **)v68;
      v146 = (SchedulerTaskMovePerformance_o *)sub_1B4D1DC(SchedulerTaskMovePerformance_TypeInfo);
      v208.fields.z = 0.0;
      v207.fields.y = v197;
      v207.fields.x = v198;
      v207.fields.z = v65;
      v208.fields.x = value.fields.x;
      v208.fields.y = v48;
      v147 = (SchedulerTaskBase_o *)v146;
      SchedulerTaskMovePerformance___ctor(
        v146,
        v145,
        v207,
        v208,
        sqrtf((float)((float)(0.0 - v65) * (float)(0.0 - v65)) + vaddv_f32(vmul_f32(v140, v140))) / JumpDuration,
        0,
        0LL);
      MoveCameraToPositionTask = sub_1B4D038(SchedulerTaskBase___TypeInfo, 2LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v150 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v144 )
      {
        MoveCameraToPositionTask = sub_1B4D0CC(v144, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( !v150->max_length )
        goto LABEL_127;
      v150->m_Items[0] = v144;
      sub_1B4CF34((CGThumbnailListItem_o *)v150->m_Items, (int32_t)v144, v148, v149);
      if ( v147 )
      {
        MoveCameraToPositionTask = sub_1B4D0CC(v147, v150->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( v150->max_length <= 1 )
        goto LABEL_127;
      v150->m_Items[1] = v147;
      sub_1B4CF34((CGThumbnailListItem_o *)&v150->m_Items[1], (int32_t)v147, v151, v152);
      this = (SubmarineMapManager_o *)sub_1B4D1DC(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v150, 0LL);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(
                             (SubmarineScannerComponent_o *)Component_object,
                             0LL);
      AnimName = SubmarineScannerComponent__get_AnimName((SubmarineScannerComponent_o *)Component_object, 0LL);
      v68 = sub_1B4D1DC(SchedulerTaskSimpleAnimation_TypeInfo);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v68, AnimationComponent, AnimName, 0LL);
      if ( !v68 )
        goto LABEL_126;
      v85 = (System_Delegate_o *)(v68 + 32);
      v155 = *(System_Delegate_o **)(v68 + 32);
      v156 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v156,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0LL);
      v157 = System_Delegate__Combine(v155, (System_Delegate_o *)v156, 0LL);
      v90 = (System_Delegate_c *)v157;
      if ( !v157 )
        goto LABEL_99;
      v160 = SchedulerTaskBase_TaskCallback_TypeInfo;
      v161 = v196;
      if ( (SchedulerTaskBase_TaskCallback_c *)v157->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v85->klass = (System_Delegate_c *)v157;
        if ( (SchedulerTaskBase_TaskCallback_c *)v157->klass == v160 )
        {
LABEL_100:
          sub_1B4CF34((CGThumbnailListItem_o *)v85, (int32_t)v90, v158, v159);
          MoveCameraToPositionTask = sub_1B4D038(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_126;
          v162 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_1B4D0CC(v68, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v162 + 24) )
              goto LABEL_127;
            *(_QWORD *)(v162 + 32) = v68;
            sub_1B4CF34((CGThumbnailListItem_o *)(v162 + 32), v68, v163, v164);
            MoveCameraToPositionTask = sub_1B4D038(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_126;
            v165 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_1B4D0CC(v161, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v165 + 24) )
                goto LABEL_127;
              *(_QWORD *)(v165 + 32) = v161;
              sub_1B4CF34((CGThumbnailListItem_o *)(v165 + 32), v161, v166, v167);
              if ( !this || (MoveCameraToPositionTask = sub_1B4D0CC(this, *(_QWORD *)(*(_QWORD *)v165 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v165 + 24) <= 1u )
                  goto LABEL_127;
                *(_QWORD *)(v165 + 40) = this;
                sub_1B4CF34((CGThumbnailListItem_o *)(v165 + 40), (int32_t)this, v168, v169);
                v170 = (SchedulerTaskOrthostichy_o *)sub_1B4D1DC(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v170, (SchedulerTaskBase_array *)v165, 0LL);
                if ( !v170 || (MoveCameraToPositionTask = sub_1B4D0CC(v170, *(_QWORD *)(*(_QWORD *)v162 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v162 + 24) > 1u )
                  {
                    *(_QWORD *)(v162 + 40) = v170;
                    sub_1B4CF34((CGThumbnailListItem_o *)(v162 + 40), (int32_t)v170, v171, v172);
                    v173 = (SchedulerTaskParallel_o *)sub_1B4D1DC(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v173, (SchedulerTaskBase_array *)v162, 0LL);
                    if ( v173 )
                    {
                      v173->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(
                                               (SubmarineScannerComponent_o *)Component_object,
                                               0LL);
                      v175 = (SchedulerTaskWaitTime_o *)sub_1B4D1DC(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v175, TimeToStartOpenPanel, 0LL);
                      v178 = v44->fields._items;
                      v179 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v44->fields._version;
                      if ( v178 )
                      {
                        v180 = v44->fields._size;
                        if ( (unsigned int)v180 >= v178->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v44,
                            (Il2CppObject *)v84,
                            *(const MethodInfo_35801DC **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v181 = &v178->obj.klass + v180;
                          v44->fields._size = v180 + 1;
                          v181[4] = (Il2CppClass *)v84;
                          sub_1B4CF34((CGThumbnailListItem_o *)(v181 + 4), v84, v176, v177);
                        }
                        v184 = v44->fields._items;
                        v185 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v44->fields._version;
                        if ( v184 )
                        {
                          v186 = v44->fields._size;
                          if ( (unsigned int)v186 >= v184->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v44,
                              (Il2CppObject *)v173,
                              *(const MethodInfo_35801DC **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v187 = &v184->obj.klass + v186;
                            v44->fields._size = v186 + 1;
                            v187[4] = (Il2CppClass *)v173;
                            sub_1B4CF34((CGThumbnailListItem_o *)(v187 + 4), (int32_t)v173, v182, v183);
                          }
                          v190 = v44->fields._items;
                          v191 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v44->fields._version;
                          if ( v190 )
                          {
                            v192 = v44->fields._size;
                            if ( (unsigned int)v192 >= v190->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v44,
                                (Il2CppObject *)v175,
                                *(const MethodInfo_35801DC **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v193 = &v190->obj.klass + v192;
                              v44->fields._size = v192 + 1;
                              v193[4] = (Il2CppClass *)v175;
                              sub_1B4CF34((CGThumbnailListItem_o *)(v193 + 4), (int32_t)v175, v188, v189);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v44;
                          }
                        }
                      }
                    }
                    goto LABEL_126;
                  }
LABEL_127:
                  sub_1B4D1F4(MoveCameraToPositionTask, v35);
                }
              }
            }
          }
LABEL_128:
          v195 = sub_1B4D210();
          sub_1B4D0B8(v195, 0LL);
        }
      }
LABEL_98:
      sub_1B4D4AC(v90);
LABEL_99:
      v85->klass = v90;
      v161 = v196;
      goto LABEL_100;
    }
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v44;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
        SubmarineMapManager_o *this,
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  __int64 v15; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v17; // d8
  float z; // s9
  System_Collections_Generic_List_object__o *v19; // x21
  SchedulerTaskBase_o *PanelDataList_k__BackingField; // x0
  const MethodInfo *v21; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct SubmarineMapDataManager_o *v30; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Object_array *v36; // x0
  const MethodInfo *v37; // x2
  int32x2_t v38; // d1
  struct SubmarineMapDataManager_o *v39; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *v41; // x22
  unsigned __int64 v42; // d0 OVERLAPPED
  float v43; // s2
  int v44; // s1
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  SchedulerTaskBase_o *v50; // x1
  Il2CppClass **v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_49B7A1D & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v12);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v13);
    byte_49B7A1D = 1;
  }
  memset(&v60, 0, sizeof(v60));
  v14 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_49B5361 )
  {
    sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v15);
    byte_49B5361 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v17.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v19 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v23 )
      break;
    current = v60.fields._current;
    if ( !v60.fields._current )
      sub_1B4D1EC(v23, v24);
    if ( !LOBYTE(v60.fields._current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v60.fields._current,
                                          -1,
                                          0LL);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v30 = this->fields.submarineData;
        if ( !v30 )
          sub_1B4D1EC(IsPanelSatisfyCommonReleaseCond, v27);
        PositionCalculator_k__BackingField = (float32x2_t *)v30->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_1B4D1EC(IsPanelSatisfyCommonReleaseCond, v27);
        z = z + 0.0;
        v17.n64_u64[0] = vadd_f32(
                           v17,
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
        if ( !v19 )
          sub_1B4D1EC(IsPanelSatisfyCommonReleaseCond, v27);
        items = v19->fields._items;
        v33 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v19->fields._version;
        if ( !items )
          sub_1B4D1EC(IsPanelSatisfyCommonReleaseCond, v27);
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            current,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v35[4] = (Il2CppClass *)current;
          sub_1B4CF34((CGThumbnailListItem_o *)(v35 + 4), (int32_t)current, v28, v29);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v19 )
    goto LABEL_34;
  if ( v19->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v14;
  v36 = System_Collections_Generic_List_object___ToArray(
          v19,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                    this,
                                    (SubmarineMapPanelData_array *)v36,
                                    v37);
  v39 = this->fields.submarineData;
  if ( !v39 )
    goto LABEL_34;
  Settings_k__BackingField = v39->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_34;
  v41 = (Il2CppObject *)PanelDataList_k__BackingField;
  v38.n64_f32[0] = (float)v19->fields._size;
  v42 = vdiv_f32(v17, vdup_lane_s32(v38, 0)).n64_u64[0];
  v43 = z / v38.n64_f32[0];
  v44 = HIDWORD(v42);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                    this,
                                    *(UnityEngine_Vector3_o *)&v42,
                                    1.0,
                                    Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                    v21);
  if ( !v14 )
    goto LABEL_34;
  v47 = v14->fields._items;
  v48 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v14->fields._version;
  if ( !v47 )
    goto LABEL_34;
  v49 = v14->fields._size;
  v50 = PanelDataList_k__BackingField;
  if ( (unsigned int)v49 >= v47->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)PanelDataList_k__BackingField,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &v47->obj.klass + v49;
    v14->fields._size = v49 + 1;
    v51[4] = (Il2CppClass *)v50;
    sub_1B4CF34((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v50, v45, v46);
  }
  v54 = v14->fields._items;
  v55 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v14->fields._version;
  if ( !v54 )
LABEL_34:
    sub_1B4D1EC(PanelDataList_k__BackingField, v21);
  v56 = v14->fields._size;
  if ( (unsigned int)v56 >= v54->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      v41,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &v54->obj.klass + v56;
    v14->fields._size = v56 + 1;
    v57[4] = (Il2CppClass *)v41;
    sub_1B4CF34((CGThumbnailListItem_o *)(v57 + 4), (int32_t)v41, v52, v53);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v14;
}


void __fastcall SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
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

  if ( (byte_49B7A07 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7A07 = 1;
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
    UnityEngine_Object__Destroy_68804456(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scanConfirmDialog, 0, v8, v9);
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
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(v12, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.selectScannerDialog, 0, v13, v14);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (CGThumbnailListItem_o *)&this->fields.newScannerDialog;
  v16 = (UnityEngine_Object_o *)newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_68804456(v18, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_1B4CF34(p_newScannerDialog, 0, v19, v20);
      return;
    }
LABEL_25:
    sub_1B4D1EC(klass, v5);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_49B79EA & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B79EA = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(panelContainer, 0LL);
  UnityEngine_Object__Destroy_68804456((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_68804456((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
  SubmarineMapManager__DestroyDialog(this, v4);
  EventMapManagerBase__DestroyMapObjects((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__DoPerformancesByVariedCond(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_Collections_Generic_IEnumerable_T__o *HideEnemyOccupiedPanelTasks; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_object__o *v19; // x20
  const MethodInfo *v20; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v23; // w1
  __int64 v24; // x22
  SchedulerTaskBase_TaskCallback_o *v25; // x23
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0

  if ( (byte_49B79EE & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, finishCallback);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v7);
    sub_1B4CF90(&SchedulerTaskNone_TypeInfo, v8);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__, v10);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo, v11);
    byte_49B79EE = 1;
  }
  v12 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 24), (int32_t)finishCallback, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_18;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_18;
  v23 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v23,
                                                                                 v20);
  if ( !v19 )
    goto LABEL_18;
  System_Collections_Generic_List_object___AddRange(
    v19,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v24 = sub_1B4D1DC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v24, 0LL);
  v25 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v24 )
    goto LABEL_18;
  *(_QWORD *)(v24 + 32) = v25;
  sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v25, v26, v27);
  items = v19->fields._items;
  v31 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v19->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v19->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v19,
      (Il2CppObject *)v24,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v24;
    sub_1B4CF34((CGThumbnailListItem_o *)(v33 + 4), v24, v28, v29);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_1B4D1EC(HideEnemyOccupiedPanelTasks, v14);
  TaskScheduler__AddTask_41895072(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v19,
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
    sub_1B4D1EC(assetManager, v6);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v7);
}


void __fastcall SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  this->fields.submarineData = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.submarineData, 0, v2, v3);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, 0LL);
}


SrcSpotBasePrefab_o *__fastcall SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_array *HasChild; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  int32_t HomeSpotId_k__BackingField; // w22
  int max_length; // w8
  UnityEngine_GameObject_array *v11; // x19
  unsigned int v12; // w23
  Il2CppObject *Component_object; // x21

  if ( (byte_49B7A00 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B7A00 = 1;
  }
  HasChild = (UnityEngine_GameObject_array *)GameObjectExtensions__HasChild(this->fields.rootSpotP, 0LL);
  v6 = 0LL;
  if ( ((unsigned __int8)HasChild & 1) != 0 )
  {
    submarineData = this->fields.submarineData;
    if ( !submarineData
      || (Settings_k__BackingField = submarineData->fields._Settings_k__BackingField) == 0LL
      || (HomeSpotId_k__BackingField = Settings_k__BackingField->fields._HomeSpotId_k__BackingField,
          (HasChild = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL)) == 0LL) )
    {
LABEL_27:
      sub_1B4D1EC(HasChild, v5);
    }
    max_length = HasChild->max_length;
    v11 = HasChild;
    if ( max_length >= 1 )
    {
      v12 = 0;
      v6 = 0LL;
      while ( 1 )
      {
        if ( v12 >= max_length )
          sub_1B4D1F4(HasChild, v5);
        HasChild = (UnityEngine_GameObject_array *)v11->m_Items[v12];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
                                                       (UnityEngine_Object_o *)v6,
                                                       0LL,
                                                       0LL);
          if ( ((unsigned __int8)HasChild & 1) != 0 )
            goto LABEL_21;
          if ( !v6 )
            goto LABEL_27;
          if ( SLODWORD(Component_object[9].klass) < SLODWORD(v6[9].klass) )
LABEL_21:
            v6 = Component_object;
        }
        max_length = v11->max_length;
        if ( (int)++v12 >= max_length )
          return (SrcSpotBasePrefab_o *)v6;
      }
    }
    return 0LL;
  }
  return (SrcSpotBasePrefab_o *)v6;
}


bool __fastcall SubmarineMapManager__HasSelfQuestAfterAction(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineMapManager_o *v3; // x19
  __int64 v4; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t QuestId_k__BackingField; // w1
  System_Collections_Generic_List_object__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v9; // x1

  v3 = this;
  if ( (byte_49B79ED & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, method);
    this = (SubmarineMapManager_o *)sub_1B4CF90(
                                      &Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__,
                                      v4);
    byte_49B79ED = 1;
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
        this = (SubmarineMapManager_o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(v3, v9),
        !HideEnemyOccupiedPanelTasks) )
  {
    sub_1B4D1EC(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_35803E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_49B7A0D & 1) == 0 )
  {
    sub_1B4CF90(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___, method);
    byte_49B7A0D = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_2FAD6FC *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void __fastcall SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_49B7A11 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7A11 = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = (CGThumbnailListItem_o *)&this->fields.scanRangeNotificator;
  v4 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_scanRangeNotificator->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_68804456(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_1B4CF34(p_scanRangeNotificator, 0, v7, v8);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_49B7A0B & 1) == 0 )
  {
    sub_1B4CF90(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___, method);
    byte_49B7A0B = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_2FAD6FC *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_49B7A0F & 1) == 0 )
  {
    sub_1B4CF90(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___, method);
    byte_49B7A0F = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_2FAD6FC *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  TaskScheduler_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_49B79E4 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_bool__TypeInfo, method);
    sub_1B4CF90(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v3);
    sub_1B4CF90(&SubmarineMapDataManager_TypeInfo, v4);
    sub_1B4CF90(&TaskScheduler_TypeInfo, v5);
    byte_49B79E4 = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v8 = (SubmarineMapDataManager_o *)sub_1B4D1DC(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v8, mapInfo, warInfo, 0LL);
  this->fields.submarineData = v8;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.submarineData, (int32_t)v8, v9, v10);
  v11 = (TaskScheduler_o *)sub_1B4D1DC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v11, 0LL);
  this->fields.taskScheduler = v11;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.taskScheduler, (int32_t)v11, v12, v13);
  taskScheduler = this->fields.taskScheduler;
  v15 = (System_Action_bool__o *)sub_1B4D1DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v15,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
    0LL);
  if ( !taskScheduler )
    sub_1B4D1EC(v16, v17);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v15;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v15,
    v18,
    v19);
  v20 = (Il2CppObject *)sub_1B4D1DC(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  System_Object___ctor(v20, 0LL);
  this->fields.playingScanVoiceData = (struct SubmarineMapManager_PlayingScanVoiceData_o *)v20;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.playingScanVoiceData, (int32_t)v20, v21, v22);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o *v15; // x19

  if ( (byte_49B79E5 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, finishCallback);
    sub_1B4CF90(&AtlasManager_TypeInfo, v5);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__, v6);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo, v7);
    byte_49B79E5 = 1;
  }
  v8 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B4D1EC(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v8 + 24), (int32_t)finishCallback, v13, v14);
  v15 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v8,
    Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v15, 5, 1, 0LL);
}


void __fastcall SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct SubmarineMapAssetManager_o *v17; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct SubmarineMapAssetManager_o *v22; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct SubmarineMapAssetManager_o *v27; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  v2 = this;
  if ( (byte_49B7A08 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ComponentPool_CommonEffectComponent__Preload__, method);
    sub_1B4CF90(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__, v3);
    sub_1B4CF90(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__, v4);
    sub_1B4CF90(&Method_ComponentPool_CommonEffectComponent___ctor__, v5);
    sub_1B4CF90(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__, v6);
    sub_1B4CF90(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__, v7);
    sub_1B4CF90(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v8);
    sub_1B4CF90(&ComponentPool_CommonEffectComponent__TypeInfo, v9);
    sub_1B4CF90(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo, v10);
    this = (SubmarineMapManager_o *)sub_1B4CF90(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo, v11);
    byte_49B7A08 = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v14 = (ComponentPool_T__o *)sub_1B4D1DC(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_object____ctor(
    v14,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_3178B3C *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v14;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.effectScanedPanelObjPool, (int32_t)v14, v15, v16);
  this = (SubmarineMapManager_o *)v2->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_object___Preload(
    (ComponentPool_T__o *)this,
    9,
    (const MethodInfo_3178C00 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v17 = v2->fields.assetManager;
  if ( !v17 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v17->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v19 = (ComponentPool_T__o *)sub_1B4D1DC(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v19,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_3178B3C *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v19;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.effectScanObstaclePanelObjPool, (int32_t)v19, v20, v21);
  v22 = v2->fields.assetManager;
  if ( !v22 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v22->fields._EffectScannablePanelPrafab_k__BackingField;
  v24 = (ComponentPool_T__o *)sub_1B4D1DC(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v24,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_3178B3C *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v24;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.effectScannablePanelObjPool, (int32_t)v24, v25, v26);
  this = (SubmarineMapManager_o *)v2->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_object___Preload(
          (ComponentPool_T__o *)this,
          50,
          (const MethodInfo_3178C00 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v27 = v2->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_1B4D1EC(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v27->fields._EffectSelectedPanelPrefab_k__BackingField;
  v29 = (ComponentPool_T__o *)sub_1B4D1DC(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v29,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_3178B3C *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v29;
  sub_1B4CF34((CGThumbnailListItem_o *)&v2->fields.effectSelectedPanelObjPool, (int32_t)v29, v30, v31);
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
    sub_1B4D1EC(submarineData, finishCallback);
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
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_49B79E8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, finishCallback);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__, v5);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo, v6);
    byte_49B79E8 = 1;
  }
  v7 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B4D1EC(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v7 + 24), (int32_t)finishCallback, v12, v13);
  v14 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v14, v15);
}


void __fastcall SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct MapControl_WarInfo_o *warInfo; // x8
  QuestTree_o *v8; // x20
  int32_t warId; // w21
  System_Action_o *v10; // x22
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_49B79F6 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1B4CF90(&Method_SubmarineMapManager__OnEndScan_b__42_0__, v4);
    byte_49B79F6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v8 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v10 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0LL),
        !v8) )
  {
    sub_1B4D1EC(Instance, v6);
  }
  v11 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v8, warId, v10, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_49B79E9 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, v3);
    byte_49B79E9 = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v5 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, 0LL);
    ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._23_OnBeforeQuestAfterAction.method)(
      this,
      v5,
      this->klass->vtable._24_OnAfterQuestAfterAction.methodPtr);
  }
  else
  {
    SubmarineMapManager__HideScannableEffect(this, v4);
    SubmarineMapManager__ShowScannableEffect(this, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__OnScanDecided(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  clsQuestCheck_o *v21; // x22
  NetworkManager_ResultCallbackFunc_o *v22; // x22
  EventScanPanelMapRequest_o *v23; // x22
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_49B79F1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, *(_QWORD *)&scanId);
    sub_1B4CF90(&NetworkManager_TypeInfo, v7);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__, v10);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo, v11);
    byte_49B79F1 = 1;
  }
  v12 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 32) = panelData;
  v17 = v12 + 32;
  *(_DWORD *)(v12 + 24) = scanId;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 32), (int32_t)panelData, v18, v19);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v20);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !this->fields.submarineData )
    goto LABEL_13;
  v21 = (clsQuestCheck_o *)Instance;
  Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v21 )
    goto LABEL_13;
  clsQuestCheck__SaveEventQuestIdListPlayable(v21, (int32_t)Instance, 0LL);
  v22 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v22,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v22,
               (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v23 = (EventScanPanelMapRequest_o *)Instance,
        Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL),
        (mapInfo = this->fields.mapInfo) == 0LL)
    || !*(_QWORD *)v17
    || !v23 )
  {
LABEL_13:
    sub_1B4D1EC(Instance, v14);
  }
  EventScanPanelMapRequest__beginRequest(
    v23,
    (int32_t)Instance,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v17 + 24LL),
    *(_DWORD *)(v12 + 24),
    0LL);
}


void __fastcall SubmarineMapManager__OnScanPanelRequestFinished(
        SubmarineMapManager_o *this,
        System_String_o *result,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
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
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x19
  EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_String_o *value; // x8
  EventSaveData_o *v27; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v30; // x10
  __int64 v31; // x9
  TerminalPramsManager_c *v32; // x0
  EventSaveData_o *v33; // x20
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  TerminalPramsManager_c *v37; // x0
  CGThumbnailListItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v39; // x0
  System_String_array *ValueByArray; // x0
  __int64 v41; // x1
  int max_length; // w8
  System_String_o **v43; // x9
  System_String_o *v44; // x21
  System_String_o **v45; // x9
  System_String_o *v46; // x20
  void **v47; // x8
  System_String_o *v48; // x22
  TerminalPramsManager_c *v49; // x0
  struct EventSaveData_o *v50; // x23
  System_String_o *v51; // x24
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  EventSaveData_c *v54; // x8
  CGThumbnailListItem_c *namespaze; // x19
  TerminalPramsManager_c *v56; // x0
  CGThumbnailListItem_o *p_mResultEventPanelRewardInfos; // x0
  System_String_c *v58; // x8
  int v59; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49B79F2 & 1) == 0 )
  {
    sub_1B4CF90(&EventSaveData_TypeInfo, result);
    sub_1B4CF90(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___, v9);
    sub_1B4CF90(&JsonManager_TypeInfo, v10);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v11);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B4CF90(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v13);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v14);
    sub_1B4CF90(&StringLiteral_15507/*"["*/, v15);
    sub_1B4CF90(&StringLiteral_6528/*"False"*/, v16);
    sub_1B4CF90(&StringLiteral_15763/*"]"*/, v17);
    sub_1B4CF90(&StringLiteral_1138/*"0"*/, v18);
    byte_49B79F2 = 1;
  }
  v59 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21779/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v19);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v20);
  v21 = (Il2CppObject *)System_String__Concat_61131716(
                          (System_String_o *)StringLiteral_15507/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15763/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v21,
                                                                      (const MethodInfo_2F6ADF0 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v27 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_71:
    sub_1B4D1F4(BeforeEventSubmarineSaveData_k__BackingField, v23);
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_70;
  name = klass->_1.name;
  if ( name )
  {
    v30 = *((_QWORD *)name + 3);
    if ( v30 )
    {
      if ( !(_DWORD)v30 )
        goto LABEL_71;
      v31 = *((_QWORD *)name + 4);
      if ( v31 )
      {
        v59 = *(_QWORD *)(v31 + 32);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49B7A77 )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v23);
          byte_49B7A77 = 1;
        }
        v32 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v32 = TerminalPramsManager_TypeInfo;
        }
        if ( !v32->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v33 = (EventSaveData_o *)sub_1B4D1DC(EventSaveData_TypeInfo);
          EventSaveData___ctor(v33, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49B7A78 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v34);
            byte_49B7A78 = 1;
          }
          v37 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v37 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v33;
          sub_1B4CF34(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v33, v35, v36);
          v32 = TerminalPramsManager_TypeInfo;
        }
        if ( !v32->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v32);
        if ( !byte_49B7A77 )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v23);
          byte_49B7A77 = 1;
        }
        v39 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v39 = TerminalPramsManager_TypeInfo;
        }
        BeforeEventSubmarineSaveData_k__BackingField = v39->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( BeforeEventSubmarineSaveData_k__BackingField )
        {
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v43 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v43 = (System_String_o **)&StringLiteral_1138/*"0"*/;
            v44 = *v43;
            v45 = max_length <= 2 ? (System_String_o **)&StringLiteral_1138/*"0"*/ : &ValueByArray->m_Items[2];
            v46 = *v45;
            v47 = max_length <= 3 ? &StringLiteral_6528/*"False"*/ : (void **)&ValueByArray->m_Items[3];
          }
          else
          {
            v46 = (System_String_o *)StringLiteral_1138/*"0"*/;
            v47 = &StringLiteral_6528/*"False"*/;
            v44 = (System_String_o *)StringLiteral_1138/*"0"*/;
          }
          v48 = (System_String_o *)*v47;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49B7A77 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v41);
            byte_49B7A77 = 1;
          }
          v49 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v49 = TerminalPramsManager_TypeInfo;
          }
          v50 = v49->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v51 = System_Int32__ToString((int32_t)&v59, 0LL);
          if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_37615024(
                                                                              v51,
                                                                              v44,
                                                                              v46,
                                                                              v48,
                                                                              0LL);
          if ( v50 )
          {
            v50->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_1B4CF34(
              (CGThumbnailListItem_o *)&v50->fields.value,
              (int32_t)BeforeEventSubmarineSaveData_k__BackingField,
              v52,
              v53);
            value = v27->fields.value;
            goto LABEL_56;
          }
        }
LABEL_70:
        sub_1B4D1EC(BeforeEventSubmarineSaveData_k__BackingField, v23);
      }
    }
  }
LABEL_56:
  if ( !(_DWORD)value )
    goto LABEL_71;
  v54 = v27[1].klass;
  if ( !v54 )
    goto LABEL_70;
  namespaze = (CGThumbnailListItem_c *)v54->_1.namespaze;
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (CGThumbnailListItem_o *)&v56->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = namespaze;
  sub_1B4CF34(p_mResultEventPanelRewardInfos, (int32_t)namespaze, v24, v25);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v23);
    byte_49B5933 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__OnScannerSelected(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v18; // x4
  SchedulerTaskBase_o *v19; // x21
  SchedulerTaskBase_TaskCallback_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  TaskScheduler_o *taskScheduler; // x19
  __int64 v24; // x20
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  __int64 v32; // x0

  if ( (byte_49B79F0 & 1) == 0 )
  {
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, *(_QWORD *)&scanId);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__, v8);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo, v9);
    byte_49B79F0 = 1;
  }
  v10 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 32) = panelData;
  *(_DWORD *)(v10 + 24) = scanId;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 32), (int32_t)panelData, v15, v16);
  klass = this->klass;
  if ( *(int *)(v10 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v10 + 40) = 0;
    v19 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v10 + 24),
            *(SubmarineMapPanelData_o **)(v10 + 32),
            (bool *)(v10 + 40),
            v18);
    v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v20,
      (Il2CppObject *)v10,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0LL);
    if ( v19 )
    {
      v19->fields.EndCallback = v20;
      sub_1B4CF34((CGThumbnailListItem_o *)&v19->fields.EndCallback, (int32_t)v20, v21, v22);
      taskScheduler = this->fields.taskScheduler;
      v11 = sub_1B4D038(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v11 )
      {
        v24 = v11;
        v25 = sub_1B4D0CC(v19, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !v25 )
        {
          v32 = sub_1B4D210();
          sub_1B4D0B8(v32, 0LL);
        }
        if ( !*(_DWORD *)(v24 + 24) )
          sub_1B4D1F4(v25, v26);
        *(_QWORD *)(v24 + 32) = v19;
        sub_1B4CF34((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v19, v27, v28);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v24, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1B4D1EC(v11, v12);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v29);
  SubmarineMapManager__ShowScannableEffect(this, v30);
  SubmarineMapManager__HideSelectedPanelEffect(this, v31);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__OpenScanConfirmDialog(
        SubmarineMapManager_o *this,
        int32_t scanId,
        bool isShowDialogUpper,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v19; // x22
  const MethodInfo *v20; // x4

  if ( (byte_49B7A06 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_bool__TypeInfo, *(_QWORD *)&scanId);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__, v9);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo, v10);
    byte_49B7A06 = 1;
  }
  v11 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v11 + 24), (int32_t)callback, v16, v17);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v19 = (System_Action_bool__o *)sub_1B4D1DC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0LL);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_1B4D1EC(v12, v13);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v19, v20);
}


void __fastcall SubmarineMapManager__OpenSelectScannerDialog(
        SubmarineMapManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  SubmarineMapDataManager_o *submarineData; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  int32_t EventId; // w22
  System_Action_int__o *v18; // x23
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x4

  if ( (byte_49B7A04 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_int__TypeInfo, callback);
    sub_1B4CF90(&System_Action_TypeInfo, v5);
    sub_1B4CF90(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v6);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__, v7);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo, v8);
    byte_49B7A04 = 1;
  }
  v9 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_7;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (selectScannerDialog = this->fields.selectScannerDialog,
        EventId = SubmarineMapDataManager__get_EventId(submarineData, 0LL),
        v18 = (System_Action_int__o *)sub_1B4D1DC(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v18,
          (Il2CppObject *)v9,
          Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
          0LL),
        v19 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo),
        System_Action___ctor(v19, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL),
        !selectScannerDialog) )
  {
LABEL_7:
    sub_1B4D1EC(submarineData, v11);
  }
  SubmarineSelectScannerDialog__Open(selectScannerDialog, EventId, v18, v19, v20);
}


void __fastcall SubmarineMapManager__ReleaseAssets(SubmarineMapManager_o *this, const MethodInfo *method)
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
    p_assetManager->klass = 0LL;
    sub_1B4CF34(p_assetManager, 0, v5, v6);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
  EventMapManagerBase__ReleaseAssets((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ComponentPool_T__o *effectScanedPanelObjPool; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ComponentPool_T__o *effectScannablePanelObjPool; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  ComponentPool_T__o *v11; // x0
  CGThumbnailListItem_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_49B7A09 & 1) == 0 )
  {
    sub_1B4CF90(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__, method);
    sub_1B4CF90(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__, v3);
    sub_1B4CF90(&Method_ComponentPool_CommonEffectComponent__Finish__, v4);
    byte_49B7A09 = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_31793DC *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.effectScanedPanelObjPool, 0, v6, v7);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_31793DC *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.effectScannablePanelObjPool, 0, v9, v10);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (CGThumbnailListItem_o *)&this->fields.effectScanObstaclePanelObjPool;
  v11 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v11,
      (const MethodInfo_31793DC *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_1B4CF34(p_effectScanObstaclePanelObjPool, 0, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_2FAD510 *method)
{
  bool hasValue; // w19
  bool v8; // w20
  __int64 v12; // x1
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  int v15; // s0
  UnityEngine_Component_o *v18; // x21
  UnityEngine_Transform_o *v19; // x22
  __int64 v20; // x1
  const MethodInfo_369DED0 *v21; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v25; // s0
  float v26; // s1
  float v27; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo_369DED0 *v29; // x2
  bool v30; // zf
  UnityEngine_Transform_o *v31; // x19
  float v32; // s0
  float v33; // s1
  float v34; // s2
  struct UnityEngine_Vector3_StaticFields *v35; // x8
  System_Nullable_Vector3__o v36; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v37; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v38; // 0:x0.16
  System_Nullable_Vector3__o v39; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4

  v37 = offset;
  v36 = scale;
  hasValue = scale.fields.hasValue;
  v8 = offset.fields.hasValue;
  if ( !method->rgctx_data )
  {
    sub_1B4CF90(&Method_System_Nullable_Vector3__get_HasValue__, pool);
    sub_1B4CF90(&Method_System_Nullable_Vector3__get_Value__, v12);
    if ( !method->rgctx_data )
      sub_1B9D67C();
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
  *(UnityEngine_Vector3_o *)&v15 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                     (SubmarinePanelPositionCalculator_o *)effectContainer,
                                     panelData->fields._HIndex_k__BackingField,
                                     panelData->fields._VIndex_k__BackingField,
                                     0LL);
  if ( !pool )
    goto LABEL_21;
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_51875596(
                                                  pool,
                                                  transform,
                                                  *(UnityEngine_Vector3_o *)&v15,
                                                  (const MethodInfo_3178F0C *)method->rgctx_data->_1_ComponentPool_T__Rent);
  if ( !effectContainer )
    goto LABEL_21;
  v18 = (UnityEngine_Component_o *)effectContainer;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)effectContainer,
                                                  0LL);
  if ( !effectContainer )
    goto LABEL_21;
  v19 = (UnityEngine_Transform_o *)effectContainer;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)effectContainer, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( v8 )
  {
    *(_QWORD *)&v38.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v38.fields.hasValue = &v37;
    *(UnityEngine_Vector3_o *)&v25 = System_Nullable_Vector3___get_Value(v38, v21);
    hasValue = v36.fields.hasValue;
  }
  else
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v20);
      byte_49B5361 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v25 = static_fields->zeroVector.fields.x;
    v26 = static_fields->zeroVector.fields.y;
    v27 = static_fields->zeroVector.fields.z;
  }
  v41.fields.z = z + v27;
  v41.fields.y = y + v26;
  v41.fields.x = x + v25;
  UnityEngine_Transform__set_localPosition(v19, v41, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v18, 0LL);
  v30 = !hasValue;
  v31 = (UnityEngine_Transform_o *)effectContainer;
  if ( !v30 )
  {
    *(_QWORD *)&v39.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v39.fields.hasValue = &v36;
    *(UnityEngine_Vector3_o *)&v32 = System_Nullable_Vector3___get_Value(v39, v29);
    if ( v31 )
      goto LABEL_17;
LABEL_21:
    sub_1B4D1EC(effectContainer, pool);
  }
  if ( !byte_49B5366 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, pool);
    byte_49B5366 = 1;
  }
  v35 = UnityEngine_Vector3_TypeInfo->static_fields;
  v32 = v35->oneVector.fields.x;
  v33 = v35->oneVector.fields.y;
  v34 = v35->oneVector.fields.z;
  if ( !v31 )
    goto LABEL_21;
LABEL_17:
  UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
}


void __fastcall SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0LL);
}


void __fastcall SubmarineMapManager__ReturnEffectsToPool_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_2FAD6FC *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  unsigned int v10; // w22

  if ( !method->rgctx_data )
    sub_1B9D67C();
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
        sub_1B4D1F4(Children, v7);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_2F53444 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_3178FE4 *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1B4D1EC(Children, v7);
  }
}


void __fastcall SubmarineMapManager__RevealAvailableSpots(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_Collections_Generic_List_SchedulerTaskBase__o *RevealEachSpotsTasks; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v15; // x1
  __int64 v16; // x20
  System_Delegate_o **v17; // x22
  System_Delegate_o *v18; // x23
  SchedulerTaskBase_TaskCallback_o *v19; // x24
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Delegate_o *v23; // x8
  SchedulerTaskBase_TaskCallback_c *v24; // x1
  TaskScheduler_o *v25; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v26; // x21
  __int64 v27; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x0

  if ( (byte_49B79F5 & 1) == 0 )
  {
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_1B4CF90(&SchedulerTaskNone_TypeInfo, v5);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__, v7);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo, v8);
    byte_49B79F5 = 1;
  }
  v9 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = finishCallback,
        sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 16), (int32_t)finishCallback, v12, v13),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v15),
        !taskScheduler)
    || (TaskScheduler__AddTask_41895072(taskScheduler, 0, RevealEachSpotsTasks, 0LL),
        v16 = sub_1B4D1DC(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v16, 0LL),
        !v16) )
  {
LABEL_16:
    sub_1B4D1EC(RevealEachSpotsTasks, v11);
  }
  v17 = (System_Delegate_o **)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__,
    0LL);
  v20 = System_Delegate__Combine(v18, (System_Delegate_o *)v19, 0LL);
  v23 = v20;
  if ( v20 )
  {
    v24 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v17 = v20;
      if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass == v24 )
        goto LABEL_11;
    }
    sub_1B4D4AC(v20);
  }
  *v17 = v23;
LABEL_11:
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v23, v21, v22);
  v25 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_1B4D038(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1LL);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v26 = RevealEachSpotsTasks;
  v27 = sub_1B4D0CC(v16, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v27 )
  {
    v31 = sub_1B4D210();
    sub_1B4D0B8(v31, 0LL);
  }
  if ( !v26->fields._size )
    sub_1B4D1F4(v27, v28);
  v26->fields._syncRoot = (Il2CppObject *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)&v26->fields._syncRoot, v16, v29, v30);
  if ( !v25 )
    goto LABEL_16;
  TaskScheduler__AddTask(v25, 0, (SchedulerTaskBase_array *)v26, 0LL);
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
  __int64 v3; // x1
  UnityEngine_Object_o *gridLine; // x20
  SubmarineMapDataManager_o *submarineData; // x0
  __int64 v6; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *GridTexture_k__BackingField; // x20
  const MethodInfo *v9; // x3
  struct SubmarineMapDataManager_o *v10; // x8
  struct SubmarineMapAssetManager_o *v11; // x9
  SubmarineMapDataManager_o *v12; // x20
  UIWidget_o *v13; // x21
  int32_t v14; // w0
  struct SubmarineMapDataManager_o *v15; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_49B79FD & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UITexture___, method);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v3);
    byte_49B79FD = 1;
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
        v10 = this->fields.submarineData;
        if ( v10 )
        {
          v11 = this->fields.assetManager;
          if ( v11 )
          {
            submarineData = (SubmarineMapDataManager_o *)GridLineTextureUtil__CreateWholeGridTexture(
                                                           (System_Int32_array *)submarineData,
                                                           v10->fields._PositionCalculator_k__BackingField,
                                                           v11->fields._GridTexture_k__BackingField,
                                                           v9);
            if ( this->fields.gridLine )
            {
              v12 = submarineData;
              submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             this->fields.gridLine,
                                                             (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
              if ( v12 )
              {
                v13 = (UIWidget_o *)submarineData;
                submarineData = (SubmarineMapDataManager_o *)((__int64 (__fastcall *)(SubmarineMapDataManager_o *, const char *))v12->klass[1]._1.gc_desc)(
                                                               v12,
                                                               v12->klass[1]._1.name);
                if ( v13 )
                {
                  UIWidget__set_width(v13, (int32_t)submarineData, 0LL);
                  v14 = (*(__int64 (__fastcall **)(SubmarineMapDataManager_o *, void *))&v12->klass[1]._1.byval_arg.bits)(
                          v12,
                          v12->klass[1]._1.this_arg.data);
                  UIWidget__set_height(v13, v14, 0LL);
                  ((void (__fastcall *)(UIWidget_o *, SubmarineMapDataManager_o *, Il2CppMethodPointer))v13->klass->vtable._27_set_mainTexture.method)(
                    v13,
                    v12,
                    v13->klass->vtable._28_get_shader.methodPtr);
                  submarineData = (SubmarineMapDataManager_o *)this->fields.gridLine;
                  if ( submarineData )
                  {
                    submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)submarineData,
                                                                   0LL);
                    v15 = this->fields.submarineData;
                    if ( v15 )
                    {
                      Settings_k__BackingField = v15->fields._Settings_k__BackingField;
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
    sub_1B4D1EC(submarineData, v6);
  }
}


void __fastcall SubmarineMapManager__SetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
}


void __fastcall SubmarineMapManager__ShowScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v11; // 0:x3.16
  System_Nullable_Vector3__o v12; // 0:x5.16

  v2 = this;
  if ( (byte_49B7A0C & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_1B4CF90(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___,
                                      v6);
    byte_49B7A0C = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1B4D1EC(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields._current )
        sub_1B4D1EC(v8, v9);
      if ( BYTE1(v10.fields._current[3].monitor) )
      {
        *(_QWORD *)&v11.fields.hasValue = 0LL;
        *(_QWORD *)&v11.fields.value.fields.y = 0LL;
        *(_QWORD *)&v12.fields.hasValue = 0LL;
        *(_QWORD *)&v12.fields.value.fields.y = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v10.fields._current,
          v11,
          v12,
          (const MethodInfo_2FAD510 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__ShowScanRange(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *basePanelData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Instance; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  Il2CppObject *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v15; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v17; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_49B7A10 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventPanelScanMaster___, *(_QWORD *)&scanId);
    sub_1B4CF90(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_1B4CF90(&Method_UnityEngine_Object_Instantiate_GameObject____75575200, v8);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49B7A10 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_319D99C *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_1B4D1EC(Instance, v12);
  ScanRangeNotificatorPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                                 this->fields.assetManager,
                                                 *((_DWORD *)Instance + 14),
                                                 v13);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0LL, 0LL) )
  {
    SubmarineMapManager__HideScanRange(this, v15);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v17 = UnityEngine_Object__Instantiate_object__49839864(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_2F87EF8 *)Method_UnityEngine_Object_Instantiate_GameObject____75575200);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v17;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_1B4CF34((CGThumbnailListItem_o *)p_scanRangeNotificator, (int32_t)v17, v19, v20);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float y; // s8
  float x; // s10
  float v22; // s9
  int v23; // w23
  float v24; // s11
  int i; // w24
  float v26; // s0
  float v27; // s1
  float v28; // s2
  float v29; // s3
  float v30; // s2
  float v31; // s0
  struct SubmarineMapDataManager_o *v32; // x8
  struct SubmarineSettingsManager_o *v33; // x8
  float v34; // s12
  float v35; // s13
  UnityEngine_Rect_array *v36; // x21
  System_Collections_Generic_List_Rect__o *v37; // x22
  int m_CancellationTokenSource; // w8
  SubmarineMapManager_o *v39; // x21
  unsigned int v40; // w24
  __int64 v41; // x28
  struct SubmarineMapDataManager_o *v42; // x8
  struct SubmarineSettingsManager_o *v43; // x8
  float32x2_t v44; // d2
  float32x2_t v45; // d0
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v47; // x8
  __int64 size; // x10
  unsigned __int64 v49; // d0
  float32x2_t *v50; // x9
  int v51; // s1
  unsigned __int32 v52; // s3
  Submarine2DUILocationInfo_o *v53; // x22
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v56; // x22
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  SubmarineScanDialogUpsideLocationInfo_o *v61; // x22
  UnityEngine_Rect_array *v62; // x0
  MapCamera_o *v63; // x23
  UnityEngine_Rect_array *v64; // x22
  float v65; // s0
  float v66; // s1
  float v67; // s2
  float v68; // s3
  UnityEngine_Vector2_o v69; // kr00_8
  struct System_Threading_CancellationTokenSource_o *v70; // x8
  float v71; // s3
  __int64 v72; // x8
  struct MapControl_WarInfo_o **p_warInfo; // x9
  float v74; // t1
  float v75; // s0
  struct SubmarineMapDataManager_o *v76; // x8
  struct SubmarineSettingsManager_o *v77; // x8
  SubmarinScanDialogUpSideWeakLocationInfo_o *v79; // x22
  UnityEngine_Rect_array *v80; // x0
  MapCamera_o *v81; // x23
  UnityEngine_Rect_array *v82; // x22
  int32_t failedReason; // [xsp+3Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_49B7A13 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Rect__Add__, *(_QWORD *)&scanId);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Rect__ToArray__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Rect___ctor__, v10);
    sub_1B4CF90(&System_Collections_Generic_List_Rect__TypeInfo, v11);
    sub_1B4CF90(&MapCameraViewAdjusterUtil_TypeInfo, v12);
    sub_1B4CF90(&UnityEngine_Rect___TypeInfo, v13);
    sub_1B4CF90(&float___TypeInfo, v14);
    sub_1B4CF90(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v15);
    sub_1B4CF90(&Submarine2DUILocationInfo_TypeInfo, v16);
    this = (SubmarineMapManager_o *)sub_1B4CF90(&SubmarineScanDialogUpsideLocationInfo_TypeInfo, v17);
    byte_49B7A13 = 1;
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
      v22 = 0.0;
      v23 = -2;
      v24 = 0.0;
      do
      {
        for ( i = -2; i != 3; ++i )
        {
          this = (SubmarineMapManager_o *)v8->fields.submarineData;
          if ( !this )
            goto LABEL_73;
          this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelByIndices(
                                            (SubmarineMapDataManager_o *)this,
                                            panelData->fields._HIndex_k__BackingField + v23,
                                            i + panelData->fields._VIndex_k__BackingField,
                                            0LL);
          if ( this )
          {
            v26 = *((float *)&this->fields.m_CancellationTokenSource + 1);
            v27 = *(float *)&this->fields.mapInfo;
            v28 = x + v24;
            v29 = y + v22;
            if ( x >= v26 )
              x = *((float *)&this->fields.m_CancellationTokenSource + 1);
            v30 = x + (float)(v28 - x);
            if ( v30 > v26 )
              v26 = v30;
            if ( y >= v27 )
              y = *(float *)&this->fields.mapInfo;
            v24 = v26 - x;
            v31 = y + (float)(v29 - y);
            if ( v31 <= v27 )
              v31 = *(float *)&this->fields.mapInfo;
            v22 = v31 - y;
          }
        }
        ++v23;
      }
      while ( v23 != 3 );
      v32 = v8->fields.submarineData;
      if ( v32 )
      {
        v33 = v32->fields._Settings_k__BackingField;
        if ( v33 )
        {
          v34 = v33->fields._PanelUnitSize_k__BackingField.fields.x;
          v35 = v33->fields._PanelUnitSize_k__BackingField.fields.y;
          this = (SubmarineMapManager_o *)sub_1B4D038(UnityEngine_Rect___TypeInfo, 1LL);
          if ( this )
          {
            v36 = (UnityEngine_Rect_array *)this;
            if ( !LODWORD(this->fields.m_CancellationTokenSource) )
              goto LABEL_74;
            *(float *)&this->fields.mapInfo = x - v34;
            *((float *)&this->fields.mapInfo + 1) = y - v35;
            *(float *)&this->fields.warInfo = (float)(v34
                                                    + (float)((float)(x - v34)
                                                            + (float)((float)(x + v24) - (float)(x - v34))))
                                            - (float)(x - v34);
            *((float *)&this->fields.warInfo + 1) = (float)(v35
                                                          + (float)((float)(y - v35)
                                                                  + (float)((float)(y + v22) - (float)(y - v35))))
                                                  - (float)(y - v35);
            goto LABEL_45;
          }
        }
      }
    }
LABEL_73:
    sub_1B4D1EC(this, *(_QWORD *)&scanId);
  }
  v37 = (System_Collections_Generic_List_Rect__o *)sub_1B4D1DC(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v37,
    (const MethodInfo_35906F0 *)Method_System_Collections_Generic_List_Rect___ctor__);
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
  v39 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v40 = 0;
    while ( v40 < m_CancellationTokenSource )
    {
      v41 = *((_QWORD *)&v39->fields.mapInfo + (int)v40);
      if ( !byte_49B5361 )
      {
        this = (SubmarineMapManager_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&scanId);
        byte_49B5361 = 1;
      }
      v42 = v8->fields.submarineData;
      if ( !v42 )
        goto LABEL_73;
      v43 = v42->fields._Settings_k__BackingField;
      if ( !v43 )
        goto LABEL_73;
      if ( !v41 )
        goto LABEL_73;
      if ( !v37 )
        goto LABEL_73;
      v44.n64_u64[0] = (unsigned __int64)v43->fields._PanelUnitSize_k__BackingField;
      v45.n64_u64[0] = *(unsigned __int64 *)(v41 + 28);
      items = v37->fields._items;
      v47 = Method_System_Collections_Generic_List_Rect__Add__;
      ++v37->fields._version;
      if ( !items )
        goto LABEL_73;
      size = v37->fields._size;
      v49 = vadd_f32(v45, vmul_f32(v44, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
      if ( (unsigned int)size >= items->max_length )
      {
        v51 = HIDWORD(v49);
        v52 = v44.n64_u32[1];
        System_Collections_Generic_List_Rect___AddWithResize(
          v37,
          *(UnityEngine_Rect_o *)(&v44 - 1),
          *(const MethodInfo_3590F7C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = (float32x2_t *)(&items->obj + size);
        v37->fields._size = size + 1;
        v50[4].n64_u64[0] = v49;
        v50[5].n64_u64[0] = v44.n64_u64[0];
      }
      m_CancellationTokenSource = (int)v39->fields.m_CancellationTokenSource;
      if ( (int)++v40 >= m_CancellationTokenSource )
        goto LABEL_43;
    }
    goto LABEL_74;
  }
LABEL_43:
  if ( !v37 )
    goto LABEL_73;
  v36 = System_Collections_Generic_List_Rect___ToArray(
          v37,
          (const MethodInfo_3592B10 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_45:
  v53 = (Submarine2DUILocationInfo_o *)sub_1B4D1DC(Submarine2DUILocationInfo_TypeInfo);
  Submarine2DUILocationInfo___ctor(v53, 0LL);
  if ( !v53 )
    goto LABEL_73;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v53, 0LL);
  mapCamera = v8->fields.mapCamera;
  v56 = Rects;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v85 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(mapCamera, v36, v56, &failedReason, 0LL);
  *isShowDialogUpper = 0;
  m_XMin = v85.fields.m_XMin;
  m_YMin = v85.fields.m_YMin;
  m_Width = v85.fields.m_Width;
  m_Height = v85.fields.m_Height;
  if ( failedReason == 1 )
  {
    v61 = (SubmarineScanDialogUpsideLocationInfo_o *)sub_1B4D1DC(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    SubmarineScanDialogUpsideLocationInfo___ctor(v61, 0LL);
    if ( !v61 )
      goto LABEL_73;
    v62 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v61, 0LL);
    v63 = v8->fields.mapCamera;
    v64 = v62;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(UnityEngine_Rect_o *)&v65 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v63,
                                    v36,
                                    v64,
                                    &failedReason,
                                    0LL);
    if ( failedReason != 1 )
    {
      if ( failedReason )
        goto LABEL_55;
      goto LABEL_54;
    }
    v79 = (SubmarinScanDialogUpSideWeakLocationInfo_o *)sub_1B4D1DC(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    SubmarinScanDialogUpSideWeakLocationInfo___ctor(v79, 0LL);
    if ( !v79 )
      goto LABEL_73;
    v80 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v79, 0LL);
    v81 = v8->fields.mapCamera;
    v82 = v80;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(UnityEngine_Rect_o *)&v65 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v81,
                                    v36,
                                    v82,
                                    &failedReason,
                                    0LL);
    if ( !failedReason )
    {
LABEL_54:
      m_XMin = v65;
      m_YMin = v66;
      m_Width = v67;
      m_Height = v68;
      *isShowDialogUpper = 1;
    }
  }
LABEL_55:
  v69 = FSWindowUtil__GetSize(0LL);
  this = (SubmarineMapManager_o *)sub_1B4D038(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_73;
  v70 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v70
    || (LODWORD(this->fields.mapInfo) = 1065353216, (_DWORD)v70 == 1)
    || (*((float *)&this->fields.mapInfo + 1) = m_Width / v69.fields.x, (unsigned int)v70 <= 2) )
  {
LABEL_74:
    sub_1B4D1F4(this, *(_QWORD *)&scanId);
  }
  v71 = 1.0;
  *(float *)&this->fields.warInfo = m_Height / v69.fields.y;
  if ( (int)v70 >= 2 )
  {
    v72 = (unsigned int)v70 - 2LL;
    v71 = fmaxf(m_Width / v69.fields.x, 1.0);
    if ( v72 )
    {
      p_warInfo = &this->fields.warInfo;
      do
      {
        v74 = *(float *)p_warInfo;
        p_warInfo = (struct MapControl_WarInfo_o **)((char *)p_warInfo + 4);
        v75 = v74;
        if ( v74 > v71 )
          v71 = v75;
        --v72;
      }
      while ( v72 );
    }
  }
  v76 = v8->fields.submarineData;
  if ( !v76 )
    goto LABEL_73;
  v77 = v76->fields._Settings_k__BackingField;
  if ( !v77 )
    goto LABEL_73;
  v84.fields.y = m_YMin + (float)(m_Height * 0.5);
  v84.fields.x = m_XMin + (float)(m_Width * 0.5);
  v84.fields.z = 0.0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v8,
           v84,
           v71,
           v77->fields._ViewScanRangeCameraDuration_k__BackingField,
           *(const MethodInfo **)&scanId);
}


void __fastcall SubmarineMapManager__ShowScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v11; // 0:x3.16
  System_Nullable_Vector3__o v12; // 0:x5.16

  v2 = this;
  if ( (byte_49B7A0A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_1B4CF90(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___,
                                      v6);
    byte_49B7A0A = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1B4D1EC(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields._current )
        sub_1B4D1EC(v8, v9);
      if ( BYTE2(v10.fields._current[3].monitor) )
      {
        *(_QWORD *)&v11.fields.hasValue = 0LL;
        *(_QWORD *)&v11.fields.value.fields.y = 0LL;
        *(_QWORD *)&v12.fields.hasValue = 0LL;
        *(_QWORD *)&v12.fields.value.fields.y = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v10.fields._current,
          v11,
          v12,
          (const MethodInfo_2FAD510 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_49B7A0E & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___,
      panelData);
    byte_49B7A0E = 1;
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
    (const MethodInfo_2FAD510 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__StartScanPerformance(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  MissionNotifyManager_o *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  System_Action_o *v17; // x23
  TaskScheduler_o *taskScheduler; // x22
  const MethodInfo *v19; // x3
  TaskScheduler_o *v20; // x22
  SchedulerTaskBase_array *v21; // x23
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  MissionNotifyManager_o *v25; // x20
  __int64 v26; // x20
  System_Delegate_o **v27; // x21
  System_Delegate_o *v28; // x22
  SchedulerTaskBase_TaskCallback_o *v29; // x23
  System_Delegate_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Delegate_o *v33; // x8
  SchedulerTaskBase_TaskCallback_c *v34; // x1
  TaskScheduler_o *v35; // x19
  MissionNotifyManager_o *v36; // x21
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x0

  if ( (byte_49B79F3 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_1B4CF90(&SchedulerTaskBase___TypeInfo, v7);
    sub_1B4CF90(&SchedulerTaskNone_TypeInfo, v8);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_1B4CF90(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__, v11);
    sub_1B4CF90(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__, v12);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v13);
    byte_49B79F3 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0LL);
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0LL);
  if ( !v16 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v16, v17, 0LL);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v19);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_41895072(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance,
    0LL);
  v20 = this->fields.taskScheduler;
  v21 = (SchedulerTaskBase_array *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 1LL);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v22);
  if ( !v21 )
    goto LABEL_22;
  v25 = Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_1B4D0CC(Instance, v21->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !v21->max_length )
    goto LABEL_23;
  v21->m_Items[0] = (SchedulerTaskBase_o *)v25;
  sub_1B4CF34((CGThumbnailListItem_o *)v21->m_Items, (int32_t)v25, v23, v24);
  if ( !v20
    || (TaskScheduler__AddTask(v20, 0, v21, 0LL),
        v26 = sub_1B4D1DC(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v26, 0LL),
        !v26) )
  {
LABEL_22:
    sub_1B4D1EC(Instance, v15);
  }
  v27 = (System_Delegate_o **)(v26 + 32);
  v28 = *(System_Delegate_o **)(v26 + 32);
  v29 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v29,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__39_1__,
    0LL);
  v30 = System_Delegate__Combine(v28, (System_Delegate_o *)v29, 0LL);
  v33 = v30;
  if ( !v30 )
    goto LABEL_16;
  v34 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v30->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v27 = v30, (SchedulerTaskBase_TaskCallback_c *)v30->klass != v34) )
  {
    sub_1B4D4AC(v30);
LABEL_16:
    *v27 = v33;
  }
  sub_1B4CF34((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v33, v31, v32);
  v35 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_1B4D038(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_22;
  v36 = Instance;
  Instance = (MissionNotifyManager_o *)sub_1B4D0CC(v26, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v39 = sub_1B4D210();
    sub_1B4D0B8(v39, 0LL);
  }
  if ( !LODWORD(v36->fields.mNoDispInfos) )
LABEL_23:
    sub_1B4D1F4(Instance, v15);
  v36->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v26;
  sub_1B4CF34((CGThumbnailListItem_o *)&v36->fields.mMissionNotifyComps, v26, v37, v38);
  if ( !v35 )
    goto LABEL_22;
  TaskScheduler__AddTask(v35, 0, (SchedulerTaskBase_array *)v36, 0LL);
}


void __fastcall SubmarineMapManager__SubsequentialOpenPanelTaskChain(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_Collections_Generic_List_object__o *SubsequentialOpenPanelTasks; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o **p_syncRoot; // x22
  const MethodInfo *v15; // x1
  int size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v17; // x20
  System_Delegate_o *syncRoot; // x23
  SchedulerTaskBase_TaskCallback_o *v19; // x24
  System_Delegate_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  SchedulerTaskBase_TaskCallback_c *v23; // x1

  if ( (byte_49B79F4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__, finishCallback);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__, v5);
    sub_1B4CF90(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__, v7);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo, v8);
    byte_49B79F4 = 1;
  }
  v9 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v9 + 16);
  sub_1B4CF34((CGThumbnailListItem_o *)(v9 + 16), (int32_t)finishCallback, v12, v13);
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
                                                                               (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1B4D1DC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__,
    0LL);
  v20 = System_Delegate__Combine(syncRoot, (System_Delegate_o *)v19, 0LL);
  if ( v20 )
  {
    v23 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass != SchedulerTaskBase_TaskCallback_TypeInfo
      || (*p_syncRoot = (System_Action_o *)v20, (SchedulerTaskBase_TaskCallback_c *)v20->klass != v23) )
    {
      sub_1B4D4AC(v20);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0LL;
  }
  sub_1B4CF34((CGThumbnailListItem_o *)p_syncRoot, (int32_t)v20, v21, v22);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_1B4D1EC(SubsequentialOpenPanelTasks, v11);
  TaskScheduler__AddTask_41895072((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v17, 0LL);
}


void __fastcall SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SubmarineMapDataManager_o *submarineData; // x0
  struct MapControl_MapInfo_o *mapInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v8; // x20
  EventScanPanelMapRequest_o *v9; // x20
  struct MapControl_MapInfo_o *v10; // x8

  if ( (byte_49B79EB & 1) == 0 )
  {
    sub_1B4CF90(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, method);
    sub_1B4CF90(&NetworkManager_TypeInfo, v3);
    sub_1B4CF90(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B4CF90(&Method_SubmarineMapManager__TryInitRequest_b__31_0__, v5);
    byte_49B79EB = 1;
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
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1B4D1DC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  submarineData = (SubmarineMapDataManager_o *)NetworkManager__getRequest_object_(
                                                 v8,
                                                 (const MethodInfo_2F86AFC *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v9 = (EventScanPanelMapRequest_o *)submarineData,
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_EventId(
                                                       this->fields.submarineData,
                                                       0LL),
        (v10 = this->fields.mapInfo) == 0LL)
    || !v9 )
  {
LABEL_13:
    sub_1B4D1EC(submarineData, method);
  }
  EventScanPanelMapRequest__beginRequest(v9, (int32_t)submarineData, v10->fields.mapId, 0, 0, 0LL);
}


void __fastcall SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  int32_t v6; // w20
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x3

  if ( (byte_49B7A05 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v3);
    byte_49B7A05 = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, 0LL);
  if ( NewReleasedScanId >= 1 )
  {
    v6 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v8 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v6, v8, v9);
      return;
    }
LABEL_8:
    sub_1B4D1EC(submarineData, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_49B79F7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    this = (SubmarineMapManager_o *)sub_1B4CF90(
                                      &Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__,
                                      v5);
    byte_49B79F7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_1B4D1EC(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B4D1EC(0LL, v7);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1B4D1EC(0LL, beforeClearQuestId);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  ScrTerminalMap_o *terminalMap; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_GameObject_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x21
  TerminalPramsManager_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  System_String_array *ValueByArray; // x0
  __int64 v20; // x8
  UnityEngine_GameObject_c *v21; // x8
  TitleInfoControl_o *v22; // x20
  EventDetailEntity_o *v23; // x21
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1

  if ( (byte_49B79F8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v6);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v7);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__, v8);
    sub_1B4CF90(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo, v9);
    byte_49B79F8 = 1;
  }
  v10 = sub_1B4D1DC(SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_47;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
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
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v12);
    byte_49B5933 = 1;
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
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_47;
  terminalMap = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)terminalMap,
                                      (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.submarineData )
    goto LABEL_47;
  v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)terminalMap;
  terminalMap = (ScrTerminalMap_o *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v16 )
    goto LABEL_47;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v16,
         (Il2CppObject **)(v10 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v10 + 32) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B7A77 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
      byte_49B7A77 = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( v17->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v17->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v17);
      if ( !byte_49B7A77 )
      {
        sub_1B4CF90(&TerminalPramsManager_TypeInfo, v12);
        byte_49B7A77 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v18->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_47;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v20 = *(_QWORD *)&ValueByArray->max_length;
        if ( v20 )
        {
          if ( !(_DWORD)v20 )
            sub_1B4D1F4(ValueByArray, v12);
          *(_DWORD *)(v10 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v12);
      byte_49B5933 = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v21 = terminalMap->fields.subRootGimmickP->klass;
    if ( v21 )
    {
      v22 = *(TitleInfoControl_o **)&v21->_2.instance_size;
      v23 = *(EventDetailEntity_o **)(v10 + 24);
      v24 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v10,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( v22 )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(v22, v23, v24, 0LL);
        return;
      }
    }
LABEL_47:
    sub_1B4D1EC(terminalMap, v12);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v25);
  SubmarineMapManager__ShowScannableEffect(this, v26);
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
    sub_1B4D1EC(0LL, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, 0LL);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v4);
  SubmarineMapManager__HideSelectedPanelEffect(this, v5);
  SubmarineMapManager__UpdateTerminalInfo(this, v6);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_49B7A1E & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, v3);
    byte_49B7A1E = 1;
  }
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, 0LL);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._24_OnAfterQuestAfterAction.method)(
    this,
    v4,
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

  if ( (byte_49B7A1F & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49B7A1F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  CommonUI__SetSkipAnimation((CommonUI_o *)Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B7A20 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__, v3);
    byte_49B7A20 = 1;
  }
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v4, v5);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49B7A21 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__, v3);
    byte_49B7A21 = 1;
  }
  v4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_3__, 0LL);
  SubmarineMapManager__RevealAvailableSpots(this, v4, v5);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_3(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_49B7A22 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49B7A22 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
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
    sub_1B4D1EC(0LL, method);
  return SubmarineMapDataManager__get_EventId(submarineData, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1B4D1EC(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1B4D1EC(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct SubmarineMapManager_o *_4__this; // x20
  bool v8; // w21
  System_Func_bool__o *v9; // x22
  UnityEngine_WaitUntil_o *v10; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  v2 = this;
  if ( (byte_49B7A2D & 1) == 0 )
  {
    sub_1B4CF90(&System_Func_bool__TypeInfo, method);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_SubmarineMapManager__CoInitRequest_b__20_0__, v4);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_1B4CF90(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_49B7A2D = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_1B4D1EC(this, method);
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
  this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1B4D1DC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1B4D1DC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1B4CF34(p__2__current, (int32_t)v10, v12, v13);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v8;
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  __int64 v3; // x1
  struct SubmarineMapManager_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x8
  UnityEngine_Texture2D_o *ResizedTexture2D; // x0
  UnityEngine_Texture2D_o **p_closedPanelTexture; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct SubmarineMapAssetManager_o *v12; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  const MethodInfo *v14; // x1
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  __int64 v24; // x8
  int32_t v25; // w1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1

  v2 = this;
  if ( (byte_49B7A2E & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_1B4CF90(
                                                                  &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                                  v3);
    byte_49B7A2E = 1;
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
          sub_1B4CF34(
            (CGThumbnailListItem_o *)&_4__this->fields.closedPanelTexture,
            (int32_t)ResizedTexture2D,
            v10,
            v11);
          v12 = _4__this->fields.assetManager;
          if ( v12 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v12->fields._ClosedPanelTexture_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0LL, 0LL) )
            {
              DarkTexture2D = ClosePanelTextureUtil__CreateDarkTexture2D(*p_closedPanelTexture, 0.4, 0LL);
              *p_closedPanelTexture = DarkTexture2D;
              sub_1B4CF34(
                (CGThumbnailListItem_o *)&_4__this->fields.closedPanelTexture,
                (int32_t)DarkTexture2D,
                v16,
                v17);
            }
            SubmarineMapManager__AdjustEachSpotsPositions(_4__this, v14);
            SubmarineMapManager__CreateContainers(_4__this, v18);
            SubmarineMapManager__CreatePanels(_4__this, v19);
            SubmarineMapManager__CreateNeverOpenSurrounds(_4__this, v20);
            SubmarineMapManager__SetGridLine(_4__this, v21);
            SubmarineMapManager__AdjustSilhouetteGimmicks(_4__this, v22);
            SubmarineMapManager__ConstructOnPartOfDialog(_4__this, v23);
            this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)_4__this->fields.submarineData;
            if ( this )
            {
              v24 = *(_QWORD *)&this[1].fields.__1__state;
              if ( v24 )
              {
                if ( *(_BYTE *)(v24 + 24) || *(_BYTE *)(v24 + 25) )
                  v25 = *(_DWORD *)(v24 + 16);
                else
                  v25 = -1;
                SubmarineMapDataManager__UpdateParams((SubmarineMapDataManager_o *)this, v25, 0LL);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, v26);
                SubmarineMapManager__HideScanObstacleEffect(_4__this, v27);
                SubmarineMapManager__ShowScanObstacleEffect(_4__this, v28);
                ActionExtensions__Call(v2->fields.finishCallback, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_30:
      sub_1B4D1EC(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_1B4CFA4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B4D1DC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B4CFA4(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__);
  sub_1B4D0B8(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49B7A23 & 1) == 0 )
  {
    sub_1B4CF90(&SubmarineMapManager___c_TypeInfo, v1);
    byte_49B7A23 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)SubmarineMapManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B4D1EC(this, 0LL);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
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
    sub_1B4D1EC(this, x);
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
  __int64 v3; // x1
  SubmarineMapManager_o *_4__this; // x0
  UnityEngine_MonoBehaviour_o *v5; // x20
  SubmarineMapAssetManager_o *klass; // x21
  const MethodInfo *v7; // x3
  System_Action_o *_9__1; // x23
  int32_t v9; // w22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_49B7A24 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, method);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__, v3);
    byte_49B7A24 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  SubmarineMapManager__CreateAssetManagerIfNotExists(_4__this, method);
  v5 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v5 )
    goto LABEL_10;
  _4__this = (SubmarineMapManager_o *)v5[4].fields.m_CancellationTokenSource;
  if ( !_4__this )
    goto LABEL_10;
  klass = (SubmarineMapAssetManager_o *)v5[5].klass;
  _4__this = (SubmarineMapManager_o *)SubmarineMapDataManager__get_EventId((SubmarineMapDataManager_o *)_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v9 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !klass )
LABEL_10:
    sub_1B4D1EC(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v9, _9__1, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728(v5, Assets, 0LL);
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
    sub_1B4D1EC(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_68789728(v7, inited, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct SubmarineMapManager_o *_4__this; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x20
  __int64 v10; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49B7A25 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v5);
    byte_49B7A25 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)_4__this->fields.submarineData;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)SubmarineMapDataManager__get_EventId((SubmarineMapDataManager_o *)Instance, 0LL);
  if ( !v9 )
    goto LABEL_19;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v9,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_319D9E8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49B5933 )
    {
      sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v7);
      byte_49B5933 = 1;
    }
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    }
    v10 = **(_QWORD **)&Instance[1].fields._DispLog;
    if ( v10 )
    {
      Instance = *(DataManager_o **)(v10 + 240);
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
    sub_1B4D1EC(Instance, v7);
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
    sub_1B4D1EC(this, method);
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
  __int64 v3; // x1
  SubmarineMapManager_o *_4__this; // x0
  const MethodInfo *v5; // x2
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49B7A26 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_int__TypeInfo, method);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__, v3);
    byte_49B7A26 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, method);
  _9__1 = this->fields.__9__1;
  v7 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1B4D1DC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  if ( !v7 )
LABEL_8:
    sub_1B4D1EC(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v7, _9__1, v5);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1B4D1EC(this, scanId);
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
  __int64 v3; // x1
  SubmarineMapManager_o *_4__this; // x0
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v9; // x21
  _BOOL4 isShowDialogUpper; // w24
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49B7A27 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_bool__TypeInfo, method);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__, v3);
    byte_49B7A27 = 1;
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
  SubmarineMapManager__ShowScanRange(_4__this, this->fields.scanId, this->fields.panelData, v5);
  _9__1 = this->fields.__9__1;
  scanId = this->fields.scanId;
  v9 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_1B4D1DC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
  }
  if ( !v9 )
LABEL_9:
    sub_1B4D1EC(_4__this, method);
  SubmarineMapManager__OpenScanConfirmDialog(v9, scanId, isShowDialogUpper, _9__1, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SubmarineMapManager_o *_4__this; // x0
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x3
  SubmarineMapManager_o *v9; // x20
  System_Action_int__o *_9__2; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49B7A28 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_int__TypeInfo, yes);
    sub_1B4CF90(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__, v5);
    byte_49B7A28 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, (const MethodInfo *)yes);
  v9 = this->fields.__4__this;
  if ( yes )
  {
    if ( v9 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, v8);
      return;
    }
LABEL_11:
    sub_1B4D1EC(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1B4D1DC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !v9 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v9, _9__2, v7);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1B4D1EC(this, lscanId);
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
    sub_1B4D1EC(this, result);
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
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1
  ConnectMark_c *klass; // x8
  ConnectMark_c *v7; // x8
  SubmarineMapManager_o *_4__this; // x19
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_49B7A29 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v3);
    byte_49B7A29 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0LL);
  if ( !this->fields.__4__this )
    goto LABEL_22;
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v5);
    byte_49B5933 = 1;
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
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, v5);
    byte_49B5933 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = Instance->fields.connectMark->klass;
  if ( !v7
    || (Instance = *(CommonUI_o **)&v7->_2.thread_static_fields_offset) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, v5),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_22:
    sub_1B4D1EC(Instance, v5);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))_4__this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    _4__this,
    _4__this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(_4__this, v9);
  SubmarineMapManager__ShowScannableEffect(_4__this, v10);
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
    sub_1B4D1EC(this, x);
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

  if ( (byte_49B7A2A & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_int___, *(_QWORD *)&scanId);
    byte_49B7A2A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(0LL, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2E57C3C *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_49B7A2B & 1) == 0 )
  {
    sub_1B4CF90(&Method_ActionExtensions_Call_bool___, yes);
    byte_49B7A2B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(0LL, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2E57BEC *)Method_ActionExtensions_Call_bool___);
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
    sub_1B4D1EC(0LL, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_1B4D1EC(0LL, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B4D1EC(0LL, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, method);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_49B7A2C & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B7A2C = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_68804456(scanAnimObj, 0LL);
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
    sub_1B4D1EC(this, x);
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
    sub_1B4D1EC(this, 0LL);
  return x->fields._Chain_k__BackingField == this->fields.i;
}