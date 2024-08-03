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
  __int64 v6; // x1
  int m_CancellationTokenSource; // w9
  int v8; // w10
  int v9; // w22
  __int64 v10; // x11
  int v11; // w11
  int v12; // w8
  SubmarineMapManager_o *v13; // x20
  unsigned int v14; // w21
  int v15; // w19

  if ( (byte_49F9156 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, go);
    byte_49F9156 = 1;
  }
  if ( !go )
    goto LABEL_23;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                    go,
                                    (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1B6432C(this, v6);
  }
  v9 = 0x7FFFFFFF;
LABEL_14:
  if ( v9 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48794364(
                                      go,
                                      (const MethodInfo_2E88AFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1B64324(this);
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

  if ( (byte_49F9153 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F9153 = 1;
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
        sub_1B6432C(Children, v5);
      Children = (UnityEngine_GameObject_array *)v7->m_Items[v8];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
    sub_1B64324(Children);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *v26; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  int klass; // w8
  UnityEngine_GameObject_o *v31; // x21
  unsigned int v32; // w19
  Il2CppObject *Component_object; // x22
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_Dictionary_int__object__o *v39; // x21
  int v40; // w8
  UnityEngine_GameObject_o *v41; // x22
  unsigned int v42; // w19
  Il2CppObject *v43; // x23
  Il2CppClass *v44; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x24
  __int64 v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t current; // w1
  SubmarineSilhouetteData_o **v53; // x23
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  System_Predicate_object__o *v57; // x25
  __int64 v58; // x0
  Il2CppObject *v59; // x24
  _BOOL8 v60; // x0
  const MethodInfo *v61; // x2
  SubmarineMapDataManager_o *v62; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  __int64 v64; // x1
  __int64 v65; // x2
  System_Collections_Generic_List_object__o *v66; // x23
  __int64 v67; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v69; // x0
  __int64 v70; // x1
  float32x2_t v71; // d9
  __int128 v72; // q0
  _BOOL8 v73; // x0
  __int128 v74; // q1
  int8x8_t v75; // d0
  int8x8_t v76; // d2
  UnityEngine_Transform_o *v77; // x0
  unsigned __int64 v78; // d0 OVERLAPPED
  int v79; // s1
  int v80; // s2
  float y; // [xsp+10h] [xbp-F0h]
  __int128 v83; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+70h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_49F9155 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___, v12);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___75668880, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__, v19);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v20);
    sub_1B640C8(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo, v21);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v22);
    sub_1B640C8(&System_Predicate_SrcSpotBasePrefab__TypeInfo, v23);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__, v24);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo, v25);
    byte_49F9155 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  value = 0LL;
  memset(&v85, 0, sizeof(v85));
  v26 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  klass = (int)Children[1].klass;
  v31 = Children;
  if ( klass >= 1 )
  {
    v32 = 0;
    while ( v32 < klass )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v31[1].monitor + (int)v32);
      if ( !Children )
        goto LABEL_59;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Children,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v26 )
          goto LABEL_59;
        items = v26->fields._items;
        v36 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
        ++v26->fields._version;
        if ( !items )
          goto LABEL_59;
        size = v26->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v26,
            Component_object,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = &items->obj.klass + size;
          v26->fields._size = size + 1;
          v38[4] = (Il2CppClass *)Component_object;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)Component_object, v29, v34);
        }
      }
      klass = (int)v31[1].klass;
      if ( (int)++v32 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_1B6432C(Children, v28);
  }
LABEL_17:
  v39 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                  System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo,
                                                                  v28,
                                                                  v29);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v39,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  v40 = (int)Children[1].klass;
  v41 = Children;
  if ( v40 >= 1 )
  {
    v42 = 0;
    while ( v42 < v40 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v41[1].monitor + (int)v42);
      if ( !Children )
        goto LABEL_59;
      v43 = UnityEngine_GameObject__GetComponent_object_(
              Children,
              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v43, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v43 )
          goto LABEL_59;
        v44 = v43[7].klass;
        if ( !v44 || !v39 )
          goto LABEL_59;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v39,
          HIDWORD(v44->_1.name),
          v43,
          (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v40 = (int)v41[1].klass;
      if ( (int)++v42 >= v40 )
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
    sub_1B64324(Children);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v84,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v87 = v84;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v48 = sub_1B64314(SubmarineMapManager___c__DisplayClass59_0_TypeInfo, v46, v47);
    SubmarineMapManager___c__DisplayClass59_0___ctor((SubmarineMapManager___c__DisplayClass59_0_o *)v48, 0LL);
    if ( !v48 )
      sub_1B64324(v49);
    current = (int32_t)v87.fields._current;
    *(_QWORD *)(v48 + 16) = v87.fields._current;
    v53 = (SubmarineSilhouetteData_o **)(v48 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 16), current, v50, v51);
    if ( !*(_QWORD *)(v48 + 16) )
      sub_1B64324(v54);
    if ( *(int *)(*(_QWORD *)(v48 + 16) + 20LL) > 0 )
    {
      v57 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_SrcSpotBasePrefab__TypeInfo, v55, v56);
      System_Predicate_object____ctor(
        v57,
        (Il2CppObject *)v48,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0LL);
      if ( !v26 )
        sub_1B64324(v58);
      v59 = System_Collections_Generic_List_object___Find(
              v26,
              (System_Predicate_T__o *)v57,
              (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v60 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v59, 0LL, 0LL);
      if ( !v60 )
      {
        if ( !*v53 )
          sub_1B64324(v60);
        if ( !v39 )
          sub_1B64324(v60);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v39,
               (*v53)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v62 = this->fields.submarineData;
          if ( !v62 )
            sub_1B64324(0LL);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v62,
                                                                                      *v53,
                                                                                      v61);
          v66 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                               System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                               v64,
                                                               v65);
          System_Collections_Generic_List_object____ctor_55234504(
            v66,
            SilhouetteOccupiedPanels,
            (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___75668880);
          if ( !v59 )
            sub_1B64324(v67);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v59, 0LL);
          if ( !transform )
            sub_1B64324(0LL);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          *(_QWORD *)&v83 = *(_QWORD *)&localPosition.fields.x;
          y = localPosition.fields.y;
          if ( !byte_49F7111 )
          {
            v69 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v70);
            byte_49F7111 = 1;
          }
          if ( !v66 )
            sub_1B64324(v69);
          v71.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v84,
            v66,
            (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v85 = v84;
          v72 = v83;
          *((float *)&v72 + 1) = y;
          while ( 1 )
          {
            v83 = v72;
            v73 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v85,
                    (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v73 )
              break;
            if ( !v85.fields._current )
              sub_1B64324(v73);
            v75.n64_u64[0] = *(unsigned __int64 *)((char *)&v85.fields._current[1].monitor + 4);
            *(int8x8_t *)&v74 = vbsl_s8(vcgt_f32(v75, *(float32x2_t *)&v83), *(int8x8_t *)&v83, v75);
            v76.n64_u64[0] = vadd_f32(
                               *(float32x2_t *)&v74,
                               vsub_f32(vadd_f32(v71, *(float32x2_t *)&v83), *(float32x2_t *)&v74)).n64_u64[0];
            v71.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v76, v75), v76, v75), *(float32x2_t *)&v74).n64_u64[0];
            v72 = v74;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v85,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_1B64324(0LL);
          v77 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0LL);
          if ( !v77 )
            sub_1B64324(0LL);
          v78 = vadd_f32(vmul_f32(v71, (float32x2_t)0x3F0000003F000000LL), *(float32x2_t *)&v83).n64_u64[0];
          v79 = HIDWORD(v78);
          v80 = 0;
          UnityEngine_Transform__set_localPosition(v77, *(UnityEngine_Vector3_o *)&v78, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
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
  const MethodInfo_35D2010 *v9; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v11; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v12; // 0:x0.12
  System_Nullable_Vector3__o v13; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49F9152 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Nullable_Vector2___ctor__, spot);
    this = (SubmarineMapManager_o *)sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v5);
    byte_49F9152 = 1;
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
  System_Nullable_Vector2____ctor(v12, PanelUnitSize_k__BackingField, (const MethodInfo_35D1BF0 *)method);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v8);
    byte_49F7111 = 1;
  }
  *(_QWORD *)&v13.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v13.fields.hasValue = &centerPosition;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v13, zeroVector, v9);
  if ( !spot )
LABEL_9:
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  System_Int32_array *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  CommonUI_o *v17; // x19
  int32_t v18; // w20
  SubmarineMapManager___c_c *v19; // x0
  System_Action_o *_9__49_0; // x22
  System_String_o *v21; // x21
  Il2CppObject *v22; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v28; // 0:x5.8

  if ( (byte_49F914D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_1B640C8(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, v8);
    sub_1B640C8(&SubmarineMapManager___c_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_6871/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v10);
    byte_49F914D = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = (System_Int32_array *)SubmarineMapManager__get_eventId(this, v12);
  if ( !Instance )
    goto LABEL_21;
  eventId = clsQuestCheck__GetNewPlayableEventQuestId((clsQuestCheck_o *)Instance, (int32_t)eventId, 0LL);
  if ( !eventId )
    goto LABEL_21;
  v14 = eventId;
  if ( !*(_QWORD *)&eventId->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  eventId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v14->max_length )
    goto LABEL_22;
  if ( !eventId )
    goto LABEL_21;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)eventId, v14->m_Items[1], 143, 0LL) )
    return;
  eventId = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v14->max_length )
LABEL_22:
    sub_1B6432C(eventId, v15);
  v17 = (CommonUI_o *)eventId;
  v18 = v14->m_Items[1];
  v19 = SubmarineMapManager___c_TypeInfo;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v19 = SubmarineMapManager___c_TypeInfo;
  }
  _9__49_0 = v19->static_fields->__9__49_0;
  v21 = (System_String_o *)StringLiteral_6871/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__49_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = SubmarineMapManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(_9__49_0, v22, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v24, v25);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
  if ( !v17 )
LABEL_21:
    sub_1B64324(eventId);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  SubmarineMapPanelData_o *v17; // x1
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  __int64 v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Delegate_o **v30; // x22
  System_Delegate_o *v31; // x23
  SchedulerTaskBase_TaskCallback_o *v32; // x24
  System_Delegate_o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  SchedulerTaskBase_TaskCallback_c *v36; // x1
  TaskScheduler_o *taskScheduler; // x19
  __int64 v38; // x20
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x0

  if ( (byte_49F9143 & 1) == 0 )
  {
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, panelData);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1B640C8(&Method_SubmarineMapManager_ClickPanel__, v6);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__, v8);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo, v9);
    byte_49F9143 = 1;
  }
  v10 = sub_1B64314(SubmarineMapManager___c__DisplayClass35_0_TypeInfo, panelData, method);
  SubmarineMapManager___c__DisplayClass35_0___ctor((SubmarineMapManager___c__DisplayClass35_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_28;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 24) = panelData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)panelData, v14, v15);
  v17 = *(SubmarineMapPanelData_o **)(v10 + 24);
  if ( !v17 || !this->fields.isEnableClickPanel )
    return;
  if ( !v17->fields._IsOpened_k__BackingField || !v17->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v17->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v17, v16);
    v20 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1B640E0(Method_SubmarineMapManager_ClickPanel__);
    v21 = (System_Reflection_MethodBase_o *)sub_1B640AC(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v27 = sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v22, v23);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v27, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v27 )
        {
          v30 = (System_Delegate_o **)(v27 + 32);
          v31 = *(System_Delegate_o **)(v27 + 32);
          v32 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v28, v29);
          SchedulerTaskBase_TaskCallback___ctor(
            v32,
            (Il2CppObject *)v10,
            Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__,
            0LL);
          v33 = System_Delegate__Combine(v31, (System_Delegate_o *)v32, 0LL);
          if ( v33 )
          {
            v36 = SchedulerTaskBase_TaskCallback_TypeInfo;
            if ( (SchedulerTaskBase_TaskCallback_c *)v33->klass != SchedulerTaskBase_TaskCallback_TypeInfo
              || (*v30 = v33, (SchedulerTaskBase_TaskCallback_c *)v33->klass != v36) )
            {
              sub_1B645E4(v33);
              return;
            }
          }
          else
          {
            *v30 = 0LL;
          }
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v33, v34, v35);
          taskScheduler = this->fields.taskScheduler;
          v11 = sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v11 )
          {
            v38 = v11;
            v39 = sub_1B64204(v27, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
            if ( !v39 )
            {
              v43 = sub_1B64348();
              sub_1B641F0(v43, 0LL);
            }
            if ( !*(_DWORD *)(v38 + 24) )
              sub_1B6432C(v39, v40);
            *(_QWORD *)(v38 + 32) = v27;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 32), v27, v41, v42);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v38, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1B64324(v11);
  }
  v18 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v18 = (_QWORD *)sub_1B640E0(Method_SubmarineMapManager_ClickPanel__);
  v19 = (System_Reflection_MethodBase_o *)sub_1B640AC(v18, v18[4]);
  OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49F913A & 1) == 0 )
  {
    sub_1B640C8(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo, finishCallback);
    byte_49F913A = 1;
  }
  v5 = sub_1B64314(SubmarineMapManager__CoInitRequest_d__20_TypeInfo, finishCallback, method);
  SubmarineMapManager__CoInitRequest_d__20___ctor((SubmarineMapManager__CoInitRequest_d__20_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)finishCallback, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49F913B & 1) == 0 )
  {
    sub_1B640C8(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo, finishCallback);
    byte_49F913B = 1;
  }
  v5 = sub_1B64314(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo, finishCallback, method);
  SubmarineMapManager__CoOnAfterSpotCreated_d__23___ctor(
    (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)finishCallback, v9, v10);
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
  struct SubmarineMapAssetManager_o *assetManager; // x8
  Il2CppObject *ScanConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  EventMapManagerBase_o *v15; // x0
  const MethodInfo *v16; // x2
  BaseDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v19; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  EventMapManagerBase_o *v24; // x0
  const MethodInfo *v25; // x2
  ServantStatusBattleListViewItem_o *p_newScannerDialog; // x20
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v28; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x19
  Il2CppObject *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  EventMapManagerBase_o *v33; // x0
  const MethodInfo *v34; // x2

  if ( (byte_49F9157 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___, v4);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49F9157 = 1;
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
           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v9,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    *p_scanConfirmDialog = (BaseDialog_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&this->fields.scanConfirmDialog,
      (int32_t)Component_object,
      v13,
      v14);
    EventMapManagerBase__LocateDialogToUiRoot(v15, *p_scanConfirmDialog, v16);
  }
  p_selectScannerDialog = (BaseDialog_o **)&this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(selectScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v19 = this->fields.assetManager;
    if ( !v19 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v19->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__Instantiate_object_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v9 )
      goto LABEL_28;
    v21 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v9,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    *p_selectScannerDialog = (BaseDialog_o *)v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectScannerDialog, (int32_t)v21, v22, v23);
    EventMapManagerBase__LocateDialogToUiRoot(v24, *p_selectScannerDialog, v25);
  }
  p_newScannerDialog = (ServantStatusBattleListViewItem_o *)&this->fields.newScannerDialog;
  newScannerDialog = (UnityEngine_Object_o *)this->fields.newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = (Il2CppObject *)UnityEngine_Object__op_Equality(newScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    v28 = this->fields.assetManager;
    if ( v28 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v28->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__Instantiate_object_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v9 )
      {
        v30 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v9,
                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        p_newScannerDialog->klass = (ServantStatusBattleListViewItem_c *)v30;
        sub_1B6406C(p_newScannerDialog, (int32_t)v30, v31, v32);
        EventMapManagerBase__LocateDialogToUiRoot(v33, (BaseDialog_o *)p_newScannerDialog->klass, v34);
        return;
      }
    }
LABEL_28:
    sub_1B64324(v9);
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  ServantStatusBattleListViewItem_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v6; // x20
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1

  if ( (byte_49F9140 & 1) == 0 )
  {
    sub_1B640C8(&SubmarineMapAssetManager_TypeInfo, method);
    byte_49F9140 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (ServantStatusBattleListViewItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v6 = (SubmarineMapAssetManager_o *)sub_1B64314(SubmarineMapAssetManager_TypeInfo, method, v2);
    SubmarineMapAssetManager___ctor(v6, v7);
    p_assetManager->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B6406C(p_assetManager, (int32_t)v6, v8, v9);
    if ( !p_assetManager->klass )
      sub_1B64324(0LL);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v10);
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
  int32_t v10; // w3
  struct SubmarineMapAssetManager_o *v11; // x8
  struct ScrTerminalMap_o *v12; // x9
  Il2CppObject *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v14; // x0
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct SubmarineMapAssetManager_o *v18; // x8
  struct ScrTerminalMap_o *v19; // x9
  Il2CppObject *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v21; // x0
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  v2 = this;
  if ( (byte_49F914E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, method);
    this = (SubmarineMapManager_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F914E = 1;
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
  v8 = UnityEngine_Object__Instantiate_object__49003980(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v8;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.panelContainer, (int32_t)v8, v9, v10);
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
  v15 = UnityEngine_Object__Instantiate_object__49003980(
          EffectContainerPrefab_k__BackingField,
          v14,
          (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.effectContainer, (int32_t)v15, v16, v17);
  v18 = v2->fields.assetManager;
  if ( !v18 || (v19 = v2->fields.terminalMap) == 0LL || (this = (SubmarineMapManager_o *)v19->fields.dispRoot) == 0LL )
LABEL_15:
    sub_1B64324(this);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v18->fields._GridLinePrefab_k__BackingField;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22 = UnityEngine_Object__Instantiate_object__49003980(
          GridLinePrefab_k__BackingField,
          v21,
          (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.gridLine, (int32_t)v22, v23, v24);
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
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x23
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t current; // w1
  SubmarineSilhouetteData_o **v34; // x22
  const MethodInfo *v35; // x2
  SubmarineSilhouetteData_o *v36; // x0
  _BOOL8 HasClearCondQuestId; // x0
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x2
  SubmarineMapDataManager_o *v40; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x24
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  SubmarineMapManager___c_c *v48; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v50; // x26
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_List_T__o *All; // x0
  System_Collections_Generic_List_object__o *v55; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  __int64 v58; // x1
  __int64 v59; // x2
  System_Predicate_object__o *v60; // x26
  __int64 v61; // x0
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v64; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v67; // x0
  __int64 v68; // x0
  const MethodInfo *v69; // x1
  int v70; // s0
  struct SubmarineMapDataManager_o *v73; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  Il2CppObject *v78; // x1
  struct System_Object_array *items; // x8
  _QWORD *v80; // x9
  __int64 size; // x10
  Il2CppClass **v82; // x0
  System_Object_array *v83; // x1
  const MethodInfo *v84; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  Il2CppObject *v88; // x1
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49F9170 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___75668880, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v14);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v16);
    sub_1B640C8(&System_Predicate_SubmarineMapPanelData__TypeInfo, v17);
    sub_1B640C8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v18);
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v19);
    sub_1B640C8(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__, v20);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__, v21);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo, v22);
    sub_1B640C8(&SubmarineMapManager___c_TypeInfo, v23);
    byte_49F9170 = 1;
  }
  memset(&v95, 0, sizeof(v95));
  v24 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       *(_QWORD *)&beforeClearQuestId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_1B64324(SilhouetteDataList_k__BackingField);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v94,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v95 = v94;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v95,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v29 = sub_1B64314(SubmarineMapManager___c__DisplayClass101_0_TypeInfo, v27, v28);
    SubmarineMapManager___c__DisplayClass101_0___ctor((SubmarineMapManager___c__DisplayClass101_0_o *)v29, 0LL);
    if ( !v29 )
      sub_1B64324(v30);
    current = (int32_t)v95.fields._current;
    *(_QWORD *)(v29 + 16) = v95.fields._current;
    v34 = (SubmarineSilhouetteData_o **)(v29 + 16);
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 16), current, v31, v32);
    v36 = *(SubmarineSilhouetteData_o **)(v29 + 16);
    if ( !v36 )
      sub_1B64324(0LL);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v36, beforeClearQuestId, v35);
    if ( HasClearCondQuestId )
    {
      if ( !*v34 )
        sub_1B64324(HasClearCondQuestId);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v34)->fields._ObjectQuestIds_k__BackingField, -1, 0, v38) )
      {
        v40 = this->fields.submarineData;
        if ( !v40 )
          sub_1B64324(0LL);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v40,
                                                                                    *v34,
                                                                                    v39);
        v44 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                             System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                             v42,
                                                             v43);
        System_Collections_Generic_List_object____ctor_55234504(
          v44,
          SilhouetteOccupiedPanels,
          (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___75668880);
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
          _9__101_0 = (System_Predicate_object__o *)sub_1B64314(
                                                      System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                      v46,
                                                      v47);
          System_Predicate_object____ctor(
            _9__101_0,
            v50,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0LL);
          static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          static_fields->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__101_0, (int32_t)_9__101_0, v52, v53);
        }
        if ( !v44 )
          sub_1B64324(v45);
        All = System_Collections_Generic_List_object___FindAll(
                v44,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v55 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_1B64324(0LL);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_1B64324(0LL);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v60 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_SpotInfo__TypeInfo, v58, v59);
          System_Predicate_object____ctor(
            v60,
            (Il2CppObject *)v29,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0LL);
          if ( !SpotList )
            sub_1B64324(v61);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v60,
                 (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_1B64324(0LL);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v34 )
              sub_1B64324(transform);
            v64 = transform;
            SpotId_k__BackingField = (*v34)->fields._SpotId_k__BackingField;
            if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v64 )
              sub_1B64324(GobjName);
            v67 = UnityEngine_Transform__Find(v64, GobjName, 0LL);
            if ( !v67 )
              sub_1B64324(0LL);
            *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Transform__get_localPosition(v67, 0LL);
            v73 = this->fields.submarineData;
            if ( !v73 )
              sub_1B64324(v68);
            Settings_k__BackingField = v73->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_1B64324(v68);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         *(UnityEngine_Vector3_o *)&v70,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v69);
            v78 = MoveCameraToPositionTask;
            if ( !v24 )
              sub_1B64324(MoveCameraToPositionTask);
            items = v24->fields._items;
            v80 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v24->fields._version;
            if ( !items )
              sub_1B64324(MoveCameraToPositionTask);
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v24,
                MoveCameraToPositionTask,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
            }
            else
            {
              v82 = &items->obj.klass + size;
              v24->fields._size = size + 1;
              v82[4] = (Il2CppClass *)v78;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v82 + 4), (int32_t)v78, v76, v77);
            }
          }
          v83 = System_Collections_Generic_List_object___ToArray(
                  v55,
                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v83,
                                                           v84);
          v88 = OpenPanelsAndRevealSpotsTask;
          if ( !v24 )
            sub_1B64324(OpenPanelsAndRevealSpotsTask);
          v89 = v24->fields._items;
          v90 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
          ++v24->fields._version;
          if ( !v89 )
            sub_1B64324(OpenPanelsAndRevealSpotsTask);
          v91 = v24->fields._size;
          if ( (unsigned int)v91 >= v89->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
          }
          else
          {
            v92 = &v89->obj.klass + v91;
            v24->fields._size = v91 + 1;
            v92[4] = (Il2CppClass *)v88;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v92 + 4), (int32_t)v88, v86, v87);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v95,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v24;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_49F916D & 1) == 0 )
  {
    sub_1B640C8(&SchedulerTaskNone_TypeInfo, panelData);
    byte_49F916D = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_1B64314(SchedulerTaskNone_TypeInfo, panelData, method);
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
  const MethodInfo_35D1BF0 *v5; // x2
  float y; // s10
  float x; // s11
  __int64 v11; // x1
  __int64 v12; // x1
  MapCamera_o *mapCamera; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  MapCameraPerformance_o *v16; // x0
  SchedulerTaskBase_o *v17; // x20
  System_Nullable_float__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector2__o v20; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o v21; // 0:x0.8
  System_Nullable_float__o v22; // 0:x4.8
  System_Nullable_Vector2__o v23; // 0:x0.12
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_49F9166 & 1) == 0 )
  {
    sub_1B640C8(&MapCameraPerformance_TypeInfo, method);
    sub_1B640C8(&Method_System_Nullable_Vector2___ctor__, v11);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v12);
    byte_49F9166 = 1;
  }
  LODWORD(v23.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v23.fields.hasValue = &v20;
  v24.fields.x = x;
  v24.fields.y = y;
  v20.fields.value.fields.y = 0.0;
  *(_QWORD *)&v20.fields.hasValue = 0LL;
  System_Nullable_Vector2____ctor(v23, v24, v5);
  v21 = (System_Nullable_float__o)&v19;
  v19 = 0LL;
  System_Nullable_float____ctor(v21, size, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
  v16 = (MapCameraPerformance_o *)sub_1B64314(MapCameraPerformance_TypeInfo, v14, v15);
  v22 = v19;
  v17 = (SchedulerTaskBase_o *)v16;
  MapCameraPerformance___ctor(v16, mapCamera, second, v20, v22, 15, 0LL);
  return v17;
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
  const MethodInfo *v12; // x1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SubmarineMapManager_o *v14; // x20
  int v15; // w24
  int v16; // w25
  struct SubmarineMapAssetManager_o *v17; // x8
  __int64 v18; // x21
  Il2CppObject *v19; // x22
  UnityEngine_Transform_o *transform; // x23
  SubmarineMapManager_o *v21; // x22
  int v22; // s2 OVERLAPPED
  unsigned __int64 v23; // d0 OVERLAPPED
  int v24; // s1
  int32_t v25; // w2
  int32_t v26; // w3
  SubmarineMapPanelComponent_o *v27; // x22
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  struct SubmarineMapDataManager_o *v32; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v34; // x20
  int32_t v35; // w21
  int32_t v36; // w22
  int v37; // w26
  const MethodInfo *v38; // x1
  struct SubmarineMapDataManager_o *v39; // x8
  unsigned __int64 v40; // d0 OVERLAPPED
  int v41; // s1
  int v42; // s2
  struct SubmarineMapAssetManager_o *v43; // x8
  SubmarineMapManager_o *v44; // x23
  Il2CppObject *v45; // x24
  UnityEngine_Transform_o *v46; // x25
  SubmarineMapManager_o *v47; // x24
  int v48; // s2 OVERLAPPED
  unsigned __int64 v49; // d0 OVERLAPPED
  int v50; // s1
  int32_t v51; // w2
  int32_t v52; // w3
  SubmarineMapPanelComponent_o *v53; // x24
  const MethodInfo *v54; // x2
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x2

  v2 = this;
  if ( (byte_49F9150 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    this = (SubmarineMapManager_o *)sub_1B640C8(&PanelUniqueIDUtil_TypeInfo, v5);
    byte_49F9150 = 1;
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
    sub_1B64324(this);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v14 = this;
  v15 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      v17 = v2->fields.assetManager;
      if ( !v17 )
        goto LABEL_54;
      this = (SubmarineMapManager_o *)v2->fields.panelContainer;
      if ( !this )
        goto LABEL_54;
      v18 = *((_QWORD *)&v14->fields.mapInfo + v16);
      v19 = (Il2CppObject *)v17->fields._PanelPrefab_k__BackingField;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__49003980(
                                        v19,
                                        transform,
                                        (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      if ( !this )
        goto LABEL_54;
      v21 = this;
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !v18 )
        goto LABEL_54;
      if ( !this )
        goto LABEL_54;
      v22 = 0;
      v23 = vadd_f32(
              *(float32x2_t *)(v18 + 16),
              vmul_f32(*(float32x2_t *)(v18 + 24), (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
      v24 = HIDWORD(v23);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)this,
        *(UnityEngine_Vector3_o *)(&v22 - 2),
        0LL);
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)v21,
                                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
      if ( !this )
        goto LABEL_54;
      v27 = (SubmarineMapPanelComponent_o *)this;
      this->fields.mapCamera = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mapCamera, 0, v25, v26);
      SubmarineMapPanelComponent__SetSize(v27, (ObjectDomain_o *)v18, v28);
      SubmarineMapPanelComponent__SetClosedPanelTexture(v27, (ObjectDomain_o *)v18, v2->fields.closedPanelTexture, v29);
      SubmarineMapPanelComponent__SetClosedPanelVisible(v27, 1, v30);
      if ( v15 == v16 )
        break;
      if ( (unsigned int)++v16 >= LODWORD(v14->fields.m_CancellationTokenSource) )
        sub_1B6432C(this, v12);
    }
  }
  this = (SubmarineMapManager_o *)v2->fields.submarineData;
  if ( !this )
    goto LABEL_54;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                    (SubmarineMapDataManager_o *)this,
                                    v12);
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
        v39 = v2->fields.submarineData;
        if ( !v39 )
          goto LABEL_54;
        this = (SubmarineMapManager_o *)v39->fields._PositionCalculator_k__BackingField;
        if ( !this )
          goto LABEL_54;
        v40 = vadd_f32(
                (float32x2_t)this->fields.mapInfo,
                vmul_f32(
                  vmul_f32(
                    *(float32x2_t *)&this->fields.m_CachedPtr,
                    vcvt_f32_s32(
                      vsub_s32(
                        (int32x2_t)__PAIR64__(v37, (2 * v35) | 1u),
                        (int32x2_t)this->fields.m_CancellationTokenSource))),
                  (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v41 = HIDWORD(v40);
        v42 = 0;
        this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                          *(UnityEngine_Vector3_o *)&v40,
                                          (SubmarinePanelPositionCalculator_o *)this,
                                          v38);
        v43 = v2->fields.assetManager;
        if ( !v43 )
          goto LABEL_54;
        v44 = this;
        this = (SubmarineMapManager_o *)v2->fields.panelContainer;
        if ( !this )
          goto LABEL_54;
        v45 = (Il2CppObject *)v43->fields._PanelPrefab_k__BackingField;
        v46 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__49003980(
                                          v45,
                                          v46,
                                          (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        if ( !this )
          goto LABEL_54;
        v47 = this;
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !v44 )
          goto LABEL_54;
        if ( !this )
          goto LABEL_54;
        v48 = 0;
        v49 = vadd_f32(
                *(float32x2_t *)&v44->fields.m_CachedPtr,
                vmul_f32((float32x2_t)v44->fields.m_CancellationTokenSource, (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
        v50 = HIDWORD(v49);
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          *(UnityEngine_Vector3_o *)(&v48 - 2),
          0LL);
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v47,
                                          (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
        if ( !this )
          goto LABEL_54;
        v53 = (SubmarineMapPanelComponent_o *)this;
        this->fields.mapCamera = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mapCamera, 0, v51, v52);
        SubmarineMapPanelComponent__SetSize(v53, (ObjectDomain_o *)v44, v54);
        SubmarineMapPanelComponent__SetClosedPanelTexture(
          v53,
          (ObjectDomain_o *)v44,
          v2->fields.closedPanelTexture,
          v55);
        SubmarineMapPanelComponent__SetClosedPanelVisible(v53, 1, v56);
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
  const MethodInfo_35D2010 *v19; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  SchedulerTaskCommonEffect_o *v24; // x0
  SchedulerTaskCommonEffect_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v30; // x24
  System_Delegate_o *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Delegate_o *v34; // x8
  SchedulerTaskBase_TaskCallback_c *v35; // x1
  SchedulerTaskBase_array *v36; // x22
  __int64 v37; // x1
  __int64 v38; // x2
  SchedulerTaskWaitTime_o *v39; // x23
  __int64 v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x1
  __int64 v46; // x2
  SchedulerTaskOrthostichy_o *v47; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v52; // s8
  System_Collections_Generic_List_object__o *v53; // x22
  __int64 v54; // x1
  __int64 v55; // x2
  SchedulerTaskWaitTime_o *v56; // x23
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x0
  const MethodInfo *v63; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  __int64 v65; // x1
  __int64 v66; // x2
  SchedulerTaskOrthostichy_o *v67; // x19
  int32_t v68; // w2
  int32_t v69; // w3
  SchedulerTaskBase_array *v70; // x20
  int32_t v71; // w2
  int32_t v72; // w3
  __int64 v73; // x1
  __int64 v74; // x2
  SchedulerTaskParallel_o *v75; // x19
  __int64 v77; // x0
  System_Nullable_Vector3__o v78; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v79; // 0:x0.16
  System_Nullable_Vector3__o v80; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F916A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, panelData);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v10);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v11);
    sub_1B640C8(&SchedulerTaskCommonEffect_TypeInfo, v12);
    sub_1B640C8(&SchedulerTaskOrthostichy_TypeInfo, v13);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v14);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v15);
    sub_1B640C8(&Method_SubmarineMapPanelData_OpenPanel__, v16);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v17);
    byte_49F916A = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_32;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  *(_QWORD *)&v79.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  v21 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v79.fields.hasValue = &v78;
  *(_QWORD *)&v78.fields.hasValue = 0LL;
  *(_QWORD *)&v78.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v79, LocalPosition_k__BackingField, v19);
  v24 = (SchedulerTaskCommonEffect_o *)sub_1B64314(SchedulerTaskCommonEffect_TypeInfo, v22, v23);
  *(_QWORD *)&v80.fields.hasValue = 0LL;
  *(_QWORD *)&v80.fields.value.fields.y = 0LL;
  v25 = v24;
  SchedulerTaskCommonEffect___ctor_40928444(
    v24,
    v21,
    effectScanedPanelObjPool,
    v78,
    v80,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v25 )
    goto LABEL_32;
  p_StartCallback = (System_Delegate_o **)&v25->fields.StartCallback;
  StartCallback = (System_Delegate_o *)v25->fields.StartCallback;
  v30 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v26, v27);
  SchedulerTaskBase_TaskCallback___ctor(v30, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v31 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v30, 0LL);
  v34 = v31;
  if ( v31 )
  {
    v35 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v31->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *p_StartCallback = v31;
      if ( (SchedulerTaskBase_TaskCallback_c *)v31->klass == v35 )
        goto LABEL_11;
    }
    sub_1B645E4(v31);
  }
  *p_StartCallback = v34;
LABEL_11:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v25->fields.StartCallback, (int32_t)v34, v32, v33);
  v36 = (SchedulerTaskBase_array *)sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL);
  v39 = (SchedulerTaskWaitTime_o *)sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v37, v38);
  SchedulerTaskWaitTime___ctor(v39, waitTime, 0LL);
  if ( !v36 )
    goto LABEL_32;
  if ( v39 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B64204(v39, v36->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v36->max_length )
    goto LABEL_33;
  v36->m_Items[0] = (SchedulerTaskBase_o *)v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v36->m_Items, (int32_t)v39, v41, v42);
  effectContainer = (UnityEngine_GameObject_o *)sub_1B64204(v25, v36->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( v36->max_length <= 1 )
    goto LABEL_33;
  v36->m_Items[1] = (SchedulerTaskBase_o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v36->m_Items[1], (int32_t)v25, v43, v44);
  v47 = (SchedulerTaskOrthostichy_o *)sub_1B64314(SchedulerTaskOrthostichy_TypeInfo, v45, v46);
  SchedulerTaskOrthostichy___ctor(v47, v36, 0LL);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v52 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v53 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       v48,
                                                       v49);
  System_Collections_Generic_List_object____ctor(
    v53,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v56 = (SchedulerTaskWaitTime_o *)sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v54, v55);
  SchedulerTaskWaitTime___ctor(v56, v52, 0LL);
  if ( !v53 )
    goto LABEL_32;
  items = v53->fields._items;
  v60 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v53->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v53->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v53,
      (Il2CppObject *)v56,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &items->obj.klass + size;
    v53->fields._size = size + 1;
    v62[4] = (Il2CppClass *)v56;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v56, v57, v58);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v63);
  System_Collections_Generic_List_object___AddRange(
    v53,
    RevealSpotOnPanelTasks,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v67 = (SchedulerTaskOrthostichy_o *)sub_1B64314(SchedulerTaskOrthostichy_TypeInfo, v65, v66);
  SchedulerTaskOrthostichy___ctor_40931300(v67, (System_Collections_Generic_List_SchedulerTaskBase__o *)v53, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !effectContainer )
LABEL_32:
    sub_1B64324(effectContainer);
  v70 = (SchedulerTaskBase_array *)effectContainer;
  if ( v47 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B64204(v47, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v70->max_length )
    goto LABEL_33;
  v70->m_Items[0] = (SchedulerTaskBase_o *)v47;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v70->m_Items, (int32_t)v47, v68, v69);
  if ( v67 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B64204(v67, v70->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v77 = sub_1B64348();
      sub_1B641F0(v77, 0LL);
    }
  }
  if ( v70->max_length <= 1 )
LABEL_33:
    sub_1B6432C(effectContainer, v40);
  v70->m_Items[1] = (SchedulerTaskBase_o *)v67;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->m_Items[1], (int32_t)v67, v71, v72);
  v75 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v73, v74);
  SchedulerTaskParallel___ctor(v75, v70, 0LL);
  return (SchedulerTaskBase_o *)v75;
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
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppObject *v19; // x1
  Il2CppClass **v20; // x0
  SchedulerTaskParallel_o *v21; // x19

  if ( (byte_49F916B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, panelDataArray);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v7);
    byte_49F916B = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                      panelDataArray,
                                                      method);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  v12 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1B6432C(OpenPanelAndRevealSpotTask, v10);
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
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v19;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
      }
      LODWORD(v12) = panelDataArray->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1B64324(OpenPanelAndRevealSpotTask);
  }
LABEL_13:
  v21 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v10, v11);
  SchedulerTaskParallel___ctor_40932332(v21, (System_Collections_Generic_List_SchedulerTaskBase__o *)v8, 0LL);
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
  struct SubmarineMapAssetManager_o *v17; // x8
  UnityEngine_GameObject_o *v18; // x0
  Il2CppObject *current; // x20
  Il2CppObject *v20; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v22; // x0
  UnityEngine_GameObject_o *v23; // x22
  Il2CppObject *Component_object; // x0
  const MethodInfo *v25; // x1
  struct SubmarineMapDataManager_o *v26; // x8
  Il2CppObject *v27; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v29; // s8
  float v30; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  ObjectDomain_o *v34; // x23
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  int32_t v38; // w3
  __int64 v39; // x1
  __int64 v40; // x2
  System_Action_object__o *v41; // x21
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49F914F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_SubmarineMapPanelData__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    this = (SubmarineMapManager_o *)sub_1B640C8(&Method_SubmarineMapManager_ClickPanel__, v10);
    byte_49F914F = 1;
  }
  memset(&v44, 0, sizeof(v44));
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
              (System_Collections_Generic_List_Enumerator_T__o *)&v43,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v44 = v43;
            while ( 1 )
            {
              v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v44,
                      (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v16 )
                break;
              v17 = v2->fields.assetManager;
              if ( !v17 )
                sub_1B64324(v16);
              v18 = v2->fields.panelContainer;
              if ( !v18 )
                sub_1B64324(0LL);
              current = v44.fields._current;
              v20 = (Il2CppObject *)v17->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v18, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v22 = UnityEngine_Object__Instantiate_object__49003980(
                      v20,
                      transform,
                      (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
              v23 = (UnityEngine_GameObject_o *)v22;
              if ( !v22 )
                sub_1B64324(0LL);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v22,
                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v26 = v2->fields.submarineData;
              if ( !v26 )
                sub_1B64324(Component_object);
              if ( !current )
                sub_1B64324(Component_object);
              v27 = Component_object;
              PositionCalculator_k__BackingField = v26->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_1B64324(0LL);
              v29 = PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.x
                                  * (float)(((2 * LODWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField))
                          * 0.5);
              v30 = PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.y
                                  * (float)(((2 * HIDWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField))
                          * 0.5);
              v45.fields.z = 0.0;
              v45.fields.x = v29;
              v45.fields.y = v30;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v45,
                                    PositionCalculator_k__BackingField,
                                    v25);
              if ( !v27 )
                sub_1B64324(ClosedPanelDomain);
              v34 = ClosedPanelDomain;
              v27[3].monitor = 0LL;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v27[3].monitor, 0, v32, v33);
              v46.fields.z = 0.0;
              v46.fields.x = v29;
              v46.fields.y = v30;
              GameObjectExtensions__SetLocalPosition(v23, v46, 0LL);
              SubmarineMapPanelComponent__SetSize((SubmarineMapPanelComponent_o *)v27, v34, v35);
              SubmarineMapPanelComponent__SetClosedPanelTexture(
                (SubmarineMapPanelComponent_o *)v27,
                v34,
                v2->fields.closedPanelTexture,
                v36);
              current[3].klass = (Il2CppClass *)v27;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[3], (int32_t)v27, v37, v38);
              v41 = (System_Action_object__o *)sub_1B64314(System_Action_SubmarineMapPanelData__TypeInfo, v39, v40);
              System_Action_object____ctor(
                v41,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                0LL);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v41,
                v42);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v44,
              (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_1B64324(this);
      }
    }
  }
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealEachSpotsTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  void *Children; // x0
  __int64 v10; // x1
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w23
  Il2CppObject *Component_object; // x22
  const MethodInfo *v15; // x2

  if ( (byte_49F916E & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F916E = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
        sub_1B6432C(Children, v10);
      Children = (void *)*((_QWORD *)v12 + (int)v13 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v15);
        if ( !v8 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v8,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v8;
    }
LABEL_15:
    sub_1B64324(Children);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v8;
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
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  SchedulerTaskNone_o *v25; // x23
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_object__o *SpotList; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  System_Predicate_object__o *v35; // x24
  __int64 v36; // x8
  UnityEngine_Transform_o *v37; // x21
  int32_t v38; // w22
  UnityEngine_Object_o *v39; // x21
  Il2CppObject *Component_object; // x1
  const MethodInfo *v42; // x2

  if ( (byte_49F9169 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___, panelData);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&System_Predicate_MapControl_SpotInfo__TypeInfo, v10);
    sub_1B640C8(&SchedulerTaskNone_TypeInfo, v11);
    sub_1B640C8(&SrcSpotBasePrefab_TypeInfo, v12);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__, v13);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo, v14);
    byte_49F9169 = 1;
  }
  v15 = sub_1B64314(SubmarineMapManager___c__DisplayClass94_0_TypeInfo, panelData, method);
  SubmarineMapManager___c__DisplayClass94_0___ctor((SubmarineMapManager___c__DisplayClass94_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_25;
  *(_QWORD *)(v15 + 16) = panelData;
  v19 = v15 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)panelData, v17, v18);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v25 = (SchedulerTaskNone_o *)sub_1B64314(SchedulerTaskNone_TypeInfo, v23, v24);
  SchedulerTaskNone___ctor(v25, 0LL);
  if ( !v22 )
    goto LABEL_25;
  items = v22->fields._items;
  v29 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v22->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)v25,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    v22->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v25, v26, v27);
  }
  if ( !*(_QWORD *)v19 || *(int *)(*(_QWORD *)v19 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v35 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_MapControl_SpotInfo__TypeInfo, v33, v34);
  System_Predicate_object____ctor(
    v35,
    (Il2CppObject *)v15,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__,
    0LL);
  if ( !SpotList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Find(
          SpotList,
          (System_Predicate_T__o *)v35,
          (const MethodInfo_34ADD3C *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_25;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v36 = *(_QWORD *)v19;
  if ( !*(_QWORD *)v19 )
    goto LABEL_25;
  v37 = (UnityEngine_Transform_o *)mapInfo;
  v38 = *(_DWORD *)(v36 + 40);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v38, 0LL);
  if ( !v37 )
    goto LABEL_25;
  v39 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v37, (System_String_o *)mapInfo, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  if ( !v39 )
LABEL_25:
    sub_1B64324(mapInfo);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v39,
                       (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v42);
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
  SpotEntity_o *Mine; // x21
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0

  if ( (byte_49F916F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, spot);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_1B640C8(&SubmarineLightenSpotPerformance_TypeInfo, v8);
    sub_1B640C8(&SubmarineRevealSpotPerformance_TypeInfo, v9);
    byte_49F916F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       spot,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v13);
  v16 = sub_1B64314(SubmarineRevealSpotPerformance_TypeInfo, v14, v15);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v16, 0LL);
  *(_QWORD *)(v16 + 48) = spot;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 48), (int32_t)spot, v17, v18);
  if ( !v10 )
    goto LABEL_20;
  items = v10->fields._items;
  v22 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v16,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v24[4] = (Il2CppClass *)v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 4), v16, v19, v20);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  v27 = sub_1B64314(SubmarineLightenSpotPerformance_TypeInfo, v25, v26);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v27, 0LL);
  *(_QWORD *)(v27 + 48) = spot;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 48), (int32_t)spot, v28, v29);
  v32 = v10->fields._items;
  v33 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v10->fields._version;
  if ( !v32 )
LABEL_20:
    sub_1B64324(mMapCtrl_SpotInfo);
  v34 = v10->fields._size;
  if ( (unsigned int)v34 >= v32->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v27,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    v10->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), v27, v30, v31);
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
  const MethodInfo *v25; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  float ScanOpenPanelInterval; // s8
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  __int64 v30; // x2
  SubmarineMapManager___c_c *v31; // x8
  System_Collections_Generic_List_object__o *v32; // x21
  System_Predicate_object__o *_9__97_0; // x22
  Il2CppObject *v34; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  SubmarineMapManager___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v44; // x23
  struct SubmarineMapManager___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w23
  __int64 v49; // x1
  __int64 v50; // x2
  SubmarineMapManager___c__DisplayClass97_0_o *v51; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  int v54; // w29
  float v55; // s9
  System_Predicate_object__o *v56; // x23
  System_Collections_Generic_List_T__o *v57; // x23
  __int64 v58; // x1
  __int64 v59; // x2
  System_Collections_Generic_List_object__o *v60; // x0
  _BOOL8 v61; // x0
  const MethodInfo *v62; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v64; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v66; // x2
  float v67; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  Il2CppObject *v71; // x1
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v77; // w8
  SchedulerTaskParallel_o *v78; // x19
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_49F916C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___, *(_QWORD *)&scanId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v9);
    sub_1B640C8(&System_Func_SubmarineScanEvent__int__TypeInfo, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v15);
    sub_1B640C8(&System_Predicate_SubmarineScanEvent__TypeInfo, v16);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v17);
    sub_1B640C8(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__, v18);
    sub_1B640C8(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__, v19);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__, v20);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo, v21);
    sub_1B640C8(&SubmarineMapManager___c_TypeInfo, v22);
    byte_49F916C = 1;
  }
  memset(&v81, 0, sizeof(v81));
  v23 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       *(_QWORD *)&scanId,
                                                       panelData);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_48;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_48;
  ScanOpenPanelInterval = SubmarineSettingsManager__GetScanOpenPanelInterval(Settings_k__BackingField, scanId, v25);
  Settings_k__BackingField = (SubmarineSettingsManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                                             scanId,
                                                             panelData,
                                                             this->fields.submarineData,
                                                             v28);
  v31 = SubmarineMapManager___c_TypeInfo;
  v32 = (System_Collections_Generic_List_object__o *)Settings_k__BackingField;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v31 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_0 = (System_Predicate_object__o *)v31->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = SubmarineMapManager___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__97_0 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_SubmarineScanEvent__TypeInfo, v29, v30);
    System_Predicate_object____ctor(
      _9__97_0,
      v34,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__,
      0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__97_0, (int32_t)_9__97_0, v36, v37);
  }
  if ( !v32 )
    goto LABEL_48;
  All = System_Collections_Generic_List_object___FindAll(
          v32,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v41 = SubmarineMapManager___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v41 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_1 = (System_Func_object__int__o *)v41->static_fields->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = SubmarineMapManager___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v41->static_fields->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_SubmarineScanEvent__int__TypeInfo, v39, v40);
    System_Func_object__int____ctor(
      _9__97_1,
      v44,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__,
      0LL);
    v45 = SubmarineMapManager___c_TypeInfo->static_fields;
    v45->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v45->__9__97_1, (int32_t)_9__97_1, v46, v47);
  }
  v48 = System_Linq_Enumerable__Max_object_(
          v42,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_2E61D74 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v51 = (SubmarineMapManager___c__DisplayClass97_0_o *)sub_1B64314(
                                                         SubmarineMapManager___c__DisplayClass97_0_TypeInfo,
                                                         v49,
                                                         v50);
  SubmarineMapManager___c__DisplayClass97_0___ctor(v51, 0LL);
  if ( !v51 )
LABEL_48:
    sub_1B64324(Settings_k__BackingField);
  v54 = v48 + 1;
  v51->fields.i = 0;
  if ( v48 + 1 >= 1 )
  {
    v55 = 0.0;
    do
    {
      v56 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_SubmarineScanEvent__TypeInfo, v52, v53);
      System_Predicate_object____ctor(
        v56,
        (Il2CppObject *)v51,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0LL);
      if ( !v42 )
        goto LABEL_48;
      v57 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v42,
              (System_Predicate_T__o *)v56,
              (const MethodInfo_34ADDE4 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v60 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                           v58,
                                                           v59);
      System_Collections_Generic_List_object____ctor(
        v60,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v57 )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v80,
        (System_Collections_Generic_List_object__o *)v57,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v81 = v80;
      while ( 1 )
      {
        v61 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v81,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v61 )
          break;
        current = v81.fields._current;
        if ( !v81.fields._current )
          sub_1B64324(v61);
        v64 = this->fields.submarineData;
        if ( !v64 )
          sub_1B64324(0LL);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v64,
                           (int32_t)v81.fields._current[1].klass,
                           HIDWORD(v81.fields._current[1].klass),
                           v62);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v67,
                                v66);
            v71 = (Il2CppObject *)HitObstractTask;
            if ( !v23 )
              sub_1B64324(HitObstractTask);
            items = v23->fields._items;
            v73 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1B64324(HitObstractTask);
            size = v23->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              v71,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v55,
                                           v66);
            v71 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v23 )
              sub_1B64324(OpenPanelAndRevealSpotTask);
            items = v23->fields._items;
            v73 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1B64324(OpenPanelAndRevealSpotTask);
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_32:
            v75 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v75[4] = (Il2CppClass *)v71;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v71, v69, v70);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v81,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v55 = ScanOpenPanelInterval + v55;
      v77 = v51->fields.i + 1;
      v51->fields.i = v77;
    }
    while ( v77 < v54 );
  }
  v78 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v52, v53);
  SchedulerTaskParallel___ctor_40932332(v78, (System_Collections_Generic_List_SchedulerTaskBase__o *)v23, 0LL);
  return (SchedulerTaskBase_o *)v78;
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
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  __int64 v38; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v41; // d11
  float32x2_t v42; // d9
  int32x2_t v43; // d10
  float32x2_t v44; // d8
  System_Collections_Generic_List_object__o *v45; // x19
  const MethodInfo *v46; // x1
  struct SubmarineMapDataManager_o *v47; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v49; // d0 OVERLAPPED
  float v50; // s8
  int v51; // s2
  int v52; // s1
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x1
  Il2CppClass **v59; // x0
  const MethodInfo *v60; // x2
  Il2CppObject *ScanAnimObjectPrefab; // x22
  const MethodInfo *v62; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v64; // s2
  float v65; // s0
  float v66; // s1
  float v67; // s9
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v69; // x0
  __int64 v70; // x24
  int32_t v71; // w2
  int32_t v72; // w3
  const MethodInfo *v73; // x1
  SubmarineScannerComponent_o *Component_object; // x22
  float32x2_t v75; // d0
  __int64 v76; // x1
  __int64 v77; // x2
  const MethodInfo *v78; // x1
  struct SubmarineMapDataManager_o *v79; // x8
  struct SubmarineSettingsManager_o *v80; // x8
  int32_t v81; // w2
  int32_t v82; // w3
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x1
  Il2CppClass **v87; // x0
  const MethodInfo *v88; // x1
  float JumpStartTime; // s10
  __int64 v90; // x1
  __int64 v91; // x2
  SchedulerTaskWaitTime_o *v92; // x25
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 p_StartCallback; // x25
  ServantStatusBattleListViewItem_o *v96; // x26
  System_Delegate_o *StartCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v98; // x27
  System_Delegate_o *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_Delegate_o *v102; // x8
  SchedulerTaskBase_TaskCallback_c *v103; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v105; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v106; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v109; // x0
  __int64 v110; // x25
  int32_t v111; // w2
  int32_t v112; // w3
  __int64 v113; // x1
  __int64 v114; // x2
  System_String_o *v115; // x27
  SchedulerTaskWaitLoadAsset_o *v116; // x26
  int32_t v117; // w2
  int32_t v118; // w3
  struct System_Object_array *v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  Il2CppClass **v122; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  __int64 v125; // x1
  int32_t v126; // w2
  int32_t v127; // w3
  __int64 v128; // x1
  __int64 v129; // x1
  __int64 v130; // x2
  float v131; // s10
  __int64 v132; // x1
  __int64 v133; // x2
  System_Delegate_o *v134; // x27
  SchedulerTaskBase_TaskCallback_o *v135; // x28
  System_Delegate_o *v136; // x0
  int32_t v137; // w2
  int32_t v138; // w3
  SchedulerTaskBase_TaskCallback_c *v139; // x1
  int32_t v140; // w2
  int32_t v141; // w3
  struct System_Object_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  Il2CppClass **v145; // x0
  const MethodInfo *v146; // x1
  float SelectedPanelEffecFinishTime; // s10
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x1
  __int64 v151; // x2
  System_Delegate_o *v152; // x27
  SchedulerTaskBase_TaskCallback_o *v153; // x28
  System_Delegate_o *v154; // x0
  int32_t v155; // w2
  int32_t v156; // w3
  SchedulerTaskBase_TaskCallback_c *v157; // x1
  __int64 *v158; // x23
  const MethodInfo *v159; // x1
  __int64 v160; // x1
  const MethodInfo_35D1BF0 *v161; // x2
  float JumpDuration; // s10
  float x; // s0
  float32x2_t v164; // d12
  MapCamera_o *mapCamera; // x21
  float v166; // s1
  __int64 v167; // x1
  __int64 v168; // x2
  MapCameraPerformance_o *v169; // x0
  SchedulerTaskBase_o *v170; // x26
  UnityEngine_GameObject_o *v171; // x24
  __int64 v172; // x1
  __int64 v173; // x2
  SchedulerTaskMovePerformance_o *v174; // x0
  SchedulerTaskBase_o *v175; // x21
  __int64 v176; // x1
  int32_t v177; // w2
  int32_t v178; // w3
  SchedulerTaskBase_array *v179; // x24
  int32_t v180; // w2
  int32_t v181; // w3
  __int64 v182; // x1
  __int64 v183; // x2
  const MethodInfo *v184; // x1
  __int64 v185; // x1
  __int64 v186; // x2
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8
  System_String_o *v190; // x27
  __int64 v191; // x1
  __int64 v192; // x2
  System_Delegate_o *v193; // x27
  SchedulerTaskBase_TaskCallback_o *v194; // x28
  System_Delegate_o *v195; // x0
  int32_t v196; // w2
  int32_t v197; // w3
  SchedulerTaskBase_TaskCallback_c *v198; // x1
  __int64 v199; // x20
  int32_t v200; // w2
  int32_t v201; // w3
  __int64 v202; // x24
  int32_t v203; // w2
  int32_t v204; // w3
  int32_t v205; // w2
  int32_t v206; // w3
  __int64 v207; // x1
  __int64 v208; // x2
  SchedulerTaskOrthostichy_o *v209; // x21
  int32_t v210; // w2
  int32_t v211; // w3
  __int64 v212; // x1
  __int64 v213; // x2
  SchedulerTaskParallel_o *v214; // x21
  const MethodInfo *v215; // x1
  float TimeToStartOpenPanel; // s8
  __int64 v217; // x1
  __int64 v218; // x2
  SchedulerTaskWaitTime_o *v219; // x20
  int32_t v220; // w2
  int32_t v221; // w3
  struct System_Object_array *v222; // x8
  _QWORD *v223; // x9
  __int64 v224; // x10
  Il2CppClass **v225; // x0
  int32_t v226; // w2
  int32_t v227; // w3
  struct System_Object_array *v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  Il2CppClass **v231; // x0
  int32_t v232; // w2
  int32_t v233; // w3
  struct System_Object_array *v234; // x8
  _QWORD *v235; // x9
  __int64 v236; // x10
  Il2CppClass **v237; // x0
  __int64 v239; // x0
  SchedulerTaskWaitTime_o *v240; // [xsp+8h] [xbp-E8h]
  float v241; // [xsp+20h] [xbp-D0h]
  float v242; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v247; // 0:x4.8
  System_Nullable_Vector2__o v248; // 0:x0.12
  UnityEngine_Vector3_o v249; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v250; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v251; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v252; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_49F9168 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPanelScanMaster___, panelData);
    sub_1B640C8(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___, v8);
    sub_1B640C8(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v12);
    sub_1B640C8(&MapCameraPerformance_TypeInfo, v13);
    sub_1B640C8(&Method_System_Nullable_Vector2___ctor__, v14);
    sub_1B640C8(&Method_System_Nullable_float___ctor__, v15);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v18);
    sub_1B640C8(&SchedulerTaskMovePerformance_TypeInfo, v19);
    sub_1B640C8(&SchedulerTaskOrthostichy_TypeInfo, v20);
    sub_1B640C8(&SchedulerTaskParallel_TypeInfo, v21);
    sub_1B640C8(&SchedulerTaskSimpleAnimation_TypeInfo, v22);
    sub_1B640C8(&SchedulerTaskWaitLoadAsset_TypeInfo, v23);
    sub_1B640C8(&SchedulerTaskWaitTime_TypeInfo, v24);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1B640C8(&SoundManager_TypeInfo, v26);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v27);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__, v28);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__, v29);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__, v30);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__, v31);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo, v32);
    byte_49F9168 = 1;
  }
  v33 = sub_1B64314(SubmarineMapManager___c__DisplayClass93_0_TypeInfo, panelData, *(_QWORD *)&scanId);
  SubmarineMapManager___c__DisplayClass93_0___ctor((SubmarineMapManager___c__DisplayClass93_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_131;
  *(_QWORD *)(v33 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 32), (int32_t)this, v35, v36);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_131;
  if ( !panelData )
    goto LABEL_131;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_131;
  v41.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v42.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v43.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v44.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v47 = this->fields.submarineData;
  if ( !v47 )
    goto LABEL_131;
  Settings_k__BackingField = v47->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_131;
  v49 = vadd_f32(
          v44,
          vmul_f32(
            vmul_f32(v42, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v41, 1uLL).n64_u64[0] | 0x100000001LL), v43))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v50 = *((float *)&v49 + 1);
  v51 = 0;
  v52 = HIDWORD(v49);
  value = (UnityEngine_Vector2_o)v49;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v49,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v46);
  if ( !v45 )
    goto LABEL_131;
  items = v45->fields._items;
  v56 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v45->fields._version;
  if ( !items )
    goto LABEL_131;
  v57 = v45->fields._size;
  v58 = MoveCameraToPositionTask;
  if ( (unsigned int)v57 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v45,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = &items->obj.klass + v57;
    v45->fields._size = v57 + 1;
    v59[4] = (Il2CppClass *)v58;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), v58, v53, v54);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_131;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_131;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v45;
  if ( !this->fields.assetManager )
    goto LABEL_131;
  ScanAnimObjectPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                           this->fields.assetManager,
                                           *(_DWORD *)(MoveCameraToPositionTask + 56),
                                           v60);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanAnimObjectPrefab, 0LL, 0LL) )
  {
    HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v62);
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
      *(UnityEngine_Vector3_o *)(&v64 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                               0LL);
      MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
      v242 = v65;
      v241 = v66;
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v67 = v64;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v69 = UnityEngine_Object__Instantiate_object__49003980(
              ScanAnimObjectPrefab,
              transform,
              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      *(_QWORD *)(v33 + 16) = v69;
      v70 = v33 + 16;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)v69, v71, v72);
      v249.fields.y = v241;
      v249.fields.x = v242;
      v249.fields.z = v67;
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v33 + 16), v249, 0LL);
      MoveCameraToPositionTask = *(_QWORD *)(v33 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
      Component_object = (SubmarineScannerComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                          *(UnityEngine_GameObject_o **)v70,
                                                          (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_49F7113 )
      {
        sub_1B640C8(&System_Math_TypeInfo, v73);
        byte_49F7113 = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !Component_object )
        goto LABEL_131;
      v75.n64_u64[0] = vsub_f32((float32x2_t)__PAIR64__(LODWORD(v241), LODWORD(v242)), (float32x2_t)value).n64_u64[0];
      SubmarineScannerComponent__PrepareAnimation(
        Component_object,
        sqrtf((float)(v67 * v67) + vaddv_f32(vmul_f32(v75, v75))),
        v73);
      if ( !Component_object->fields.state )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v45;
      v45 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                           v76,
                                                           v77);
      System_Collections_Generic_List_object____ctor(
        v45,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v79 = this->fields.submarineData;
      if ( !v79 )
        goto LABEL_131;
      v80 = v79->fields._Settings_k__BackingField;
      if ( !v80 )
        goto LABEL_131;
      v250.fields.y = v241;
      v250.fields.x = v242;
      v250.fields.z = v67;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            v250,
                                            1.0,
                                            v80->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v78);
      if ( !v45 )
        goto LABEL_131;
      v83 = v45->fields._items;
      v84 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v45->fields._version;
      if ( !v83 )
        goto LABEL_131;
      v85 = v45->fields._size;
      v86 = MoveCameraToPositionTask;
      if ( (unsigned int)v85 >= v83->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = &v83->obj.klass + v85;
        v45->fields._size = v85 + 1;
        v87[4] = (Il2CppClass *)v86;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 4), v86, v81, v82);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(Component_object, v88);
      v92 = (SchedulerTaskWaitTime_o *)sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v90, v91);
      SchedulerTaskWaitTime___ctor(v92, JumpStartTime, 0LL);
      if ( !v92 )
        goto LABEL_131;
      v240 = v92;
      StartCallback = (System_Delegate_o *)v92->fields.StartCallback;
      p_StartCallback = (__int64)&v92->fields.StartCallback;
      v96 = (ServantStatusBattleListViewItem_o *)StartCallback;
      v98 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v93, v94);
      SchedulerTaskBase_TaskCallback___ctor(
        v98,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0LL);
      v99 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v98, 0LL);
      v102 = v99;
      if ( v99 )
      {
        v103 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v99->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        *(_QWORD *)p_StartCallback = v99;
        if ( (SchedulerTaskBase_TaskCallback_c *)v99->klass != v103 )
          goto LABEL_103;
      }
      else
      {
        *(_QWORD *)p_StartCallback = 0LL;
      }
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p_StartCallback, (int32_t)v99, v100, v101);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_131;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v105 = this->fields.playingScanVoiceData;
        if ( !v105 )
          goto LABEL_131;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v105->fields.assetName, 0LL);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v106 = this->fields.playingScanVoiceData;
          if ( !v106 )
            goto LABEL_131;
          assetName = v106->fields.assetName;
          vcName = v106->fields.vcName;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
        }
      }
      v109 = GameObjectExtensions__SafeGetComponent_object_(
               *(UnityEngine_GameObject_o **)(v33 + 16),
               (const MethodInfo_2E899C0 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v33 + 24) = v109;
      v110 = v33 + 24;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v33 + 24), (int32_t)v109, v111, v112);
      if ( !*(_QWORD *)(v33 + 24) )
        goto LABEL_131;
      v115 = *(System_String_o **)(*(_QWORD *)(v33 + 24) + 56LL);
      v116 = (SchedulerTaskWaitLoadAsset_o *)sub_1B64314(SchedulerTaskWaitLoadAsset_TypeInfo, v113, v114);
      SchedulerTaskWaitLoadAsset___ctor(v116, v115, 0LL);
      v119 = v45->fields._items;
      v120 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v45->fields._version;
      if ( !v119 )
        goto LABEL_131;
      v121 = v45->fields._size;
      if ( (unsigned int)v121 >= v119->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          (Il2CppObject *)v116,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
      }
      else
      {
        v122 = &v119->obj.klass + v121;
        v45->fields._size = v121 + 1;
        v122[4] = (Il2CppClass *)v116;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v122 + 4), (int32_t)v116, v117, v118);
      }
      if ( !*(_QWORD *)v110 )
        goto LABEL_131;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v125 = *(_QWORD *)(*(_QWORD *)v110 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v125;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(MoveCameraToPositionTask + 16), v125, v123, v124);
      if ( !*(_QWORD *)v110
        || (MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData) == 0
        || (v128 = *(_QWORD *)(*(_QWORD *)v110 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v128,
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(MoveCameraToPositionTask + 24), v128, v126, v127),
            !*(_QWORD *)v110)
        || (v131 = *(float *)(*(_QWORD *)v110 + 32LL),
            p_StartCallback = sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v129, v130),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)p_StartCallback, v131, 0LL),
            !p_StartCallback) )
      {
LABEL_131:
        sub_1B64324(MoveCameraToPositionTask);
      }
      v96 = (ServantStatusBattleListViewItem_o *)(p_StartCallback + 24);
      v134 = *(System_Delegate_o **)(p_StartCallback + 24);
      v135 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v132, v133);
      SchedulerTaskBase_TaskCallback___ctor(
        v135,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0LL);
      v136 = System_Delegate__Combine(v134, (System_Delegate_o *)v135, 0LL);
      v102 = v136;
      if ( v136 )
      {
        v139 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v136->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        v96->klass = (ServantStatusBattleListViewItem_c *)v136;
        if ( (SchedulerTaskBase_TaskCallback_c *)v136->klass != v139 )
          goto LABEL_103;
      }
      else
      {
        v96->klass = 0LL;
      }
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(p_StartCallback + 24), (int32_t)v136, v137, v138);
      v142 = v45->fields._items;
      v143 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v45->fields._version;
      if ( !v142 )
        goto LABEL_131;
      v144 = v45->fields._size;
      if ( (unsigned int)v144 >= v142->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v45,
          (Il2CppObject *)p_StartCallback,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
      }
      else
      {
        v145 = &v142->obj.klass + v144;
        v45->fields._size = v144 + 1;
        v145[4] = (Il2CppClass *)p_StartCallback;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v145 + 4), p_StartCallback, v140, v141);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(Component_object, v146);
      p_StartCallback = sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v148, v149);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)p_StartCallback, SelectedPanelEffecFinishTime, 0LL);
      if ( !p_StartCallback )
        goto LABEL_131;
      v96 = (ServantStatusBattleListViewItem_o *)(p_StartCallback + 32);
      v152 = *(System_Delegate_o **)(p_StartCallback + 32);
      v153 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v150, v151);
      SchedulerTaskBase_TaskCallback___ctor(
        v153,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0LL);
      v154 = System_Delegate__Combine(v152, (System_Delegate_o *)v153, 0LL);
      v102 = v154;
      if ( v154 )
      {
        v157 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v154->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_103;
        v96->klass = (ServantStatusBattleListViewItem_c *)v154;
        v158 = &qword_49F7000;
        if ( (SchedulerTaskBase_TaskCallback_c *)v154->klass != v157 )
          goto LABEL_103;
      }
      else
      {
        v96->klass = 0LL;
        v158 = &qword_49F7000;
      }
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(p_StartCallback + 32), (int32_t)v154, v155, v156);
      *(_BYTE *)(p_StartCallback + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration(Component_object, v159);
      if ( !*((_BYTE *)v158 + 275) )
      {
        sub_1B640C8(&System_Math_TypeInfo, v160);
        *((_BYTE *)v158 + 275) = 1;
      }
      x = value.fields.x;
      v164.n64_u64[0] = vsub_f32((float32x2_t)value, (float32x2_t)__PAIR64__(LODWORD(v241), LODWORD(v242))).n64_u64[0];
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        x = value.fields.x;
      }
      mapCamera = this->fields.mapCamera;
      position.fields.value.fields.y = 0.0;
      LODWORD(v248.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&v248.fields.hasValue = &position;
      v166 = v50;
      *(_QWORD *)&position.fields.hasValue = 0LL;
      System_Nullable_Vector2____ctor(v248, *(UnityEngine_Vector2_o *)&x, v161);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, 1.0, (const MethodInfo_35CFFAC *)Method_System_Nullable_float___ctor__);
      v169 = (MapCameraPerformance_o *)sub_1B64314(MapCameraPerformance_TypeInfo, v167, v168);
      v247 = size;
      v170 = (SchedulerTaskBase_o *)v169;
      MapCameraPerformance___ctor(v169, mapCamera, JumpDuration, position, v247, 0, 0LL);
      v171 = *(UnityEngine_GameObject_o **)v70;
      v174 = (SchedulerTaskMovePerformance_o *)sub_1B64314(SchedulerTaskMovePerformance_TypeInfo, v172, v173);
      v252.fields.z = 0.0;
      v251.fields.y = v241;
      v251.fields.x = v242;
      v251.fields.z = v67;
      v252.fields.x = value.fields.x;
      v252.fields.y = v50;
      v175 = (SchedulerTaskBase_o *)v174;
      SchedulerTaskMovePerformance___ctor(
        v174,
        v171,
        v251,
        v252,
        sqrtf((float)((float)(0.0 - v67) * (float)(0.0 - v67)) + vaddv_f32(vmul_f32(v164, v164))) / JumpDuration,
        0,
        0LL);
      MoveCameraToPositionTask = sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_131;
      v179 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v170 )
      {
        MoveCameraToPositionTask = sub_1B64204(v170, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_133;
      }
      if ( !v179->max_length )
        goto LABEL_132;
      v179->m_Items[0] = v170;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)v179->m_Items, (int32_t)v170, v177, v178);
      if ( v175 )
      {
        MoveCameraToPositionTask = sub_1B64204(v175, v179->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_133;
      }
      if ( v179->max_length <= 1 )
        goto LABEL_132;
      v179->m_Items[1] = v175;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v179->m_Items[1], (int32_t)v175, v180, v181);
      this = (SubmarineMapManager_o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v182, v183);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v179, 0LL);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(Component_object, v184);
      if ( (byte_49F90AB & 1) == 0 )
      {
        sub_1B640C8(&StringLiteral_1/*""*/, v185);
        byte_49F90AB = 1;
      }
      state = Component_object->fields.state;
      if ( state )
        p_name = &state->fields.name;
      else
        p_name = (System_String_o **)&StringLiteral_1/*""*/;
      v190 = *p_name;
      v70 = sub_1B64314(SchedulerTaskSimpleAnimation_TypeInfo, v185, v186);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v70, AnimationComponent, v190, 0LL);
      if ( !v70 )
        goto LABEL_131;
      v96 = (ServantStatusBattleListViewItem_o *)(v70 + 32);
      v193 = *(System_Delegate_o **)(v70 + 32);
      v194 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v191, v192);
      SchedulerTaskBase_TaskCallback___ctor(
        v194,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0LL);
      v195 = System_Delegate__Combine(v193, (System_Delegate_o *)v194, 0LL);
      v102 = v195;
      if ( !v195 )
        goto LABEL_104;
      v198 = SchedulerTaskBase_TaskCallback_TypeInfo;
      if ( (SchedulerTaskBase_TaskCallback_c *)v195->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v96->klass = (ServantStatusBattleListViewItem_c *)v195;
        if ( (SchedulerTaskBase_TaskCallback_c *)v195->klass == v198 )
        {
LABEL_105:
          sub_1B6406C(v96, (int32_t)v102, v196, v197);
          MoveCameraToPositionTask = sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_131;
          v199 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_1B64204(v70, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v199 + 24) )
              goto LABEL_132;
            *(_QWORD *)(v199 + 32) = v70;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v199 + 32), v70, v200, v201);
            MoveCameraToPositionTask = sub_1B64170(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_131;
            v202 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_1B64204(v240, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v202 + 24) )
                goto LABEL_132;
              *(_QWORD *)(v202 + 32) = v240;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v202 + 32), (int32_t)v240, v203, v204);
              if ( !this || (MoveCameraToPositionTask = sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v202 + 24) <= 1u )
                  goto LABEL_132;
                *(_QWORD *)(v202 + 40) = this;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v202 + 40), (int32_t)this, v205, v206);
                v209 = (SchedulerTaskOrthostichy_o *)sub_1B64314(SchedulerTaskOrthostichy_TypeInfo, v207, v208);
                SchedulerTaskOrthostichy___ctor(v209, (SchedulerTaskBase_array *)v202, 0LL);
                if ( !v209 || (MoveCameraToPositionTask = sub_1B64204(v209, *(_QWORD *)(*(_QWORD *)v199 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v199 + 24) > 1u )
                  {
                    *(_QWORD *)(v199 + 40) = v209;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v199 + 40), (int32_t)v209, v210, v211);
                    v214 = (SchedulerTaskParallel_o *)sub_1B64314(SchedulerTaskParallel_TypeInfo, v212, v213);
                    SchedulerTaskParallel___ctor(v214, (SchedulerTaskBase_array *)v199, 0LL);
                    if ( v214 )
                    {
                      v214->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(Component_object, v215);
                      v219 = (SchedulerTaskWaitTime_o *)sub_1B64314(SchedulerTaskWaitTime_TypeInfo, v217, v218);
                      SchedulerTaskWaitTime___ctor(v219, TimeToStartOpenPanel, 0LL);
                      v222 = v45->fields._items;
                      v223 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v45->fields._version;
                      if ( v222 )
                      {
                        v224 = v45->fields._size;
                        if ( (unsigned int)v224 >= v222->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v45,
                            (Il2CppObject *)p_StartCallback,
                            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v223[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v225 = &v222->obj.klass + v224;
                          v45->fields._size = v224 + 1;
                          v225[4] = (Il2CppClass *)p_StartCallback;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v225 + 4), p_StartCallback, v220, v221);
                        }
                        v228 = v45->fields._items;
                        v229 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v45->fields._version;
                        if ( v228 )
                        {
                          v230 = v45->fields._size;
                          if ( (unsigned int)v230 >= v228->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v45,
                              (Il2CppObject *)v214,
                              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v231 = &v228->obj.klass + v230;
                            v45->fields._size = v230 + 1;
                            v231[4] = (Il2CppClass *)v214;
                            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v231 + 4), (int32_t)v214, v226, v227);
                          }
                          v234 = v45->fields._items;
                          v235 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v45->fields._version;
                          if ( v234 )
                          {
                            v236 = v45->fields._size;
                            if ( (unsigned int)v236 >= v234->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v45,
                                (Il2CppObject *)v219,
                                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v235[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v237 = &v234->obj.klass + v236;
                              v45->fields._size = v236 + 1;
                              v237[4] = (Il2CppClass *)v219;
                              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v237 + 4), (int32_t)v219, v232, v233);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v45;
                          }
                        }
                      }
                    }
                    goto LABEL_131;
                  }
LABEL_132:
                  sub_1B6432C(MoveCameraToPositionTask, v176);
                }
              }
            }
          }
LABEL_133:
          v239 = sub_1B64348();
          sub_1B641F0(v239, 0LL);
        }
      }
LABEL_103:
      sub_1B645E4(v102);
LABEL_104:
      v96->klass = (ServantStatusBattleListViewItem_c *)v102;
      goto LABEL_105;
    }
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v45;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v19; // d8
  float z; // s9
  System_Collections_Generic_List_object__o *v21; // x21
  SchedulerTaskBase_o *PanelDataList_k__BackingField; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct SubmarineMapDataManager_o *v30; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  System_Object_array *v36; // x0
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  int32x2_t v39; // d1
  struct SubmarineMapDataManager_o *v40; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *v42; // x22
  unsigned __int64 v43; // d0 OVERLAPPED
  float v44; // s2
  int v45; // s1
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  SchedulerTaskBase_o *v51; // x1
  Il2CppClass **v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_49F9171 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v14);
    byte_49F9171 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       method,
                                                       v2);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v16);
    byte_49F7111 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v19.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v21 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                       v16,
                                                       v17);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v61 = v60;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v24 )
      break;
    current = v61.fields._current;
    if ( !v61.fields._current )
      sub_1B64324(v24);
    if ( !LOBYTE(v61.fields._current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v61.fields._current,
                                          -1,
                                          v25);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v30 = this->fields.submarineData;
        if ( !v30 )
          sub_1B64324(IsPanelSatisfyCommonReleaseCond);
        PositionCalculator_k__BackingField = (float32x2_t *)v30->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_1B64324(IsPanelSatisfyCommonReleaseCond);
        z = z + 0.0;
        v19.n64_u64[0] = vadd_f32(
                           v19,
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
        if ( !v21 )
          sub_1B64324(IsPanelSatisfyCommonReleaseCond);
        items = v21->fields._items;
        v33 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v21->fields._version;
        if ( !items )
          sub_1B64324(IsPanelSatisfyCommonReleaseCond);
        size = v21->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            current,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v35[4] = (Il2CppClass *)current;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)current, v28, v29);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v21 )
    goto LABEL_34;
  if ( v21->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  v36 = System_Collections_Generic_List_object___ToArray(
          v21,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                    this,
                                    (SubmarineMapPanelData_array *)v36,
                                    v37);
  v40 = this->fields.submarineData;
  if ( !v40 )
    goto LABEL_34;
  Settings_k__BackingField = v40->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_34;
  v42 = (Il2CppObject *)PanelDataList_k__BackingField;
  v39.n64_f32[0] = (float)v21->fields._size;
  v43 = vdiv_f32(v19, vdup_lane_s32(v39, 0)).n64_u64[0];
  v44 = z / v39.n64_f32[0];
  v45 = HIDWORD(v43);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                    this,
                                    *(UnityEngine_Vector3_o *)&v43,
                                    1.0,
                                    Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                    v38);
  if ( !v15 )
    goto LABEL_34;
  v48 = v15->fields._items;
  v49 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v15->fields._version;
  if ( !v48 )
    goto LABEL_34;
  v50 = v15->fields._size;
  v51 = PanelDataList_k__BackingField;
  if ( (unsigned int)v50 >= v48->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)PanelDataList_k__BackingField,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &v48->obj.klass + v50;
    v15->fields._size = v50 + 1;
    v52[4] = (Il2CppClass *)v51;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v51, v46, v47);
  }
  v55 = v15->fields._items;
  v56 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v15->fields._version;
  if ( !v55 )
LABEL_34:
    sub_1B64324(PanelDataList_k__BackingField);
  v57 = v15->fields._size;
  if ( (unsigned int)v57 >= v55->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      v42,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &v55->obj.klass + v57;
    v15->fields._size = v57 + 1;
    v58[4] = (Il2CppClass *)v42;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v58 + 4), (int32_t)v42, v53, v54);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
}


void __fastcall SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct SubmarineScanConfirmDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  ServantStatusBattleListViewItem_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v15; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49F915B & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F915B = 1;
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
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.scanConfirmDialog, 0, v7, v8);
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
    v11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v11, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.selectScannerDialog, 0, v12, v13);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (ServantStatusBattleListViewItem_o *)&this->fields.newScannerDialog;
  v15 = (UnityEngine_Object_o *)newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v17 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v17, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_1B6406C(p_newScannerDialog, 0, v18, v19);
      return;
    }
LABEL_25:
    sub_1B64324(klass);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_49F913E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F913E = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(panelContainer, 0LL);
  UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x20
  const MethodInfo *v21; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v24; // w1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x22
  __int64 v28; // x1
  __int64 v29; // x2
  SchedulerTaskBase_TaskCallback_o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0

  if ( (byte_49F9142 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, finishCallback);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v7);
    sub_1B640C8(&SchedulerTaskNone_TypeInfo, v8);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__, v10);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo, v11);
    byte_49F9142 = 1;
  }
  v12 = sub_1B64314(SubmarineMapManager___c__DisplayClass34_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass34_0___ctor((SubmarineMapManager___c__DisplayClass34_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)finishCallback, v16, v17);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v27 = sub_1B64314(SchedulerTaskNone_TypeInfo, v25, v26);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v27, 0LL);
  v30 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v28, v29);
  SchedulerTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v27 )
    goto LABEL_18;
  *(_QWORD *)(v27 + 32) = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v30, v31, v32);
  items = v20->fields._items;
  v36 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v20->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v20->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v20,
      (Il2CppObject *)v27,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v38[4] = (Il2CppClass *)v27;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v38 + 4), v27, v33, v34);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_1B64324(HideEnemyOccupiedPanelTasks);
  TaskScheduler__AddTask_40937516(
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
  const MethodInfo *v6; // x3
  struct MapControl_MapInfo_o *mapInfo; // x8

  SubmarineMapManager__CreateAssetManagerIfNotExists(this, (const MethodInfo *)assetData);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || (assetManager = this->fields.assetManager) == 0LL )
    sub_1B64324(assetManager);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v6);
}


void __fastcall SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  const MethodInfo *v5; // x1

  this->fields.submarineData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.submarineData, 0, v2, v3);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, v5);
}


SrcSpotBasePrefab_o *__fastcall SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_array *HasChild; // x0
  Il2CppObject *v5; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  int32_t HomeSpotId_k__BackingField; // w22
  __int64 v9; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v11; // x19
  unsigned int v12; // w23
  Il2CppObject *Component_object; // x21

  if ( (byte_49F9154 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F9154 = 1;
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
      sub_1B64324(HasChild);
    }
    max_length = HasChild->max_length;
    v11 = HasChild;
    if ( max_length >= 1 )
    {
      v12 = 0;
      v5 = 0LL;
      while ( 1 )
      {
        if ( v12 >= max_length )
          sub_1B6432C(HasChild, v9);
        HasChild = (UnityEngine_GameObject_array *)v11->m_Items[v12];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
        max_length = v11->max_length;
        if ( (int)++v12 >= max_length )
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
  __int64 v4; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t QuestId_k__BackingField; // w1
  System_Collections_Generic_List_object__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v9; // x1

  v3 = this;
  if ( (byte_49F9141 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, method);
    this = (SubmarineMapManager_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__,
                                      v4);
    byte_49F9141 = 1;
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
    sub_1B64324(this);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_49F9161 & 1) == 0 )
  {
    sub_1B640C8(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___, method);
    byte_49F9161 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_2EE1FF4 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
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

  if ( (byte_49F9165 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9165 = 1;
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
    UnityEngine_Object__Destroy_69127736(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_1B6406C(p_scanRangeNotificator, 0, v7, v8);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_49F915F & 1) == 0 )
  {
    sub_1B640C8(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___, method);
    byte_49F915F = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_2EE1FF4 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_49F9163 & 1) == 0 )
  {
    sub_1B640C8(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___, method);
    byte_49F9163 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_2EE1FF4 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v9; // x22
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  TaskScheduler_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  struct TaskScheduler_o *taskScheduler; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_bool__o *v21; // x21
  __int64 v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  SubmarineMapManager_PlayingScanVoiceData_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_49F9138 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v4);
    sub_1B640C8(&SubmarineMapDataManager_TypeInfo, v5);
    sub_1B640C8(&TaskScheduler_TypeInfo, v6);
    byte_49F9138 = 1;
  }
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v9 = (SubmarineMapDataManager_o *)sub_1B64314(SubmarineMapDataManager_TypeInfo, method, v2);
  SubmarineMapDataManager___ctor(v9, mapInfo, warInfo, v10);
  this->fields.submarineData = v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.submarineData, (int32_t)v9, v11, v12);
  v15 = (TaskScheduler_o *)sub_1B64314(TaskScheduler_TypeInfo, v13, v14);
  TaskScheduler___ctor(v15, 0LL);
  this->fields.taskScheduler = v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.taskScheduler, (int32_t)v15, v16, v17);
  taskScheduler = this->fields.taskScheduler;
  v21 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v19, v20);
  System_Action_bool____ctor(
    v21,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
    0LL);
  if ( !taskScheduler )
    sub_1B64324(v22);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v21;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v21,
    v23,
    v24);
  v27 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_1B64314(
                                                        SubmarineMapManager_PlayingScanVoiceData_TypeInfo,
                                                        v25,
                                                        v26);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v27, 0LL);
  this->fields.playingScanVoiceData = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playingScanVoiceData, (int32_t)v27, v28, v29);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_o *v16; // x19

  if ( (byte_49F9139 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, finishCallback);
    sub_1B640C8(&AtlasManager_TypeInfo, v5);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__, v6);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo, v7);
    byte_49F9139 = 1;
  }
  v8 = sub_1B64314(SubmarineMapManager___c__DisplayClass19_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass19_0___ctor((SubmarineMapManager___c__DisplayClass19_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 24), (int32_t)finishCallback, v12, v13);
  v16 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v14, v15);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v8,
    Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v16, 5, 1, 0LL);
}


void __fastcall SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SubmarineMapManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  struct SubmarineMapAssetManager_o *v20; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  struct SubmarineMapAssetManager_o *v27; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x1
  __int64 v33; // x2
  struct SubmarineMapAssetManager_o *v34; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3

  v3 = this;
  if ( (byte_49F915C & 1) == 0 )
  {
    sub_1B640C8(&Method_ComponentPool_CommonEffectComponent__Preload__, method);
    sub_1B640C8(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__, v4);
    sub_1B640C8(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__, v5);
    sub_1B640C8(&Method_ComponentPool_CommonEffectComponent___ctor__, v6);
    sub_1B640C8(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__, v7);
    sub_1B640C8(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__, v8);
    sub_1B640C8(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v9);
    sub_1B640C8(&ComponentPool_CommonEffectComponent__TypeInfo, v10);
    sub_1B640C8(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo, v11);
    this = (SubmarineMapManager_o *)sub_1B640C8(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo, v12);
    byte_49F915C = 1;
  }
  assetManager = v3->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v15 = (ComponentPool_T__o *)sub_1B64314(ComponentPool_CommonEffectComponent__TypeInfo, method, v2);
  ComponentPool_object____ctor(
    v15,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_30AFD08 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v3->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v15;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.effectScanedPanelObjPool, (int32_t)v15, v16, v17);
  this = (SubmarineMapManager_o *)v3->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_object___Preload(
    (ComponentPool_T__o *)this,
    9,
    (const MethodInfo_30AFDCC *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v20 = v3->fields.assetManager;
  if ( !v20 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v20->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v22 = (ComponentPool_T__o *)sub_1B64314(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v18, v19);
  ComponentPool_object____ctor(
    v22,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_30AFD08 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v3->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.effectScanObstaclePanelObjPool, (int32_t)v22, v23, v24);
  v27 = v3->fields.assetManager;
  if ( !v27 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v27->fields._EffectScannablePanelPrafab_k__BackingField;
  v29 = (ComponentPool_T__o *)sub_1B64314(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo, v25, v26);
  ComponentPool_object____ctor(
    v29,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_30AFD08 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v3->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v29;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.effectScannablePanelObjPool, (int32_t)v29, v30, v31);
  this = (SubmarineMapManager_o *)v3->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_object___Preload(
          (ComponentPool_T__o *)this,
          50,
          (const MethodInfo_30AFDCC *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v34 = v3->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_1B64324(this);
  }
  EffectSelectedPanelPrefab_k__BackingField = v34->fields._EffectSelectedPanelPrefab_k__BackingField;
  v36 = (ComponentPool_T__o *)sub_1B64314(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo, v32, v33);
  ComponentPool_object____ctor(
    v36,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_30AFD08 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v3->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.effectSelectedPanelObjPool, (int32_t)v36, v37, v38);
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
  const MethodInfo *v9; // x1

  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SubmarineMapDataManager__UpdateParams(submarineData, -1, method),
        SubmarineMapManager__UpdateClosedPanelDisplay(this, v6),
        SubmarineMapManager__HideScanObstacleEffect(this, v7),
        SubmarineMapManager__ShowScanObstacleEffect(this, v8),
        (submarineData = this->fields.submarineData) == 0LL) )
  {
    sub_1B64324(submarineData);
  }
  SubmarineMapDataManager__DeleteBeforeQuestInfo(submarineData, v9);
  ActionExtensions__Call(finishCallback, 0LL);
}


void __fastcall SubmarineMapManager__OnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = SubmarineMapManager__CoOnAfterSpotCreated(this, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_49F913C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, finishCallback);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__, v5);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo, v6);
    byte_49F913C = 1;
  }
  v7 = sub_1B64314(SubmarineMapManager___c__DisplayClass25_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass25_0___ctor((SubmarineMapManager___c__DisplayClass25_0_o *)v7, 0LL);
  if ( !v7 )
    sub_1B64324(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)finishCallback, v11, v12);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v15, v16);
}


void __fastcall SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct MapControl_WarInfo_o *warInfo; // x8
  QuestTree_o *v9; // x20
  int32_t warId; // w21
  System_Action_o *v11; // x22
  System_Collections_IEnumerator_o *v12; // x1

  if ( (byte_49F914A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1B640C8(&Method_SubmarineMapManager__OnEndScan_b__42_0__, v4);
    byte_49F914A = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v9 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0LL),
        !v9) )
  {
    sub_1B64324(Instance);
  }
  v12 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v9, warId, v11, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_49F913D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, v3);
    byte_49F913D = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v6 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v4, v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, 0LL);
    ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._23_OnBeforeQuestAfterAction.method)(
      this,
      v6,
      this->klass->vtable._24_OnAfterQuestAfterAction.methodPtr);
  }
  else
  {
    SubmarineMapManager__HideScannableEffect(this, v4);
    SubmarineMapManager__ShowScannableEffect(this, v7);
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
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x21
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  Il2CppObject *Instance; // x22
  const MethodInfo *v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  NetworkManager_ResultCallbackFunc_o *v24; // x22
  Il2CppObject *Request_object; // x22
  const MethodInfo *v26; // x1
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_49F9145 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, *(_QWORD *)&scanId);
    sub_1B640C8(&NetworkManager_TypeInfo, v7);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__, v10);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo, v11);
    byte_49F9145 = 1;
  }
  v12 = sub_1B64314(SubmarineMapManager___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&scanId, panelData);
  SubmarineMapManager___c__DisplayClass37_0___ctor((SubmarineMapManager___c__DisplayClass37_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 32) = panelData;
  v16 = v12 + 32;
  *(_DWORD *)(v12 + 24) = scanId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)panelData, v17, v18);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v19);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v21);
  if ( !Instance )
    goto LABEL_11;
  clsQuestCheck__SaveEventQuestIdListPlayable((clsQuestCheck_o *)Instance, eventId, 0LL);
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v22, v23);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v24,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v26);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*(_QWORD *)v16 || !Request_object )
LABEL_11:
    sub_1B64324(eventId);
  EventScanPanelMapRequest__beginRequest(
    (EventScanPanelMapRequest_o *)Request_object,
    eventId,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v16 + 24LL),
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
  int32_t v25; // w3
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
  int32_t v36; // w3
  TerminalPramsManager_c *v37; // x0
  ServantStatusBattleListViewItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
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
  int32_t v53; // w3
  EventSaveData_c *v54; // x8
  ServantStatusBattleListViewItem_c *namespaze; // x19
  TerminalPramsManager_c *v56; // x0
  ServantStatusBattleListViewItem_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v58; // x1
  System_String_c *v59; // x8
  int v60; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F9146 & 1) == 0 )
  {
    sub_1B640C8(&EventSaveData_TypeInfo, result);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___, v9);
    sub_1B640C8(&JsonManager_TypeInfo, v10);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v11);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v12);
    sub_1B640C8(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v14);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v15);
    sub_1B640C8(&StringLiteral_6579/*"False"*/, v16);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v17);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v18);
    byte_49F9146 = 1;
  }
  v60 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21968/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v19);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v20);
  v21 = (Il2CppObject *)System_String__Concat_61386656(
                          (System_String_o *)StringLiteral_15744/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16000/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v21,
                                                                      (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v27 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_71:
    sub_1B6432C(BeforeEventSubmarineSaveData_k__BackingField, v23);
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
        v60 = *(_QWORD *)(v31 + 32);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F9178 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v23);
          byte_49F9178 = 1;
        }
        v32 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v32 = TerminalPramsManager_TypeInfo;
        }
        if ( !v32->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v33 = (EventSaveData_o *)sub_1B64314(EventSaveData_TypeInfo, v23, v24);
          EventSaveData___ctor(v33, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F9179 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v34);
            byte_49F9179 = 1;
          }
          v37 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v37 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (ServantStatusBattleListViewItem_o *)&v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v33;
          sub_1B6406C(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v33, v35, v36);
          v32 = TerminalPramsManager_TypeInfo;
        }
        if ( !v32->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v32);
        if ( !byte_49F9178 )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v23);
          byte_49F9178 = 1;
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
              v43 = (System_String_o **)&StringLiteral_1213/*"0"*/;
            v44 = *v43;
            v45 = max_length <= 2 ? (System_String_o **)&StringLiteral_1213/*"0"*/ : &ValueByArray->m_Items[2];
            v46 = *v45;
            v47 = max_length <= 3 ? &StringLiteral_6579/*"False"*/ : (void **)&ValueByArray->m_Items[3];
          }
          else
          {
            v46 = (System_String_o *)StringLiteral_1213/*"0"*/;
            v47 = &StringLiteral_6579/*"False"*/;
            v44 = (System_String_o *)StringLiteral_1213/*"0"*/;
          }
          v48 = (System_String_o *)*v47;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49F9178 )
          {
            sub_1B640C8(&TerminalPramsManager_TypeInfo, v41);
            byte_49F9178 = 1;
          }
          v49 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v49 = TerminalPramsManager_TypeInfo;
          }
          v50 = v49->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v51 = System_Int32__ToString((int32_t)&v60, 0LL);
          if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_36797796(
                                                                              v51,
                                                                              v44,
                                                                              v46,
                                                                              v48,
                                                                              0LL);
          if ( v50 )
          {
            v50->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_1B6406C(
              (ServantStatusBattleListViewItem_o *)&v50->fields.value,
              (int32_t)BeforeEventSubmarineSaveData_k__BackingField,
              v52,
              v53);
            value = v27->fields.value;
            goto LABEL_56;
          }
        }
LABEL_70:
        sub_1B64324(BeforeEventSubmarineSaveData_k__BackingField);
      }
    }
  }
LABEL_56:
  if ( !(_DWORD)value )
    goto LABEL_71;
  v54 = v27[1].klass;
  if ( !v54 )
    goto LABEL_70;
  namespaze = (ServantStatusBattleListViewItem_c *)v54->_1.namespaze;
  v56 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v56 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (ServantStatusBattleListViewItem_o *)&v56->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = namespaze;
  sub_1B6406C(p_mResultEventPanelRewardInfos, (int32_t)namespaze, v24, v25);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v58);
    byte_49F76BD = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v59 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v59 )
    goto LABEL_70;
  BeforeEventSubmarineSaveData_k__BackingField = *(EventSaveData_o **)&v59->_2.instance_size;
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v17; // x4
  SchedulerTaskBase_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  SchedulerTaskBase_TaskCallback_o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  TaskScheduler_o *taskScheduler; // x19
  __int64 v25; // x20
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  __int64 v33; // x0

  if ( (byte_49F9144 & 1) == 0 )
  {
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, *(_QWORD *)&scanId);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__, v8);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo, v9);
    byte_49F9144 = 1;
  }
  v10 = sub_1B64314(SubmarineMapManager___c__DisplayClass36_0_TypeInfo, *(_QWORD *)&scanId, panelData);
  SubmarineMapManager___c__DisplayClass36_0___ctor((SubmarineMapManager___c__DisplayClass36_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v10 + 32) = panelData;
  *(_DWORD *)(v10 + 24) = scanId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)panelData, v14, v15);
  klass = this->klass;
  if ( *(int *)(v10 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v10 + 40) = 0;
    v18 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v10 + 24),
            *(SubmarineMapPanelData_o **)(v10 + 32),
            (bool *)(v10 + 40),
            v17);
    v21 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v19, v20);
    SchedulerTaskBase_TaskCallback___ctor(
      v21,
      (Il2CppObject *)v10,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0LL);
    if ( v18 )
    {
      v18->fields.EndCallback = v21;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.EndCallback, (int32_t)v21, v22, v23);
      taskScheduler = this->fields.taskScheduler;
      v11 = sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v11 )
      {
        v25 = v11;
        v26 = sub_1B64204(v18, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !v26 )
        {
          v33 = sub_1B64348();
          sub_1B641F0(v33, 0LL);
        }
        if ( !*(_DWORD *)(v25 + 24) )
          sub_1B6432C(v26, v27);
        *(_QWORD *)(v25 + 32) = v18;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)v18, v28, v29);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v25, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1B64324(v11);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v30);
  SubmarineMapManager__ShowScannableEffect(this, v31);
  SubmarineMapManager__HideSelectedPanelEffect(this, v32);
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
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_bool__o *v20; // x22
  const MethodInfo *v21; // x4

  if ( (byte_49F915A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, *(_QWORD *)&scanId);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__, v9);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo, v10);
    byte_49F915A = 1;
  }
  v11 = sub_1B64314(SubmarineMapManager___c__DisplayClass68_0_TypeInfo, *(_QWORD *)&scanId, isShowDialogUpper);
  SubmarineMapManager___c__DisplayClass68_0___ctor((SubmarineMapManager___c__DisplayClass68_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)callback, v15, v16);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v20 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v18, v19);
  System_Action_bool____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0LL);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_1B64324(v12);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v20, v21);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v16; // x1
  int32_t eventId; // w22
  __int64 v18; // x1
  __int64 v19; // x2
  System_Action_int__o *v20; // x23
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x4

  if ( (byte_49F9158 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, callback);
    sub_1B640C8(&System_Action_TypeInfo, v5);
    sub_1B640C8(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v6);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__, v7);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo, v8);
    byte_49F9158 = 1;
  }
  v9 = sub_1B64314(SubmarineMapManager___c__DisplayClass66_0_TypeInfo, callback, method);
  SubmarineMapManager___c__DisplayClass66_0___ctor((SubmarineMapManager___c__DisplayClass66_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)callback, v13, v14);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v16);
  v20 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v18, v19);
  System_Action_int____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
    0LL);
  v23 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
  if ( !selectScannerDialog )
LABEL_6:
    sub_1B64324(v10);
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v20, v23, v24);
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
    sub_1B6406C(p_assetManager, 0, v5, v6);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ComponentPool_T__o *effectScanedPanelObjPool; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  ComponentPool_T__o *effectScannablePanelObjPool; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  ComponentPool_T__o *v11; // x0
  ServantStatusBattleListViewItem_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49F915D & 1) == 0 )
  {
    sub_1B640C8(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__, method);
    sub_1B640C8(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__, v3);
    sub_1B640C8(&Method_ComponentPool_CommonEffectComponent__Finish__, v4);
    byte_49F915D = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_30B05A8 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectScanedPanelObjPool, 0, v6, v7);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_30B05A8 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectScannablePanelObjPool, 0, v9, v10);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (ServantStatusBattleListViewItem_o *)&this->fields.effectScanObstaclePanelObjPool;
  v11 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v11,
      (const MethodInfo_30B05A8 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_1B6406C(p_effectScanObstaclePanelObjPool, 0, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_2EE1E08 *method)
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
  const MethodInfo_35D202C *v21; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v25; // s0
  float v26; // s1
  float v27; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v29; // x1
  const MethodInfo_35D202C *v30; // x2
  bool v31; // zf
  UnityEngine_Transform_o *v32; // x19
  float v33; // s0
  float v34; // s1
  float v35; // s2
  struct UnityEngine_Vector3_StaticFields *v36; // x8
  System_Nullable_Vector3__o v37; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v38; // [xsp+10h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v39; // 0:x0.16
  System_Nullable_Vector3__o v40; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v38 = offset;
  v37 = scale;
  hasValue = scale.fields.hasValue;
  v8 = offset.fields.hasValue;
  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_System_Nullable_Vector3__get_HasValue__, pool);
    sub_1B640C8(&Method_System_Nullable_Vector3__get_Value__, v12);
    if ( !method->rgctx_data )
      sub_1BB6000();
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
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_51052760(
                                                  pool,
                                                  transform,
                                                  *(UnityEngine_Vector3_o *)&v15,
                                                  (const MethodInfo_30B00D8 *)method->rgctx_data->_1_ComponentPool_T__Rent);
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
    *(_QWORD *)&v39.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v39.fields.hasValue = &v38;
    *(UnityEngine_Vector3_o *)&v25 = System_Nullable_Vector3___get_Value(v39, v21);
    hasValue = v37.fields.hasValue;
  }
  else
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v20);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v25 = static_fields->zeroVector.fields.x;
    v26 = static_fields->zeroVector.fields.y;
    v27 = static_fields->zeroVector.fields.z;
  }
  v42.fields.z = z + v27;
  v42.fields.y = y + v26;
  v42.fields.x = x + v25;
  UnityEngine_Transform__set_localPosition(v19, v42, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v18, 0LL);
  v31 = !hasValue;
  v32 = (UnityEngine_Transform_o *)effectContainer;
  if ( !v31 )
  {
    *(_QWORD *)&v40.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v40.fields.hasValue = &v37;
    *(UnityEngine_Vector3_o *)&v33 = System_Nullable_Vector3___get_Value(v40, v30);
    if ( v32 )
      goto LABEL_17;
LABEL_21:
    sub_1B64324(effectContainer);
  }
  if ( !byte_49F7116 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v29);
    byte_49F7116 = 1;
  }
  v36 = UnityEngine_Vector3_TypeInfo->static_fields;
  v33 = v36->oneVector.fields.x;
  v34 = v36->oneVector.fields.y;
  v35 = v36->oneVector.fields.z;
  if ( !v32 )
    goto LABEL_21;
LABEL_17:
  UnityEngine_Transform__set_localScale(v32, *(UnityEngine_Vector3_o *)&v33, 0LL);
}


void __fastcall SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0LL);
}


void __fastcall SubmarineMapManager__ReturnEffectsToPool_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_2EE1FF4 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  unsigned int v10; // w22

  if ( !method->rgctx_data )
    sub_1BB6000();
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
        sub_1B6432C(Children, v7);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_2E87ED8 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_30B01B0 *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1B64324(Children);
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
  int32_t v11; // w2
  int32_t v12; // w3
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v14; // x1
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Delegate_o **v20; // x22
  System_Delegate_o *v21; // x23
  SchedulerTaskBase_TaskCallback_o *v22; // x24
  System_Delegate_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Delegate_o *v26; // x8
  SchedulerTaskBase_TaskCallback_c *v27; // x1
  TaskScheduler_o *v28; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x0

  if ( (byte_49F9149 & 1) == 0 )
  {
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_1B640C8(&SchedulerTaskNone_TypeInfo, v5);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__, v7);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo, v8);
    byte_49F9149 = 1;
  }
  v9 = sub_1B64314(SubmarineMapManager___c__DisplayClass41_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass41_0___ctor((SubmarineMapManager___c__DisplayClass41_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = finishCallback,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)finishCallback, v11, v12),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v14),
        !taskScheduler)
    || (TaskScheduler__AddTask_40937516(taskScheduler, 0, RevealEachSpotsTasks, 0LL),
        v17 = sub_1B64314(SchedulerTaskNone_TypeInfo, v15, v16),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v17, 0LL),
        !v17) )
  {
LABEL_16:
    sub_1B64324(RevealEachSpotsTasks);
  }
  v20 = (System_Delegate_o **)(v17 + 32);
  v21 = *(System_Delegate_o **)(v17 + 32);
  v22 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v18, v19);
  SchedulerTaskBase_TaskCallback___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__,
    0LL);
  v23 = System_Delegate__Combine(v21, (System_Delegate_o *)v22, 0LL);
  v26 = v23;
  if ( v23 )
  {
    v27 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v23->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v20 = v23;
      if ( (SchedulerTaskBase_TaskCallback_c *)v23->klass == v27 )
        goto LABEL_11;
    }
    sub_1B645E4(v23);
  }
  *v20 = v26;
LABEL_11:
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v26, v24, v25);
  v28 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_1B64170(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1LL);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v29 = RevealEachSpotsTasks;
  v30 = sub_1B64204(v17, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v30 )
  {
    v34 = sub_1B64348();
    sub_1B641F0(v34, 0LL);
  }
  if ( !v29->fields._size )
    sub_1B6432C(v30, v31);
  v29->fields._syncRoot = (Il2CppObject *)v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v29->fields._syncRoot, v17, v32, v33);
  if ( !v28 )
    goto LABEL_16;
  TaskScheduler__AddTask(v28, 0, (SchedulerTaskBase_array *)v29, 0LL);
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
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *GridTexture_k__BackingField; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x3
  struct SubmarineMapDataManager_o *v10; // x8
  struct SubmarineMapAssetManager_o *v11; // x9
  SubmarineMapDataManager_o *v12; // x20
  UIWidget_o *v13; // x21
  int32_t v14; // w0
  struct SubmarineMapDataManager_o *v15; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_49F9151 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UITexture___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49F9151 = 1;
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
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, v8);
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
                                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
    sub_1B64324(submarineData);
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v10; // 0:x3.16
  System_Nullable_Vector3__o v11; // 0:x5.16

  v2 = this;
  if ( (byte_49F9160 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_1B640C8(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___,
                                      v6);
    byte_49F9160 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1B64324(this);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v9,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v9.fields._current )
        sub_1B64324(v8);
      if ( BYTE1(v9.fields._current[3].monitor) )
      {
        *(_QWORD *)&v10.fields.hasValue = 0LL;
        *(_QWORD *)&v10.fields.value.fields.y = 0LL;
        *(_QWORD *)&v11.fields.hasValue = 0LL;
        *(_QWORD *)&v11.fields.value.fields.y = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v9.fields._current,
          v10,
          v11,
          (const MethodInfo_2EE1E08 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  const MethodInfo *v12; // x2
  Il2CppObject *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v16; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49F9164 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPanelScanMaster___, *(_QWORD *)&scanId);
    sub_1B640C8(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_49F9164 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_1B64324(Instance);
  ScanRangeNotificatorPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                                 this->fields.assetManager,
                                                 *((_DWORD *)Instance + 14),
                                                 v12);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0LL, 0LL) )
  {
    SubmarineMapManager__HideScanRange(this, v14);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__Instantiate_object__49003980(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v16;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)p_scanRangeNotificator, (int32_t)v16, v18, v19);
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
  const MethodInfo *v36; // x1
  __int64 v37; // x2
  UnityEngine_Rect_array *v38; // x21
  System_Collections_Generic_List_Rect__o *v39; // x22
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x2
  int m_CancellationTokenSource; // w8
  SubmarineMapManager_o *v43; // x21
  unsigned int v44; // w24
  __int64 v45; // x28
  struct SubmarineMapDataManager_o *v46; // x8
  struct SubmarineSettingsManager_o *v47; // x8
  float32x2_t v48; // d2
  float32x2_t v49; // d0
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v51; // x8
  __int64 size; // x10
  unsigned __int64 v53; // d0
  float32x2_t *v54; // x9
  int v55; // s1
  unsigned __int32 v56; // s3
  Submarine2DUILocationInfo_o *v57; // x22
  const MethodInfo *v58; // x1
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  Submarine2DUILocationInfo_o *v68; // x22
  const MethodInfo *v69; // x1
  UnityEngine_Rect_array *v70; // x0
  MapCamera_o *v71; // x23
  UnityEngine_Rect_array *v72; // x22
  __int64 v73; // x1
  __int64 v74; // x2
  float v75; // s0
  float v76; // s1
  float v77; // s2
  float v78; // s3
  UnityEngine_Vector2_o v79; // kr00_8
  struct System_Threading_CancellationTokenSource_o *v80; // x8
  float v81; // s3
  __int64 v82; // x8
  struct MapControl_WarInfo_o **p_warInfo; // x9
  float v84; // t1
  float v85; // s0
  struct SubmarineMapDataManager_o *v86; // x8
  struct SubmarineSettingsManager_o *v87; // x8
  Submarine2DUILocationInfo_o *v89; // x22
  const MethodInfo *v90; // x1
  UnityEngine_Rect_array *v91; // x0
  MapCamera_o *v92; // x23
  UnityEngine_Rect_array *v93; // x22
  int32_t failedReason; // [xsp+3Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v96; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_49F9167 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Rect__Add__, *(_QWORD *)&scanId);
    sub_1B640C8(&Method_System_Collections_Generic_List_Rect__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Rect___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_Rect__TypeInfo, v11);
    sub_1B640C8(&MapCameraViewAdjusterUtil_TypeInfo, v12);
    sub_1B640C8(&UnityEngine_Rect___TypeInfo, v13);
    sub_1B640C8(&float___TypeInfo, v14);
    sub_1B640C8(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v15);
    sub_1B640C8(&Submarine2DUILocationInfo_TypeInfo, v16);
    this = (SubmarineMapManager_o *)sub_1B640C8(&SubmarineScanDialogUpsideLocationInfo_TypeInfo, v17);
    byte_49F9167 = 1;
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
          this = (SubmarineMapManager_o *)sub_1B64170(UnityEngine_Rect___TypeInfo, 1LL);
          if ( this )
          {
            v38 = (UnityEngine_Rect_array *)this;
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
    sub_1B64324(this);
  }
  v39 = (System_Collections_Generic_List_Rect__o *)sub_1B64314(
                                                     System_Collections_Generic_List_Rect__TypeInfo,
                                                     *(_QWORD *)&scanId,
                                                     panelData);
  System_Collections_Generic_List_Rect____ctor(
    v39,
    (const MethodInfo_34BE0DC *)Method_System_Collections_Generic_List_Rect___ctor__);
  this = (SubmarineMapManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                    scanId,
                                    panelData,
                                    v8->fields.submarineData,
                                    v40);
  if ( !v8->fields.submarineData )
    goto LABEL_73;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelsByScanEvents(
                                    v8->fields.submarineData,
                                    (System_Collections_Generic_List_SubmarineScanEvent__o *)this,
                                    v41);
  if ( !this )
    goto LABEL_73;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v43 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v44 = 0;
    while ( v44 < m_CancellationTokenSource )
    {
      v45 = *((_QWORD *)&v43->fields.mapInfo + (int)v44);
      if ( !byte_49F7111 )
      {
        this = (SubmarineMapManager_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v36);
        byte_49F7111 = 1;
      }
      v46 = v8->fields.submarineData;
      if ( !v46 )
        goto LABEL_73;
      v47 = v46->fields._Settings_k__BackingField;
      if ( !v47 )
        goto LABEL_73;
      if ( !v45 )
        goto LABEL_73;
      if ( !v39 )
        goto LABEL_73;
      v48.n64_u64[0] = (unsigned __int64)v47->fields._PanelUnitSize_k__BackingField;
      v49.n64_u64[0] = *(unsigned __int64 *)(v45 + 28);
      items = v39->fields._items;
      v51 = Method_System_Collections_Generic_List_Rect__Add__;
      ++v39->fields._version;
      if ( !items )
        goto LABEL_73;
      size = v39->fields._size;
      v53 = vadd_f32(v49, vmul_f32(v48, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
      if ( (unsigned int)size >= items->max_length )
      {
        v55 = HIDWORD(v53);
        v56 = v48.n64_u32[1];
        System_Collections_Generic_List_Rect___AddWithResize(
          v39,
          *(UnityEngine_Rect_o *)(&v48 - 1),
          *(const MethodInfo_34BE968 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = (float32x2_t *)(&items->obj + size);
        v39->fields._size = size + 1;
        v54[4].n64_u64[0] = v53;
        v54[5].n64_u64[0] = v48.n64_u64[0];
      }
      m_CancellationTokenSource = (int)v43->fields.m_CancellationTokenSource;
      if ( (int)++v44 >= m_CancellationTokenSource )
        goto LABEL_43;
    }
    goto LABEL_74;
  }
LABEL_43:
  if ( !v39 )
    goto LABEL_73;
  v38 = System_Collections_Generic_List_Rect___ToArray(
          v39,
          (const MethodInfo_34C05B0 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_45:
  v57 = (Submarine2DUILocationInfo_o *)sub_1B64314(Submarine2DUILocationInfo_TypeInfo, v36, v37);
  Submarine2DUILocationInfo___ctor(v57, v58);
  if ( !v57 )
    goto LABEL_73;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v57, 0LL);
  mapCamera = v8->fields.mapCamera;
  v61 = Rects;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v96 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(mapCamera, v38, v61, &failedReason, 0LL);
  *isShowDialogUpper = 0;
  m_XMin = v96.fields.m_XMin;
  m_YMin = v96.fields.m_YMin;
  m_Width = v96.fields.m_Width;
  m_Height = v96.fields.m_Height;
  if ( failedReason == 1 )
  {
    v68 = (Submarine2DUILocationInfo_o *)sub_1B64314(SubmarineScanDialogUpsideLocationInfo_TypeInfo, v62, v63);
    Submarine2DUILocationInfo___ctor(v68, v69);
    if ( !v68 )
      goto LABEL_73;
    v70 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v68, 0LL);
    v71 = v8->fields.mapCamera;
    v72 = v70;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(UnityEngine_Rect_o *)&v75 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v71,
                                    v38,
                                    v72,
                                    &failedReason,
                                    0LL);
    if ( failedReason != 1 )
    {
      if ( failedReason )
        goto LABEL_55;
      goto LABEL_54;
    }
    v89 = (Submarine2DUILocationInfo_o *)sub_1B64314(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v73, v74);
    Submarine2DUILocationInfo___ctor(v89, v90);
    if ( !v89 )
      goto LABEL_73;
    v91 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v89, 0LL);
    v92 = v8->fields.mapCamera;
    v93 = v91;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    *(UnityEngine_Rect_o *)&v75 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v92,
                                    v38,
                                    v93,
                                    &failedReason,
                                    0LL);
    if ( !failedReason )
    {
LABEL_54:
      m_XMin = v75;
      m_YMin = v76;
      m_Width = v77;
      m_Height = v78;
      *isShowDialogUpper = 1;
    }
  }
LABEL_55:
  v79 = FSWindowUtil__GetSize(0LL);
  this = (SubmarineMapManager_o *)sub_1B64170(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_73;
  v80 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v80
    || (LODWORD(this->fields.mapInfo) = 1065353216, (_DWORD)v80 == 1)
    || (*((float *)&this->fields.mapInfo + 1) = m_Width / v79.fields.x, (unsigned int)v80 <= 2) )
  {
LABEL_74:
    sub_1B6432C(this, v36);
  }
  v81 = 1.0;
  *(float *)&this->fields.warInfo = m_Height / v79.fields.y;
  if ( (int)v80 >= 2 )
  {
    v82 = (unsigned int)v80 - 2LL;
    v81 = fmaxf(m_Width / v79.fields.x, 1.0);
    if ( v82 )
    {
      p_warInfo = &this->fields.warInfo;
      do
      {
        v84 = *(float *)p_warInfo;
        p_warInfo = (struct MapControl_WarInfo_o **)((char *)p_warInfo + 4);
        v85 = v84;
        if ( v84 > v81 )
          v81 = v85;
        --v82;
      }
      while ( v82 );
    }
  }
  v86 = v8->fields.submarineData;
  if ( !v86 )
    goto LABEL_73;
  v87 = v86->fields._Settings_k__BackingField;
  if ( !v87 )
    goto LABEL_73;
  v95.fields.y = m_YMin + (float)(m_Height * 0.5);
  v95.fields.x = m_XMin + (float)(m_Width * 0.5);
  v95.fields.z = 0.0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v8,
           v95,
           v81,
           v87->fields._ViewScanRangeCameraDuration_k__BackingField,
           v36);
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v10; // 0:x3.16
  System_Nullable_Vector3__o v11; // 0:x5.16

  v2 = this;
  if ( (byte_49F915E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_1B640C8(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___,
                                      v6);
    byte_49F915E = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1B64324(this);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v9,
             (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v9.fields._current )
        sub_1B64324(v8);
      if ( BYTE2(v9.fields._current[3].monitor) )
      {
        *(_QWORD *)&v10.fields.hasValue = 0LL;
        *(_QWORD *)&v10.fields.value.fields.y = 0LL;
        *(_QWORD *)&v11.fields.hasValue = 0LL;
        *(_QWORD *)&v11.fields.value.fields.y = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v9.fields._current,
          v10,
          v11,
          (const MethodInfo_2EE1E08 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_49F9162 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___,
      panelData);
    byte_49F9162 = 1;
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
    (const MethodInfo_2EE1E08 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
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
  Il2CppObject *v15; // x22
  __int64 v16; // x1
  __int64 v17; // x2
  System_Action_o *v18; // x23
  TaskScheduler_o *taskScheduler; // x22
  const MethodInfo *v20; // x3
  TaskScheduler_o *v21; // x22
  SchedulerTaskBase_array *v22; // x23
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  MissionNotifyManager_o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  System_Delegate_o **v33; // x21
  System_Delegate_o *v34; // x22
  SchedulerTaskBase_TaskCallback_o *v35; // x23
  System_Delegate_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_Delegate_o *v39; // x8
  SchedulerTaskBase_TaskCallback_c *v40; // x1
  TaskScheduler_o *v41; // x19
  MissionNotifyManager_o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3
  __int64 v45; // x0

  if ( (byte_49F9147 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_1B640C8(&SchedulerTaskBase___TypeInfo, v7);
    sub_1B640C8(&SchedulerTaskNone_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_1B640C8(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__, v11);
    sub_1B640C8(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__, v12);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v13);
    byte_49F9147 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0LL);
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v16, v17);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0LL);
  if ( !v15 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v15, v18, 0LL);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v20);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_40937516(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance,
    0LL);
  v21 = this->fields.taskScheduler;
  v22 = (SchedulerTaskBase_array *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v23);
  if ( !v22 )
    goto LABEL_22;
  v27 = Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_1B64204(Instance, v22->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !v22->max_length )
    goto LABEL_23;
  v22->m_Items[0] = (SchedulerTaskBase_o *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v22->m_Items, (int32_t)v27, v25, v26);
  if ( !v21
    || (TaskScheduler__AddTask(v21, 0, v22, 0LL),
        v30 = sub_1B64314(SchedulerTaskNone_TypeInfo, v28, v29),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v30, 0LL),
        !v30) )
  {
LABEL_22:
    sub_1B64324(Instance);
  }
  v33 = (System_Delegate_o **)(v30 + 32);
  v34 = *(System_Delegate_o **)(v30 + 32);
  v35 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v31, v32);
  SchedulerTaskBase_TaskCallback___ctor(
    v35,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__39_1__,
    0LL);
  v36 = System_Delegate__Combine(v34, (System_Delegate_o *)v35, 0LL);
  v39 = v36;
  if ( !v36 )
    goto LABEL_16;
  v40 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v36->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v33 = v36, (SchedulerTaskBase_TaskCallback_c *)v36->klass != v40) )
  {
    sub_1B645E4(v36);
LABEL_16:
    *v33 = v39;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v30 + 32), (int32_t)v39, v37, v38);
  v41 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_1B64170(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_22;
  v42 = Instance;
  Instance = (MissionNotifyManager_o *)sub_1B64204(v30, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v45 = sub_1B64348();
    sub_1B641F0(v45, 0LL);
  }
  if ( !LODWORD(v42->fields.mNoDispInfos) )
LABEL_23:
    sub_1B6432C(Instance, v24);
  v42->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->fields.mMissionNotifyComps, v30, v43, v44);
  if ( !v41 )
    goto LABEL_22;
  TaskScheduler__AddTask(v41, 0, (SchedulerTaskBase_array *)v42, 0LL);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_Action_o **p_syncRoot; // x22
  const MethodInfo *v14; // x1
  int size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Delegate_o *syncRoot; // x23
  SchedulerTaskBase_TaskCallback_o *v20; // x24
  System_Delegate_o *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  SchedulerTaskBase_TaskCallback_c *v24; // x1

  if ( (byte_49F9148 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__, finishCallback);
    sub_1B640C8(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__, v5);
    sub_1B640C8(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__, v7);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo, v8);
    byte_49F9148 = 1;
  }
  v9 = sub_1B64314(SubmarineMapManager___c__DisplayClass40_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass40_0___ctor((SubmarineMapManager___c__DisplayClass40_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v9 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)finishCallback, v11, v12);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
                                                                               this,
                                                                               v14);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  size = SubsequentialOpenPanelTasks->fields._size;
  v16 = (System_Collections_Generic_List_SchedulerTaskBase__o *)SubsequentialOpenPanelTasks;
  if ( size < 1 )
  {
LABEL_11:
    ActionExtensions__Call(*p_syncRoot, 0LL);
    return;
  }
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SubsequentialOpenPanelTasks,
                                                                               size - 1,
                                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v20 = (SchedulerTaskBase_TaskCallback_o *)sub_1B64314(SchedulerTaskBase_TaskCallback_TypeInfo, v17, v18);
  SchedulerTaskBase_TaskCallback___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__,
    0LL);
  v21 = System_Delegate__Combine(syncRoot, (System_Delegate_o *)v20, 0LL);
  if ( v21 )
  {
    v24 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v21->klass != SchedulerTaskBase_TaskCallback_TypeInfo
      || (*p_syncRoot = (System_Action_o *)v21, (SchedulerTaskBase_TaskCallback_c *)v21->klass != v24) )
    {
      sub_1B645E4(v21);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0LL;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_syncRoot, (int32_t)v21, v22, v23);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_1B64324(SubsequentialOpenPanelTasks);
  TaskScheduler__AddTask_40937516((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v16, 0LL);
}


void __fastcall SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 eventId; // x0
  const MethodInfo *v7; // x2
  struct MapControl_MapInfo_o *mapInfo; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  Il2CppObject *Request_object; // x20
  const MethodInfo *v13; // x1
  struct MapControl_MapInfo_o *v14; // x8

  if ( (byte_49F913F & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1B640C8(&Method_SubmarineMapManager__TryInitRequest_b__31_0__, v5);
    byte_49F913F = 1;
  }
  this->fields.initRequestFinished = 0;
  eventId = SubmarineMapManager__get_eventId(this, method);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_11;
  if ( SubmarineMapDataManager__HasUserMapData(eventId, mapInfo->fields.mapId, v7) )
  {
    this->fields.initRequestFinished = 1;
    return;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B64314(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v13);
  v14 = this->fields.mapInfo;
  if ( !v14 || !Request_object )
LABEL_11:
    sub_1B64324(eventId);
  EventScanPanelMapRequest__beginRequest(
    (EventScanPanelMapRequest_o *)Request_object,
    eventId,
    v14->fields.mapId,
    0,
    0,
    0LL);
}


void __fastcall SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w20
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_49F9159 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v3);
    byte_49F9159 = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    v8 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v8, v10, v11);
      return;
    }
LABEL_8:
    sub_1B64324(submarineData);
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
  if ( (byte_49F914B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    this = (SubmarineMapManager_o *)sub_1B640C8(
                                      &Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__,
                                      v5);
    byte_49F914B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_1B64324(this);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1B64324(0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  ScrTerminalMap_o *terminalMap; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  UnityEngine_GameObject_c *klass; // x8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  TerminalPramsManager_c *v21; // x0
  TerminalPramsManager_c *v22; // x0
  System_String_array *ValueByArray; // x0
  __int64 v24; // x8
  UnityEngine_GameObject_c *v25; // x8
  TitleInfoControl_o *v26; // x20
  EventDetailEntity_o *v27; // x21
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1

  if ( (byte_49F914C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v8);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__, v9);
    sub_1B640C8(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo, v10);
    byte_49F914C = 1;
  }
  v11 = sub_1B64314(SubmarineMapManager___c__DisplayClass48_0_TypeInfo, method, v2);
  SubmarineMapManager___c__DisplayClass48_0___ctor((SubmarineMapManager___c__DisplayClass48_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_46;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)this, v13, v14);
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v15);
    byte_49F76BD = 1;
  }
  terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = terminalMap->fields.rootEffectP->klass;
  if ( !klass )
    goto LABEL_46;
  terminalMap = *(ScrTerminalMap_o **)&klass->_2.instance_size;
  if ( !terminalMap )
    goto LABEL_46;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)terminalMap, 0LL);
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)terminalMap,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  terminalMap = (ScrTerminalMap_o *)SubmarineMapManager__get_eventId(this, v18);
  if ( !MasterData_object )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         (Il2CppObject **)(v11 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v11 + 32) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9178 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
      byte_49F9178 = 1;
    }
    v21 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v21 = TerminalPramsManager_TypeInfo;
    }
    if ( v21->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v21->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v21);
      if ( !byte_49F9178 )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v19);
        byte_49F9178 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v22->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_46;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v24 = *(_QWORD *)&ValueByArray->max_length;
        if ( v24 )
        {
          if ( !(_DWORD)v24 )
            sub_1B6432C(ValueByArray, v19);
          *(_DWORD *)(v11 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v19);
      byte_49F76BD = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v25 = terminalMap->fields.rootEffectP->klass;
    if ( v25 )
    {
      v26 = *(TitleInfoControl_o **)&v25->_2.instance_size;
      v27 = *(EventDetailEntity_o **)(v11 + 24);
      v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v19, v20);
      System_Action___ctor(
        v28,
        (Il2CppObject *)v11,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( v26 )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(v26, v27, v28, 0LL);
        return;
      }
    }
LABEL_46:
    sub_1B64324(terminalMap);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v29);
  SubmarineMapManager__ShowScannableEffect(this, v30);
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
    sub_1B64324(0LL);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_49F9172 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, v4);
    byte_49F9172 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, 0LL);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._24_OnAfterQuestAfterAction.method)(
    this,
    v5,
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

  if ( (byte_49F9173 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_49F9173 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__SetSkipAnimation((CommonUI_o *)Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F9174 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__, v4);
    byte_49F9174 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v5, v6);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49F9175 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__, v4);
    byte_49F9175 = 1;
  }
  v5 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_3__, 0LL);
  SubmarineMapManager__RevealAvailableSpots(this, v5, v6);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_3(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_49F9176 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_49F9176 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  SubmarineMapManager__OnEndScan(this, v4);
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
    sub_1B64324(this);
  return MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1B64324(this);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1B64324(this);
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
  __int64 v9; // x1
  __int64 v10; // x2
  System_Func_bool__o *v11; // x22
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_WaitUntil_o *v14; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3

  v2 = this;
  if ( (byte_49F9184 & 1) == 0 )
  {
    sub_1B640C8(&System_Func_bool__TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&Method_SubmarineMapManager__CoInitRequest_b__20_0__, v4);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_49F9184 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_1B64324(this);
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
  this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v11 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v9, v10);
  System_Func_bool____ctor(v11, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v12, v13);
  UnityEngine_WaitUntil___ctor(v14, v11, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(p__2__current, (int32_t)v14, v16, v17);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  int32_t v11; // w3
  struct SubmarineMapAssetManager_o *v12; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct SubmarineMapDataManager_o *submarineData; // x8
  int32_t v18; // w0

  v2 = this;
  if ( (byte_49F9185 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_1B640C8(
                                                                  &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                                  v3);
    byte_49F9185 = 1;
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
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields.closedPanelTexture,
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
              sub_1B6406C(
                (ServantStatusBattleListViewItem_o *)&_4__this->fields.closedPanelTexture,
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
      sub_1B64324(this);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F917A & 1) == 0 )
  {
    sub_1B640C8(&SubmarineMapManager___c_TypeInfo, v1);
    byte_49F917A = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SubmarineMapManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)SubmarineMapManager___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *_9__1; // x23
  int32_t v10; // w22
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_49F917B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__, v3);
    byte_49F917B = 1;
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
  v10 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
  }
  if ( !klass )
LABEL_9:
    sub_1B64324(_4__this);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v10, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008(v5, Assets, 0LL);
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
    sub_1B64324(_4__this);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008(v6, inited, 0LL);
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
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F917C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v5);
    byte_49F917C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.__4__this )
    goto LABEL_18;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  if ( !v7 )
    goto LABEL_18;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v7,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_30D3EF8 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_49F76BD )
    {
      sub_1B640C8(&TerminalSceneComponent_TypeInfo, v8);
      byte_49F76BD = 1;
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
    sub_1B64324(Instance);
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
    sub_1B64324(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_49F917D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__, v3);
    byte_49F917D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v8 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v5, v6);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !v8 )
LABEL_8:
    sub_1B64324(_4__this);
  SubmarineMapManager__OpenSelectScannerDialog(v8, _9__1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v9; // x21
  _BOOL4 isShowDialogUpper; // w24
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49F917E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_bool__TypeInfo, method);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__, v3);
    byte_49F917E = 1;
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
  v9 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_1B64314(System_Action_bool__TypeInfo, v5, v6);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v11, v12);
  }
  if ( !v9 )
LABEL_9:
    sub_1B64324(_4__this);
  SubmarineMapManager__OpenScanConfirmDialog(v9, scanId, isShowDialogUpper, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  __int64 v5; // x1
  SubmarineMapManager_o *_4__this; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  SubmarineMapManager_o *v9; // x20
  System_Action_int__o *_9__2; // x22
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49F917F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, yes);
    sub_1B640C8(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__, v5);
    byte_49F917F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, 0LL);
  v9 = this->fields.__4__this;
  if ( yes )
  {
    if ( v9 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, 0LL);
      return;
    }
LABEL_11:
    sub_1B64324(_4__this);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v7, v8);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
  }
  if ( !v9 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v9, _9__2, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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
  UnityEngine_GameObject_c *klass; // x8
  __int64 v7; // x1
  UnityEngine_GameObject_c *v8; // x8

  if ( (byte_49F9180 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v3);
    byte_49F9180 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_22;
  SubmarineMapManager__ResetTimeAcceleration((SubmarineMapManager_o *)Instance, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v5);
    byte_49F76BD = 1;
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
  if ( !byte_49F76BD )
  {
    sub_1B640C8(&TerminalSceneComponent_TypeInfo, v7);
    byte_49F76BD = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = Instance->fields.skipAnimation->klass;
  if ( !v8
    || (Instance = *(CommonUI_o **)&v8->_2.thread_static_fields_offset) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_22:
    sub_1B64324(Instance);
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
    sub_1B64324(this);
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

  if ( (byte_49F9181 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_int___, *(_QWORD *)&scanId);
    byte_49F9181 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2D909D8 *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_49F9182 & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_bool___, yes);
    byte_49F9182 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2D90988 *)Method_ActionExtensions_Call_bool___);
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_1B64324(0LL);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(0LL);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_49F9183 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F9183 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(scanAnimObj, 0LL);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields._Chain_k__BackingField == this->fields.i;
}