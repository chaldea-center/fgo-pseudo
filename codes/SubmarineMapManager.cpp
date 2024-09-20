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

  if ( (byte_4A57E96 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_4A57E96 = 1;
  }
  if ( !go )
    goto LABEL_23;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                    go,
                                    (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1B88814(this, go);
  }
  v8 = 0x7FFFFFFF;
LABEL_14:
  if ( v8 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                      go,
                                      (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1B8880C(this, go);
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

  if ( (byte_4A57E93 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E93 = 1;
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
        sub_1B88814(Children, v4);
      Children = (UnityEngine_GameObject_array *)v6->m_Items[v7];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
    sub_1B8880C(Children, v4);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  System_Collections_Generic_Dictionary_int__object__o *v15; // x21
  int v16; // w8
  UnityEngine_GameObject_o *v17; // x22
  unsigned int v18; // w19
  Il2CppObject *v19; // x23
  Il2CppClass *v20; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
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
  SubmarineMapDataManager_o *v38; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v40; // x23
  __int64 v41; // x0
  __int64 v42; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v44; // x1
  __int64 v45; // x0
  __int64 v46; // x1
  float32x2_t v47; // d9
  __int128 v48; // q0
  _BOOL8 v49; // x0
  __int64 v50; // x1
  __int128 v51; // q1
  int8x8_t v52; // d0
  int8x8_t v53; // d2
  __int64 v54; // x1
  UnityEngine_Transform_o *v55; // x0
  __int64 v56; // x1
  unsigned __int64 v57; // d0 OVERLAPPED
  int v58; // s1
  int v59; // s2
  float y; // [xsp+10h] [xbp-F0h]
  __int128 v62; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v63; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+70h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4A57E95 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76048248);
    sub_1B885B0(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_SrcSpotBasePrefab__TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    byte_4A57E95 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  value = 0LL;
  memset(&v64, 0, sizeof(v64));
  v2 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
        v12 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
        ++v2->fields._version;
        if ( !items )
          goto LABEL_59;
        size = v2->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v2,
            Component_object,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v2->fields._size = size + 1;
          v14[4] = (Il2CppClass *)Component_object;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)Component_object, v9, v10);
        }
      }
      klass = (int)v6[1].klass;
      if ( (int)++v7 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_1B88814(Children, v4);
  }
LABEL_17:
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
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
      v19 = UnityEngine_GameObject__GetComponent_object_(
              Children,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v19 )
          goto LABEL_59;
        v20 = v19[7].klass;
        if ( !v20 || !v15 )
          goto LABEL_59;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v15,
          HIDWORD(v20->_1.name),
          v19,
          (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
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
    || (Children = (UnityEngine_GameObject_o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
LABEL_59:
    sub_1B8880C(Children, v4);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v63,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v66 = v63;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v22 = sub_1B887FC(SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v22, 0LL);
    if ( !v22 )
      sub_1B8880C(v23, v24);
    current = (int32_t)v66.fields._current;
    *(_QWORD *)(v22 + 16) = v66.fields._current;
    v28 = (SubmarineSilhouetteData_o **)(v22 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 16), current, v25, v26);
    if ( !*(_QWORD *)(v22 + 16) )
      sub_1B8880C(v29, v30);
    if ( *(int *)(*(_QWORD *)(v22 + 16) + 20LL) > 0 )
    {
      v31 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_object____ctor(
        v31,
        (Il2CppObject *)v22,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0LL);
      if ( !v2 )
        sub_1B8880C(v32, v33);
      v34 = System_Collections_Generic_List_object___Find(
              v2,
              (System_Predicate_T__o *)v31,
              (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v35 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v34, 0LL, 0LL);
      if ( !v35 )
      {
        if ( !*v28 )
          sub_1B8880C(v35, v36);
        if ( !v15 )
          sub_1B8880C(v35, v36);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v15,
               (*v28)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_316F0E4 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v38 = this->fields.submarineData;
          if ( !v38 )
            sub_1B8880C(0LL, v37);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v38,
                                                                                      *v28,
                                                                                      0LL);
          v40 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_object____ctor_55562536(
            v40,
            SilhouetteOccupiedPanels,
            (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76048248);
          if ( !v34 )
            sub_1B8880C(v41, v42);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v34, 0LL);
          if ( !transform )
            sub_1B8880C(0LL, v44);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          *(_QWORD *)&v62 = *(_QWORD *)&localPosition.fields.x;
          y = localPosition.fields.y;
          if ( !byte_4A55CE1 )
          {
            v45 = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( !v40 )
            sub_1B8880C(v45, v46);
          v47.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v63,
            v40,
            (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v64 = v63;
          v48 = v62;
          *((float *)&v48 + 1) = y;
          while ( 1 )
          {
            v62 = v48;
            v49 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v64,
                    (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v49 )
              break;
            if ( !v64.fields._current )
              sub_1B8880C(v49, v50);
            v52.n64_u64[0] = *(unsigned __int64 *)((char *)&v64.fields._current[1].monitor + 4);
            *(int8x8_t *)&v51 = vbsl_s8(vcgt_f32(v52, *(float32x2_t *)&v62), *(int8x8_t *)&v62, v52);
            v53.n64_u64[0] = vadd_f32(
                               *(float32x2_t *)&v51,
                               vsub_f32(vadd_f32(v47, *(float32x2_t *)&v62), *(float32x2_t *)&v51)).n64_u64[0];
            v47.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v53, v52), v53, v52), *(float32x2_t *)&v51).n64_u64[0];
            v48 = v51;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v64,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_1B8880C(0LL, v54);
          v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0LL);
          if ( !v55 )
            sub_1B8880C(0LL, v56);
          v57 = vadd_f32(vmul_f32(v47, (float32x2_t)0x3F0000003F000000LL), *(float32x2_t *)&v62).n64_u64[0];
          v58 = HIDWORD(v57);
          v59 = 0;
          UnityEngine_Transform__set_localPosition(v55, *(UnityEngine_Vector3_o *)&v57, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
}


void __fastcall SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  SubmarineMapManager_o *v4; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo_361E548 *v7; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v9; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v10; // 0:x0.12
  System_Nullable_Vector3__o v11; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A57E92 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_Vector2___ctor__);
    this = (SubmarineMapManager_o *)sub_1B885B0(&Method_System_Nullable_Vector3___ctor__);
    byte_4A57E92 = 1;
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
  System_Nullable_Vector2____ctor(v10, PanelUnitSize_k__BackingField, (const MethodInfo_361E128 *)method);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  *(_QWORD *)&v11.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v11.fields.hasValue = &centerPosition;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v11, zeroVector, v7);
  if ( !spot )
LABEL_9:
    sub_1B8880C(this, spot);
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
    sub_1B8880C(this, spot);
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v19; // 0:x5.8

  if ( (byte_4A57E8D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__);
    sub_1B885B0(&SubmarineMapManager___c_TypeInfo);
    sub_1B885B0(&StringLiteral_6899/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/);
    byte_4A57E8D = 1;
  }
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v7->max_length )
    goto LABEL_23;
  if ( !Instance )
    goto LABEL_22;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)Instance, v7->m_Items[1], 143, 0LL) )
    return;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v7->max_length )
LABEL_23:
    sub_1B88814(Instance, v4);
  v8 = (CommonUI_o *)Instance;
  v9 = v7->m_Items[1];
  v10 = SubmarineMapManager___c_TypeInfo;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v10 = SubmarineMapManager___c_TypeInfo;
  }
  _9__49_0 = v10->static_fields->__9__49_0;
  v12 = (System_String_o *)StringLiteral_6899/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__49_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = SubmarineMapManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v13, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v15, v16);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
  if ( !v8 )
LABEL_22:
    sub_1B8880C(Instance, v4);
  v19 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v8, v9, v12, _9__49_0, 0, v19, 0.0, 0LL);
}


void __fastcall SubmarineMapManager__ClickPanel(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
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
  int32_t v27; // w3
  SchedulerTaskBase_TaskCallback_c *v28; // x1
  TaskScheduler_o *taskScheduler; // x19
  __int64 v30; // x20
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x0

  if ( (byte_4A57E83 & 1) == 0 )
  {
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager_ClickPanel__);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
    byte_4A57E83 = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = panelData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)panelData, v10, v11);
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
      v16 = (_QWORD *)sub_1B885C8(Method_SubmarineMapManager_ClickPanel__);
    v17 = (System_Reflection_MethodBase_o *)sub_1B88594(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v21 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v21, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v21 )
        {
          v22 = (System_Delegate_o **)(v21 + 32);
          v23 = *(System_Delegate_o **)(v21 + 32);
          v24 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(
            v24,
            (Il2CppObject *)v5,
            Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__,
            0LL);
          v25 = System_Delegate__Combine(v23, (System_Delegate_o *)v24, 0LL);
          if ( v25 )
          {
            v28 = SchedulerTaskBase_TaskCallback_TypeInfo;
            if ( (SchedulerTaskBase_TaskCallback_c *)v25->klass != SchedulerTaskBase_TaskCallback_TypeInfo
              || (*v22 = v25, (SchedulerTaskBase_TaskCallback_c *)v25->klass != v28) )
            {
              sub_1B88ACC(v25);
              return;
            }
          }
          else
          {
            *v22 = 0LL;
          }
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v25, v26, v27);
          taskScheduler = this->fields.taskScheduler;
          v6 = sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v6 )
          {
            v30 = v6;
            v31 = sub_1B886EC(v21, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
            if ( !v31 )
            {
              v35 = sub_1B88830();
              sub_1B886D8(v35, 0LL);
            }
            if ( !*(_DWORD *)(v30 + 24) )
              sub_1B88814(v31, v32);
            *(_QWORD *)(v30 + 32) = v21;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 32), v21, v33, v34);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v30, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1B8880C(v6, v7);
  }
  v14 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B885C8(Method_SubmarineMapManager_ClickPanel__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57E7A & 1) == 0 )
  {
    sub_1B885B0(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
    byte_4A57E7A = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)finishCallback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A57E7B & 1) == 0 )
  {
    sub_1B885B0(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
    byte_4A57E7B = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)finishCallback, v8, v9);
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
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v12; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v18; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A57E97 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E97 = 1;
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
           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v4,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = (struct SubmarineScanConfirmDialog_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.scanConfirmDialog,
      (int32_t)Component_object,
      v9,
      v10);
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
    v12 = this->fields.assetManager;
    if ( !v12 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v12->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__Instantiate_object_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v4 )
      goto LABEL_28;
    v14 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v4,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = (struct SubmarineSelectScannerDialog_o *)v14;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectScannerDialog, (int32_t)v14, v15, v16);
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
    v18 = this->fields.assetManager;
    if ( v18 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v18->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v4 = UnityEngine_Object__Instantiate_object_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v4 )
      {
        v20 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v4,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = (struct SubmarineNewScannerDialog_o *)v20;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.newScannerDialog, (int32_t)v20, v21, v22);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_28:
    sub_1B8880C(v4, v5);
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  const MethodInfo *v9; // x1

  if ( (byte_4A57E80 & 1) == 0 )
  {
    sub_1B885B0(&SubmarineMapAssetManager_TypeInfo);
    byte_4A57E80 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_1B887FC(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B88554(p_assetManager, (int32_t)v5, v7, v8);
    if ( !p_assetManager->klass )
      sub_1B8880C(0LL, v9);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v9);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct SubmarineMapAssetManager_o *v10; // x8
  struct ScrTerminalMap_o *v11; // x9
  Il2CppObject *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v13; // x0
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct SubmarineMapAssetManager_o *v17; // x8
  struct ScrTerminalMap_o *v18; // x9
  Il2CppObject *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v20; // x0
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3

  v2 = this;
  if ( (byte_4A57E8E & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this = (SubmarineMapManager_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E8E = 1;
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
  v7 = UnityEngine_Object__Instantiate_object__49297800(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.panelContainer, (int32_t)v7, v8, v9);
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
  v13 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v14 = UnityEngine_Object__Instantiate_object__49297800(
          EffectContainerPrefab_k__BackingField,
          v13,
          (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.effectContainer, (int32_t)v14, v15, v16);
  v17 = v2->fields.assetManager;
  if ( !v17 || (v18 = v2->fields.terminalMap) == 0LL || (this = (SubmarineMapManager_o *)v18->fields.dispRoot) == 0LL )
LABEL_15:
    sub_1B8880C(this, method);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v17->fields._GridLinePrefab_k__BackingField;
  v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v21 = UnityEngine_Object__Instantiate_object__49297800(
          GridLinePrefab_k__BackingField,
          v20,
          (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.gridLine, (int32_t)v21, v22, v23);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t current; // w1
  SubmarineSilhouetteData_o **v15; // x22
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  SubmarineSilhouetteData_o *v18; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  SubmarineMapDataManager_o *v22; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v24; // x24
  __int64 v25; // x0
  __int64 v26; // x1
  SubmarineMapManager___c_c *v27; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v29; // x26
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v34; // x1
  System_Collections_Generic_List_object__o *v35; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  System_Predicate_object__o *v38; // x26
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v44; // x1
  UnityEngine_Transform_o *v45; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x0
  const MethodInfo *v51; // x1
  int v52; // s0
  struct SubmarineMapDataManager_o *v55; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  Il2CppObject *v60; // x1
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  System_Object_array *v65; // x1
  const MethodInfo *v66; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppObject *v70; // x1
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  System_Collections_Generic_List_Enumerator_object__o v76; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v77; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A57EB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76048248);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    sub_1B885B0(&SubmarineMapManager___c_TypeInfo);
    byte_4A57EB0 = 1;
  }
  memset(&v77, 0, sizeof(v77));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_1B8880C(SilhouetteDataList_k__BackingField, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v77 = v76;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v77,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v9 = sub_1B887FC(SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v9, 0LL);
    if ( !v9 )
      sub_1B8880C(v10, v11);
    current = (int32_t)v77.fields._current;
    *(_QWORD *)(v9 + 16) = v77.fields._current;
    v15 = (SubmarineSilhouetteData_o **)(v9 + 16);
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), current, v12, v13);
    v18 = *(SubmarineSilhouetteData_o **)(v9 + 16);
    if ( !v18 )
      sub_1B8880C(0LL, v16);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v18, beforeClearQuestId, v17);
    if ( HasClearCondQuestId )
    {
      if ( !*v15 )
        sub_1B8880C(HasClearCondQuestId, v20);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v15)->fields._ObjectQuestIds_k__BackingField, -1, 0, 0LL) )
      {
        v22 = this->fields.submarineData;
        if ( !v22 )
          sub_1B8880C(0LL, v21);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v22,
                                                                                    *v15,
                                                                                    0LL);
        v24 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_object____ctor_55562536(
          v24,
          SilhouetteOccupiedPanels,
          (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76048248);
        v27 = SubmarineMapManager___c_TypeInfo;
        if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v27 = SubmarineMapManager___c_TypeInfo;
        }
        _9__101_0 = (System_Predicate_object__o *)v27->static_fields->__9__101_0;
        if ( !_9__101_0 )
        {
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27);
            v27 = SubmarineMapManager___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v27->static_fields->__9;
          _9__101_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_object____ctor(
            _9__101_0,
            v29,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0LL);
          static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          static_fields->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__101_0, (int32_t)_9__101_0, v31, v32);
        }
        if ( !v24 )
          sub_1B8880C(v25, v26);
        All = System_Collections_Generic_List_object___FindAll(
                v24,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v35 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_1B8880C(0LL, v34);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_1B8880C(0LL, v34);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v38 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            v38,
            (Il2CppObject *)v9,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0LL);
          if ( !SpotList )
            sub_1B8880C(v39, v40);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v38,
                 (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_1B8880C(0LL, v41);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v15 )
              sub_1B8880C(transform, v44);
            v45 = transform;
            SpotId_k__BackingField = (*v15)->fields._SpotId_k__BackingField;
            if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v45 )
              sub_1B8880C(GobjName, GobjName);
            v48 = UnityEngine_Transform__Find(v45, GobjName, 0LL);
            if ( !v48 )
              sub_1B8880C(0LL, v49);
            *(UnityEngine_Vector3_o *)&v52 = UnityEngine_Transform__get_localPosition(v48, 0LL);
            v55 = this->fields.submarineData;
            if ( !v55 )
              sub_1B8880C(v50, v51);
            Settings_k__BackingField = v55->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_1B8880C(v50, v51);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         *(UnityEngine_Vector3_o *)&v52,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v51);
            v60 = MoveCameraToPositionTask;
            if ( !v5 )
              sub_1B8880C(MoveCameraToPositionTask, MoveCameraToPositionTask);
            items = v5->fields._items;
            v62 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v5->fields._version;
            if ( !items )
              sub_1B8880C(MoveCameraToPositionTask, MoveCameraToPositionTask);
            size = v5->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                MoveCameraToPositionTask,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
            }
            else
            {
              v64 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v64[4] = (Il2CppClass *)v60;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v64 + 4), (int32_t)v60, v58, v59);
            }
          }
          v65 = System_Collections_Generic_List_object___ToArray(
                  v35,
                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v65,
                                                           v66);
          v70 = OpenPanelsAndRevealSpotsTask;
          if ( !v5 )
            sub_1B8880C(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v71 = v5->fields._items;
          v72 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
          ++v5->fields._version;
          if ( !v71 )
            sub_1B8880C(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v73 = v5->fields._size;
          if ( (unsigned int)v73 >= v71->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v71->obj.klass + v73;
            v5->fields._size = v73 + 1;
            v74[4] = (Il2CppClass *)v70;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v70, v68, v69);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v77,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_4A57EAD & 1) == 0 )
  {
    sub_1B885B0(&SchedulerTaskNone_TypeInfo);
    byte_4A57EAD = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_1B887FC(SchedulerTaskNone_TypeInfo);
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
  const MethodInfo_361E128 *v5; // x2
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
  if ( (byte_4A57EA6 & 1) == 0 )
  {
    sub_1B885B0(&MapCameraPerformance_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_Vector2___ctor__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    byte_4A57EA6 = 1;
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
  System_Nullable_float____ctor(v17, size, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
  v12 = (MapCameraPerformance_o *)sub_1B887FC(MapCameraPerformance_TypeInfo);
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
  if ( (byte_4A57E90 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1B885B0(&PanelUniqueIDUtil_TypeInfo);
    byte_4A57E90 = 1;
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
    sub_1B8880C(this, method);
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
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__49297800(
                                        v14,
                                        transform,
                                        (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
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
                                        (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
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
        sub_1B88814(this, method);
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
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__49297800(
                                          v34,
                                          v35,
                                          (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
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
                                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
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
  const MethodInfo_361E548 *v8; // x2
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
  System_Delegate_o *v19; // x8
  SchedulerTaskBase_TaskCallback_c *v20; // x1
  SchedulerTaskBase_array *v21; // x22
  SchedulerTaskWaitTime_o *v22; // x23
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  SchedulerTaskOrthostichy_o *v27; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v30; // s8
  System_Collections_Generic_List_object__o *v31; // x22
  SchedulerTaskWaitTime_o *v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  const MethodInfo *v39; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v41; // x19
  int32_t v42; // w2
  int32_t v43; // w3
  SchedulerTaskBase_array *v44; // x20
  int32_t v45; // w2
  int32_t v46; // w3
  SchedulerTaskParallel_o *v47; // x19
  __int64 v49; // x0
  System_Nullable_Vector3__o v50; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v51; // 0:x0.16
  System_Nullable_Vector3__o v52; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57EAA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&Method_System_Nullable_Vector3___ctor__);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskCommonEffect_TypeInfo);
    sub_1B885B0(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapPanelData_OpenPanel__);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4A57EAA = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_32;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  *(_QWORD *)&v51.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  v10 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v51.fields.hasValue = &v50;
  *(_QWORD *)&v50.fields.hasValue = 0LL;
  *(_QWORD *)&v50.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v51, LocalPosition_k__BackingField, v8);
  v11 = (SchedulerTaskCommonEffect_o *)sub_1B887FC(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v52.fields.hasValue = 0LL;
  *(_QWORD *)&v52.fields.value.fields.y = 0LL;
  v12 = v11;
  SchedulerTaskCommonEffect___ctor_41262108(
    v11,
    v10,
    effectScanedPanelObjPool,
    v50,
    v52,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v12 )
    goto LABEL_32;
  p_StartCallback = (System_Delegate_o **)&v12->fields.StartCallback;
  StartCallback = (System_Delegate_o *)v12->fields.StartCallback;
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v15, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v16 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v15, 0LL);
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
    sub_1B88ACC(v16);
  }
  *p_StartCallback = v19;
LABEL_11:
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->fields.StartCallback, (int32_t)v19, v17, v18);
  v21 = (SchedulerTaskBase_array *)sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL);
  v22 = (SchedulerTaskWaitTime_o *)sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v22, waitTime, 0LL);
  if ( !v21 )
    goto LABEL_32;
  if ( v22 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B886EC(v22, v21->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v21->max_length )
    goto LABEL_33;
  v21->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v21->m_Items, (int32_t)v22, v23, v24);
  effectContainer = (UnityEngine_GameObject_o *)sub_1B886EC(v12, v21->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( v21->max_length <= 1 )
    goto LABEL_33;
  v21->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v12, v25, v26);
  v27 = (SchedulerTaskOrthostichy_o *)sub_1B887FC(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v27, v21, 0LL);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v30 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v31 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v32 = (SchedulerTaskWaitTime_o *)sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v32, v30, 0LL);
  if ( !v31 )
    goto LABEL_32;
  items = v31->fields._items;
  v36 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v31->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v31->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v31,
      (Il2CppObject *)v32,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v31->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v32, v33, v34);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v39);
  System_Collections_Generic_List_object___AddRange(
    v31,
    RevealSpotOnPanelTasks,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v41 = (SchedulerTaskOrthostichy_o *)sub_1B887FC(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor_41264964(v41, (System_Collections_Generic_List_SchedulerTaskBase__o *)v31, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !effectContainer )
LABEL_32:
    sub_1B8880C(effectContainer, panelData);
  v44 = (SchedulerTaskBase_array *)effectContainer;
  if ( v27 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B886EC(v27, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v44->max_length )
    goto LABEL_33;
  v44->m_Items[0] = (SchedulerTaskBase_o *)v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v44->m_Items, (int32_t)v27, v42, v43);
  if ( v41 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B886EC(v41, v44->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v49 = sub_1B88830();
      sub_1B886D8(v49, 0LL);
    }
  }
  if ( v44->max_length <= 1 )
LABEL_33:
    sub_1B88814(effectContainer, panelData);
  v44->m_Items[1] = (SchedulerTaskBase_o *)v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v44->m_Items[1], (int32_t)v41, v45, v46);
  v47 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v47, v44, 0LL);
  return (SchedulerTaskBase_o *)v47;
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
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppObject *v16; // x1
  Il2CppClass **v17; // x0
  SchedulerTaskParallel_o *v18; // x19

  if ( (byte_4A57EAB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    byte_4A57EAB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  v9 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v9 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
        sub_1B88814(OpenPanelAndRevealSpotTask, v7);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          OpenPanelAndRevealSpotTask,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v17 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v17[4] = (Il2CppClass *)v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v16, v11, v12);
      }
      LODWORD(v9) = panelDataArray->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1B8880C(OpenPanelAndRevealSpotTask, v7);
  }
LABEL_13:
  v18 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_41265996(v18, (System_Collections_Generic_List_SchedulerTaskBase__o *)v5, 0LL);
  return (SchedulerTaskBase_o *)v18;
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
  int32_t v28; // w2
  int32_t v29; // w3
  System_Action_object__o *v30; // x21
  const MethodInfo *v31; // x2
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A57E8F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1B885B0(&Method_SubmarineMapManager_ClickPanel__);
    byte_4A57E8F = 1;
  }
  memset(&v33, 0, sizeof(v33));
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v32,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v33 = v32;
            while ( 1 )
            {
              v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v33,
                     (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v8 )
                break;
              v10 = v2->fields.assetManager;
              if ( !v10 )
                sub_1B8880C(v8, v9);
              v11 = v2->fields.panelContainer;
              if ( !v11 )
                sub_1B8880C(0LL, v9);
              current = v33.fields._current;
              v13 = (Il2CppObject *)v10->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v11, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v15 = UnityEngine_Object__Instantiate_object__49297800(
                      v13,
                      transform,
                      (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
              v17 = (UnityEngine_GameObject_o *)v15;
              if ( !v15 )
                sub_1B8880C(0LL, v16);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v15,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v20 = v2->fields.submarineData;
              if ( !v20 )
                sub_1B8880C(Component_object, v19);
              if ( !current )
                sub_1B8880C(Component_object, v19);
              v21 = (SubmarineMapPanelComponent_o *)Component_object;
              PositionCalculator_k__BackingField = v20->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_1B8880C(0LL, v19);
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
              v34.fields.z = 0.0;
              v34.fields.x = v23;
              v34.fields.y = v24;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v34,
                                    PositionCalculator_k__BackingField,
                                    0LL);
              if ( !v21 )
                sub_1B8880C(ClosedPanelDomain, v26);
              v27 = ClosedPanelDomain;
              SubmarineMapPanelComponent__Initialize(v21, 0LL);
              v35.fields.z = 0.0;
              v35.fields.x = v23;
              v35.fields.y = v24;
              GameObjectExtensions__SetLocalPosition(v17, v35, 0LL);
              SubmarineMapPanelComponent__SetSize(v21, v27, 0LL);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v21, v27, v2->fields.closedPanelTexture, 0LL);
              current[3].klass = (Il2CppClass *)v21;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&current[3], (int32_t)v21, v28, v29);
              v30 = (System_Action_object__o *)sub_1B887FC(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_object____ctor(
                v30,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                0LL);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v30,
                v31);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v33,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_1B8880C(this, method);
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

  if ( (byte_4A57EAE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57EAE = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
        sub_1B88814(Children, v5);
      Children = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
    }
LABEL_15:
    sub_1B8880C(Children, v5);
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
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x21
  System_Collections_Generic_List_object__o *v11; // x20
  SchedulerTaskNone_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
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

  if ( (byte_4A57EA9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_1B885B0(&SchedulerTaskNone_TypeInfo);
    sub_1B885B0(&SrcSpotBasePrefab_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
    byte_4A57EA9 = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = panelData;
  v10 = v5 + 16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)panelData, v8, v9);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v12 = (SchedulerTaskNone_o *)sub_1B887FC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v12, 0LL);
  if ( !v11 )
    goto LABEL_25;
  items = v11->fields._items;
  v16 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v11,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v11->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v12, v13, v14);
  }
  if ( !*(_QWORD *)v10 || *(int *)(*(_QWORD *)v10 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v20 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_MapControl_SpotInfo__TypeInfo);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__,
    0LL);
  if ( !SpotList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Find(
          SpotList,
          (System_Predicate_T__o *)v20,
          (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_25;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v21 = *(_QWORD *)v10;
  if ( !*(_QWORD *)v10 )
    goto LABEL_25;
  v22 = (UnityEngine_Transform_o *)mapInfo;
  v23 = *(_DWORD *)(v21 + 40);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v23, 0LL);
  if ( !v22 )
    goto LABEL_25;
  v24 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v22, (System_String_o *)mapInfo, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
  if ( !v24 )
LABEL_25:
    sub_1B8880C(mapInfo, v7);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v24,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v27);
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
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  __int64 v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Object_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0

  if ( (byte_4A57EAF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&SubmarineLightenSpotPerformance_TypeInfo);
    sub_1B885B0(&SubmarineRevealSpotPerformance_TypeInfo);
    byte_4A57EAF = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v9);
  v10 = sub_1B887FC(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v10, 0LL);
  *(_QWORD *)(v10 + 48) = spot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 48), (int32_t)spot, v11, v12);
  if ( !v5 )
    goto LABEL_20;
  items = v5->fields._items;
  v16 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v10,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v18[4] = (Il2CppClass *)v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), v10, v13, v14);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  v19 = sub_1B887FC(SubmarineLightenSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v19, 0LL);
  *(_QWORD *)(v19 + 48) = spot;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 48), (int32_t)spot, v20, v21);
  v24 = v5->fields._items;
  v25 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v5->fields._version;
  if ( !v24 )
LABEL_20:
    sub_1B8880C(mMapCtrl_SpotInfo, v7);
  v26 = v5->fields._size;
  if ( (unsigned int)v26 >= v24->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v19,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    v5->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), v19, v22, v23);
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v24; // x23
  struct SubmarineMapManager___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w23
  __int64 v29; // x22
  int v30; // w29
  float v31; // s9
  System_Predicate_object__o *v32; // x23
  System_Collections_Generic_List_T__o *v33; // x23
  System_Collections_Generic_List_object__o *v34; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v38; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v40; // x2
  float v41; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *v45; // x1
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v51; // w8
  SchedulerTaskParallel_o *v52; // x19
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4A57EAC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_1B885B0(&System_Func_SubmarineScanEvent__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&System_Predicate_SubmarineScanEvent__TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__);
    sub_1B885B0(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
    sub_1B885B0(&SubmarineMapManager___c_TypeInfo);
    byte_4A57EAC = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
    _9__97_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_object____ctor(
      _9__97_0,
      v16,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__,
      0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__97_0, (int32_t)_9__97_0, v18, v19);
  }
  if ( !v14 )
    goto LABEL_48;
  All = System_Collections_Generic_List_object___FindAll(
          v14,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v21 = SubmarineMapManager___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v21 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_1 = (System_Func_object__int__o *)v21->static_fields->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = SubmarineMapManager___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__97_1,
      v24,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__,
      0LL);
    v25 = SubmarineMapManager___c_TypeInfo->static_fields;
    v25->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->__9__97_1, (int32_t)_9__97_1, v26, v27);
  }
  v28 = System_Linq_Enumerable__Max_object_(
          v22,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_2EA8AE0 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v29 = sub_1B887FC(SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v29, 0LL);
  if ( !v29 )
LABEL_48:
    sub_1B8880C(Settings_k__BackingField, v9);
  v30 = v28 + 1;
  *(_DWORD *)(v29 + 16) = 0;
  if ( v28 + 1 >= 1 )
  {
    v31 = 0.0;
    do
    {
      v32 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_object____ctor(
        v32,
        (Il2CppObject *)v29,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0LL);
      if ( !v22 )
        goto LABEL_48;
      v33 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v22,
              (System_Predicate_T__o *)v32,
              (const MethodInfo_34FDF44 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v34 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v34,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v33 )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v54,
        (System_Collections_Generic_List_object__o *)v33,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v55 = v54;
      while ( 1 )
      {
        v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v55,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v35 )
          break;
        current = v55.fields._current;
        if ( !v55.fields._current )
          sub_1B8880C(v35, v36);
        v38 = this->fields.submarineData;
        if ( !v38 )
          sub_1B8880C(0LL, v36);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v38,
                           (int32_t)v55.fields._current[1].klass,
                           HIDWORD(v55.fields._current[1].klass),
                           0LL);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v41,
                                v40);
            v45 = (Il2CppObject *)HitObstractTask;
            if ( !v7 )
              sub_1B8880C(HitObstractTask, HitObstractTask);
            items = v7->fields._items;
            v47 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v7->fields._version;
            if ( !items )
              sub_1B8880C(HitObstractTask, HitObstractTask);
            size = v7->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v45,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v31,
                                           v40);
            v45 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v7 )
              sub_1B8880C(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            items = v7->fields._items;
            v47 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v7->fields._version;
            if ( !items )
              sub_1B8880C(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            size = v7->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_32:
            v49 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v49[4] = (Il2CppClass *)v45;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)v45, v43, v44);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v55,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v31 = ScanOpenPanelInterval + v31;
      v51 = *(_DWORD *)(v29 + 16) + 1;
      *(_DWORD *)(v29 + 16) = v51;
    }
    while ( v51 < v30 );
  }
  v52 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_41265996(v52, (System_Collections_Generic_List_SchedulerTaskBase__o *)v7, 0LL);
  return (SchedulerTaskBase_o *)v52;
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
  int32_t v10; // w2
  int32_t v11; // w3
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
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  __int64 v30; // x1
  Il2CppClass **v31; // x0
  const MethodInfo *v32; // x2
  Il2CppObject *ScanAnimObjectPrefab; // x22
  const MethodInfo *v34; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v36; // s2
  float v37; // s0
  float v38; // s1
  float v39; // s9
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v41; // x0
  __int64 v42; // x24
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *Component_object; // x22
  float32x2_t v46; // d0
  struct SubmarineMapDataManager_o *v47; // x8
  struct SubmarineSettingsManager_o *v48; // x8
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x1
  Il2CppClass **v55; // x0
  float JumpStartTime; // s10
  __int64 v57; // x28
  __int64 v58; // x25
  System_Delegate_o *v59; // x26
  SchedulerTaskBase_TaskCallback_o *v60; // x27
  System_Delegate_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_Delegate_c *v64; // x8
  SchedulerTaskBase_TaskCallback_c *v65; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v67; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v68; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v71; // x0
  __int64 v72; // x25
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x27
  SchedulerTaskWaitLoadAsset_o *v76; // x26
  int32_t v77; // w2
  int32_t v78; // w3
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  __int64 v85; // x1
  int32_t v86; // w2
  int32_t v87; // w3
  __int64 v88; // x1
  float v89; // s10
  System_Delegate_o *v90; // x27
  SchedulerTaskBase_TaskCallback_o *v91; // x28
  System_Delegate_o *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  SchedulerTaskBase_TaskCallback_c *v95; // x1
  int32_t v96; // w2
  int32_t v97; // w3
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  float SelectedPanelEffecFinishTime; // s10
  System_Delegate_o *v103; // x27
  SchedulerTaskBase_TaskCallback_o *v104; // x28
  System_Delegate_o *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  SchedulerTaskBase_TaskCallback_c *v108; // x1
  __int64 *v109; // x27
  const MethodInfo_361E128 *v110; // x2
  float JumpDuration; // s10
  float x; // s0
  float32x2_t v113; // d12
  MapCamera_o *mapCamera; // x21
  float v115; // s1
  MapCameraPerformance_o *v116; // x0
  SchedulerTaskBase_o *v117; // x26
  UnityEngine_GameObject_o *v118; // x24
  SchedulerTaskMovePerformance_o *v119; // x0
  SchedulerTaskBase_o *v120; // x21
  int32_t v121; // w2
  int32_t v122; // w3
  SchedulerTaskBase_array *v123; // x24
  int32_t v124; // w2
  int32_t v125; // w3
  SimpleAnimation_o *AnimationComponent; // x26
  System_String_o *AnimName; // x27
  System_Delegate_o *v128; // x27
  SchedulerTaskBase_TaskCallback_o *v129; // x28
  System_Delegate_o *v130; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  SchedulerTaskBase_TaskCallback_c *v133; // x1
  __int64 v134; // x27
  __int64 v135; // x20
  int32_t v136; // w2
  int32_t v137; // w3
  __int64 v138; // x24
  int32_t v139; // w2
  int32_t v140; // w3
  int32_t v141; // w2
  int32_t v142; // w3
  SchedulerTaskOrthostichy_o *v143; // x21
  int32_t v144; // w2
  int32_t v145; // w3
  SchedulerTaskParallel_o *v146; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v148; // x20
  int32_t v149; // w2
  int32_t v150; // w3
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  Il2CppClass **v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  Il2CppClass **v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  Il2CppClass **v166; // x0
  __int64 v168; // x0
  __int64 v169; // [xsp+8h] [xbp-E8h]
  float v170; // [xsp+20h] [xbp-D0h]
  float v171; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v176; // 0:x4.8
  System_Nullable_Vector2__o v177; // 0:x0.12
  UnityEngine_Vector3_o v178; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v179; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v180; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v181; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4A57EA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&MapCameraPerformance_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_Vector2___ctor__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskMovePerformance_TypeInfo);
    sub_1B885B0(&SchedulerTaskOrthostichy_TypeInfo);
    sub_1B885B0(&SchedulerTaskParallel_TypeInfo);
    sub_1B885B0(&SchedulerTaskSimpleAnimation_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitLoadAsset_TypeInfo);
    sub_1B885B0(&SchedulerTaskWaitTime_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
    byte_4A57EA8 = 1;
  }
  v7 = sub_1B887FC(SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_126;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_126;
  if ( !panelData )
    goto LABEL_126;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_126;
  v14.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v15.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v16.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v17.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v19 = this->fields.submarineData;
  if ( !v19 )
    goto LABEL_126;
  Settings_k__BackingField = v19->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_126;
  v21 = vadd_f32(
          v17,
          vmul_f32(
            vmul_f32(v15, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v14, 1uLL).n64_u64[0] | 0x100000001LL), v16))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v22 = *((float *)&v21 + 1);
  v23 = 0;
  v24 = HIDWORD(v21);
  value = (UnityEngine_Vector2_o)v21;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v21,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v9);
  if ( !v18 )
    goto LABEL_126;
  items = v18->fields._items;
  v28 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v18->fields._version;
  if ( !items )
    goto LABEL_126;
  v29 = v18->fields._size;
  v30 = MoveCameraToPositionTask;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v18,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + v29;
    v18->fields._size = v29 + 1;
    v31[4] = (Il2CppClass *)v30;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), v30, v25, v26);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v18;
  if ( !this->fields.assetManager )
    goto LABEL_126;
  ScanAnimObjectPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                           this->fields.assetManager,
                                           *(_DWORD *)(MoveCameraToPositionTask + 56),
                                           v32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanAnimObjectPrefab, 0LL, 0LL) )
  {
    HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v34);
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
      *(UnityEngine_Vector3_o *)(&v36 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                               0LL);
      MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
      v171 = v37;
      v170 = v38;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v39 = v36;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v41 = UnityEngine_Object__Instantiate_object__49297800(
              ScanAnimObjectPrefab,
              transform,
              (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
      *(_QWORD *)(v7 + 16) = v41;
      v42 = v7 + 16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v41, v43, v44);
      v178.fields.y = v170;
      v178.fields.x = v171;
      v178.fields.z = v39;
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v7 + 16), v178, 0LL);
      MoveCameraToPositionTask = *(_QWORD *)(v7 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *(UnityEngine_GameObject_o **)v42,
                           (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_4A55CE3 )
      {
        sub_1B885B0(&System_Math_TypeInfo);
        byte_4A55CE3 = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !Component_object )
        goto LABEL_126;
      v46.n64_u64[0] = vsub_f32((float32x2_t)__PAIR64__(LODWORD(v170), LODWORD(v171)), (float32x2_t)value).n64_u64[0];
      SubmarineScannerComponent__Initialize(
        (SubmarineScannerComponent_o *)Component_object,
        sqrtf((float)(v39 * v39) + vaddv_f32(vmul_f32(v46, v46))),
        0LL);
      if ( !SubmarineScannerComponent__IsAnimationPrepared((SubmarineScannerComponent_o *)Component_object, 0LL) )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v18;
      v18 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v18,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v47 = this->fields.submarineData;
      if ( !v47 )
        goto LABEL_126;
      v48 = v47->fields._Settings_k__BackingField;
      if ( !v48 )
        goto LABEL_126;
      v179.fields.y = v170;
      v179.fields.x = v171;
      v179.fields.z = v39;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            v179,
                                            1.0,
                                            v48->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v9);
      if ( !v18 )
        goto LABEL_126;
      v51 = v18->fields._items;
      v52 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v18->fields._version;
      if ( !v51 )
        goto LABEL_126;
      v53 = v18->fields._size;
      v54 = MoveCameraToPositionTask;
      if ( (unsigned int)v53 >= v51->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &v51->obj.klass + v53;
        v18->fields._size = v53 + 1;
        v55[4] = (Il2CppClass *)v54;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 4), v54, v49, v50);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime((SubmarineScannerComponent_o *)Component_object, 0LL);
      v57 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v57, JumpStartTime, 0LL);
      if ( !v57 )
        goto LABEL_126;
      v58 = v57 + 24;
      v59 = *(System_Delegate_o **)(v57 + 24);
      v60 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v60,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0LL);
      v61 = System_Delegate__Combine(v59, (System_Delegate_o *)v60, 0LL);
      v64 = (System_Delegate_c *)v61;
      if ( v61 )
      {
        v65 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v61->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        *(_QWORD *)v58 = v61;
        if ( (SchedulerTaskBase_TaskCallback_c *)v61->klass != v65 )
          goto LABEL_98;
      }
      else
      {
        *(_QWORD *)v58 = 0LL;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v57 + 24), (int32_t)v61, v62, v63);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_126;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v67 = this->fields.playingScanVoiceData;
        if ( !v67 )
          goto LABEL_126;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v67->fields.assetName, 0LL);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v68 = this->fields.playingScanVoiceData;
          if ( !v68 )
            goto LABEL_126;
          assetName = v68->fields.assetName;
          vcName = v68->fields.vcName;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
        }
      }
      v71 = GameObjectExtensions__SafeGetComponent_object_(
              *(UnityEngine_GameObject_o **)(v7 + 16),
              (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v7 + 24) = v71;
      v72 = v7 + 24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)v71, v73, v74);
      if ( !*(_QWORD *)(v7 + 24) )
        goto LABEL_126;
      v75 = *(System_String_o **)(*(_QWORD *)(v7 + 24) + 56LL);
      v76 = (SchedulerTaskWaitLoadAsset_o *)sub_1B887FC(SchedulerTaskWaitLoadAsset_TypeInfo);
      SchedulerTaskWaitLoadAsset___ctor(v76, v75, 0LL);
      v79 = v18->fields._items;
      v80 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v18->fields._version;
      if ( !v79 )
        goto LABEL_126;
      v81 = v18->fields._size;
      if ( (unsigned int)v81 >= v79->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v76,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
      }
      else
      {
        v82 = &v79->obj.klass + v81;
        v18->fields._size = v81 + 1;
        v82[4] = (Il2CppClass *)v76;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v76, v77, v78);
      }
      if ( !*(_QWORD *)v72 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v85 = *(_QWORD *)(*(_QWORD *)v72 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v85;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(MoveCameraToPositionTask + 16), v85, v83, v84);
      if ( !*(_QWORD *)v72 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask
        || (v88 = *(_QWORD *)(*(_QWORD *)v72 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v88,
            sub_1B88554((ServantStatusBattleListViewItem_o *)(MoveCameraToPositionTask + 24), v88, v86, v87),
            !*(_QWORD *)v72)
        || (v169 = v57,
            v89 = *(float *)(*(_QWORD *)v72 + 32LL),
            v58 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v58, v89, 0LL),
            !v58) )
      {
LABEL_126:
        sub_1B8880C(MoveCameraToPositionTask, v9);
      }
      v59 = (System_Delegate_o *)(v58 + 24);
      v90 = *(System_Delegate_o **)(v58 + 24);
      v91 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v91,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0LL);
      v92 = System_Delegate__Combine(v90, (System_Delegate_o *)v91, 0LL);
      v64 = (System_Delegate_c *)v92;
      if ( v92 )
      {
        v95 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v92->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v59->klass = (System_Delegate_c *)v92;
        if ( (SchedulerTaskBase_TaskCallback_c *)v92->klass != v95 )
          goto LABEL_98;
      }
      else
      {
        v59->klass = 0LL;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v58 + 24), (int32_t)v92, v93, v94);
      v98 = v18->fields._items;
      v99 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v18->fields._version;
      if ( !v98 )
        goto LABEL_126;
      v100 = v18->fields._size;
      if ( (unsigned int)v100 >= v98->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v58,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = &v98->obj.klass + v100;
        v18->fields._size = v100 + 1;
        v101[4] = (Il2CppClass *)v58;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v101 + 4), v58, v96, v97);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
                                       (SubmarineScannerComponent_o *)Component_object,
                                       0LL);
      v58 = sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v58, SelectedPanelEffecFinishTime, 0LL);
      if ( !v58 )
        goto LABEL_126;
      v59 = (System_Delegate_o *)(v58 + 32);
      v103 = *(System_Delegate_o **)(v58 + 32);
      v104 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v104,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0LL);
      v105 = System_Delegate__Combine(v103, (System_Delegate_o *)v104, 0LL);
      v64 = (System_Delegate_c *)v105;
      if ( v105 )
      {
        v108 = SchedulerTaskBase_TaskCallback_TypeInfo;
        v109 = &qword_4A55000;
        if ( (SchedulerTaskBase_TaskCallback_c *)v105->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v59->klass = (System_Delegate_c *)v105;
        if ( (SchedulerTaskBase_TaskCallback_c *)v105->klass != v108 )
          goto LABEL_98;
      }
      else
      {
        v59->klass = 0LL;
        v109 = &qword_4A55000;
      }
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v58 + 32), (int32_t)v105, v106, v107);
      *(_BYTE *)(v58 + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration((SubmarineScannerComponent_o *)Component_object, 0LL);
      if ( !*((_BYTE *)v109 + 3299) )
      {
        sub_1B885B0(&System_Math_TypeInfo);
        *((_BYTE *)v109 + 3299) = 1;
      }
      x = value.fields.x;
      v113.n64_u64[0] = vsub_f32((float32x2_t)value, (float32x2_t)__PAIR64__(LODWORD(v170), LODWORD(v171))).n64_u64[0];
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        x = value.fields.x;
      }
      mapCamera = this->fields.mapCamera;
      position.fields.value.fields.y = 0.0;
      LODWORD(v177.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&v177.fields.hasValue = &position;
      v115 = v22;
      *(_QWORD *)&position.fields.hasValue = 0LL;
      System_Nullable_Vector2____ctor(v177, *(UnityEngine_Vector2_o *)&x, v110);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, 1.0, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
      v116 = (MapCameraPerformance_o *)sub_1B887FC(MapCameraPerformance_TypeInfo);
      v176 = size;
      v117 = (SchedulerTaskBase_o *)v116;
      MapCameraPerformance___ctor(v116, mapCamera, JumpDuration, position, v176, 0, 0LL);
      v118 = *(UnityEngine_GameObject_o **)v42;
      v119 = (SchedulerTaskMovePerformance_o *)sub_1B887FC(SchedulerTaskMovePerformance_TypeInfo);
      v181.fields.z = 0.0;
      v180.fields.y = v170;
      v180.fields.x = v171;
      v180.fields.z = v39;
      v181.fields.x = value.fields.x;
      v181.fields.y = v22;
      v120 = (SchedulerTaskBase_o *)v119;
      SchedulerTaskMovePerformance___ctor(
        v119,
        v118,
        v180,
        v181,
        sqrtf((float)((float)(0.0 - v39) * (float)(0.0 - v39)) + vaddv_f32(vmul_f32(v113, v113))) / JumpDuration,
        0,
        0LL);
      MoveCameraToPositionTask = sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v123 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v117 )
      {
        MoveCameraToPositionTask = sub_1B886EC(v117, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( !v123->max_length )
        goto LABEL_127;
      v123->m_Items[0] = v117;
      sub_1B88554((ServantStatusBattleListViewItem_o *)v123->m_Items, (int32_t)v117, v121, v122);
      if ( v120 )
      {
        MoveCameraToPositionTask = sub_1B886EC(v120, v123->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( v123->max_length <= 1 )
        goto LABEL_127;
      v123->m_Items[1] = v120;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v123->m_Items[1], (int32_t)v120, v124, v125);
      this = (SubmarineMapManager_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v123, 0LL);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(
                             (SubmarineScannerComponent_o *)Component_object,
                             0LL);
      AnimName = SubmarineScannerComponent__get_AnimName((SubmarineScannerComponent_o *)Component_object, 0LL);
      v42 = sub_1B887FC(SchedulerTaskSimpleAnimation_TypeInfo);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v42, AnimationComponent, AnimName, 0LL);
      if ( !v42 )
        goto LABEL_126;
      v59 = (System_Delegate_o *)(v42 + 32);
      v128 = *(System_Delegate_o **)(v42 + 32);
      v129 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v129,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0LL);
      v130 = System_Delegate__Combine(v128, (System_Delegate_o *)v129, 0LL);
      v64 = (System_Delegate_c *)v130;
      if ( !v130 )
        goto LABEL_99;
      v133 = SchedulerTaskBase_TaskCallback_TypeInfo;
      v134 = v169;
      if ( (SchedulerTaskBase_TaskCallback_c *)v130->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v59->klass = (System_Delegate_c *)v130;
        if ( (SchedulerTaskBase_TaskCallback_c *)v130->klass == v133 )
        {
LABEL_100:
          sub_1B88554((ServantStatusBattleListViewItem_o *)v59, (int32_t)v64, v131, v132);
          MoveCameraToPositionTask = sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_126;
          v135 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_1B886EC(v42, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v135 + 24) )
              goto LABEL_127;
            *(_QWORD *)(v135 + 32) = v42;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v135 + 32), v42, v136, v137);
            MoveCameraToPositionTask = sub_1B88658(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_126;
            v138 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_1B886EC(v134, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v138 + 24) )
                goto LABEL_127;
              *(_QWORD *)(v138 + 32) = v134;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v138 + 32), v134, v139, v140);
              if ( !this || (MoveCameraToPositionTask = sub_1B886EC(this, *(_QWORD *)(*(_QWORD *)v138 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v138 + 24) <= 1u )
                  goto LABEL_127;
                *(_QWORD *)(v138 + 40) = this;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v138 + 40), (int32_t)this, v141, v142);
                v143 = (SchedulerTaskOrthostichy_o *)sub_1B887FC(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v143, (SchedulerTaskBase_array *)v138, 0LL);
                if ( !v143 || (MoveCameraToPositionTask = sub_1B886EC(v143, *(_QWORD *)(*(_QWORD *)v135 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v135 + 24) > 1u )
                  {
                    *(_QWORD *)(v135 + 40) = v143;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v135 + 40), (int32_t)v143, v144, v145);
                    v146 = (SchedulerTaskParallel_o *)sub_1B887FC(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v146, (SchedulerTaskBase_array *)v135, 0LL);
                    if ( v146 )
                    {
                      v146->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(
                                               (SubmarineScannerComponent_o *)Component_object,
                                               0LL);
                      v148 = (SchedulerTaskWaitTime_o *)sub_1B887FC(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v148, TimeToStartOpenPanel, 0LL);
                      v151 = v18->fields._items;
                      v152 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v18->fields._version;
                      if ( v151 )
                      {
                        v153 = v18->fields._size;
                        if ( (unsigned int)v153 >= v151->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v18,
                            (Il2CppObject *)v58,
                            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v154 = &v151->obj.klass + v153;
                          v18->fields._size = v153 + 1;
                          v154[4] = (Il2CppClass *)v58;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)(v154 + 4), v58, v149, v150);
                        }
                        v157 = v18->fields._items;
                        v158 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v18->fields._version;
                        if ( v157 )
                        {
                          v159 = v18->fields._size;
                          if ( (unsigned int)v159 >= v157->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v18,
                              (Il2CppObject *)v146,
                              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v160 = &v157->obj.klass + v159;
                            v18->fields._size = v159 + 1;
                            v160[4] = (Il2CppClass *)v146;
                            sub_1B88554((ServantStatusBattleListViewItem_o *)(v160 + 4), (int32_t)v146, v155, v156);
                          }
                          v163 = v18->fields._items;
                          v164 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v18->fields._version;
                          if ( v163 )
                          {
                            v165 = v18->fields._size;
                            if ( (unsigned int)v165 >= v163->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v18,
                                (Il2CppObject *)v148,
                                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v166 = &v163->obj.klass + v165;
                              v18->fields._size = v165 + 1;
                              v166[4] = (Il2CppClass *)v148;
                              sub_1B88554((ServantStatusBattleListViewItem_o *)(v166 + 4), (int32_t)v148, v161, v162);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v18;
                          }
                        }
                      }
                    }
                    goto LABEL_126;
                  }
LABEL_127:
                  sub_1B88814(MoveCameraToPositionTask, v9);
                }
              }
            }
          }
LABEL_128:
          v168 = sub_1B88830();
          sub_1B886D8(v168, 0LL);
        }
      }
LABEL_98:
      sub_1B88ACC(v64);
LABEL_99:
      v59->klass = v64;
      v134 = v169;
      goto LABEL_100;
    }
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v18;
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
  int32_t v16; // w2
  int32_t v17; // w3
  struct SubmarineMapDataManager_o *v18; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Object_array *v24; // x0
  const MethodInfo *v25; // x2
  int32x2_t v26; // d1
  struct SubmarineMapDataManager_o *v27; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *v29; // x22
  unsigned __int64 v30; // d0 OVERLAPPED
  float v31; // s2
  int v32; // s1
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  SchedulerTaskBase_o *v38; // x1
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4A57EB1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_1B885B0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    byte_4A57EB1 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v11 )
      break;
    current = v48.fields._current;
    if ( !v48.fields._current )
      sub_1B8880C(v11, v12);
    if ( !LOBYTE(v48.fields._current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v48.fields._current,
                                          -1,
                                          0LL);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v18 = this->fields.submarineData;
        if ( !v18 )
          sub_1B8880C(IsPanelSatisfyCommonReleaseCond, v15);
        PositionCalculator_k__BackingField = (float32x2_t *)v18->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_1B8880C(IsPanelSatisfyCommonReleaseCond, v15);
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
          sub_1B8880C(IsPanelSatisfyCommonReleaseCond, v15);
        items = v7->fields._items;
        v21 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v7->fields._version;
        if ( !items )
          sub_1B8880C(IsPanelSatisfyCommonReleaseCond, v15);
        size = v7->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            current,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v23[4] = (Il2CppClass *)current;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)current, v16, v17);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v7 )
    goto LABEL_34;
  if ( v7->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
  v24 = System_Collections_Generic_List_object___ToArray(
          v7,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                    this,
                                    (SubmarineMapPanelData_array *)v24,
                                    v25);
  v27 = this->fields.submarineData;
  if ( !v27 )
    goto LABEL_34;
  Settings_k__BackingField = v27->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_34;
  v29 = (Il2CppObject *)PanelDataList_k__BackingField;
  v26.n64_f32[0] = (float)v7->fields._size;
  v30 = vdiv_f32(v5, vdup_lane_s32(v26, 0)).n64_u64[0];
  v31 = z / v26.n64_f32[0];
  v32 = HIDWORD(v30);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                    this,
                                    *(UnityEngine_Vector3_o *)&v30,
                                    1.0,
                                    Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                    v9);
  if ( !v3 )
    goto LABEL_34;
  v35 = v3->fields._items;
  v36 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v3->fields._version;
  if ( !v35 )
    goto LABEL_34;
  v37 = v3->fields._size;
  v38 = PanelDataList_k__BackingField;
  if ( (unsigned int)v37 >= v35->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)PanelDataList_k__BackingField,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &v35->obj.klass + v37;
    v3->fields._size = v37 + 1;
    v39[4] = (Il2CppClass *)v38;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v38, v33, v34);
  }
  v42 = v3->fields._items;
  v43 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v3->fields._version;
  if ( !v42 )
LABEL_34:
    sub_1B8880C(PanelDataList_k__BackingField, v9);
  v44 = v3->fields._size;
  if ( (unsigned int)v44 >= v42->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      v29,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj.klass + v44;
    v3->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)v29;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v45 + 4), (int32_t)v29, v40, v41);
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
  int32_t v8; // w2
  int32_t v9; // w3
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v16; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_4A57E9B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E9B = 1;
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
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.scanConfirmDialog, 0, v8, v9);
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
    UnityEngine_Object__Destroy_69459380(v12, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectScannerDialog, 0, v13, v14);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (ServantStatusBattleListViewItem_o *)&this->fields.newScannerDialog;
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
      UnityEngine_Object__Destroy_69459380(v18, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_1B88554(p_newScannerDialog, 0, v19, v20);
      return;
    }
LABEL_25:
    sub_1B8880C(klass, v5);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4A57E7E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E7E = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(panelContainer, 0LL);
  UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x20
  const MethodInfo *v13; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v16; // w1
  __int64 v17; // x22
  SchedulerTaskBase_TaskCallback_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4A57E82 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_1B885B0(&SchedulerTaskNone_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
    byte_4A57E82 = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v17 = sub_1B887FC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v17, 0LL);
  v18 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 32) = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v18, v19, v20);
  items = v12->fields._items;
  v24 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v12,
      (Il2CppObject *)v17,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v12->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v17;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), v17, v21, v22);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_1B8880C(HideEnemyOccupiedPanelTasks, v7);
  TaskScheduler__AddTask_41271180(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v12,
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
    sub_1B8880C(assetManager, v6);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v7);
}


void __fastcall SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields.submarineData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.submarineData, 0, v2, v3);
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

  if ( (byte_4A57E94 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E94 = 1;
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
      sub_1B8880C(HasChild, v4);
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
          sub_1B88814(HasChild, v4);
        HasChild = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
  if ( (byte_4A57E81 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    this = (SubmarineMapManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    byte_4A57E81 = 1;
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
    sub_1B8880C(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A57EA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
    byte_4A57EA1 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_2F2950C *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void __fastcall SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57EA5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57EA5 = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = (ServantStatusBattleListViewItem_o *)&this->fields.scanRangeNotificator;
  v4 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_scanRangeNotificator->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_1B88554(p_scanRangeNotificator, 0, v7, v8);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A57E9F & 1) == 0 )
  {
    sub_1B885B0(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
    byte_4A57E9F = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_2F2950C *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4A57EA3 & 1) == 0 )
  {
    sub_1B885B0(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
    byte_4A57EA3 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_2F2950C *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v5; // x22
  int32_t v6; // w2
  int32_t v7; // w3
  TaskScheduler_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A57E78 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
    sub_1B885B0(&SubmarineMapDataManager_TypeInfo);
    sub_1B885B0(&TaskScheduler_TypeInfo);
    byte_4A57E78 = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v5 = (SubmarineMapDataManager_o *)sub_1B887FC(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v5, mapInfo, warInfo, 0LL);
  this->fields.submarineData = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.submarineData, (int32_t)v5, v6, v7);
  v8 = (TaskScheduler_o *)sub_1B887FC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v8, 0LL);
  this->fields.taskScheduler = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.taskScheduler, (int32_t)v8, v9, v10);
  taskScheduler = this->fields.taskScheduler;
  v12 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v12,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
    0LL);
  if ( !taskScheduler )
    sub_1B8880C(v13, v14);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v12;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v12,
    v15,
    v16);
  v17 = (Il2CppObject *)sub_1B887FC(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  System_Object___ctor(v17, 0LL);
  this->fields.playingScanVoiceData = (struct SubmarineMapManager_PlayingScanVoiceData_o *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.playingScanVoiceData, (int32_t)v17, v18, v19);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *v12; // x19

  if ( (byte_4A57E79 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
    byte_4A57E79 = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v12, 5, 1, 0LL);
}


void __fastcall SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  struct SubmarineMapAssetManager_o *v8; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  struct SubmarineMapAssetManager_o *v13; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  struct SubmarineMapAssetManager_o *v18; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3

  v2 = this;
  if ( (byte_4A57E9C & 1) == 0 )
  {
    sub_1B885B0(&Method_ComponentPool_CommonEffectComponent__Preload__);
    sub_1B885B0(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__);
    sub_1B885B0(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
    sub_1B885B0(&Method_ComponentPool_CommonEffectComponent___ctor__);
    sub_1B885B0(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
    sub_1B885B0(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
    sub_1B885B0(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
    sub_1B885B0(&ComponentPool_CommonEffectComponent__TypeInfo);
    sub_1B885B0(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
    this = (SubmarineMapManager_o *)sub_1B885B0(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
    byte_4A57E9C = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v5 = (ComponentPool_T__o *)sub_1B887FC(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_object____ctor(
    v5,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_30F9E68 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.effectScanedPanelObjPool, (int32_t)v5, v6, v7);
  this = (SubmarineMapManager_o *)v2->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_object___Preload(
    (ComponentPool_T__o *)this,
    9,
    (const MethodInfo_30F9F2C *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v8 = v2->fields.assetManager;
  if ( !v8 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v8->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v10 = (ComponentPool_T__o *)sub_1B887FC(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v10,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_30F9E68 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.effectScanObstaclePanelObjPool, (int32_t)v10, v11, v12);
  v13 = v2->fields.assetManager;
  if ( !v13 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v13->fields._EffectScannablePanelPrafab_k__BackingField;
  v15 = (ComponentPool_T__o *)sub_1B887FC(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v15,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_30F9E68 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.effectScannablePanelObjPool, (int32_t)v15, v16, v17);
  this = (SubmarineMapManager_o *)v2->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_object___Preload(
          (ComponentPool_T__o *)this,
          50,
          (const MethodInfo_30F9F2C *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v18 = v2->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_1B8880C(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v18->fields._EffectSelectedPanelPrefab_k__BackingField;
  v20 = (ComponentPool_T__o *)sub_1B887FC(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v20,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_30F9E68 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.effectSelectedPanelObjPool, (int32_t)v20, v21, v22);
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
    sub_1B8880C(submarineData, finishCallback);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_4A57E7C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
    byte_4A57E7C = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)finishCallback, v10, v11);
  v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v12, v13);
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

  if ( (byte_4A57E8A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&Method_SubmarineMapManager__OnEndScan_b__42_0__);
    byte_4A57E8A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v6 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0LL),
        !v6) )
  {
    sub_1B8880C(Instance, v4);
  }
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v6, warId, v8, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4A57E7D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__);
    byte_4A57E7D = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x1
  clsQuestCheck_o *v16; // x22
  NetworkManager_ResultCallbackFunc_o *v17; // x22
  EventScanPanelMapRequest_o *v18; // x22
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_4A57E85 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
    byte_4A57E85 = 1;
  }
  v7 = sub_1B887FC(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = panelData;
  v12 = v7 + 32;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)panelData, v13, v14);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v15);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !this->fields.submarineData )
    goto LABEL_13;
  v16 = (clsQuestCheck_o *)Instance;
  Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v16 )
    goto LABEL_13;
  clsQuestCheck__SaveEventQuestIdListPlayable(v16, (int32_t)Instance, 0LL);
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v17,
               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v18 = (EventScanPanelMapRequest_o *)Instance,
        Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL),
        (mapInfo = this->fields.mapInfo) == 0LL)
    || !*(_QWORD *)v12
    || !v18 )
  {
LABEL_13:
    sub_1B8880C(Instance, v9);
  }
  EventScanPanelMapRequest__beginRequest(
    v18,
    (int32_t)Instance,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v12 + 24LL),
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
  int32_t v14; // w2
  int32_t v15; // w3
  struct System_String_o *value; // x8
  EventSaveData_o *v17; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v20; // x10
  __int64 v21; // x9
  TerminalPramsManager_c *v22; // x0
  EventSaveData_o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  TerminalPramsManager_c *v26; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v28; // x0
  System_String_array *ValueByArray; // x0
  int max_length; // w8
  System_String_o **v31; // x9
  System_String_o *v32; // x21
  System_String_o **v33; // x9
  System_String_o *v34; // x20
  void **v35; // x8
  System_String_o *v36; // x22
  TerminalPramsManager_c *v37; // x0
  struct EventSaveData_o *v38; // x23
  System_String_o *v39; // x24
  int32_t v40; // w2
  int32_t v41; // w3
  EventSaveData_c *v42; // x8
  ServantStatusBattleListViewItem_c *namespaze; // x19
  TerminalPramsManager_c *v44; // x0
  ServantStatusBattleListViewItem_o *p_mResultEventPanelRewardInfos; // x0
  System_String_c *v46; // x8
  int v47; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A57E86 & 1) == 0 )
  {
    sub_1B885B0(&EventSaveData_TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_6605/*"False"*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A57E86 = 1;
  }
  v47 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v9);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v10);
  v11 = (Il2CppObject *)System_String__Concat_61718292(
                          (System_String_o *)StringLiteral_15812/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16069/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v11,
                                                                      (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v17 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_71:
    sub_1B88814(BeforeEventSubmarineSaveData_k__BackingField, v13);
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
        if ( !byte_4A57F0A )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57F0A = 1;
        }
        v22 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v22 = TerminalPramsManager_TypeInfo;
        }
        if ( !v22->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v23 = (EventSaveData_o *)sub_1B887FC(EventSaveData_TypeInfo);
          EventSaveData___ctor(v23, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A57F0B )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57F0B = 1;
          }
          v26 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v26 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v26->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v23;
          sub_1B88554(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v23, v24, v25);
          v22 = TerminalPramsManager_TypeInfo;
        }
        if ( !v22->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v22);
        if ( !byte_4A57F0A )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57F0A = 1;
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
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v31 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v31 = (System_String_o **)&StringLiteral_1212/*"0"*/;
            v32 = *v31;
            v33 = max_length <= 2 ? (System_String_o **)&StringLiteral_1212/*"0"*/ : &ValueByArray->m_Items[2];
            v34 = *v33;
            v35 = max_length <= 3 ? &StringLiteral_6605/*"False"*/ : (void **)&ValueByArray->m_Items[3];
          }
          else
          {
            v34 = (System_String_o *)StringLiteral_1212/*"0"*/;
            v35 = &StringLiteral_6605/*"False"*/;
            v32 = (System_String_o *)StringLiteral_1212/*"0"*/;
          }
          v36 = (System_String_o *)*v35;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4A57F0A )
          {
            sub_1B885B0(&TerminalPramsManager_TypeInfo);
            byte_4A57F0A = 1;
          }
          v37 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v37 = TerminalPramsManager_TypeInfo;
          }
          v38 = v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v39 = System_Int32__ToString((int32_t)&v47, 0LL);
          if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_37098120(
                                                                              v39,
                                                                              v32,
                                                                              v34,
                                                                              v36,
                                                                              0LL);
          if ( v38 )
          {
            v38->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v38->fields.value,
              (int32_t)BeforeEventSubmarineSaveData_k__BackingField,
              v40,
              v41);
            value = v17->fields.value;
            goto LABEL_56;
          }
        }
LABEL_70:
        sub_1B8880C(BeforeEventSubmarineSaveData_k__BackingField, v13);
      }
    }
  }
LABEL_56:
  if ( !(_DWORD)value )
    goto LABEL_71;
  v42 = v17[1].klass;
  if ( !v42 )
    goto LABEL_70;
  namespaze = (ServantStatusBattleListViewItem_c *)v42->_1.namespaze;
  v44 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v44 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (ServantStatusBattleListViewItem_o *)&v44->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = namespaze;
  sub_1B88554(p_mResultEventPanelRewardInfos, (int32_t)namespaze, v14, v15);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
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
  BeforeEventSubmarineSaveData_k__BackingField = *(EventSaveData_o **)&v46->_2.instance_size;
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v15; // x4
  SchedulerTaskBase_o *v16; // x21
  SchedulerTaskBase_TaskCallback_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  TaskScheduler_o *taskScheduler; // x19
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  __int64 v29; // x0

  if ( (byte_4A57E84 & 1) == 0 )
  {
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
    byte_4A57E84 = 1;
  }
  v7 = sub_1B887FC(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = panelData;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)panelData, v12, v13);
  klass = this->klass;
  if ( *(int *)(v7 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v7 + 40) = 0;
    v16 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v7 + 24),
            *(SubmarineMapPanelData_o **)(v7 + 32),
            (bool *)(v7 + 40),
            v15);
    v17 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v17,
      (Il2CppObject *)v7,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0LL);
    if ( v16 )
    {
      v16->fields.EndCallback = v17;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->fields.EndCallback, (int32_t)v17, v18, v19);
      taskScheduler = this->fields.taskScheduler;
      v8 = sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v8 )
      {
        v21 = v8;
        v22 = sub_1B886EC(v16, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v22 )
        {
          v29 = sub_1B88830();
          sub_1B886D8(v29, 0LL);
        }
        if ( !*(_DWORD *)(v21 + 24) )
          sub_1B88814(v22, v23);
        *(_QWORD *)(v21 + 32) = v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v16, v24, v25);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v21, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1B8880C(v8, v9);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v26);
  SubmarineMapManager__ShowScannableEffect(this, v27);
  SubmarineMapManager__HideSelectedPanelEffect(this, v28);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v17; // x22
  const MethodInfo *v18; // x4

  if ( (byte_4A57E9A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
    byte_4A57E9A = 1;
  }
  v9 = sub_1B887FC(SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callback, v14, v15);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v17 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0LL);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_1B8880C(v10, v11);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v17, v18);
}


void __fastcall SubmarineMapManager__OpenSelectScannerDialog(
        SubmarineMapManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  SubmarineMapDataManager_o *submarineData; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  int32_t EventId; // w22
  System_Action_int__o *v14; // x23
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x4

  if ( (byte_4A57E98 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
    byte_4A57E98 = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_7;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (selectScannerDialog = this->fields.selectScannerDialog,
        EventId = SubmarineMapDataManager__get_EventId(submarineData, 0LL),
        v14 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v14,
          (Il2CppObject *)v5,
          Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
          0LL),
        v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL),
        !selectScannerDialog) )
  {
LABEL_7:
    sub_1B8880C(submarineData, v7);
  }
  SubmarineSelectScannerDialog__Open(selectScannerDialog, EventId, v14, v15, v16);
}


void __fastcall SubmarineMapManager__ReleaseAssets(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapAssetManager_o *assetManager; // x0
  ServantStatusBattleListViewItem_o *p_assetManager; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
  assetManager = this->fields.assetManager;
  if ( assetManager )
  {
    SubmarineMapAssetManager__Finish(assetManager, method);
    p_assetManager->klass = 0LL;
    sub_1B88554(p_assetManager, 0, v5, v6);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
  EventMapManagerBase__ReleaseAssets((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  ComponentPool_T__o *effectScanedPanelObjPool; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  ComponentPool_T__o *effectScannablePanelObjPool; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  ComponentPool_T__o *v9; // x0
  ServantStatusBattleListViewItem_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A57E9D & 1) == 0 )
  {
    sub_1B885B0(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    sub_1B885B0(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    sub_1B885B0(&Method_ComponentPool_CommonEffectComponent__Finish__);
    byte_4A57E9D = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_30FA708 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectScanedPanelObjPool, 0, v4, v5);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_30FA708 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectScannablePanelObjPool, 0, v7, v8);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (ServantStatusBattleListViewItem_o *)&this->fields.effectScanObstaclePanelObjPool;
  v9 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v9,
      (const MethodInfo_30FA708 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_1B88554(p_effectScanObstaclePanelObjPool, 0, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_2F29320 *method)
{
  bool hasValue; // w19
  bool v8; // w20
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  int v14; // s0
  UnityEngine_Component_o *v17; // x21
  UnityEngine_Transform_o *v18; // x22
  const MethodInfo_361E564 *v19; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v23; // s0
  float v24; // s1
  float v25; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo_361E564 *v27; // x2
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
    sub_1B885B0(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_Vector3__get_Value__);
    if ( !method->rgctx_data )
      sub_1BDA4E8();
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
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_51356216(
                                                  pool,
                                                  transform,
                                                  *(UnityEngine_Vector3_o *)&v14,
                                                  (const MethodInfo_30FA238 *)method->rgctx_data->_1_ComponentPool_T__Rent);
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
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
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
    sub_1B8880C(effectContainer, pool);
  }
  if ( !byte_4A55CE6 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
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
        const MethodInfo_2F2950C *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  unsigned int v10; // w22

  if ( !method->rgctx_data )
    sub_1BDA4E8();
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
        sub_1B88814(Children, v7);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_2ECEEB8 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_30FA310 *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1B8880C(Children, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v11; // x1
  __int64 v12; // x20
  System_Delegate_o **v13; // x22
  System_Delegate_o *v14; // x23
  SchedulerTaskBase_TaskCallback_o *v15; // x24
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Delegate_o *v19; // x8
  SchedulerTaskBase_TaskCallback_c *v20; // x1
  TaskScheduler_o *v21; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x0

  if ( (byte_4A57E89 & 1) == 0 )
  {
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskNone_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
    byte_4A57E89 = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = finishCallback,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v11),
        !taskScheduler)
    || (TaskScheduler__AddTask_41271180(taskScheduler, 0, RevealEachSpotsTasks, 0LL),
        v12 = sub_1B887FC(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v12, 0LL),
        !v12) )
  {
LABEL_16:
    sub_1B8880C(RevealEachSpotsTasks, v7);
  }
  v13 = (System_Delegate_o **)(v12 + 32);
  v14 = *(System_Delegate_o **)(v12 + 32);
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__,
    0LL);
  v16 = System_Delegate__Combine(v14, (System_Delegate_o *)v15, 0LL);
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
    sub_1B88ACC(v16);
  }
  *v13 = v19;
LABEL_11:
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)v19, v17, v18);
  v21 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_1B88658(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1LL);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v22 = RevealEachSpotsTasks;
  v23 = sub_1B886EC(v12, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v23 )
  {
    v27 = sub_1B88830();
    sub_1B886D8(v27, 0LL);
  }
  if ( !v22->fields._size )
    sub_1B88814(v23, v24);
  v22->fields._syncRoot = (Il2CppObject *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->fields._syncRoot, v12, v25, v26);
  if ( !v21 )
    goto LABEL_16;
  TaskScheduler__AddTask(v21, 0, (SchedulerTaskBase_array *)v22, 0LL);
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

  if ( (byte_4A57E91 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57E91 = 1;
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
                                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
    sub_1B8880C(submarineData, v5);
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
  if ( (byte_4A57EA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_1B885B0(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
    byte_4A57EA0 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1B8880C(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v6,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields._current )
        sub_1B8880C(v4, v5);
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
          (const MethodInfo_2F29320 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A57EA4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A57EA4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_1B8880C(Instance, v8);
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
      v13 = UnityEngine_Object__Instantiate_object__49297800(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v13;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p_scanRangeNotificator, (int32_t)v13, v15, v16);
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
  if ( (byte_4A57EA7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Rect__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Rect__TypeInfo);
    sub_1B885B0(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_1B885B0(&UnityEngine_Rect___TypeInfo);
    sub_1B885B0(&float___TypeInfo);
    sub_1B885B0(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    sub_1B885B0(&Submarine2DUILocationInfo_TypeInfo);
    this = (SubmarineMapManager_o *)sub_1B885B0(&SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    byte_4A57EA7 = 1;
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
          this = (SubmarineMapManager_o *)sub_1B88658(UnityEngine_Rect___TypeInfo, 1LL);
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
    sub_1B8880C(this, *(_QWORD *)&scanId);
  }
  v28 = (System_Collections_Generic_List_Rect__o *)sub_1B887FC(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v28,
    (const MethodInfo_350DD48 *)Method_System_Collections_Generic_List_Rect___ctor__);
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
      if ( !byte_4A55CE1 )
      {
        this = (SubmarineMapManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
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
          *(const MethodInfo_350E5D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
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
          (const MethodInfo_3510168 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_45:
  v44 = (Submarine2DUILocationInfo_o *)sub_1B887FC(Submarine2DUILocationInfo_TypeInfo);
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
    v52 = (SubmarineScanDialogUpsideLocationInfo_o *)sub_1B887FC(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
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
    v70 = (SubmarinScanDialogUpSideWeakLocationInfo_o *)sub_1B887FC(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
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
  this = (SubmarineMapManager_o *)sub_1B88658(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_73;
  v61 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v61
    || (LODWORD(this->fields.mapInfo) = 1065353216, (_DWORD)v61 == 1)
    || (*((float *)&this->fields.mapInfo + 1) = m_Width / v60.fields.x, (unsigned int)v61 <= 2) )
  {
LABEL_74:
    sub_1B88814(this, *(_QWORD *)&scanId);
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
  if ( (byte_4A57E9E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_1B885B0(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
    byte_4A57E9E = 1;
  }
  memset(&v6, 0, sizeof(v6));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1B8880C(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v6,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v6,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v4 )
        break;
      if ( !v6.fields._current )
        sub_1B8880C(v4, v5);
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
          (const MethodInfo_2F29320 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v6,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_4A57EA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
    byte_4A57EA2 = 1;
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
    (const MethodInfo_2F29320 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
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
  int32_t v16; // w2
  int32_t v17; // w3
  MissionNotifyManager_o *v18; // x20
  __int64 v19; // x20
  System_Delegate_o **v20; // x21
  System_Delegate_o *v21; // x22
  SchedulerTaskBase_TaskCallback_o *v22; // x23
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Delegate_o *v26; // x8
  SchedulerTaskBase_TaskCallback_c *v27; // x1
  TaskScheduler_o *v28; // x19
  MissionNotifyManager_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x0

  if ( (byte_4A57E87 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&SchedulerTaskBase___TypeInfo);
    sub_1B885B0(&SchedulerTaskNone_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__);
    sub_1B885B0(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_4A57E87 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0LL);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0LL);
  if ( !v9 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v9, v10, 0LL);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v12);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_41271180(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance,
    0LL);
  v13 = this->fields.taskScheduler;
  v14 = (SchedulerTaskBase_array *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v15);
  if ( !v14 )
    goto LABEL_22;
  v18 = Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_1B886EC(Instance, v14->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !v14->max_length )
    goto LABEL_23;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v14->m_Items, (int32_t)v18, v16, v17);
  if ( !v13
    || (TaskScheduler__AddTask(v13, 0, v14, 0LL),
        v19 = sub_1B887FC(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v19, 0LL),
        !v19) )
  {
LABEL_22:
    sub_1B8880C(Instance, v8);
  }
  v20 = (System_Delegate_o **)(v19 + 32);
  v21 = *(System_Delegate_o **)(v19 + 32);
  v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__39_1__,
    0LL);
  v23 = System_Delegate__Combine(v21, (System_Delegate_o *)v22, 0LL);
  v26 = v23;
  if ( !v23 )
    goto LABEL_16;
  v27 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v23->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v20 = v23, (SchedulerTaskBase_TaskCallback_c *)v23->klass != v27) )
  {
    sub_1B88ACC(v23);
LABEL_16:
    *v20 = v26;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)v26, v24, v25);
  v28 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_1B88658(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_22;
  v29 = Instance;
  Instance = (MissionNotifyManager_o *)sub_1B886EC(v19, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v32 = sub_1B88830();
    sub_1B886D8(v32, 0LL);
  }
  if ( !LODWORD(v29->fields.mNoDispInfos) )
LABEL_23:
    sub_1B88814(Instance, v8);
  v29->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->fields.mMissionNotifyComps, v19, v30, v31);
  if ( !v28 )
    goto LABEL_22;
  TaskScheduler__AddTask(v28, 0, (SchedulerTaskBase_array *)v29, 0LL);
}


void __fastcall SubmarineMapManager__SubsequentialOpenPanelTaskChain(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *SubsequentialOpenPanelTasks; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Action_o **p_syncRoot; // x22
  const MethodInfo *v11; // x1
  int size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v13; // x20
  System_Delegate_o *syncRoot; // x23
  SchedulerTaskBase_TaskCallback_o *v15; // x24
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  SchedulerTaskBase_TaskCallback_c *v19; // x1

  if ( (byte_4A57E88 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
    sub_1B885B0(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
    byte_4A57E88 = 1;
  }
  v5 = sub_1B887FC(SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9);
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
    ActionExtensions__Call(*p_syncRoot, 0LL);
    return;
  }
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SubsequentialOpenPanelTasks,
                                                                               size - 1,
                                                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_1B887FC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__,
    0LL);
  v16 = System_Delegate__Combine(syncRoot, (System_Delegate_o *)v15, 0LL);
  if ( v16 )
  {
    v19 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass != SchedulerTaskBase_TaskCallback_TypeInfo
      || (*p_syncRoot = (System_Action_o *)v16, (SchedulerTaskBase_TaskCallback_c *)v16->klass != v19) )
    {
      sub_1B88ACC(v16);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0LL;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_syncRoot, (int32_t)v16, v17, v18);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_1B8880C(SubsequentialOpenPanelTasks, v7);
  TaskScheduler__AddTask_41271180((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v13, 0LL);
}


void __fastcall SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0
  struct MapControl_MapInfo_o *mapInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  EventScanPanelMapRequest_o *v6; // x20
  struct MapControl_MapInfo_o *v7; // x8

  if ( (byte_4A57E7F & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager__TryInitRequest_b__31_0__);
    byte_4A57E7F = 1;
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
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  submarineData = (SubmarineMapDataManager_o *)NetworkManager__getRequest_object_(
                                                 v5,
                                                 (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v6 = (EventScanPanelMapRequest_o *)submarineData,
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_EventId(
                                                       this->fields.submarineData,
                                                       0LL),
        (v7 = this->fields.mapInfo) == 0LL)
    || !v6 )
  {
LABEL_13:
    sub_1B8880C(submarineData, method);
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

  if ( (byte_4A57E99 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    byte_4A57E99 = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, 0LL);
  if ( NewReleasedScanId >= 1 )
  {
    v5 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v5, v7, v8);
      return;
    }
LABEL_8:
    sub_1B8880C(submarineData, method);
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
  if ( (byte_4A57E8B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    this = (SubmarineMapManager_o *)sub_1B885B0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    byte_4A57E8B = 1;
  }
  memset(&v5, 0, sizeof(v5));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_1B8880C(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1B8880C(0LL, v4);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1B8880C(0LL, beforeClearQuestId);
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
  int32_t v6; // w2
  int32_t v7; // w3
  UnityEngine_GameObject_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  TerminalPramsManager_c *v10; // x0
  TerminalPramsManager_c *v11; // x0
  System_String_array *ValueByArray; // x0
  __int64 v13; // x8
  UnityEngine_GameObject_c *v14; // x8
  TitleInfoControl_o *v15; // x20
  EventDetailEntity_o *v16; // x21
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4A57E8C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__);
    sub_1B885B0(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
    byte_4A57E8C = 1;
  }
  v3 = sub_1B887FC(SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_47;
  *(_QWORD *)(v3 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)this, v6, v7);
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
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = terminalMap->fields.rootEffectP->klass;
  if ( !klass )
    goto LABEL_47;
  terminalMap = *(ScrTerminalMap_o **)&klass->_2.instance_size;
  if ( !terminalMap )
    goto LABEL_47;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)terminalMap, 0LL);
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_47;
  terminalMap = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)terminalMap,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.submarineData )
    goto LABEL_47;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)terminalMap;
  terminalMap = (ScrTerminalMap_o *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v9 )
    goto LABEL_47;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v9,
         (Il2CppObject **)(v3 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v3 + 32) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A57F0A )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57F0A = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    if ( v10->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v10->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v10);
      if ( !byte_4A57F0A )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A57F0A = 1;
      }
      v11 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v11 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v11->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_47;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v13 = *(_QWORD *)&ValueByArray->max_length;
        if ( v13 )
        {
          if ( !(_DWORD)v13 )
            sub_1B88814(ValueByArray, v5);
          *(_DWORD *)(v3 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v14 = terminalMap->fields.rootEffectP->klass;
    if ( v14 )
    {
      v15 = *(TitleInfoControl_o **)&v14->_2.instance_size;
      v16 = *(EventDetailEntity_o **)(v3 + 24);
      v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v3,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( v15 )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(v15, v16, v17, 0LL);
        return;
      }
    }
LABEL_47:
    sub_1B8880C(terminalMap, v5);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v18);
  SubmarineMapManager__ShowScannableEffect(this, v19);
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
    sub_1B8880C(0LL, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, 0LL);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v4);
  SubmarineMapManager__HideSelectedPanelEffect(this, v5);
  SubmarineMapManager__UpdateTerminalInfo(this, v6);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A57EB2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__);
    byte_4A57EB2 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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

  if ( (byte_4A57EB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A57EB3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__SetSkipAnimation((CommonUI_o *)Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A57EB4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__);
    byte_4A57EB4 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v3, v4);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4A57EB5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__);
    byte_4A57EB5 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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

  if ( (byte_4A57EB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4A57EB6 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(0LL, method);
  return SubmarineMapDataManager__get_EventId(submarineData, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1B8880C(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1B8880C(this, method);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v9; // w2
  int32_t v10; // w3

  v2 = this;
  if ( (byte_4A57EC1 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SubmarineMapManager__CoInitRequest_b__20_0__);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A57EC1 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_1B8880C(this, method);
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
  this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v5 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v6 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v6, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0LL);
  v7 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v7;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B88554(p__2__current, (int32_t)v7, v9, v10);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v9; // w2
  int32_t v10; // w3
  struct SubmarineMapAssetManager_o *v11; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  const MethodInfo *v13; // x1
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  __int64 v23; // x8
  int32_t v24; // w1
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1

  v2 = this;
  if ( (byte_4A57EC2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A57EC2 = 1;
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
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields.closedPanelTexture,
            (int32_t)ResizedTexture2D,
            v9,
            v10);
          v11 = _4__this->fields.assetManager;
          if ( v11 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v11->fields._ClosedPanelTexture_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0LL, 0LL) )
            {
              DarkTexture2D = ClosePanelTextureUtil__CreateDarkTexture2D(*p_closedPanelTexture, 0.4, 0LL);
              *p_closedPanelTexture = DarkTexture2D;
              sub_1B88554(
                (ServantStatusBattleListViewItem_o *)&_4__this->fields.closedPanelTexture,
                (int32_t)DarkTexture2D,
                v15,
                v16);
            }
            SubmarineMapManager__AdjustEachSpotsPositions(_4__this, v13);
            SubmarineMapManager__CreateContainers(_4__this, v17);
            SubmarineMapManager__CreatePanels(_4__this, v18);
            SubmarineMapManager__CreateNeverOpenSurrounds(_4__this, v19);
            SubmarineMapManager__SetGridLine(_4__this, v20);
            SubmarineMapManager__AdjustSilhouetteGimmicks(_4__this, v21);
            SubmarineMapManager__ConstructOnPartOfDialog(_4__this, v22);
            this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)_4__this->fields.submarineData;
            if ( this )
            {
              v23 = *(_QWORD *)&this[1].fields.__1__state;
              if ( v23 )
              {
                if ( *(_BYTE *)(v23 + 24) || *(_BYTE *)(v23 + 25) )
                  v24 = *(_DWORD *)(v23 + 16);
                else
                  v24 = -1;
                SubmarineMapDataManager__UpdateParams((SubmarineMapDataManager_o *)this, v24, 0LL);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, v25);
                SubmarineMapManager__HideScanObstacleEffect(_4__this, v26);
                SubmarineMapManager__ShowScanObstacleEffect(_4__this, v27);
                ActionExtensions__Call(v2->fields.finishCallback, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_30:
      sub_1B8880C(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A57EB7 & 1) == 0 )
  {
    sub_1B885B0(&SubmarineMapManager___c_TypeInfo);
    byte_4A57EB7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SubmarineMapManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, x);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_4A57EB8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__);
    byte_4A57EB8 = 1;
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
    _9__1 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !klass )
LABEL_10:
    sub_1B8880C(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v8, _9__1, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652(v4, Assets, 0LL);
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
    sub_1B8880C(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652(v7, inited, 0LL);
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

  if ( (byte_4A57EB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A57EB9 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
         (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(this, method);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A57EBA & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__);
    byte_4A57EBA = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, method);
  _9__1 = this->fields.__9__1;
  v6 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v7, v8);
  }
  if ( !v6 )
LABEL_8:
    sub_1B8880C(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v6, _9__1, v4);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1B8880C(this, scanId);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A57EBB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__);
    byte_4A57EBB = 1;
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
    _9__1 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  if ( !v8 )
LABEL_9:
    sub_1B8880C(_4__this, method);
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
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A57EBC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__);
    byte_4A57EBC = 1;
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
    sub_1B8880C(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
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
    sub_1B8880C(this, lscanId);
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
    sub_1B8880C(this, result);
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
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v6; // x8
  SubmarineMapManager_o *_4__this; // x19
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  if ( (byte_4A57EBD & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A57EBD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0LL);
  if ( !this->fields.__4__this )
    goto LABEL_22;
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.skipAnimation->klass;
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
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = Instance->fields.skipAnimation->klass;
  if ( !v6
    || (Instance = *(CommonUI_o **)&v6->_2.thread_static_fields_offset) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, v4),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(Instance, v4);
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
    sub_1B8880C(this, x);
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

  if ( (byte_4A57EBE & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_int___);
    byte_4A57EBE = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2DD57B8 *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_4A57EBF & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    byte_4A57EBF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
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
    sub_1B8880C(0LL, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_1B8880C(0LL, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(0LL, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, method);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_4A57EC0 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57EC0 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(scanAnimObj, 0LL);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, 0LL);
  return x->fields._Chain_k__BackingField == this->fields.i;
}