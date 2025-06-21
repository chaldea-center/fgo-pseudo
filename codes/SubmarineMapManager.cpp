void __fastcall SubmarineMapManager___ctor(SubmarineMapManager_o *this, const MethodInfo *method)
{
  this->fields.ACCELERATION_TIME_SCALE = 4.0;
  this->fields.isEnableClickPanel = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__AdjustDepth(
        SubmarineMapManager_o *this,
        UnityEngine_GameObject_o *go,
        int32_t minDepth,
        const MethodInfo *method)
{
  __int64 v6; // x2
  int m_CancellationTokenSource; // w9
  int v8; // w10
  int v9; // w22
  __int64 v10; // x11
  int v11; // w11
  int v12; // w8
  SubmarineMapManager_o *v13; // x20
  unsigned int v14; // w21
  int v15; // w19

  if ( (byte_4B18F78 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, go);
    byte_4B18F78 = 1;
  }
  if ( !go )
    goto LABEL_23;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                    go,
                                    (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !this )
    goto LABEL_23;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    v9 = 0x7FFFFFFF;
    while ( m_CancellationTokenSource != v8 )
    {
      v10 = *((_QWORD *)&this->fields.mapInfo + v8);
      if ( !v10 )
        goto LABEL_23;
      v11 = *(_DWORD *)(v10 + 176);
      ++v8;
      if ( v11 < v9 )
        v9 = v11;
      if ( m_CancellationTokenSource == v8 )
        goto LABEL_14;
    }
LABEL_22:
    sub_1BCB25C(this, go, v6);
  }
  v9 = 0x7FFFFFFF;
LABEL_14:
  if ( v9 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                      go,
                                      (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    if ( this )
    {
      v12 = (int)this->fields.m_CancellationTokenSource;
      v13 = this;
      if ( v12 >= 1 )
      {
        v14 = 0;
        v15 = minDepth - v9;
        while ( v14 < v12 )
        {
          this = (SubmarineMapManager_o *)*((_QWORD *)&v13->fields.mapInfo + (int)v14);
          if ( !this )
            goto LABEL_23;
          UIWidget__set_depth((UIWidget_o *)this, v15 + *(_DWORD *)&this->fields.isEnableClickPanel, 0LL);
          v12 = (int)v13->fields.m_CancellationTokenSource;
          if ( (int)++v14 >= v12 )
            return;
        }
        goto LABEL_22;
      }
      return;
    }
LABEL_23:
    sub_1BCB254(this, go);
  }
}


void __fastcall SubmarineMapManager__AdjustEachSpotsPositions(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_array *Children; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v8; // x20
  unsigned int v9; // w22
  Il2CppObject *Component_object; // x21

  if ( (byte_4B18F75 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B18F75 = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_15;
  max_length = Children->max_length;
  v8 = Children;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1BCB25C(Children, v5, v6);
      Children = (UnityEngine_GameObject_array *)v8->m_Items[v9];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_object, v6);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_15:
    sub_1BCB254(Children, v5);
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
  __int64 v28; // x2
  int klass; // w8
  UnityEngine_GameObject_o *v30; // x21
  unsigned int v31; // w19
  Il2CppObject *Component_object; // x22
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
  const MethodInfo *v61; // x2
  SubmarineMapDataManager_o *v62; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v64; // x23
  __int64 v65; // x0
  __int64 v66; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v68; // x1
  __int64 v69; // x0
  __int64 v70; // x1
  float32x2_t v71; // d9
  __int128 v72; // q0
  _BOOL8 v73; // x0
  __int64 v74; // x1
  __int128 v75; // q1
  int8x8_t v76; // d0
  int8x8_t v77; // d2
  __int64 v78; // x1
  UnityEngine_Transform_o *v79; // x0
  __int64 v80; // x1
  unsigned __int64 v81; // d0 OVERLAPPED
  int v82; // s1
  int v83; // s2
  float y; // [xsp+10h] [xbp-F0h]
  __int128 v86; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+70h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4B18F77 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__, v2);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__, v3);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v10);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___, v11);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76878720, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__, v18);
    sub_1BCAFF8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v19);
    sub_1BCAFF8(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo, v20);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v21);
    sub_1BCAFF8(&System_Predicate_SrcSpotBasePrefab__TypeInfo, v22);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__, v23);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo, v24);
    byte_4B18F77 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  value = 0LL;
  memset(&v88, 0, sizeof(v88));
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  klass = (int)Children[1].klass;
  v30 = Children;
  if ( klass >= 1 )
  {
    v31 = 0;
    while ( v31 < klass )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v30[1].monitor + (int)v31);
      if ( !Children )
        goto LABEL_59;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Children,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v37[4] = (Il2CppClass *)Component_object;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v37 + 4), (int32_t)Component_object, v28, v33);
        }
      }
      klass = (int)v30[1].klass;
      if ( (int)++v31 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_1BCB25C(Children, v27, v28);
  }
LABEL_17:
  v38 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v38,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
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
              (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
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
          (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
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
    sub_1BCB254(Children, v27);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v87,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v90 = v87;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v45 = sub_1BCB244(SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass59_0___ctor((SubmarineMapManager___c__DisplayClass59_0_o *)v45, 0LL);
    if ( !v45 )
      sub_1BCB254(v46, v47);
    current = (int32_t)v90.fields._current;
    *(_QWORD *)(v45 + 16) = v90.fields._current;
    v51 = (SubmarineSilhouetteData_o **)(v45 + 16);
    sub_1BCAF9C((CGThumbnailListItem_o *)(v45 + 16), current, v48, v49);
    if ( !*(_QWORD *)(v45 + 16) )
      sub_1BCB254(v52, v53);
    if ( *(int *)(*(_QWORD *)(v45 + 16) + 20LL) > 0 )
    {
      v54 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_object____ctor(
        v54,
        (Il2CppObject *)v45,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0LL);
      if ( !v25 )
        sub_1BCB254(v55, v56);
      v57 = System_Collections_Generic_List_object___Find(
              v25,
              (System_Predicate_T__o *)v54,
              (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v58 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v57, 0LL, 0LL);
      if ( !v58 )
      {
        if ( !*v51 )
          sub_1BCB254(v58, v59);
        if ( !v38 )
          sub_1BCB254(v58, v59);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v38,
               (*v51)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v62 = this->fields.submarineData;
          if ( !v62 )
            sub_1BCB254(0LL, v60);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v62,
                                                                                      *v51,
                                                                                      v61);
          v64 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_object____ctor_57382084(
            v64,
            SilhouetteOccupiedPanels,
            (const MethodInfo_36B94C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76878720);
          if ( !v57 )
            sub_1BCB254(v65, v66);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v57, 0LL);
          if ( !transform )
            sub_1BCB254(0LL, v68);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          *(_QWORD *)&v86 = *(_QWORD *)&localPosition.fields.x;
          y = localPosition.fields.y;
          if ( !byte_4B16191 )
          {
            v69 = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v70);
            byte_4B16191 = 1;
          }
          if ( !v64 )
            sub_1BCB254(v69, v70);
          v71.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v87,
            v64,
            (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v88 = v87;
          v72 = v86;
          *((float *)&v72 + 1) = y;
          while ( 1 )
          {
            v86 = v72;
            v73 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v88,
                    (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v73 )
              break;
            if ( !v88.fields._current )
              sub_1BCB254(v73, v74);
            v76.n64_u64[0] = *(unsigned __int64 *)((char *)&v88.fields._current[1].monitor + 4);
            *(int8x8_t *)&v75 = vbsl_s8(vcgt_f32(v76, *(float32x2_t *)&v86), *(int8x8_t *)&v86, v76);
            v77.n64_u64[0] = vadd_f32(
                               *(float32x2_t *)&v75,
                               vsub_f32(vadd_f32(v71, *(float32x2_t *)&v86), *(float32x2_t *)&v75)).n64_u64[0];
            v71.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v77, v76), v77, v76), *(float32x2_t *)&v75).n64_u64[0];
            v72 = v75;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v88,
            (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_1BCB254(0LL, v78);
          v79 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0LL);
          if ( !v79 )
            sub_1BCB254(0LL, v80);
          v81 = vadd_f32(vmul_f32(v71, (float32x2_t)0x3F0000003F000000LL), *(float32x2_t *)&v86).n64_u64[0];
          v82 = HIDWORD(v81);
          v83 = 0;
          UnityEngine_Transform__set_localPosition(v79, *(UnityEngine_Vector3_o *)&v81, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
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
  const MethodInfo_37DD510 *v9; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v11; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v12; // 0:x0.12
  System_Nullable_Vector3__o v13; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B18F74 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_Vector2___ctor__, spot);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(&Method_System_Nullable_Vector3___ctor__, v5);
    byte_4B18F74 = 1;
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
  System_Nullable_Vector2____ctor(v12, PanelUnitSize_k__BackingField, (const MethodInfo_37DCC90 *)method);
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v8);
    byte_4B16191 = 1;
  }
  *(_QWORD *)&v13.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v13.fields.hasValue = &centerPosition;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v13, zeroVector, v9);
  if ( !spot )
LABEL_9:
    sub_1BCB254(this, spot);
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
                                    method);
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
    sub_1BCB254(this, spot);
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
  Il2CppObject *Instance; // x20
  const MethodInfo *v12; // x1
  System_Int32_array *eventId; // x0
  __int64 v14; // x1
  System_Int32_array *v15; // x20
  __int64 v16; // x2
  CommonUI_o *v17; // x19
  int32_t v18; // w20
  SubmarineMapManager___c_c *v19; // x0
  System_Action_o *_9__49_0; // x22
  System_String_o *v21; // x21
  Il2CppObject *v22; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v28; // 0:x5.8

  if ( (byte_4B18F6F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Nullable_float___ctor__, v5);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, v8);
    sub_1BCAFF8(&SubmarineMapManager___c_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_6886/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v10);
    byte_4B18F6F = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = (System_Int32_array *)SubmarineMapManager__get_eventId(this, v12);
  if ( !Instance )
    goto LABEL_21;
  eventId = clsQuestCheck__GetNewPlayableEventQuestId((clsQuestCheck_o *)Instance, (int32_t)eventId, 0LL);
  if ( !eventId )
    goto LABEL_21;
  v15 = eventId;
  if ( !*(_QWORD *)&eventId->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  eventId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v15->max_length )
    goto LABEL_22;
  if ( !eventId )
    goto LABEL_21;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)eventId, v15->m_Items[1], 143, 0LL) )
    return;
  eventId = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v15->max_length )
LABEL_22:
    sub_1BCB25C(eventId, v14, v16);
  v17 = (CommonUI_o *)eventId;
  v18 = v15->m_Items[1];
  v19 = SubmarineMapManager___c_TypeInfo;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v19 = SubmarineMapManager___c_TypeInfo;
  }
  _9__49_0 = v19->static_fields->__9__49_0;
  v21 = (System_String_o *)StringLiteral_6886/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__49_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = SubmarineMapManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v22, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v24, v25);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_37DB04C *)Method_System_Nullable_float___ctor__);
  if ( !v17 )
LABEL_21:
    sub_1BCB254(eventId, v14);
  v28 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v17, v18, v21, _9__49_0, 0, v28, 0.0, 0LL);
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
  __int64 v38; // x2
  const MethodInfo *v39; // x3
  __int64 v40; // x0

  if ( (byte_4B18F65 & 1) == 0 )
  {
    sub_1BCAFF8(&SchedulerTaskBase___TypeInfo, panelData);
    sub_1BCAFF8(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1BCAFF8(&Method_SubmarineMapManager_ClickPanel__, v6);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__, v8);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo, v9);
    byte_4B18F65 = 1;
  }
  v10 = sub_1BCB244(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass35_0___ctor((SubmarineMapManager___c__DisplayClass35_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_28;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = panelData;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)panelData, v15, v16);
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
      v21 = (_QWORD *)sub_1BCB010(Method_SubmarineMapManager_ClickPanel__);
    v22 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 0, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v26 = sub_1BCB244(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v26, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v26 )
        {
          v27 = (System_Delegate_o **)(v26 + 32);
          v28 = *(System_Delegate_o **)(v26 + 32);
          v29 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
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
              sub_1BCB514(v30);
              return;
            }
          }
          else
          {
            *v27 = 0LL;
          }
          sub_1BCAF9C((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v30, v31, v32);
          taskScheduler = this->fields.taskScheduler;
          v11 = sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v11 )
          {
            v35 = v11;
            v36 = sub_1BCB134(v26, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
            if ( !v36 )
            {
              v40 = sub_1BCB278();
              sub_1BCB120(v40, 0LL);
            }
            if ( !*(_DWORD *)(v35 + 24) )
              sub_1BCB25C(v36, v37, v38);
            *(_QWORD *)(v35 + 32) = v26;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 32), v26, v38, v39);
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
    sub_1BCB254(v11, v12);
  }
  v19 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v19 = (_QWORD *)sub_1BCB010(Method_SubmarineMapManager_ClickPanel__);
  v20 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v19, v19[4]);
  OverwriteAssetSoundName__PlaySystemSe(v20, 2, 0, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
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

  if ( (byte_4B18F5C & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo, finishCallback);
    byte_4B18F5C = 1;
  }
  v5 = sub_1BCB244(SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
  SubmarineMapManager__CoInitRequest_d__20___ctor((SubmarineMapManager__CoInitRequest_d__20_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCB254(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
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

  if ( (byte_4B18F5D & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo, finishCallback);
    byte_4B18F5D = 1;
  }
  v5 = sub_1BCB244(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
  SubmarineMapManager__CoOnAfterSpotCreated_d__23___ctor(
    (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCB254(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BaseDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  Il2CppObject *ScanConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  EventMapManagerBase_o *v16; // x0
  const MethodInfo *v17; // x2
  BaseDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v20; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  EventMapManagerBase_o *v25; // x0
  const MethodInfo *v26; // x2
  CGThumbnailListItem_o *p_newScannerDialog; // x20
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v29; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x19
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  EventMapManagerBase_o *v34; // x0
  const MethodInfo *v35; // x2

  if ( (byte_4B18F79 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___, v3);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___, v4);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B18F79 = 1;
  }
  p_scanConfirmDialog = (BaseDialog_o **)&this->fields.scanConfirmDialog;
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(scanConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_28;
    ScanConfirmDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._ScanConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           ScanConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    *p_scanConfirmDialog = (BaseDialog_o *)Component_object;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.scanConfirmDialog, (int32_t)Component_object, v14, v15);
    EventMapManagerBase__LocateDialogToUiRoot(v16, *p_scanConfirmDialog, v17);
  }
  p_selectScannerDialog = (BaseDialog_o **)&this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(selectScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v20 = this->fields.assetManager;
    if ( !v20 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v20->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_28;
    v22 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v9,
            (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    *p_selectScannerDialog = (BaseDialog_o *)v22;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectScannerDialog, (int32_t)v22, v23, v24);
    EventMapManagerBase__LocateDialogToUiRoot(v25, *p_selectScannerDialog, v26);
  }
  p_newScannerDialog = (CGThumbnailListItem_o *)&this->fields.newScannerDialog;
  newScannerDialog = (UnityEngine_Object_o *)this->fields.newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(newScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v29 = this->fields.assetManager;
    if ( v29 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v29->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_30A3BB4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v31 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v9,
                (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        p_newScannerDialog->klass = (CGThumbnailListItem_c *)v31;
        sub_1BCAF9C(p_newScannerDialog, (int32_t)v31, v32, v33);
        EventMapManagerBase__LocateDialogToUiRoot(v34, (BaseDialog_o *)p_newScannerDialog->klass, v35);
        return;
      }
    }
LABEL_28:
    sub_1BCB254(v9, v10);
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

  if ( (byte_4B18F62 & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineMapAssetManager_TypeInfo, method);
    byte_4B18F62 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (CGThumbnailListItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_1BCB244(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    p_assetManager->klass = (CGThumbnailListItem_c *)v5;
    sub_1BCAF9C(p_assetManager, (int32_t)v5, v7, v8);
    if ( !p_assetManager->klass )
      sub_1BCB254(0LL, v9);
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
  if ( (byte_4B18F70 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, method);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B18F70 = 1;
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
  v8 = UnityEngine_Object__Instantiate_object__51002592(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.panelContainer, (int32_t)v8, v9, v10);
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
  v15 = UnityEngine_Object__Instantiate_object__51002592(
          EffectContainerPrefab_k__BackingField,
          v14,
          (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v15;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.effectContainer, (int32_t)v15, v16, v17);
  v18 = v2->fields.assetManager;
  if ( !v18 || (v19 = v2->fields.terminalMap) == 0LL || (this = (SubmarineMapManager_o *)v19->fields.dispRoot) == 0LL )
LABEL_15:
    sub_1BCB254(this, method);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v18->fields._GridLinePrefab_k__BackingField;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22 = UnityEngine_Object__Instantiate_object__51002592(
          GridLinePrefab_k__BackingField,
          v21,
          (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v22;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.gridLine, (int32_t)v22, v23, v24);
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
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  SubmarineMapDataManager_o *v43; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v45; // x24
  __int64 v46; // x0
  __int64 v47; // x1
  SubmarineMapManager___c_c *v48; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v50; // x26
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v55; // x1
  System_Collections_Generic_List_object__o *v56; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  System_Predicate_object__o *v59; // x26
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v65; // x1
  UnityEngine_Transform_o *v66; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v69; // x0
  __int64 v70; // x1
  __int64 v71; // x0
  const MethodInfo *v72; // x1
  int v73; // s0
  struct SubmarineMapDataManager_o *v76; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  Il2CppObject *v81; // x1
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  System_Object_array *v86; // x1
  const MethodInfo *v87; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  Il2CppObject *v91; // x1
  struct System_Object_array *v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  Il2CppClass **v95; // x0
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B18F92 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76878720, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v16);
    sub_1BCAFF8(&System_Predicate_SubmarineMapPanelData__TypeInfo, v17);
    sub_1BCAFF8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v18);
    sub_1BCAFF8(&SrcSpotBasePrefab_TypeInfo, v19);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__, v20);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__, v21);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo, v22);
    sub_1BCAFF8(&SubmarineMapManager___c_TypeInfo, v23);
    byte_4B18F92 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  v24 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_1BCB254(SilhouetteDataList_k__BackingField, v26);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v97,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v98 = v97;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v98,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v28 = sub_1BCB244(SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass101_0___ctor((SubmarineMapManager___c__DisplayClass101_0_o *)v28, 0LL);
    if ( !v28 )
      sub_1BCB254(v29, v30);
    current = (int32_t)v98.fields._current;
    *(_QWORD *)(v28 + 16) = v98.fields._current;
    v34 = (SubmarineSilhouetteData_o **)(v28 + 16);
    sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 16), current, v31, v32);
    v37 = *(SubmarineSilhouetteData_o **)(v28 + 16);
    if ( !v37 )
      sub_1BCB254(0LL, v35);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v37, beforeClearQuestId, v36);
    if ( HasClearCondQuestId )
    {
      if ( !*v34 )
        sub_1BCB254(HasClearCondQuestId, v39);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v34)->fields._ObjectQuestIds_k__BackingField, -1, 0, v40) )
      {
        v43 = this->fields.submarineData;
        if ( !v43 )
          sub_1BCB254(0LL, v41);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v43,
                                                                                    *v34,
                                                                                    v42);
        v45 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_object____ctor_57382084(
          v45,
          SilhouetteOccupiedPanels,
          (const MethodInfo_36B94C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76878720);
        v48 = SubmarineMapManager___c_TypeInfo;
        if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v48 = SubmarineMapManager___c_TypeInfo;
        }
        _9__101_0 = (System_Predicate_object__o *)v48->static_fields->__9__101_0;
        if ( !_9__101_0 )
        {
          if ( !v48->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v48);
            v48 = SubmarineMapManager___c_TypeInfo;
          }
          v50 = (Il2CppObject *)v48->static_fields->__9;
          _9__101_0 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_object____ctor(
            _9__101_0,
            v50,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0LL);
          static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          static_fields->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__101_0, (int32_t)_9__101_0, v52, v53);
        }
        if ( !v45 )
          sub_1BCB254(v46, v47);
        All = System_Collections_Generic_List_object___FindAll(
                v45,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_36BA2E0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v56 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_1BCB254(0LL, v55);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_1BCB254(0LL, v55);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v59 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            v59,
            (Il2CppObject *)v28,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0LL);
          if ( !SpotList )
            sub_1BCB254(v60, v61);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v59,
                 (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_1BCB254(0LL, v62);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v34 )
              sub_1BCB254(transform, v65);
            v66 = transform;
            SpotId_k__BackingField = (*v34)->fields._SpotId_k__BackingField;
            if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v66 )
              sub_1BCB254(GobjName, GobjName);
            v69 = UnityEngine_Transform__Find(v66, GobjName, 0LL);
            if ( !v69 )
              sub_1BCB254(0LL, v70);
            *(UnityEngine_Vector3_o *)&v73 = UnityEngine_Transform__get_localPosition(v69, 0LL);
            v76 = this->fields.submarineData;
            if ( !v76 )
              sub_1BCB254(v71, v72);
            Settings_k__BackingField = v76->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_1BCB254(v71, v72);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         *(UnityEngine_Vector3_o *)&v73,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v72);
            v81 = MoveCameraToPositionTask;
            if ( !v24 )
              sub_1BCB254(MoveCameraToPositionTask, MoveCameraToPositionTask);
            items = v24->fields._items;
            v83 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v24->fields._version;
            if ( !items )
              sub_1BCB254(MoveCameraToPositionTask, MoveCameraToPositionTask);
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v24,
                MoveCameraToPositionTask,
                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
            }
            else
            {
              v85 = &items->obj.klass + size;
              v24->fields._size = size + 1;
              v85[4] = (Il2CppClass *)v81;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v81, v79, v80);
            }
          }
          v86 = System_Collections_Generic_List_object___ToArray(
                  v56,
                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v86,
                                                           v87);
          v91 = OpenPanelsAndRevealSpotsTask;
          if ( !v24 )
            sub_1BCB254(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v92 = v24->fields._items;
          v93 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
          ++v24->fields._version;
          if ( !v92 )
            sub_1BCB254(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v94 = v24->fields._size;
          if ( (unsigned int)v94 >= v92->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
          }
          else
          {
            v95 = &v92->obj.klass + v94;
            v24->fields._size = v94 + 1;
            v95[4] = (Il2CppClass *)v91;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v95 + 4), (int32_t)v91, v89, v90);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v98,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v24;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_4B18F8F & 1) == 0 )
  {
    sub_1BCAFF8(&SchedulerTaskNone_TypeInfo, panelData);
    byte_4B18F8F = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_1BCB244(SchedulerTaskNone_TypeInfo);
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
  const MethodInfo_37DCC90 *v5; // x2
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
  if ( (byte_4B18F88 & 1) == 0 )
  {
    sub_1BCAFF8(&MapCameraPerformance_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Nullable_Vector2___ctor__, v11);
    sub_1BCAFF8(&Method_System_Nullable_float___ctor__, v12);
    byte_4B18F88 = 1;
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
  System_Nullable_float____ctor(v19, size, (const MethodInfo_37DB04C *)Method_System_Nullable_float___ctor__);
  v14 = (MapCameraPerformance_o *)sub_1BCB244(MapCameraPerformance_TypeInfo);
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
  const MethodInfo *v10; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SubmarineMapManager_o *v13; // x20
  int v14; // w24
  int v15; // w25
  struct SubmarineMapAssetManager_o *v16; // x8
  __int64 v17; // x21
  Il2CppObject *v18; // x22
  UnityEngine_Transform_o *transform; // x23
  SubmarineMapManager_o *v20; // x22
  int v21; // s2 OVERLAPPED
  unsigned __int64 v22; // d0 OVERLAPPED
  int v23; // s1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  SubmarineMapPanelComponent_o *v26; // x22
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x2
  __int64 v30; // x2
  const MethodInfo *v31; // x3
  struct SubmarineMapDataManager_o *v32; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v34; // x20
  int32_t v35; // w21
  int32_t v36; // w22
  int v37; // w26
  struct SubmarineMapDataManager_o *v38; // x8
  unsigned __int64 v39; // d0 OVERLAPPED
  int v40; // s1
  int v41; // s2
  struct SubmarineMapAssetManager_o *v42; // x8
  SubmarineMapManager_o *v43; // x23
  Il2CppObject *v44; // x24
  UnityEngine_Transform_o *v45; // x25
  SubmarineMapManager_o *v46; // x24
  int v47; // s2 OVERLAPPED
  unsigned __int64 v48; // d0 OVERLAPPED
  int v49; // s1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  SubmarineMapPanelComponent_o *v52; // x24
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x2

  v2 = this;
  if ( (byte_4B18F72 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, method);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(&PanelUniqueIDUtil_TypeInfo, v5);
    byte_4B18F72 = 1;
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
                                          v10)) == 0LL )
  {
LABEL_54:
    sub_1BCB254(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v13 = this;
  v14 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      v16 = v2->fields.assetManager;
      if ( !v16 )
        goto LABEL_54;
      this = (SubmarineMapManager_o *)v2->fields.panelContainer;
      if ( !this )
        goto LABEL_54;
      v17 = *((_QWORD *)&v13->fields.mapInfo + v15);
      v18 = (Il2CppObject *)v16->fields._PanelPrefab_k__BackingField;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__51002592(
                                        v18,
                                        transform,
                                        (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
      if ( !this )
        goto LABEL_54;
      v20 = this;
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !v17 )
        goto LABEL_54;
      if ( !this )
        goto LABEL_54;
      v21 = 0;
      v22 = vadd_f32(
              *(float32x2_t *)(v17 + 16),
              vmul_f32(*(float32x2_t *)(v17 + 24), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
      v23 = HIDWORD(v22);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)this,
        *(UnityEngine_Vector3_o *)(&v21 - 2),
        0LL);
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)v20,
                                        (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
      if ( !this )
        goto LABEL_54;
      v26 = (SubmarineMapPanelComponent_o *)this;
      this->fields.mapCamera = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mapCamera, 0, v24, v25);
      SubmarineMapPanelComponent__SetSize(v26, (ObjectDomain_o *)v17, v27);
      SubmarineMapPanelComponent__SetClosedPanelTexture(v26, (ObjectDomain_o *)v17, v2->fields.closedPanelTexture, v28);
      SubmarineMapPanelComponent__SetClosedPanelVisible(v26, 1, v29);
      if ( v14 == v15 )
        break;
      if ( (unsigned int)++v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
        sub_1BCB25C(this, method, v30);
    }
  }
  this = (SubmarineMapManager_o *)v2->fields.submarineData;
  if ( !this )
    goto LABEL_54;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                    (SubmarineMapDataManager_o *)this,
                                    method);
  v32 = v2->fields.submarineData;
  if ( !v32 )
    goto LABEL_54;
  PositionCalculator_k__BackingField = v32->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_54;
  v34 = this;
  v35 = 0;
  while ( v35 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
  {
    v36 = 0;
    v37 = 1;
    while ( v36 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
    {
      if ( !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
      this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v35, v36, (System_Int32_array *)v34, v31);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v38 = v2->fields.submarineData;
        if ( !v38 )
          goto LABEL_54;
        this = (SubmarineMapManager_o *)v38->fields._PositionCalculator_k__BackingField;
        if ( !this )
          goto LABEL_54;
        v39 = vadd_f32(
                (float32x2_t)this->fields.mapInfo,
                vmul_f32(
                  vmul_f32(
                    *(float32x2_t *)&this->fields.m_CachedPtr,
                    vcvt_f32_s32(
                      vsub_s32(
                        (int32x2_t)__PAIR64__(v37, (2 * v35) | 1u),
                        (int32x2_t)this->fields.m_CancellationTokenSource))),
                  (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v40 = HIDWORD(v39);
        v41 = 0;
        this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                          *(UnityEngine_Vector3_o *)&v39,
                                          (SubmarinePanelPositionCalculator_o *)this,
                                          method);
        v42 = v2->fields.assetManager;
        if ( !v42 )
          goto LABEL_54;
        v43 = this;
        this = (SubmarineMapManager_o *)v2->fields.panelContainer;
        if ( !this )
          goto LABEL_54;
        v44 = (Il2CppObject *)v42->fields._PanelPrefab_k__BackingField;
        v45 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__51002592(
                                          v44,
                                          v45,
                                          (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
        if ( !this )
          goto LABEL_54;
        v46 = this;
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !v43 )
          goto LABEL_54;
        if ( !this )
          goto LABEL_54;
        v47 = 0;
        v48 = vadd_f32(
                *(float32x2_t *)&v43->fields.m_CachedPtr,
                vmul_f32((float32x2_t)v43->fields.m_CancellationTokenSource, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v49 = HIDWORD(v48);
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          *(UnityEngine_Vector3_o *)(&v47 - 2),
          0LL);
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v46,
                                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
        if ( !this )
          goto LABEL_54;
        v52 = (SubmarineMapPanelComponent_o *)this;
        this->fields.mapCamera = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mapCamera, 0, v50, v51);
        SubmarineMapPanelComponent__SetSize(v52, (ObjectDomain_o *)v43, v53);
        SubmarineMapPanelComponent__SetClosedPanelTexture(
          v52,
          (ObjectDomain_o *)v43,
          v2->fields.closedPanelTexture,
          v54);
        SubmarineMapPanelComponent__SetClosedPanelVisible(v52, 1, v55);
      }
      v32 = v2->fields.submarineData;
      if ( v32 )
      {
        PositionCalculator_k__BackingField = v32->fields._PositionCalculator_k__BackingField;
        ++v36;
        v37 += 2;
        if ( PositionCalculator_k__BackingField )
          continue;
      }
      goto LABEL_54;
    }
    PositionCalculator_k__BackingField = v32->fields._PositionCalculator_k__BackingField;
    ++v35;
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
  const MethodInfo_37DD510 *v19; // x2
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
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  SchedulerTaskOrthostichy_o *v37; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v40; // s8
  System_Collections_Generic_List_object__o *v41; // x22
  SchedulerTaskWaitTime_o *v42; // x23
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  const MethodInfo *v49; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v51; // x19
  const MethodInfo *v52; // x3
  SchedulerTaskBase_array *v53; // x20
  const MethodInfo *v54; // x3
  SchedulerTaskParallel_o *v55; // x19
  __int64 v57; // x0
  System_Nullable_Vector3__o v58; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v59; // 0:x0.16
  System_Nullable_Vector3__o v60; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B18F8C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, panelData);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Nullable_Vector3___ctor__, v10);
    sub_1BCAFF8(&SchedulerTaskBase___TypeInfo, v11);
    sub_1BCAFF8(&SchedulerTaskCommonEffect_TypeInfo, v12);
    sub_1BCAFF8(&SchedulerTaskOrthostichy_TypeInfo, v13);
    sub_1BCAFF8(&SchedulerTaskParallel_TypeInfo, v14);
    sub_1BCAFF8(&SchedulerTaskWaitTime_TypeInfo, v15);
    sub_1BCAFF8(&Method_SubmarineMapPanelData_OpenPanel__, v16);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v17);
    byte_4B18F8C = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_32;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  *(_QWORD *)&v59.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  v21 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v59.fields.hasValue = &v58;
  *(_QWORD *)&v58.fields.hasValue = 0LL;
  *(_QWORD *)&v58.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v59, LocalPosition_k__BackingField, v19);
  v22 = (SchedulerTaskCommonEffect_o *)sub_1BCB244(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v60.fields.hasValue = 0LL;
  *(_QWORD *)&v60.fields.value.fields.y = 0LL;
  v23 = v22;
  SchedulerTaskCommonEffect___ctor_43429748(
    v22,
    v21,
    effectScanedPanelObjPool,
    v58,
    v60,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v23 )
    goto LABEL_32;
  p_StartCallback = (System_Delegate_o **)&v23->fields.StartCallback;
  StartCallback = (System_Delegate_o *)v23->fields.StartCallback;
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
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
    sub_1BCB514(v27);
  }
  *p_StartCallback = v30;
LABEL_11:
  sub_1BCAF9C((CGThumbnailListItem_o *)&v23->fields.StartCallback, (int32_t)v30, v28, v29);
  v32 = (SchedulerTaskBase_array *)sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 2LL);
  v33 = (SchedulerTaskWaitTime_o *)sub_1BCB244(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v33, waitTime, 0LL);
  if ( !v32 )
    goto LABEL_32;
  if ( v33 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1BCB134(v33, v32->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v32->max_length )
    goto LABEL_33;
  v32->m_Items[0] = (SchedulerTaskBase_o *)v33;
  sub_1BCAF9C((CGThumbnailListItem_o *)v32->m_Items, (int32_t)v33, v34, v35);
  effectContainer = (UnityEngine_GameObject_o *)sub_1BCB134(v23, v32->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( v32->max_length <= 1 )
    goto LABEL_33;
  v32->m_Items[1] = (SchedulerTaskBase_o *)v23;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v32->m_Items[1], (int32_t)v23, v34, v36);
  v37 = (SchedulerTaskOrthostichy_o *)sub_1BCB244(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v37, v32, 0LL);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v40 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v41 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v41,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v42 = (SchedulerTaskWaitTime_o *)sub_1BCB244(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v42, v40, 0LL);
  if ( !v41 )
    goto LABEL_32;
  items = v41->fields._items;
  v46 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v41->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v41->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v41,
      (Il2CppObject *)v42,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &items->obj.klass + size;
    v41->fields._size = size + 1;
    v48[4] = (Il2CppClass *)v42;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v48 + 4), (int32_t)v42, v43, v44);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v49);
  System_Collections_Generic_List_object___AddRange(
    v41,
    RevealSpotOnPanelTasks,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v51 = (SchedulerTaskOrthostichy_o *)sub_1BCB244(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor_43432604(v51, (System_Collections_Generic_List_SchedulerTaskBase__o *)v41, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !effectContainer )
LABEL_32:
    sub_1BCB254(effectContainer, panelData);
  v53 = (SchedulerTaskBase_array *)effectContainer;
  if ( v37 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1BCB134(v37, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v53->max_length )
    goto LABEL_33;
  v53->m_Items[0] = (SchedulerTaskBase_o *)v37;
  sub_1BCAF9C((CGThumbnailListItem_o *)v53->m_Items, (int32_t)v37, v34, v52);
  if ( v51 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1BCB134(v51, v53->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v57 = sub_1BCB278();
      sub_1BCB120(v57, 0LL);
    }
  }
  if ( v53->max_length <= 1 )
LABEL_33:
    sub_1BCB25C(effectContainer, panelData, v34);
  v53->m_Items[1] = (SchedulerTaskBase_o *)v51;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v53->m_Items[1], (int32_t)v51, v34, v54);
  v55 = (SchedulerTaskParallel_o *)sub_1BCB244(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v55, v53, 0LL);
  return (SchedulerTaskBase_o *)v55;
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

  if ( (byte_4B18F8D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, panelDataArray);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_1BCAFF8(&SchedulerTaskParallel_TypeInfo, v7);
    byte_4B18F8D = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  v12 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1BCB25C(OpenPanelAndRevealSpotTask, v10, v11);
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
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
      }
      LODWORD(v12) = panelDataArray->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1BCB254(OpenPanelAndRevealSpotTask, v10);
  }
LABEL_13:
  v21 = (SchedulerTaskParallel_o *)sub_1BCB244(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_43433636(v21, (System_Collections_Generic_List_SchedulerTaskBase__o *)v8, 0LL);
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
  const MethodInfo *v27; // x1
  struct SubmarineMapDataManager_o *v28; // x8
  Il2CppObject *v29; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v31; // s8
  float v32; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  ObjectDomain_o *v37; // x23
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Action_object__o *v42; // x21
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4B18F71 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_SubmarineMapPanelData__TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(&Method_SubmarineMapManager_ClickPanel__, v10);
    byte_4B18F71 = 1;
  }
  memset(&v45, 0, sizeof(v45));
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v44,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v45 = v44;
            while ( 1 )
            {
              v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v45,
                      (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v16 )
                break;
              v18 = v2->fields.assetManager;
              if ( !v18 )
                sub_1BCB254(v16, v17);
              v19 = v2->fields.panelContainer;
              if ( !v19 )
                sub_1BCB254(0LL, v17);
              current = v45.fields._current;
              v21 = (Il2CppObject *)v18->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v19, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v23 = UnityEngine_Object__Instantiate_object__51002592(
                      v21,
                      transform,
                      (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
              v25 = (UnityEngine_GameObject_o *)v23;
              if ( !v23 )
                sub_1BCB254(0LL, v24);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v23,
                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v28 = v2->fields.submarineData;
              if ( !v28 )
                sub_1BCB254(Component_object, v27);
              if ( !current )
                sub_1BCB254(Component_object, v27);
              v29 = Component_object;
              PositionCalculator_k__BackingField = v28->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_1BCB254(0LL, v27);
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
              v46.fields.z = 0.0;
              v46.fields.x = v31;
              v46.fields.y = v32;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v46,
                                    PositionCalculator_k__BackingField,
                                    v27);
              if ( !v29 )
                sub_1BCB254(ClosedPanelDomain, v34);
              v37 = ClosedPanelDomain;
              v29[3].monitor = 0LL;
              sub_1BCAF9C((CGThumbnailListItem_o *)&v29[3].monitor, 0, v35, v36);
              v47.fields.z = 0.0;
              v47.fields.x = v31;
              v47.fields.y = v32;
              GameObjectExtensions__SetLocalPosition(v25, v47, 0LL);
              SubmarineMapPanelComponent__SetSize((SubmarineMapPanelComponent_o *)v29, v37, v38);
              SubmarineMapPanelComponent__SetClosedPanelTexture(
                (SubmarineMapPanelComponent_o *)v29,
                v37,
                v2->fields.closedPanelTexture,
                v39);
              current[3].klass = (Il2CppClass *)v29;
              sub_1BCAF9C((CGThumbnailListItem_o *)&current[3], (int32_t)v29, v40, v41);
              v42 = (System_Action_object__o *)sub_1BCB244(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_object____ctor(
                v42,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                0LL);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v42,
                v43);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v45,
              (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_1BCB254(this, method);
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
  const MethodInfo *v10; // x2
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w23
  Il2CppObject *Component_object; // x22

  if ( (byte_4B18F90 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B18F90 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_15;
  v11 = *((_DWORD *)Children + 6);
  v12 = Children;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
        sub_1BCB25C(Children, v9, v10);
      Children = (void *)*((_QWORD *)v12 + (int)v13 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v10);
        if ( !v7 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v7,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v7;
    }
LABEL_15:
    sub_1BCB254(Children, v9);
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

  if ( (byte_4B18F8B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___, panelData);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v10);
    sub_1BCAFF8(&SchedulerTaskNone_TypeInfo, v11);
    sub_1BCAFF8(&SrcSpotBasePrefab_TypeInfo, v12);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__, v13);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo, v14);
    byte_4B18F8B = 1;
  }
  v15 = sub_1BCB244(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass94_0___ctor((SubmarineMapManager___c__DisplayClass94_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_25;
  *(_QWORD *)(v15 + 16) = panelData;
  v20 = v15 + 16;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)panelData, v18, v19);
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v22 = (SchedulerTaskNone_o *)sub_1BCB244(SchedulerTaskNone_TypeInfo);
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
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &items->obj.klass + size;
    v21->fields._size = size + 1;
    v28[4] = (Il2CppClass *)v22;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
  }
  if ( !*(_QWORD *)v20 || *(int *)(*(_QWORD *)v20 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v21;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v30 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MapControl_SpotInfo__TypeInfo);
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
          (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
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
    sub_1BCB254(mapInfo, v17);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v34,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
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

  if ( (byte_4B18F91 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, spot);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_1BCAFF8(&SubmarineLightenSpotPerformance_TypeInfo, v8);
    sub_1BCAFF8(&SubmarineRevealSpotPerformance_TypeInfo, v9);
    byte_4B18F91 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v14);
  v15 = sub_1BCB244(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v15, 0LL);
  *(_QWORD *)(v15 + 48) = spot;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 48), (int32_t)spot, v16, v17);
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
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v15;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v23 + 4), v15, v18, v19);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  v24 = sub_1BCB244(SubmarineLightenSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v24, 0LL);
  *(_QWORD *)(v24 + 48) = spot;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 48), (int32_t)spot, v25, v26);
  v29 = v10->fields._items;
  v30 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v10->fields._version;
  if ( !v29 )
LABEL_20:
    sub_1BCB254(mMapCtrl_SpotInfo, v12);
  v31 = v10->fields._size;
  if ( (unsigned int)v31 >= v29->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v24,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v10->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v24;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v32 + 4), v24, v27, v28);
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
  const MethodInfo *v29; // x3
  SubmarineMapManager___c_c *v30; // x8
  System_Collections_Generic_List_object__o *v31; // x21
  System_Predicate_object__o *_9__97_0; // x22
  Il2CppObject *v33; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v41; // x23
  struct SubmarineMapManager___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w23
  SubmarineMapManager___c__DisplayClass97_0_o *v46; // x22
  int v47; // w29
  float v48; // s9
  System_Predicate_object__o *v49; // x23
  System_Collections_Generic_List_T__o *v50; // x23
  System_Collections_Generic_List_object__o *v51; // x0
  _BOOL8 v52; // x0
  __int64 v53; // x1
  const MethodInfo *v54; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v56; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v58; // x2
  float v59; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  Il2CppObject *v63; // x1
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v69; // w8
  SchedulerTaskParallel_o *v70; // x19
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4B18F8E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___, *(_QWORD *)&scanId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v9);
    sub_1BCAFF8(&System_Func_SubmarineScanEvent__int__TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v15);
    sub_1BCAFF8(&System_Predicate_SubmarineScanEvent__TypeInfo, v16);
    sub_1BCAFF8(&SchedulerTaskParallel_TypeInfo, v17);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__, v18);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__, v19);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__, v20);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo, v21);
    sub_1BCAFF8(&SubmarineMapManager___c_TypeInfo, v22);
    byte_4B18F8E = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
                                                             v29);
  v30 = SubmarineMapManager___c_TypeInfo;
  v31 = (System_Collections_Generic_List_object__o *)Settings_k__BackingField;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v30 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_0 = (System_Predicate_object__o *)v30->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = SubmarineMapManager___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__97_0 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_object____ctor(
      _9__97_0,
      v33,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__,
      0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__97_0, (int32_t)_9__97_0, v35, v36);
  }
  if ( !v31 )
    goto LABEL_48;
  All = System_Collections_Generic_List_object___FindAll(
          v31,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_36BA2E0 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v38 = SubmarineMapManager___c_TypeInfo;
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v38 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_1 = (System_Func_object__int__o *)v38->static_fields->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = SubmarineMapManager___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__97_1,
      v41,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__,
      0LL);
    v42 = SubmarineMapManager___c_TypeInfo->static_fields;
    v42->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v42->__9__97_1, (int32_t)_9__97_1, v43, v44);
  }
  v45 = System_Linq_Enumerable__Max_object_(
          v39,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_3044DFC *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v46 = (SubmarineMapManager___c__DisplayClass97_0_o *)sub_1BCB244(SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass97_0___ctor(v46, 0LL);
  if ( !v46 )
LABEL_48:
    sub_1BCB254(Settings_k__BackingField, v25);
  v47 = v45 + 1;
  v46->fields.i = 0;
  if ( v45 + 1 >= 1 )
  {
    v48 = 0.0;
    do
    {
      v49 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_object____ctor(
        v49,
        (Il2CppObject *)v46,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0LL);
      if ( !v39 )
        goto LABEL_48;
      v50 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v39,
              (System_Predicate_T__o *)v49,
              (const MethodInfo_36BA2E0 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v51 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v51,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v50 )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v72,
        (System_Collections_Generic_List_object__o *)v50,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v73 = v72;
      while ( 1 )
      {
        v52 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v73,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v52 )
          break;
        current = v73.fields._current;
        if ( !v73.fields._current )
          sub_1BCB254(v52, v53);
        v56 = this->fields.submarineData;
        if ( !v56 )
          sub_1BCB254(0LL, v53);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v56,
                           (int32_t)v73.fields._current[1].klass,
                           HIDWORD(v73.fields._current[1].klass),
                           v54);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v59,
                                v58);
            v63 = (Il2CppObject *)HitObstractTask;
            if ( !v23 )
              sub_1BCB254(HitObstractTask, HitObstractTask);
            items = v23->fields._items;
            v65 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1BCB254(HitObstractTask, HitObstractTask);
            size = v23->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              v63,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v48,
                                           v58);
            v63 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v23 )
              sub_1BCB254(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            items = v23->fields._items;
            v65 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1BCB254(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_32:
            v67 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v67[4] = (Il2CppClass *)v63;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v63, v61, v62);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v73,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v48 = ScanOpenPanelInterval + v48;
      v69 = v46->fields.i + 1;
      v46->fields.i = v69;
    }
    while ( v69 < v47 );
  }
  v70 = (SchedulerTaskParallel_o *)sub_1BCB244(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_43433636(v70, (System_Collections_Generic_List_SchedulerTaskBase__o *)v23, 0LL);
  return (SchedulerTaskBase_o *)v70;
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
  SubmarineScannerComponent_o *Component_object; // x22
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
  const MethodInfo *v82; // x1
  float JumpStartTime; // s10
  SchedulerTaskWaitTime_o *v84; // x25
  __int64 p_StartCallback; // x25
  CGThumbnailListItem_o *v86; // x26
  System_Delegate_o *StartCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v88; // x27
  System_Delegate_o *v89; // x0
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  System_Delegate_o *v92; // x8
  SchedulerTaskBase_TaskCallback_c *v93; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v95; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v96; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v99; // x0
  __int64 v100; // x25
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  System_String_o *v103; // x27
  SchedulerTaskWaitLoadAsset_o *v104; // x26
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  __int64 v113; // x1
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  __int64 v116; // x1
  float v117; // s10
  System_Delegate_o *v118; // x27
  SchedulerTaskBase_TaskCallback_o *v119; // x28
  System_Delegate_o *v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  SchedulerTaskBase_TaskCallback_c *v123; // x1
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  const MethodInfo *v130; // x1
  float SelectedPanelEffecFinishTime; // s10
  System_Delegate_o *v132; // x27
  SchedulerTaskBase_TaskCallback_o *v133; // x28
  System_Delegate_o *v134; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  SchedulerTaskBase_TaskCallback_c *v137; // x1
  __int64 *v138; // x23
  const MethodInfo *v139; // x1
  __int64 v140; // x1
  const MethodInfo_37DCC90 *v141; // x2
  float JumpDuration; // s10
  float x; // s0
  float32x2_t v144; // d12
  MapCamera_o *mapCamera; // x21
  float v146; // s1
  MapCameraPerformance_o *v147; // x0
  SchedulerTaskBase_o *v148; // x26
  UnityEngine_GameObject_o *v149; // x24
  SchedulerTaskMovePerformance_o *v150; // x0
  SchedulerTaskBase_o *v151; // x21
  __int64 v152; // x2
  const MethodInfo *v153; // x3
  SchedulerTaskBase_array *v154; // x24
  const MethodInfo *v155; // x3
  const MethodInfo *v156; // x1
  __int64 v157; // x1
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8
  System_String_o *v161; // x27
  System_Delegate_o *v162; // x27
  SchedulerTaskBase_TaskCallback_o *v163; // x28
  System_Delegate_o *v164; // x0
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  SchedulerTaskBase_TaskCallback_c *v167; // x1
  __int64 v168; // x20
  const MethodInfo *v169; // x3
  __int64 v170; // x24
  const MethodInfo *v171; // x3
  const MethodInfo *v172; // x3
  SchedulerTaskOrthostichy_o *v173; // x21
  const MethodInfo *v174; // x3
  SchedulerTaskParallel_o *v175; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v177; // x20
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  struct System_Object_array *v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  Il2CppClass **v183; // x0
  int32_t v184; // w2
  const MethodInfo *v185; // x3
  struct System_Object_array *v186; // x8
  _QWORD *v187; // x9
  __int64 v188; // x10
  Il2CppClass **v189; // x0
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  struct System_Object_array *v192; // x8
  _QWORD *v193; // x9
  __int64 v194; // x10
  Il2CppClass **v195; // x0
  __int64 v197; // x0
  SchedulerTaskWaitTime_o *v198; // [xsp+8h] [xbp-E8h]
  float v199; // [xsp+20h] [xbp-D0h]
  float v200; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v205; // 0:x4.8
  System_Nullable_Vector2__o v206; // 0:x0.12
  UnityEngine_Vector3_o v207; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v208; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v209; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v210; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B18F8A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventPanelScanMaster___, panelData);
    sub_1BCAFF8(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___, v8);
    sub_1BCAFF8(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v12);
    sub_1BCAFF8(&MapCameraPerformance_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Nullable_Vector2___ctor__, v14);
    sub_1BCAFF8(&Method_System_Nullable_float___ctor__, v15);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v16);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v17);
    sub_1BCAFF8(&SchedulerTaskBase___TypeInfo, v18);
    sub_1BCAFF8(&SchedulerTaskMovePerformance_TypeInfo, v19);
    sub_1BCAFF8(&SchedulerTaskOrthostichy_TypeInfo, v20);
    sub_1BCAFF8(&SchedulerTaskParallel_TypeInfo, v21);
    sub_1BCAFF8(&SchedulerTaskSimpleAnimation_TypeInfo, v22);
    sub_1BCAFF8(&SchedulerTaskWaitLoadAsset_TypeInfo, v23);
    sub_1BCAFF8(&SchedulerTaskWaitTime_TypeInfo, v24);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1BCAFF8(&SoundManager_TypeInfo, v26);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v27);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__, v28);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__, v29);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__, v30);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__, v31);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo, v32);
    byte_4B18F8A = 1;
  }
  v33 = sub_1BCB244(SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass93_0___ctor((SubmarineMapManager___c__DisplayClass93_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_131;
  *(_QWORD *)(v33 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 32), (int32_t)this, v36, v37);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_131;
  if ( !panelData )
    goto LABEL_131;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_131;
  v40.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v41.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v42.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v43.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v45 = this->fields.submarineData;
  if ( !v45 )
    goto LABEL_131;
  Settings_k__BackingField = v45->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_131;
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
    goto LABEL_131;
  items = v44->fields._items;
  v54 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v44->fields._version;
  if ( !items )
    goto LABEL_131;
  v55 = v44->fields._size;
  v56 = MoveCameraToPositionTask;
  if ( (unsigned int)v55 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v44,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = &items->obj.klass + v55;
    v44->fields._size = v55 + 1;
    v57[4] = (Il2CppClass *)v56;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v57 + 4), v56, v51, v52);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_131;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_131;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v44;
  if ( !this->fields.assetManager )
    goto LABEL_131;
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
        goto LABEL_131;
      MoveCameraToPositionTask = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      *(UnityEngine_Vector3_o *)(&v62 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                               0LL);
      MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
      v200 = v63;
      v199 = v64;
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v65 = v62;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v67 = UnityEngine_Object__Instantiate_object__51002592(
              ScanAnimObjectPrefab,
              transform,
              (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
      *(_QWORD *)(v33 + 16) = v67;
      v68 = v33 + 16;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 16), (int32_t)v67, v69, v70);
      v207.fields.y = v199;
      v207.fields.x = v200;
      v207.fields.z = v65;
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v33 + 16), v207, 0LL);
      MoveCameraToPositionTask = *(_QWORD *)(v33 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
      Component_object = (SubmarineScannerComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                          *(UnityEngine_GameObject_o **)v68,
                                                          (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_4B16193 )
      {
        sub_1BCAFF8(&System_Math_TypeInfo, v35);
        byte_4B16193 = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !Component_object )
        goto LABEL_131;
      v72.n64_u64[0] = vsub_f32((float32x2_t)__PAIR64__(LODWORD(v199), LODWORD(v200)), (float32x2_t)value).n64_u64[0];
      SubmarineScannerComponent__PrepareAnimation(
        Component_object,
        sqrtf((float)(v65 * v65) + vaddv_f32(vmul_f32(v72, v72))),
        v35);
      if ( !Component_object->fields.state )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v44;
      v44 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v44,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v73 = this->fields.submarineData;
      if ( !v73 )
        goto LABEL_131;
      v74 = v73->fields._Settings_k__BackingField;
      if ( !v74 )
        goto LABEL_131;
      v208.fields.y = v199;
      v208.fields.x = v200;
      v208.fields.z = v65;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            v208,
                                            1.0,
                                            v74->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v35);
      if ( !v44 )
        goto LABEL_131;
      v77 = v44->fields._items;
      v78 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v44->fields._version;
      if ( !v77 )
        goto LABEL_131;
      v79 = v44->fields._size;
      v80 = MoveCameraToPositionTask;
      if ( (unsigned int)v79 >= v77->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
      }
      else
      {
        v81 = &v77->obj.klass + v79;
        v44->fields._size = v79 + 1;
        v81[4] = (Il2CppClass *)v80;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v81 + 4), v80, v75, v76);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(Component_object, v82);
      v84 = (SchedulerTaskWaitTime_o *)sub_1BCB244(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor(v84, JumpStartTime, 0LL);
      if ( !v84 )
        goto LABEL_131;
      v198 = v84;
      StartCallback = (System_Delegate_o *)v84->fields.StartCallback;
      p_StartCallback = (__int64)&v84->fields.StartCallback;
      v86 = (CGThumbnailListItem_o *)StartCallback;
      v88 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v88,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0LL);
      v89 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v88, 0LL);
      v92 = v89;
      if ( v89 )
      {
        v93 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v89->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        *(_QWORD *)p_StartCallback = v89;
        if ( (SchedulerTaskBase_TaskCallback_c *)v89->klass != v93 )
          goto LABEL_103;
      }
      else
      {
        *(_QWORD *)p_StartCallback = 0LL;
      }
      sub_1BCAF9C((CGThumbnailListItem_o *)p_StartCallback, (int32_t)v89, v90, v91);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_131;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v95 = this->fields.playingScanVoiceData;
        if ( !v95 )
          goto LABEL_131;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v95->fields.assetName, 0LL);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v96 = this->fields.playingScanVoiceData;
          if ( !v96 )
            goto LABEL_131;
          assetName = v96->fields.assetName;
          vcName = v96->fields.vcName;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
        }
      }
      v99 = GameObjectExtensions__SafeGetComponent_object_(
              *(UnityEngine_GameObject_o **)(v33 + 16),
              (const MethodInfo_30701F8 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v33 + 24) = v99;
      v100 = v33 + 24;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 24), (int32_t)v99, v101, v102);
      if ( !*(_QWORD *)(v33 + 24) )
        goto LABEL_131;
      v103 = *(System_String_o **)(*(_QWORD *)(v33 + 24) + 56LL);
      v104 = (SchedulerTaskWaitLoadAsset_o *)sub_1BCB244(SchedulerTaskWaitLoadAsset_TypeInfo);
      SchedulerTaskWaitLoadAsset___ctor(v104, v103, 0LL);
      v107 = v44->fields._items;
      v108 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v44->fields._version;
      if ( !v107 )
        goto LABEL_131;
      v109 = v44->fields._size;
      if ( (unsigned int)v109 >= v107->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)v104,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = &v107->obj.klass + v109;
        v44->fields._size = v109 + 1;
        v110[4] = (Il2CppClass *)v104;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v110 + 4), (int32_t)v104, v105, v106);
      }
      if ( !*(_QWORD *)v100 )
        goto LABEL_131;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v113 = *(_QWORD *)(*(_QWORD *)v100 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v113;
      sub_1BCAF9C((CGThumbnailListItem_o *)(MoveCameraToPositionTask + 16), v113, v111, v112);
      if ( !*(_QWORD *)v100
        || (MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData) == 0
        || (v116 = *(_QWORD *)(*(_QWORD *)v100 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v116,
            sub_1BCAF9C((CGThumbnailListItem_o *)(MoveCameraToPositionTask + 24), v116, v114, v115),
            !*(_QWORD *)v100)
        || (v117 = *(float *)(*(_QWORD *)v100 + 32LL),
            p_StartCallback = sub_1BCB244(SchedulerTaskWaitTime_TypeInfo),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)p_StartCallback, v117, 0LL),
            !p_StartCallback) )
      {
LABEL_131:
        sub_1BCB254(MoveCameraToPositionTask, v35);
      }
      v86 = (CGThumbnailListItem_o *)(p_StartCallback + 24);
      v118 = *(System_Delegate_o **)(p_StartCallback + 24);
      v119 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v119,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0LL);
      v120 = System_Delegate__Combine(v118, (System_Delegate_o *)v119, 0LL);
      v92 = v120;
      if ( v120 )
      {
        v123 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v120->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        v86->klass = (CGThumbnailListItem_c *)v120;
        if ( (SchedulerTaskBase_TaskCallback_c *)v120->klass != v123 )
          goto LABEL_103;
      }
      else
      {
        v86->klass = 0LL;
      }
      sub_1BCAF9C((CGThumbnailListItem_o *)(p_StartCallback + 24), (int32_t)v120, v121, v122);
      v126 = v44->fields._items;
      v127 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v44->fields._version;
      if ( !v126 )
        goto LABEL_131;
      v128 = v44->fields._size;
      if ( (unsigned int)v128 >= v126->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v44,
          (Il2CppObject *)p_StartCallback,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v129 = &v126->obj.klass + v128;
        v44->fields._size = v128 + 1;
        v129[4] = (Il2CppClass *)p_StartCallback;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v129 + 4), p_StartCallback, v124, v125);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(Component_object, v130);
      p_StartCallback = sub_1BCB244(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)p_StartCallback, SelectedPanelEffecFinishTime, 0LL);
      if ( !p_StartCallback )
        goto LABEL_131;
      v86 = (CGThumbnailListItem_o *)(p_StartCallback + 32);
      v132 = *(System_Delegate_o **)(p_StartCallback + 32);
      v133 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v133,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0LL);
      v134 = System_Delegate__Combine(v132, (System_Delegate_o *)v133, 0LL);
      v92 = v134;
      if ( v134 )
      {
        v137 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v134->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        v86->klass = (CGThumbnailListItem_c *)v134;
        v138 = &qword_4B16000;
        if ( (SchedulerTaskBase_TaskCallback_c *)v134->klass != v137 )
          goto LABEL_103;
      }
      else
      {
        v86->klass = 0LL;
        v138 = &qword_4B16000;
      }
      sub_1BCAF9C((CGThumbnailListItem_o *)(p_StartCallback + 32), (int32_t)v134, v135, v136);
      *(_BYTE *)(p_StartCallback + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration(Component_object, v139);
      if ( !*((_BYTE *)v138 + 403) )
      {
        sub_1BCAFF8(&System_Math_TypeInfo, v140);
        *((_BYTE *)v138 + 403) = 1;
      }
      x = value.fields.x;
      v144.n64_u64[0] = vsub_f32((float32x2_t)value, (float32x2_t)__PAIR64__(LODWORD(v199), LODWORD(v200))).n64_u64[0];
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        x = value.fields.x;
      }
      mapCamera = this->fields.mapCamera;
      position.fields.value.fields.y = 0.0;
      LODWORD(v206.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&v206.fields.hasValue = &position;
      v146 = v48;
      *(_QWORD *)&position.fields.hasValue = 0LL;
      System_Nullable_Vector2____ctor(v206, *(UnityEngine_Vector2_o *)&x, v141);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, 1.0, (const MethodInfo_37DB04C *)Method_System_Nullable_float___ctor__);
      v147 = (MapCameraPerformance_o *)sub_1BCB244(MapCameraPerformance_TypeInfo);
      v205 = size;
      v148 = (SchedulerTaskBase_o *)v147;
      MapCameraPerformance___ctor(v147, mapCamera, JumpDuration, position, v205, 0, 0LL);
      v149 = *(UnityEngine_GameObject_o **)v68;
      v150 = (SchedulerTaskMovePerformance_o *)sub_1BCB244(SchedulerTaskMovePerformance_TypeInfo);
      v210.fields.z = 0.0;
      v209.fields.y = v199;
      v209.fields.x = v200;
      v209.fields.z = v65;
      v210.fields.x = value.fields.x;
      v210.fields.y = v48;
      v151 = (SchedulerTaskBase_o *)v150;
      SchedulerTaskMovePerformance___ctor(
        v150,
        v149,
        v209,
        v210,
        sqrtf((float)((float)(0.0 - v65) * (float)(0.0 - v65)) + vaddv_f32(vmul_f32(v144, v144))) / JumpDuration,
        0,
        0LL);
      MoveCameraToPositionTask = sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 2LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v154 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v148 )
      {
        MoveCameraToPositionTask = sub_1BCB134(v148, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_133;
      }
      if ( !v154->max_length )
        goto LABEL_132;
      v154->m_Items[0] = v148;
      sub_1BCAF9C((CGThumbnailListItem_o *)v154->m_Items, (int32_t)v148, v152, v153);
      if ( v151 )
      {
        MoveCameraToPositionTask = sub_1BCB134(v151, v154->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_133;
      }
      if ( v154->max_length <= 1 )
        goto LABEL_132;
      v154->m_Items[1] = v151;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v154->m_Items[1], (int32_t)v151, v152, v155);
      this = (SubmarineMapManager_o *)sub_1BCB244(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v154, 0LL);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(Component_object, v156);
      if ( (byte_4B18ECD & 1) == 0 )
      {
        sub_1BCAFF8(&StringLiteral_1/*""*/, v157);
        byte_4B18ECD = 1;
      }
      state = Component_object->fields.state;
      if ( state )
        p_name = &state->fields.name;
      else
        p_name = (System_String_o **)&StringLiteral_1/*""*/;
      v161 = *p_name;
      v68 = sub_1BCB244(SchedulerTaskSimpleAnimation_TypeInfo);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v68, AnimationComponent, v161, 0LL);
      if ( !v68 )
        goto LABEL_131;
      v86 = (CGThumbnailListItem_o *)(v68 + 32);
      v162 = *(System_Delegate_o **)(v68 + 32);
      v163 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v163,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0LL);
      v164 = System_Delegate__Combine(v162, (System_Delegate_o *)v163, 0LL);
      v92 = v164;
      if ( !v164 )
        goto LABEL_104;
      v167 = SchedulerTaskBase_TaskCallback_TypeInfo;
      if ( (SchedulerTaskBase_TaskCallback_c *)v164->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v86->klass = (CGThumbnailListItem_c *)v164;
        if ( (SchedulerTaskBase_TaskCallback_c *)v164->klass == v167 )
        {
LABEL_105:
          sub_1BCAF9C(v86, (int32_t)v92, v165, v166);
          MoveCameraToPositionTask = sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_131;
          v168 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_1BCB134(v68, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v168 + 24) )
              goto LABEL_132;
            *(_QWORD *)(v168 + 32) = v68;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v168 + 32), v68, v152, v169);
            MoveCameraToPositionTask = sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_131;
            v170 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_1BCB134(v198, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v170 + 24) )
                goto LABEL_132;
              *(_QWORD *)(v170 + 32) = v198;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v170 + 32), (int32_t)v198, v152, v171);
              if ( !this || (MoveCameraToPositionTask = sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v170 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v170 + 24) <= 1u )
                  goto LABEL_132;
                *(_QWORD *)(v170 + 40) = this;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v170 + 40), (int32_t)this, v152, v172);
                v173 = (SchedulerTaskOrthostichy_o *)sub_1BCB244(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v173, (SchedulerTaskBase_array *)v170, 0LL);
                if ( !v173 || (MoveCameraToPositionTask = sub_1BCB134(v173, *(_QWORD *)(*(_QWORD *)v168 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v168 + 24) > 1u )
                  {
                    *(_QWORD *)(v168 + 40) = v173;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v168 + 40), (int32_t)v173, v152, v174);
                    v175 = (SchedulerTaskParallel_o *)sub_1BCB244(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v175, (SchedulerTaskBase_array *)v168, 0LL);
                    if ( v175 )
                    {
                      v175->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(Component_object, v35);
                      v177 = (SchedulerTaskWaitTime_o *)sub_1BCB244(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v177, TimeToStartOpenPanel, 0LL);
                      v180 = v44->fields._items;
                      v181 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v44->fields._version;
                      if ( v180 )
                      {
                        v182 = v44->fields._size;
                        if ( (unsigned int)v182 >= v180->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v44,
                            (Il2CppObject *)p_StartCallback,
                            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v183 = &v180->obj.klass + v182;
                          v44->fields._size = v182 + 1;
                          v183[4] = (Il2CppClass *)p_StartCallback;
                          sub_1BCAF9C((CGThumbnailListItem_o *)(v183 + 4), p_StartCallback, v178, v179);
                        }
                        v186 = v44->fields._items;
                        v187 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v44->fields._version;
                        if ( v186 )
                        {
                          v188 = v44->fields._size;
                          if ( (unsigned int)v188 >= v186->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v44,
                              (Il2CppObject *)v175,
                              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v189 = &v186->obj.klass + v188;
                            v44->fields._size = v188 + 1;
                            v189[4] = (Il2CppClass *)v175;
                            sub_1BCAF9C((CGThumbnailListItem_o *)(v189 + 4), (int32_t)v175, v184, v185);
                          }
                          v192 = v44->fields._items;
                          v193 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v44->fields._version;
                          if ( v192 )
                          {
                            v194 = v44->fields._size;
                            if ( (unsigned int)v194 >= v192->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v44,
                                (Il2CppObject *)v177,
                                *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v195 = &v192->obj.klass + v194;
                              v44->fields._size = v194 + 1;
                              v195[4] = (Il2CppClass *)v177;
                              sub_1BCAF9C((CGThumbnailListItem_o *)(v195 + 4), (int32_t)v177, v190, v191);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v44;
                          }
                        }
                      }
                    }
                    goto LABEL_131;
                  }
LABEL_132:
                  sub_1BCB25C(MoveCameraToPositionTask, v35, v152);
                }
              }
            }
          }
LABEL_133:
          v197 = sub_1BCB278();
          sub_1BCB120(v197, 0LL);
        }
      }
LABEL_103:
      sub_1BCB514(v92);
LABEL_104:
      v86->klass = (CGThumbnailListItem_c *)v92;
      goto LABEL_105;
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
  const MethodInfo *v25; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct SubmarineMapDataManager_o *v31; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Object_array *v37; // x0
  const MethodInfo *v38; // x2
  int32x2_t v39; // d1
  struct SubmarineMapDataManager_o *v40; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *v42; // x22
  unsigned __int64 v43; // d0 OVERLAPPED
  float v44; // s2
  int v45; // s1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  SchedulerTaskBase_o *v51; // x1
  Il2CppClass **v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4B18F93 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v13);
    byte_4B18F93 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4B16191 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v17.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v23 )
      break;
    current = v61.fields._current;
    if ( !v61.fields._current )
      sub_1BCB254(v23, v24);
    if ( !LOBYTE(v61.fields._current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v61.fields._current,
                                          -1,
                                          v25);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v31 = this->fields.submarineData;
        if ( !v31 )
          sub_1BCB254(IsPanelSatisfyCommonReleaseCond, v28);
        PositionCalculator_k__BackingField = (float32x2_t *)v31->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_1BCB254(IsPanelSatisfyCommonReleaseCond, v28);
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
          sub_1BCB254(IsPanelSatisfyCommonReleaseCond, v28);
        items = v19->fields._items;
        v34 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v19->fields._version;
        if ( !items )
          sub_1BCB254(IsPanelSatisfyCommonReleaseCond, v28);
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            current,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v36[4] = (Il2CppClass *)current;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)current, v29, v30);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v19 )
    goto LABEL_34;
  if ( v19->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v14;
  v37 = System_Collections_Generic_List_object___ToArray(
          v19,
          (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                    this,
                                    (SubmarineMapPanelData_array *)v37,
                                    v38);
  v40 = this->fields.submarineData;
  if ( !v40 )
    goto LABEL_34;
  Settings_k__BackingField = v40->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_34;
  v42 = (Il2CppObject *)PanelDataList_k__BackingField;
  v39.n64_f32[0] = (float)v19->fields._size;
  v43 = vdiv_f32(v17, vdup_lane_s32(v39, 0)).n64_u64[0];
  v44 = z / v39.n64_f32[0];
  v45 = HIDWORD(v43);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                    this,
                                    *(UnityEngine_Vector3_o *)&v43,
                                    1.0,
                                    Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                    v21);
  if ( !v14 )
    goto LABEL_34;
  v48 = v14->fields._items;
  v49 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v14->fields._version;
  if ( !v48 )
    goto LABEL_34;
  v50 = v14->fields._size;
  v51 = PanelDataList_k__BackingField;
  if ( (unsigned int)v50 >= v48->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)PanelDataList_k__BackingField,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &v48->obj.klass + v50;
    v14->fields._size = v50 + 1;
    v52[4] = (Il2CppClass *)v51;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v51, v46, v47);
  }
  v55 = v14->fields._items;
  v56 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v14->fields._version;
  if ( !v55 )
LABEL_34:
    sub_1BCB254(PanelDataList_k__BackingField, v21);
  v57 = v14->fields._size;
  if ( (unsigned int)v57 >= v55->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      v42,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v55->obj.klass + v57;
    v14->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v42;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v42, v53, v54);
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

  if ( (byte_4B18F7D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18F7D = 1;
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
    UnityEngine_Object__Destroy_70136076(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.scanConfirmDialog, 0, v8, v9);
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
    UnityEngine_Object__Destroy_70136076(v12, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.selectScannerDialog, 0, v13, v14);
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
      UnityEngine_Object__Destroy_70136076(v18, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_1BCAF9C(p_newScannerDialog, 0, v19, v20);
      return;
    }
LABEL_25:
    sub_1BCB254(klass, v5);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4B18F60 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18F60 = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(panelContainer, 0LL);
  UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
  SubmarineMapManager__DestroyDialog(this, v4);
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

  if ( (byte_4B18F64 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, finishCallback);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6);
    sub_1BCAFF8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v7);
    sub_1BCAFF8(&SchedulerTaskNone_TypeInfo, v8);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__, v10);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo, v11);
    byte_4B18F64 = 1;
  }
  v12 = sub_1BCB244(SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass34_0___ctor((SubmarineMapManager___c__DisplayClass34_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)finishCallback, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v24 = sub_1BCB244(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v24, 0LL);
  v25 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v24 )
    goto LABEL_18;
  *(_QWORD *)(v24 + 32) = v25;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v25, v26, v27);
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
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &items->obj.klass + size;
    v19->fields._size = size + 1;
    v33[4] = (Il2CppClass *)v24;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 4), v24, v28, v29);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_1BCB254(HideEnemyOccupiedPanelTasks, v14);
  TaskScheduler__AddTask_43438820(
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
    sub_1BCB254(assetManager, v6);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v7);
}


void __fastcall SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1

  this->fields.submarineData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.submarineData, 0, v2, v3);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, v5);
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
  __int64 v10; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v12; // x19
  unsigned int v13; // w23
  Il2CppObject *Component_object; // x21

  if ( (byte_4B18F76 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B18F76 = 1;
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
      sub_1BCB254(HasChild, v5);
    }
    max_length = HasChild->max_length;
    v12 = HasChild;
    if ( max_length >= 1 )
    {
      v13 = 0;
      v6 = 0LL;
      while ( 1 )
      {
        if ( v13 >= max_length )
          sub_1BCB25C(HasChild, v5, v10);
        HasChild = (UnityEngine_GameObject_array *)v12->m_Items[v13];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
        max_length = v12->max_length;
        if ( (int)++v13 >= max_length )
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
  if ( (byte_4B18F63 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, method);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(
                                      &Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__,
                                      v4);
    byte_4B18F63 = 1;
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
    sub_1BCB254(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B18F83 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___, method);
    byte_4B18F83 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_30C9AA8 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
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

  if ( (byte_4B18F87 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18F87 = 1;
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
    UnityEngine_Object__Destroy_70136076(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_1BCAF9C(p_scanRangeNotificator, 0, v7, v8);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B18F81 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___, method);
    byte_4B18F81 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_30C9AA8 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4B18F85 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___, method);
    byte_4B18F85 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_30C9AA8 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v8; // x22
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  TaskScheduler_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  SubmarineMapManager_PlayingScanVoiceData_o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4B18F5A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, method);
    sub_1BCAFF8(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v3);
    sub_1BCAFF8(&SubmarineMapDataManager_TypeInfo, v4);
    sub_1BCAFF8(&TaskScheduler_TypeInfo, v5);
    byte_4B18F5A = 1;
  }
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v8 = (SubmarineMapDataManager_o *)sub_1BCB244(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v8, mapInfo, warInfo, v9);
  this->fields.submarineData = v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.submarineData, (int32_t)v8, v10, v11);
  v12 = (TaskScheduler_o *)sub_1BCB244(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v12, 0LL);
  this->fields.taskScheduler = v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.taskScheduler, (int32_t)v12, v13, v14);
  taskScheduler = this->fields.taskScheduler;
  v16 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v16,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
    0LL);
  if ( !taskScheduler )
    sub_1BCB254(v17, v18);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v16;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v16,
    v19,
    v20);
  v21 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_1BCB244(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v21, 0LL);
  this->fields.playingScanVoiceData = v21;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.playingScanVoiceData, (int32_t)v21, v22, v23);
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

  if ( (byte_4B18F5B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, finishCallback);
    sub_1BCAFF8(&AtlasManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__, v6);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo, v7);
    byte_4B18F5B = 1;
  }
  v8 = sub_1BCB244(SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass19_0___ctor((SubmarineMapManager___c__DisplayClass19_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 24), (int32_t)finishCallback, v13, v14);
  v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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
  if ( (byte_4B18F7E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ComponentPool_CommonEffectComponent__Preload__, method);
    sub_1BCAFF8(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__, v3);
    sub_1BCAFF8(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__, v4);
    sub_1BCAFF8(&Method_ComponentPool_CommonEffectComponent___ctor__, v5);
    sub_1BCAFF8(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__, v6);
    sub_1BCAFF8(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__, v7);
    sub_1BCAFF8(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v8);
    sub_1BCAFF8(&ComponentPool_CommonEffectComponent__TypeInfo, v9);
    sub_1BCAFF8(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo, v10);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo, v11);
    byte_4B18F7E = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v14 = (ComponentPool_T__o *)sub_1BCB244(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_object____ctor(
    v14,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_32A2FA0 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.effectScanedPanelObjPool, (int32_t)v14, v15, v16);
  this = (SubmarineMapManager_o *)v2->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_object___Preload(
    (ComponentPool_T__o *)this,
    9,
    (const MethodInfo_32A3064 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v17 = v2->fields.assetManager;
  if ( !v17 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v17->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v19 = (ComponentPool_T__o *)sub_1BCB244(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v19,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_32A2FA0 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v19;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.effectScanObstaclePanelObjPool, (int32_t)v19, v20, v21);
  v22 = v2->fields.assetManager;
  if ( !v22 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v22->fields._EffectScannablePanelPrafab_k__BackingField;
  v24 = (ComponentPool_T__o *)sub_1BCB244(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v24,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_32A2FA0 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.effectScannablePanelObjPool, (int32_t)v24, v25, v26);
  this = (SubmarineMapManager_o *)v2->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_object___Preload(
          (ComponentPool_T__o *)this,
          50,
          (const MethodInfo_32A3064 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v27 = v2->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_1BCB254(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v27->fields._EffectSelectedPanelPrefab_k__BackingField;
  v29 = (ComponentPool_T__o *)sub_1BCB244(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v29,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_32A2FA0 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v29;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.effectSelectedPanelObjPool, (int32_t)v29, v30, v31);
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
    || (SubmarineMapDataManager__UpdateParams(submarineData, -1, method),
        SubmarineMapManager__UpdateClosedPanelDisplay(this, v6),
        SubmarineMapManager__HideScanObstacleEffect(this, v7),
        SubmarineMapManager__ShowScanObstacleEffect(this, v8),
        (submarineData = this->fields.submarineData) == 0LL) )
  {
    sub_1BCB254(submarineData, finishCallback);
  }
  SubmarineMapDataManager__DeleteBeforeQuestInfo(submarineData, (const MethodInfo *)finishCallback);
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall SubmarineMapManager__OnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = SubmarineMapManager__CoOnAfterSpotCreated(this, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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

  if ( (byte_4B18F5E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, finishCallback);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__, v5);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo, v6);
    byte_4B18F5E = 1;
  }
  v7 = sub_1BCB244(SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass25_0___ctor((SubmarineMapManager___c__DisplayClass25_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)finishCallback, v12, v13);
  v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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

  if ( (byte_4B18F6C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1BCAFF8(&Method_SubmarineMapManager__OnEndScan_b__42_0__, v4);
    byte_4B18F6C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v8 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v10 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0LL),
        !v8) )
  {
    sub_1BCB254(Instance, v6);
  }
  v11 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v8, warId, v10, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4B18F5F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, v3);
    byte_4B18F5F = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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
  __int64 eventId; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  Il2CppObject *Instance; // x22
  const MethodInfo *v22; // x1
  NetworkManager_ResultCallbackFunc_o *v23; // x22
  Il2CppObject *Request_object; // x22
  const MethodInfo *v25; // x1
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_4B18F67 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, *(_QWORD *)&scanId);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v7);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__, v10);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo, v11);
    byte_4B18F67 = 1;
  }
  v12 = sub_1BCB244(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass37_0___ctor((SubmarineMapManager___c__DisplayClass37_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_QWORD *)(v12 + 32) = panelData;
  v17 = v12 + 32;
  *(_DWORD *)(v12 + 24) = scanId;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v12 + 32), (int32_t)panelData, v18, v19);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v20);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v22);
  if ( !Instance )
    goto LABEL_11;
  clsQuestCheck__SaveEventQuestIdListPlayable((clsQuestCheck_o *)Instance, eventId, 0LL);
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v23,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v25);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*(_QWORD *)v17 || !Request_object )
LABEL_11:
    sub_1BCB254(eventId, v14);
  EventScanPanelMapRequest__beginRequest(
    (EventScanPanelMapRequest_o *)Request_object,
    eventId,
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
  __int64 v24; // x2
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

  if ( (byte_4B18F68 & 1) == 0 )
  {
    sub_1BCAFF8(&EventSaveData_TypeInfo, result);
    sub_1BCAFF8(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___, v9);
    sub_1BCAFF8(&JsonManager_TypeInfo, v10);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v11);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v12);
    sub_1BCAFF8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v14);
    sub_1BCAFF8(&StringLiteral_15670/*"["*/, v15);
    sub_1BCAFF8(&StringLiteral_6589/*"False"*/, v16);
    sub_1BCAFF8(&StringLiteral_15923/*"]"*/, v17);
    sub_1BCAFF8(&StringLiteral_1113/*"0"*/, v18);
    byte_4B18F68 = 1;
  }
  v59 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22015/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v19);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v20);
  v21 = (Il2CppObject *)System_String__Concat_62488672(
                          (System_String_o *)StringLiteral_15670/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15923/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v21,
                                                                      (const MethodInfo_3086694 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v27 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_71:
    sub_1BCB25C(BeforeEventSubmarineSaveData_k__BackingField, v23, v24);
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
        if ( !byte_4B18F9A )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v23);
          byte_4B18F9A = 1;
        }
        v32 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v32 = TerminalPramsManager_TypeInfo;
        }
        if ( !v32->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v33 = (EventSaveData_o *)sub_1BCB244(EventSaveData_TypeInfo);
          EventSaveData___ctor(v33, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B18F9B )
          {
            sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v34);
            byte_4B18F9B = 1;
          }
          v37 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v37 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (CGThumbnailListItem_o *)&v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (CGThumbnailListItem_c *)v33;
          sub_1BCAF9C(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v33, v35, v36);
          v32 = TerminalPramsManager_TypeInfo;
        }
        if ( !v32->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v32);
        if ( !byte_4B18F9A )
        {
          sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v23);
          byte_4B18F9A = 1;
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
              v43 = (System_String_o **)&StringLiteral_1113/*"0"*/;
            v44 = *v43;
            v45 = max_length <= 2 ? (System_String_o **)&StringLiteral_1113/*"0"*/ : &ValueByArray->m_Items[2];
            v46 = *v45;
            v47 = max_length <= 3 ? &StringLiteral_6589/*"False"*/ : (void **)&ValueByArray->m_Items[3];
          }
          else
          {
            v46 = (System_String_o *)StringLiteral_1113/*"0"*/;
            v47 = &StringLiteral_6589/*"False"*/;
            v44 = (System_String_o *)StringLiteral_1113/*"0"*/;
          }
          v48 = (System_String_o *)*v47;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4B18F9A )
          {
            sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v41);
            byte_4B18F9A = 1;
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
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_38994004(
                                                                              v51,
                                                                              v44,
                                                                              v46,
                                                                              v48,
                                                                              0LL);
          if ( v50 )
          {
            v50->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_1BCAF9C(
              (CGThumbnailListItem_o *)&v50->fields.value,
              (int32_t)BeforeEventSubmarineSaveData_k__BackingField,
              v52,
              v53);
            value = v27->fields.value;
            goto LABEL_56;
          }
        }
LABEL_70:
        sub_1BCB254(BeforeEventSubmarineSaveData_k__BackingField, v23);
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
  sub_1BCAF9C(p_mResultEventPanelRewardInfos, (int32_t)namespaze, v24, v25);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v23);
    byte_4B1676D = 1;
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
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  __int64 v32; // x0

  if ( (byte_4B18F66 & 1) == 0 )
  {
    sub_1BCAFF8(&SchedulerTaskBase___TypeInfo, *(_QWORD *)&scanId);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__, v8);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo, v9);
    byte_4B18F66 = 1;
  }
  v10 = sub_1BCB244(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass36_0___ctor((SubmarineMapManager___c__DisplayClass36_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 32) = panelData;
  *(_DWORD *)(v10 + 24) = scanId;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)panelData, v15, v16);
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
    v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v20,
      (Il2CppObject *)v10,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0LL);
    if ( v19 )
    {
      v19->fields.EndCallback = v20;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v19->fields.EndCallback, (int32_t)v20, v21, v22);
      taskScheduler = this->fields.taskScheduler;
      v11 = sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v11 )
      {
        v24 = v11;
        v25 = sub_1BCB134(v19, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !v25 )
        {
          v32 = sub_1BCB278();
          sub_1BCB120(v32, 0LL);
        }
        if ( !*(_DWORD *)(v24 + 24) )
          sub_1BCB25C(v25, v26, v27);
        *(_QWORD *)(v24 + 32) = v19;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v19, v27, v28);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v24, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1BCB254(v11, v12);
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

  if ( (byte_4B18F7C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, *(_QWORD *)&scanId);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__, v9);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo, v10);
    byte_4B18F7C = 1;
  }
  v11 = sub_1BCB244(SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass68_0___ctor((SubmarineMapManager___c__DisplayClass68_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)callback, v16, v17);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v19 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v19,
    (Il2CppObject *)v11,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0LL);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_1BCB254(v12, v13);
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
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v17; // x1
  int32_t eventId; // w22
  System_Action_int__o *v19; // x23
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x4

  if ( (byte_4B18F7A & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, callback);
    sub_1BCAFF8(&System_Action_TypeInfo, v5);
    sub_1BCAFF8(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v6);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__, v7);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo, v8);
    byte_4B18F7A = 1;
  }
  v9 = sub_1BCB244(SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass66_0___ctor((SubmarineMapManager___c__DisplayClass66_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v17);
  v19 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v19,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
    0LL);
  v20 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
  if ( !selectScannerDialog )
LABEL_6:
    sub_1BCB254(v10, v11);
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v19, v20, v21);
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
    sub_1BCAF9C(p_assetManager, 0, v5, v6);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
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

  if ( (byte_4B18F7F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__, method);
    sub_1BCAFF8(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__, v3);
    sub_1BCAFF8(&Method_ComponentPool_CommonEffectComponent__Finish__, v4);
    byte_4B18F7F = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_32A3840 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectScanedPanelObjPool, 0, v6, v7);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_32A3840 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.effectScannablePanelObjPool, 0, v9, v10);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (CGThumbnailListItem_o *)&this->fields.effectScanObstaclePanelObjPool;
  v11 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v11,
      (const MethodInfo_32A3840 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_1BCAF9C(p_effectScanObstaclePanelObjPool, 0, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_30C98BC *method)
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
  const MethodInfo_37DD52C *v21; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v25; // s0
  float v26; // s1
  float v27; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo_37DD52C *v29; // x2
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
    sub_1BCAFF8(&Method_System_Nullable_Vector3__get_HasValue__, pool);
    sub_1BCAFF8(&Method_System_Nullable_Vector3__get_Value__, v12);
    if ( !method->rgctx_data )
      sub_1C1B4B8();
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
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_53097328(
                                                  pool,
                                                  transform,
                                                  *(UnityEngine_Vector3_o *)&v15,
                                                  (const MethodInfo_32A3370 *)method->rgctx_data->_1_ComponentPool_T__Rent);
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
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v20);
      byte_4B16191 = 1;
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
    sub_1BCB254(effectContainer, pool);
  }
  if ( !byte_4B16196 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, pool);
    byte_4B16196 = 1;
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
        const MethodInfo_30C9AA8 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v10; // x21
  unsigned int v11; // w22

  if ( !method->rgctx_data )
    sub_1C1B4B8();
  Children = GameObjectExtensions__GetChildren(this->fields.effectContainer, 0, 0LL);
  if ( !Children )
    goto LABEL_11;
  max_length = Children->max_length;
  v10 = Children;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1BCB25C(Children, v7, v8);
      Children = (UnityEngine_GameObject_array *)v10->m_Items[v11];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_306E710 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_32A3448 *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return;
    }
LABEL_11:
    sub_1BCB254(Children, v7);
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
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  __int64 v31; // x0

  if ( (byte_4B18F6B & 1) == 0 )
  {
    sub_1BCAFF8(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_1BCAFF8(&SchedulerTaskNone_TypeInfo, v5);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__, v7);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo, v8);
    byte_4B18F6B = 1;
  }
  v9 = sub_1BCB244(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass41_0___ctor((SubmarineMapManager___c__DisplayClass41_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = finishCallback,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)finishCallback, v12, v13),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v15),
        !taskScheduler)
    || (TaskScheduler__AddTask_43438820(taskScheduler, 0, RevealEachSpotsTasks, 0LL),
        v16 = sub_1BCB244(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v16, 0LL),
        !v16) )
  {
LABEL_16:
    sub_1BCB254(RevealEachSpotsTasks, v11);
  }
  v17 = (System_Delegate_o **)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
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
    sub_1BCB514(v20);
  }
  *v17 = v23;
LABEL_11:
  sub_1BCAF9C((CGThumbnailListItem_o *)(v16 + 32), (int32_t)v23, v21, v22);
  v25 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_1BCB0A0(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1LL);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v26 = RevealEachSpotsTasks;
  v27 = sub_1BCB134(v16, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v27 )
  {
    v31 = sub_1BCB278();
    sub_1BCB120(v31, 0LL);
  }
  if ( !v26->fields._size )
    sub_1BCB25C(v27, v28, v29);
  v26->fields._syncRoot = (Il2CppObject *)v16;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v26->fields._syncRoot, v16, v29, v30);
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
  const MethodInfo *v6; // x1
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

  if ( (byte_4B18F73 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_UITexture___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B18F73 = 1;
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
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, v6);
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
                                                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
    sub_1BCB254(submarineData, v6);
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
  if ( (byte_4B18F82 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___,
                                      v6);
    byte_4B18F82 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1BCB254(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields._current )
        sub_1BCB254(v8, v9);
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
          (const MethodInfo_30C98BC *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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

  if ( (byte_4B18F86 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventPanelScanMaster___, *(_QWORD *)&scanId);
    sub_1BCAFF8(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&Method_UnityEngine_Object_Instantiate_GameObject____77001424, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4B18F86 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_1BCB254(Instance, v12);
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
      v17 = UnityEngine_Object__Instantiate_object__51002592(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_30A3CE0 *)Method_UnityEngine_Object_Instantiate_GameObject____77001424);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v17;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_1BCAF9C((CGThumbnailListItem_o *)p_scanRangeNotificator, (int32_t)v17, v19, v20);
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
  __int64 v36; // x2
  UnityEngine_Rect_array *v37; // x21
  System_Collections_Generic_List_Rect__o *v38; // x22
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  int m_CancellationTokenSource; // w8
  SubmarineMapManager_o *v42; // x21
  unsigned int v43; // w24
  __int64 v44; // x28
  struct SubmarineMapDataManager_o *v45; // x8
  struct SubmarineSettingsManager_o *v46; // x8
  float32x2_t v47; // d2
  float32x2_t v48; // d0
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v50; // x8
  __int64 size; // x10
  unsigned __int64 v52; // d0
  float32x2_t *v53; // x9
  int v54; // s1
  unsigned __int32 v55; // s3
  Submarine2DUILocationInfo_o *v56; // x22
  const MethodInfo *v57; // x1
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v60; // x22
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  Submarine2DUILocationInfo_o *v65; // x22
  const MethodInfo *v66; // x1
  UnityEngine_Rect_array *v67; // x0
  MapCamera_o *v68; // x23
  UnityEngine_Rect_array *v69; // x22
  float v70; // s0
  float v71; // s1
  float v72; // s2
  float v73; // s3
  UnityEngine_Vector2_o v74; // kr00_8
  struct System_Threading_CancellationTokenSource_o *v75; // x8
  float v76; // s3
  __int64 v77; // x8
  struct MapControl_WarInfo_o **p_warInfo; // x9
  float v79; // t1
  float v80; // s0
  struct SubmarineMapDataManager_o *v81; // x8
  struct SubmarineSettingsManager_o *v82; // x8
  Submarine2DUILocationInfo_o *v84; // x22
  const MethodInfo *v85; // x1
  UnityEngine_Rect_array *v86; // x0
  MapCamera_o *v87; // x23
  UnityEngine_Rect_array *v88; // x22
  int32_t failedReason; // [xsp+3Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v91; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4B18F89 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Rect__Add__, *(_QWORD *)&scanId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Rect__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Rect___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_Rect__TypeInfo, v11);
    sub_1BCAFF8(&MapCameraViewAdjusterUtil_TypeInfo, v12);
    sub_1BCAFF8(&UnityEngine_Rect___TypeInfo, v13);
    sub_1BCAFF8(&float___TypeInfo, v14);
    sub_1BCAFF8(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v15);
    sub_1BCAFF8(&Submarine2DUILocationInfo_TypeInfo, v16);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(&SubmarineScanDialogUpsideLocationInfo_TypeInfo, v17);
    byte_4B18F89 = 1;
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
                                            (const MethodInfo *)isShowDialogUpper);
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
          this = (SubmarineMapManager_o *)sub_1BCB0A0(UnityEngine_Rect___TypeInfo, 1LL);
          if ( this )
          {
            v37 = (UnityEngine_Rect_array *)this;
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
    sub_1BCB254(this, *(_QWORD *)&scanId);
  }
  v38 = (System_Collections_Generic_List_Rect__o *)sub_1BCB244(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v38,
    (const MethodInfo_36CA0E4 *)Method_System_Collections_Generic_List_Rect___ctor__);
  this = (SubmarineMapManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                    scanId,
                                    panelData,
                                    v8->fields.submarineData,
                                    v39);
  if ( !v8->fields.submarineData )
    goto LABEL_73;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelsByScanEvents(
                                    v8->fields.submarineData,
                                    (System_Collections_Generic_List_SubmarineScanEvent__o *)this,
                                    v40);
  if ( !this )
    goto LABEL_73;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v42 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v43 = 0;
    while ( v43 < m_CancellationTokenSource )
    {
      v44 = *((_QWORD *)&v42->fields.mapInfo + (int)v43);
      if ( !byte_4B16191 )
      {
        this = (SubmarineMapManager_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&scanId);
        byte_4B16191 = 1;
      }
      v45 = v8->fields.submarineData;
      if ( !v45 )
        goto LABEL_73;
      v46 = v45->fields._Settings_k__BackingField;
      if ( !v46 )
        goto LABEL_73;
      if ( !v44 )
        goto LABEL_73;
      if ( !v38 )
        goto LABEL_73;
      v47.n64_u64[0] = (unsigned __int64)v46->fields._PanelUnitSize_k__BackingField;
      v48.n64_u64[0] = *(unsigned __int64 *)(v44 + 28);
      items = v38->fields._items;
      v50 = Method_System_Collections_Generic_List_Rect__Add__;
      ++v38->fields._version;
      if ( !items )
        goto LABEL_73;
      size = v38->fields._size;
      v52 = vadd_f32(v48, vmul_f32(v47, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
      if ( (unsigned int)size >= items->max_length )
      {
        v54 = HIDWORD(v52);
        v55 = v47.n64_u32[1];
        System_Collections_Generic_List_Rect___AddWithResize(
          v38,
          *(UnityEngine_Rect_o *)(&v47 - 1),
          *(const MethodInfo_36CA970 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = (float32x2_t *)(&items->obj + size);
        v38->fields._size = size + 1;
        v53[4].n64_u64[0] = v52;
        v53[5].n64_u64[0] = v47.n64_u64[0];
      }
      m_CancellationTokenSource = (int)v42->fields.m_CancellationTokenSource;
      if ( (int)++v43 >= m_CancellationTokenSource )
        goto LABEL_43;
    }
    goto LABEL_74;
  }
LABEL_43:
  if ( !v38 )
    goto LABEL_73;
  v37 = System_Collections_Generic_List_Rect___ToArray(
          v38,
          (const MethodInfo_36CC504 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_45:
  v56 = (Submarine2DUILocationInfo_o *)sub_1BCB244(Submarine2DUILocationInfo_TypeInfo);
  Submarine2DUILocationInfo___ctor(v56, v57);
  if ( !v56 )
    goto LABEL_73;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v56, 0LL);
  mapCamera = v8->fields.mapCamera;
  v60 = Rects;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v91 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(mapCamera, v37, v60, &failedReason, 0LL);
  *isShowDialogUpper = 0;
  m_XMin = v91.fields.m_XMin;
  m_YMin = v91.fields.m_YMin;
  m_Width = v91.fields.m_Width;
  m_Height = v91.fields.m_Height;
  if ( failedReason == 1 )
  {
    v65 = (Submarine2DUILocationInfo_o *)sub_1BCB244(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v65, v66);
    if ( !v65 )
      goto LABEL_73;
    v67 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v65, 0LL);
    v68 = v8->fields.mapCamera;
    v69 = v67;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(UnityEngine_Rect_o *)&v70 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v68,
                                    v37,
                                    v69,
                                    &failedReason,
                                    0LL);
    if ( failedReason != 1 )
    {
      if ( failedReason )
        goto LABEL_55;
      goto LABEL_54;
    }
    v84 = (Submarine2DUILocationInfo_o *)sub_1BCB244(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v84, v85);
    if ( !v84 )
      goto LABEL_73;
    v86 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v84, 0LL);
    v87 = v8->fields.mapCamera;
    v88 = v86;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(UnityEngine_Rect_o *)&v70 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v87,
                                    v37,
                                    v88,
                                    &failedReason,
                                    0LL);
    if ( !failedReason )
    {
LABEL_54:
      m_XMin = v70;
      m_YMin = v71;
      m_Width = v72;
      m_Height = v73;
      *isShowDialogUpper = 1;
    }
  }
LABEL_55:
  v74 = FSWindowUtil__GetSize(0LL);
  this = (SubmarineMapManager_o *)sub_1BCB0A0(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_73;
  v75 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v75
    || (LODWORD(this->fields.mapInfo) = 1065353216, (_DWORD)v75 == 1)
    || (*((float *)&this->fields.mapInfo + 1) = m_Width / v74.fields.x, (unsigned int)v75 <= 2) )
  {
LABEL_74:
    sub_1BCB25C(this, *(_QWORD *)&scanId, v36);
  }
  v76 = 1.0;
  *(float *)&this->fields.warInfo = m_Height / v74.fields.y;
  if ( (int)v75 >= 2 )
  {
    v77 = (unsigned int)v75 - 2LL;
    v76 = fmaxf(m_Width / v74.fields.x, 1.0);
    if ( v77 )
    {
      p_warInfo = &this->fields.warInfo;
      do
      {
        v79 = *(float *)p_warInfo;
        p_warInfo = (struct MapControl_WarInfo_o **)((char *)p_warInfo + 4);
        v80 = v79;
        if ( v79 > v76 )
          v76 = v80;
        --v77;
      }
      while ( v77 );
    }
  }
  v81 = v8->fields.submarineData;
  if ( !v81 )
    goto LABEL_73;
  v82 = v81->fields._Settings_k__BackingField;
  if ( !v82 )
    goto LABEL_73;
  v90.fields.y = m_YMin + (float)(m_Height * 0.5);
  v90.fields.x = m_XMin + (float)(m_Width * 0.5);
  v90.fields.z = 0.0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v8,
           v90,
           v76,
           v82->fields._ViewScanRangeCameraDuration_k__BackingField,
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
  if ( (byte_4B18F80 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___,
                                      v6);
    byte_4B18F80 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1BCB254(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields._current )
        sub_1BCB254(v8, v9);
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
          (const MethodInfo_30C98BC *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_4B18F84 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___,
      panelData);
    byte_4B18F84 = 1;
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
    (const MethodInfo_30C98BC *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
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
  __int64 v23; // x2
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
  const MethodInfo *v37; // x3
  __int64 v38; // x0

  if ( (byte_4B18F69 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_1BCAFF8(&SchedulerTaskBase___TypeInfo, v7);
    sub_1BCAFF8(&SchedulerTaskNone_TypeInfo, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_1BCAFF8(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__, v11);
    sub_1BCAFF8(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__, v12);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v13);
    byte_4B18F69 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0LL);
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0LL);
  if ( !v16 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v16, v17, 0LL);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v19);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_43438820(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance,
    0LL);
  v20 = this->fields.taskScheduler;
  v21 = (SchedulerTaskBase_array *)sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 1LL);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v22);
  if ( !v21 )
    goto LABEL_22;
  v25 = Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_1BCB134(Instance, v21->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !v21->max_length )
    goto LABEL_23;
  v21->m_Items[0] = (SchedulerTaskBase_o *)v25;
  sub_1BCAF9C((CGThumbnailListItem_o *)v21->m_Items, (int32_t)v25, v23, v24);
  if ( !v20
    || (TaskScheduler__AddTask(v20, 0, v21, 0LL),
        v26 = sub_1BCB244(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v26, 0LL),
        !v26) )
  {
LABEL_22:
    sub_1BCB254(Instance, v15);
  }
  v27 = (System_Delegate_o **)(v26 + 32);
  v28 = *(System_Delegate_o **)(v26 + 32);
  v29 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
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
    sub_1BCB514(v30);
LABEL_16:
    *v27 = v33;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)(v26 + 32), (int32_t)v33, v31, v32);
  v35 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_1BCB0A0(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_22;
  v36 = Instance;
  Instance = (MissionNotifyManager_o *)sub_1BCB134(v26, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v38 = sub_1BCB278();
    sub_1BCB120(v38, 0LL);
  }
  if ( !LODWORD(v36->fields.mNoDispInfos) )
LABEL_23:
    sub_1BCB25C(Instance, v15, v23);
  v36->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v26;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v36->fields.mMissionNotifyComps, v26, v23, v37);
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

  if ( (byte_4B18F6A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__, finishCallback);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__, v5);
    sub_1BCAFF8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__, v7);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo, v8);
    byte_4B18F6A = 1;
  }
  v9 = sub_1BCB244(SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass40_0___ctor((SubmarineMapManager___c__DisplayClass40_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v9 + 16);
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)finishCallback, v12, v13);
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
                                                                               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCB244(SchedulerTaskBase_TaskCallback_TypeInfo);
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
      sub_1BCB514(v20);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0LL;
  }
  sub_1BCAF9C((CGThumbnailListItem_o *)p_syncRoot, (int32_t)v20, v21, v22);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_1BCB254(SubsequentialOpenPanelTasks, v11);
  TaskScheduler__AddTask_43438820((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v17, 0LL);
}


void __fastcall SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 eventId; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct MapControl_MapInfo_o *mapInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  Il2CppObject *Request_object; // x20
  const MethodInfo *v12; // x1
  struct MapControl_MapInfo_o *v13; // x8

  if ( (byte_4B18F61 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, method);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v3);
    sub_1BCAFF8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1BCAFF8(&Method_SubmarineMapManager__TryInitRequest_b__31_0__, v5);
    byte_4B18F61 = 1;
  }
  this->fields.initRequestFinished = 0;
  eventId = SubmarineMapManager__get_eventId(this, method);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_11;
  if ( SubmarineMapDataManager__HasUserMapData(eventId, mapInfo->fields.mapId, v8) )
  {
    this->fields.initRequestFinished = 1;
    return;
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCB244(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v10,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v10,
                     (const MethodInfo_30A28E4 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v12);
  v13 = this->fields.mapInfo;
  if ( !v13 || !Request_object )
LABEL_11:
    sub_1BCB254(eventId, v7);
  EventScanPanelMapRequest__beginRequest(
    (EventScanPanelMapRequest_o *)Request_object,
    eventId,
    v13->fields.mapId,
    0,
    0,
    0LL);
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

  if ( (byte_4B18F7B & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v3);
    byte_4B18F7B = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    v6 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v8 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v6, v8, v9);
      return;
    }
LABEL_8:
    sub_1BCB254(submarineData, method);
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
  if ( (byte_4B18F6D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    this = (SubmarineMapManager_o *)sub_1BCAFF8(
                                      &Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__,
                                      v5);
    byte_4B18F6D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_1BCB254(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BCB254(0LL, v7);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1BCB254(0LL, beforeClearQuestId);
  SubmarineMapDataManager__UpdateParams(submarineData, beforeClearQuestId, method);
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
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v17; // x1
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0
  System_String_array *ValueByArray; // x0
  __int64 v21; // x2
  __int64 v22; // x8
  UnityEngine_GameObject_c *v23; // x8
  TitleInfoControl_o *v24; // x20
  EventDetailEntity_o *v25; // x21
  System_Action_o *v26; // x22
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1

  if ( (byte_4B18F6E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v6);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v7);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__, v8);
    sub_1BCAFF8(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo, v9);
    byte_4B18F6E = 1;
  }
  v10 = sub_1BCB244(SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass48_0___ctor((SubmarineMapManager___c__DisplayClass48_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_46;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_46;
  ScrTerminalMap__UpdateMapButtonBadge(terminalMap, 0LL);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_46;
  ScrTerminalMap__UpdateCaldeaFolderBoardList(terminalMap, 0LL);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_46;
  ScrTerminalMap__UpdateAreaBoardList(terminalMap, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v12);
    byte_4B1676D = 1;
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
  terminalMap = *(ScrTerminalMap_o **)&klass->_2.instance_size;
  if ( !terminalMap )
    goto LABEL_46;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)terminalMap, 0LL);
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)terminalMap,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  terminalMap = (ScrTerminalMap_o *)SubmarineMapManager__get_eventId(this, v17);
  if ( !MasterData_object )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         (Il2CppObject **)(v10 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v10 + 32) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4B18F9A )
    {
      sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v12);
      byte_4B18F9A = 1;
    }
    v18 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v18 = TerminalPramsManager_TypeInfo;
    }
    if ( v18->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v18->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v18);
      if ( !byte_4B18F9A )
      {
        sub_1BCAFF8(&TerminalPramsManager_TypeInfo, v12);
        byte_4B18F9A = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v19->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_46;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v22 = *(_QWORD *)&ValueByArray->max_length;
        if ( v22 )
        {
          if ( !(_DWORD)v22 )
            sub_1BCB25C(ValueByArray, v12, v21);
          *(_DWORD *)(v10 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B1676D )
    {
      sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v12);
      byte_4B1676D = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v23 = terminalMap->fields.subRootGimmickP->klass;
    if ( v23 )
    {
      v24 = *(TitleInfoControl_o **)&v23->_2.instance_size;
      v25 = *(EventDetailEntity_o **)(v10 + 24);
      v26 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
      System_Action___ctor(
        v26,
        (Il2CppObject *)v10,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( v24 )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(v24, v25, v26, 0LL);
        return;
      }
    }
LABEL_46:
    sub_1BCB254(terminalMap, v12);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v27);
  SubmarineMapManager__ShowScannableEffect(this, v28);
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
  const MethodInfo *v2; // x2
  SubmarineMapDataManager_o *submarineData; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1BCB254(0LL, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4B18F94 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, v3);
    byte_4B18F94 = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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

  if ( (byte_4B18F95 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4B18F95 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
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

  if ( (byte_4B18F96 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__, v3);
    byte_4B18F96 = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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

  if ( (byte_4B18F97 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__, v3);
    byte_4B18F97 = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
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

  if ( (byte_4B18F98 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4B18F98 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
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
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields.WarInfo) == 0LL )
    sub_1BCB254(this, method);
  return MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1BCB254(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1BCB254(this, method);
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
  if ( (byte_4B18FA6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Func_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BCAFF8(&Method_SubmarineMapManager__CoInitRequest_b__20_0__, v4);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_1BCAFF8(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4B18FA6 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_1BCB254(this, method);
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
  SubmarineMapManager__TryInitRequest(_4__this, 0LL);
  this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1BCB244(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1BCAF9C(p__2__current, (int32_t)v10, v12, v13);
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  int32_t v18; // w0

  v2 = this;
  if ( (byte_4B18FA7 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_1BCAFF8(
                                                                  &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                                  v3);
    byte_4B18FA7 = 1;
  }
  if ( !v2->fields.__1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SubmarineMapManager__get_eventId(_4__this, 0LL);
    mapInfo = _4__this->fields.mapInfo;
    if ( !mapInfo )
      goto LABEL_25;
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
                               0LL);
          _4__this->fields.closedPanelTexture = ResizedTexture2D;
          p_closedPanelTexture = &_4__this->fields.closedPanelTexture;
          sub_1BCAF9C(
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
              sub_1BCAF9C(
                (CGThumbnailListItem_o *)&_4__this->fields.closedPanelTexture,
                (int32_t)DarkTexture2D,
                v15,
                v16);
            }
            SubmarineMapManager__AdjustEachSpotsPositions(_4__this, 0LL);
            SubmarineMapManager__CreateContainers(_4__this, 0LL);
            SubmarineMapManager__CreatePanels(_4__this, 0LL);
            SubmarineMapManager__CreateNeverOpenSurrounds(_4__this, 0LL);
            SubmarineMapManager__SetGridLine(_4__this, 0LL);
            SubmarineMapManager__AdjustSilhouetteGimmicks(_4__this, 0LL);
            SubmarineMapManager__ConstructOnPartOfDialog(_4__this, 0LL);
            submarineData = _4__this->fields.submarineData;
            if ( submarineData )
            {
              this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)submarineData->fields._BeforeQuestInfo_k__BackingField;
              if ( this )
              {
                v18 = SubmarineQuestSaveInfo__get_BeforeClearQuestId((SubmarineQuestSaveInfo_o *)this, 0LL);
                SubmarineMapManager__UpdateParams(_4__this, v18, 0LL);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, 0LL);
                SubmarineMapManager__UpdateScannObstacleEffects(_4__this, 0LL);
                ActionExtensions__Call(v2->fields.finishCallback, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_25:
      sub_1BCB254(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_25;
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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

  if ( (byte_4B18F9C & 1) == 0 )
  {
    sub_1BCAFF8(&SubmarineMapManager___c_TypeInfo, v1);
    byte_4B18F9C = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)SubmarineMapManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
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
    sub_1BCB254(this, x);
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
  System_Action_o *_9__1; // x23
  int32_t v8; // w22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_4B18F9D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__, v3);
    byte_4B18F9D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  SubmarineMapManager__CreateAssetManagerIfNotExists(_4__this, 0LL);
  v5 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v5 )
    goto LABEL_9;
  klass = (SubmarineMapAssetManager_o *)v5[5].klass;
  _4__this = (SubmarineMapManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v8 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !klass )
LABEL_9:
    sub_1BCB254(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v8, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648(v5, Assets, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass19_0___LoadAssets_b__1(
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
    || (SubmarineMapManager__LoadPoolEffects(_4__this, 0LL), (v4 = this->fields.__4__this) == 0LL)
    || (assetManager = v4->fields.assetManager) == 0LL
    || (_4__this = (SubmarineMapManager_o *)v4->fields.submarineData) == 0LL
    || (SubmarineMapDataManager__LoadSettings(
          (SubmarineMapDataManager_o *)_4__this,
          assetManager->fields._Settings_k__BackingField,
          0LL),
        (v6 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BCB254(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648(v6, inited, 0LL);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x20
  __int64 v9; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B18F9E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v5);
    byte_4B18F9E = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.__4__this )
    goto LABEL_18;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  if ( !v8 )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v8,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4B1676D )
    {
      sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v7);
      byte_4B1676D = 1;
    }
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    }
    v9 = **(_QWORD **)&Instance[1].fields._DispLog;
    if ( v9 )
    {
      Instance = *(DataManager_o **)(v9 + 240);
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
LABEL_18:
    sub_1BCB254(Instance, v7);
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
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(_4__this, this->fields.finishCallback, 0LL);
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
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B18F9F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, method);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__, v3);
    byte_4B18F9F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v6 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
LABEL_8:
    sub_1BCB254(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v6, _9__1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, scanId);
  SubmarineMapManager__OnScannerSelected(_4__this, scanId, this->fields.panelData, 0LL);
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
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v7; // x21
  _BOOL4 isShowDialogUpper; // w24
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B18FA0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_bool__TypeInfo, method);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__, v3);
    byte_4B18FA0 = 1;
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
  SubmarineMapManager__ShowScanRange(_4__this, this->fields.scanId, this->fields.panelData, 0LL);
  _9__1 = this->fields.__9__1;
  scanId = this->fields.scanId;
  v7 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_1BCB244(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v7 )
LABEL_9:
    sub_1BCB254(_4__this, method);
  SubmarineMapManager__OpenScanConfirmDialog(v7, scanId, isShowDialogUpper, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SubmarineMapManager_o *_4__this; // x0
  SubmarineMapManager_o *v7; // x20
  System_Action_int__o *_9__2; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B18FA1 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, yes);
    sub_1BCAFF8(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__, v5);
    byte_4B18FA1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, 0LL);
  v7 = this->fields.__4__this;
  if ( yes )
  {
    if ( v7 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, 0LL);
      return;
    }
LABEL_11:
    sub_1BCB254(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10);
  }
  if ( !v7 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v7, _9__2, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, lscanId);
  SubmarineMapManager__OnScannerSelected(_4__this, lscanId, this->fields.panelData, 0LL);
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
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, result);
  SubmarineMapManager__OnScanPanelRequestFinished(_4__this, result, this->fields.scanId, this->fields.panelData, 0LL);
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
  __int64 v5; // x1
  ConnectMark_c *klass; // x8
  ConnectMark_c *v7; // x8

  if ( (byte_4B18FA2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v3);
    byte_4B18FA2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_22;
  SubmarineMapManager__ResetTimeAcceleration((SubmarineMapManager_o *)Instance, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v5);
    byte_4B1676D = 1;
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
  if ( !byte_4B1676D )
  {
    sub_1BCAFF8(&TerminalSceneComponent_TypeInfo, v5);
    byte_4B1676D = 1;
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
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_22:
    sub_1BCB254(Instance, v5);
  }
  SubmarineMapManager__UserControllable((SubmarineMapManager_o *)Instance, 1, 0LL);
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
    sub_1BCB254(this, x);
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

  if ( (byte_4B18FA3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_int___, *(_QWORD *)&scanId);
    byte_4B18FA3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2F6A04C *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_4B18FA4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_bool___, yes);
    byte_4B18FA4 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2F69FFC *)Method_ActionExtensions_Call_bool___);
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
    sub_1BCB254(0LL, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_1BCB254(0LL, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_4B18FA5 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B18FA5 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(scanAnimObj, 0LL);
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
    sub_1BCB254(this, x);
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
    sub_1BCB254(this, 0LL);
  return x->fields._Chain_k__BackingField == this->fields.i;
}