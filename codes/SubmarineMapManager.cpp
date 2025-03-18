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

  if ( (byte_4C1EB08 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_1C3B764(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, go);
    byte_4C1EB08 = 1;
  }
  if ( !go )
    goto LABEL_23;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50603580(
                                    go,
                                    (const MethodInfo_304263C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1C3B9C8(this, go);
  }
  v8 = 0x7FFFFFFF;
LABEL_14:
  if ( v8 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50603580(
                                      go,
                                      (const MethodInfo_304263C *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1C3B9C0(this, go);
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

  if ( (byte_4C1EB05 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1EB05 = 1;
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
        sub_1C3B9C8(Children, v5);
      Children = (UnityEngine_GameObject_array *)v7->m_Items[v8];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
    sub_1C3B9C0(Children, v5);
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
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_Dictionary_int__object__o *v42; // x21
  int v43; // w8
  UnityEngine_GameObject_o *v44; // x22
  unsigned int v45; // w19
  Il2CppObject *v46; // x23
  Il2CppClass *v47; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v49; // x24
  __int64 v50; // x0
  __int64 v51; // x1
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  Il2CppObject *current; // x1
  SubmarineSilhouetteData_o **v59; // x23
  __int64 v60; // x0
  __int64 v61; // x1
  System_Predicate_object__o *v62; // x25
  __int64 v63; // x0
  __int64 v64; // x1
  Il2CppObject *v65; // x24
  _BOOL8 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x1
  SubmarineMapDataManager_o *v69; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v71; // x23
  __int64 v72; // x0
  __int64 v73; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v75; // x1
  __int64 v76; // x0
  __int64 v77; // x1
  float32x2_t v78; // d9
  __int128 v79; // q0
  _BOOL8 v80; // x0
  __int64 v81; // x1
  __int128 v82; // q1
  int8x8_t v83; // d0
  int8x8_t v84; // d2
  __int64 v85; // x1
  UnityEngine_Transform_o *v86; // x0
  __int64 v87; // x1
  unsigned __int64 v88; // d0 OVERLAPPED
  int v89; // s1
  int v90; // s2
  float y; // [xsp+10h] [xbp-F0h]
  __int128 v93; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v95; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v97; // [xsp+70h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4C1EB07 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__, v2);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__, v3);
    sub_1C3B764(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v10);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___, v11);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__, v14);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v15);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v16);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___77864888, v17);
    sub_1C3B764(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__, v18);
    sub_1C3B764(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v19);
    sub_1C3B764(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo, v20);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v21);
    sub_1C3B764(&System_Predicate_SrcSpotBasePrefab__TypeInfo, v22);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__, v23);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo, v24);
    byte_4C1EB07 = 1;
  }
  memset(&v97, 0, sizeof(v97));
  value = 0LL;
  memset(&v95, 0, sizeof(v95));
  v25 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
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
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
        v39 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
        ++v25->fields._version;
        if ( !items )
          goto LABEL_59;
        size = v25->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v25,
            Component_object,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
        }
        else
        {
          v41 = &items->obj.klass + size;
          v25->fields._size = size + 1;
          v41[4] = (Il2CppClass *)Component_object;
          sub_1C3B708((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)Component_object, v32, v33, v34, v35, v36, v37);
        }
      }
      klass = (int)v29[1].klass;
      if ( (int)++v30 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_1C3B9C8(Children, v27);
  }
LABEL_17:
  v42 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3B9B0(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v42,
    (const MethodInfo_32F41C8 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  v43 = (int)Children[1].klass;
  v44 = Children;
  if ( v43 >= 1 )
  {
    v45 = 0;
    while ( v45 < v43 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v44[1].monitor + (int)v45);
      if ( !Children )
        goto LABEL_59;
      v46 = UnityEngine_GameObject__GetComponent_object_(
              Children,
              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v46, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v46 )
          goto LABEL_59;
        v47 = v46[7].klass;
        if ( !v47 || !v42 )
          goto LABEL_59;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v42,
          HIDWORD(v47->_1.name),
          v46,
          (const MethodInfo_32F4B88 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v43 = (int)v44[1].klass;
      if ( (int)++v45 >= v43 )
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
    sub_1C3B9C0(Children, v27);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v94,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v97 = v94;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v97,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v49 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v49, 0LL);
    if ( !v49 )
      sub_1C3B9C0(v50, v51);
    current = v97.fields._current;
    *(_QWORD *)(v49 + 16) = v97.fields._current;
    v59 = (SubmarineSilhouetteData_o **)(v49 + 16);
    sub_1C3B708((PartyOrganizationUtility_o *)(v49 + 16), (int64_t)current, v52, v53, v54, v55, v56, v57);
    if ( !*(_QWORD *)(v49 + 16) )
      sub_1C3B9C0(v60, v61);
    if ( *(int *)(*(_QWORD *)(v49 + 16) + 20LL) > 0 )
    {
      v62 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_object____ctor(
        v62,
        (Il2CppObject *)v49,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0LL);
      if ( !v25 )
        sub_1C3B9C0(v63, v64);
      v65 = System_Collections_Generic_List_object___Find(
              v25,
              (System_Predicate_T__o *)v62,
              (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v66 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v65, 0LL, 0LL);
      if ( !v66 )
      {
        if ( !*v59 )
          sub_1C3B9C0(v66, v67);
        if ( !v42 )
          sub_1C3B9C0(v66, v67);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v42,
               (*v59)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_32F6328 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v69 = this->fields.submarineData;
          if ( !v69 )
            sub_1C3B9C0(0LL, v68);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v69,
                                                                                      *v59,
                                                                                      0LL);
          v71 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_object____ctor_57193824(
            v71,
            SilhouetteOccupiedPanels,
            (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___77864888);
          if ( !v65 )
            sub_1C3B9C0(v72, v73);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v65, 0LL);
          if ( !transform )
            sub_1C3B9C0(0LL, v75);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          *(_QWORD *)&v93 = *(_QWORD *)&localPosition.fields.x;
          y = localPosition.fields.y;
          if ( !byte_4C1C511 )
          {
            v76 = sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v77);
            byte_4C1C511 = 1;
          }
          if ( !v71 )
            sub_1C3B9C0(v76, v77);
          v78.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v94,
            v71,
            (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v95 = v94;
          v79 = v93;
          *((float *)&v79 + 1) = y;
          while ( 1 )
          {
            v93 = v79;
            v80 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v95,
                    (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v80 )
              break;
            if ( !v95.fields._current )
              sub_1C3B9C0(v80, v81);
            v83.n64_u64[0] = *(unsigned __int64 *)((char *)&v95.fields._current[1].monitor + 4);
            *(int8x8_t *)&v82 = vbsl_s8(vcgt_f32(v83, *(float32x2_t *)&v93), *(int8x8_t *)&v93, v83);
            v84.n64_u64[0] = vadd_f32(
                               *(float32x2_t *)&v82,
                               vsub_f32(vadd_f32(v78, *(float32x2_t *)&v93), *(float32x2_t *)&v82)).n64_u64[0];
            v78.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v84, v83), v84, v83), *(float32x2_t *)&v82).n64_u64[0];
            v79 = v82;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v95,
            (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_1C3B9C0(0LL, v85);
          v86 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0LL);
          if ( !v86 )
            sub_1C3B9C0(0LL, v87);
          v88 = vadd_f32(vmul_f32(v78, (float32x2_t)0x3F0000003F000000LL), *(float32x2_t *)&v93).n64_u64[0];
          v89 = HIDWORD(v88);
          v90 = 0;
          UnityEngine_Transform__set_localPosition(v86, *(UnityEngine_Vector3_o *)&v88, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v97,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
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
  const MethodInfo_37AC6A8 *v9; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v11; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v12; // 0:x0.12
  System_Nullable_Vector3__o v13; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C1EB04 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Nullable_Vector2___ctor__, spot);
    this = (SubmarineMapManager_o *)sub_1C3B764(&Method_System_Nullable_Vector3___ctor__, v5);
    byte_4C1EB04 = 1;
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
  System_Nullable_Vector2____ctor(v12, PanelUnitSize_k__BackingField, (const MethodInfo_37AC288 *)method);
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v8);
    byte_4C1C511 = 1;
  }
  *(_QWORD *)&v13.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v13.fields.hasValue = &centerPosition;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v13, zeroVector, v9);
  if ( !spot )
LABEL_9:
    sub_1C3B9C0(this, spot);
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
    sub_1C3B9C0(this, spot);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v31; // 0:x5.8

  if ( (byte_4C1EAFF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_1C3B764(&DataManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Nullable_float___ctor__, v5);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_1C3B764(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, v8);
    sub_1C3B764(&SubmarineMapManager___c_TypeInfo, v9);
    sub_1C3B764(&StringLiteral_7068/*"HYDE_SVT_ID"*/, v10);
    byte_4C1EAFF = 1;
  }
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2FF01B0 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v15->max_length )
    goto LABEL_23;
  if ( !Instance )
    goto LABEL_22;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)Instance, v15->m_Items[1], 143, 0LL) )
    return;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v15->max_length )
LABEL_23:
    sub_1C3B9C8(Instance, v12);
  v16 = (CommonUI_o *)Instance;
  v17 = v15->m_Items[1];
  v18 = SubmarineMapManager___c_TypeInfo;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v18 = SubmarineMapManager___c_TypeInfo;
  }
  _9__49_0 = v18->static_fields->__9__49_0;
  v20 = (System_String_o *)StringLiteral_7068/*"HYDE_SVT_ID"*/;
  if ( !_9__49_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = SubmarineMapManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v21, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_37AA644 *)Method_System_Nullable_float___ctor__);
  if ( !v16 )
LABEL_22:
    sub_1C3B9C0(Instance, v12);
  v31 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v16, v17, v20, _9__49_0, 0, v31, 0.0, 0LL);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x2
  SubmarineMapPanelData_o *v26; // x1
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  int64_t v34; // x21
  System_Delegate_o **v35; // x22
  System_Delegate_o *v36; // x23
  SchedulerTaskBase_TaskCallback_o *v37; // x24
  System_Delegate_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  SchedulerTaskBase_TaskCallback_c *v45; // x1
  TaskScheduler_o *taskScheduler; // x19
  __int64 v47; // x20
  __int64 v48; // x0
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  __int64 v56; // x0

  if ( (byte_4C1EAF5 & 1) == 0 )
  {
    sub_1C3B764(&SchedulerTaskBase___TypeInfo, panelData);
    sub_1C3B764(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_1C3B764(&Method_SubmarineMapManager_ClickPanel__, v6);
    sub_1C3B764(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__, v8);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo, v9);
    byte_4C1EAF5 = 1;
  }
  v10 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_28;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = panelData;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)panelData, v19, v20, v21, v22, v23, v24);
  v26 = *(SubmarineMapPanelData_o **)(v10 + 24);
  if ( !v26 || !this->fields.isEnableClickPanel )
    return;
  if ( !v26->fields._IsOpened_k__BackingField || !v26->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v26->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v26, v25);
    v29 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1C3B77C(Method_SubmarineMapManager_ClickPanel__);
    v30 = (System_Reflection_MethodBase_o *)sub_1C3B748(v29, v29[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v34 = sub_1C3B9B0(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v34, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v34 )
        {
          v35 = (System_Delegate_o **)(v34 + 32);
          v36 = *(System_Delegate_o **)(v34 + 32);
          v37 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(
            v37,
            (Il2CppObject *)v10,
            Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__,
            0LL);
          v38 = System_Delegate__Combine(v36, (System_Delegate_o *)v37, 0LL);
          if ( v38 )
          {
            v45 = SchedulerTaskBase_TaskCallback_TypeInfo;
            if ( (SchedulerTaskBase_TaskCallback_c *)v38->klass != SchedulerTaskBase_TaskCallback_TypeInfo
              || (*v35 = v38, (SchedulerTaskBase_TaskCallback_c *)v38->klass != v45) )
            {
              sub_1C3BC80(v38);
              return;
            }
          }
          else
          {
            *v35 = 0LL;
          }
          sub_1C3B708((PartyOrganizationUtility_o *)(v34 + 32), (int64_t)v38, v39, v40, v41, v42, v43, v44);
          taskScheduler = this->fields.taskScheduler;
          v11 = sub_1C3B80C(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v11 )
          {
            v47 = v11;
            v48 = sub_1C3B8A0(v34, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
            if ( !v48 )
            {
              v56 = sub_1C3B9E4();
              sub_1C3B88C(v56, 0LL);
            }
            if ( !*(_DWORD *)(v47 + 24) )
              sub_1C3B9C8(v48, v49);
            *(_QWORD *)(v47 + 32) = v34;
            sub_1C3B708((PartyOrganizationUtility_o *)(v47 + 32), v34, v50, v51, v52, v53, v54, v55);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v47, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1C3B9C0(v11, v12);
  }
  v27 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v27 = (_QWORD *)sub_1C3B77C(Method_SubmarineMapManager_ClickPanel__);
  v28 = (System_Reflection_MethodBase_o *)sub_1C3B748(v27, v27[4]);
  OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0LL);
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

  if ( (byte_4C1EAEC & 1) == 0 )
  {
    sub_1C3B764(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo, finishCallback);
    byte_4C1EAEC = 1;
  }
  v5 = sub_1C3B9B0(SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)finishCallback, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4C1EAED & 1) == 0 )
  {
    sub_1C3B764(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo, finishCallback);
    byte_4C1EAED = 1;
  }
  v5 = sub_1C3B9B0(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)finishCallback, v12, v13, v14, v15, v16, v17);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v20; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v30; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4C1EB09 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___, v3);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___, v4);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    byte_4C1EB09 = 1;
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
           (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v8,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = (struct SubmarineScanConfirmDialog_o *)Component_object;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.scanConfirmDialog,
      (int64_t)Component_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
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
    v20 = this->fields.assetManager;
    if ( !v20 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v20->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__Instantiate_object_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_28;
    v22 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v8,
            (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = (struct SubmarineSelectScannerDialog_o *)v22;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.selectScannerDialog,
      (int64_t)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
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
    v30 = this->fields.assetManager;
    if ( v30 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v30->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__Instantiate_object_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_3076DB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v32 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v8,
                (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = (struct SubmarineNewScannerDialog_o *)v32;
        sub_1C3B708(
          (PartyOrganizationUtility_o *)&this->fields.newScannerDialog,
          (int64_t)v32,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_28:
    sub_1C3B9C0(v8, v9);
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

  if ( (byte_4C1EAF2 & 1) == 0 )
  {
    sub_1C3B764(&SubmarineMapAssetManager_TypeInfo, method);
    byte_4C1EAF2 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_1C3B9B0(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v5;
    sub_1C3B708(p_assetManager, (int64_t)v5, v7, v8, v9, v10, v11, v12);
    if ( !p_assetManager->klass )
      sub_1C3B9C0(0LL, v13);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v13);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct SubmarineMapAssetManager_o *v15; // x8
  struct ScrTerminalMap_o *v16; // x9
  Il2CppObject *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v18; // x0
  Il2CppObject *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct SubmarineMapAssetManager_o *v26; // x8
  struct ScrTerminalMap_o *v27; // x9
  Il2CppObject *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v29; // x0
  Il2CppObject *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  v2 = this;
  if ( (byte_4C1EB00 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, method);
    this = (SubmarineMapManager_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1EB00 = 1;
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
  v8 = UnityEngine_Object__Instantiate_object__50818788(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v8;
  sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.panelContainer, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = v2->fields.assetManager;
  if ( !v15 )
    goto LABEL_15;
  v16 = v2->fields.terminalMap;
  if ( !v16 )
    goto LABEL_15;
  this = (SubmarineMapManager_o *)v16->fields.dispRoot;
  if ( !this )
    goto LABEL_15;
  EffectContainerPrefab_k__BackingField = (Il2CppObject *)v15->fields._EffectContainerPrefab_k__BackingField;
  v18 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v19 = UnityEngine_Object__Instantiate_object__50818788(
          EffectContainerPrefab_k__BackingField,
          v18,
          (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v19;
  sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.effectContainer, (int64_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = v2->fields.assetManager;
  if ( !v26 || (v27 = v2->fields.terminalMap) == 0LL || (this = (SubmarineMapManager_o *)v27->fields.dispRoot) == 0LL )
LABEL_15:
    sub_1C3B9C0(this, method);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v26->fields._GridLinePrefab_k__BackingField;
  v29 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v30 = UnityEngine_Object__Instantiate_object__50818788(
          GridLinePrefab_k__BackingField,
          v29,
          (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v30;
  sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields.gridLine, (int64_t)v30, v31, v32, v33, v34, v35, v36);
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
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  Il2CppObject *current; // x1
  SubmarineSilhouetteData_o **v38; // x22
  __int64 v39; // x1
  const MethodInfo *v40; // x2
  SubmarineSilhouetteData_o *v41; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v43; // x1
  __int64 v44; // x1
  SubmarineMapDataManager_o *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v47; // x24
  __int64 v48; // x0
  __int64 v49; // x1
  SubmarineMapManager___c_c *v50; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v52; // x26
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v61; // x1
  System_Collections_Generic_List_object__o *v62; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  System_Predicate_object__o *v65; // x26
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v71; // x1
  UnityEngine_Transform_o *v72; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x0
  const MethodInfo *v78; // x1
  int v79; // s0
  struct SubmarineMapDataManager_o *v82; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  struct System_Object_array *items; // x8
  _QWORD *v93; // x9
  __int64 size; // x10
  Il2CppClass **v95; // x0
  System_Object_array *v96; // x1
  const MethodInfo *v97; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x1
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  System_Collections_Generic_List_Enumerator_object__o v111; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C1EB22 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___77864888, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v14);
    sub_1C3B764(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v15);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v16);
    sub_1C3B764(&System_Predicate_SubmarineMapPanelData__TypeInfo, v17);
    sub_1C3B764(&System_Predicate_MapControl_SpotInfo__TypeInfo, v18);
    sub_1C3B764(&SrcSpotBasePrefab_TypeInfo, v19);
    sub_1C3B764(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__, v20);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__, v21);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo, v22);
    sub_1C3B764(&SubmarineMapManager___c_TypeInfo, v23);
    byte_4C1EB22 = 1;
  }
  memset(&v112, 0, sizeof(v112));
  v24 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_1C3B9C0(SilhouetteDataList_k__BackingField, v26);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v111,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v112 = v111;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v112,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v28 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v28, 0LL);
    if ( !v28 )
      sub_1C3B9C0(v29, v30);
    current = v112.fields._current;
    *(_QWORD *)(v28 + 16) = v112.fields._current;
    v38 = (SubmarineSilhouetteData_o **)(v28 + 16);
    sub_1C3B708((PartyOrganizationUtility_o *)(v28 + 16), (int64_t)current, v31, v32, v33, v34, v35, v36);
    v41 = *(SubmarineSilhouetteData_o **)(v28 + 16);
    if ( !v41 )
      sub_1C3B9C0(0LL, v39);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v41, beforeClearQuestId, v40);
    if ( HasClearCondQuestId )
    {
      if ( !*v38 )
        sub_1C3B9C0(HasClearCondQuestId, v43);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v38)->fields._ObjectQuestIds_k__BackingField, -1, 0, 0LL) )
      {
        v45 = this->fields.submarineData;
        if ( !v45 )
          sub_1C3B9C0(0LL, v44);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v45,
                                                                                    *v38,
                                                                                    0LL);
        v47 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_object____ctor_57193824(
          v47,
          SilhouetteOccupiedPanels,
          (const MethodInfo_368B560 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___77864888);
        v50 = SubmarineMapManager___c_TypeInfo;
        if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v50 = SubmarineMapManager___c_TypeInfo;
        }
        _9__101_0 = (System_Predicate_object__o *)v50->static_fields->__9__101_0;
        if ( !_9__101_0 )
        {
          if ( !v50->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v50);
            v50 = SubmarineMapManager___c_TypeInfo;
          }
          v52 = (Il2CppObject *)v50->static_fields->__9;
          _9__101_0 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_object____ctor(
            _9__101_0,
            v52,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0LL);
          static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          static_fields->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&static_fields->__9__101_0,
            (int64_t)_9__101_0,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
        }
        if ( !v47 )
          sub_1C3B9C0(v48, v49);
        All = System_Collections_Generic_List_object___FindAll(
                v47,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_368C37C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v62 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_1C3B9C0(0LL, v61);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_1C3B9C0(0LL, v61);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v65 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            v65,
            (Il2CppObject *)v28,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0LL);
          if ( !SpotList )
            sub_1C3B9C0(v66, v67);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v65,
                 (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_1C3B9C0(0LL, v68);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v38 )
              sub_1C3B9C0(transform, v71);
            v72 = transform;
            SpotId_k__BackingField = (*v38)->fields._SpotId_k__BackingField;
            if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v72 )
              sub_1C3B9C0(GobjName, GobjName);
            v75 = UnityEngine_Transform__Find(v72, GobjName, 0LL);
            if ( !v75 )
              sub_1C3B9C0(0LL, v76);
            *(UnityEngine_Vector3_o *)&v79 = UnityEngine_Transform__get_localPosition(v75, 0LL);
            v82 = this->fields.submarineData;
            if ( !v82 )
              sub_1C3B9C0(v77, v78);
            Settings_k__BackingField = v82->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_1C3B9C0(v77, v78);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         *(UnityEngine_Vector3_o *)&v79,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v78);
            v91 = (int64_t)MoveCameraToPositionTask;
            if ( !v24 )
              sub_1C3B9C0(MoveCameraToPositionTask, MoveCameraToPositionTask);
            items = v24->fields._items;
            v93 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v24->fields._version;
            if ( !items )
              sub_1C3B9C0(MoveCameraToPositionTask, MoveCameraToPositionTask);
            size = v24->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v24,
                MoveCameraToPositionTask,
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
            }
            else
            {
              v95 = &items->obj.klass + size;
              v24->fields._size = size + 1;
              v95[4] = (Il2CppClass *)v91;
              sub_1C3B708((PartyOrganizationUtility_o *)(v95 + 4), v91, v85, v86, v87, v88, v89, v90);
            }
          }
          v96 = System_Collections_Generic_List_object___ToArray(
                  v62,
                  (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v96,
                                                           v97);
          v105 = (int64_t)OpenPanelsAndRevealSpotsTask;
          if ( !v24 )
            sub_1C3B9C0(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v106 = v24->fields._items;
          v107 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
          ++v24->fields._version;
          if ( !v106 )
            sub_1C3B9C0(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v108 = v24->fields._size;
          if ( (unsigned int)v108 >= v106->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v24,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
          }
          else
          {
            v109 = &v106->obj.klass + v108;
            v24->fields._size = v108 + 1;
            v109[4] = (Il2CppClass *)v105;
            sub_1C3B708((PartyOrganizationUtility_o *)(v109 + 4), v105, v99, v100, v101, v102, v103, v104);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v112,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v24;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_4C1EB1F & 1) == 0 )
  {
    sub_1C3B764(&SchedulerTaskNone_TypeInfo, panelData);
    byte_4C1EB1F = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_1C3B9B0(SchedulerTaskNone_TypeInfo);
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
  const MethodInfo_37AC288 *v5; // x2
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
  if ( (byte_4C1EB18 & 1) == 0 )
  {
    sub_1C3B764(&MapCameraPerformance_TypeInfo, method);
    sub_1C3B764(&Method_System_Nullable_Vector2___ctor__, v11);
    sub_1C3B764(&Method_System_Nullable_float___ctor__, v12);
    byte_4C1EB18 = 1;
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
  System_Nullable_float____ctor(v19, size, (const MethodInfo_37AA644 *)Method_System_Nullable_float___ctor__);
  v14 = (MapCameraPerformance_o *)sub_1C3B9B0(MapCameraPerformance_TypeInfo);
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
  if ( (byte_4C1EB02 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, method);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    this = (SubmarineMapManager_o *)sub_1C3B764(&PanelUniqueIDUtil_TypeInfo, v5);
    byte_4C1EB02 = 1;
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
    sub_1C3B9C0(this, method);
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
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__50818788(
                                        v17,
                                        transform,
                                        (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
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
                                        (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
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
        sub_1C3B9C8(this, method);
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
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__50818788(
                                          v37,
                                          v38,
                                          (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
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
                                          (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
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
  const MethodInfo_37AC6A8 *v19; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v21; // x22
  SchedulerTaskCommonEffect_o *v22; // x0
  int64_t v23; // x21
  _QWORD *v24; // x22
  System_Delegate_o *v25; // x23
  SchedulerTaskBase_TaskCallback_o *v26; // x24
  System_Delegate_o *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x8
  SchedulerTaskBase_TaskCallback_c *v35; // x1
  SchedulerTaskBase_array *v36; // x22
  SchedulerTaskWaitTime_o *v37; // x23
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  SchedulerTaskOrthostichy_o *v50; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v53; // s8
  System_Collections_Generic_List_object__o *v54; // x22
  SchedulerTaskWaitTime_o *v55; // x23
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct System_Object_array *items; // x8
  _QWORD *v63; // x9
  __int64 size; // x10
  Il2CppClass **v65; // x0
  const MethodInfo *v66; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v68; // x19
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  SchedulerTaskBase_array *v75; // x20
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  SchedulerTaskParallel_o *v82; // x19
  __int64 v84; // x0
  System_Nullable_Vector3__o v85; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v86; // 0:x0.16
  System_Nullable_Vector3__o v87; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C1EB1C & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, panelData);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9);
    sub_1C3B764(&Method_System_Nullable_Vector3___ctor__, v10);
    sub_1C3B764(&SchedulerTaskBase___TypeInfo, v11);
    sub_1C3B764(&SchedulerTaskCommonEffect_TypeInfo, v12);
    sub_1C3B764(&SchedulerTaskOrthostichy_TypeInfo, v13);
    sub_1C3B764(&SchedulerTaskParallel_TypeInfo, v14);
    sub_1C3B764(&SchedulerTaskWaitTime_TypeInfo, v15);
    sub_1C3B764(&Method_SubmarineMapPanelData_OpenPanel__, v16);
    sub_1C3B764(&SchedulerTaskBase_TaskCallback_TypeInfo, v17);
    byte_4C1EB1C = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_32;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  *(_QWORD *)&v86.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  v21 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v86.fields.hasValue = &v85;
  *(_QWORD *)&v85.fields.hasValue = 0LL;
  *(_QWORD *)&v85.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v86, LocalPosition_k__BackingField, v19);
  v22 = (SchedulerTaskCommonEffect_o *)sub_1C3B9B0(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v87.fields.hasValue = 0LL;
  *(_QWORD *)&v87.fields.value.fields.y = 0LL;
  v23 = (int64_t)v22;
  SchedulerTaskCommonEffect___ctor_42759456(
    v22,
    v21,
    effectScanedPanelObjPool,
    v85,
    v87,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v23 )
    goto LABEL_32;
  v24 = (_QWORD *)(v23 + 24);
  v25 = *(System_Delegate_o **)(v23 + 24);
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v26, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v27 = System_Delegate__Combine(v25, (System_Delegate_o *)v26, 0LL);
  v34 = (int64_t)v27;
  if ( v27 )
  {
    v35 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v27->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v24 = v27;
      if ( (SchedulerTaskBase_TaskCallback_c *)v27->klass == v35 )
        goto LABEL_11;
    }
    sub_1C3BC80(v27);
  }
  *v24 = v34;
LABEL_11:
  sub_1C3B708((PartyOrganizationUtility_o *)(v23 + 24), v34, v28, v29, v30, v31, v32, v33);
  v36 = (SchedulerTaskBase_array *)sub_1C3B80C(SchedulerTaskBase___TypeInfo, 2LL);
  v37 = (SchedulerTaskWaitTime_o *)sub_1C3B9B0(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v37, waitTime, 0LL);
  if ( !v36 )
    goto LABEL_32;
  if ( v37 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C3B8A0(v37, v36->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v36->max_length )
    goto LABEL_33;
  v36->m_Items[0] = (SchedulerTaskBase_o *)v37;
  sub_1C3B708((PartyOrganizationUtility_o *)v36->m_Items, (int64_t)v37, v38, v39, v40, v41, v42, v43);
  effectContainer = (UnityEngine_GameObject_o *)sub_1C3B8A0(v23, v36->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( v36->max_length <= 1 )
    goto LABEL_33;
  v36->m_Items[1] = (SchedulerTaskBase_o *)v23;
  sub_1C3B708((PartyOrganizationUtility_o *)&v36->m_Items[1], v23, v44, v45, v46, v47, v48, v49);
  v50 = (SchedulerTaskOrthostichy_o *)sub_1C3B9B0(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v50, v36, 0LL);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v53 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v54 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v55 = (SchedulerTaskWaitTime_o *)sub_1C3B9B0(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v55, v53, 0LL);
  if ( !v54 )
    goto LABEL_32;
  items = v54->fields._items;
  v63 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v54->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v54->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v54,
      (Il2CppObject *)v55,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &items->obj.klass + size;
    v54->fields._size = size + 1;
    v65[4] = (Il2CppClass *)v55;
    sub_1C3B708((PartyOrganizationUtility_o *)(v65 + 4), (int64_t)v55, v56, v57, v58, v59, v60, v61);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v66);
  System_Collections_Generic_List_object___AddRange(
    v54,
    RevealSpotOnPanelTasks,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v68 = (SchedulerTaskOrthostichy_o *)sub_1C3B9B0(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor_42762312(v68, (System_Collections_Generic_List_SchedulerTaskBase__o *)v54, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)sub_1C3B80C(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !effectContainer )
LABEL_32:
    sub_1C3B9C0(effectContainer, panelData);
  v75 = (SchedulerTaskBase_array *)effectContainer;
  if ( v50 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C3B8A0(v50, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v75->max_length )
    goto LABEL_33;
  v75->m_Items[0] = (SchedulerTaskBase_o *)v50;
  sub_1C3B708((PartyOrganizationUtility_o *)v75->m_Items, (int64_t)v50, v69, v70, v71, v72, v73, v74);
  if ( v68 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C3B8A0(v68, v75->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v84 = sub_1C3B9E4();
      sub_1C3B88C(v84, 0LL);
    }
  }
  if ( v75->max_length <= 1 )
LABEL_33:
    sub_1C3B9C8(effectContainer, panelData);
  v75->m_Items[1] = (SchedulerTaskBase_o *)v68;
  sub_1C3B708((PartyOrganizationUtility_o *)&v75->m_Items[1], (int64_t)v68, v76, v77, v78, v79, v80, v81);
  v82 = (SchedulerTaskParallel_o *)sub_1C3B9B0(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v82, v75, 0LL);
  return (SchedulerTaskBase_o *)v82;
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  int64_t v23; // x1
  Il2CppClass **v24; // x0
  SchedulerTaskParallel_o *v25; // x19

  if ( (byte_4C1EB1D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, panelDataArray);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_1C3B764(&SchedulerTaskParallel_TypeInfo, v7);
    byte_4C1EB1D = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  v12 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1C3B9C8(OpenPanelAndRevealSpotTask, v10);
      OpenPanelAndRevealSpotTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                     this,
                                                     panelDataArray->m_Items[v13],
                                                     0.0,
                                                     v11);
      if ( !v8 )
        break;
      items = v8->fields._items;
      v21 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      v23 = (int64_t)OpenPanelAndRevealSpotTask;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          OpenPanelAndRevealSpotTask,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v23;
        sub_1C3B708((PartyOrganizationUtility_o *)(v24 + 4), v23, v14, v15, v16, v17, v18, v19);
      }
      LODWORD(v12) = panelDataArray->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1C3B9C0(OpenPanelAndRevealSpotTask, v10);
  }
LABEL_13:
  v25 = (SchedulerTaskParallel_o *)sub_1C3B9B0(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_42763344(v25, (System_Collections_Generic_List_SchedulerTaskBase__o *)v8, 0LL);
  return (SchedulerTaskBase_o *)v25;
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
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_Action_object__o *v42; // x21
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C1EB01 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_SubmarineMapPanelData__TypeInfo, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v7);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    this = (SubmarineMapManager_o *)sub_1C3B764(&Method_SubmarineMapManager_ClickPanel__, v10);
    byte_4C1EB01 = 1;
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
              (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v45 = v44;
            while ( 1 )
            {
              v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v45,
                      (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v16 )
                break;
              v18 = v2->fields.assetManager;
              if ( !v18 )
                sub_1C3B9C0(v16, v17);
              v19 = v2->fields.panelContainer;
              if ( !v19 )
                sub_1C3B9C0(0LL, v17);
              current = v45.fields._current;
              v21 = (Il2CppObject *)v18->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v19, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              v23 = UnityEngine_Object__Instantiate_object__50818788(
                      v21,
                      transform,
                      (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
              v25 = (UnityEngine_GameObject_o *)v23;
              if ( !v23 )
                sub_1C3B9C0(0LL, v24);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v23,
                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v28 = v2->fields.submarineData;
              if ( !v28 )
                sub_1C3B9C0(Component_object, v27);
              if ( !current )
                sub_1C3B9C0(Component_object, v27);
              v29 = (SubmarineMapPanelComponent_o *)Component_object;
              PositionCalculator_k__BackingField = v28->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_1C3B9C0(0LL, v27);
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
                                    0LL);
              if ( !v29 )
                sub_1C3B9C0(ClosedPanelDomain, v34);
              v35 = ClosedPanelDomain;
              SubmarineMapPanelComponent__Initialize(v29, 0LL);
              v47.fields.z = 0.0;
              v47.fields.x = v31;
              v47.fields.y = v32;
              GameObjectExtensions__SetLocalPosition(v25, v47, 0LL);
              SubmarineMapPanelComponent__SetSize(v29, v35, 0LL);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v29, v35, v2->fields.closedPanelTexture, 0LL);
              current[3].klass = (Il2CppClass *)v29;
              sub_1C3B708((PartyOrganizationUtility_o *)&current[3], (int64_t)v29, v36, v37, v38, v39, v40, v41);
              v42 = (System_Action_object__o *)sub_1C3B9B0(System_Action_SubmarineMapPanelData__TypeInfo);
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
              (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_1C3B9C0(this, method);
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

  if ( (byte_4C1EB20 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v4);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v5);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v6);
    byte_4C1EB20 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
        sub_1C3B9C8(Children, v9);
      Children = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
          (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v7;
    }
LABEL_15:
    sub_1C3B9C0(Children, v9);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  __int64 v24; // x21
  System_Collections_Generic_List_object__o *v25; // x20
  SchedulerTaskNone_o *v26; // x23
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_List_object__o *SpotList; // x23
  System_Predicate_object__o *v38; // x24
  __int64 v39; // x8
  UnityEngine_Transform_o *v40; // x21
  int32_t v41; // w22
  UnityEngine_Object_o *v42; // x21
  Il2CppObject *Component_object; // x1
  const MethodInfo *v45; // x2

  if ( (byte_4C1EB1B & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___, panelData);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&System_Predicate_MapControl_SpotInfo__TypeInfo, v10);
    sub_1C3B764(&SchedulerTaskNone_TypeInfo, v11);
    sub_1C3B764(&SrcSpotBasePrefab_TypeInfo, v12);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__, v13);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo, v14);
    byte_4C1EB1B = 1;
  }
  v15 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_25;
  *(_QWORD *)(v15 + 16) = panelData;
  v24 = v15 + 16;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)panelData, v18, v19, v20, v21, v22, v23);
  v25 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v26 = (SchedulerTaskNone_o *)sub_1C3B9B0(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v26, 0LL);
  if ( !v25 )
    goto LABEL_25;
  items = v25->fields._items;
  v34 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v25->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v25->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v25,
      (Il2CppObject *)v26,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &items->obj.klass + size;
    v25->fields._size = size + 1;
    v36[4] = (Il2CppClass *)v26;
    sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v26, v27, v28, v29, v30, v31, v32);
  }
  if ( !*(_QWORD *)v24 || *(int *)(*(_QWORD *)v24 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v25;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v38 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_MapControl_SpotInfo__TypeInfo);
  System_Predicate_object____ctor(
    v38,
    (Il2CppObject *)v15,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__,
    0LL);
  if ( !SpotList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Find(
          SpotList,
          (System_Predicate_T__o *)v38,
          (const MethodInfo_368C2D4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v25;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_25;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v39 = *(_QWORD *)v24;
  if ( !*(_QWORD *)v24 )
    goto LABEL_25;
  v40 = (UnityEngine_Transform_o *)mapInfo;
  v41 = *(_DWORD *)(v39 + 40);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v41, 0LL);
  if ( !v40 )
    goto LABEL_25;
  v42 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v40, (System_String_o *)mapInfo, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v42, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v25;
  if ( !v42 )
LABEL_25:
    sub_1C3B9C0(mapInfo, v17);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v42,
                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v45);
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
  int64_t v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  int64_t v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0

  if ( (byte_4C1EB21 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, spot);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_1C3B764(&SubmarineLightenSpotPerformance_TypeInfo, v8);
    sub_1C3B764(&SubmarineRevealSpotPerformance_TypeInfo, v9);
    byte_4C1EB21 = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v14);
  v15 = sub_1C3B9B0(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v15, 0LL);
  *(_QWORD *)(v15 + 48) = spot;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 48), (int64_t)spot, v16, v17, v18, v19, v20, v21);
  if ( !v10 )
    goto LABEL_20;
  items = v10->fields._items;
  v29 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v10->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v10->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v15,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    v10->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v15;
    sub_1C3B708((PartyOrganizationUtility_o *)(v31 + 4), v15, v22, v23, v24, v25, v26, v27);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v10;
  v32 = sub_1C3B9B0(SubmarineLightenSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v32, 0LL);
  *(_QWORD *)(v32 + 48) = spot;
  sub_1C3B708((PartyOrganizationUtility_o *)(v32 + 48), (int64_t)spot, v33, v34, v35, v36, v37, v38);
  v45 = v10->fields._items;
  v46 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v10->fields._version;
  if ( !v45 )
LABEL_20:
    sub_1C3B9C0(mMapCtrl_SpotInfo, v12);
  v47 = v10->fields._size;
  if ( (unsigned int)v47 >= v45->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v10,
      (Il2CppObject *)v32,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = &v45->obj.klass + v47;
    v10->fields._size = v47 + 1;
    v48[4] = (Il2CppClass *)v32;
    sub_1C3B708((PartyOrganizationUtility_o *)(v48 + 4), v32, v39, v40, v41, v42, v43, v44);
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
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x21
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v44; // x23
  struct SubmarineMapManager___c_StaticFields *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int32_t v52; // w23
  __int64 v53; // x22
  int v54; // w29
  float v55; // s9
  System_Predicate_object__o *v56; // x23
  System_Collections_Generic_List_T__o *v57; // x23
  System_Collections_Generic_List_object__o *v58; // x0
  _BOOL8 v59; // x0
  __int64 v60; // x1
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v62; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v64; // x2
  float v65; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  Il2CppObject *v73; // x1
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v79; // w8
  SchedulerTaskParallel_o *v80; // x19
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4C1EB1E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___, *(_QWORD *)&scanId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v9);
    sub_1C3B764(&System_Func_SubmarineScanEvent__int__TypeInfo, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__, v12);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v14);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v15);
    sub_1C3B764(&System_Predicate_SubmarineScanEvent__TypeInfo, v16);
    sub_1C3B764(&SchedulerTaskParallel_TypeInfo, v17);
    sub_1C3B764(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__, v18);
    sub_1C3B764(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__, v19);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__, v20);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo, v21);
    sub_1C3B764(&SubmarineMapManager___c_TypeInfo, v22);
    byte_4C1EB1E = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v23 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
    _9__97_0 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_object____ctor(
      _9__97_0,
      v32,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__,
      0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&static_fields->__9__97_0,
      (int64_t)_9__97_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  if ( !v30 )
    goto LABEL_48;
  All = System_Collections_Generic_List_object___FindAll(
          v30,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_368C37C *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
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
    _9__97_1 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__97_1,
      v44,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__,
      0LL);
    v45 = SubmarineMapManager___c_TypeInfo->static_fields;
    v45->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_1C3B708((PartyOrganizationUtility_o *)&v45->__9__97_1, (int64_t)_9__97_1, v46, v47, v48, v49, v50, v51);
  }
  v52 = System_Linq_Enumerable__Max_object_(
          v42,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_3018F04 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v53 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v53, 0LL);
  if ( !v53 )
LABEL_48:
    sub_1C3B9C0(Settings_k__BackingField, v25);
  v54 = v52 + 1;
  *(_DWORD *)(v53 + 16) = 0;
  if ( v52 + 1 >= 1 )
  {
    v55 = 0.0;
    do
    {
      v56 = (System_Predicate_object__o *)sub_1C3B9B0(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_object____ctor(
        v56,
        (Il2CppObject *)v53,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0LL);
      if ( !v42 )
        goto LABEL_48;
      v57 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v42,
              (System_Predicate_T__o *)v56,
              (const MethodInfo_368C37C *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v58 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v58,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v57 )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v82,
        (System_Collections_Generic_List_object__o *)v57,
        (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v83 = v82;
      while ( 1 )
      {
        v59 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v83,
                (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v59 )
          break;
        current = v83.fields._current;
        if ( !v83.fields._current )
          sub_1C3B9C0(v59, v60);
        v62 = this->fields.submarineData;
        if ( !v62 )
          sub_1C3B9C0(0LL, v60);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v62,
                           (int32_t)v83.fields._current[1].klass,
                           HIDWORD(v83.fields._current[1].klass),
                           0LL);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v65,
                                v64);
            v73 = (Il2CppObject *)HitObstractTask;
            if ( !v23 )
              sub_1C3B9C0(HitObstractTask, HitObstractTask);
            items = v23->fields._items;
            v75 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1C3B9C0(HitObstractTask, HitObstractTask);
            size = v23->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v23,
              v73,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v55,
                                           v64);
            v73 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v23 )
              sub_1C3B9C0(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            items = v23->fields._items;
            v75 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v23->fields._version;
            if ( !items )
              sub_1C3B9C0(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            size = v23->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_32:
            v77 = &items->obj.klass + size;
            v23->fields._size = size + 1;
            v77[4] = (Il2CppClass *)v73;
            sub_1C3B708((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v73, v67, v68, v69, v70, v71, v72);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v83,
        (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v55 = ScanOpenPanelInterval + v55;
      v79 = *(_DWORD *)(v53 + 16) + 1;
      *(_DWORD *)(v53 + 16) = v79;
    }
    while ( v79 < v54 );
  }
  v80 = (SchedulerTaskParallel_o *)sub_1C3B9B0(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_42763344(v80, (System_Collections_Generic_List_SchedulerTaskBase__o *)v23, 0LL);
  return (SchedulerTaskBase_o *)v80;
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
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v44; // d11
  float32x2_t v45; // d9
  int32x2_t v46; // d10
  float32x2_t v47; // d8
  System_Collections_Generic_List_object__o *v48; // x19
  struct SubmarineMapDataManager_o *v49; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v51; // d0 OVERLAPPED
  float v52; // s8
  int v53; // s2
  int v54; // s1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  int64_t v64; // x1
  Il2CppClass **v65; // x0
  const MethodInfo *v66; // x2
  Il2CppObject *ScanAnimObjectPrefab; // x22
  const MethodInfo *v68; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v70; // s2
  float v71; // s0
  float v72; // s1
  float v73; // s9
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v75; // x0
  int64_t v76; // x24
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  Il2CppObject *Component_object; // x22
  float32x2_t v84; // d0
  struct SubmarineMapDataManager_o *v85; // x8
  struct SubmarineSettingsManager_o *v86; // x8
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  int64_t v96; // x1
  Il2CppClass **v97; // x0
  float JumpStartTime; // s10
  __int64 v99; // x28
  int64_t v100; // x25
  System_Delegate_o *v101; // x26
  SchedulerTaskBase_TaskCallback_o *v102; // x27
  System_Delegate_o *v103; // x0
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x8
  SchedulerTaskBase_TaskCallback_c *v111; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v113; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v114; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v117; // x0
  __int64 v118; // x25
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  System_String_o *v125; // x27
  SchedulerTaskWaitLoadAsset_o *v126; // x26
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  struct System_Object_array *v133; // x8
  _QWORD *v134; // x9
  __int64 v135; // x10
  Il2CppClass **v136; // x0
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  int64_t v143; // x1
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  int64_t v150; // x1
  float v151; // s10
  System_Delegate_o *v152; // x27
  SchedulerTaskBase_TaskCallback_o *v153; // x28
  System_Delegate_o *v154; // x0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  SchedulerTaskBase_TaskCallback_c *v161; // x1
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  Il2CppClass **v171; // x0
  float SelectedPanelEffecFinishTime; // s10
  System_Delegate_o *v173; // x27
  SchedulerTaskBase_TaskCallback_o *v174; // x28
  System_Delegate_o *v175; // x0
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  SchedulerTaskBase_TaskCallback_c *v182; // x1
  __int64 *v183; // x27
  __int64 v184; // x1
  const MethodInfo_37AC288 *v185; // x2
  float JumpDuration; // s10
  float x; // s0
  float32x2_t v188; // d12
  MapCamera_o *mapCamera; // x21
  float v190; // s1
  MapCameraPerformance_o *v191; // x0
  int64_t v192; // x26
  UnityEngine_GameObject_o *v193; // x24
  SchedulerTaskMovePerformance_o *v194; // x0
  int64_t v195; // x21
  int64_t v196; // x2
  int32_t v197; // w3
  System_String_o *v198; // x4
  BattleSetupInfo_o *v199; // x5
  FollowerInfo_o *v200; // x6
  PartyListViewItem_o *v201; // x7
  SchedulerTaskBase_array *v202; // x24
  int64_t v203; // x2
  int32_t v204; // w3
  System_String_o *v205; // x4
  BattleSetupInfo_o *v206; // x5
  FollowerInfo_o *v207; // x6
  PartyListViewItem_o *v208; // x7
  SimpleAnimation_o *AnimationComponent; // x26
  System_String_o *AnimName; // x27
  System_Delegate_o *v211; // x27
  SchedulerTaskBase_TaskCallback_o *v212; // x28
  System_Delegate_o *v213; // x0
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  SchedulerTaskBase_TaskCallback_c *v220; // x1
  int64_t v221; // x27
  __int64 v222; // x20
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  __int64 v229; // x24
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  SchedulerTaskOrthostichy_o *v242; // x21
  int64_t v243; // x2
  int32_t v244; // w3
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  SchedulerTaskParallel_o *v249; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v251; // x20
  int64_t v252; // x2
  int32_t v253; // w3
  System_String_o *v254; // x4
  BattleSetupInfo_o *v255; // x5
  FollowerInfo_o *v256; // x6
  PartyListViewItem_o *v257; // x7
  struct System_Object_array *v258; // x8
  _QWORD *v259; // x9
  __int64 v260; // x10
  Il2CppClass **v261; // x0
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  struct System_Object_array *v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  Il2CppClass **v271; // x0
  int64_t v272; // x2
  int32_t v273; // w3
  System_String_o *v274; // x4
  BattleSetupInfo_o *v275; // x5
  FollowerInfo_o *v276; // x6
  PartyListViewItem_o *v277; // x7
  struct System_Object_array *v278; // x8
  _QWORD *v279; // x9
  __int64 v280; // x10
  Il2CppClass **v281; // x0
  __int64 v283; // x0
  __int64 v284; // [xsp+8h] [xbp-E8h]
  float v285; // [xsp+20h] [xbp-D0h]
  float v286; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v291; // 0:x4.8
  System_Nullable_Vector2__o v292; // 0:x0.12
  UnityEngine_Vector3_o v293; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v294; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v295; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v296; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C1EB1A & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventPanelScanMaster___, panelData);
    sub_1C3B764(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___, v8);
    sub_1C3B764(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v11);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v12);
    sub_1C3B764(&MapCameraPerformance_TypeInfo, v13);
    sub_1C3B764(&Method_System_Nullable_Vector2___ctor__, v14);
    sub_1C3B764(&Method_System_Nullable_float___ctor__, v15);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v16);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v17);
    sub_1C3B764(&SchedulerTaskBase___TypeInfo, v18);
    sub_1C3B764(&SchedulerTaskMovePerformance_TypeInfo, v19);
    sub_1C3B764(&SchedulerTaskOrthostichy_TypeInfo, v20);
    sub_1C3B764(&SchedulerTaskParallel_TypeInfo, v21);
    sub_1C3B764(&SchedulerTaskSimpleAnimation_TypeInfo, v22);
    sub_1C3B764(&SchedulerTaskWaitLoadAsset_TypeInfo, v23);
    sub_1C3B764(&SchedulerTaskWaitTime_TypeInfo, v24);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_1C3B764(&SoundManager_TypeInfo, v26);
    sub_1C3B764(&SchedulerTaskBase_TaskCallback_TypeInfo, v27);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__, v28);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__, v29);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__, v30);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__, v31);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo, v32);
    byte_4C1EB1A = 1;
  }
  v33 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_126;
  *(_QWORD *)(v33 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)this, v36, v37, v38, v39, v40, v41);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_126;
  if ( !panelData )
    goto LABEL_126;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_126;
  v44.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v45.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v46.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v47.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v48 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v48,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v49 = this->fields.submarineData;
  if ( !v49 )
    goto LABEL_126;
  Settings_k__BackingField = v49->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_126;
  v51 = vadd_f32(
          v47,
          vmul_f32(
            vmul_f32(v45, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v44, 1uLL).n64_u64[0] | 0x100000001LL), v46))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v52 = *((float *)&v51 + 1);
  v53 = 0;
  v54 = HIDWORD(v51);
  value = (UnityEngine_Vector2_o)v51;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v51,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v35);
  if ( !v48 )
    goto LABEL_126;
  items = v48->fields._items;
  v62 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v48->fields._version;
  if ( !items )
    goto LABEL_126;
  v63 = v48->fields._size;
  v64 = MoveCameraToPositionTask;
  if ( (unsigned int)v63 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v48,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &items->obj.klass + v63;
    v48->fields._size = v63 + 1;
    v65[4] = (Il2CppClass *)v64;
    sub_1C3B708((PartyOrganizationUtility_o *)(v65 + 4), v64, v55, v56, v57, v58, v59, v60);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_329AE48 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v48;
  if ( !this->fields.assetManager )
    goto LABEL_126;
  ScanAnimObjectPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                           this->fields.assetManager,
                                           *(_DWORD *)(MoveCameraToPositionTask + 56),
                                           v66);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanAnimObjectPrefab, 0LL, 0LL) )
  {
    HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v68);
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
      *(UnityEngine_Vector3_o *)(&v70 - 2) = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                               0LL);
      MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
      v286 = v71;
      v285 = v72;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v73 = v70;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v75 = UnityEngine_Object__Instantiate_object__50818788(
              ScanAnimObjectPrefab,
              transform,
              (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
      *(_QWORD *)(v33 + 16) = v75;
      v76 = v33 + 16;
      sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 16), (int64_t)v75, v77, v78, v79, v80, v81, v82);
      v293.fields.y = v285;
      v293.fields.x = v286;
      v293.fields.z = v73;
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v33 + 16), v293, 0LL);
      MoveCameraToPositionTask = *(_QWORD *)(v33 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *(UnityEngine_GameObject_o **)v76,
                           (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_4C1C513 )
      {
        sub_1C3B764(&System_Math_TypeInfo, v35);
        byte_4C1C513 = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( !Component_object )
        goto LABEL_126;
      v84.n64_u64[0] = vsub_f32((float32x2_t)__PAIR64__(LODWORD(v285), LODWORD(v286)), (float32x2_t)value).n64_u64[0];
      SubmarineScannerComponent__Initialize(
        (SubmarineScannerComponent_o *)Component_object,
        sqrtf((float)(v73 * v73) + vaddv_f32(vmul_f32(v84, v84))),
        0LL);
      if ( !SubmarineScannerComponent__IsAnimationPrepared((SubmarineScannerComponent_o *)Component_object, 0LL) )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v48;
      v48 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v48,
        (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v85 = this->fields.submarineData;
      if ( !v85 )
        goto LABEL_126;
      v86 = v85->fields._Settings_k__BackingField;
      if ( !v86 )
        goto LABEL_126;
      v294.fields.y = v285;
      v294.fields.x = v286;
      v294.fields.z = v73;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            v294,
                                            1.0,
                                            v86->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v35);
      if ( !v48 )
        goto LABEL_126;
      v93 = v48->fields._items;
      v94 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v48->fields._version;
      if ( !v93 )
        goto LABEL_126;
      v95 = v48->fields._size;
      v96 = MoveCameraToPositionTask;
      if ( (unsigned int)v95 >= v93->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v48,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
      }
      else
      {
        v97 = &v93->obj.klass + v95;
        v48->fields._size = v95 + 1;
        v97[4] = (Il2CppClass *)v96;
        sub_1C3B708((PartyOrganizationUtility_o *)(v97 + 4), v96, v87, v88, v89, v90, v91, v92);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime((SubmarineScannerComponent_o *)Component_object, 0LL);
      v99 = sub_1C3B9B0(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v99, JumpStartTime, 0LL);
      if ( !v99 )
        goto LABEL_126;
      v100 = v99 + 24;
      v101 = *(System_Delegate_o **)(v99 + 24);
      v102 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v102,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0LL);
      v103 = System_Delegate__Combine(v101, (System_Delegate_o *)v102, 0LL);
      v110 = (int64_t)v103;
      if ( v103 )
      {
        v111 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v103->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        *(_QWORD *)v100 = v103;
        if ( (SchedulerTaskBase_TaskCallback_c *)v103->klass != v111 )
          goto LABEL_98;
      }
      else
      {
        *(_QWORD *)v100 = 0LL;
      }
      sub_1C3B708((PartyOrganizationUtility_o *)(v99 + 24), (int64_t)v103, v104, v105, v106, v107, v108, v109);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_126;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v113 = this->fields.playingScanVoiceData;
        if ( !v113 )
          goto LABEL_126;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v113->fields.assetName, 0LL);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v114 = this->fields.playingScanVoiceData;
          if ( !v114 )
            goto LABEL_126;
          assetName = v114->fields.assetName;
          vcName = v114->fields.vcName;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
        }
      }
      v117 = GameObjectExtensions__SafeGetComponent_object_(
               *(UnityEngine_GameObject_o **)(v33 + 16),
               (const MethodInfo_3043500 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v33 + 24) = v117;
      v118 = v33 + 24;
      sub_1C3B708((PartyOrganizationUtility_o *)(v33 + 24), (int64_t)v117, v119, v120, v121, v122, v123, v124);
      if ( !*(_QWORD *)(v33 + 24) )
        goto LABEL_126;
      v125 = *(System_String_o **)(*(_QWORD *)(v33 + 24) + 56LL);
      v126 = (SchedulerTaskWaitLoadAsset_o *)sub_1C3B9B0(SchedulerTaskWaitLoadAsset_TypeInfo);
      SchedulerTaskWaitLoadAsset___ctor(v126, v125, 0LL);
      v133 = v48->fields._items;
      v134 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v48->fields._version;
      if ( !v133 )
        goto LABEL_126;
      v135 = v48->fields._size;
      if ( (unsigned int)v135 >= v133->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v48,
          (Il2CppObject *)v126,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
      }
      else
      {
        v136 = &v133->obj.klass + v135;
        v48->fields._size = v135 + 1;
        v136[4] = (Il2CppClass *)v126;
        sub_1C3B708((PartyOrganizationUtility_o *)(v136 + 4), (int64_t)v126, v127, v128, v129, v130, v131, v132);
      }
      if ( !*(_QWORD *)v118 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v143 = *(_QWORD *)(*(_QWORD *)v118 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v143;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)(MoveCameraToPositionTask + 16),
        v143,
        v137,
        v138,
        v139,
        v140,
        v141,
        v142);
      if ( !*(_QWORD *)v118 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask
        || (v150 = *(_QWORD *)(*(_QWORD *)v118 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v150,
            sub_1C3B708(
              (PartyOrganizationUtility_o *)(MoveCameraToPositionTask + 24),
              v150,
              v144,
              v145,
              v146,
              v147,
              v148,
              v149),
            !*(_QWORD *)v118)
        || (v284 = v99,
            v151 = *(float *)(*(_QWORD *)v118 + 32LL),
            v100 = sub_1C3B9B0(SchedulerTaskWaitTime_TypeInfo),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v100, v151, 0LL),
            !v100) )
      {
LABEL_126:
        sub_1C3B9C0(MoveCameraToPositionTask, v35);
      }
      v101 = (System_Delegate_o *)(v100 + 24);
      v152 = *(System_Delegate_o **)(v100 + 24);
      v153 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v153,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0LL);
      v154 = System_Delegate__Combine(v152, (System_Delegate_o *)v153, 0LL);
      v110 = (int64_t)v154;
      if ( v154 )
      {
        v161 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v154->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v101->klass = (System_Delegate_c *)v154;
        if ( (SchedulerTaskBase_TaskCallback_c *)v154->klass != v161 )
          goto LABEL_98;
      }
      else
      {
        v101->klass = 0LL;
      }
      sub_1C3B708((PartyOrganizationUtility_o *)(v100 + 24), (int64_t)v154, v155, v156, v157, v158, v159, v160);
      v168 = v48->fields._items;
      v169 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v48->fields._version;
      if ( !v168 )
        goto LABEL_126;
      v170 = v48->fields._size;
      if ( (unsigned int)v170 >= v168->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v48,
          (Il2CppObject *)v100,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
      }
      else
      {
        v171 = &v168->obj.klass + v170;
        v48->fields._size = v170 + 1;
        v171[4] = (Il2CppClass *)v100;
        sub_1C3B708((PartyOrganizationUtility_o *)(v171 + 4), v100, v162, v163, v164, v165, v166, v167);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
                                       (SubmarineScannerComponent_o *)Component_object,
                                       0LL);
      v100 = sub_1C3B9B0(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v100, SelectedPanelEffecFinishTime, 0LL);
      if ( !v100 )
        goto LABEL_126;
      v101 = (System_Delegate_o *)(v100 + 32);
      v173 = *(System_Delegate_o **)(v100 + 32);
      v174 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v174,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0LL);
      v175 = System_Delegate__Combine(v173, (System_Delegate_o *)v174, 0LL);
      v110 = (int64_t)v175;
      if ( v175 )
      {
        v182 = SchedulerTaskBase_TaskCallback_TypeInfo;
        v183 = &qword_4C1C000;
        if ( (SchedulerTaskBase_TaskCallback_c *)v175->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v101->klass = (System_Delegate_c *)v175;
        if ( (SchedulerTaskBase_TaskCallback_c *)v175->klass != v182 )
          goto LABEL_98;
      }
      else
      {
        v101->klass = 0LL;
        v183 = &qword_4C1C000;
      }
      sub_1C3B708((PartyOrganizationUtility_o *)(v100 + 32), (int64_t)v175, v176, v177, v178, v179, v180, v181);
      *(_BYTE *)(v100 + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration((SubmarineScannerComponent_o *)Component_object, 0LL);
      if ( !*((_BYTE *)v183 + 1299) )
      {
        sub_1C3B764(&System_Math_TypeInfo, v184);
        *((_BYTE *)v183 + 1299) = 1;
      }
      x = value.fields.x;
      v188.n64_u64[0] = vsub_f32((float32x2_t)value, (float32x2_t)__PAIR64__(LODWORD(v285), LODWORD(v286))).n64_u64[0];
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        x = value.fields.x;
      }
      mapCamera = this->fields.mapCamera;
      position.fields.value.fields.y = 0.0;
      LODWORD(v292.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&v292.fields.hasValue = &position;
      v190 = v52;
      *(_QWORD *)&position.fields.hasValue = 0LL;
      System_Nullable_Vector2____ctor(v292, *(UnityEngine_Vector2_o *)&x, v185);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, 1.0, (const MethodInfo_37AA644 *)Method_System_Nullable_float___ctor__);
      v191 = (MapCameraPerformance_o *)sub_1C3B9B0(MapCameraPerformance_TypeInfo);
      v291 = size;
      v192 = (int64_t)v191;
      MapCameraPerformance___ctor(v191, mapCamera, JumpDuration, position, v291, 0, 0LL);
      v193 = *(UnityEngine_GameObject_o **)v76;
      v194 = (SchedulerTaskMovePerformance_o *)sub_1C3B9B0(SchedulerTaskMovePerformance_TypeInfo);
      v296.fields.z = 0.0;
      v295.fields.y = v285;
      v295.fields.x = v286;
      v295.fields.z = v73;
      v296.fields.x = value.fields.x;
      v296.fields.y = v52;
      v195 = (int64_t)v194;
      SchedulerTaskMovePerformance___ctor(
        v194,
        v193,
        v295,
        v296,
        sqrtf((float)((float)(0.0 - v73) * (float)(0.0 - v73)) + vaddv_f32(vmul_f32(v188, v188))) / JumpDuration,
        0,
        0LL);
      MoveCameraToPositionTask = sub_1C3B80C(SchedulerTaskBase___TypeInfo, 2LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v202 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v192 )
      {
        MoveCameraToPositionTask = sub_1C3B8A0(v192, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( !v202->max_length )
        goto LABEL_127;
      v202->m_Items[0] = (SchedulerTaskBase_o *)v192;
      sub_1C3B708((PartyOrganizationUtility_o *)v202->m_Items, v192, v196, v197, v198, v199, v200, v201);
      if ( v195 )
      {
        MoveCameraToPositionTask = sub_1C3B8A0(v195, v202->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( v202->max_length <= 1 )
        goto LABEL_127;
      v202->m_Items[1] = (SchedulerTaskBase_o *)v195;
      sub_1C3B708((PartyOrganizationUtility_o *)&v202->m_Items[1], v195, v203, v204, v205, v206, v207, v208);
      this = (SubmarineMapManager_o *)sub_1C3B9B0(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v202, 0LL);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(
                             (SubmarineScannerComponent_o *)Component_object,
                             0LL);
      AnimName = SubmarineScannerComponent__get_AnimName((SubmarineScannerComponent_o *)Component_object, 0LL);
      v76 = sub_1C3B9B0(SchedulerTaskSimpleAnimation_TypeInfo);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v76, AnimationComponent, AnimName, 0LL);
      if ( !v76 )
        goto LABEL_126;
      v101 = (System_Delegate_o *)(v76 + 32);
      v211 = *(System_Delegate_o **)(v76 + 32);
      v212 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v212,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0LL);
      v213 = System_Delegate__Combine(v211, (System_Delegate_o *)v212, 0LL);
      v110 = (int64_t)v213;
      if ( !v213 )
        goto LABEL_99;
      v220 = SchedulerTaskBase_TaskCallback_TypeInfo;
      v221 = v284;
      if ( (SchedulerTaskBase_TaskCallback_c *)v213->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v101->klass = (System_Delegate_c *)v213;
        if ( (SchedulerTaskBase_TaskCallback_c *)v213->klass == v220 )
        {
LABEL_100:
          sub_1C3B708((PartyOrganizationUtility_o *)v101, v110, v214, v215, v216, v217, v218, v219);
          MoveCameraToPositionTask = sub_1C3B80C(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_126;
          v222 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_1C3B8A0(v76, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v222 + 24) )
              goto LABEL_127;
            *(_QWORD *)(v222 + 32) = v76;
            sub_1C3B708((PartyOrganizationUtility_o *)(v222 + 32), v76, v223, v224, v225, v226, v227, v228);
            MoveCameraToPositionTask = sub_1C3B80C(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_126;
            v229 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_1C3B8A0(v221, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v229 + 24) )
                goto LABEL_127;
              *(_QWORD *)(v229 + 32) = v221;
              sub_1C3B708((PartyOrganizationUtility_o *)(v229 + 32), v221, v230, v231, v232, v233, v234, v235);
              if ( !this || (MoveCameraToPositionTask = sub_1C3B8A0(this, *(_QWORD *)(*(_QWORD *)v229 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v229 + 24) <= 1u )
                  goto LABEL_127;
                *(_QWORD *)(v229 + 40) = this;
                sub_1C3B708(
                  (PartyOrganizationUtility_o *)(v229 + 40),
                  (int64_t)this,
                  v236,
                  v237,
                  v238,
                  v239,
                  v240,
                  v241);
                v242 = (SchedulerTaskOrthostichy_o *)sub_1C3B9B0(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v242, (SchedulerTaskBase_array *)v229, 0LL);
                if ( !v242 || (MoveCameraToPositionTask = sub_1C3B8A0(v242, *(_QWORD *)(*(_QWORD *)v222 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v222 + 24) > 1u )
                  {
                    *(_QWORD *)(v222 + 40) = v242;
                    sub_1C3B708(
                      (PartyOrganizationUtility_o *)(v222 + 40),
                      (int64_t)v242,
                      v243,
                      v244,
                      v245,
                      v246,
                      v247,
                      v248);
                    v249 = (SchedulerTaskParallel_o *)sub_1C3B9B0(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v249, (SchedulerTaskBase_array *)v222, 0LL);
                    if ( v249 )
                    {
                      v249->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(
                                               (SubmarineScannerComponent_o *)Component_object,
                                               0LL);
                      v251 = (SchedulerTaskWaitTime_o *)sub_1C3B9B0(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v251, TimeToStartOpenPanel, 0LL);
                      v258 = v48->fields._items;
                      v259 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v48->fields._version;
                      if ( v258 )
                      {
                        v260 = v48->fields._size;
                        if ( (unsigned int)v260 >= v258->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v48,
                            (Il2CppObject *)v100,
                            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v259[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v261 = &v258->obj.klass + v260;
                          v48->fields._size = v260 + 1;
                          v261[4] = (Il2CppClass *)v100;
                          sub_1C3B708(
                            (PartyOrganizationUtility_o *)(v261 + 4),
                            v100,
                            v252,
                            v253,
                            v254,
                            v255,
                            v256,
                            v257);
                        }
                        v268 = v48->fields._items;
                        v269 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v48->fields._version;
                        if ( v268 )
                        {
                          v270 = v48->fields._size;
                          if ( (unsigned int)v270 >= v268->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v48,
                              (Il2CppObject *)v249,
                              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v271 = &v268->obj.klass + v270;
                            v48->fields._size = v270 + 1;
                            v271[4] = (Il2CppClass *)v249;
                            sub_1C3B708(
                              (PartyOrganizationUtility_o *)(v271 + 4),
                              (int64_t)v249,
                              v262,
                              v263,
                              v264,
                              v265,
                              v266,
                              v267);
                          }
                          v278 = v48->fields._items;
                          v279 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v48->fields._version;
                          if ( v278 )
                          {
                            v280 = v48->fields._size;
                            if ( (unsigned int)v280 >= v278->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v48,
                                (Il2CppObject *)v251,
                                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v281 = &v278->obj.klass + v280;
                              v48->fields._size = v280 + 1;
                              v281[4] = (Il2CppClass *)v251;
                              sub_1C3B708(
                                (PartyOrganizationUtility_o *)(v281 + 4),
                                (int64_t)v251,
                                v272,
                                v273,
                                v274,
                                v275,
                                v276,
                                v277);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v48;
                          }
                        }
                      }
                    }
                    goto LABEL_126;
                  }
LABEL_127:
                  sub_1C3B9C8(MoveCameraToPositionTask, v35);
                }
              }
            }
          }
LABEL_128:
          v283 = sub_1C3B9E4();
          sub_1C3B88C(v283, 0LL);
        }
      }
LABEL_98:
      sub_1C3BC80(v110);
LABEL_99:
      v101->klass = (System_Delegate_c *)v110;
      v221 = v284;
      goto LABEL_100;
    }
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v48;
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
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct SubmarineMapDataManager_o *v34; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x0
  System_Object_array *v40; // x0
  const MethodInfo *v41; // x2
  int32x2_t v42; // d1
  struct SubmarineMapDataManager_o *v43; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *v45; // x22
  unsigned __int64 v46; // d0 OVERLAPPED
  float v47; // s2
  int v48; // s1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  int64_t v58; // x1
  Il2CppClass **v59; // x0
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4C1EB23 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v11);
    sub_1C3B764(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v12);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v13);
    byte_4C1EB23 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v14 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v15);
    byte_4C1C511 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v17.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v19 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v72 = v71;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v23 )
      break;
    current = v72.fields._current;
    if ( !v72.fields._current )
      sub_1C3B9C0(v23, v24);
    if ( !LOBYTE(v72.fields._current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v72.fields._current,
                                          -1,
                                          0LL);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v34 = this->fields.submarineData;
        if ( !v34 )
          sub_1C3B9C0(IsPanelSatisfyCommonReleaseCond, v27);
        PositionCalculator_k__BackingField = (float32x2_t *)v34->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_1C3B9C0(IsPanelSatisfyCommonReleaseCond, v27);
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
          sub_1C3B9C0(IsPanelSatisfyCommonReleaseCond, v27);
        items = v19->fields._items;
        v37 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v19->fields._version;
        if ( !items )
          sub_1C3B9C0(IsPanelSatisfyCommonReleaseCond, v27);
        size = v19->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v19,
            current,
            *(const MethodInfo_368BC6C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
        }
        else
        {
          v39 = &items->obj.klass + size;
          v19->fields._size = size + 1;
          v39[4] = (Il2CppClass *)current;
          sub_1C3B708((PartyOrganizationUtility_o *)(v39 + 4), (int64_t)current, v28, v29, v30, v31, v32, v33);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v19 )
    goto LABEL_34;
  if ( v19->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v14;
  v40 = System_Collections_Generic_List_object___ToArray(
          v19,
          (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                    this,
                                    (SubmarineMapPanelData_array *)v40,
                                    v41);
  v43 = this->fields.submarineData;
  if ( !v43 )
    goto LABEL_34;
  Settings_k__BackingField = v43->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_34;
  v45 = (Il2CppObject *)PanelDataList_k__BackingField;
  v42.n64_f32[0] = (float)v19->fields._size;
  v46 = vdiv_f32(v17, vdup_lane_s32(v42, 0)).n64_u64[0];
  v47 = z / v42.n64_f32[0];
  v48 = HIDWORD(v46);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                    this,
                                    *(UnityEngine_Vector3_o *)&v46,
                                    1.0,
                                    Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                    v21);
  if ( !v14 )
    goto LABEL_34;
  v55 = v14->fields._items;
  v56 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v14->fields._version;
  if ( !v55 )
    goto LABEL_34;
  v57 = v14->fields._size;
  v58 = (int64_t)PanelDataList_k__BackingField;
  if ( (unsigned int)v57 >= v55->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      (Il2CppObject *)PanelDataList_k__BackingField,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = &v55->obj.klass + v57;
    v14->fields._size = v57 + 1;
    v59[4] = (Il2CppClass *)v58;
    sub_1C3B708((PartyOrganizationUtility_o *)(v59 + 4), v58, v49, v50, v51, v52, v53, v54);
  }
  v66 = v14->fields._items;
  v67 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v14->fields._version;
  if ( !v66 )
LABEL_34:
    sub_1C3B9C0(PanelDataList_k__BackingField, v21);
  v68 = v14->fields._size;
  if ( (unsigned int)v68 >= v66->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v14,
      v45,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v69 = &v66->obj.klass + v68;
    v14->fields._size = v68 + 1;
    v69[4] = (Il2CppClass *)v45;
    sub_1C3B708((PartyOrganizationUtility_o *)(v69 + 4), (int64_t)v45, v60, v61, v62, v63, v64, v65);
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

  if ( (byte_4C1EB0D & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1EB0D = 1;
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
    UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.scanConfirmDialog, 0LL, v8, v9, v10, v11, v12, v13);
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
    UnityEngine_Object__Destroy_71122748(v16, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.selectScannerDialog, 0LL, v17, v18, v19, v20, v21, v22);
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
      UnityEngine_Object__Destroy_71122748(v26, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_1C3B708(p_newScannerDialog, 0LL, v27, v28, v29, v30, v31, v32);
      return;
    }
LABEL_25:
    sub_1C3B9C0(klass, v5);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_4C1EAF0 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1EAF0 = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(panelContainer, 0LL);
  UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  System_Collections_Generic_List_object__o *v27; // x20
  const MethodInfo *v28; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v31; // w1
  int64_t v32; // x22
  SchedulerTaskBase_TaskCallback_o *v33; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0

  if ( (byte_4C1EAF4 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, finishCallback);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v7);
    sub_1C3B764(&SchedulerTaskNone_TypeInfo, v8);
    sub_1C3B764(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__, v10);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo, v11);
    byte_4C1EAF4 = 1;
  }
  v12 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)finishCallback, v21, v22, v23, v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_18;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_18;
  v31 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v31,
                                                                                 v28);
  if ( !v27 )
    goto LABEL_18;
  System_Collections_Generic_List_object___AddRange(
    v27,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v32 = sub_1C3B9B0(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v32, 0LL);
  v33 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v32 )
    goto LABEL_18;
  *(_QWORD *)(v32 + 32) = v33;
  sub_1C3B708((PartyOrganizationUtility_o *)(v32 + 32), (int64_t)v33, v34, v35, v36, v37, v38, v39);
  items = v27->fields._items;
  v47 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v27->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v27->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)v32,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    v27->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v32;
    sub_1C3B708((PartyOrganizationUtility_o *)(v49 + 4), v32, v40, v41, v42, v43, v44, v45);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_1C3B9C0(HideEnemyOccupiedPanelTasks, v14);
  TaskScheduler__AddTask_42768528(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v27,
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
    sub_1C3B9C0(assetManager, v6);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.submarineData, 0LL, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4C1EB06 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1EB06 = 1;
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
      sub_1C3B9C0(HasChild, v5);
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
          sub_1C3B9C8(HasChild, v5);
        HasChild = (UnityEngine_GameObject_array *)v11->m_Items[v12];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
  if ( (byte_4C1EAF3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, method);
    this = (SubmarineMapManager_o *)sub_1C3B764(
                                      &Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__,
                                      v4);
    byte_4C1EAF3 = 1;
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
    sub_1C3B9C0(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_368BE78 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C1EB13 & 1) == 0 )
  {
    sub_1C3B764(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___, method);
    byte_4C1EB13 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_309CC64 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
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

  if ( (byte_4C1EB17 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1EB17 = 1;
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
    UnityEngine_Object__Destroy_71122748(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_1C3B708(p_scanRangeNotificator, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C1EB11 & 1) == 0 )
  {
    sub_1C3B764(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___, method);
    byte_4C1EB11 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_309CC64 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C1EB15 & 1) == 0 )
  {
    sub_1C3B764(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___, method);
    byte_4C1EB15 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_309CC64 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v8; // x22
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  TaskScheduler_o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *v32; // x20
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4C1EAEA & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__TypeInfo, method);
    sub_1C3B764(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v3);
    sub_1C3B764(&SubmarineMapDataManager_TypeInfo, v4);
    sub_1C3B764(&TaskScheduler_TypeInfo, v5);
    byte_4C1EAEA = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v8 = (SubmarineMapDataManager_o *)sub_1C3B9B0(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v8, mapInfo, warInfo, 0LL);
  this->fields.submarineData = v8;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.submarineData, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  v15 = (TaskScheduler_o *)sub_1C3B9B0(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v15, 0LL);
  this->fields.taskScheduler = v15;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.taskScheduler, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  taskScheduler = this->fields.taskScheduler;
  v23 = (System_Action_bool__o *)sub_1C3B9B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v23,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
    0LL);
  if ( !taskScheduler )
    sub_1C3B9C0(v24, v25);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v23;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int64_t)v23,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (Il2CppObject *)sub_1C3B9B0(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  System_Object___ctor(v32, 0LL);
  this->fields.playingScanVoiceData = (struct SubmarineMapManager_PlayingScanVoiceData_o *)v32;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.playingScanVoiceData,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
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
  System_Action_o *v23; // x19

  if ( (byte_4C1EAEB & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, finishCallback);
    sub_1C3B764(&AtlasManager_TypeInfo, v5);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__, v6);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo, v7);
    byte_4C1EAEB = 1;
  }
  v8 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1C3B9C0(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)finishCallback, v17, v18, v19, v20, v21, v22);
  v23 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v8,
    Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v23, 5, 1, 0LL);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct SubmarineMapAssetManager_o *v21; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct SubmarineMapAssetManager_o *v30; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v32; // x21
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct SubmarineMapAssetManager_o *v39; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7

  v2 = this;
  if ( (byte_4C1EB0E & 1) == 0 )
  {
    sub_1C3B764(&Method_ComponentPool_CommonEffectComponent__Preload__, method);
    sub_1C3B764(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__, v3);
    sub_1C3B764(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__, v4);
    sub_1C3B764(&Method_ComponentPool_CommonEffectComponent___ctor__, v5);
    sub_1C3B764(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__, v6);
    sub_1C3B764(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__, v7);
    sub_1C3B764(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v8);
    sub_1C3B764(&ComponentPool_CommonEffectComponent__TypeInfo, v9);
    sub_1C3B764(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo, v10);
    this = (SubmarineMapManager_o *)sub_1C3B764(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo, v11);
    byte_4C1EB0E = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v14 = (ComponentPool_T__o *)sub_1C3B9B0(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_object____ctor(
    v14,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_3274A34 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v14;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v2->fields.effectScanedPanelObjPool,
    (int64_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this = (SubmarineMapManager_o *)v2->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_object___Preload(
    (ComponentPool_T__o *)this,
    9,
    (const MethodInfo_3274AF8 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v21 = v2->fields.assetManager;
  if ( !v21 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v21->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v23 = (ComponentPool_T__o *)sub_1C3B9B0(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v23,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_3274A34 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v23;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v2->fields.effectScanObstaclePanelObjPool,
    (int64_t)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = v2->fields.assetManager;
  if ( !v30 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v30->fields._EffectScannablePanelPrafab_k__BackingField;
  v32 = (ComponentPool_T__o *)sub_1C3B9B0(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v32,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_3274A34 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v32;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v2->fields.effectScannablePanelObjPool,
    (int64_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this = (SubmarineMapManager_o *)v2->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_object___Preload(
          (ComponentPool_T__o *)this,
          50,
          (const MethodInfo_3274AF8 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v39 = v2->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_1C3B9C0(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v39->fields._EffectSelectedPanelPrefab_k__BackingField;
  v41 = (ComponentPool_T__o *)sub_1C3B9B0(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v41,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_3274A34 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v41;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&v2->fields.effectSelectedPanelObjPool,
    (int64_t)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
    sub_1C3B9C0(submarineData, finishCallback);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_4C1EAEE & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, finishCallback);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__, v5);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo, v6);
    byte_4C1EAEE = 1;
  }
  v7 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1C3B9C0(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)finishCallback, v16, v17, v18, v19, v20, v21);
  v22 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v22, v23);
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

  if ( (byte_4C1EAFC & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_1C3B764(&Method_SubmarineMapManager__OnEndScan_b__42_0__, v4);
    byte_4C1EAFC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v8 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v10 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0LL),
        !v8) )
  {
    sub_1C3B9C0(Instance, v6);
  }
  v11 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v8, warId, v10, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v11, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4C1EAEF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, v3);
    byte_4C1EAEF = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v5 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x21
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1
  clsQuestCheck_o *v29; // x22
  NetworkManager_ResultCallbackFunc_o *v30; // x22
  EventScanPanelMapRequest_o *v31; // x22
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_4C1EAF7 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, *(_QWORD *)&scanId);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__, v10);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo, v11);
    byte_4C1EAF7 = 1;
  }
  v12 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_13;
  *(_QWORD *)(v12 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 32) = panelData;
  v21 = v12 + 32;
  *(_DWORD *)(v12 + 24) = scanId;
  sub_1C3B708((PartyOrganizationUtility_o *)(v12 + 32), (int64_t)panelData, v22, v23, v24, v25, v26, v27);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v28);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !this->fields.submarineData )
    goto LABEL_13;
  v29 = (clsQuestCheck_o *)Instance;
  Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v29 )
    goto LABEL_13;
  clsQuestCheck__SaveEventQuestIdListPlayable(v29, (int32_t)Instance, 0LL);
  v30 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               v30,
               (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v31 = (EventScanPanelMapRequest_o *)Instance,
        Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL),
        (mapInfo = this->fields.mapInfo) == 0LL)
    || !*(_QWORD *)v21
    || !v31 )
  {
LABEL_13:
    sub_1C3B9C0(Instance, v14);
  }
  EventScanPanelMapRequest__beginRequest(
    v31,
    (int32_t)Instance,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v21 + 24LL),
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
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_String_o *value; // x8
  EventSaveData_o *v31; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v34; // x10
  __int64 v35; // x9
  TerminalPramsManager_c *v36; // x0
  EventSaveData_o *v37; // x20
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  TerminalPramsManager_c *v45; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v47; // x0
  System_String_array *ValueByArray; // x0
  __int64 v49; // x1
  int max_length; // w8
  System_String_o **v51; // x9
  System_String_o *v52; // x21
  System_String_o **v53; // x9
  System_String_o *v54; // x20
  void **v55; // x8
  System_String_o *v56; // x22
  TerminalPramsManager_c *v57; // x0
  struct EventSaveData_o *v58; // x23
  System_String_o *v59; // x24
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  EventSaveData_c *v66; // x8
  int64_t namespaze; // x19
  TerminalPramsManager_c *v68; // x0
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  System_String_c *v70; // x8
  int v71; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C1EAF8 & 1) == 0 )
  {
    sub_1C3B764(&EventSaveData_TypeInfo, result);
    sub_1C3B764(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___, v9);
    sub_1C3B764(&JsonManager_TypeInfo, v10);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v11);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v12);
    sub_1C3B764(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v14);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v15);
    sub_1C3B764(&StringLiteral_6769/*"FullScreen/FSUtilityList"*/, v16);
    sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v17);
    sub_1C3B764(&StringLiteral_1191/*"1.0"*/, v18);
    byte_4C1EAF8 = 1;
  }
  v71 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22507/*"referrerMapId"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v19);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v20);
  v21 = (Il2CppObject *)System_String__Concat_63379872(
                          (System_String_o *)StringLiteral_16127/*"__field-group"*/,
                          result,
                          (System_String_o *)StringLiteral_16386/*"align-items"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v21,
                                                                      (const MethodInfo_3058CE8 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v31 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_71:
    sub_1C3B9C8(BeforeEventSubmarineSaveData_k__BackingField, v23);
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_70;
  name = klass->_1.name;
  if ( name )
  {
    v34 = *((_QWORD *)name + 3);
    if ( v34 )
    {
      if ( !(_DWORD)v34 )
        goto LABEL_71;
      v35 = *((_QWORD *)name + 4);
      if ( v35 )
      {
        v71 = *(_QWORD *)(v35 + 32);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C1EB7C )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v23);
          byte_4C1EB7C = 1;
        }
        v36 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v36 = TerminalPramsManager_TypeInfo;
        }
        if ( !v36->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v37 = (EventSaveData_o *)sub_1C3B9B0(EventSaveData_TypeInfo);
          EventSaveData___ctor(v37, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C1EB7D )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v38);
            byte_4C1EB7D = 1;
          }
          v45 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v45->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v37;
          sub_1C3B708(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v37, v39, v40, v41, v42, v43, v44);
          v36 = TerminalPramsManager_TypeInfo;
        }
        if ( !v36->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v36);
        if ( !byte_4C1EB7C )
        {
          sub_1C3B764(&TerminalPramsManager_TypeInfo, v23);
          byte_4C1EB7C = 1;
        }
        v47 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v47 = TerminalPramsManager_TypeInfo;
        }
        BeforeEventSubmarineSaveData_k__BackingField = v47->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( BeforeEventSubmarineSaveData_k__BackingField )
        {
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v51 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v51 = (System_String_o **)&StringLiteral_1191/*"1.0"*/;
            v52 = *v51;
            v53 = max_length <= 2 ? (System_String_o **)&StringLiteral_1191/*"1.0"*/ : &ValueByArray->m_Items[2];
            v54 = *v53;
            v55 = max_length <= 3 ? &StringLiteral_6769/*"FullScreen/FSUtilityList"*/ : (void **)&ValueByArray->m_Items[3];
          }
          else
          {
            v54 = (System_String_o *)StringLiteral_1191/*"1.0"*/;
            v55 = &StringLiteral_6769/*"FullScreen/FSUtilityList"*/;
            v52 = (System_String_o *)StringLiteral_1191/*"1.0"*/;
          }
          v56 = (System_String_o *)*v55;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C1EB7C )
          {
            sub_1C3B764(&TerminalPramsManager_TypeInfo, v49);
            byte_4C1EB7C = 1;
          }
          v57 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v57 = TerminalPramsManager_TypeInfo;
          }
          v58 = v57->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v59 = System_Int32__ToString((int32_t)&v71, 0LL);
          if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_38499832(
                                                                              v59,
                                                                              v52,
                                                                              v54,
                                                                              v56,
                                                                              0LL);
          if ( v58 )
          {
            v58->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&v58->fields.value,
              (int64_t)BeforeEventSubmarineSaveData_k__BackingField,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65);
            value = v31->fields.value;
            goto LABEL_56;
          }
        }
LABEL_70:
        sub_1C3B9C0(BeforeEventSubmarineSaveData_k__BackingField, v23);
      }
    }
  }
LABEL_56:
  if ( !(_DWORD)value )
    goto LABEL_71;
  v66 = v31[1].klass;
  if ( !v66 )
    goto LABEL_70;
  namespaze = (int64_t)v66->_1.namespaze;
  v68 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v68 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v68->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)namespaze;
  sub_1C3B708(p_mResultEventPanelRewardInfos, namespaze, v24, v25, v26, v27, v28, v29);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v23);
    byte_4C1CAE3 = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v70 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v70 )
    goto LABEL_70;
  BeforeEventSubmarineSaveData_k__BackingField = *(EventSaveData_o **)&v70->_2.instance_size;
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v26; // x4
  SchedulerTaskBase_o *v27; // x21
  SchedulerTaskBase_TaskCallback_o *v28; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v36; // x20
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  __int64 v48; // x0

  if ( (byte_4C1EAF6 & 1) == 0 )
  {
    sub_1C3B764(&SchedulerTaskBase___TypeInfo, *(_QWORD *)&scanId);
    sub_1C3B764(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__, v8);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo, v9);
    byte_4C1EAF6 = 1;
  }
  v10 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 32) = panelData;
  *(_DWORD *)(v10 + 24) = scanId;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)panelData, v19, v20, v21, v22, v23, v24);
  klass = this->klass;
  if ( *(int *)(v10 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v10 + 40) = 0;
    v27 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v10 + 24),
            *(SubmarineMapPanelData_o **)(v10 + 32),
            (bool *)(v10 + 40),
            v26);
    v28 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v28,
      (Il2CppObject *)v10,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0LL);
    if ( v27 )
    {
      v27->fields.EndCallback = v28;
      sub_1C3B708((PartyOrganizationUtility_o *)&v27->fields.EndCallback, (int64_t)v28, v29, v30, v31, v32, v33, v34);
      taskScheduler = this->fields.taskScheduler;
      v11 = sub_1C3B80C(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v11 )
      {
        v36 = v11;
        v37 = sub_1C3B8A0(v27, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !v37 )
        {
          v48 = sub_1C3B9E4();
          sub_1C3B88C(v48, 0LL);
        }
        if ( !*(_DWORD *)(v36 + 24) )
          sub_1C3B9C8(v37, v38);
        *(_QWORD *)(v36 + 32) = v27;
        sub_1C3B708((PartyOrganizationUtility_o *)(v36 + 32), (int64_t)v27, v39, v40, v41, v42, v43, v44);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v36, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1C3B9C0(v11, v12);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v45);
  SubmarineMapManager__ShowScannableEffect(this, v46);
  SubmarineMapManager__HideSelectedPanelEffect(this, v47);
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v27; // x22
  const MethodInfo *v28; // x4

  if ( (byte_4C1EB0C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__TypeInfo, *(_QWORD *)&scanId);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__, v9);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo, v10);
    byte_4C1EB0C = 1;
  }
  v11 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v27 = (System_Action_bool__o *)sub_1C3B9B0(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v27,
    (Il2CppObject *)v11,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0LL);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_1C3B9C0(v12, v13);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v27, v28);
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
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  int32_t EventId; // w22
  System_Action_int__o *v26; // x23
  System_Action_o *v27; // x21
  const MethodInfo *v28; // x4

  if ( (byte_4C1EB0A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_int__TypeInfo, callback);
    sub_1C3B764(&System_Action_TypeInfo, v5);
    sub_1C3B764(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v6);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__, v7);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo, v8);
    byte_4C1EB0A = 1;
  }
  v9 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_7;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (selectScannerDialog = this->fields.selectScannerDialog,
        EventId = SubmarineMapDataManager__get_EventId(submarineData, 0LL),
        v26 = (System_Action_int__o *)sub_1C3B9B0(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v26,
          (Il2CppObject *)v9,
          Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
          0LL),
        v27 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo),
        System_Action___ctor(v27, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL),
        !selectScannerDialog) )
  {
LABEL_7:
    sub_1C3B9C0(submarineData, v11);
  }
  SubmarineSelectScannerDialog__Open(selectScannerDialog, EventId, v26, v27, v28);
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
    sub_1C3B708(p_assetManager, 0LL, v5, v6, v7, v8, v9, v10);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
  EventMapManagerBase__ReleaseAssets((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ComponentPool_T__o *effectScanedPanelObjPool; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  ComponentPool_T__o *effectScannablePanelObjPool; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  ComponentPool_T__o *v19; // x0
  PartyOrganizationUtility_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4C1EB0F & 1) == 0 )
  {
    sub_1C3B764(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__, method);
    sub_1C3B764(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__, v3);
    sub_1C3B764(&Method_ComponentPool_CommonEffectComponent__Finish__, v4);
    byte_4C1EB0F = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_32752D4 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.effectScanedPanelObjPool, 0LL, v6, v7, v8, v9, v10, v11);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_32752D4 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.effectScannablePanelObjPool,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (PartyOrganizationUtility_o *)&this->fields.effectScanObstaclePanelObjPool;
  v19 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v19,
      (const MethodInfo_32752D4 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_1C3B708(p_effectScanObstaclePanelObjPool, 0LL, v22, v23, v24, v25, v26, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_309CA78 *method)
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
  const MethodInfo_37AC6C4 *v21; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v25; // s0
  float v26; // s1
  float v27; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo_37AC6C4 *v29; // x2
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
    sub_1C3B764(&Method_System_Nullable_Vector3__get_HasValue__, pool);
    sub_1C3B764(&Method_System_Nullable_Vector3__get_Value__, v12);
    if ( !method->rgctx_data )
      sub_1C8D69C();
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
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_52907524(
                                                  pool,
                                                  transform,
                                                  *(UnityEngine_Vector3_o *)&v15,
                                                  (const MethodInfo_3274E04 *)method->rgctx_data->_1_ComponentPool_T__Rent);
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
    if ( !byte_4C1C511 )
    {
      sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v20);
      byte_4C1C511 = 1;
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
    sub_1C3B9C0(effectContainer, pool);
  }
  if ( !byte_4C1C516 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, pool);
    byte_4C1C516 = 1;
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
        const MethodInfo_309CC64 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  unsigned int v10; // w22

  if ( !method->rgctx_data )
    sub_1C8D69C();
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
        sub_1C3B9C8(Children, v7);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_3041A18 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_3274EDC *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1C3B9C0(Children, v7);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v19; // x1
  int64_t v20; // x20
  _QWORD *v21; // x22
  System_Delegate_o *v22; // x23
  SchedulerTaskBase_TaskCallback_o *v23; // x24
  System_Delegate_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x8
  SchedulerTaskBase_TaskCallback_c *v32; // x1
  TaskScheduler_o *v33; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x0

  if ( (byte_4C1EAFB & 1) == 0 )
  {
    sub_1C3B764(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_1C3B764(&SchedulerTaskNone_TypeInfo, v5);
    sub_1C3B764(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__, v7);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo, v8);
    byte_4C1EAFB = 1;
  }
  v9 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = finishCallback,
        sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)finishCallback, v12, v13, v14, v15, v16, v17),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v19),
        !taskScheduler)
    || (TaskScheduler__AddTask_42768528(taskScheduler, 0, RevealEachSpotsTasks, 0LL),
        v20 = sub_1C3B9B0(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v20, 0LL),
        !v20) )
  {
LABEL_16:
    sub_1C3B9C0(RevealEachSpotsTasks, v11);
  }
  v21 = (_QWORD *)(v20 + 32);
  v22 = *(System_Delegate_o **)(v20 + 32);
  v23 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__,
    0LL);
  v24 = System_Delegate__Combine(v22, (System_Delegate_o *)v23, 0LL);
  v31 = (int64_t)v24;
  if ( v24 )
  {
    v32 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v24->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v21 = v24;
      if ( (SchedulerTaskBase_TaskCallback_c *)v24->klass == v32 )
        goto LABEL_11;
    }
    sub_1C3BC80(v24);
  }
  *v21 = v31;
LABEL_11:
  sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 32), v31, v25, v26, v27, v28, v29, v30);
  v33 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_1C3B80C(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1LL);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v34 = RevealEachSpotsTasks;
  v35 = sub_1C3B8A0(v20, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v35 )
  {
    v43 = sub_1C3B9E4();
    sub_1C3B88C(v43, 0LL);
  }
  if ( !v34->fields._size )
    sub_1C3B9C8(v35, v36);
  v34->fields._syncRoot = (Il2CppObject *)v20;
  sub_1C3B708((PartyOrganizationUtility_o *)&v34->fields._syncRoot, v20, v37, v38, v39, v40, v41, v42);
  if ( !v33 )
    goto LABEL_16;
  TaskScheduler__AddTask(v33, 0, (SchedulerTaskBase_array *)v34, 0LL);
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

  if ( (byte_4C1EB03 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_UITexture___, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C1EB03 = 1;
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
                                                             (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
    sub_1C3B9C0(submarineData, v6);
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
  if ( (byte_4C1EB12 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_1C3B764(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___,
                                      v6);
    byte_4C1EB12 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1C3B9C0(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields._current )
        sub_1C3B9C0(v8, v9);
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
          (const MethodInfo_309CA78 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4C1EB16 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventPanelScanMaster___, *(_QWORD *)&scanId);
    sub_1C3B764(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v8);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v9);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4C1EB16 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_329AE48 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_1C3B9C0(Instance, v12);
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
      v17 = UnityEngine_Object__Instantiate_object__50818788(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v17;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_1C3B708((PartyOrganizationUtility_o *)p_scanRangeNotificator, (int64_t)v17, v19, v20, v21, v22, v23, v24);
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
  if ( (byte_4C1EB19 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Rect__Add__, *(_QWORD *)&scanId);
    sub_1C3B764(&Method_System_Collections_Generic_List_Rect__ToArray__, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_Rect___ctor__, v10);
    sub_1C3B764(&System_Collections_Generic_List_Rect__TypeInfo, v11);
    sub_1C3B764(&MapCameraViewAdjusterUtil_TypeInfo, v12);
    sub_1C3B764(&UnityEngine_Rect___TypeInfo, v13);
    sub_1C3B764(&float___TypeInfo, v14);
    sub_1C3B764(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v15);
    sub_1C3B764(&Submarine2DUILocationInfo_TypeInfo, v16);
    this = (SubmarineMapManager_o *)sub_1C3B764(&SubmarineScanDialogUpsideLocationInfo_TypeInfo, v17);
    byte_4C1EB19 = 1;
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
          this = (SubmarineMapManager_o *)sub_1C3B80C(UnityEngine_Rect___TypeInfo, 1LL);
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
    sub_1C3B9C0(this, *(_QWORD *)&scanId);
  }
  v37 = (System_Collections_Generic_List_Rect__o *)sub_1C3B9B0(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v37,
    (const MethodInfo_369C180 *)Method_System_Collections_Generic_List_Rect___ctor__);
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
      if ( !byte_4C1C511 )
      {
        this = (SubmarineMapManager_o *)sub_1C3B764(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&scanId);
        byte_4C1C511 = 1;
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
          *(const MethodInfo_369CA0C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
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
          (const MethodInfo_369E5A0 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_45:
  v53 = (Submarine2DUILocationInfo_o *)sub_1C3B9B0(Submarine2DUILocationInfo_TypeInfo);
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
    v61 = (SubmarineScanDialogUpsideLocationInfo_o *)sub_1C3B9B0(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
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
    v79 = (SubmarinScanDialogUpSideWeakLocationInfo_o *)sub_1C3B9B0(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
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
  this = (SubmarineMapManager_o *)sub_1C3B80C(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_73;
  v70 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v70
    || (LODWORD(this->fields.mapInfo) = 1065353216, (_DWORD)v70 == 1)
    || (*((float *)&this->fields.mapInfo + 1) = m_Width / v69.fields.x, (unsigned int)v70 <= 2) )
  {
LABEL_74:
    sub_1C3B9C8(this, *(_QWORD *)&scanId);
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
  if ( (byte_4C1EB10 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_1C3B764(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___,
                                      v6);
    byte_4C1EB10 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1C3B9C0(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v10,
             (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v10.fields._current )
        sub_1C3B9C0(v8, v9);
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
          (const MethodInfo_309CA78 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_4C1EB14 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___,
      panelData);
    byte_4C1EB14 = 1;
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
    (const MethodInfo_309CA78 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
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
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x20
  int64_t v30; // x20
  _QWORD *v31; // x21
  System_Delegate_o *v32; // x22
  SchedulerTaskBase_TaskCallback_o *v33; // x23
  System_Delegate_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x8
  SchedulerTaskBase_TaskCallback_c *v42; // x1
  TaskScheduler_o *v43; // x19
  MissionNotifyManager_o *v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  __int64 v51; // x0

  if ( (byte_4C1EAF9 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_1C3B764(&SchedulerTaskBase___TypeInfo, v7);
    sub_1C3B764(&SchedulerTaskNone_TypeInfo, v8);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_1C3B764(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__, v11);
    sub_1C3B764(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__, v12);
    sub_1C3B764(&SchedulerTaskBase_TaskCallback_TypeInfo, v13);
    byte_4C1EAF9 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0LL);
  v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0LL);
  if ( !v16 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v16, v17, 0LL);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v19);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_42768528(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance,
    0LL);
  v20 = this->fields.taskScheduler;
  v21 = (SchedulerTaskBase_array *)sub_1C3B80C(SchedulerTaskBase___TypeInfo, 1LL);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v22);
  if ( !v21 )
    goto LABEL_22;
  v29 = (int64_t)Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_1C3B8A0(Instance, v21->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !v21->max_length )
    goto LABEL_23;
  v21->m_Items[0] = (SchedulerTaskBase_o *)v29;
  sub_1C3B708((PartyOrganizationUtility_o *)v21->m_Items, v29, v23, v24, v25, v26, v27, v28);
  if ( !v20
    || (TaskScheduler__AddTask(v20, 0, v21, 0LL),
        v30 = sub_1C3B9B0(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v30, 0LL),
        !v30) )
  {
LABEL_22:
    sub_1C3B9C0(Instance, v15);
  }
  v31 = (_QWORD *)(v30 + 32);
  v32 = *(System_Delegate_o **)(v30 + 32);
  v33 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__39_1__,
    0LL);
  v34 = System_Delegate__Combine(v32, (System_Delegate_o *)v33, 0LL);
  v41 = (int64_t)v34;
  if ( !v34 )
    goto LABEL_16;
  v42 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v34->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v31 = v34, (SchedulerTaskBase_TaskCallback_c *)v34->klass != v42) )
  {
    sub_1C3BC80(v34);
LABEL_16:
    *v31 = v41;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 32), v41, v35, v36, v37, v38, v39, v40);
  v43 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_1C3B80C(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_22;
  v44 = Instance;
  Instance = (MissionNotifyManager_o *)sub_1C3B8A0(v30, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v51 = sub_1C3B9E4();
    sub_1C3B88C(v51, 0LL);
  }
  if ( !LODWORD(v44->fields.mNoDispInfos) )
LABEL_23:
    sub_1C3B9C8(Instance, v15);
  v44->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v30;
  sub_1C3B708((PartyOrganizationUtility_o *)&v44->fields.mMissionNotifyComps, v30, v45, v46, v47, v48, v49, v50);
  if ( !v43 )
    goto LABEL_22;
  TaskScheduler__AddTask(v43, 0, (SchedulerTaskBase_array *)v44, 0LL);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  System_Action_o **p_syncRoot; // x22
  const MethodInfo *v19; // x1
  int size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v21; // x20
  System_Delegate_o *syncRoot; // x23
  SchedulerTaskBase_TaskCallback_o *v23; // x24
  System_Delegate_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  SchedulerTaskBase_TaskCallback_c *v31; // x1

  if ( (byte_4C1EAFA & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__, finishCallback);
    sub_1C3B764(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__, v5);
    sub_1C3B764(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__, v7);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo, v8);
    byte_4C1EAFA = 1;
  }
  v9 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_15;
  *(_QWORD *)(v9 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v9 + 16);
  sub_1C3B708((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)finishCallback, v12, v13, v14, v15, v16, v17);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
                                                                               this,
                                                                               v19);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  size = SubsequentialOpenPanelTasks->fields._size;
  v21 = (System_Collections_Generic_List_SchedulerTaskBase__o *)SubsequentialOpenPanelTasks;
  if ( size < 1 )
  {
LABEL_11:
    ActionExtensions__Call(*p_syncRoot, 0LL);
    return;
  }
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SubsequentialOpenPanelTasks,
                                                                               size - 1,
                                                                               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v23 = (SchedulerTaskBase_TaskCallback_o *)sub_1C3B9B0(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__,
    0LL);
  v24 = System_Delegate__Combine(syncRoot, (System_Delegate_o *)v23, 0LL);
  if ( v24 )
  {
    v31 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v24->klass != SchedulerTaskBase_TaskCallback_TypeInfo
      || (*p_syncRoot = (System_Action_o *)v24, (SchedulerTaskBase_TaskCallback_c *)v24->klass != v31) )
    {
      sub_1C3BC80(v24);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0LL;
  }
  sub_1C3B708((PartyOrganizationUtility_o *)p_syncRoot, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_1C3B9C0(SubsequentialOpenPanelTasks, v11);
  TaskScheduler__AddTask_42768528((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v21, 0LL);
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

  if ( (byte_4C1EAF1 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1C3B764(&Method_SubmarineMapManager__TryInitRequest_b__31_0__, v5);
    byte_4C1EAF1 = 1;
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
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  submarineData = (SubmarineMapDataManager_o *)NetworkManager__getRequest_object_(
                                                 v8,
                                                 (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v9 = (EventScanPanelMapRequest_o *)submarineData,
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_EventId(
                                                       this->fields.submarineData,
                                                       0LL),
        (v10 = this->fields.mapInfo) == 0LL)
    || !v9 )
  {
LABEL_13:
    sub_1C3B9C0(submarineData, method);
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

  if ( (byte_4C1EB0B & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v3);
    byte_4C1EB0B = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, 0LL);
  if ( NewReleasedScanId >= 1 )
  {
    v6 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v8 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v6, v8, v9);
      return;
    }
LABEL_8:
    sub_1C3B9C0(submarineData, method);
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
  if ( (byte_4C1EAFD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    this = (SubmarineMapManager_o *)sub_1C3B764(
                                      &Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__,
                                      v5);
    byte_4C1EAFD = 1;
  }
  memset(&v8, 0, sizeof(v8));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_1C3B9C0(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C3B9C0(0LL, v7);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v8.fields._current, v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C3B9C0(0LL, beforeClearQuestId);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_GameObject_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v20; // x21
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

  if ( (byte_4C1EAFE & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, v3);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1C3B764(&TerminalPramsManager_TypeInfo, v6);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v7);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__, v8);
    sub_1C3B764(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo, v9);
    byte_4C1EAFE = 1;
  }
  v10 = sub_1C3B9B0(SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_47;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
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
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v12);
    byte_4C1CAE3 = 1;
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
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_47;
  terminalMap = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)terminalMap,
                                      (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.submarineData )
    goto LABEL_47;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)terminalMap;
  terminalMap = (ScrTerminalMap_o *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v20 )
    goto LABEL_47;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v20,
         (Il2CppObject **)(v10 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v10 + 32) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C1EB7C )
    {
      sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
      byte_4C1EB7C = 1;
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
      if ( !byte_4C1EB7C )
      {
        sub_1C3B764(&TerminalPramsManager_TypeInfo, v12);
        byte_4C1EB7C = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v22->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_47;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v24 = *(_QWORD *)&ValueByArray->max_length;
        if ( v24 )
        {
          if ( !(_DWORD)v24 )
            sub_1C3B9C8(ValueByArray, v12);
          *(_DWORD *)(v10 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v12);
      byte_4C1CAE3 = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v25 = terminalMap->fields.subRootGimmickP->klass;
    if ( v25 )
    {
      v26 = *(TitleInfoControl_o **)&v25->_2.instance_size;
      v27 = *(EventDetailEntity_o **)(v10 + 24);
      v28 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
      System_Action___ctor(
        v28,
        (Il2CppObject *)v10,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( v26 )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(v26, v27, v28, 0LL);
        return;
      }
    }
LABEL_47:
    sub_1C3B9C0(terminalMap, v12);
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
  SubmarineMapDataManager_o *submarineData; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C3B9C0(0LL, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, 0LL);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v4);
  SubmarineMapManager__HideSelectedPanelEffect(this, v5);
  SubmarineMapManager__UpdateTerminalInfo(this, v6);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_4C1EB24 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, v3);
    byte_4C1EB24 = 1;
  }
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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

  if ( (byte_4C1EB25 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4C1EB25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
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

  if ( (byte_4C1EB26 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__, v3);
    byte_4C1EB26 = 1;
  }
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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

  if ( (byte_4C1EB27 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__, v3);
    byte_4C1EB27 = 1;
  }
  v4 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
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

  if ( (byte_4C1EB28 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4C1EB28 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38C8B54 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
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
    sub_1C3B9C0(0LL, method);
  return SubmarineMapDataManager__get_EventId(submarineData, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C3B9C0(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1C3B9C0(this, method);
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
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  v2 = this;
  if ( (byte_4C1EB33 & 1) == 0 )
  {
    sub_1C3B764(&System_Func_bool__TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C3B764(&Method_SubmarineMapManager__CoInitRequest_b__20_0__, v4);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_1C3B764(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4C1EB33 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_1C3B9C0(this, method);
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
  this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v8 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v9 = (System_Func_bool__o *)sub_1C3B9B0(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v9, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C3B9B0(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C3B708(p__2__current, (int64_t)v10, v12, v13, v14, v15, v16, v17);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct SubmarineMapAssetManager_o *v16; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  const MethodInfo *v18; // x1
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  __int64 v32; // x8
  int32_t v33; // w1
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x1

  v2 = this;
  if ( (byte_4C1EB34 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_1C3B764(
                                                                  &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                                  v3);
    byte_4C1EB34 = 1;
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
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&_4__this->fields.closedPanelTexture,
            (int64_t)ResizedTexture2D,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
          v16 = _4__this->fields.assetManager;
          if ( v16 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v16->fields._ClosedPanelTexture_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0LL, 0LL) )
            {
              DarkTexture2D = ClosePanelTextureUtil__CreateDarkTexture2D(*p_closedPanelTexture, 0.4, 0LL);
              *p_closedPanelTexture = DarkTexture2D;
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&_4__this->fields.closedPanelTexture,
                (int64_t)DarkTexture2D,
                v20,
                v21,
                v22,
                v23,
                v24,
                v25);
            }
            SubmarineMapManager__AdjustEachSpotsPositions(_4__this, v18);
            SubmarineMapManager__CreateContainers(_4__this, v26);
            SubmarineMapManager__CreatePanels(_4__this, v27);
            SubmarineMapManager__CreateNeverOpenSurrounds(_4__this, v28);
            SubmarineMapManager__SetGridLine(_4__this, v29);
            SubmarineMapManager__AdjustSilhouetteGimmicks(_4__this, v30);
            SubmarineMapManager__ConstructOnPartOfDialog(_4__this, v31);
            this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)_4__this->fields.submarineData;
            if ( this )
            {
              v32 = *(_QWORD *)&this[1].fields.__1__state;
              if ( v32 )
              {
                if ( *(_BYTE *)(v32 + 24) || *(_BYTE *)(v32 + 25) )
                  v33 = *(_DWORD *)(v32 + 16);
                else
                  v33 = -1;
                SubmarineMapDataManager__UpdateParams((SubmarineMapDataManager_o *)this, v33, 0LL);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, v34);
                SubmarineMapManager__HideScanObstacleEffect(_4__this, v35);
                SubmarineMapManager__ShowScanObstacleEffect(_4__this, v36);
                ActionExtensions__Call(v2->fields.finishCallback, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_30:
      sub_1C3B9C0(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C1EB29 & 1) == 0 )
  {
    sub_1C3B764(&SubmarineMapManager___c_TypeInfo, v1);
    byte_4C1EB29 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)SubmarineMapManager___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, x);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_4C1EB2A & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, method);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__, v3);
    byte_4C1EB2A = 1;
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
    _9__1 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  if ( !klass )
LABEL_10:
    sub_1C3B9C0(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v9, _9__1, v7);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020(v5, Assets, 0LL);
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
    sub_1C3B9C0(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020(v7, inited, 0LL);
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

  if ( (byte_4C1EB2B & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
    byte_4C1EB2B = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
         (const MethodInfo_329AE94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C1CAE3 )
    {
      sub_1C3B764(&TerminalSceneComponent_TypeInfo, v7);
      byte_4C1CAE3 = 1;
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
    sub_1C3B9C0(Instance, v7);
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
    sub_1C3B9C0(this, method);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4C1EB2C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_int__TypeInfo, method);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__, v3);
    byte_4C1EB2C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, method);
  _9__1 = this->fields.__9__1;
  v7 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1C3B9B0(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v7 )
LABEL_8:
    sub_1C3B9C0(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v7, _9__1, v5);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C3B9C0(this, scanId);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C1EB2D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_bool__TypeInfo, method);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__, v3);
    byte_4C1EB2D = 1;
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
    _9__1 = (System_Action_bool__o *)sub_1C3B9B0(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v11, v12, v13, v14, v15, v16);
  }
  if ( !v9 )
LABEL_9:
    sub_1C3B9C0(_4__this, method);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4C1EB2E & 1) == 0 )
  {
    sub_1C3B764(&System_Action_int__TypeInfo, yes);
    sub_1C3B764(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__, v5);
    byte_4C1EB2E = 1;
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
    sub_1C3B9C0(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1C3B9B0(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v11, v12, v13, v14, v15, v16);
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
    sub_1C3B9C0(this, lscanId);
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
    sub_1C3B9C0(this, result);
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

  if ( (byte_4C1EB2F & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v3);
    byte_4C1EB2F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0LL);
  if ( !this->fields.__4__this )
    goto LABEL_22;
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
    byte_4C1CAE3 = 1;
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
  if ( !byte_4C1CAE3 )
  {
    sub_1C3B764(&TerminalSceneComponent_TypeInfo, v5);
    byte_4C1CAE3 = 1;
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
    sub_1C3B9C0(Instance, v5);
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
    sub_1C3B9C0(this, x);
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

  if ( (byte_4C1EB30 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_int___, *(_QWORD *)&scanId);
    byte_4C1EB30 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2F42260 *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_4C1EB31 & 1) == 0 )
  {
    sub_1C3B764(&Method_ActionExtensions_Call_bool___, yes);
    byte_4C1EB31 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2F42210 *)Method_ActionExtensions_Call_bool___);
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
    sub_1C3B9C0(0LL, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_1C3B9C0(0LL, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C3B9C0(0LL, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, method);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_4C1EB32 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, method);
    byte_4C1EB32 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(scanAnimObj, 0LL);
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
    sub_1C3B9C0(this, x);
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
    sub_1C3B9C0(this, 0LL);
  return x->fields._Chain_k__BackingField == this->fields.i;
}