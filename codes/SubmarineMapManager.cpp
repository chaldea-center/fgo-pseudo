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
  __int64 v9; // x12
  int v10; // w12
  int v11; // w8
  SubmarineMapManager_o *v12; // x20
  __int64 v13; // x21
  int v14; // w19

  if ( (byte_596CFB7 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    byte_596CFB7 = 1;
  }
  if ( !go )
    goto LABEL_22;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                    go,
                                    (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !this )
    goto LABEL_22;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    v8 = 0x7FFFFFFF;
    while ( m_CancellationTokenSource != v7 )
    {
      v9 = *((_QWORD *)&this->fields.mapInfo + v7);
      if ( !v9 )
        goto LABEL_22;
      v10 = *(_DWORD *)(v9 + 176);
      ++v7;
      if ( v10 < v8 )
        v8 = v10;
      if ( (m_CancellationTokenSource & ~(m_CancellationTokenSource >> 31)) == v7 )
        goto LABEL_14;
    }
LABEL_23:
    sub_2213CE4(this);
  }
  v8 = 0x7FFFFFFF;
LABEL_14:
  if ( v8 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__59472212(
                                      go,
                                      (const MethodInfo_38B7954 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    if ( this )
    {
      v11 = (int)this->fields.m_CancellationTokenSource;
      v12 = this;
      if ( v11 >= 1 )
      {
        v13 = 0;
        v14 = minDepth - v8;
        while ( (unsigned int)v13 < v11 )
        {
          this = (SubmarineMapManager_o *)*((_QWORD *)&v12->fields.mapInfo + v13);
          if ( !this )
            goto LABEL_22;
          UIWidget__set_depth((UIWidget_o *)this, v14 + *(_DWORD *)&this->fields.isEnableClickPanel, 0);
          v11 = (int)v12->fields.m_CancellationTokenSource;
          if ( (int)++v13 >= v11 )
            return;
        }
        goto LABEL_23;
      }
      return;
    }
LABEL_22:
    sub_2213CDC(this, go);
  }
}


void SubmarineMapManager__AdjustEachSpotsPositions(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v4; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v6; // x20
  unsigned int v7; // w24
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x21
  const MethodInfo *v11; // x2

  if ( (byte_596CFB4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFB4 = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0);
  if ( !Children )
    goto LABEL_14;
  max_length = Children->max_length;
  v6 = Children;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_2213CE4(Children);
      Children = (UnityEngine_GameObject_array *)v6->m_Items[v7];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_object, v11);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_14:
    sub_2213CDC(Children, v4);
  }
}


void SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v4; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v6; // x21
  unsigned int v7; // w24
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x22
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_Dictionary_int__object__o *v21; // x21
  int v22; // w8
  UnityEngine_GameObject_o *v23; // x22
  unsigned int v24; // w25
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *v27; // x23
  intptr_t m_CachedPtr; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v30; // x24
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t current; // w1
  SubmarineSilhouetteData_o **v40; // x23
  __int64 v41; // x0
  __int64 v42; // x1
  System_Predicate_object__o *v43; // x25
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  Il2CppObject *v48; // x24
  _BOOL8 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x1
  const MethodInfo *v52; // x2
  SubmarineMapDataManager_o *v53; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_object__o *v55; // x23
  __int64 v56; // x0
  __int64 v57; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v59; // x1
  __int64 v60; // x0
  __int64 v61; // x1
  __int128 v62; // q0
  unsigned __int64 localPosition; // kr00_8
  float32x2_t v64; // d9
  __int128 v65; // q1
  _BOOL8 v66; // x0
  __int64 v67; // x1
  int8x8_t v68; // d0
  __int128 v69; // q3
  float32x2_t v70; // d1
  int8x8_t v71; // d1
  __int64 v72; // x1
  UnityEngine_Transform_o *v73; // x0
  __int64 v74; // x1
  __int128 v76; // [xsp+20h] [xbp-F0h]
  __int128 v77; // [xsp+20h] [xbp-F0h]
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+48h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+60h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+78h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+80h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v82; // 0:kr14_12.12

  if ( (byte_596CFB6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_2213A60(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___91666272);
    sub_2213A60(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_SrcSpotBasePrefab__TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    byte_596CFB6 = 1;
  }
  memset(&v81, 0, sizeof(v81));
  value = 0;
  memset(&v79, 0, sizeof(v79));
  v2 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
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
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v2 )
          goto LABEL_59;
        items = v2->fields._items;
        v18 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
        ++v2->fields._version;
        if ( !items )
          goto LABEL_59;
        size = v2->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v2,
            Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
        }
        else
        {
          v20 = &items->obj.klass + size;
          v2->fields._size = size + 1;
          v20[4] = (Il2CppClass *)Component_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v20 + 4),
            (int32_t)Component_object,
            v11,
            v12,
            v13,
            v14,
            v15,
            v16);
        }
      }
      klass = (int)v6[1].klass;
      if ( (int)++v7 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_2213CE4(Children);
  }
LABEL_17:
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0);
  if ( !Children )
    goto LABEL_59;
  v22 = (int)Children[1].klass;
  v23 = Children;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( v24 < v22 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v23[1].monitor + (int)v24);
      if ( !Children )
        goto LABEL_59;
      v27 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                      Children,
                                      (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v27, 0, 0);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v27 )
          goto LABEL_59;
        m_CachedPtr = v27[5].fields.m_CachedPtr;
        if ( !m_CachedPtr || !v21 )
          goto LABEL_59;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v21,
          *(_DWORD *)(m_CachedPtr + 20),
          (Il2CppObject *)v27,
          (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v22 = (int)v23[1].klass;
      if ( (int)++v24 >= v22 )
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
    sub_2213CDC(Children, v4);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v81 = v78;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v81,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v30 = sub_2213CCC(SubmarineMapManager___c__DisplayClass59_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass59_0___ctor((SubmarineMapManager___c__DisplayClass59_0_o *)v30, 0);
    if ( !v30 )
      sub_2213CDC(v31, v32);
    current = (int32_t)v81.fields._current;
    *(_QWORD *)(v30 + 16) = v81.fields._current;
    v40 = (SubmarineSilhouetteData_o **)(v30 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 16), current, v33, v34, v35, v36, v37, v38);
    if ( !*(_QWORD *)(v30 + 16) )
      sub_2213CDC(v41, v42);
    if ( *(int *)(*(_QWORD *)(v30 + 16) + 20LL) > 0 )
    {
      v43 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_object____ctor(
        v43,
        (Il2CppObject *)v30,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0);
      if ( !v2 )
        sub_2213CDC(v44, v45);
      v48 = System_Collections_Generic_List_object___Find(
              v2,
              (System_Predicate_T__o *)v43,
              (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
      v49 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v48, 0, 0);
      if ( !v49 )
      {
        if ( !*v40 )
          sub_2213CDC(v49, v50);
        if ( !v21 )
          sub_2213CDC(v49, v50);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v21,
               (*v40)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_3F9DF8C *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v53 = this->fields.submarineData;
          if ( !v53 )
            sub_2213CDC(0, v51);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v53,
                                                                                      *v40,
                                                                                      v52);
          v55 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_object____ctor_71841080(
            v55,
            SilhouetteOccupiedPanels,
            (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___91666272);
          if ( !v48 )
            sub_2213CDC(v56, v57);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v48, 0);
          if ( !transform )
            sub_2213CDC(0, v59);
          localPosition = (unsigned __int64)UnityEngine_Transform__get_localPosition(transform, 0);
          LODWORD(v62) = localPosition;
          v76 = v62;
          if ( !byte_5969AE0 )
          {
            v60 = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          if ( !v55 )
            sub_2213CDC(v60, v61);
          v64.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v78,
            v55,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v65 = v76;
          v79 = v78;
          DWORD1(v65) = HIDWORD(localPosition);
          v78.fields._list = 0;
          *(_QWORD *)&v78.fields._index = &v79;
          v77 = v65;
          while ( 1 )
          {
            v66 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v79,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v66 )
              break;
            if ( !v79.fields._current )
              sub_2213CDC(v66, v67);
            v68.n64_u64[0] = *(unsigned __int64 *)((char *)&v79.fields._current[1].monitor + 4);
            *((_QWORD *)&v69 + 1) = *((_QWORD *)&v77 + 1);
            *(int8x8_t *)&v69 = vbsl_s8(vcgt_f32(v68, *(float32x2_t *)&v77), *(int8x8_t *)&v77, v68);
            v70.n64_u64[0] = vsub_f32(vadd_f32(v64, *(float32x2_t *)&v77), *(float32x2_t *)&v69).n64_u64[0];
            v77 = v69;
            v71.n64_u64[0] = vadd_f32(*(float32x2_t *)&v69, v70).n64_u64[0];
            v64.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v71, v68), v71, v68), *(float32x2_t *)&v69).n64_u64[0];
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v79,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_2213CDC(0, v72);
          v73 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0);
          if ( !v73 )
            sub_2213CDC(0, v74);
          *(float32x2_t *)&v82.fields.x = vadd_f32(
                                            vmul_f32(v64, (float32x2_t)0x3F0000003F000000LL),
                                            *(float32x2_t *)&v77);
          v82.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v73, v82, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v81,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
}


void SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  SubmarineMapManager_o *v4; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo_45E9150 *v7; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v9; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v10; // 0:x0.12
  System_Nullable_Vector3__o v11; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596CFB3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Nullable_Vector2___ctor__);
    this = (SubmarineMapManager_o *)sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    byte_596CFB3 = 1;
  }
  submarineData = v4->fields.submarineData;
  if ( !submarineData )
    goto LABEL_9;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_9;
  *(_QWORD *)&v10.fields.hasValue = &v9;
  v9.fields.value.fields.y = 0.0;
  PanelUnitSize_k__BackingField = Settings_k__BackingField->fields._PanelUnitSize_k__BackingField;
  *(_QWORD *)&v9.fields.hasValue = 0;
  LODWORD(v10.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  System_Nullable_Vector2____ctor(v10, PanelUnitSize_k__BackingField, (const MethodInfo_45E890C *)method);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  *(_QWORD *)&v11.fields.hasValue = &centerPosition;
  *(_QWORD *)&v11.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v11, zeroVector, v7);
  if ( !spot )
LABEL_9:
    sub_2213CDC(this, spot);
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
  unsigned __int64 v9; // d0
  SubmarineMapManager_o *v10; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v14; // x2
  float32x2_t v15; // d0
  unsigned __int64 v; // [xsp+0h] [xbp-30h]
  UnityEngine_Vector3_o v17; // 0:kr00_12.12
  UnityEngine_Vector3_o v18; // 0:kr14_12.12

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
        v10 = this;
        this = (SubmarineMapManager_o *)v5->fields.terminalMap;
        if ( this )
        {
          v17 = ScrTerminalMap__LocalPosFromCoord(
                  (ScrTerminalMap_o *)this,
                  (float)SHIDWORD(v10->fields.warInfo),
                  (float)SLODWORD(v10->fields.terminalMap),
                  0.0,
                  0.0,
                  0);
          v15.n64_u32[0] = LODWORD(v17.fields.x);
          submarineData = v5->fields.submarineData;
          if ( submarineData )
          {
            Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
            if ( Settings_k__BackingField )
            {
              v15.n64_u32[1] = LODWORD(v17.fields.y);
              v8 = v17.fields.z + Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.z;
              v9 = vadd_f32(
                     v15,
                     *(float32x2_t *)&Settings_k__BackingField->fields._BoardOffset_k__BackingField.fields.x).n64_u64[0];
              goto LABEL_14;
            }
          }
        }
      }
    }
LABEL_15:
    sub_2213CDC(this, spot);
  }
  v6 = v5->fields.submarineData;
  if ( !v6 )
    goto LABEL_15;
  PositionCalculator_k__BackingField = (float32x2_t *)v6->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_15;
  v8 = 0.0;
  v9 = vadd_f32(
         PositionCalculator_k__BackingField[4],
         vmul_f32(
           vmul_f32(
             PositionCalculator_k__BackingField[2],
             vcvt_f32_s32(
               vsub_s32(
                 (int32x2_t)(vadd_s32((int32x2_t)this->fields.m_CachedPtr, (int32x2_t)this->fields.m_CachedPtr).n64_u64[0]
                           | 0x100000001LL),
                 PositionCalculator_k__BackingField[3]))),
           (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
LABEL_14:
  v = v9;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)spot, 0);
  *(_QWORD *)&v18.fields.x = v;
  v18.fields.z = v8;
  GameObjectExtensions__SetLocalPosition(gameObject, v18, 0);
  SubmarineMapManager__AdjustSpotCollider(v5, spot, v14);
}


void SubmarineMapManager__CheckNewPlayableEventQuest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  const MethodInfo *v4; // x1
  System_Int32_array *eventId; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Int32_array *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  CommonUI_o *v11; // x19
  int32_t v12; // w20
  SubmarineMapManager___c_c *v13; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__49_0; // x22
  System_String_o *v16; // x21
  Il2CppObject *v17; // x23
  struct SubmarineMapManager___c_StaticFields *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_596CFAE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_QuestReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__);
    sub_2213A60(&SubmarineMapManager___c_TypeInfo);
    sub_2213A60(&StringLiteral_7232/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/);
    byte_596CFAE = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = (System_Int32_array *)SubmarineMapManager__get_eventId(this, v4);
  if ( !Instance )
    goto LABEL_21;
  eventId = clsQuestCheck__GetNewPlayableEventQuestId((clsQuestCheck_o *)Instance, (int32_t)eventId, 0);
  if ( !eventId )
    goto LABEL_21;
  v8 = eventId;
  if ( !eventId->max_length )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6, v7);
  eventId = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !LODWORD(v8->max_length) )
    goto LABEL_22;
  if ( !eventId )
    goto LABEL_21;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)eventId, v8->m_Items[0], 143, 0) )
    return;
  eventId = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LODWORD(v8->max_length) )
LABEL_22:
    sub_2213CE4(eventId);
  v11 = (CommonUI_o *)eventId;
  v12 = v8->m_Items[0];
  v13 = SubmarineMapManager___c_TypeInfo;
  if ( !*(&SubmarineMapManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo, v9, v10);
    v13 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__49_0 = static_fields->__9__49_0;
  v16 = (System_String_o *)StringLiteral_7232/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__49_0 )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, v9, v10);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__49_0, v17, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0);
    v18 = SubmarineMapManager___c_TypeInfo->static_fields;
    v18->__9__49_0 = _9__49_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v18->__9__49_0, (int32_t)_9__49_0, v19, v20, v21, v22, v23, v24);
  }
  messagePosY = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&messagePosY,
    30.0,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  if ( !v11 )
LABEL_21:
    sub_2213CDC(eventId, v6);
  CommonUI__OpenQuestNewPlayableDialog(v11, v12, v16, _9__49_0, 0, messagePosY, 0.0, 0);
}


void SubmarineMapManager__ClickPanel(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
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
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  SchedulerTaskBase_TaskCallback_c *v40; // x1
  TaskScheduler_o *taskScheduler; // x19
  __int64 v42; // x20
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x0

  if ( (byte_596CFA4 & 1) == 0 )
  {
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskWaitTime_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager_ClickPanel__);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
    byte_596CFA4 = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass35_0___ctor((SubmarineMapManager___c__DisplayClass35_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_28;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = panelData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)panelData, v14, v15, v16, v17, v18, v19);
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
      v24 = (_QWORD *)sub_2213A78(Method_SubmarineMapManager_ClickPanel__);
    v25 = (System_Reflection_MethodBase_o *)sub_2213A44(v24, v24[4]);
    OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v29 = sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v29, PanelSelectDelaySecond_k__BackingField, 0);
        if ( v29 )
        {
          v30 = (System_Delegate_o **)(v29 + 32);
          v31 = *(System_Delegate_o **)(v29 + 32);
          v32 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
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
              sub_221405C(v33, v40, v34, v35);
              return;
            }
          }
          else
          {
            *v30 = 0;
          }
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v29 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
          taskScheduler = this->fields.taskScheduler;
          v6 = sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
          if ( v6 )
          {
            v42 = v6;
            v43 = sub_2213BB4(v29, *(_QWORD *)(*(_QWORD *)v6 + 64LL));
            if ( !v43 )
            {
              v51 = sub_2213D00(0, v44);
              sub_2213BA0(v51, 0);
            }
            if ( !*(_DWORD *)(v42 + 24) )
              sub_2213CE4(v43);
            *(_QWORD *)(v42 + 32) = v29;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 32), v29, v45, v46, v47, v48, v49, v50);
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
    sub_2213CDC(v6, v7);
  }
  v22 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v22 = (_QWORD *)sub_2213A78(Method_SubmarineMapManager_ClickPanel__);
  v23 = (System_Reflection_MethodBase_o *)sub_2213A44(v22, v22[4]);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596CF9B & 1) == 0 )
  {
    sub_2213A60(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
    byte_596CF9B = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager__CoInitRequest_d__20_TypeInfo);
  SubmarineMapManager__CoInitRequest_d__20___ctor((SubmarineMapManager__CoInitRequest_d__20_o *)v5, 0, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596CF9C & 1) == 0 )
  {
    sub_2213A60(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
    byte_596CF9C = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo);
  SubmarineMapManager__CoOnAfterSpotCreated_d__23___ctor((SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)v5, 0, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct SubmarineMapAssetManager_o *assetManager; // x8
  Il2CppObject *ScanConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  EventMapManagerBase_o *v18; // x0
  const MethodInfo *v19; // x2
  BaseDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  __int64 v22; // x2
  struct SubmarineMapAssetManager_o *v23; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  EventMapManagerBase_o *v32; // x0
  const MethodInfo *v33; // x2
  MissionNaviTransitionBoardItem_o *p_newScannerDialog; // x20
  UnityEngine_Object_o *newScannerDialog; // x21
  __int64 v36; // x2
  struct SubmarineMapAssetManager_o *v37; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x19
  Il2CppObject *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  EventMapManagerBase_o *v46; // x0
  const MethodInfo *v47; // x2

  if ( (byte_596CFB8 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFB8 = 1;
  }
  p_scanConfirmDialog = (BaseDialog_o **)&this->fields.scanConfirmDialog;
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = (Il2CppObject *)UnityEngine_Object__op_Equality(scanConfirmDialog, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_28;
    ScanConfirmDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._ScanConfirmDialogPrefab_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    v6 = UnityEngine_Object__Instantiate_object_(
           ScanConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v6 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v6,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    *p_scanConfirmDialog = (BaseDialog_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.scanConfirmDialog,
      (int32_t)Component_object,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    EventMapManagerBase__LocateDialogToUiRoot(v18, *p_scanConfirmDialog, v19);
  }
  p_selectScannerDialog = (BaseDialog_o **)&this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v6 = (Il2CppObject *)UnityEngine_Object__op_Equality(selectScannerDialog, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v23 = this->fields.assetManager;
    if ( !v23 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v23->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v22);
    v6 = UnityEngine_Object__Instantiate_object_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v6 )
      goto LABEL_28;
    v25 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v6,
            (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    *p_selectScannerDialog = (BaseDialog_o *)v25;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectScannerDialog,
      (int32_t)v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    EventMapManagerBase__LocateDialogToUiRoot(v32, *p_selectScannerDialog, v33);
  }
  p_newScannerDialog = (MissionNaviTransitionBoardItem_o *)&this->fields.newScannerDialog;
  newScannerDialog = (UnityEngine_Object_o *)this->fields.newScannerDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v22);
  v6 = (Il2CppObject *)UnityEngine_Object__op_Equality(newScannerDialog, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    v37 = this->fields.assetManager;
    if ( v37 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v37->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v36);
      v6 = UnityEngine_Object__Instantiate_object_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v6 )
      {
        v39 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v6,
                (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        p_newScannerDialog->klass = (MissionNaviTransitionBoardItem_c *)v39;
        sub_2213A04(p_newScannerDialog, (int32_t)v39, v40, v41, v42, v43, v44, v45);
        EventMapManagerBase__LocateDialogToUiRoot(v46, (BaseDialog_o *)p_newScannerDialog->klass, v47);
        return;
      }
    }
LABEL_28:
    sub_2213CDC(v6, v7);
  }
}


void SubmarineMapManager__CreateAssetManagerIfNotExists(SubmarineMapManager_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v5; // x20
  const MethodInfo *v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  const MethodInfo *v13; // x1

  if ( (byte_596CFA1 & 1) == 0 )
  {
    sub_2213A60(&SubmarineMapAssetManager_TypeInfo);
    byte_596CFA1 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (MissionNaviTransitionBoardItem_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v5 = (SubmarineMapAssetManager_o *)sub_2213CCC(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v5, v6);
    p_assetManager->klass = (MissionNaviTransitionBoardItem_c *)v5;
    sub_2213A04(p_assetManager, (int32_t)v5, v7, v8, v9, v10, v11, v12);
    if ( !p_assetManager->klass )
      sub_2213CDC(0, v13);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v13);
  }
}


void SubmarineMapManager__CreateContainers(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x9
  Il2CppObject *PanelContainerPrefab_k__BackingField; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct SubmarineMapAssetManager_o *v16; // x8
  struct ScrTerminalMap_o *v17; // x9
  Il2CppObject *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v19; // x0
  Il2CppObject *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct SubmarineMapAssetManager_o *v27; // x8
  struct ScrTerminalMap_o *v28; // x9
  Il2CppObject *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v30; // x0
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  v2 = this;
  if ( (byte_596CFAF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    this = (SubmarineMapManager_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFAF = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v9 = UnityEngine_Object__Instantiate_object__59717116(
         PanelContainerPrefab_k__BackingField,
         transform,
         (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v9;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.panelContainer, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = v2->fields.assetManager;
  if ( !v16 )
    goto LABEL_15;
  v17 = v2->fields.terminalMap;
  if ( !v17 )
    goto LABEL_15;
  this = (SubmarineMapManager_o *)v17->fields.dispRoot;
  if ( !this )
    goto LABEL_15;
  EffectContainerPrefab_k__BackingField = (Il2CppObject *)v16->fields._EffectContainerPrefab_k__BackingField;
  v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v20 = UnityEngine_Object__Instantiate_object__59717116(
          EffectContainerPrefab_k__BackingField,
          v19,
          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v20;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.effectContainer,
    (int32_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = v2->fields.assetManager;
  if ( !v27 || (v28 = v2->fields.terminalMap) == 0 || (this = (SubmarineMapManager_o *)v28->fields.dispRoot) == 0 )
LABEL_15:
    sub_2213CDC(this, method);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v27->fields._GridLinePrefab_k__BackingField;
  v30 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  v31 = UnityEngine_Object__Instantiate_object__59717116(
          GridLinePrefab_k__BackingField,
          v30,
          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.gridLine, (int32_t)v31, v32, v33, v34, v35, v36, v37);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
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
  __int64 v31; // x1
  __int64 v32; // x2
  SubmarineMapManager___c_c *v33; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v36; // x26
  struct SubmarineMapManager___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v45; // x1
  System_Collections_Generic_List_object__o *v46; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  System_Predicate_object__o *v49; // x26
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  UnityEngine_Transform_o *v57; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v60; // x0
  __int64 v61; // x1
  struct SubmarineMapDataManager_o *v62; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  Il2CppObject *v71; // x1
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  System_Object_array *v76; // x1
  const MethodInfo *v77; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  System_String_o *v79; // x2
  System_String_o *v80; // x3
  int32_t v81; // w4
  int32_t v82; // w5
  bool v83; // w6
  bool v84; // w7
  Il2CppObject *v85; // x1
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  __int64 v91; // x0
  const MethodInfo *v92; // x1
  System_Collections_Generic_List_Enumerator_object__o v93; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v94; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CFD1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___91666272);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&System_Predicate_SubmarineMapPanelData__TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_2213A60(&SrcSpotBasePrefab_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    sub_2213A60(&SubmarineMapManager___c_TypeInfo);
    byte_596CFD1 = 1;
  }
  memset(&v94, 0, sizeof(v94));
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0 )
  {
    sub_2213CDC(SilhouetteDataList_k__BackingField, v7);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v93,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v94 = v93;
  v93.fields._list = 0;
  *(_QWORD *)&v93.fields._index = &v94;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v94,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v9 = sub_2213CCC(SubmarineMapManager___c__DisplayClass101_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass101_0___ctor((SubmarineMapManager___c__DisplayClass101_0_o *)v9, 0);
    if ( !v9 )
      sub_2213CDC(v10, v11);
    current = (int32_t)v94.fields._current;
    *(_QWORD *)(v9 + 16) = v94.fields._current;
    v19 = (SubmarineSilhouetteData_o **)(v9 + 16);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), current, v12, v13, v14, v15, v16, v17);
    v22 = *(SubmarineSilhouetteData_o **)(v9 + 16);
    if ( !v22 )
      sub_2213CDC(0, v20);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v22, beforeClearQuestId, v21);
    if ( HasClearCondQuestId )
    {
      if ( !*v19 )
        sub_2213CDC(HasClearCondQuestId, v24);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v19)->fields._ObjectQuestIds_k__BackingField, -1, 0, v25) )
      {
        v28 = this->fields.submarineData;
        if ( !v28 )
          sub_2213CDC(0, v26);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v28,
                                                                                    *v19,
                                                                                    v27);
        v30 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_object____ctor_71841080(
          v30,
          SilhouetteOccupiedPanels,
          (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___91666272);
        v33 = SubmarineMapManager___c_TypeInfo;
        if ( !*(&SubmarineMapManager___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo, v31, v32);
          v33 = SubmarineMapManager___c_TypeInfo;
        }
        static_fields = v33->static_fields;
        _9__101_0 = (System_Predicate_object__o *)static_fields->__9__101_0;
        if ( !_9__101_0 )
        {
          if ( !*(&v33->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v33, v31, v32);
            static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          }
          v36 = (Il2CppObject *)static_fields->__9;
          _9__101_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_object____ctor(
            _9__101_0,
            v36,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0);
          v37 = SubmarineMapManager___c_TypeInfo->static_fields;
          v37->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v37->__9__101_0,
            (int32_t)_9__101_0,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43);
        }
        if ( !v30 )
          sub_2213CDC(v33, v31);
        All = System_Collections_Generic_List_object___FindAll(
                v30,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_448436C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v46 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_2213CDC(0, v45);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_2213CDC(0, v45);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0);
          v49 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_object____ctor(
            v49,
            (Il2CppObject *)v9,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0);
          if ( !SpotList )
            sub_2213CDC(v50, v51);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v49,
                 (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_2213CDC(0, v52);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0);
            if ( !*v19 )
              sub_2213CDC(transform, v55);
            v57 = transform;
            SpotId_k__BackingField = (*v19)->fields._SpotId_k__BackingField;
            if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v55, v56);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0);
            if ( !v57 )
              sub_2213CDC(GobjName, GobjName);
            v60 = UnityEngine_Transform__Find(v57, GobjName, 0);
            if ( !v60 )
              sub_2213CDC(0, v61);
            localPosition = UnityEngine_Transform__get_localPosition(v60, 0);
            v62 = this->fields.submarineData;
            if ( !v62 || (Settings_k__BackingField = v62->fields._Settings_k__BackingField) == 0 )
              sub_2213CDC(v91, v92);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         localPosition,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v92);
            v71 = MoveCameraToPositionTask;
            if ( !v5
              || (items = v5->fields._items,
                  v73 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__,
                  ++v5->fields._version,
                  !items) )
            {
              sub_2213CDC(MoveCameraToPositionTask, MoveCameraToPositionTask);
            }
            size = v5->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v5,
                MoveCameraToPositionTask,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v75 = &items->obj.klass + size;
              v5->fields._size = size + 1;
              v75[4] = (Il2CppClass *)v71;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v71, v65, v66, v67, v68, v69, v70);
            }
          }
          v76 = System_Collections_Generic_List_object___ToArray(
                  v46,
                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v76,
                                                           v77);
          v85 = OpenPanelsAndRevealSpotsTask;
          if ( !v5
            || (v86 = v5->fields._items,
                v87 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__,
                ++v5->fields._version,
                !v86) )
          {
            sub_2213CDC(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          }
          v88 = v5->fields._size;
          if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
          }
          else
          {
            v89 = &v86->obj.klass + v88;
            v5->fields._size = v88 + 1;
            v89[4] = (Il2CppClass *)v85;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v89 + 4), (int32_t)v85, v79, v80, v81, v82, v83, v84);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v94,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
}


SchedulerTaskBase_o *SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_596CFCE & 1) == 0 )
  {
    sub_2213A60(&SchedulerTaskNone_TypeInfo);
    byte_596CFCE = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_2213CCC(SchedulerTaskNone_TypeInfo);
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
  const MethodInfo_45E890C *v5; // x2
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
  if ( (byte_596CFC7 & 1) == 0 )
  {
    sub_2213A60(&MapCameraPerformance_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector2___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    byte_596CFC7 = 1;
  }
  v17.fields.x = x;
  v17.fields.y = y;
  LODWORD(v16.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v16.fields.hasValue = &v15;
  v15.fields.value.fields.y = 0.0;
  *(_QWORD *)&v15.fields.hasValue = 0;
  System_Nullable_Vector2____ctor(v16, v17, v5);
  v14 = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&v14,
    size,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  v12 = (MapCameraPerformance_o *)sub_2213CCC(MapCameraPerformance_TypeInfo);
  MapCameraPerformance___ctor(v12, mapCamera, second, v15, v14, 15, 0);
  return (SchedulerTaskBase_o *)v12;
}


void SubmarineMapManager__CreateNeverOpenSurrounds(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SubmarineMapManager_o *v3; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *panelContainer; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *closedPanelTexture; // x20
  const MethodInfo *v12; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x24
  SubmarineMapManager_o *v15; // x20
  __int64 v16; // x25
  struct SubmarineMapAssetManager_o *v17; // x8
  __int64 v18; // x21
  Il2CppObject *v19; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Transform_o *transform; // x23
  SubmarineMapManager_o *v23; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  SubmarineMapPanelComponent_o *v30; // x22
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  struct SubmarineMapDataManager_o *v36; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v38; // x20
  int32_t i; // w21
  int v40; // w26
  int32_t v41; // w22
  struct SubmarineMapDataManager_o *v42; // x8
  struct SubmarineMapAssetManager_o *v43; // x8
  SubmarineMapManager_o *v44; // x23
  Il2CppObject *v45; // x24
  __int64 v46; // x1
  __int64 v47; // x2
  UnityEngine_Transform_o *v48; // x25
  SubmarineMapManager_o *v49; // x24
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  SubmarineMapPanelComponent_o *v56; // x24
  const MethodInfo *v57; // x2
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x2
  UnityEngine_Vector3_o v60; // 0:kr00_12.12
  UnityEngine_Vector3_o v61; // 0:kr14_12.12
  UnityEngine_Vector3_o v62; // 0:kr20_12.12

  v3 = this;
  if ( (byte_596CFB1 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_2213A60(&PanelUniqueIDUtil_TypeInfo);
    byte_596CFB1 = 1;
  }
  assetManager = v3->fields.assetManager;
  if ( !assetManager )
    goto LABEL_53;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0, 0) )
    return;
  panelContainer = (UnityEngine_Object_o *)v3->fields.panelContainer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Equality(panelContainer, 0, 0) )
    return;
  closedPanelTexture = (UnityEngine_Object_o *)v3->fields.closedPanelTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  submarineData = v3->fields.submarineData;
  if ( !submarineData
    || (this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
                                          submarineData->fields._PositionCalculator_k__BackingField,
                                          v3->fields.closedPanelTexture,
                                          v12)) == 0 )
  {
LABEL_53:
    sub_2213CDC(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v15 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v16 = 0;
    do
    {
      if ( (unsigned int)v16 >= LODWORD(v15->fields.m_CancellationTokenSource) )
        sub_2213CE4(this);
      v17 = v3->fields.assetManager;
      if ( !v17 )
        goto LABEL_53;
      this = (SubmarineMapManager_o *)v3->fields.panelContainer;
      if ( !this )
        goto LABEL_53;
      v18 = *((_QWORD *)&v15->fields.mapInfo + v16);
      v19 = (Il2CppObject *)v17->fields._PanelPrefab_k__BackingField;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__59717116(
                                        v19,
                                        transform,
                                        (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
      if ( !this )
        goto LABEL_53;
      v23 = this;
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !v18 )
        goto LABEL_53;
      if ( !this )
        goto LABEL_53;
      *(float32x2_t *)&v60.fields.x = vadd_f32(
                                        *(float32x2_t *)(v18 + 16),
                                        vmul_f32(*(float32x2_t *)(v18 + 24), (float32x2_t)0x3F0000003F000000LL));
      v60.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v60, 0);
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)v23,
                                        (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
      if ( !this )
        goto LABEL_53;
      v30 = (SubmarineMapPanelComponent_o *)this;
      this->fields.mapCamera = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mapCamera, 0, v24, v25, v26, v27, v28, v29);
      SubmarineMapPanelComponent__SetSize(v30, (ObjectDomain_o *)v18, v31);
      SubmarineMapPanelComponent__SetClosedPanelTexture(v30, (ObjectDomain_o *)v18, v3->fields.closedPanelTexture, v32);
      SubmarineMapPanelComponent__SetClosedPanelVisible(v30, 1, v33);
    }
    while ( (_DWORD)m_CancellationTokenSource != (_DWORD)++v16 );
  }
  this = (SubmarineMapManager_o *)v3->fields.submarineData;
  if ( !this )
    goto LABEL_53;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                    (SubmarineMapDataManager_o *)this,
                                    method);
  v36 = v3->fields.submarineData;
  if ( !v36 )
    goto LABEL_53;
  PositionCalculator_k__BackingField = v36->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_53;
  v38 = this;
  for ( i = 0; i < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField; ++i )
  {
    v40 = 1;
    v41 = 0;
    while ( 1 )
    {
      PositionCalculator_k__BackingField = v36->fields._PositionCalculator_k__BackingField;
      if ( !PositionCalculator_k__BackingField )
        goto LABEL_53;
      if ( v41 >= PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
        break;
      if ( !*(&PanelUniqueIDUtil_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, method, v34);
      this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(i, v41, (System_Int32_array *)v38, v35);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v42 = v3->fields.submarineData;
        if ( !v42 )
          goto LABEL_53;
        this = (SubmarineMapManager_o *)v42->fields._PositionCalculator_k__BackingField;
        if ( !this )
          goto LABEL_53;
        *(float32x2_t *)&v61.fields.x = vadd_f32(
                                          (float32x2_t)this->fields.mapInfo,
                                          vmul_f32(
                                            vmul_f32(
                                              (float32x2_t)this->fields.m_CachedPtr,
                                              vcvt_f32_s32(
                                                vsub_s32(
                                                  (int32x2_t)__PAIR64__(v40, (2 * i) | 1u),
                                                  (int32x2_t)this->fields.m_CancellationTokenSource))),
                                            (float32x2_t)0x3F0000003F000000LL));
        v61.fields.z = 0.0;
        this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                          v61,
                                          (SubmarinePanelPositionCalculator_o *)this,
                                          method);
        v43 = v3->fields.assetManager;
        if ( !v43 )
          goto LABEL_53;
        v44 = this;
        this = (SubmarineMapManager_o *)v3->fields.panelContainer;
        if ( !this )
          goto LABEL_53;
        v45 = (Il2CppObject *)v43->fields._PanelPrefab_k__BackingField;
        v48 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v46, v47);
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__59717116(
                                          v45,
                                          v48,
                                          (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
        if ( !this )
          goto LABEL_53;
        v49 = this;
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !v44 )
          goto LABEL_53;
        if ( !this )
          goto LABEL_53;
        *(float32x2_t *)&v62.fields.x = vadd_f32(
                                          (float32x2_t)v44->fields.m_CachedPtr,
                                          vmul_f32(
                                            (float32x2_t)v44->fields.m_CancellationTokenSource,
                                            (float32x2_t)0x3F0000003F000000LL));
        v62.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v62, 0);
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v49,
                                          (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
        if ( !this )
          goto LABEL_53;
        v56 = (SubmarineMapPanelComponent_o *)this;
        this->fields.mapCamera = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.mapCamera, 0, v50, v51, v52, v53, v54, v55);
        SubmarineMapPanelComponent__SetSize(v56, (ObjectDomain_o *)v44, v57);
        SubmarineMapPanelComponent__SetClosedPanelTexture(
          v56,
          (ObjectDomain_o *)v44,
          v3->fields.closedPanelTexture,
          v58);
        SubmarineMapPanelComponent__SetClosedPanelVisible(v56, 1, v59);
      }
      v36 = v3->fields.submarineData;
      ++v41;
      v40 += 2;
      if ( !v36 )
        goto LABEL_53;
    }
  }
}


SchedulerTaskBase_o *SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effectContainer; // x0
  const MethodInfo_45E9150 *v8; // x2
  UnityEngine_Transform_o *v9; // x22
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  SchedulerTaskCommonEffect_o *v11; // x0
  SchedulerTaskCommonEffect_o *v12; // x21
  System_Delegate_o **p_StartCallback; // x22
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v15; // x24
  System_Delegate_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w8
  SchedulerTaskBase_TaskCallback_c *v24; // x1
  SchedulerTaskBase_array *v25; // x22
  SchedulerTaskWaitTime_o *v26; // x23
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  SchedulerTaskOrthostichy_o *v40; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v43; // s8
  System_Collections_Generic_List_object__o *v44; // x22
  SchedulerTaskWaitTime_o *v45; // x23
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Object_array *items; // x8
  _QWORD *v53; // x9
  __int64 size; // x10
  Il2CppClass **v55; // x0
  const MethodInfo *v56; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v58; // x19
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  SchedulerTaskBase_array *v65; // x20
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  SchedulerTaskParallel_o *v72; // x19
  __int64 v74; // x0
  System_Nullable_Vector3__o v75; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v76; // 0:x0.16
  System_Nullable_Vector3__o v77; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CFCB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector3___ctor__);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskCommonEffect_TypeInfo);
    sub_2213A60(&SchedulerTaskOrthostichy_TypeInfo);
    sub_2213A60(&SchedulerTaskParallel_TypeInfo);
    sub_2213A60(&SchedulerTaskWaitTime_TypeInfo);
    sub_2213A60(&Method_SubmarineMapPanelData_OpenPanel__);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_596CFCB = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0);
  if ( !panelData )
    goto LABEL_32;
  v9 = (UnityEngine_Transform_o *)effectContainer;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  *(_QWORD *)&v76.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v76.fields.hasValue = &v75;
  *(_QWORD *)&v75.fields.hasValue = 0;
  *(_QWORD *)&v75.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v76, LocalPosition_k__BackingField, v8);
  v11 = (SchedulerTaskCommonEffect_o *)sub_2213CCC(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v77.fields.hasValue = 0;
  *(_QWORD *)&v77.fields.value.fields.y = 0;
  v12 = v11;
  SchedulerTaskCommonEffect___ctor_51329212(
    v11,
    v9,
    effectScanedPanelObjPool,
    v75,
    v77,
    (System_Nullable_Vector3__o)0,
    1,
    0);
  if ( !v12 )
    goto LABEL_32;
  p_StartCallback = (System_Delegate_o **)&v12->fields.StartCallback;
  StartCallback = (System_Delegate_o *)v12->fields.StartCallback;
  v15 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v15, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0);
  v16 = System_Delegate__Combine(StartCallback, (System_Delegate_o *)v15, 0);
  v23 = (int)v16;
  if ( v16 )
  {
    v24 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *p_StartCallback = v16;
      if ( (SchedulerTaskBase_TaskCallback_c *)v16->klass == v24 )
        goto LABEL_11;
    }
    sub_221405C(v16, v24, v17, v18);
  }
  *p_StartCallback = 0;
LABEL_11:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->fields.StartCallback, v23, v17, v18, v19, v20, v21, v22);
  v25 = (SchedulerTaskBase_array *)sub_2213B20(SchedulerTaskBase___TypeInfo, 2);
  v26 = (SchedulerTaskWaitTime_o *)sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v26, waitTime, 0);
  if ( !v25 )
    goto LABEL_32;
  if ( v26 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_2213BB4(v26, v25->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !LODWORD(v25->max_length) )
    goto LABEL_33;
  v25->m_Items[0] = (SchedulerTaskBase_o *)v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v25->m_Items, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  effectContainer = (UnityEngine_GameObject_o *)sub_2213BB4(v12, v25->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( (v25->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_33;
  v25->m_Items[1] = (SchedulerTaskBase_o *)v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->m_Items[1], (int32_t)v12, v34, v35, v36, v37, v38, v39);
  v40 = (SchedulerTaskOrthostichy_o *)sub_2213CCC(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor(v40, v25, 0);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v43 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v44 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v45 = (SchedulerTaskWaitTime_o *)sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v45, v43, 0);
  if ( !v44 )
    goto LABEL_32;
  items = v44->fields._items;
  v53 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v44->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v44->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v44,
      (Il2CppObject *)v45,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &items->obj.klass + size;
    v44->fields._size = size + 1;
    v55[4] = (Il2CppClass *)v45;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 4), (int32_t)v45, v46, v47, v48, v49, v50, v51);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v56);
  System_Collections_Generic_List_object___AddRange(
    v44,
    RevealSpotOnPanelTasks,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v58 = (SchedulerTaskOrthostichy_o *)sub_2213CCC(SchedulerTaskOrthostichy_TypeInfo);
  SchedulerTaskOrthostichy___ctor_51332376(v58, (System_Collections_Generic_List_SchedulerTaskBase__o *)v44, 0);
  effectContainer = (UnityEngine_GameObject_o *)sub_2213B20(SchedulerTaskBase___TypeInfo, 2);
  if ( !effectContainer )
LABEL_32:
    sub_2213CDC(effectContainer, panelData);
  v65 = (SchedulerTaskBase_array *)effectContainer;
  if ( v40 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_2213BB4(v40, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !LODWORD(v65->max_length) )
    goto LABEL_33;
  v65->m_Items[0] = (SchedulerTaskBase_o *)v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v65->m_Items, (int32_t)v40, v59, v60, v61, v62, v63, v64);
  if ( v58 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_2213BB4(v58, v65->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v74 = sub_2213D00(effectContainer, v33);
      sub_2213BA0(v74, 0);
    }
  }
  if ( (v65->max_length & 0xFFFFFFFE) == 0 )
LABEL_33:
    sub_2213CE4(effectContainer);
  v65->m_Items[1] = (SchedulerTaskBase_o *)v58;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->m_Items[1], (int32_t)v58, v66, v67, v68, v69, v70, v71);
  v72 = (SchedulerTaskParallel_o *)sub_2213CCC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor(v72, v65, 0);
  return (SchedulerTaskBase_o *)v72;
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppObject *v20; // x1
  Il2CppClass **v21; // x0
  SchedulerTaskParallel_o *v22; // x19

  if ( (byte_596CFCC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&SchedulerTaskParallel_TypeInfo);
    byte_596CFCC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  max_length = panelDataArray->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)max_length )
        sub_2213CE4(OpenPanelAndRevealSpotTask);
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
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v20;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
      }
      LODWORD(max_length) = panelDataArray->max_length;
      if ( (__int64)++v10 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_14:
    sub_2213CDC(OpenPanelAndRevealSpotTask, v7);
  }
LABEL_13:
  v22 = (SchedulerTaskParallel_o *)sub_2213CCC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_51333408(v22, (System_Collections_Generic_List_SchedulerTaskBase__o *)v5, 0);
  return (SchedulerTaskBase_o *)v22;
}


void SubmarineMapManager__CreatePanels(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SubmarineMapManager_o *v3; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *panelContainer; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  struct SubmarineMapAssetManager_o *v15; // x8
  UnityEngine_GameObject_o *v16; // x0
  Il2CppObject *current; // x20
  Il2CppObject *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v22; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x22
  Il2CppObject *Component_object; // x0
  const MethodInfo *v26; // x1
  struct SubmarineMapDataManager_o *v27; // x8
  Il2CppObject *v28; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v30; // s8
  float v31; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  ObjectDomain_o *v40; // x23
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x3
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Action_object__o *v49; // x21
  const MethodInfo *v50; // x2
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_596CFB0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_SubmarineMapPanelData__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager_o *)sub_2213A60(&Method_SubmarineMapManager_ClickPanel__);
    byte_596CFB0 = 1;
  }
  assetManager = v3->fields.assetManager;
  memset(&v52, 0, sizeof(v52));
  if ( !assetManager )
    goto LABEL_36;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0, 0) )
  {
    panelContainer = (UnityEngine_Object_o *)v3->fields.panelContainer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0, 0) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)v3->fields.closedPanelTexture;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        submarineData = v3->fields.submarineData;
        if ( submarineData )
        {
          this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField;
          if ( this )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v51,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v52 = v51;
            v51.fields._list = 0;
            *(_QWORD *)&v51.fields._index = &v52;
            while ( 1 )
            {
              v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v52,
                      (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v13 )
                break;
              v15 = v3->fields.assetManager;
              if ( !v15 )
                sub_2213CDC(v13, v14);
              v16 = v3->fields.panelContainer;
              if ( !v16 )
                sub_2213CDC(0, v14);
              current = v52.fields._current;
              v18 = (Il2CppObject *)v15->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v16, 0);
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
              v22 = UnityEngine_Object__Instantiate_object__59717116(
                      v18,
                      transform,
                      (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
              v24 = (UnityEngine_GameObject_o *)v22;
              if ( !v22 )
                sub_2213CDC(0, v23);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v22,
                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v27 = v3->fields.submarineData;
              if ( !v27 )
                sub_2213CDC(Component_object, v26);
              if ( !current )
                sub_2213CDC(Component_object, v26);
              v28 = Component_object;
              PositionCalculator_k__BackingField = v27->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_2213CDC(0, v26);
              v30 = PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.x
                                  * (float)(((2 * LODWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField))
                          * 0.5);
              v31 = PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.y
                                  * (float)(((2 * HIDWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField))
                          * 0.5);
              v53.fields.z = 0.0;
              v53.fields.x = v30;
              v53.fields.y = v31;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v53,
                                    PositionCalculator_k__BackingField,
                                    v26);
              if ( !v28 )
                sub_2213CDC(ClosedPanelDomain, v33);
              v40 = ClosedPanelDomain;
              v28[3].monitor = 0;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&v28[3].monitor, 0, v34, v35, v36, v37, v38, v39);
              v54.fields.z = 0.0;
              v54.fields.x = v30;
              v54.fields.y = v31;
              GameObjectExtensions__SetLocalPosition(v24, v54, 0);
              SubmarineMapPanelComponent__SetSize((SubmarineMapPanelComponent_o *)v28, v40, v41);
              SubmarineMapPanelComponent__SetClosedPanelTexture(
                (SubmarineMapPanelComponent_o *)v28,
                v40,
                v3->fields.closedPanelTexture,
                v42);
              current[3].klass = (Il2CppClass *)v28;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)&current[3], (int32_t)v28, v43, v44, v45, v46, v47, v48);
              v49 = (System_Action_object__o *)sub_2213CCC(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_object____ctor(
                v49,
                (Il2CppObject *)v3,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                0);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v49,
                v50);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v52,
              (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_2213CDC(this, method);
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
  unsigned int v8; // w26
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Component_object; // x22
  const MethodInfo *v12; // x2

  if ( (byte_596CFCF & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFCF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
        sub_2213CE4(Children);
      Children = (void *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      Children = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v12);
        if ( !v3 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v3,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
    }
LABEL_15:
    sub_2213CDC(Children, v5);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x21
  System_Collections_Generic_List_object__o *v15; // x20
  SchedulerTaskNone_o *v16; // x23
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_object__o *SpotList; // x23
  System_Predicate_object__o *v28; // x24
  __int64 v29; // x2
  __int64 v30; // x8
  UnityEngine_Transform_o *v31; // x21
  int32_t v32; // w22
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *v35; // x21
  Il2CppObject *Component_object; // x1
  const MethodInfo *v38; // x2

  if ( (byte_596CFCA & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_MapControl_SpotInfo__TypeInfo);
    sub_2213A60(&SchedulerTaskNone_TypeInfo);
    sub_2213A60(&SrcSpotBasePrefab_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
    byte_596CFCA = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass94_0___ctor((SubmarineMapManager___c__DisplayClass94_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_25;
  *(_QWORD *)(v5 + 16) = panelData;
  v14 = v5 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)panelData, v8, v9, v10, v11, v12, v13);
  v15 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v16 = (SchedulerTaskNone_o *)sub_2213CCC(SchedulerTaskNone_TypeInfo);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  }
  if ( !*(_QWORD *)v14 || *(int *)(*(_QWORD *)v14 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0);
  v28 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_MapControl_SpotInfo__TypeInfo);
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
          (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_25;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0);
  v30 = *(_QWORD *)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_25;
  v31 = (UnityEngine_Transform_o *)mapInfo;
  v32 = *(_DWORD *)(v30 + 40);
  if ( !*(&SrcSpotBasePrefab_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v7, v29);
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v32, 0);
  if ( !v31 )
    goto LABEL_25;
  v35 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v31, (System_String_o *)mapInfo, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v35, 0, 0);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
  if ( !v35 )
LABEL_25:
    sub_2213CDC(mapInfo, v7);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v35,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v38);
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
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_596CFD0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&SubmarineLightenSpotPerformance_TypeInfo);
    sub_2213A60(&SubmarineRevealSpotPerformance_TypeInfo);
    byte_596CFD0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v9);
  v10 = sub_2213CCC(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v10, 0);
  *(_QWORD *)(v10 + 48) = spot;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 48), (int32_t)spot, v11, v12, v13, v14, v15, v16);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v26[4] = (Il2CppClass *)v10;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), v10, v17, v18, v19, v20, v21, v22);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v5;
  v27 = sub_2213CCC(SubmarineLightenSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v27, 0);
  *(_QWORD *)(v27 + 48) = spot;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v27 + 48), (int32_t)spot, v28, v29, v30, v31, v32, v33);
  v40 = v5->fields._items;
  v41 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v5->fields._version;
  if ( !v40 )
LABEL_20:
    sub_2213CDC(mMapCtrl_SpotInfo, v7);
  v42 = v5->fields._size;
  if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      (Il2CppObject *)v27,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &v40->obj.klass + v42;
    v5->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)v27;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v43 + 4), v27, v34, v35, v36, v37, v38, v39);
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
  __int64 v14; // x2
  SubmarineMapManager___c_c *v15; // x8
  System_Collections_Generic_List_object__o *v16; // x21
  struct SubmarineMapManager___c_StaticFields *static_fields; // x9
  System_Predicate_object__o *_9__97_0; // x22
  Il2CppObject *v19; // x23
  struct SubmarineMapManager___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  SubmarineMapManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  struct SubmarineMapManager___c_StaticFields *v32; // x9
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v34; // x23
  struct SubmarineMapManager___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  unsigned int v42; // w23
  SubmarineMapManager___c__DisplayClass97_0_o *v43; // x22
  float v44; // s9
  int v45; // w27
  System_Predicate_object__o *v46; // x23
  System_Collections_Generic_List_T__o *v47; // x23
  System_Collections_Generic_List_object__o *v48; // x0
  __int128 v49; // q0
  _BOOL8 v50; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v54; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v56; // x2
  float v57; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  Il2CppObject *v65; // x1
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v71; // w8
  SchedulerTaskParallel_o *v72; // x19
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v75; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_596CFCD & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__);
    sub_2213A60(&System_Func_SubmarineScanEvent__int__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&System_Predicate_SubmarineScanEvent__TypeInfo);
    sub_2213A60(&SchedulerTaskParallel_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__);
    sub_2213A60(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
    sub_2213A60(&SubmarineMapManager___c_TypeInfo);
    byte_596CFCD = 1;
  }
  memset(&v75, 0, sizeof(v75));
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_46;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_46;
  ScanOpenPanelInterval = SubmarineSettingsManager__GetScanOpenPanelInterval(Settings_k__BackingField, scanId, v10);
  Settings_k__BackingField = (SubmarineSettingsManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                                             scanId,
                                                             panelData,
                                                             this->fields.submarineData,
                                                             v13);
  v15 = SubmarineMapManager___c_TypeInfo;
  v16 = (System_Collections_Generic_List_object__o *)Settings_k__BackingField;
  if ( !*(&SubmarineMapManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo, v9, v14);
    v15 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__97_0 = (System_Predicate_object__o *)static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v9, v14);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__97_0 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_object____ctor(_9__97_0, v19, Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__, 0);
    v20 = SubmarineMapManager___c_TypeInfo->static_fields;
    v20->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v20->__9__97_0, (int32_t)_9__97_0, v21, v22, v23, v24, v25, v26);
  }
  if ( !v16 )
    goto LABEL_46;
  All = System_Collections_Generic_List_object___FindAll(
          v16,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_448436C *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v30 = SubmarineMapManager___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( !*(&SubmarineMapManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo, v28, v29);
    v30 = SubmarineMapManager___c_TypeInfo;
  }
  v32 = v30->static_fields;
  _9__97_1 = (System_Func_object__int__o *)v32->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !*(&v30->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v30, v28, v29);
      v32 = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_2213CCC(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_object__int____ctor(_9__97_1, v34, Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__, 0);
    v35 = SubmarineMapManager___c_TypeInfo->static_fields;
    v35->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v35->__9__97_1, (int32_t)_9__97_1, v36, v37, v38, v39, v40, v41);
  }
  v42 = System_Linq_Enumerable__Max_object_(
          v31,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_38875C8 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v43 = (SubmarineMapManager___c__DisplayClass97_0_o *)sub_2213CCC(SubmarineMapManager___c__DisplayClass97_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass97_0___ctor(v43, 0);
  if ( !v43 )
LABEL_46:
    sub_2213CDC(Settings_k__BackingField, v9);
  v43->fields.i = 0;
  if ( v42 <= 0x7FFFFFFE )
  {
    v44 = 0.0;
    v45 = v42 + 1;
    do
    {
      v46 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_object____ctor(
        v46,
        (Il2CppObject *)v43,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0);
      if ( !v31 )
        goto LABEL_46;
      v47 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v31,
              (System_Predicate_T__o *)v46,
              (const MethodInfo_448436C *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v48 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v48,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v47 )
        goto LABEL_46;
      System_Collections_Generic_List_object___GetEnumerator(
        &v74,
        (System_Collections_Generic_List_object__o *)v47,
        (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v49 = *(_OWORD *)&v74.fields._list;
      v74.fields._list = 0;
      *(_QWORD *)&v74.fields._index = &v75;
      *(_OWORD *)&v75.fields._list = v49;
      v75.fields._current = v74.fields._current;
      while ( 1 )
      {
        v50 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v75,
                (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v50 )
          break;
        current = v75.fields._current;
        if ( !v75.fields._current )
          sub_2213CDC(v50, v51);
        v54 = this->fields.submarineData;
        if ( !v54 )
          sub_2213CDC(0, v51);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v54,
                           (int32_t)v75.fields._current[1].klass,
                           HIDWORD(v75.fields._current[1].klass),
                           v52);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v57,
                                v56);
            v65 = (Il2CppObject *)HitObstractTask;
            if ( !v7
              || (items = v7->fields._items,
                  v67 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__,
                  ++v7->fields._version,
                  !items) )
            {
              sub_2213CDC(HitObstractTask, HitObstractTask);
            }
            size = v7->fields._size;
            if ( (unsigned int)size < LODWORD(items->max_length) )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v7,
              v65,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v44,
                                           v56);
            v65 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v7
              || (items = v7->fields._items,
                  v67 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__,
                  ++v7->fields._version,
                  !items) )
            {
              sub_2213CDC(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            }
            size = v7->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
              goto LABEL_37;
LABEL_32:
            v69 = &items->obj.klass + size;
            v7->fields._size = size + 1;
            v69[4] = (Il2CppClass *)v65;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v69 + 4), (int32_t)v65, v59, v60, v61, v62, v63, v64);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v75,
        (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v44 = ScanOpenPanelInterval + v44;
      v71 = v43->fields.i + 1;
      v43->fields.i = v71;
    }
    while ( v71 < v45 );
  }
  v72 = (SchedulerTaskParallel_o *)sub_2213CCC(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_51333408(v72, (System_Collections_Generic_List_SchedulerTaskBase__o *)v7, 0);
  return (SchedulerTaskBase_o *)v72;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
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
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppClass **v33; // x29
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x1
  Il2CppClass **v38; // x0
  const MethodInfo *v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  Il2CppObject *ScanAnimObjectPrefab; // x22
  const MethodInfo *v43; // x1
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_o *HomeSpot; // x23
  __int64 v47; // x1
  __int64 v48; // x2
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v50; // x0
  __int64 v51; // x24
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x2
  SubmarineScannerComponent_o *Component_object; // x22
  float32x2_t v60; // d0
  struct SubmarineMapDataManager_o *v61; // x8
  struct SubmarineSettingsManager_o *v62; // x8
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x1
  Il2CppClass **v73; // x0
  const MethodInfo *v74; // x1
  float JumpStartTime; // s10
  __int64 v76; // x28
  __int64 v77; // x25
  System_Delegate_o *v78; // x26
  SchedulerTaskBase_TaskCallback_o *v79; // x27
  System_Delegate_o *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_Delegate_o *v87; // x8
  SchedulerTaskBase_TaskCallback_c *v88; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v90; // x8
  __int64 v91; // x2
  struct SubmarineMapManager_PlayingScanVoiceData_o *v92; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v95; // x0
  __int64 v96; // x25
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7
  System_String_o *v103; // x27
  SchedulerTaskWaitLoadAsset_o *v104; // x26
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  struct System_Object_array *v111; // x8
  _QWORD *v112; // x9
  __int64 v113; // x10
  Il2CppClass **v114; // x0
  System_String_o *v115; // x2
  System_String_o *v116; // x3
  int32_t v117; // w4
  int32_t v118; // w5
  bool v119; // w6
  bool v120; // w7
  __int64 v121; // x1
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  __int64 v128; // x1
  float v129; // s10
  System_Delegate_o *v130; // x27
  SchedulerTaskBase_TaskCallback_o *v131; // x28
  System_Delegate_o *v132; // x0
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  struct System_Object_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  Il2CppClass **v146; // x0
  const MethodInfo *v147; // x1
  float SelectedPanelEffecFinishTime; // s10
  System_Delegate_o *v149; // x27
  SchedulerTaskBase_TaskCallback_o *v150; // x28
  System_Delegate_o *v151; // x0
  int32_t v152; // w4
  int32_t v153; // w5
  bool v154; // w6
  bool v155; // w7
  const MethodInfo *v156; // x1
  __int64 v157; // x1
  const MethodInfo_45E890C *v158; // x2
  float JumpDuration; // s10
  float32x2_t v160; // d12
  MapCamera_o *mapCamera; // x21
  MapCameraPerformance_o *v162; // x26
  UnityEngine_GameObject_o *v163; // x24
  SchedulerTaskMovePerformance_o *v164; // x0
  SchedulerTaskBase_o *v165; // x21
  System_String_o *v166; // x2
  System_String_o *v167; // x3
  int32_t v168; // w4
  int32_t v169; // w5
  bool v170; // w6
  bool v171; // w7
  SchedulerTaskBase_array *v172; // x24
  __int64 v173; // x1
  System_String_o *v174; // x2
  System_String_o *v175; // x3
  int32_t v176; // w4
  int32_t v177; // w5
  bool v178; // w6
  bool v179; // w7
  const MethodInfo *v180; // x1
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x9
  System_String_o *v184; // x27
  System_Delegate_o *v185; // x27
  SchedulerTaskBase_TaskCallback_o *v186; // x28
  System_Delegate_o *v187; // x0
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  __int64 v192; // x27
  __int64 v193; // x20
  System_String_o *v194; // x2
  System_String_o *v195; // x3
  int32_t v196; // w4
  int32_t v197; // w5
  bool v198; // w6
  bool v199; // w7
  __int64 v200; // x24
  System_String_o *v201; // x2
  System_String_o *v202; // x3
  int32_t v203; // w4
  int32_t v204; // w5
  bool v205; // w6
  bool v206; // w7
  System_String_o *v207; // x2
  System_String_o *v208; // x3
  int32_t v209; // w4
  int32_t v210; // w5
  bool v211; // w6
  bool v212; // w7
  SchedulerTaskOrthostichy_o *v213; // x21
  System_String_o *v214; // x2
  System_String_o *v215; // x3
  int32_t v216; // w4
  int32_t v217; // w5
  bool v218; // w6
  bool v219; // w7
  SchedulerTaskParallel_o *v220; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v222; // x20
  System_String_o *v223; // x2
  System_String_o *v224; // x3
  int32_t v225; // w4
  int32_t v226; // w5
  bool v227; // w6
  bool v228; // w7
  struct System_Object_array *v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  Il2CppClass **v232; // x0
  System_String_o *v233; // x2
  System_String_o *v234; // x3
  int32_t v235; // w4
  int32_t v236; // w5
  bool v237; // w6
  bool v238; // w7
  struct System_Object_array *v239; // x8
  _QWORD *v240; // x9
  __int64 v241; // x10
  Il2CppClass **v242; // x0
  System_String_o *v243; // x2
  System_String_o *v244; // x3
  int32_t v245; // w4
  int32_t v246; // w5
  bool v247; // w6
  bool v248; // w7
  struct System_Object_array *v249; // x8
  _QWORD *v250; // x9
  __int64 v251; // x10
  Il2CppClass **v252; // x0
  __int64 v254; // x0
  __int64 v255; // [xsp+8h] [xbp-E8h]
  float32x2_t value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_Vector2__o v259; // 0:x0.12
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  UnityEngine_Vector3_o v261; // 0:kr14_12.12
  UnityEngine_Vector2_o v262; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v263; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_596CFC9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_2213A60(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&MapCameraPerformance_TypeInfo);
    sub_2213A60(&Method_System_Nullable_Vector2___ctor__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskMovePerformance_TypeInfo);
    sub_2213A60(&SchedulerTaskOrthostichy_TypeInfo);
    sub_2213A60(&SchedulerTaskParallel_TypeInfo);
    sub_2213A60(&SchedulerTaskSimpleAnimation_TypeInfo);
    sub_2213A60(&SchedulerTaskWaitLoadAsset_TypeInfo);
    sub_2213A60(&SchedulerTaskWaitTime_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
    byte_596CFC9 = 1;
  }
  v7 = sub_2213CCC(SubmarineMapManager___c__DisplayClass93_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass93_0___ctor((SubmarineMapManager___c__DisplayClass93_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_130;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_130;
  if ( !panelData )
    goto LABEL_130;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_130;
  v18.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v19.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v20.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v21.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v23 = this->fields.submarineData;
  if ( !v23 )
    goto LABEL_130;
  Settings_k__BackingField = v23->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_130;
  v25 = vadd_f32(
          v21,
          vmul_f32(
            vmul_f32(v19, vcvt_f32_s32(vsub_s32((int32x2_t)(vadd_s32(v18, v18).n64_u64[0] | 0x100000001LL), v20))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v26 = *((float *)&v25 + 1);
  value.n64_u64[0] = v25;
  *(_QWORD *)&v261.fields.x = v25;
  v261.fields.z = 0.0;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        v261,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v9);
  if ( !v22 )
    goto LABEL_130;
  v33 = (Il2CppClass **)&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  items = v22->fields._items;
  v35 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v22->fields._version;
  if ( !items )
    goto LABEL_130;
  v36 = v22->fields._size;
  v37 = MoveCameraToPositionTask;
  if ( (unsigned int)v36 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v22,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &items->obj.klass + v36;
    v22->fields._size = v36 + 1;
    v38[4] = (Il2CppClass *)v37;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v38 + 4), v37, v27, v28, v29, v30, v31, v32);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_130;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_130;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
  if ( !this->fields.assetManager )
    goto LABEL_130;
  ScanAnimObjectPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                           this->fields.assetManager,
                                           *(_DWORD *)(MoveCameraToPositionTask + 56),
                                           v39);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40, v41);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanAnimObjectPrefab, 0, 0) )
  {
    HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v43);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
    MoveCameraToPositionTask = UnityEngine_Object__op_Equality(HomeSpot, 0, 0);
    if ( (MoveCameraToPositionTask & 1) == 0 )
    {
      if ( !HomeSpot )
        goto LABEL_130;
      MoveCameraToPositionTask = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0);
      if ( !MoveCameraToPositionTask )
        goto LABEL_130;
      localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)MoveCameraToPositionTask, 0);
      MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
      if ( !MoveCameraToPositionTask )
        goto LABEL_130;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
      v50 = UnityEngine_Object__Instantiate_object__59717116(
              ScanAnimObjectPrefab,
              transform,
              (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
      *(_QWORD *)(v7 + 16) = v50;
      v51 = v7 + 16;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v50, v52, v53, v54, v55, v56, v57);
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v7 + 16), localPosition, 0);
      MoveCameraToPositionTask = *(_QWORD *)(v7 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_130;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0);
      Component_object = (SubmarineScannerComponent_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                          *(UnityEngine_GameObject_o **)v51,
                                                          (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_5969AE2 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE2 = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v9, v58);
      if ( !Component_object )
        goto LABEL_130;
      v60.n64_u64[0] = vsub_f32(*(float32x2_t *)&localPosition.fields.x, value).n64_u64[0];
      SubmarineScannerComponent__PrepareAnimation(
        Component_object,
        sqrtf((float)(localPosition.fields.z * localPosition.fields.z) + vaddv_f32(vmul_f32(v60, v60))),
        v9);
      if ( !Component_object->fields.state )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
      v22 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v22,
        (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v61 = this->fields.submarineData;
      if ( !v61 )
        goto LABEL_130;
      v62 = v61->fields._Settings_k__BackingField;
      if ( !v62 )
        goto LABEL_130;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            localPosition,
                                            1.0,
                                            v62->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v9);
      if ( !v22 )
        goto LABEL_130;
      v69 = v22->fields._items;
      v70 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v22->fields._version;
      if ( !v69 )
        goto LABEL_130;
      v71 = v22->fields._size;
      v72 = MoveCameraToPositionTask;
      if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v73 = &v69->obj.klass + v71;
        v22->fields._size = v71 + 1;
        v73[4] = (Il2CppClass *)v72;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v73 + 4), v72, v63, v64, v65, v66, v67, v68);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(Component_object, v74);
      v76 = sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v76, JumpStartTime, 0);
      if ( !v76 )
        goto LABEL_130;
      v77 = v76 + 24;
      v78 = *(System_Delegate_o **)(v76 + 24);
      v79 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v79,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0);
      v80 = System_Delegate__Combine(v78, (System_Delegate_o *)v79, 0);
      v87 = v80;
      if ( v80 )
      {
        v88 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v80->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_102;
        *(_QWORD *)v77 = v80;
        if ( (SchedulerTaskBase_TaskCallback_c *)v80->klass != v88 )
          goto LABEL_102;
      }
      else
      {
        *(_QWORD *)v77 = 0;
      }
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v76 + 24), (int32_t)v80, v81, v82, v83, v84, v85, v86);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_130;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v90 = this->fields.playingScanVoiceData;
        if ( !v90 )
          goto LABEL_130;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v90->fields.assetName, 0);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v92 = this->fields.playingScanVoiceData;
          if ( !v92 )
            goto LABEL_130;
          assetName = v92->fields.assetName;
          vcName = v92->fields.vcName;
          if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v9, v91);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0);
        }
      }
      v95 = GameObjectExtensions__SafeGetComponent_object_(
              *(UnityEngine_GameObject_o **)(v7 + 16),
              (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v7 + 24) = v95;
      v96 = v7 + 24;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)v95, v97, v98, v99, v100, v101, v102);
      if ( !*(_QWORD *)(v7 + 24) )
        goto LABEL_130;
      v103 = *(System_String_o **)(*(_QWORD *)(v7 + 24) + 56LL);
      v104 = (SchedulerTaskWaitLoadAsset_o *)sub_2213CCC(SchedulerTaskWaitLoadAsset_TypeInfo);
      SchedulerTaskWaitLoadAsset___ctor(v104, v103, 0);
      v111 = v22->fields._items;
      v112 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v22->fields._version;
      if ( !v111 )
        goto LABEL_130;
      v113 = v22->fields._size;
      if ( (unsigned int)v113 >= LODWORD(v111->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v104,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v112[4] + 192LL) + 112LL));
      }
      else
      {
        v114 = &v111->obj.klass + v113;
        v22->fields._size = v113 + 1;
        v114[4] = (Il2CppClass *)v104;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v114 + 4), (int32_t)v104, v105, v106, v107, v108, v109, v110);
      }
      if ( !*(_QWORD *)v96 )
        goto LABEL_130;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_130;
      v121 = *(_QWORD *)(*(_QWORD *)v96 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v121;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)(MoveCameraToPositionTask + 16),
        v121,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
      if ( !*(_QWORD *)v96 )
        goto LABEL_130;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask
        || (v128 = *(_QWORD *)(*(_QWORD *)v96 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v128,
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(MoveCameraToPositionTask + 24),
              v128,
              v122,
              v123,
              v124,
              v125,
              v126,
              v127),
            !*(_QWORD *)v96)
        || (v255 = v76,
            v129 = *(float *)(*(_QWORD *)v96 + 32LL),
            v77 = sub_2213CCC(SchedulerTaskWaitTime_TypeInfo),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v77, v129, 0),
            !v77) )
      {
LABEL_130:
        sub_2213CDC(MoveCameraToPositionTask, v9);
      }
      v78 = (System_Delegate_o *)(v77 + 24);
      v130 = *(System_Delegate_o **)(v77 + 24);
      v131 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v131,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0);
      v132 = System_Delegate__Combine(v130, (System_Delegate_o *)v131, 0);
      v87 = v132;
      if ( v132 )
      {
        v88 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v132->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_102;
        v78->klass = (System_Delegate_c *)v132;
        if ( (SchedulerTaskBase_TaskCallback_c *)v132->klass != v88 )
          goto LABEL_102;
      }
      else
      {
        v78->klass = 0;
      }
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v77 + 24), (int32_t)v132, v81, v82, v133, v134, v135, v136);
      v143 = v22->fields._items;
      v144 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v22->fields._version;
      if ( !v143 )
        goto LABEL_130;
      v145 = v22->fields._size;
      if ( (unsigned int)v145 >= LODWORD(v143->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          (Il2CppObject *)v77,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
      }
      else
      {
        v146 = &v143->obj.klass + v145;
        v22->fields._size = v145 + 1;
        v146[4] = (Il2CppClass *)v77;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v146 + 4), v77, v137, v138, v139, v140, v141, v142);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(Component_object, v147);
      v77 = sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v77, SelectedPanelEffecFinishTime, 0);
      if ( !v77 )
        goto LABEL_130;
      v78 = (System_Delegate_o *)(v77 + 32);
      v149 = *(System_Delegate_o **)(v77 + 32);
      v150 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v150,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0);
      v151 = System_Delegate__Combine(v149, (System_Delegate_o *)v150, 0);
      v87 = v151;
      if ( v151 )
      {
        v88 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v151->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_102;
        v78->klass = (System_Delegate_c *)v151;
        if ( (SchedulerTaskBase_TaskCallback_c *)v151->klass != v88 )
          goto LABEL_102;
      }
      else
      {
        v78->klass = 0;
      }
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v77 + 32), (int32_t)v151, v81, v82, v152, v153, v154, v155);
      *(_BYTE *)(v77 + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration(Component_object, v156);
      if ( !byte_5969AE2 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE2 = 1;
      }
      LODWORD(v262.fields.x) = value.n64_u32[0];
      v160.n64_u64[0] = vsub_f32(value, *(float32x2_t *)&localPosition.fields.x).n64_u64[0];
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v157, v158);
        LODWORD(v262.fields.x) = value.n64_u32[0];
      }
      mapCamera = this->fields.mapCamera;
      *(_QWORD *)&v259.fields.hasValue = &position;
      position.fields.value.fields.y = 0.0;
      LODWORD(v259.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&position.fields.hasValue = 0;
      v262.fields.y = v26;
      System_Nullable_Vector2____ctor(v259, v262, v158);
      size = 0;
      System_Nullable_float____ctor(
        (System_Nullable_float__o)&size,
        1.0,
        (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
      v162 = (MapCameraPerformance_o *)sub_2213CCC(MapCameraPerformance_TypeInfo);
      MapCameraPerformance___ctor(v162, mapCamera, JumpDuration, position, size, 0, 0);
      v163 = *(UnityEngine_GameObject_o **)v51;
      v164 = (SchedulerTaskMovePerformance_o *)sub_2213CCC(SchedulerTaskMovePerformance_TypeInfo);
      v263.fields.z = 0.0;
      v263.fields.y = v26;
      LODWORD(v263.fields.x) = value.n64_u32[0];
      v165 = (SchedulerTaskBase_o *)v164;
      SchedulerTaskMovePerformance___ctor(
        v164,
        v163,
        localPosition,
        v263,
        sqrtf(
          (float)((float)(0.0 - localPosition.fields.z) * (float)(0.0 - localPosition.fields.z))
        + vaddv_f32(vmul_f32(v160, v160)))
      / JumpDuration,
        0,
        0);
      v33 = &SchedulerTaskBase___TypeInfo;
      MoveCameraToPositionTask = sub_2213B20(SchedulerTaskBase___TypeInfo, 2);
      if ( !MoveCameraToPositionTask )
        goto LABEL_130;
      v172 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v162 )
      {
        MoveCameraToPositionTask = sub_2213BB4(v162, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_132;
      }
      if ( !LODWORD(v172->max_length) )
        goto LABEL_131;
      v172->m_Items[0] = (SchedulerTaskBase_o *)v162;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v172->m_Items, (int32_t)v162, v166, v167, v168, v169, v170, v171);
      if ( v165 )
      {
        MoveCameraToPositionTask = sub_2213BB4(v165, v172->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_132;
      }
      if ( (v172->max_length & 0xFFFFFFFE) == 0 )
        goto LABEL_131;
      v172->m_Items[1] = v165;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v172->m_Items[1],
        (int32_t)v165,
        v174,
        v175,
        v176,
        v177,
        v178,
        v179);
      this = (SubmarineMapManager_o *)sub_2213CCC(SchedulerTaskParallel_TypeInfo);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v172, 0);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(Component_object, v180);
      if ( (byte_596CF0C & 1) == 0 )
      {
        sub_2213A60(&StringLiteral_1/*""*/);
        byte_596CF0C = 1;
      }
      state = Component_object->fields.state;
      p_name = &state->fields.name;
      if ( !state )
        p_name = (System_String_o **)&StringLiteral_1/*""*/;
      v184 = *p_name;
      v51 = sub_2213CCC(SchedulerTaskSimpleAnimation_TypeInfo);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v51, AnimationComponent, v184, 0);
      if ( !v51 )
        goto LABEL_130;
      v78 = (System_Delegate_o *)(v51 + 32);
      v185 = *(System_Delegate_o **)(v51 + 32);
      v186 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v186,
        (Il2CppObject *)v7,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0);
      v187 = System_Delegate__Combine(v185, (System_Delegate_o *)v186, 0);
      v87 = v187;
      if ( !v187 )
        goto LABEL_103;
      v88 = SchedulerTaskBase_TaskCallback_TypeInfo;
      v192 = v255;
      if ( (SchedulerTaskBase_TaskCallback_c *)v187->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v78->klass = (System_Delegate_c *)v187;
        if ( (SchedulerTaskBase_TaskCallback_c *)v187->klass == v88 )
        {
LABEL_104:
          sub_2213A04((MissionNaviTransitionBoardItem_o *)v78, (int32_t)v87, v81, v82, v188, v189, v190, v191);
          MoveCameraToPositionTask = sub_2213B20(*v33, 2);
          if ( !MoveCameraToPositionTask )
            goto LABEL_130;
          v193 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_2213BB4(v51, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v193 + 24) )
              goto LABEL_131;
            *(_QWORD *)(v193 + 32) = v51;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v193 + 32), v51, v194, v195, v196, v197, v198, v199);
            MoveCameraToPositionTask = sub_2213B20(*v33, 2);
            if ( !MoveCameraToPositionTask )
              goto LABEL_130;
            v200 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_2213BB4(v192, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v200 + 24) )
                goto LABEL_131;
              *(_QWORD *)(v200 + 32) = v192;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v200 + 32), v192, v201, v202, v203, v204, v205, v206);
              if ( !this || (MoveCameraToPositionTask = sub_2213BB4(this, *(_QWORD *)(*(_QWORD *)v200 + 64LL))) != 0 )
              {
                if ( (*(_DWORD *)(v200 + 24) & 0xFFFFFFFE) == 0 )
                  goto LABEL_131;
                *(_QWORD *)(v200 + 40) = this;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v200 + 40),
                  (int32_t)this,
                  v207,
                  v208,
                  v209,
                  v210,
                  v211,
                  v212);
                v213 = (SchedulerTaskOrthostichy_o *)sub_2213CCC(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v213, (SchedulerTaskBase_array *)v200, 0);
                if ( !v213 || (MoveCameraToPositionTask = sub_2213BB4(v213, *(_QWORD *)(*(_QWORD *)v193 + 64LL))) != 0 )
                {
                  if ( (*(_DWORD *)(v193 + 24) & 0xFFFFFFFE) != 0 )
                  {
                    *(_QWORD *)(v193 + 40) = v213;
                    sub_2213A04(
                      (MissionNaviTransitionBoardItem_o *)(v193 + 40),
                      (int32_t)v213,
                      v214,
                      v215,
                      v216,
                      v217,
                      v218,
                      v219);
                    v220 = (SchedulerTaskParallel_o *)sub_2213CCC(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v220, (SchedulerTaskBase_array *)v193, 0);
                    if ( v220 )
                    {
                      v220->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(Component_object, v9);
                      v222 = (SchedulerTaskWaitTime_o *)sub_2213CCC(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v222, TimeToStartOpenPanel, 0);
                      v229 = v22->fields._items;
                      v230 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v22->fields._version;
                      if ( v229 )
                      {
                        v231 = v22->fields._size;
                        if ( (unsigned int)v231 >= LODWORD(v229->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v22,
                            (Il2CppObject *)v77,
                            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v232 = &v229->obj.klass + v231;
                          v22->fields._size = v231 + 1;
                          v232[4] = (Il2CppClass *)v77;
                          sub_2213A04(
                            (MissionNaviTransitionBoardItem_o *)(v232 + 4),
                            v77,
                            v223,
                            v224,
                            v225,
                            v226,
                            v227,
                            v228);
                        }
                        v239 = v22->fields._items;
                        v240 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v22->fields._version;
                        if ( v239 )
                        {
                          v241 = v22->fields._size;
                          if ( (unsigned int)v241 >= LODWORD(v239->max_length) )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v22,
                              (Il2CppObject *)v220,
                              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v240[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v242 = &v239->obj.klass + v241;
                            v22->fields._size = v241 + 1;
                            v242[4] = (Il2CppClass *)v220;
                            sub_2213A04(
                              (MissionNaviTransitionBoardItem_o *)(v242 + 4),
                              (int32_t)v220,
                              v233,
                              v234,
                              v235,
                              v236,
                              v237,
                              v238);
                          }
                          v249 = v22->fields._items;
                          v250 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v22->fields._version;
                          if ( v249 )
                          {
                            v251 = v22->fields._size;
                            if ( (unsigned int)v251 >= LODWORD(v249->max_length) )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v22,
                                (Il2CppObject *)v222,
                                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v250[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v252 = &v249->obj.klass + v251;
                              v22->fields._size = v251 + 1;
                              v252[4] = (Il2CppClass *)v222;
                              sub_2213A04(
                                (MissionNaviTransitionBoardItem_o *)(v252 + 4),
                                (int32_t)v222,
                                v243,
                                v244,
                                v245,
                                v246,
                                v247,
                                v248);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v22;
                          }
                        }
                      }
                    }
                    goto LABEL_130;
                  }
LABEL_131:
                  sub_2213CE4(MoveCameraToPositionTask);
                }
              }
            }
          }
LABEL_132:
          v254 = sub_2213D00(MoveCameraToPositionTask, v173);
          sub_2213BA0(v254, 0);
        }
      }
LABEL_102:
      sub_221405C(v87, v88, v81, v82);
LABEL_103:
      v192 = v255;
      v78->klass = 0;
      goto LABEL_104;
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
  float32x2_t v5; // d9
  float z; // s8
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
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
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  SchedulerTaskBase_o *v44; // x1
  Il2CppClass **v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v59; // 0:kr00_12.12

  if ( (byte_596CFD2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    byte_596CFD2 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v7 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v58 = v57;
  v57.fields._list = 0;
  *(_QWORD *)&v57.fields._index = &v58;
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v11 )
      break;
    current = v58.fields._current;
    if ( !v58.fields._current )
      sub_2213CDC(v11, v12);
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
          sub_2213CDC(IsPanelSatisfyCommonReleaseCond, v16);
        PositionCalculator_k__BackingField = (float32x2_t *)v23->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_2213CDC(IsPanelSatisfyCommonReleaseCond, v16);
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
                                    (int32x2_t)(vadd_s32((int32x2_t)current[1].klass, (int32x2_t)current[1].klass).n64_u64[0]
                                              | 0x100000001LL),
                                    PositionCalculator_k__BackingField[3]))),
                              (float32x2_t)0x3F0000003F000000LL))).n64_u64[0];
        if ( !v7
          || (items = v7->fields._items,
              v26 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__,
              ++v7->fields._version,
              !items) )
        {
          sub_2213CDC(IsPanelSatisfyCommonReleaseCond, v16);
        }
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v28[4] = (Il2CppClass *)current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)current, v17, v18, v19, v20, v21, v22);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v7 )
    goto LABEL_34;
  if ( v7->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
  v29 = System_Collections_Generic_List_object___ToArray(
          v7,
          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v41->obj.klass + v43;
    v3->fields._size = v43 + 1;
    v45[4] = (Il2CppClass *)v44;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)v44, v35, v36, v37, v38, v39, v40);
  }
  v52 = v3->fields._items;
  v53 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v3->fields._version;
  if ( !v52 )
LABEL_34:
    sub_2213CDC(PanelDataList_k__BackingField, v9);
  v54 = v3->fields._size;
  if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      v34,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &v52->obj.klass + v54;
    v3->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)v34;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v55 + 4), (int32_t)v34, v46, v47, v48, v49, v50, v51);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v3;
}


void SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SubmarineScanConfirmDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *klass; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  MissionNaviTransitionBoardItem_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v31; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_Object_o *v35; // x20
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  if ( (byte_596CFBC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFBC = 1;
  }
  p_scanConfirmDialog = &this->fields.scanConfirmDialog;
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(scanConfirmDialog, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)*p_scanConfirmDialog;
    if ( !*p_scanConfirmDialog )
      goto LABEL_25;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    UnityEngine_Object__Destroy_83459800(gameObject, 0);
    *p_scanConfirmDialog = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.scanConfirmDialog, 0, v12, v13, v14, v15, v16, v17);
  }
  p_selectScannerDialog = &this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(selectScannerDialog, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)*p_selectScannerDialog;
    if ( !*p_selectScannerDialog )
      goto LABEL_25;
    v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21, v22);
    UnityEngine_Object__Destroy_83459800(v23, 0);
    *p_selectScannerDialog = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.selectScannerDialog, 0, v24, v25, v26, v27, v28, v29);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (MissionNaviTransitionBoardItem_o *)&this->fields.newScannerDialog;
  v31 = (UnityEngine_Object_o *)newScannerDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v20);
  if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33, v34);
      UnityEngine_Object__Destroy_83459800(v35, 0);
      p_newScannerDialog->klass = 0;
      sub_2213A04(p_newScannerDialog, 0, v36, v37, v38, v39, v40, v41);
      return;
    }
LABEL_25:
    sub_2213CDC(klass, v6);
  }
}


void SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v5; // x1

  if ( (byte_596CF9F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CF9F = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83459800(panelContainer, 0);
  UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)this->fields.gridLine, 0);
  UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)this->fields.effectContainer, 0);
  SubmarineMapManager__DestroyDialog(this, v5);
}


void SubmarineMapManager__DoPerformancesByVariedCond(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_IEnumerable_T__o *HideEnemyOccupiedPanelTasks; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_List_object__o *v20; // x20
  const MethodInfo *v21; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v24; // w1
  __int64 v25; // x22
  SchedulerTaskBase_TaskCallback_o *v26; // x23
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0

  if ( (byte_596CFA3 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
    sub_2213A60(&SchedulerTaskNone_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
    byte_596CFA3 = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager___c__DisplayClass34_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass34_0___ctor((SubmarineMapManager___c__DisplayClass34_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v25 = sub_2213CCC(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v25, 0, 0, 0);
  v26 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0);
  if ( !v25 )
    goto LABEL_18;
  *(_QWORD *)(v25 + 32) = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
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
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v20->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v25;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v42 + 4), v25, v33, v34, v35, v36, v37, v38);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_2213CDC(HideEnemyOccupiedPanelTasks, v7);
  TaskScheduler__AddTask_51339196(
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
    sub_2213CDC(assetManager, v6);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v7);
}


void SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields.submarineData = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.submarineData, 0, v2, v3, v4, v5, v6, v7);
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
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x21
  __int64 v15; // x2

  if ( (byte_596CFB5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFB5 = 1;
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
      sub_2213CDC(HasChild, v4);
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
          sub_2213CE4(HasChild);
        HasChild = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
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
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v15);
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
  if ( (byte_596CFA2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
    this = (SubmarineMapManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    byte_596CFA2 = 1;
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
    sub_2213CDC(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_596CFC2 & 1) == 0 )
  {
    sub_2213A60(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
    byte_596CFC2 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_39AEB18 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MissionNaviTransitionBoardItem_o *p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_596CFC6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFC6 = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = (MissionNaviTransitionBoardItem_o *)&this->fields.scanRangeNotificator;
  v5 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v5, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_scanRangeNotificator->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
    UnityEngine_Object__Destroy_83459800(klass, 0);
    p_scanRangeNotificator->klass = 0;
    sub_2213A04(p_scanRangeNotificator, 0, v10, v11, v12, v13, v14, v15);
  }
}


void SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_596CFC0 & 1) == 0 )
  {
    sub_2213A60(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
    byte_596CFC0 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_39AEB18 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_596CFC4 & 1) == 0 )
  {
    sub_2213A60(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
    byte_596CFC4 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_39AEB18 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v5; // x22
  const MethodInfo *v6; // x3
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  TaskScheduler_o *v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  SubmarineMapManager_PlayingScanVoiceData_o *v30; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7

  if ( (byte_596CF99 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
    sub_2213A60(&SubmarineMapDataManager_TypeInfo);
    sub_2213A60(&TaskScheduler_TypeInfo);
    byte_596CF99 = 1;
  }
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v5 = (SubmarineMapDataManager_o *)sub_2213CCC(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v5, mapInfo, warInfo, v6);
  this->fields.submarineData = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.submarineData, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  v13 = (TaskScheduler_o *)sub_2213CCC(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v13, 0);
  this->fields.taskScheduler = v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.taskScheduler,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  taskScheduler = this->fields.taskScheduler;
  v21 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v21, (Il2CppObject *)this, (intptr_t)this->klass->vtable._30_SetAllTouchBlock.method, 0);
  if ( !taskScheduler )
    sub_2213CDC(v22, v23);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v21;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int32_t)v21,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_2213CCC(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v30, 0);
  this->fields.playingScanVoiceData = v30;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playingScanVoiceData,
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2

  if ( (byte_596CF9A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
    byte_596CF9A = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager___c__DisplayClass19_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass19_0___ctor((SubmarineMapManager___c__DisplayClass19_0_o *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)v5, Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21, v22);
  AtlasManager__LoadUISkin(v20, 5, 1, 0);
}


void SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct SubmarineMapAssetManager_o *v12; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct SubmarineMapAssetManager_o *v21; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct SubmarineMapAssetManager_o *v30; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v32; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  v2 = this;
  if ( (byte_596CFBD & 1) == 0 )
  {
    sub_2213A60(&Method_ComponentPool_CommonEffectComponent__Preload__);
    sub_2213A60(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__);
    sub_2213A60(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
    sub_2213A60(&Method_ComponentPool_CommonEffectComponent___ctor__);
    sub_2213A60(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
    sub_2213A60(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
    sub_2213A60(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
    sub_2213A60(&ComponentPool_CommonEffectComponent__TypeInfo);
    sub_2213A60(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
    this = (SubmarineMapManager_o *)sub_2213A60(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
    byte_596CFBD = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v5 = (ComponentPool_T__o *)sub_2213CCC(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_object____ctor(
    v5,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_3EE5C74 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v2->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.effectScanedPanelObjPool,
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
    (const MethodInfo_3EE5D40 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v12 = v2->fields.assetManager;
  if ( !v12 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v12->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v14 = (ComponentPool_T__o *)sub_2213CCC(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v14,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_3EE5C74 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v2->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.effectScanObstaclePanelObjPool,
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
  v23 = (ComponentPool_T__o *)sub_2213CCC(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v23,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_3EE5C74 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v2->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v23;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.effectScannablePanelObjPool,
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
          (const MethodInfo_3EE5D40 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v30 = v2->fields.assetManager) == 0) )
  {
LABEL_10:
    sub_2213CDC(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v30->fields._EffectSelectedPanelPrefab_k__BackingField;
  v32 = (ComponentPool_T__o *)sub_2213CCC(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_object____ctor(
    v32,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_3EE5C74 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v2->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.effectSelectedPanelObjPool,
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
    sub_2213CDC(submarineData, finishCallback);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2

  if ( (byte_596CF9D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
    byte_596CF9D = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager___c__DisplayClass25_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass25_0___ctor((SubmarineMapManager___c__DisplayClass25_0_o *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  v20 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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

  if ( (byte_596CFAB & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&Method_SubmarineMapManager__OnEndScan_b__42_0__);
    byte_596CFAB = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v6 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0),
        !v6) )
  {
    sub_2213CDC(Instance, v4);
  }
  v9 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v6, warId, v8, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v9, 0);
}


void SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x1

  if ( (byte_596CF9E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__);
    byte_596CF9E = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  const MethodInfo *v23; // x1
  Il2CppObject *Instance; // x22
  const MethodInfo *v25; // x1
  NetworkManager_ResultCallbackFunc_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *Request_object; // x22
  const MethodInfo *v30; // x1
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_596CFA6 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
    byte_596CFA6 = 1;
  }
  v7 = sub_2213CCC(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass37_0___ctor((SubmarineMapManager___c__DisplayClass37_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = panelData;
  v16 = v7 + 32;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)panelData, v17, v18, v19, v20, v21, v22);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))this->klass->vtable._30_SetAllTouchBlock.methodPtr)(
    this,
    1,
    this->klass->vtable._30_SetAllTouchBlock.method);
  SubmarineMapManager__HideScannableEffect(this, v23);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v25);
  if ( !Instance )
    goto LABEL_11;
  clsQuestCheck__SaveEventQuestIdListPlayable((clsQuestCheck_o *)Instance, eventId, 0);
  v26 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v26,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27, v28);
  Request_object = NetworkManager__getRequest_object_(
                     v26,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v30);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*(_QWORD *)v16 || !Request_object )
LABEL_11:
    sub_2213CDC(eventId, v9);
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
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x19
  EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_o *value; // x8
  EventSaveData_o *v23; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v26; // x10
  __int64 v27; // x9
  TerminalPramsManager_c *v28; // x0
  EventSaveData_o *v29; // x20
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  TerminalPramsManager_c *v37; // x0
  MissionNaviTransitionBoardItem_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v39; // x0
  System_String_array *ValueByArray; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  int max_length; // w8
  System_String_o **v44; // x10
  System_String_o **v45; // x9
  System_String_o *v46; // x21
  System_String_o *v47; // x20
  System_String_o **v48; // x8
  System_String_o *v49; // x22
  TerminalPramsManager_c *v50; // x0
  struct EventSaveData_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  System_String_o *v54; // x24
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  EventSaveData_c *v61; // x8
  MissionNaviTransitionBoardItem_c *namespaze; // x19
  TerminalPramsManager_c *v63; // x0
  MissionNaviTransitionBoardItem_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v65; // x2
  System_String_c *v66; // x8
  int v67; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_596CFA7 & 1) == 0 )
  {
    sub_2213A60(&EventSaveData_TypeInfo);
    sub_2213A60(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&TitleInfoEventSubmarineStatusComponent_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    sub_2213A60(&StringLiteral_16427/*"["*/);
    sub_2213A60(&StringLiteral_6925/*"False"*/);
    sub_2213A60(&StringLiteral_16691/*"]"*/);
    sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596CFA7 = 1;
  }
  v67 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
  {
    SubmarineMapManager__OnEndScan(this, v9);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v10);
  v13 = (Il2CppObject *)System_String__Concat_75694928(
                          (System_String_o *)StringLiteral_16427/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16691/*"]"*/,
                          0);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11, v12);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v13,
                                                                      (const MethodInfo_38D3A34 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_69;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v23 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_70:
    sub_2213CE4(BeforeEventSubmarineSaveData_k__BackingField);
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_69;
  name = klass->_1.name;
  if ( name )
  {
    v26 = *((_QWORD *)name + 3);
    if ( v26 )
    {
      if ( !(_DWORD)v26 )
        goto LABEL_70;
      v27 = *((_QWORD *)name + 4);
      if ( v27 )
      {
        v67 = *(_QWORD *)(v27 + 32);
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
        if ( !byte_596CFDA )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596CFDA = 1;
        }
        v28 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
          v28 = TerminalPramsManager_TypeInfo;
        }
        if ( !v28->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v29 = (EventSaveData_o *)sub_2213CCC(EventSaveData_TypeInfo);
          EventSaveData___ctor(v29, 0);
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v30, v31);
          if ( !byte_596CFDB )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            byte_596CFDB = 1;
          }
          v37 = TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v30, v31);
            v37 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v37->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v29;
          sub_2213A04(p_BeforeEventSubmarineSaveData_k__BackingField, (int32_t)v29, v31, v32, v33, v34, v35, v36);
          v28 = TerminalPramsManager_TypeInfo;
        }
        if ( !*(&v28->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v28, v15, v16);
        if ( !byte_596CFDA )
        {
          sub_2213A60(&TerminalPramsManager_TypeInfo);
          byte_596CFDA = 1;
        }
        v39 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
          v39 = TerminalPramsManager_TypeInfo;
        }
        BeforeEventSubmarineSaveData_k__BackingField = v39->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( BeforeEventSubmarineSaveData_k__BackingField )
        {
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v44 = &ValueByArray->m_Items[1];
            v45 = (System_String_o **)&StringLiteral_1198/*"0"*/;
            if ( max_length <= 1 )
              v44 = (System_String_o **)&StringLiteral_1198/*"0"*/;
            v46 = *v44;
            if ( max_length > 2 )
              v45 = &ValueByArray->m_Items[2];
            v47 = *v45;
            v48 = max_length <= 3 ? (System_String_o **)&StringLiteral_6925/*"False"*/ : &ValueByArray->m_Items[3];
          }
          else
          {
            v47 = (System_String_o *)StringLiteral_1198/*"0"*/;
            v48 = (System_String_o **)&StringLiteral_6925/*"False"*/;
            v46 = (System_String_o *)StringLiteral_1198/*"0"*/;
          }
          v49 = *v48;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41, v42);
          if ( !byte_596CFDA )
          {
            sub_2213A60(&TerminalPramsManager_TypeInfo);
            byte_596CFDA = 1;
          }
          v50 = TerminalPramsManager_TypeInfo;
          if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41, v42);
            v50 = TerminalPramsManager_TypeInfo;
          }
          v51 = v50->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v54 = System_Int32__ToString((int32_t)&v67, 0);
          if ( !*(&TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v52, v53);
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_46736808(
                                                                              v54,
                                                                              v46,
                                                                              v47,
                                                                              v49,
                                                                              0);
          if ( v51 )
          {
            v51->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&v51->fields.value,
              (int32_t)BeforeEventSubmarineSaveData_k__BackingField,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60);
            LODWORD(value) = v23->fields.value;
            goto LABEL_55;
          }
        }
LABEL_69:
        sub_2213CDC(BeforeEventSubmarineSaveData_k__BackingField, v15);
      }
    }
  }
LABEL_55:
  if ( !(_DWORD)value )
    goto LABEL_70;
  v61 = v23[1].klass;
  if ( !v61 )
    goto LABEL_69;
  namespaze = (MissionNaviTransitionBoardItem_c *)v61->_1.namespaze;
  v63 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15, v16);
    v63 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (MissionNaviTransitionBoardItem_o *)&v63->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = namespaze;
  sub_2213A04(p_mResultEventPanelRewardInfos, (int32_t)namespaze, v16, v17, v18, v19, v20, v21);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v65);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v15, v65);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v66 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v66 )
    goto LABEL_69;
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)v66->_2.genericContainerHandle;
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_69;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  SubmarineMapManager_c *klass; // x8
  int32_t v23; // w1
  SubmarineMapPanelData_o *v24; // x2
  const MethodInfo *v25; // x4
  SchedulerTaskBase_o *v26; // x21
  SchedulerTaskBase_TaskCallback_o *v27; // x22
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v35; // x20
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  const MethodInfo *v44; // x1
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  __int64 v47; // x0

  if ( (byte_596CFA5 & 1) == 0 )
  {
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
    byte_596CFA5 = 1;
  }
  v7 = sub_2213CCC(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass36_0___ctor((SubmarineMapManager___c__DisplayClass36_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_12;
  *(_QWORD *)(v7 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = panelData;
  *(_DWORD *)(v7 + 24) = scanId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)panelData, v16, v17, v18, v19, v20, v21);
  klass = this->klass;
  if ( *(int *)(v7 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))klass->vtable._30_SetAllTouchBlock.methodPtr)(
      this,
      1,
      klass->vtable._30_SetAllTouchBlock.method);
    v23 = *(_DWORD *)(v7 + 24);
    v24 = *(SubmarineMapPanelData_o **)(v7 + 32);
    *(_BYTE *)(v7 + 40) = 0;
    v26 = SubmarineMapManager__ShowScanRangeTask(this, v23, v24, (bool *)(v7 + 40), v25);
    v27 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v27,
      (Il2CppObject *)v7,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0);
    if ( v26 )
    {
      v26->fields.EndCallback = v27;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v26->fields.EndCallback,
        (int32_t)v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      taskScheduler = this->fields.taskScheduler;
      v8 = sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
      if ( v8 )
      {
        v35 = v8;
        v36 = sub_2213BB4(v26, *(_QWORD *)(*(_QWORD *)v8 + 64LL));
        if ( !v36 )
        {
          v47 = sub_2213D00(0, v37);
          sub_2213BA0(v47, 0);
        }
        if ( !*(_DWORD *)(v35 + 24) )
          sub_2213CE4(v36);
        *(_QWORD *)(v35 + 32) = v26;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v35 + 32), (int32_t)v26, v38, v39, v40, v41, v42, v43);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v35, 0);
          return;
        }
      }
    }
LABEL_12:
    sub_2213CDC(v8, v9);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, const MethodInfo *))klass->vtable._32_AllTouchBlockForceFalse.methodPtr)(
    this,
    klass->vtable._32_AllTouchBlockForceFalse.method);
  SubmarineMapManager__HideScannableEffect(this, v44);
  SubmarineMapManager__ShowScannableEffect(this, v45);
  SubmarineMapManager__HideSelectedPanelEffect(this, v46);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v25; // x22
  const MethodInfo *v26; // x4

  if ( (byte_596CFBB & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
    byte_596CFBB = 1;
  }
  v9 = sub_2213CCC(SubmarineMapManager___c__DisplayClass68_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass68_0___ctor((SubmarineMapManager___c__DisplayClass68_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_6;
  *(_QWORD *)(v9 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)callback, v18, v19, v20, v21, v22, v23);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    this,
    1,
    this->klass->vtable._31_SetCameraWorkBlock.method);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v25 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v25,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_2213CDC(v10, v11);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v21; // x1
  int32_t eventId; // w22
  System_Action_int__o *v23; // x23
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x4

  if ( (byte_596CFB9 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
    byte_596CFB9 = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager___c__DisplayClass66_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass66_0___ctor((SubmarineMapManager___c__DisplayClass66_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, const MethodInfo *))this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    this,
    1,
    this->klass->vtable._31_SetCameraWorkBlock.method);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v21);
  v23 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v23,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
    0);
  v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0);
  if ( !selectScannerDialog )
LABEL_6:
    sub_2213CDC(v6, v7);
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v23, v24, v25);
}


void SubmarineMapManager__ReleaseAssets(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapAssetManager_o *assetManager; // x0
  MissionNaviTransitionBoardItem_o *p_assetManager; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_assetManager = (MissionNaviTransitionBoardItem_o *)&this->fields.assetManager;
  assetManager = this->fields.assetManager;
  if ( assetManager )
  {
    SubmarineMapAssetManager__Finish(assetManager, method);
    p_assetManager->klass = 0;
    sub_2213A04(p_assetManager, 0, v5, v6, v7, v8, v9, v10);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
}


void SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  ComponentPool_T__o *effectScanedPanelObjPool; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  ComponentPool_T__o *effectScannablePanelObjPool; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  ComponentPool_T__o *v17; // x0
  MissionNaviTransitionBoardItem_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596CFBE & 1) == 0 )
  {
    sub_2213A60(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    sub_2213A60(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    sub_2213A60(&Method_ComponentPool_CommonEffectComponent__Finish__);
    byte_596CFBE = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_3EE64EC *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectScanedPanelObjPool, 0, v4, v5, v6, v7, v8, v9);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_3EE64EC *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.effectScannablePanelObjPool,
      0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (MissionNaviTransitionBoardItem_o *)&this->fields.effectScanObstaclePanelObjPool;
  v17 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v17,
      (const MethodInfo_3EE64EC *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0;
    sub_2213A04(p_effectScanObstaclePanelObjPool, 0, v20, v21, v22, v23, v24, v25);
  }
}


void SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_39AE930 *method)
{
  const MethodInfo_39AE930_RGCTXs *rgctx_data; // x8
  bool hasValue; // w19
  bool v9; // w20
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x25
  UnityEngine_Component_o *v15; // x21
  UnityEngine_Transform_o *v16; // x22
  const MethodInfo_45E916C *v17; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo_45E916C *v19; // x2
  bool v20; // zf
  UnityEngine_Transform_o *v21; // x19
  float x; // s0
  float y; // s1
  float z; // s2
  System_Nullable_Vector3__o v25; // [xsp+0h] [xbp-80h] BYREF
  System_Nullable_Vector3__o v26; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr14_12.12
  UnityEngine_Vector3_o Value; // 0:kr20_12.12
  System_Nullable_Vector3__o v29; // 0:x0.16
  System_Nullable_Vector3__o v30; // 0:x0.16
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PositionByIndices; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4

  rgctx_data = method->rgctx_data;
  hasValue = scale.fields.hasValue;
  v9 = offset.fields.hasValue;
  v26 = offset;
  v25 = scale;
  if ( !rgctx_data )
  {
    sub_2213A60(&Method_System_Nullable_Vector3__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_Vector3__get_Value__);
    if ( !method->rgctx_data )
      sub_224B964();
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
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_65953840(
                                                  pool,
                                                  transform,
                                                  PositionByIndices,
                                                  (const MethodInfo_3EE6030 *)method->rgctx_data->_1_ComponentPool_T__Rent);
  if ( !effectContainer )
    goto LABEL_21;
  v15 = (UnityEngine_Component_o *)effectContainer;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)effectContainer,
                                                  0);
  if ( !effectContainer )
    goto LABEL_21;
  v16 = (UnityEngine_Transform_o *)effectContainer;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)effectContainer, 0);
  if ( v9 )
  {
    *(_QWORD *)&v29.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v29.fields.hasValue = &v26;
    Value = System_Nullable_Vector3___get_Value(v29, v17);
    x = Value.fields.x;
    y = Value.fields.y;
    z = Value.fields.z;
  }
  else
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  v31.fields.x = localPosition.fields.x + x;
  v31.fields.y = localPosition.fields.y + y;
  v31.fields.z = localPosition.fields.z + z;
  UnityEngine_Transform__set_localPosition(v16, v31, 0);
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v15, 0);
  v20 = !hasValue;
  v21 = (UnityEngine_Transform_o *)effectContainer;
  if ( !v20 )
  {
    *(_QWORD *)&v30.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v30.fields.hasValue = &v25;
    oneVector = System_Nullable_Vector3___get_Value(v30, v19);
    if ( v21 )
      goto LABEL_17;
LABEL_21:
    sub_2213CDC(effectContainer, pool);
  }
  if ( !byte_5969AE5 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
  if ( !v21 )
    goto LABEL_21;
LABEL_17:
  UnityEngine_Transform__set_localScale(v21, oneVector, 0);
}


void SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0);
}


void SubmarineMapManager__ReturnEffectsToPool_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_39AEB18 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  __int64 v10; // x22

  if ( !method->rgctx_data )
    sub_224B964();
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
      if ( (unsigned int)v10 >= max_length )
        sub_2213CE4(Children);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_38B6F40 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_3EE6108 *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_2213CDC(Children, v7);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v15; // x1
  __int64 v16; // x20
  System_Delegate_o **v17; // x22
  System_Delegate_o *v18; // x23
  SchedulerTaskBase_TaskCallback_o *v19; // x24
  System_Delegate_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  int32_t v27; // w8
  SchedulerTaskBase_TaskCallback_c *v28; // x1
  TaskScheduler_o *v29; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x0

  if ( (byte_596CFAA & 1) == 0 )
  {
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskNone_TypeInfo);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
    byte_596CFAA = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass41_0___ctor((SubmarineMapManager___c__DisplayClass41_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = finishCallback,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9, v10, v11, v12, v13),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v15),
        !taskScheduler)
    || (TaskScheduler__AddTask_51339196(taskScheduler, 0, RevealEachSpotsTasks, 0),
        v16 = sub_2213CCC(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v16, 0, 0, 0),
        !v16) )
  {
LABEL_16:
    sub_2213CDC(RevealEachSpotsTasks, v7);
  }
  v17 = (System_Delegate_o **)(v16 + 32);
  v18 = *(System_Delegate_o **)(v16 + 32);
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__,
    0);
  v20 = System_Delegate__Combine(v18, (System_Delegate_o *)v19, 0);
  v27 = (int)v20;
  if ( v20 )
  {
    v28 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v17 = v20;
      if ( (SchedulerTaskBase_TaskCallback_c *)v20->klass == v28 )
        goto LABEL_11;
    }
    sub_221405C(v20, v28, v21, v22);
  }
  *v17 = 0;
LABEL_11:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 32), v27, v21, v22, v23, v24, v25, v26);
  v29 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_2213B20(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v30 = RevealEachSpotsTasks;
  v31 = sub_2213BB4(v16, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v31 )
  {
    v39 = sub_2213D00(0, v32);
    sub_2213BA0(v39, 0);
  }
  if ( !v30->fields._size )
    sub_2213CE4(v31);
  v30->fields._syncRoot = (Il2CppObject *)v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30->fields._syncRoot, v16, v33, v34, v35, v36, v37, v38);
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
  __int64 v2; // x2
  UnityEngine_Object_o *gridLine; // x20
  SubmarineMapDataManager_o *submarineData; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *GridTexture_k__BackingField; // x20
  const MethodInfo *v10; // x3
  struct SubmarineMapDataManager_o *v11; // x8
  struct SubmarineMapAssetManager_o *v12; // x9
  SubmarineMapDataManager_o *v13; // x20
  UIWidget_o *v14; // x21
  int32_t v15; // w0
  struct SubmarineMapDataManager_o *v16; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_596CFB2 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UITexture___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFB2 = 1;
  }
  gridLine = (UnityEngine_Object_o *)this->fields.gridLine;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  submarineData = (SubmarineMapDataManager_o *)UnityEngine_Object__op_Equality(gridLine, 0, 0);
  if ( ((unsigned __int8)submarineData & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
    {
      GridTexture_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._GridTexture_k__BackingField;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Equality(GridTexture_k__BackingField, 0, 0) )
        return;
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, v6);
        v11 = this->fields.submarineData;
        if ( v11 )
        {
          v12 = this->fields.assetManager;
          if ( v12 )
          {
            submarineData = (SubmarineMapDataManager_o *)GridLineTextureUtil__CreateWholeGridTexture(
                                                           (System_Int32_array *)submarineData,
                                                           v11->fields._PositionCalculator_k__BackingField,
                                                           v12->fields._GridTexture_k__BackingField,
                                                           v10);
            if ( this->fields.gridLine )
            {
              v13 = submarineData;
              submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             this->fields.gridLine,
                                                             (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
              if ( v13 )
              {
                v14 = (UIWidget_o *)submarineData;
                submarineData = (SubmarineMapDataManager_o *)((__int64 (__fastcall *)(SubmarineMapDataManager_o *, void *))v13->klass[1]._1.image)(
                                                               v13,
                                                               v13->klass[1]._1.gc_desc);
                if ( v14 )
                {
                  UIWidget__set_width(v14, (int32_t)submarineData, 0);
                  v15 = ((__int64 (__fastcall *)(SubmarineMapDataManager_o *, _QWORD))v13->klass[1]._1.byval_arg.data)(
                          v13,
                          *(_QWORD *)&v13->klass[1]._1.byval_arg.bits);
                  UIWidget__set_height(v14, v15, 0);
                  ((void (__fastcall *)(UIWidget_o *, SubmarineMapDataManager_o *, const MethodInfo *))v14->klass->vtable._27_set_mainTexture.methodPtr)(
                    v14,
                    v13,
                    v14->klass->vtable._27_set_mainTexture.method);
                  submarineData = (SubmarineMapDataManager_o *)this->fields.gridLine;
                  if ( submarineData )
                  {
                    submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)submarineData,
                                                                   0);
                    v16 = this->fields.submarineData;
                    if ( v16 )
                    {
                      Settings_k__BackingField = v16->fields._Settings_k__BackingField;
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
    sub_2213CDC(submarineData, v6);
  }
}


void SubmarineMapManager__SetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0);
}


void SubmarineMapManager__ShowScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  _BOOL4 isShowScanObstacleEffect; // w8
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_Vector3__o v8; // 0:x3.16
  System_Nullable_Vector3__o v9; // 0:x5.16

  v2 = this;
  if ( (byte_596CFC1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_2213A60(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
    byte_596CFC1 = 1;
  }
  isShowScanObstacleEffect = v2->fields.isShowScanObstacleEffect;
  memset(&v7, 0, sizeof(v7));
  if ( !isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0 )
      sub_2213CDC(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v7,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v5 )
        break;
      if ( !v7.fields._current )
        sub_2213CDC(v5, v6);
      if ( *((_BYTE *)&v7.fields._current->klass + (unsigned __int64)&word_38 + 1) )
      {
        *(_QWORD *)&v8.fields.hasValue = 0;
        *(_QWORD *)&v8.fields.value.fields.y = 0;
        *(_QWORD *)&v9.fields.hasValue = 0;
        *(_QWORD *)&v9.fields.value.fields.y = 0;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v7.fields._current,
          v8,
          v9,
          (const MethodInfo_39AE930 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v17; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_596CFC5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventPanelScanMaster___);
    sub_2213A60(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596CFC5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_2213CDC(Instance, v8);
  ScanRangeNotificatorPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                                 this->fields.assetManager,
                                                 *((_DWORD *)Instance + 14),
                                                 v9);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0, 0) )
  {
    SubmarineMapManager__HideScanRange(this, v13);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
      v17 = UnityEngine_Object__Instantiate_object__59717116(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v17;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p_scanRangeNotificator,
        (int32_t)v17,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
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
  float32x2_t v11; // d9
  int v12; // w23
  int8x8_t v13; // d8
  int i; // w24
  int8x8_t v15; // d0
  float32x2_t v16; // d2
  int8x8_t v17; // d1
  struct SubmarineMapDataManager_o *v18; // x8
  struct SubmarineSettingsManager_o *v19; // x8
  float32x2_t v20; // d10
  UnityEngine_Rect_array *v21; // x21
  struct MapControl_MapInfo_o *v22; // d1
  System_Collections_Generic_List_Rect__o *v23; // x22
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2
  int m_CancellationTokenSource; // w8
  SubmarineMapManager_o *v27; // x21
  unsigned int v28; // w24
  __int64 v29; // x28
  struct SubmarineMapDataManager_o *v30; // x8
  struct SubmarineSettingsManager_o *v31; // x8
  float32x2_t v32; // d2
  struct UnityEngine_Rect_array *items; // x9
  float32x2_t v34; // d0
  _QWORD *v35; // x8
  __int64 size; // x10
  unsigned __int64 v37; // d0
  float32x2_t *v38; // x9
  Submarine2DUILocationInfo_o *v39; // x22
  const MethodInfo *v40; // x1
  UnityEngine_Rect_array *Rects; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v45; // x22
  float m_XMin; // s8
  float m_YMin; // s9
  int32_t v48; // w8
  float m_Width; // s10
  float m_Height; // s11
  Submarine2DUILocationInfo_o *v51; // x22
  const MethodInfo *v52; // x1
  UnityEngine_Rect_array *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  MapCamera_o *v56; // x23
  UnityEngine_Rect_array *v57; // x22
  Submarine2DUILocationInfo_o *v58; // x22
  const MethodInfo *v59; // x1
  UnityEngine_Rect_array *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  MapCamera_o *v63; // x23
  UnityEngine_Rect_array *v64; // x22
  UnityEngine_Vector2_o v65; // kr40_8
  struct System_Threading_CancellationTokenSource_o *v66; // x8
  float v67; // s3
  float *v68; // x9
  __int64 v69; // x8
  float v70; // t1
  float v71; // s0
  struct SubmarineMapDataManager_o *v72; // x8
  struct SubmarineSettingsManager_o *v73; // x8
  float v75; // s0
  float v76; // s1
  float v77; // s2
  float v78; // s3
  int32_t failedReason; // [xsp+3Ch] [xbp-54h] BYREF
  UnityEngine_Rect_o v80; // 0:kr00_16.16
  UnityEngine_Rect_o v81; // 0:kr10_16.16
  UnityEngine_Rect_o v82; // 0:kr20_16.16
  UnityEngine_Rect_o v83; // 0:kr30_16.16
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_596CFC8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Rect__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Rect__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Rect___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Rect__TypeInfo);
    sub_2213A60(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_2213A60(&UnityEngine_Rect___TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    sub_2213A60(&Submarine2DUILocationInfo_TypeInfo);
    this = (SubmarineMapManager_o *)sub_2213A60(&SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    byte_596CFC8 = 1;
  }
  submarineData = v8->fields.submarineData;
  failedReason = 0;
  if ( !submarineData )
    goto LABEL_63;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_63;
  if ( Settings_k__BackingField->fields._RegardScanRangeAsSimpleSquare_k__BackingField )
  {
    if ( !panelData )
      goto LABEL_63;
    v11.n64_u64[0] = 0;
    v12 = -2;
    v13.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._LocalPosition_k__BackingField.fields.x;
    do
    {
      for ( i = -2; i != 3; ++i )
      {
        this = (SubmarineMapManager_o *)v8->fields.submarineData;
        if ( !this )
          goto LABEL_63;
        this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelByIndices(
                                          (SubmarineMapDataManager_o *)this,
                                          panelData->fields._HIndex_k__BackingField + v12,
                                          i + panelData->fields._VIndex_k__BackingField,
                                          (const MethodInfo *)isShowDialogUpper);
        if ( this )
        {
          v15.n64_u64[0] = *(unsigned __int64 *)((char *)&this->fields.m_CancellationTokenSource + 4);
          v16.n64_u64[0] = vadd_f32(v13, v11).n64_u64[0];
          v13.n64_u64[0] = vbsl_s8(vcgt_f32(v15, v13), v13, v15).n64_u64[0];
          v17.n64_u64[0] = vadd_f32(v13, vsub_f32(v16, v13)).n64_u64[0];
          v11.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v17, v15), v17, v15), v13).n64_u64[0];
        }
      }
      ++v12;
    }
    while ( v12 != 3 );
    v18 = v8->fields.submarineData;
    if ( !v18 )
      goto LABEL_63;
    v19 = v18->fields._Settings_k__BackingField;
    if ( !v19 )
      goto LABEL_63;
    v20.n64_u64[0] = (unsigned __int64)v19->fields._PanelUnitSize_k__BackingField;
    this = (SubmarineMapManager_o *)sub_2213B20(UnityEngine_Rect___TypeInfo, 1);
    if ( !this )
      goto LABEL_63;
    v21 = (UnityEngine_Rect_array *)this;
    if ( !LODWORD(this->fields.m_CancellationTokenSource) )
      goto LABEL_64;
    v22 = (struct MapControl_MapInfo_o *)vsub_f32(v13, v20).n64_u64[0];
    this->fields.mapInfo = v22;
    this->fields.warInfo = (struct MapControl_WarInfo_o *)vsub_f32(
                                                            vadd_f32(
                                                              v20,
                                                              vadd_f32(
                                                                (float32x2_t)v22,
                                                                vsub_f32(vadd_f32(v13, v11), (float32x2_t)v22))),
                                                            (float32x2_t)v22).n64_u64[0];
  }
  else
  {
    v23 = (System_Collections_Generic_List_Rect__o *)sub_2213CCC(System_Collections_Generic_List_Rect__TypeInfo);
    System_Collections_Generic_List_Rect____ctor(
      v23,
      (const MethodInfo_449BD44 *)Method_System_Collections_Generic_List_Rect___ctor__);
    this = (SubmarineMapManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                      scanId,
                                      panelData,
                                      v8->fields.submarineData,
                                      v24);
    if ( !v8->fields.submarineData )
      goto LABEL_63;
    this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelsByScanEvents(
                                      v8->fields.submarineData,
                                      (System_Collections_Generic_List_SubmarineScanEvent__o *)this,
                                      v25);
    if ( !this )
      goto LABEL_63;
    m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
    v27 = this;
    if ( m_CancellationTokenSource >= 1 )
    {
      v28 = 0;
      while ( v28 < m_CancellationTokenSource )
      {
        v29 = *((_QWORD *)&v27->fields.mapInfo + (int)v28);
        if ( !byte_5969AE0 )
        {
          this = (SubmarineMapManager_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        v30 = v8->fields.submarineData;
        if ( !v30 )
          goto LABEL_63;
        v31 = v30->fields._Settings_k__BackingField;
        if ( !v31 )
          goto LABEL_63;
        if ( !v29 )
          goto LABEL_63;
        if ( !v23 )
          goto LABEL_63;
        v32.n64_u64[0] = (unsigned __int64)v31->fields._PanelUnitSize_k__BackingField;
        items = v23->fields._items;
        v34.n64_u64[0] = *(unsigned __int64 *)(v29 + 28);
        v35 = Method_System_Collections_Generic_List_Rect__Add__;
        ++v23->fields._version;
        if ( !items )
          goto LABEL_63;
        size = v23->fields._size;
        v37 = vadd_f32(v34, vmul_f32(v32, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          *(_QWORD *)&v83.fields.m_XMin = v37;
          *(float32x2_t *)&v83.fields.m_Width = v32;
          System_Collections_Generic_List_Rect___AddWithResize(
            v23,
            v83,
            *(const MethodInfo_449C600 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v38 = (float32x2_t *)(&items->obj + size);
          v23->fields._size = size + 1;
          v38[4].n64_u64[0] = v37;
          v38[5].n64_u64[0] = v32.n64_u64[0];
        }
        m_CancellationTokenSource = (int)v27->fields.m_CancellationTokenSource;
        if ( (int)++v28 >= m_CancellationTokenSource )
          goto LABEL_35;
      }
LABEL_64:
      sub_2213CE4(this);
    }
LABEL_35:
    if ( !v23 )
      goto LABEL_63;
    v21 = System_Collections_Generic_List_Rect___ToArray(
            v23,
            (const MethodInfo_449E14C *)Method_System_Collections_Generic_List_Rect__ToArray__);
  }
  v39 = (Submarine2DUILocationInfo_o *)sub_2213CCC(Submarine2DUILocationInfo_TypeInfo);
  Submarine2DUILocationInfo___ctor(v39, v40);
  if ( !v39 )
    goto LABEL_63;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v39, 0);
  mapCamera = v8->fields.mapCamera;
  v45 = Rects;
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v42, v43);
  v80 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(mapCamera, v21, v45, &failedReason, 0);
  m_XMin = v80.fields.m_XMin;
  m_YMin = v80.fields.m_YMin;
  v48 = failedReason;
  m_Width = v80.fields.m_Width;
  m_Height = v80.fields.m_Height;
  *isShowDialogUpper = 0;
  if ( v48 == 1 )
  {
    v51 = (Submarine2DUILocationInfo_o *)sub_2213CCC(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v51, v52);
    if ( !v51 )
      goto LABEL_63;
    v53 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v51, 0);
    v56 = v8->fields.mapCamera;
    v57 = v53;
    if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v54, v55);
    v81 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(v56, v21, v57, &failedReason, 0);
    v75 = v81.fields.m_XMin;
    v76 = v81.fields.m_YMin;
    v77 = v81.fields.m_Width;
    v78 = v81.fields.m_Height;
    if ( !failedReason )
      goto LABEL_50;
    if ( failedReason == 1 )
    {
      v58 = (Submarine2DUILocationInfo_o *)sub_2213CCC(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
      Submarine2DUILocationInfo___ctor(v58, v59);
      if ( !v58 )
        goto LABEL_63;
      v60 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v58, 0);
      v63 = v8->fields.mapCamera;
      v64 = v60;
      if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v61, v62);
      v82 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(v63, v21, v64, &failedReason, 0);
      v75 = v82.fields.m_XMin;
      v76 = v82.fields.m_YMin;
      v77 = v82.fields.m_Width;
      v78 = v82.fields.m_Height;
      if ( !failedReason )
      {
LABEL_50:
        m_XMin = v75;
        m_YMin = v76;
        m_Width = v77;
        m_Height = v78;
        *isShowDialogUpper = 1;
      }
    }
  }
  v65 = FSWindowUtil__GetSize(0);
  this = (SubmarineMapManager_o *)sub_2213B20(float___TypeInfo, 3);
  if ( !this )
LABEL_63:
    sub_2213CDC(this, *(_QWORD *)&scanId);
  v66 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v66 )
    goto LABEL_64;
  LODWORD(this->fields.mapInfo) = 1065353216;
  if ( (_DWORD)v66 == 1 )
    goto LABEL_64;
  *((float *)&this->fields.mapInfo + 1) = m_Width / v65.fields.x;
  if ( (unsigned int)v66 <= 2 )
    goto LABEL_64;
  v67 = 1.0;
  *(float *)&this->fields.warInfo = m_Height / v65.fields.y;
  if ( (int)v66 >= 2 )
  {
    v68 = (float *)&this->fields.mapInfo + 1;
    v69 = (unsigned int)v66 - 1LL;
    do
    {
      v70 = *v68++;
      v71 = v70;
      if ( v70 > v67 )
        v67 = v71;
      --v69;
    }
    while ( v69 );
  }
  v72 = v8->fields.submarineData;
  if ( !v72 )
    goto LABEL_63;
  v73 = v72->fields._Settings_k__BackingField;
  if ( !v73 )
    goto LABEL_63;
  v84.fields.z = 0.0;
  v84.fields.y = m_YMin + (float)(m_Height * 0.5);
  v84.fields.x = m_XMin + (float)(m_Width * 0.5);
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v8,
           v84,
           v67,
           v73->fields._ViewScanRangeCameraDuration_k__BackingField,
           *(const MethodInfo **)&scanId);
}


void SubmarineMapManager__ShowScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  _BOOL4 isShowScannableEffect; // w8
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-48h] BYREF
  System_Nullable_Vector3__o v8; // 0:x3.16
  System_Nullable_Vector3__o v9; // 0:x5.16

  v2 = this;
  if ( (byte_596CFBF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    this = (SubmarineMapManager_o *)sub_2213A60(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
    byte_596CFBF = 1;
  }
  isShowScannableEffect = v2->fields.isShowScannableEffect;
  memset(&v7, 0, sizeof(v7));
  if ( !isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0 )
      sub_2213CDC(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v7,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v5 )
        break;
      if ( !v7.fields._current )
        sub_2213CDC(v5, v6);
      if ( *((_BYTE *)&v7.fields._current->klass + (unsigned __int64)&word_3A) )
      {
        *(_QWORD *)&v8.fields.hasValue = 0;
        *(_QWORD *)&v8.fields.value.fields.y = 0;
        *(_QWORD *)&v9.fields.hasValue = 0;
        *(_QWORD *)&v9.fields.value.fields.y = 0;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v7.fields._current,
          v8,
          v9,
          (const MethodInfo_39AE930 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_596CFC3 & 1) == 0 )
  {
    sub_2213A60(&Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
    byte_596CFC3 = 1;
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
    (const MethodInfo_39AE930 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
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
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  MissionNotifyManager_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x20
  System_Delegate_o **v25; // x21
  System_Delegate_o *v26; // x22
  SchedulerTaskBase_TaskCallback_o *v27; // x23
  System_Delegate_o *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int32_t v35; // w8
  SchedulerTaskBase_TaskCallback_c *v36; // x1
  TaskScheduler_o *v37; // x19
  MissionNotifyManager_o *v38; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  __int64 v45; // x0

  if ( (byte_596CFA8 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SchedulerTaskBase___TypeInfo);
    sub_2213A60(&SchedulerTaskNone_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_2213A60(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__);
    sub_2213A60(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    byte_596CFA8 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0);
  if ( !v9 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v9, v10, 0);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v12);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_51339196(taskScheduler, 0, (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance, 0);
  v13 = this->fields.taskScheduler;
  v14 = (SchedulerTaskBase_array *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v15);
  if ( !v14 )
    goto LABEL_22;
  v22 = Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_2213BB4(Instance, v14->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_23;
  v14->m_Items[0] = (SchedulerTaskBase_o *)v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v14->m_Items, (int32_t)v22, v16, v17, v18, v19, v20, v21);
  if ( !v13
    || (TaskScheduler__AddTask(v13, 0, v14, 0),
        v24 = sub_2213CCC(SchedulerTaskNone_TypeInfo),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v24, 0, 0, 0),
        !v24) )
  {
LABEL_22:
    sub_2213CDC(Instance, v8);
  }
  v25 = (System_Delegate_o **)(v24 + 32);
  v26 = *(System_Delegate_o **)(v24 + 32);
  v27 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v27,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__39_1__,
    0);
  v28 = System_Delegate__Combine(v26, (System_Delegate_o *)v27, 0);
  v35 = (int)v28;
  if ( !v28 )
    goto LABEL_16;
  v36 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v28->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v25 = v28, (SchedulerTaskBase_TaskCallback_c *)v28->klass != v36) )
  {
    sub_221405C(v28, v36, v29, v30);
LABEL_16:
    *v25 = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 32), v35, v29, v30, v31, v32, v33, v34);
  v37 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_2213B20(SchedulerTaskBase___TypeInfo, 1);
  if ( !Instance )
    goto LABEL_22;
  v38 = Instance;
  Instance = (MissionNotifyManager_o *)sub_2213BB4(v24, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v45 = sub_2213D00(Instance, v23);
    sub_2213BA0(v45, 0);
  }
  if ( !LODWORD(v38->fields.mNoDispInfos) )
LABEL_23:
    sub_2213CE4(Instance);
  v38->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v38->fields.mMissionNotifyComps, v24, v39, v40, v41, v42, v43, v44);
  if ( !v37 )
    goto LABEL_22;
  TaskScheduler__AddTask(v37, 0, (SchedulerTaskBase_array *)v38, 0);
}


void SubmarineMapManager__SubsequentialOpenPanelTaskChain(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_List_object__o *SubsequentialOpenPanelTasks; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o **p_syncRoot; // x22
  const MethodInfo *v15; // x1
  int size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v17; // x20
  System_Delegate_o *syncRoot; // x23
  SchedulerTaskBase_TaskCallback_o *v19; // x24
  System_Delegate_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  SchedulerTaskBase_TaskCallback_c *v27; // x1

  if ( (byte_596CFA9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
    sub_2213A60(&SchedulerTaskBase_TaskCallback_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
    byte_596CFA9 = 1;
  }
  v5 = sub_2213CCC(SubmarineMapManager___c__DisplayClass40_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass40_0___ctor((SubmarineMapManager___c__DisplayClass40_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_15;
  *(_QWORD *)(v5 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v5 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)finishCallback, v8, v9, v10, v11, v12, v13);
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
                                                                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v19 = (SchedulerTaskBase_TaskCallback_o *)sub_2213CCC(SchedulerTaskBase_TaskCallback_TypeInfo);
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
      sub_221405C(v20, v27, v21, v22);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_syncRoot, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_2213CDC(SubsequentialOpenPanelTasks, v7);
  TaskScheduler__AddTask_51339196((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v17, 0);
}


void SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 eventId; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct MapControl_MapInfo_o *mapInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Request_object; // x20
  const MethodInfo *v11; // x1
  struct MapControl_MapInfo_o *v12; // x8

  if ( (byte_596CFA0 & 1) == 0 )
  {
    sub_2213A60(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager__TryInitRequest_b__31_0__);
    byte_596CFA0 = 1;
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
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  Request_object = NetworkManager__getRequest_object_(
                     v7,
                     (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v11);
  v12 = this->fields.mapInfo;
  if ( !v12 || !Request_object )
LABEL_11:
    sub_2213CDC(eventId, v4);
  EventScanPanelMapRequest__beginRequest(
    (EventScanPanelMapRequest_o *)Request_object,
    eventId,
    v12->fields.mapId,
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

  if ( (byte_596CFBA & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager_TryOpenNewScannerDialog__);
    byte_596CFBA = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    v5 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v5, v7, v8);
      return;
    }
LABEL_8:
    sub_2213CDC(submarineData, method);
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
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  v2 = this;
  if ( (byte_596CFAC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__);
    this = (SubmarineMapManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    byte_596CFAC = 1;
  }
  submarineData = v2->fields.submarineData;
  memset(&v5, 0, sizeof(v5));
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0 )
    sub_2213CDC(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_2213CDC(0, v4);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v5.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
    sub_2213CDC(0, *(_QWORD *)&beforeClearQuestId);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x2
  UnityEngine_GameObject_c *klass; // x8
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v15; // x1
  __int64 v16; // x2
  TerminalPramsManager_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  System_String_array *ValueByArray; // x0
  il2cpp_array_size_t max_length; // x8
  UnityEngine_GameObject_c *v21; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  EventDetailEntity_o *v23; // x21
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x1

  if ( (byte_596CFAD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__);
    sub_2213A60(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
    byte_596CFAD = 1;
  }
  v3 = sub_2213CCC(SubmarineMapManager___c__DisplayClass48_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass48_0___ctor((SubmarineMapManager___c__DisplayClass48_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_46;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v12);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v12);
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = terminalMap->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_46;
  terminalMap = (ScrTerminalMap_o *)klass->_2.genericContainerHandle;
  if ( !terminalMap )
    goto LABEL_46;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)terminalMap, 0);
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_46;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)terminalMap,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  terminalMap = (ScrTerminalMap_o *)SubmarineMapManager__get_eventId(this, v15);
  if ( !MasterData_object )
    goto LABEL_46;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
         (Il2CppObject **)(v3 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v3 + 32) = 0;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v16);
    if ( !byte_596CFDA )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596CFDA = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v16);
      v17 = TerminalPramsManager_TypeInfo;
    }
    if ( v17->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !*(&v17->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v17, v5, v16);
      if ( !byte_596CFDA )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596CFDA = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5, v16);
        v18 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v18->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_46;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0);
      if ( ValueByArray )
      {
        max_length = ValueByArray->max_length;
        if ( max_length )
        {
          if ( !(_DWORD)max_length )
            sub_2213CE4(ValueByArray);
          *(_DWORD *)(v3 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0);
        }
      }
    }
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v16);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v5, v16);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v21 = terminalMap->fields.subRootGimmickP->klass;
    if ( v21 )
    {
      genericContainerHandle = (TitleInfoControl_o *)v21->_2.genericContainerHandle;
      v23 = *(EventDetailEntity_o **)(v3 + 24);
      v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v3,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0);
      if ( genericContainerHandle )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(genericContainerHandle, v23, v24, 0);
        return;
      }
    }
LABEL_46:
    sub_2213CDC(terminalMap, v5);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, const MethodInfo *))this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr)(
    this,
    this->klass->vtable._32_AllTouchBlockForceFalse.method);
  SubmarineMapManager__HideScannableEffect(this, v25);
  SubmarineMapManager__ShowScannableEffect(this, v26);
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
    sub_2213CDC(0, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_596CFD3 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__);
    byte_596CFD3 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
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

  if ( (byte_596CFD4 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596CFD4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  CommonUI__SetSkipAnimation((CommonUI_o *)Instance, 1, 0);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0);
}


void SubmarineMapManager___StartScanPerformance_b__39_1(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_596CFD5 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__);
    byte_596CFD5 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_2__, 0);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v3, v4);
}


void SubmarineMapManager___StartScanPerformance_b__39_2(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_596CFD6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__);
    byte_596CFD6 = 1;
  }
  v3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_3__, 0);
  SubmarineMapManager__RevealAvailableSpots(this, v3, v4);
}


void SubmarineMapManager___StartScanPerformance_b__39_3(SubmarineMapManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_596CFD7 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_596CFD7 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
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
    sub_2213CDC(this, method);
  return MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0);
}


SubmarinePanelPositionCalculator_o *SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_2213CDC(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *SubmarineMapManager__get_settings(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_2213CDC(this, method);
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
  int32_t _1__state; // w22
  struct SubmarineMapManager_o *_4__this; // x20
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v2 = this;
  if ( (byte_596CFE6 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SubmarineMapManager__CoInitRequest_b__20_0__);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    byte_596CFE6 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      SubmarineMapManager__TryInitRequest(_4__this, 0);
      this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( this )
      {
        CommonUI__SetConnect((CommonUI_o *)this, 1, 0);
        v5 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v5, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0);
        v6 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v6, v5, 0);
        v2->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v6, v8, v9, v10, v11, v12, v13);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return _1__state == 0;
      }
    }
    goto LABEL_13;
  }
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( this )
    {
      CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
      if ( _4__this )
      {
        this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData;
        if ( this )
        {
          SubmarineMapDataManager__ConstructParams((SubmarineMapDataManager_o *)this, 0);
          ActionExtensions__Call(v2->fields.finishCallback, 0);
          return _1__state == 0;
        }
      }
    }
LABEL_13:
    sub_2213CDC(this, method);
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x2
  struct SubmarineMapAssetManager_o *v16; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct SubmarineMapDataManager_o *submarineData; // x8
  int32_t v26; // w0

  v2 = this;
  if ( (byte_596CFE7 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596CFE7 = 1;
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
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&_4__this->fields.closedPanelTexture,
            (int32_t)ResizedTexture2D,
            v9,
            v10,
            v11,
            v12,
            v13,
            v14);
          v16 = _4__this->fields.assetManager;
          if ( v16 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v16->fields._ClosedPanelTexture_k__BackingField;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v15);
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0, 0) )
            {
              DarkTexture2D = ClosePanelTextureUtil__CreateDarkTexture2D(*p_closedPanelTexture, 0.4, 0);
              *p_closedPanelTexture = DarkTexture2D;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&_4__this->fields.closedPanelTexture,
                (int32_t)DarkTexture2D,
                v19,
                v20,
                v21,
                v22,
                v23,
                v24);
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
                v26 = SubmarineQuestSaveInfo__get_BeforeClearQuestId((SubmarineQuestSaveInfo_o *)this, 0);
                SubmarineMapManager__UpdateParams(_4__this, v26, 0);
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
      sub_2213CDC(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596CFDC & 1) == 0 )
  {
    sub_2213A60(&SubmarineMapManager___c_TypeInfo);
    byte_596CFDC = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SubmarineMapManager___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return !x->fields._IsOpened_k__BackingField;
}


bool SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, x);
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
  int32_t v6; // w22
  System_Action_o *_9__1; // x23
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_596CFDD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__);
    byte_596CFDD = 1;
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
  v6 = (int)_4__this;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !klass )
LABEL_9:
    sub_2213CDC(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v6, _9__1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(v4, Assets, 0);
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
    sub_2213CDC(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(v6, inited, 0);
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
  __int64 v6; // x2
  __int64 v7; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596CFDE & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596CFDE = 1;
  }
  entity = 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
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
         (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v6);
    if ( !byte_596A090 )
    {
      sub_2213A60(&TerminalSceneComponent_TypeInfo);
      byte_596A090 = 1;
    }
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v6);
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
          0);
        return;
      }
    }
LABEL_18:
    sub_2213CDC(Instance, v4);
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
    sub_2213CDC(0, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_596CFDF & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__);
    byte_596CFDF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0);
  _9__1 = this->fields.__9__1;
  v5 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v6, v7, v8, v9, v10, v11);
  }
  if ( !v5 )
LABEL_8:
    sub_2213CDC(_4__this, method);
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
    sub_2213CDC(0, *(_QWORD *)&scanId);
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
  int32_t scanId; // w21
  System_Action_bool__o *_9__1; // x22
  SubmarineMapManager_o *v6; // x20
  _BOOL4 isShowDialogUpper; // w24
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596CFE0 & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__);
    byte_596CFE0 = 1;
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
  scanId = this->fields.scanId;
  _9__1 = this->fields.__9__1;
  v6 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_2213CCC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
LABEL_9:
    sub_2213CDC(_4__this, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596CFE1 & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__TypeInfo);
    sub_2213A60(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__);
    byte_596CFE1 = 1;
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
    sub_2213CDC(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_2213CCC(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
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
    sub_2213CDC(0, *(_QWORD *)&lscanId);
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
    sub_2213CDC(0, result);
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
  __int64 v5; // x2
  ErrorDialog_c *klass; // x8
  __int64 v7; // x2
  ErrorDialog_c *v8; // x8

  if ( (byte_596CFE2 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596CFE2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_22;
  SubmarineMapManager__ResetTimeAcceleration((SubmarineMapManager_o *)Instance, 0);
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v5);
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
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v4, v7);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = Instance->fields.errorDialog->klass;
  if ( !v8
    || (Instance = *(CommonUI_o **)&v8->_2.static_fields_size) == 0
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, 0),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
LABEL_22:
    sub_2213CDC(Instance, v4);
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
    sub_2213CDC(this, x);
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

  if ( (byte_596CFE3 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int___);
    byte_596CFE3 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._31_SetCameraWorkBlock.method);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_36FFDDC *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_596CFE4 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    byte_596CFE4 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, const MethodInfo *))_4__this->klass->vtable._31_SetCameraWorkBlock.methodPtr)(
    _4__this,
    0,
    _4__this->klass->vtable._31_SetCameraWorkBlock.method);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
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
    sub_2213CDC(0, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_2213CDC(0, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_2213CDC(0, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0);
}


void SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_596CFE5 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CFE5 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  UnityEngine_Object__Destroy_83459800(scanAnimObj, 0);
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
    sub_2213CDC(this, x);
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
    sub_2213CDC(this, 0);
  return x->fields._Chain_k__BackingField == this->fields.i;
}