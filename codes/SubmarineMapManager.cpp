void __fastcall SubmarineMapManager___ctor(SubmarineMapManager_o *this, const MethodInfo *method)
{
  this->fields.ACCELERATION_TIME_SCALE = 4.0;
  this->fields.isEnableClickPanel = 1;
  EventMapManagerBase___ctor((EventMapManagerBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B12E47 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_1BCA7E0(
                                      &Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___,
                                      go,
                                      *(_QWORD *)&minDepth);
    byte_4B12E47 = 1;
  }
  if ( !go )
    goto LABEL_23;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                    go,
                                    (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1BCAA44(this, go);
  }
  v8 = 0x7FFFFFFF;
LABEL_14:
  if ( v8 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49689332(
                                      go,
                                      (const MethodInfo_2F632F4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_1BCAA3C(this, go);
  }
}


void __fastcall SubmarineMapManager__AdjustEachSpotsPositions(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x20
  unsigned int v10; // w22
  __int64 v11; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v13; // x2

  if ( (byte_4B12E44 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12E44 = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_15;
  max_length = Children->max_length;
  v9 = Children;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1BCAA44(Children, v7);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0LL,
                                                   0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_object, v13);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_15:
    sub_1BCAA3C(Children, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  System_Collections_Generic_List_object__o *v50; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v52; // x1
  int64_t v53; // x2
  __int64 v54; // x3
  int klass; // w8
  UnityEngine_GameObject_o *v56; // x21
  unsigned int v57; // w19
  __int64 v58; // x1
  Il2CppObject *Component_object; // x22
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  System_Collections_Generic_Dictionary_int__object__o *v68; // x21
  int v69; // w8
  UnityEngine_GameObject_o *v70; // x22
  unsigned int v71; // w19
  __int64 v72; // x1
  Il2CppObject *v73; // x23
  Il2CppClass *v74; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x24
  __int64 v80; // x0
  __int64 v81; // x1
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  Il2CppObject *current; // x1
  SubmarineSilhouetteData_o **v89; // x23
  __int64 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  System_Predicate_object__o *v94; // x25
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x1
  Il2CppObject *v98; // x24
  _BOOL8 v99; // x0
  __int64 v100; // x1
  __int64 v101; // x1
  SubmarineMapDataManager_o *v102; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  System_Collections_Generic_List_object__o *v107; // x23
  __int64 v108; // x0
  __int64 v109; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v111; // x1
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  float32x2_t v115; // d9
  __int128 v116; // q0
  _BOOL8 v117; // x0
  __int64 v118; // x1
  __int128 v119; // q1
  int8x8_t v120; // d0
  int8x8_t v121; // d2
  __int64 v122; // x1
  UnityEngine_Transform_o *v123; // x0
  __int64 v124; // x1
  unsigned __int64 v125; // d0 OVERLAPPED
  int v126; // s1
  int v127; // s2
  float y; // [xsp+10h] [xbp-F0h]
  __int128 v130; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+38h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v132; // [xsp+50h] [xbp-B0h] BYREF
  Il2CppObject *value; // [xsp+68h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v134; // [xsp+70h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4B12E46 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v20, v21);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___, v22, v23);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76799192, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__, v36, v37);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v38, v39);
    sub_1BCA7E0(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo, v40, v41);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v42, v43);
    sub_1BCA7E0(&System_Predicate_SrcSpotBasePrefab__TypeInfo, v44, v45);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__, v46, v47);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass59_0_TypeInfo, v48, v49);
    byte_4B12E46 = 1;
  }
  memset(&v134, 0, sizeof(v134));
  value = 0LL;
  memset(&v132, 0, sizeof(v132));
  v50 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v50,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  klass = (int)Children[1].klass;
  v56 = Children;
  if ( klass >= 1 )
  {
    v57 = 0;
    while ( v57 < klass )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v56[1].monitor + (int)v57);
      if ( !Children )
        goto LABEL_59;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Children,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v50 )
          goto LABEL_59;
        items = v50->fields._items;
        v65 = Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__;
        ++v50->fields._version;
        if ( !items )
          goto LABEL_59;
        size = v50->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v50,
            Component_object,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v67 = &items->obj.klass + size;
          v50->fields._size = size + 1;
          v67[4] = (Il2CppClass *)Component_object;
          sub_1BCA784((PartyOrganizationUtility_o *)(v67 + 4), (int64_t)Component_object, v53, v54, v60, v61, v62, v63);
        }
      }
      klass = (int)v56[1].klass;
      if ( (int)++v57 >= klass )
        goto LABEL_17;
    }
LABEL_60:
    sub_1BCAA44(Children, v52);
  }
LABEL_17:
  v68 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo,
                                                                  v52,
                                                                  v53,
                                                                  v54);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v68,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_59;
  v69 = (int)Children[1].klass;
  v70 = Children;
  if ( v69 >= 1 )
  {
    v71 = 0;
    while ( v71 < v69 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v70[1].monitor + (int)v71);
      if ( !Children )
        goto LABEL_59;
      v73 = UnityEngine_GameObject__GetComponent_object_(
              Children,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72);
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v73, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v73 )
          goto LABEL_59;
        v74 = v73[7].klass;
        if ( !v74 || !v68 )
          goto LABEL_59;
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v68,
          HIDWORD(v74->_1.name),
          v73,
          (const MethodInfo_3205ED0 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v69 = (int)v70[1].klass;
      if ( (int)++v71 >= v69 )
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
    sub_1BCAA3C(Children, v52);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v131,
    (System_Collections_Generic_List_object__o *)Children,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v134 = v131;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v134,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v79 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass59_0_TypeInfo, v76, v77, v78);
    System_Object___ctor((Il2CppObject *)v79, 0LL);
    if ( !v79 )
      sub_1BCAA3C(v80, v81);
    current = v134.fields._current;
    *(_QWORD *)(v79 + 16) = v134.fields._current;
    v89 = (SubmarineSilhouetteData_o **)(v79 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 16), (int64_t)current, v82, v83, v84, v85, v86, v87);
    if ( !*(_QWORD *)(v79 + 16) )
      sub_1BCAA3C(v90, v91);
    if ( *(int *)(*(_QWORD *)(v79 + 16) + 20LL) > 0 )
    {
      v94 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_SrcSpotBasePrefab__TypeInfo, v91, v92, v93);
      System_Predicate_object____ctor(
        v94,
        (Il2CppObject *)v79,
        Method_SubmarineMapManager___c__DisplayClass59_0__AdjustSilhouetteGimmicks_b__0__,
        0LL);
      if ( !v50 )
        sub_1BCAA3C(v95, v96);
      v98 = System_Collections_Generic_List_object___Find(
              v50,
              (System_Predicate_T__o *)v94,
              (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v97);
      v99 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v98, 0LL, 0LL);
      if ( !v99 )
      {
        if ( !*v89 )
          sub_1BCAA3C(v99, v100);
        if ( !v68 )
          sub_1BCAA3C(v99, v100);
        if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
               v68,
               (*v89)->fields._ObjectId_k__BackingField,
               &value,
               (const MethodInfo_3207670 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v102 = this->fields.submarineData;
          if ( !v102 )
            sub_1BCAA3C(0LL, v101);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v102,
                                                                                      *v89,
                                                                                      0LL);
          v107 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                                System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                v104,
                                                                v105,
                                                                v106);
          System_Collections_Generic_List_object____ctor_56235344(
            v107,
            SilhouetteOccupiedPanels,
            (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76799192);
          if ( !v98 )
            sub_1BCAA3C(v108, v109);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v98, 0LL);
          if ( !transform )
            sub_1BCAA3C(0LL, v111);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          *(_QWORD *)&v130 = *(_QWORD *)&localPosition.fields.x;
          y = localPosition.fields.y;
          if ( !byte_4B109C1 )
          {
            v112 = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v113, v114);
            byte_4B109C1 = 1;
          }
          if ( !v107 )
            sub_1BCAA3C(v112, v113);
          v115.n64_u64[0] = *(unsigned __int64 *)&UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v131,
            v107,
            (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v132 = v131;
          v116 = v130;
          *((float *)&v116 + 1) = y;
          while ( 1 )
          {
            v130 = v116;
            v117 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v132,
                     (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
            if ( !v117 )
              break;
            if ( !v132.fields._current )
              sub_1BCAA3C(v117, v118);
            v120.n64_u64[0] = *(unsigned __int64 *)((char *)&v132.fields._current[1].monitor + 4);
            *(int8x8_t *)&v119 = vbsl_s8(vcgt_f32(v120, *(float32x2_t *)&v130), *(int8x8_t *)&v130, v120);
            v121.n64_u64[0] = vadd_f32(
                                *(float32x2_t *)&v119,
                                vsub_f32(vadd_f32(v115, *(float32x2_t *)&v130), *(float32x2_t *)&v119)).n64_u64[0];
            v115.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v121, v120), v121, v120), *(float32x2_t *)&v119).n64_u64[0];
            v116 = v119;
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v132,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          if ( !value )
            sub_1BCAA3C(0LL, v122);
          v123 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)value, 0LL);
          if ( !v123 )
            sub_1BCAA3C(0LL, v124);
          v125 = vadd_f32(vmul_f32(v115, (float32x2_t)0x3F0000003F000000LL), *(float32x2_t *)&v130).n64_u64[0];
          v126 = HIDWORD(v125);
          v127 = 0;
          UnityEngine_Transform__set_localPosition(v123, *(UnityEngine_Vector3_o *)&v125, 0LL);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v134,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
}


void __fastcall SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  SubmarineMapManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  __int64 v9; // x1
  const MethodInfo_36C2D28 *v10; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v12; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v13; // 0:x0.12
  System_Nullable_Vector3__o v14; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B12E43 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_Vector2___ctor__, spot, method);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v5, v6);
    byte_4B12E43 = 1;
  }
  submarineData = v4->fields.submarineData;
  if ( !submarineData )
    goto LABEL_9;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_9;
  PanelUnitSize_k__BackingField = Settings_k__BackingField->fields._PanelUnitSize_k__BackingField;
  *(_QWORD *)&v13.fields.hasValue = &v12;
  LODWORD(v13.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  v12.fields.value.fields.y = 0.0;
  *(_QWORD *)&v12.fields.hasValue = 0LL;
  System_Nullable_Vector2____ctor(v13, PanelUnitSize_k__BackingField, (const MethodInfo_36C2908 *)method);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v9, v10);
    byte_4B109C1 = 1;
  }
  *(_QWORD *)&v14.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  *(_QWORD *)&v14.fields.hasValue = &centerPosition;
  zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&centerPosition.fields.hasValue = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v14, zeroVector, v10);
  if ( !spot )
LABEL_9:
    sub_1BCAA3C(this, spot);
  SrcSpotBasePrefab__AdjustBtnColliderArea(spot, v12, centerPosition, 0LL);
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
    sub_1BCAA3C(this, spot);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Int32_array *Instance; // x0
  __int64 v21; // x1
  SubmarineMapDataManager_o *submarineData; // x8
  clsQuestCheck_o *v23; // x19
  System_Int32_array *v24; // x20
  __int64 v25; // x2
  __int64 v26; // x3
  CommonUI_o *v27; // x19
  int32_t v28; // w20
  SubmarineMapManager___c_c *v29; // x0
  System_Action_o *_9__49_0; // x22
  System_String_o *v31; // x21
  Il2CppObject *v32; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v42; // 0:x5.8

  if ( (byte_4B12E3E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_QuestReleaseMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, v14, v15);
    sub_1BCA7E0(&SubmarineMapManager___c_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_7022/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v18, v19);
    byte_4B12E3E = 1;
  }
  Instance = (System_Int32_array *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_22;
  v23 = (clsQuestCheck_o *)Instance;
  Instance = (System_Int32_array *)SubmarineMapDataManager__get_EventId(submarineData, 0LL);
  if ( !v23 )
    goto LABEL_22;
  Instance = clsQuestCheck__GetNewPlayableEventQuestId(v23, (int32_t)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  v24 = Instance;
  if ( !*(_QWORD *)&Instance->max_length )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Instance = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !v24->max_length )
    goto LABEL_23;
  if ( !Instance )
    goto LABEL_22;
  if ( !QuestReleaseMaster__IsContainCondType((QuestReleaseMaster_o *)Instance, v24->m_Items[1], 143, 0LL) )
    return;
  Instance = (System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v24->max_length )
LABEL_23:
    sub_1BCAA44(Instance, v21);
  v27 = (CommonUI_o *)Instance;
  v28 = v24->m_Items[1];
  v29 = SubmarineMapManager___c_TypeInfo;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo, v21);
    v29 = SubmarineMapManager___c_TypeInfo;
  }
  _9__49_0 = v29->static_fields->__9__49_0;
  v31 = (System_String_o *)StringLiteral_7022/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__49_0 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29, v21);
      v29 = SubmarineMapManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__49_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v25, v26);
    System_Action___ctor(_9__49_0, v32, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__49_0__, 0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__49_0 = _9__49_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__49_0,
      (int64_t)_9__49_0,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  if ( !v27 )
LABEL_22:
    sub_1BCAA3C(Instance, v21);
  v42 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v27, v28, v31, _9__49_0, 0, v42, 0.0, 0LL);
}


void __fastcall SubmarineMapManager__ClickPanel(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  const MethodInfo *v31; // x2
  SubmarineMapPanelData_o *v32; // x1
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  int64_t v42; // x21
  __int64 v43; // x2
  __int64 v44; // x3
  System_Delegate_o **v45; // x22
  System_Delegate_o *v46; // x23
  SchedulerTaskBase_TaskCallback_o *v47; // x24
  System_Delegate_o *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  SchedulerTaskBase_TaskCallback_c *v55; // x1
  TaskScheduler_o *taskScheduler; // x19
  __int64 v57; // x20
  __int64 v58; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x0

  if ( (byte_4B12E34 & 1) == 0 )
  {
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, panelData, method);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SubmarineMapManager_ClickPanel__, v8, v9);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__, v12, v13);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo, v14, v15);
    byte_4B12E34 = 1;
  }
  v16 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass35_0_TypeInfo, panelData, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    goto LABEL_28;
  *(_QWORD *)(v16 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 16), (int64_t)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 24) = panelData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v16 + 24), (int64_t)panelData, v25, v26, v27, v28, v29, v30);
  v32 = *(SubmarineMapPanelData_o **)(v16 + 24);
  if ( !v32 || !this->fields.isEnableClickPanel )
    return;
  if ( !v32->fields._IsOpened_k__BackingField || !v32->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v32->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v32, v31);
    v35 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
      v35 = (_QWORD *)sub_1BCA7F8(Method_SubmarineMapManager_ClickPanel__);
    v36 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v35, v35[4]);
    OverwriteAssetSoundName__PlaySystemSe(v36, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v42 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v18, v37, v38);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v42, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v42 )
        {
          v45 = (System_Delegate_o **)(v42 + 32);
          v46 = *(System_Delegate_o **)(v42 + 32);
          v47 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v18, v43, v44);
          SchedulerTaskBase_TaskCallback___ctor(
            v47,
            (Il2CppObject *)v16,
            Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__0__,
            0LL);
          v48 = System_Delegate__Combine(v46, (System_Delegate_o *)v47, 0LL);
          if ( v48 )
          {
            v55 = SchedulerTaskBase_TaskCallback_TypeInfo;
            if ( (SchedulerTaskBase_TaskCallback_c *)v48->klass != SchedulerTaskBase_TaskCallback_TypeInfo
              || (*v45 = v48, (SchedulerTaskBase_TaskCallback_c *)v48->klass != v55) )
            {
              sub_1BCACFC(v48);
              return;
            }
          }
          else
          {
            *v45 = 0LL;
          }
          sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)v48, v49, v50, v51, v52, v53, v54);
          taskScheduler = this->fields.taskScheduler;
          v17 = sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v17 )
          {
            v57 = v17;
            v58 = sub_1BCA91C(v42, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
            if ( !v58 )
            {
              v66 = sub_1BCAA60();
              sub_1BCA908(v66, 0LL);
            }
            if ( !*(_DWORD *)(v57 + 24) )
              sub_1BCAA44(v58, v59);
            *(_QWORD *)(v57 + 32) = v42;
            sub_1BCA784((PartyOrganizationUtility_o *)(v57 + 32), v42, v60, v61, v62, v63, v64, v65);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v57, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(v17, v18);
  }
  v33 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 83) & 2) != 0 )
    v33 = (_QWORD *)sub_1BCA7F8(Method_SubmarineMapManager_ClickPanel__);
  v34 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v33, v33[4]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B12E2B & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineMapManager__CoInitRequest_d__20_TypeInfo, finishCallback, method);
    byte_4B12E2B = 1;
  }
  v6 = sub_1BCAA2C(SubmarineMapManager__CoInitRequest_d__20_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)finishCallback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B12E2C & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo, finishCallback, method);
    byte_4B12E2C = 1;
  }
  v6 = sub_1BCAA2C(SubmarineMapManager__CoOnAfterSpotCreated_d__23_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), (int64_t)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v6 + 40) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)finishCallback, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *scanConfirmDialog; // x21
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  Il2CppObject *ScanConfirmDialogPrefab_k__BackingField; // x21
  Il2CppObject *Component_object; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v25; // x8
  Il2CppObject *SelectScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v35; // x8
  Il2CppObject *NewScannerDialogPrefab_k__BackingField; // x21
  Il2CppObject *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4B12E48 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___, v6, v7);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B12E48 = 1;
  }
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v13 = (Il2CppObject *)UnityEngine_Object__op_Equality(scanConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_28;
    ScanConfirmDialogPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._ScanConfirmDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    v13 = UnityEngine_Object__Instantiate_object_(
            ScanConfirmDialogPrefab_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v13 )
      goto LABEL_28;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v13,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = (struct SubmarineScanConfirmDialog_o *)Component_object;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.scanConfirmDialog,
      (int64_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    EventMapManagerBase__LocateDialogToUiRoot(
      (EventMapManagerBase_o *)this,
      (BaseDialog_o *)this->fields.scanConfirmDialog,
      0LL);
  }
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v13 = (Il2CppObject *)UnityEngine_Object__op_Equality(selectScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    v25 = this->fields.assetManager;
    if ( !v25 )
      goto LABEL_28;
    SelectScannerDialogPrefab_k__BackingField = (Il2CppObject *)v25->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
    v13 = UnityEngine_Object__Instantiate_object_(
            SelectScannerDialogPrefab_k__BackingField,
            (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v13 )
      goto LABEL_28;
    v27 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v13,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = (struct SubmarineSelectScannerDialog_o *)v27;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.selectScannerDialog,
      (int64_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    EventMapManagerBase__LocateDialogToUiRoot(
      (EventMapManagerBase_o *)this,
      (BaseDialog_o *)this->fields.selectScannerDialog,
      0LL);
  }
  newScannerDialog = (UnityEngine_Object_o *)this->fields.newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v13 = (Il2CppObject *)UnityEngine_Object__op_Equality(newScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) != 0 )
  {
    v35 = this->fields.assetManager;
    if ( v35 )
    {
      NewScannerDialogPrefab_k__BackingField = (Il2CppObject *)v35->fields._NewScannerDialogPrefab_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
      v13 = UnityEngine_Object__Instantiate_object_(
              NewScannerDialogPrefab_k__BackingField,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v13 )
      {
        v37 = UnityEngine_GameObject__GetComponent_object_(
                (UnityEngine_GameObject_o *)v13,
                (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = (struct SubmarineNewScannerDialog_o *)v37;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.newScannerDialog,
          (int64_t)v37,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_28:
    sub_1BCAA3C(v13, v14);
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  PartyOrganizationUtility_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v7; // x20
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x1

  if ( (byte_4B12E31 & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineMapAssetManager_TypeInfo, method, v2);
    byte_4B12E31 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (PartyOrganizationUtility_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v7 = (SubmarineMapAssetManager_o *)sub_1BCAA2C(SubmarineMapAssetManager_TypeInfo, method, v2, v3);
    SubmarineMapAssetManager___ctor(v7, v8);
    p_assetManager->klass = (PartyOrganizationUtility_c *)v7;
    sub_1BCA784(p_assetManager, (int64_t)v7, v9, v10, v11, v12, v13, v14);
    if ( !p_assetManager->klass )
      sub_1BCAA3C(0LL, v15);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v15);
  }
}


void __fastcall SubmarineMapManager__CreateContainers(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SubmarineMapManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x9
  Il2CppObject *PanelContainerPrefab_k__BackingField; // x20
  __int64 v9; // x1
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct SubmarineMapAssetManager_o *v18; // x8
  struct ScrTerminalMap_o *v19; // x9
  Il2CppObject *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v21; // x0
  Il2CppObject *v22; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct SubmarineMapAssetManager_o *v29; // x8
  struct ScrTerminalMap_o *v30; // x9
  Il2CppObject *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v32; // x0
  Il2CppObject *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  v3 = this;
  if ( (byte_4B12E3F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, method, v2);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12E3F = 1;
  }
  assetManager = v3->fields.assetManager;
  if ( !assetManager )
    goto LABEL_15;
  terminalMap = v3->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_15;
  this = (SubmarineMapManager_o *)terminalMap->fields.dispRoot;
  if ( !this )
    goto LABEL_15;
  PanelContainerPrefab_k__BackingField = (Il2CppObject *)assetManager->fields._PanelContainerPrefab_k__BackingField;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__Instantiate_object__49903816(
          PanelContainerPrefab_k__BackingField,
          transform,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  v3->fields.panelContainer = (struct UnityEngine_GameObject_o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.panelContainer, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = v3->fields.assetManager;
  if ( !v18 )
    goto LABEL_15;
  v19 = v3->fields.terminalMap;
  if ( !v19 )
    goto LABEL_15;
  this = (SubmarineMapManager_o *)v19->fields.dispRoot;
  if ( !this )
    goto LABEL_15;
  EffectContainerPrefab_k__BackingField = (Il2CppObject *)v18->fields._EffectContainerPrefab_k__BackingField;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v22 = UnityEngine_Object__Instantiate_object__49903816(
          EffectContainerPrefab_k__BackingField,
          v21,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  v3->fields.effectContainer = (struct UnityEngine_GameObject_o *)v22;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.effectContainer, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = v3->fields.assetManager;
  if ( !v29 || (v30 = v3->fields.terminalMap) == 0LL || (this = (SubmarineMapManager_o *)v30->fields.dispRoot) == 0LL )
LABEL_15:
    sub_1BCAA3C(this, method);
  GridLinePrefab_k__BackingField = (Il2CppObject *)v29->fields._GridLinePrefab_k__BackingField;
  v32 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v33 = UnityEngine_Object__Instantiate_object__49903816(
          GridLinePrefab_k__BackingField,
          v32,
          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
  v3->fields.gridLine = (struct UnityEngine_GameObject_o *)v33;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.gridLine, (int64_t)v33, v34, v35, v36, v37, v38, v39);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  System_Collections_Generic_List_object__o *v44; // x19
  System_Collections_Generic_List_object__o *SilhouetteDataList_k__BackingField; // x0
  __int64 v46; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x23
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  Il2CppObject *current; // x1
  SubmarineSilhouetteData_o **v61; // x22
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  SubmarineSilhouetteData_o *v64; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v66; // x1
  __int64 v67; // x1
  SubmarineMapDataManager_o *v68; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  System_Collections_Generic_List_object__o *v73; // x24
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  SubmarineMapManager___c_c *v78; // x8
  System_Predicate_object__o *_9__101_0; // x25
  Il2CppObject *v80; // x26
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v89; // x1
  System_Collections_Generic_List_object__o *v90; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_object__o *SpotList; // x25
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  System_Predicate_object__o *v96; // x26
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v102; // x1
  UnityEngine_Transform_o *v103; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v106; // x0
  __int64 v107; // x1
  __int64 v108; // x0
  const MethodInfo *v109; // x1
  int v110; // s0
  struct SubmarineMapDataManager_o *v113; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *MoveCameraToPositionTask; // x0
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x1
  struct System_Object_array *items; // x8
  _QWORD *v124; // x9
  __int64 size; // x10
  Il2CppClass **v126; // x0
  System_Object_array *v127; // x1
  const MethodInfo *v128; // x2
  Il2CppObject *OpenPanelsAndRevealSpotsTask; // x0
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x1
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  System_Collections_Generic_List_Enumerator_object__o v142; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v143; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12E61 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__,
      *(_QWORD *)&beforeClearQuestId,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76799192, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Predicate_SubmarineMapPanelData__TypeInfo, v30, v31);
    sub_1BCA7E0(&System_Predicate_MapControl_SpotInfo__TypeInfo, v32, v33);
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__, v36, v37);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__, v38, v39);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass101_0_TypeInfo, v40, v41);
    sub_1BCA7E0(&SubmarineMapManager___c_TypeInfo, v42, v43);
    byte_4B12E61 = 1;
  }
  memset(&v143, 0, sizeof(v143));
  v44 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       *(_QWORD *)&beforeClearQuestId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v44,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_object__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_1BCAA3C(SilhouetteDataList_k__BackingField, v46);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v142,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v143 = v142;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v143,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v51 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass101_0_TypeInfo, v48, v49, v50);
    System_Object___ctor((Il2CppObject *)v51, 0LL);
    if ( !v51 )
      sub_1BCAA3C(v52, v53);
    current = v143.fields._current;
    *(_QWORD *)(v51 + 16) = v143.fields._current;
    v61 = (SubmarineSilhouetteData_o **)(v51 + 16);
    sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 16), (int64_t)current, v54, v55, v56, v57, v58, v59);
    v64 = *(SubmarineSilhouetteData_o **)(v51 + 16);
    if ( !v64 )
      sub_1BCAA3C(0LL, v62);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v64, beforeClearQuestId, v63);
    if ( HasClearCondQuestId )
    {
      if ( !*v61 )
        sub_1BCAA3C(HasClearCondQuestId, v66);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v61)->fields._ObjectQuestIds_k__BackingField, -1, 0, 0LL) )
      {
        v68 = this->fields.submarineData;
        if ( !v68 )
          sub_1BCAA3C(0LL, v67);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v68,
                                                                                    *v61,
                                                                                    0LL);
        v73 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                             System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                             v70,
                                                             v71,
                                                             v72);
        System_Collections_Generic_List_object____ctor_56235344(
          v73,
          SilhouetteOccupiedPanels,
          (const MethodInfo_35A1550 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___76799192);
        v78 = SubmarineMapManager___c_TypeInfo;
        if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo, v75);
          v78 = SubmarineMapManager___c_TypeInfo;
        }
        _9__101_0 = (System_Predicate_object__o *)v78->static_fields->__9__101_0;
        if ( !_9__101_0 )
        {
          if ( !v78->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v78, v75);
            v78 = SubmarineMapManager___c_TypeInfo;
          }
          v80 = (Il2CppObject *)v78->static_fields->__9;
          _9__101_0 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                      System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                      v75,
                                                      v76,
                                                      v77);
          System_Predicate_object____ctor(
            _9__101_0,
            v80,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__101_0__,
            0LL);
          static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          static_fields->__9__101_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__101_0;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&static_fields->__9__101_0,
            (int64_t)_9__101_0,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87);
        }
        if ( !v73 )
          sub_1BCAA3C(v74, v75);
        All = System_Collections_Generic_List_object___FindAll(
                v73,
                (System_Predicate_T__o *)_9__101_0,
                (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v90 = (System_Collections_Generic_List_object__o *)All;
        if ( !All )
          sub_1BCAA3C(0LL, v89);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_1BCAA3C(0LL, v89);
          SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v96 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_SpotInfo__TypeInfo, v93, v94, v95);
          System_Predicate_object____ctor(
            v96,
            (Il2CppObject *)v51,
            Method_SubmarineMapManager___c__DisplayClass101_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            0LL);
          if ( !SpotList )
            sub_1BCAA3C(v97, v98);
          if ( System_Collections_Generic_List_object___Find(
                 SpotList,
                 (System_Predicate_T__o *)v96,
                 (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_1BCAA3C(0LL, v99);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v61 )
              sub_1BCAA3C(transform, v102);
            v103 = transform;
            SpotId_k__BackingField = (*v61)->fields._SpotId_k__BackingField;
            if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v102);
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v103 )
              sub_1BCAA3C(GobjName, GobjName);
            v106 = UnityEngine_Transform__Find(v103, GobjName, 0LL);
            if ( !v106 )
              sub_1BCAA3C(0LL, v107);
            *(UnityEngine_Vector3_o *)&v110 = UnityEngine_Transform__get_localPosition(v106, 0LL);
            v113 = this->fields.submarineData;
            if ( !v113 )
              sub_1BCAA3C(v108, v109);
            Settings_k__BackingField = v113->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_1BCAA3C(v108, v109);
            MoveCameraToPositionTask = (Il2CppObject *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                         this,
                                                         *(UnityEngine_Vector3_o *)&v110,
                                                         1.0,
                                                         Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                         v109);
            v122 = (int64_t)MoveCameraToPositionTask;
            if ( !v44 )
              sub_1BCAA3C(MoveCameraToPositionTask, MoveCameraToPositionTask);
            items = v44->fields._items;
            v124 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v44->fields._version;
            if ( !items )
              sub_1BCAA3C(MoveCameraToPositionTask, MoveCameraToPositionTask);
            size = v44->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v44,
                MoveCameraToPositionTask,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
            }
            else
            {
              v126 = &items->obj.klass + size;
              v44->fields._size = size + 1;
              v126[4] = (Il2CppClass *)v122;
              sub_1BCA784((PartyOrganizationUtility_o *)(v126 + 4), v122, v116, v117, v118, v119, v120, v121);
            }
          }
          v127 = System_Collections_Generic_List_object___ToArray(
                   v90,
                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                           this,
                                                           (SubmarineMapPanelData_array *)v127,
                                                           v128);
          v136 = (int64_t)OpenPanelsAndRevealSpotsTask;
          if ( !v44 )
            sub_1BCAA3C(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v137 = v44->fields._items;
          v138 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
          ++v44->fields._version;
          if ( !v137 )
            sub_1BCAA3C(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          v139 = v44->fields._size;
          if ( (unsigned int)v139 >= v137->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v44,
              OpenPanelsAndRevealSpotsTask,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
          }
          else
          {
            v140 = &v137->obj.klass + v139;
            v44->fields._size = v139 + 1;
            v140[4] = (Il2CppClass *)v136;
            sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 4), v136, v130, v131, v132, v133, v134, v135);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v143,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v44;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  SchedulerTaskNone_o *v5; // x19

  if ( (byte_4B12E5E & 1) == 0 )
  {
    sub_1BCA7E0(&SchedulerTaskNone_TypeInfo, panelData, method);
    byte_4B12E5E = 1;
  }
  v5 = (SchedulerTaskNone_o *)sub_1BCAA2C(SchedulerTaskNone_TypeInfo, panelData, method, v4);
  SchedulerTaskNone___ctor(v5, 0LL);
  return (SchedulerTaskBase_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateMoveCameraToPositionTask(
        SubmarineMapManager_o *this,
        UnityEngine_Vector3_o destPos,
        float size,
        float second,
        const MethodInfo *method)
{
  const MethodInfo_36C2908 *v5; // x2
  float y; // s10
  float x; // s11
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  MapCamera_o *mapCamera; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  MapCameraPerformance_o *v19; // x0
  SchedulerTaskBase_o *v20; // x20
  System_Nullable_float__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Nullable_Vector2__o v23; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o v24; // 0:x0.8
  System_Nullable_float__o v25; // 0:x4.8
  System_Nullable_Vector2__o v26; // 0:x0.12
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_4B12E57 & 1) == 0 )
  {
    sub_1BCA7E0(&MapCameraPerformance_TypeInfo, method, v5);
    sub_1BCA7E0(&Method_System_Nullable_Vector2___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v13, v14);
    byte_4B12E57 = 1;
  }
  LODWORD(v26.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v26.fields.hasValue = &v23;
  v27.fields.x = x;
  v27.fields.y = y;
  v23.fields.value.fields.y = 0.0;
  *(_QWORD *)&v23.fields.hasValue = 0LL;
  System_Nullable_Vector2____ctor(v26, v27, v5);
  v24 = (System_Nullable_float__o)&v22;
  v22 = 0LL;
  System_Nullable_float____ctor(v24, size, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  v19 = (MapCameraPerformance_o *)sub_1BCAA2C(MapCameraPerformance_TypeInfo, v16, v17, v18);
  v25 = v22;
  v20 = (SchedulerTaskBase_o *)v19;
  MapCameraPerformance___ctor(v19, mapCamera, second, v23, v25, 15, 0LL);
  return v20;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__CreateNeverOpenSurrounds(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SubmarineMapManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  __int64 v12; // x1
  UnityEngine_Object_o *panelContainer; // x20
  __int64 v14; // x1
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SubmarineMapManager_o *v18; // x20
  int v19; // w24
  int v20; // w25
  struct SubmarineMapAssetManager_o *v21; // x8
  ObjectDomain_o *v22; // x21
  Il2CppObject *v23; // x22
  __int64 v24; // x1
  UnityEngine_Transform_o *transform; // x23
  SubmarineMapManager_o *v26; // x22
  SubmarineMapManager_o *v27; // x23
  int v28; // s0
  SubmarineMapPanelComponent_o *v31; // x22
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
  ObjectDomain_o *v43; // x23
  Il2CppObject *v44; // x24
  __int64 v45; // x1
  UnityEngine_Transform_o *v46; // x25
  SubmarineMapManager_o *v47; // x24
  SubmarineMapManager_o *v48; // x25
  int v49; // s0
  SubmarineMapPanelComponent_o *v52; // x24

  v3 = this;
  if ( (byte_4B12E41 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(&PanelUniqueIDUtil_TypeInfo, v8, v9);
    byte_4B12E41 = 1;
  }
  assetManager = v3->fields.assetManager;
  if ( !assetManager )
    goto LABEL_54;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0LL, 0LL) )
    return;
  panelContainer = (UnityEngine_Object_o *)v3->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    return;
  closedPanelTexture = (UnityEngine_Object_o *)v3->fields.closedPanelTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  submarineData = v3->fields.submarineData;
  if ( !submarineData
    || (this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
                                          submarineData->fields._PositionCalculator_k__BackingField,
                                          v3->fields.closedPanelTexture,
                                          0LL)) == 0LL )
  {
LABEL_54:
    sub_1BCAA3C(this, method);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v18 = this;
  v19 = (_DWORD)m_CancellationTokenSource - 1;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      v21 = v3->fields.assetManager;
      if ( !v21 )
        goto LABEL_54;
      this = (SubmarineMapManager_o *)v3->fields.panelContainer;
      if ( !this )
        goto LABEL_54;
      v22 = (ObjectDomain_o *)*((_QWORD *)&v18->fields.mapInfo + v20);
      v23 = (Il2CppObject *)v21->fields._PanelPrefab_k__BackingField;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__49903816(
                                        v23,
                                        transform,
                                        (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      if ( !this )
        goto LABEL_54;
      v26 = this;
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !v22 )
        goto LABEL_54;
      v27 = this;
      *(UnityEngine_Vector3_o *)&v28 = ObjectDomain__get_center(v22, 0LL);
      if ( !v27 )
        goto LABEL_54;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
      this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                        (UnityEngine_GameObject_o *)v26,
                                        (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
      if ( !this )
        goto LABEL_54;
      v31 = (SubmarineMapPanelComponent_o *)this;
      SubmarineMapPanelComponent__Initialize((SubmarineMapPanelComponent_o *)this, 0LL);
      SubmarineMapPanelComponent__SetSize(v31, v22, 0LL);
      SubmarineMapPanelComponent__SetClosedPanelTexture(v31, v22, v3->fields.closedPanelTexture, 0LL);
      SubmarineMapPanelComponent__SetClosedPanelVisible(v31, 1, 0LL);
      if ( v19 == v20 )
        break;
      if ( (unsigned int)++v20 >= LODWORD(v18->fields.m_CancellationTokenSource) )
        sub_1BCAA44(this, method);
    }
  }
  this = (SubmarineMapManager_o *)v3->fields.submarineData;
  if ( !this )
    goto LABEL_54;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                    (SubmarineMapDataManager_o *)this,
                                    0LL);
  v32 = v3->fields.submarineData;
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
        j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo, method);
      this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v35, v36, (System_Int32_array *)v34, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v38 = v3->fields.submarineData;
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
                                          0LL);
        v42 = v3->fields.assetManager;
        if ( !v42 )
          goto LABEL_54;
        v43 = (ObjectDomain_o *)this;
        this = (SubmarineMapManager_o *)v3->fields.panelContainer;
        if ( !this )
          goto LABEL_54;
        v44 = (Il2CppObject *)v42->fields._PanelPrefab_k__BackingField;
        v46 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
        this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_object__49903816(
                                          v44,
                                          v46,
                                          (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
        if ( !this )
          goto LABEL_54;
        v47 = this;
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !v43 )
          goto LABEL_54;
        v48 = this;
        *(UnityEngine_Vector3_o *)&v49 = ObjectDomain__get_center(v43, 0LL);
        if ( !v48 )
          goto LABEL_54;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v48, *(UnityEngine_Vector3_o *)&v49, 0LL);
        this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                          (UnityEngine_GameObject_o *)v47,
                                          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
        if ( !this )
          goto LABEL_54;
        v52 = (SubmarineMapPanelComponent_o *)this;
        SubmarineMapPanelComponent__Initialize((SubmarineMapPanelComponent_o *)this, 0LL);
        SubmarineMapPanelComponent__SetSize(v52, v43, 0LL);
        SubmarineMapPanelComponent__SetClosedPanelTexture(v52, v43, v3->fields.closedPanelTexture, 0LL);
        SubmarineMapPanelComponent__SetClosedPanelVisible(v52, 1, 0LL);
      }
      v32 = v3->fields.submarineData;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_GameObject_o *effectContainer; // x0
  const MethodInfo_36C2D28 *v30; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v32; // x22
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  SchedulerTaskCommonEffect_o *v36; // x0
  int64_t v37; // x21
  __int64 v38; // x2
  __int64 v39; // x3
  _QWORD *v40; // x22
  System_Delegate_o *v41; // x23
  SchedulerTaskBase_TaskCallback_o *v42; // x24
  System_Delegate_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t v50; // x8
  SchedulerTaskBase_TaskCallback_c *v51; // x1
  SchedulerTaskBase_array *v52; // x22
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  SchedulerTaskWaitTime_o *v56; // x23
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  SchedulerTaskOrthostichy_o *v72; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v77; // s8
  System_Collections_Generic_List_object__o *v78; // x22
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  SchedulerTaskWaitTime_o *v82; // x23
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 size; // x10
  Il2CppClass **v92; // x0
  const MethodInfo *v93; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x3
  SchedulerTaskOrthostichy_o *v98; // x19
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  SchedulerTaskBase_array *v105; // x20
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x3
  SchedulerTaskParallel_o *v115; // x19
  __int64 v117; // x0
  System_Nullable_Vector3__o v118; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v119; // 0:x0.16
  System_Nullable_Vector3__o v120; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12E5B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, panelData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_Vector3___ctor__, v13, v14);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v15, v16);
    sub_1BCA7E0(&SchedulerTaskCommonEffect_TypeInfo, v17, v18);
    sub_1BCA7E0(&SchedulerTaskOrthostichy_TypeInfo, v19, v20);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v21, v22);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_SubmarineMapPanelData_OpenPanel__, v25, v26);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v27, v28);
    byte_4B12E5B = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_32;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_32;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  *(_QWORD *)&v119.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  v32 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v119.fields.hasValue = &v118;
  *(_QWORD *)&v118.fields.hasValue = 0LL;
  *(_QWORD *)&v118.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v119, LocalPosition_k__BackingField, v30);
  v36 = (SchedulerTaskCommonEffect_o *)sub_1BCAA2C(SchedulerTaskCommonEffect_TypeInfo, v33, v34, v35);
  *(_QWORD *)&v120.fields.hasValue = 0LL;
  *(_QWORD *)&v120.fields.value.fields.y = 0LL;
  v37 = (int64_t)v36;
  SchedulerTaskCommonEffect___ctor_41999172(
    v36,
    v32,
    effectScanedPanelObjPool,
    v118,
    v120,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v37 )
    goto LABEL_32;
  v40 = (_QWORD *)(v37 + 24);
  v41 = *(System_Delegate_o **)(v37 + 24);
  v42 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, panelData, v38, v39);
  SchedulerTaskBase_TaskCallback___ctor(v42, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v43 = System_Delegate__Combine(v41, (System_Delegate_o *)v42, 0LL);
  v50 = (int64_t)v43;
  if ( v43 )
  {
    v51 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v43->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v40 = v43;
      if ( (SchedulerTaskBase_TaskCallback_c *)v43->klass == v51 )
        goto LABEL_11;
    }
    sub_1BCACFC(v43);
  }
  *v40 = v50;
LABEL_11:
  sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 24), v50, v44, v45, v46, v47, v48, v49);
  v52 = (SchedulerTaskBase_array *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL);
  v56 = (SchedulerTaskWaitTime_o *)sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v53, v54, v55);
  SchedulerTaskWaitTime___ctor(v56, waitTime, 0LL);
  if ( !v52 )
    goto LABEL_32;
  if ( v56 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1BCA91C(v56, v52->obj.klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v52->max_length )
    goto LABEL_33;
  v52->m_Items[0] = (SchedulerTaskBase_o *)v56;
  sub_1BCA784((PartyOrganizationUtility_o *)v52->m_Items, (int64_t)v56, v57, v58, v59, v60, v61, v62);
  effectContainer = (UnityEngine_GameObject_o *)sub_1BCA91C(v37, v52->obj.klass->_1.element_class);
  if ( !effectContainer )
    goto LABEL_34;
  if ( v52->max_length <= 1 )
    goto LABEL_33;
  v52->m_Items[1] = (SchedulerTaskBase_o *)v37;
  sub_1BCA784((PartyOrganizationUtility_o *)&v52->m_Items[1], v37, v63, v64, v65, v66, v67, v68);
  v72 = (SchedulerTaskOrthostichy_o *)sub_1BCAA2C(SchedulerTaskOrthostichy_TypeInfo, v69, v70, v71);
  SchedulerTaskOrthostichy___ctor(v72, v52, 0LL);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_32;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_32;
  v77 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
  v78 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       panelData,
                                                       v73,
                                                       v74);
  System_Collections_Generic_List_object____ctor(
    v78,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v82 = (SchedulerTaskWaitTime_o *)sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v79, v80, v81);
  SchedulerTaskWaitTime___ctor(v82, v77, 0LL);
  if ( !v78 )
    goto LABEL_32;
  items = v78->fields._items;
  v90 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v78->fields._version;
  if ( !items )
    goto LABEL_32;
  size = v78->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v78,
      (Il2CppObject *)v82,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = &items->obj.klass + size;
    v78->fields._size = size + 1;
    v92[4] = (Il2CppClass *)v82;
    sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 4), (int64_t)v82, v83, v84, v85, v86, v87, v88);
  }
  RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                            this,
                                                                            panelData,
                                                                            v93);
  System_Collections_Generic_List_object___AddRange(
    v78,
    RevealSpotOnPanelTasks,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v98 = (SchedulerTaskOrthostichy_o *)sub_1BCAA2C(SchedulerTaskOrthostichy_TypeInfo, v95, v96, v97);
  SchedulerTaskOrthostichy___ctor_42002028(v98, (System_Collections_Generic_List_SchedulerTaskBase__o *)v78, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL);
  if ( !effectContainer )
LABEL_32:
    sub_1BCAA3C(effectContainer, panelData);
  v105 = (SchedulerTaskBase_array *)effectContainer;
  if ( v72 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1BCA91C(v72, effectContainer->klass->_1.element_class);
    if ( !effectContainer )
      goto LABEL_34;
  }
  if ( !v105->max_length )
    goto LABEL_33;
  v105->m_Items[0] = (SchedulerTaskBase_o *)v72;
  sub_1BCA784((PartyOrganizationUtility_o *)v105->m_Items, (int64_t)v72, v99, v100, v101, v102, v103, v104);
  if ( v98 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1BCA91C(v98, v105->obj.klass->_1.element_class);
    if ( !effectContainer )
    {
LABEL_34:
      v117 = sub_1BCAA60();
      sub_1BCA908(v117, 0LL);
    }
  }
  if ( v105->max_length <= 1 )
LABEL_33:
    sub_1BCAA44(effectContainer, panelData);
  v105->m_Items[1] = (SchedulerTaskBase_o *)v98;
  sub_1BCA784((PartyOrganizationUtility_o *)&v105->m_Items[1], (int64_t)v98, v106, v107, v108, v109, v110, v111);
  v115 = (SchedulerTaskParallel_o *)sub_1BCAA2C(SchedulerTaskParallel_TypeInfo, v112, v113, v114);
  SchedulerTaskParallel___ctor(v115, v105, 0LL);
  return (SchedulerTaskBase_o *)v115;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_array *panelDataArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x21
  Il2CppObject *OpenPanelAndRevealSpotTask; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  __int64 v16; // x3
  __int64 v17; // x8
  unsigned __int64 v18; // x22
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0
  SchedulerTaskParallel_o *v30; // x19

  if ( (byte_4B12E5C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, panelDataArray, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v10, v11);
    byte_4B12E5C = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       panelDataArray,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_14;
  v17 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1BCAA44(OpenPanelAndRevealSpotTask, v14);
      OpenPanelAndRevealSpotTask = (Il2CppObject *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                     this,
                                                     panelDataArray->m_Items[v18],
                                                     0.0,
                                                     v15);
      if ( !v12 )
        break;
      items = v12->fields._items;
      v26 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v12->fields._version;
      if ( !items )
        break;
      size = v12->fields._size;
      v28 = (int64_t)OpenPanelAndRevealSpotTask;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          OpenPanelAndRevealSpotTask,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v28;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
      }
      LODWORD(v17) = panelDataArray->max_length;
      if ( (__int64)++v18 >= (int)v17 )
        goto LABEL_13;
    }
LABEL_14:
    sub_1BCAA3C(OpenPanelAndRevealSpotTask, v14);
  }
LABEL_13:
  v30 = (SchedulerTaskParallel_o *)sub_1BCAA2C(SchedulerTaskParallel_TypeInfo, v14, v15, v16);
  SchedulerTaskParallel___ctor_42003060(v30, (System_Collections_Generic_List_SchedulerTaskBase__o *)v12, 0LL);
  return (SchedulerTaskBase_o *)v30;
}


void __fastcall SubmarineMapManager__CreatePanels(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SubmarineMapManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  __int64 v22; // x1
  UnityEngine_Object_o *panelContainer; // x20
  __int64 v24; // x1
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v27; // x0
  __int64 v28; // x1
  struct SubmarineMapAssetManager_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  Il2CppObject *current; // x20
  Il2CppObject *v32; // x21
  __int64 v33; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  UnityEngine_GameObject_o *v37; // x22
  Il2CppObject *Component_object; // x0
  __int64 v39; // x1
  struct SubmarineMapDataManager_o *v40; // x8
  SubmarineMapPanelComponent_o *v41; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v43; // s8
  float v44; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  __int64 v46; // x1
  ObjectDomain_o *v47; // x23
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Action_object__o *v57; // x21
  const MethodInfo *v58; // x2
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  v3 = this;
  if ( (byte_4B12E40 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SubmarineMapPanelData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v14, v15);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v16, v17);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(&Method_SubmarineMapManager_ClickPanel__, v18, v19);
    byte_4B12E40 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  assetManager = v3->fields.assetManager;
  if ( !assetManager )
    goto LABEL_36;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0LL, 0LL) )
  {
    panelContainer = (UnityEngine_Object_o *)v3->fields.panelContainer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)v3->fields.closedPanelTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        submarineData = v3->fields.submarineData;
        if ( submarineData )
        {
          this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField;
          if ( this )
          {
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v59,
              (System_Collections_Generic_List_object__o *)this,
              (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v60 = v59;
            while ( 1 )
            {
              v27 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v60,
                      (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v27 )
                break;
              v29 = v3->fields.assetManager;
              if ( !v29 )
                sub_1BCAA3C(v27, v28);
              v30 = v3->fields.panelContainer;
              if ( !v30 )
                sub_1BCAA3C(0LL, v28);
              current = v60.fields._current;
              v32 = (Il2CppObject *)v29->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v30, 0LL);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
              v35 = UnityEngine_Object__Instantiate_object__49903816(
                      v32,
                      transform,
                      (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
              v37 = (UnityEngine_GameObject_o *)v35;
              if ( !v35 )
                sub_1BCAA3C(0LL, v36);
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v35,
                                   (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v40 = v3->fields.submarineData;
              if ( !v40 )
                sub_1BCAA3C(Component_object, v39);
              if ( !current )
                sub_1BCAA3C(Component_object, v39);
              v41 = (SubmarineMapPanelComponent_o *)Component_object;
              PositionCalculator_k__BackingField = v40->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_1BCAA3C(0LL, v39);
              v43 = PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.x
                                  * (float)(((2 * LODWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField))
                          * 0.5);
              v44 = PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.y
                                  * (float)(((2 * HIDWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField))
                          * 0.5);
              v61.fields.z = 0.0;
              v61.fields.x = v43;
              v61.fields.y = v44;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v61,
                                    PositionCalculator_k__BackingField,
                                    0LL);
              if ( !v41 )
                sub_1BCAA3C(ClosedPanelDomain, v46);
              v47 = ClosedPanelDomain;
              SubmarineMapPanelComponent__Initialize(v41, 0LL);
              v62.fields.z = 0.0;
              v62.fields.x = v43;
              v62.fields.y = v44;
              GameObjectExtensions__SetLocalPosition(v37, v62, 0LL);
              SubmarineMapPanelComponent__SetSize(v41, v47, 0LL);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v41, v47, v3->fields.closedPanelTexture, 0LL);
              current[3].klass = (Il2CppClass *)v41;
              sub_1BCA784((PartyOrganizationUtility_o *)&current[3], (int64_t)v41, v48, v49, v50, v51, v52, v53);
              v57 = (System_Action_object__o *)sub_1BCAA2C(System_Action_SubmarineMapPanelData__TypeInfo, v54, v55, v56);
              System_Action_object____ctor(
                v57,
                (Il2CppObject *)v3,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                0LL);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v57,
                v58);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v60,
              (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_36:
        sub_1BCAA3C(this, method);
      }
    }
  }
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealEachSpotsTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x20
  void *Children; // x0
  __int64 v15; // x1
  int v16; // w8
  void *v17; // x21
  unsigned int v18; // w23
  __int64 v19; // x1
  Il2CppObject *Component_object; // x22
  const MethodInfo *v21; // x2

  if ( (byte_4B12E5F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B12E5F = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_15;
  v16 = *((_DWORD *)Children + 6);
  v17 = Children;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= v16 )
        sub_1BCAA44(Children, v15);
      Children = (void *)*((_QWORD *)v17 + (int)v18 + 4);
      if ( !Children )
        break;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Children,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
      Children = (void *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v21);
        if ( !v13 )
          break;
        System_Collections_Generic_List_object___AddRange(
          v13,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v13;
    }
LABEL_15:
    sub_1BCAA3C(Children, v15);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v13;
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotOnPanelTasks(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x22
  MapControl_MapInfo_o *mapInfo; // x0
  __int64 v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  SchedulerTaskNone_o *v43; // x23
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_object__o *SpotList; // x23
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Predicate_object__o *v58; // x24
  __int64 v59; // x8
  UnityEngine_Transform_o *v60; // x21
  int32_t v61; // w22
  __int64 v62; // x1
  UnityEngine_Object_o *v63; // x21
  Il2CppObject *Component_object; // x1
  const MethodInfo *v66; // x2

  if ( (byte_4B12E5A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___, panelData, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Predicate_MapControl_SpotInfo__TypeInfo, v16, v17);
    sub_1BCA7E0(&SchedulerTaskNone_TypeInfo, v18, v19);
    sub_1BCA7E0(&SrcSpotBasePrefab_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__, v22, v23);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo, v24, v25);
    byte_4B12E5A = 1;
  }
  v26 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass94_0_TypeInfo, panelData, method, v3);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_25;
  *(_QWORD *)(v26 + 16) = panelData;
  v35 = v26 + 16;
  sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 16), (int64_t)panelData, v29, v30, v31, v32, v33, v34);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v43 = (SchedulerTaskNone_o *)sub_1BCAA2C(SchedulerTaskNone_TypeInfo, v40, v41, v42);
  SchedulerTaskNone___ctor(v43, 0LL);
  if ( !v39 )
    goto LABEL_25;
  items = v39->fields._items;
  v51 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v39->fields._version;
  if ( !items )
    goto LABEL_25;
  size = v39->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v39,
      (Il2CppObject *)v43,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &items->obj.klass + size;
    v39->fields._size = size + 1;
    v53[4] = (Il2CppClass *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 4), (int64_t)v43, v44, v45, v46, v47, v48, v49);
  }
  if ( !*(_QWORD *)v35 || *(int *)(*(_QWORD *)v35 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v39;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_25;
  SpotList = (System_Collections_Generic_List_object__o *)MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v58 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_MapControl_SpotInfo__TypeInfo, v55, v56, v57);
  System_Predicate_object____ctor(
    v58,
    (Il2CppObject *)v26,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateRevealSpotOnPanelTasks_b__0__,
    0LL);
  if ( !SpotList )
    goto LABEL_25;
  if ( !System_Collections_Generic_List_object___Find(
          SpotList,
          (System_Predicate_T__o *)v58,
          (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v39;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_25;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v59 = *(_QWORD *)v35;
  if ( !*(_QWORD *)v35 )
    goto LABEL_25;
  v60 = (UnityEngine_Transform_o *)mapInfo;
  v61 = *(_DWORD *)(v59 + 40);
  if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo, v28);
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v61, 0LL);
  if ( !v60 )
    goto LABEL_25;
  v63 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v60, (System_String_o *)mapInfo, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v63, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v39;
  if ( !v63 )
LABEL_25:
    sub_1BCAA3C(mapInfo, v28);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v63,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_object, v66);
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotTasks(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_object__o *v16; // x20
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  __int64 v18; // x1
  SpotEntity_o *Mine; // x21
  const MethodInfo *v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  int64_t v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  int64_t v44; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Object_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  Il2CppClass **v60; // x0

  if ( (byte_4B12E60 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, spot, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v10, v11);
    sub_1BCA7E0(&SubmarineLightenSpotPerformance_TypeInfo, v12, v13);
    sub_1BCA7E0(&SubmarineRevealSpotPerformance_TypeInfo, v14, v15);
    byte_4B12E60 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       spot,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_20;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v16;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v16;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v20);
  v24 = sub_1BCAA2C(SubmarineRevealSpotPerformance_TypeInfo, v21, v22, v23);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v24, 0LL);
  *(_QWORD *)(v24 + 48) = spot;
  sub_1BCA784((PartyOrganizationUtility_o *)(v24 + 48), (int64_t)spot, v25, v26, v27, v28, v29, v30);
  if ( !v16 )
    goto LABEL_20;
  items = v16->fields._items;
  v38 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v16->fields._version;
  if ( !items )
    goto LABEL_20;
  size = v16->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v24,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v40 = &items->obj.klass + size;
    v16->fields._size = size + 1;
    v40[4] = (Il2CppClass *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 4), v24, v31, v32, v33, v34, v35, v36);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_20;
  if ( !QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v16;
  v44 = sub_1BCAA2C(SubmarineLightenSpotPerformance_TypeInfo, v41, v42, v43);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v44, 0LL);
  *(_QWORD *)(v44 + 48) = spot;
  sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 48), (int64_t)spot, v45, v46, v47, v48, v49, v50);
  v57 = v16->fields._items;
  v58 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v16->fields._version;
  if ( !v57 )
LABEL_20:
    sub_1BCAA3C(mMapCtrl_SpotInfo, v18);
  v59 = v16->fields._size;
  if ( (unsigned int)v59 >= v57->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v16,
      (Il2CppObject *)v44,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &v57->obj.klass + v59;
    v16->fields._size = v59 + 1;
    v60[4] = (Il2CppClass *)v44;
    sub_1BCA784((PartyOrganizationUtility_o *)(v60 + 4), v44, v51, v52, v53, v54, v55, v56);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v16;
}


// local variable allocation has failed, the output may be wrong!
SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateScanOpenPanelTask(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_object__o *v39; // x20
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  float ScanOpenPanelInterval; // s8
  __int64 v45; // x2
  __int64 v46; // x3
  SubmarineMapManager___c_c *v47; // x8
  System_Collections_Generic_List_object__o *v48; // x21
  System_Predicate_object__o *_9__97_0; // x22
  Il2CppObject *v50; // x23
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  SubmarineMapManager___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x21
  System_Func_object__int__o *_9__97_1; // x22
  Il2CppObject *v65; // x23
  struct SubmarineMapManager___c_StaticFields *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int32_t v73; // w23
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x22
  __int64 v78; // x2
  __int64 v79; // x3
  int v80; // w29
  float v81; // s9
  System_Predicate_object__o *v82; // x23
  System_Collections_Generic_List_T__o *v83; // x23
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Collections_Generic_List_object__o *v87; // x0
  _BOOL8 v88; // x0
  __int64 v89; // x1
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v91; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v93; // x2
  float v94; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  Il2CppObject *v102; // x1
  struct System_Object_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  Il2CppClass **v106; // x0
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v108; // w8
  SchedulerTaskParallel_o *v109; // x19
  System_Collections_Generic_List_Enumerator_object__o v111; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4B12E5D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___, *(_QWORD *)&scanId, panelData);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v11, v12);
    sub_1BCA7E0(&System_Func_SubmarineScanEvent__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Predicate_SubmarineScanEvent__TypeInfo, v25, v26);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__, v29, v30);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__, v31, v32);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__, v33, v34);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass97_0_TypeInfo, v35, v36);
    sub_1BCA7E0(&SubmarineMapManager___c_TypeInfo, v37, v38);
    byte_4B12E5D = 1;
  }
  memset(&v112, 0, sizeof(v112));
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       *(_QWORD *)&scanId,
                                                       panelData,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_48;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_48;
  ScanOpenPanelInterval = SubmarineSettingsManager__GetScanOpenPanelInterval(Settings_k__BackingField, scanId, v42);
  Settings_k__BackingField = (SubmarineSettingsManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                                             scanId,
                                                             panelData,
                                                             this->fields.submarineData,
                                                             0LL);
  v47 = SubmarineMapManager___c_TypeInfo;
  v48 = (System_Collections_Generic_List_object__o *)Settings_k__BackingField;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo, v41);
    v47 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_0 = (System_Predicate_object__o *)v47->static_fields->__9__97_0;
  if ( !_9__97_0 )
  {
    if ( !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47, v41);
      v47 = SubmarineMapManager___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v47->static_fields->__9;
    _9__97_0 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_SubmarineScanEvent__TypeInfo, v41, v45, v46);
    System_Predicate_object____ctor(
      _9__97_0,
      v50,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_0__,
      0LL);
    static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    static_fields->__9__97_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__97_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__97_0,
      (int64_t)_9__97_0,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  if ( !v48 )
    goto LABEL_48;
  All = System_Collections_Generic_List_object___FindAll(
          v48,
          (System_Predicate_T__o *)_9__97_0,
          (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v62 = SubmarineMapManager___c_TypeInfo;
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo, v59);
    v62 = SubmarineMapManager___c_TypeInfo;
  }
  _9__97_1 = (System_Func_object__int__o *)v62->static_fields->__9__97_1;
  if ( !_9__97_1 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62, v59);
      v62 = SubmarineMapManager___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v62->static_fields->__9;
    _9__97_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_SubmarineScanEvent__int__TypeInfo, v59, v60, v61);
    System_Func_object__int____ctor(
      _9__97_1,
      v65,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__97_1__,
      0LL);
    v66 = SubmarineMapManager___c_TypeInfo->static_fields;
    v66->__9__97_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__97_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v66->__9__97_1, (int64_t)_9__97_1, v67, v68, v69, v70, v71, v72);
  }
  v73 = System_Linq_Enumerable__Max_object_(
          v63,
          (System_Func_TSource__int__o *)_9__97_1,
          (const MethodInfo_2F3A048 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v77 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass97_0_TypeInfo, v74, v75, v76);
  System_Object___ctor((Il2CppObject *)v77, 0LL);
  if ( !v77 )
LABEL_48:
    sub_1BCAA3C(Settings_k__BackingField, v41);
  v80 = v73 + 1;
  *(_DWORD *)(v77 + 16) = 0;
  if ( v73 + 1 >= 1 )
  {
    v81 = 0.0;
    do
    {
      v82 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_SubmarineScanEvent__TypeInfo, v41, v78, v79);
      System_Predicate_object____ctor(
        v82,
        (Il2CppObject *)v77,
        Method_SubmarineMapManager___c__DisplayClass97_0__CreateScanOpenPanelTask_b__2__,
        0LL);
      if ( !v63 )
        goto LABEL_48;
      v83 = System_Collections_Generic_List_object___FindAll(
              (System_Collections_Generic_List_object__o *)v63,
              (System_Predicate_T__o *)v82,
              (const MethodInfo_35A236C *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v87 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                           v84,
                                                           v85,
                                                           v86);
      System_Collections_Generic_List_object____ctor(
        v87,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v83 )
        goto LABEL_48;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v111,
        (System_Collections_Generic_List_object__o *)v83,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v112 = v111;
      while ( 1 )
      {
        v88 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v112,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v88 )
          break;
        current = v112.fields._current;
        if ( !v112.fields._current )
          sub_1BCAA3C(v88, v89);
        v91 = this->fields.submarineData;
        if ( !v91 )
          sub_1BCAA3C(0LL, v89);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v91,
                           (int32_t)v112.fields._current[1].klass,
                           HIDWORD(v112.fields._current[1].klass),
                           0LL);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v94,
                                v93);
            v102 = (Il2CppObject *)HitObstractTask;
            if ( !v39 )
              sub_1BCAA3C(HitObstractTask, HitObstractTask);
            items = v39->fields._items;
            v104 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v39->fields._version;
            if ( !items )
              sub_1BCAA3C(HitObstractTask, HitObstractTask);
            size = v39->fields._size;
            if ( (unsigned int)size < items->max_length )
              goto LABEL_32;
LABEL_37:
            System_Collections_Generic_List_object___AddWithResize(
              v39,
              v102,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v81,
                                           v93);
            v102 = (Il2CppObject *)OpenPanelAndRevealSpotTask;
            if ( !v39 )
              sub_1BCAA3C(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            items = v39->fields._items;
            v104 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
            ++v39->fields._version;
            if ( !items )
              sub_1BCAA3C(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
            size = v39->fields._size;
            if ( (unsigned int)size >= items->max_length )
              goto LABEL_37;
LABEL_32:
            v106 = &items->obj.klass + size;
            v39->fields._size = size + 1;
            v106[4] = (Il2CppClass *)v102;
            sub_1BCA784((PartyOrganizationUtility_o *)(v106 + 4), (int64_t)v102, v96, v97, v98, v99, v100, v101);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v112,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      v81 = ScanOpenPanelInterval + v81;
      v108 = *(_DWORD *)(v77 + 16) + 1;
      *(_DWORD *)(v77 + 16) = v108;
    }
    while ( v108 < v80 );
  }
  v109 = (SchedulerTaskParallel_o *)sub_1BCAA2C(SchedulerTaskParallel_TypeInfo, v41, v78, v79);
  SchedulerTaskParallel___ctor_42003060(v109, (System_Collections_Generic_List_SchedulerTaskBase__o *)v39, 0LL);
  return (SchedulerTaskBase_o *)v109;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateScanTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        int32_t scanId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x20
  __int64 MoveCameraToPositionTask; // x0
  const MethodInfo *v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x2
  __int64 v69; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v72; // d11
  float32x2_t v73; // d9
  int32x2_t v74; // d10
  float32x2_t v75; // d8
  System_Collections_Generic_List_object__o *v76; // x19
  struct SubmarineMapDataManager_o *v77; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v79; // d0 OVERLAPPED
  float v80; // s8
  int v81; // s2
  int v82; // s1
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  struct System_Object_array *items; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  int64_t v92; // x1
  Il2CppClass **v93; // x0
  const MethodInfo *v94; // x2
  __int64 v95; // x1
  Il2CppObject *ScanAnimObjectPrefab; // x22
  const MethodInfo *v97; // x1
  __int64 v98; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v100; // s2
  float v101; // s0
  float v102; // s1
  float v103; // s9
  __int64 v104; // x1
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v106; // x0
  int64_t v107; // x24
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  __int64 v114; // x2
  Il2CppObject *Component_object; // x22
  float32x2_t v116; // d0
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  struct SubmarineMapDataManager_o *v120; // x8
  struct SubmarineSettingsManager_o *v121; // x8
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  int64_t v131; // x1
  Il2CppClass **v132; // x0
  float JumpStartTime; // s10
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  __int64 v137; // x28
  __int64 v138; // x2
  __int64 v139; // x3
  int64_t v140; // x25
  System_Delegate_o *v141; // x26
  SchedulerTaskBase_TaskCallback_o *v142; // x27
  System_Delegate_o *v143; // x0
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  int64_t v150; // x8
  SchedulerTaskBase_TaskCallback_c *v151; // x1
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v153; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v154; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  Il2CppObject *v157; // x0
  __int64 v158; // x25
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  __int64 v165; // x2
  __int64 v166; // x3
  System_String_o *v167; // x27
  SchedulerTaskWaitLoadAsset_o *v168; // x26
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  struct System_Object_array *v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  Il2CppClass **v178; // x0
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  int64_t v185; // x1
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  int64_t v192; // x1
  __int64 v193; // x2
  __int64 v194; // x3
  float v195; // s10
  __int64 v196; // x2
  __int64 v197; // x3
  System_Delegate_o *v198; // x27
  SchedulerTaskBase_TaskCallback_o *v199; // x28
  System_Delegate_o *v200; // x0
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  SchedulerTaskBase_TaskCallback_c *v207; // x1
  int64_t v208; // x2
  int32_t v209; // w3
  System_String_o *v210; // x4
  BattleSetupInfo_o *v211; // x5
  FollowerInfo_o *v212; // x6
  PartyListViewItem_o *v213; // x7
  struct System_Object_array *v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  Il2CppClass **v217; // x0
  float SelectedPanelEffecFinishTime; // s10
  __int64 v219; // x1
  __int64 v220; // x2
  __int64 v221; // x3
  __int64 v222; // x2
  __int64 v223; // x3
  System_Delegate_o *v224; // x27
  SchedulerTaskBase_TaskCallback_o *v225; // x28
  System_Delegate_o *v226; // x0
  int64_t v227; // x2
  int32_t v228; // w3
  System_String_o *v229; // x4
  BattleSetupInfo_o *v230; // x5
  FollowerInfo_o *v231; // x6
  PartyListViewItem_o *v232; // x7
  SchedulerTaskBase_TaskCallback_c *v233; // x1
  __int64 *v234; // x27
  __int64 v235; // x1
  const MethodInfo_36C2908 *v236; // x2
  float JumpDuration; // s10
  float x; // s0
  float32x2_t v239; // d12
  MapCamera_o *mapCamera; // x21
  float v241; // s1
  __int64 v242; // x1
  __int64 v243; // x2
  __int64 v244; // x3
  MapCameraPerformance_o *v245; // x0
  int64_t v246; // x26
  UnityEngine_GameObject_o *v247; // x24
  __int64 v248; // x1
  __int64 v249; // x2
  __int64 v250; // x3
  SchedulerTaskMovePerformance_o *v251; // x0
  int64_t v252; // x21
  int64_t v253; // x2
  int32_t v254; // w3
  System_String_o *v255; // x4
  BattleSetupInfo_o *v256; // x5
  FollowerInfo_o *v257; // x6
  PartyListViewItem_o *v258; // x7
  SchedulerTaskBase_array *v259; // x24
  int64_t v260; // x2
  int32_t v261; // w3
  System_String_o *v262; // x4
  BattleSetupInfo_o *v263; // x5
  FollowerInfo_o *v264; // x6
  PartyListViewItem_o *v265; // x7
  __int64 v266; // x1
  __int64 v267; // x2
  __int64 v268; // x3
  SimpleAnimation_o *AnimationComponent; // x26
  System_String_o *AnimName; // x27
  __int64 v271; // x1
  __int64 v272; // x2
  __int64 v273; // x3
  __int64 v274; // x2
  __int64 v275; // x3
  System_Delegate_o *v276; // x27
  SchedulerTaskBase_TaskCallback_o *v277; // x28
  System_Delegate_o *v278; // x0
  int64_t v279; // x2
  int32_t v280; // w3
  System_String_o *v281; // x4
  BattleSetupInfo_o *v282; // x5
  FollowerInfo_o *v283; // x6
  PartyListViewItem_o *v284; // x7
  SchedulerTaskBase_TaskCallback_c *v285; // x1
  int64_t v286; // x27
  __int64 v287; // x20
  int64_t v288; // x2
  int32_t v289; // w3
  System_String_o *v290; // x4
  BattleSetupInfo_o *v291; // x5
  FollowerInfo_o *v292; // x6
  PartyListViewItem_o *v293; // x7
  __int64 v294; // x24
  int64_t v295; // x2
  int32_t v296; // w3
  System_String_o *v297; // x4
  BattleSetupInfo_o *v298; // x5
  FollowerInfo_o *v299; // x6
  PartyListViewItem_o *v300; // x7
  int64_t v301; // x2
  int32_t v302; // w3
  System_String_o *v303; // x4
  BattleSetupInfo_o *v304; // x5
  FollowerInfo_o *v305; // x6
  PartyListViewItem_o *v306; // x7
  __int64 v307; // x1
  __int64 v308; // x2
  __int64 v309; // x3
  SchedulerTaskOrthostichy_o *v310; // x21
  int64_t v311; // x2
  int32_t v312; // w3
  System_String_o *v313; // x4
  BattleSetupInfo_o *v314; // x5
  FollowerInfo_o *v315; // x6
  PartyListViewItem_o *v316; // x7
  __int64 v317; // x1
  __int64 v318; // x2
  __int64 v319; // x3
  SchedulerTaskParallel_o *v320; // x21
  float TimeToStartOpenPanel; // s8
  __int64 v322; // x1
  __int64 v323; // x2
  __int64 v324; // x3
  SchedulerTaskWaitTime_o *v325; // x20
  int64_t v326; // x2
  int32_t v327; // w3
  System_String_o *v328; // x4
  BattleSetupInfo_o *v329; // x5
  FollowerInfo_o *v330; // x6
  PartyListViewItem_o *v331; // x7
  struct System_Object_array *v332; // x8
  _QWORD *v333; // x9
  __int64 v334; // x10
  Il2CppClass **v335; // x0
  int64_t v336; // x2
  int32_t v337; // w3
  System_String_o *v338; // x4
  BattleSetupInfo_o *v339; // x5
  FollowerInfo_o *v340; // x6
  PartyListViewItem_o *v341; // x7
  struct System_Object_array *v342; // x8
  _QWORD *v343; // x9
  __int64 v344; // x10
  Il2CppClass **v345; // x0
  int64_t v346; // x2
  int32_t v347; // w3
  System_String_o *v348; // x4
  BattleSetupInfo_o *v349; // x5
  FollowerInfo_o *v350; // x6
  PartyListViewItem_o *v351; // x7
  struct System_Object_array *v352; // x8
  _QWORD *v353; // x9
  __int64 v354; // x10
  Il2CppClass **v355; // x0
  __int64 v357; // x0
  __int64 v358; // [xsp+8h] [xbp-E8h]
  float v359; // [xsp+20h] [xbp-D0h]
  float v360; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_Vector2__o position; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v365; // 0:x4.8
  System_Nullable_Vector2__o v366; // 0:x0.12
  UnityEngine_Vector3_o v367; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v368; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v369; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v370; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4B12E59 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelScanMaster___, panelData, *(_QWORD *)&scanId);
    sub_1BCA7E0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___, v9, v10);
    sub_1BCA7E0(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v17, v18);
    sub_1BCA7E0(&MapCameraPerformance_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Nullable_Vector2___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v29, v30);
    sub_1BCA7E0(&SchedulerTaskMovePerformance_TypeInfo, v31, v32);
    sub_1BCA7E0(&SchedulerTaskOrthostichy_TypeInfo, v33, v34);
    sub_1BCA7E0(&SchedulerTaskParallel_TypeInfo, v35, v36);
    sub_1BCA7E0(&SchedulerTaskSimpleAnimation_TypeInfo, v37, v38);
    sub_1BCA7E0(&SchedulerTaskWaitLoadAsset_TypeInfo, v39, v40);
    sub_1BCA7E0(&SchedulerTaskWaitTime_TypeInfo, v41, v42);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v43, v44);
    sub_1BCA7E0(&SoundManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v47, v48);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__, v49, v50);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__, v51, v52);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__, v53, v54);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__, v55, v56);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass93_0_TypeInfo, v57, v58);
    byte_4B12E59 = 1;
  }
  v59 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass93_0_TypeInfo, panelData, *(_QWORD *)&scanId, method);
  System_Object___ctor((Il2CppObject *)v59, 0LL);
  if ( !v59 )
    goto LABEL_126;
  *(_QWORD *)(v59 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 32), (int64_t)this, v62, v63, v64, v65, v66, v67);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_126;
  if ( !panelData )
    goto LABEL_126;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_126;
  v72.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v73.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v74.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v75.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v76 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       v61,
                                                       v68,
                                                       v69);
  System_Collections_Generic_List_object____ctor(
    v76,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v77 = this->fields.submarineData;
  if ( !v77 )
    goto LABEL_126;
  Settings_k__BackingField = v77->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_126;
  v79 = vadd_f32(
          v75,
          vmul_f32(
            vmul_f32(v73, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v72, 1uLL).n64_u64[0] | 0x100000001LL), v74))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v80 = *((float *)&v79 + 1);
  v81 = 0;
  v82 = HIDWORD(v79);
  value = (UnityEngine_Vector2_o)v79;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v79,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v61);
  if ( !v76 )
    goto LABEL_126;
  items = v76->fields._items;
  v90 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v76->fields._version;
  if ( !items )
    goto LABEL_126;
  v91 = v76->fields._size;
  v92 = MoveCameraToPositionTask;
  if ( (unsigned int)v91 >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v76,
      (Il2CppObject *)MoveCameraToPositionTask,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v93 = &items->obj.klass + v91;
    v76->fields._size = v91 + 1;
    v93[4] = (Il2CppClass *)v92;
    sub_1BCA784((PartyOrganizationUtility_o *)(v93 + 4), v92, v83, v84, v85, v86, v87, v88);
  }
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_object_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_126;
  MoveCameraToPositionTask = (__int64)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v76;
  if ( !this->fields.assetManager )
    goto LABEL_126;
  ScanAnimObjectPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                           this->fields.assetManager,
                                           *(_DWORD *)(MoveCameraToPositionTask + 56),
                                           v94);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanAnimObjectPrefab, 0LL, 0LL) )
  {
    HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v97);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v98);
    MoveCameraToPositionTask = UnityEngine_Object__op_Equality(HomeSpot, 0LL, 0LL);
    if ( (MoveCameraToPositionTask & 1) == 0 )
    {
      if ( !HomeSpot )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      *(UnityEngine_Vector3_o *)(&v100 - 2) = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                                0LL);
      MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
      v360 = v101;
      v359 = v102;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v103 = v100;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v104);
      v106 = UnityEngine_Object__Instantiate_object__49903816(
               ScanAnimObjectPrefab,
               transform,
               (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      *(_QWORD *)(v59 + 16) = v106;
      v107 = v59 + 16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)v106, v108, v109, v110, v111, v112, v113);
      v367.fields.y = v359;
      v367.fields.x = v360;
      v367.fields.z = v103;
      GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v59 + 16), v367, 0LL);
      MoveCameraToPositionTask = *(_QWORD *)(v59 + 16);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
      Component_object = GameObjectExtensions__SafeGetComponent_object_(
                           *(UnityEngine_GameObject_o **)v107,
                           (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
      if ( !byte_4B109C3 )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, v61, v114);
        byte_4B109C3 = 1;
      }
      MoveCameraToPositionTask = (__int64)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v61);
      if ( !Component_object )
        goto LABEL_126;
      v116.n64_u64[0] = vsub_f32((float32x2_t)__PAIR64__(LODWORD(v359), LODWORD(v360)), (float32x2_t)value).n64_u64[0];
      SubmarineScannerComponent__Initialize(
        (SubmarineScannerComponent_o *)Component_object,
        sqrtf((float)(v103 * v103) + vaddv_f32(vmul_f32(v116, v116))),
        0LL);
      if ( !SubmarineScannerComponent__IsAnimationPrepared((SubmarineScannerComponent_o *)Component_object, 0LL) )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v76;
      v76 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                           v117,
                                                           v118,
                                                           v119);
      System_Collections_Generic_List_object____ctor(
        v76,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      v120 = this->fields.submarineData;
      if ( !v120 )
        goto LABEL_126;
      v121 = v120->fields._Settings_k__BackingField;
      if ( !v121 )
        goto LABEL_126;
      v368.fields.y = v359;
      v368.fields.x = v360;
      v368.fields.z = v103;
      MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                            this,
                                            v368,
                                            1.0,
                                            v121->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                            v61);
      if ( !v76 )
        goto LABEL_126;
      v128 = v76->fields._items;
      v129 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v76->fields._version;
      if ( !v128 )
        goto LABEL_126;
      v130 = v76->fields._size;
      v131 = MoveCameraToPositionTask;
      if ( (unsigned int)v130 >= v128->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)MoveCameraToPositionTask,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
      }
      else
      {
        v132 = &v128->obj.klass + v130;
        v76->fields._size = v130 + 1;
        v132[4] = (Il2CppClass *)v131;
        sub_1BCA784((PartyOrganizationUtility_o *)(v132 + 4), v131, v122, v123, v124, v125, v126, v127);
      }
      JumpStartTime = SubmarineScannerComponent__GetJumpStartTime((SubmarineScannerComponent_o *)Component_object, 0LL);
      v137 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v134, v135, v136);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v137, JumpStartTime, 0LL);
      if ( !v137 )
        goto LABEL_126;
      v140 = v137 + 24;
      v141 = *(System_Delegate_o **)(v137 + 24);
      v142 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v61, v138, v139);
      SchedulerTaskBase_TaskCallback___ctor(
        v142,
        (Il2CppObject *)v59,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__0__,
        0LL);
      v143 = System_Delegate__Combine(v141, (System_Delegate_o *)v142, 0LL);
      v150 = (int64_t)v143;
      if ( v143 )
      {
        v151 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v143->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        *(_QWORD *)v140 = v143;
        if ( (SchedulerTaskBase_TaskCallback_c *)v143->klass != v151 )
          goto LABEL_98;
      }
      else
      {
        *(_QWORD *)v140 = 0LL;
      }
      sub_1BCA784((PartyOrganizationUtility_o *)(v137 + 24), (int64_t)v143, v144, v145, v146, v147, v148, v149);
      playingScanVoiceData = this->fields.playingScanVoiceData;
      if ( !playingScanVoiceData )
        goto LABEL_126;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v153 = this->fields.playingScanVoiceData;
        if ( !v153 )
          goto LABEL_126;
        MoveCameraToPositionTask = System_String__IsNullOrEmpty(v153->fields.assetName, 0LL);
        if ( (MoveCameraToPositionTask & 1) == 0 )
        {
          v154 = this->fields.playingScanVoiceData;
          if ( !v154 )
            goto LABEL_126;
          assetName = v154->fields.assetName;
          vcName = v154->fields.vcName;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v61);
          SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
        }
      }
      v157 = GameObjectExtensions__SafeGetComponent_object_(
               *(UnityEngine_GameObject_o **)(v59 + 16),
               (const MethodInfo_2F641B8 *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
      *(_QWORD *)(v59 + 24) = v157;
      v158 = v59 + 24;
      sub_1BCA784((PartyOrganizationUtility_o *)(v59 + 24), (int64_t)v157, v159, v160, v161, v162, v163, v164);
      if ( !*(_QWORD *)(v59 + 24) )
        goto LABEL_126;
      v167 = *(System_String_o **)(*(_QWORD *)(v59 + 24) + 56LL);
      v168 = (SchedulerTaskWaitLoadAsset_o *)sub_1BCAA2C(SchedulerTaskWaitLoadAsset_TypeInfo, v61, v165, v166);
      SchedulerTaskWaitLoadAsset___ctor(v168, v167, 0LL);
      v175 = v76->fields._items;
      v176 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v76->fields._version;
      if ( !v175 )
        goto LABEL_126;
      v177 = v76->fields._size;
      if ( (unsigned int)v177 >= v175->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)v168,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
      }
      else
      {
        v178 = &v175->obj.klass + v177;
        v76->fields._size = v177 + 1;
        v178[4] = (Il2CppClass *)v168;
        sub_1BCA784((PartyOrganizationUtility_o *)(v178 + 4), (int64_t)v168, v169, v170, v171, v172, v173, v174);
      }
      if ( !*(_QWORD *)v158 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v185 = *(_QWORD *)(*(_QWORD *)v158 + 56LL);
      *(_QWORD *)(MoveCameraToPositionTask + 16) = v185;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)(MoveCameraToPositionTask + 16),
        v185,
        v179,
        v180,
        v181,
        v182,
        v183,
        v184);
      if ( !*(_QWORD *)v158 )
        goto LABEL_126;
      MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
      if ( !MoveCameraToPositionTask
        || (v192 = *(_QWORD *)(*(_QWORD *)v158 + 48LL),
            *(_QWORD *)(MoveCameraToPositionTask + 24) = v192,
            sub_1BCA784(
              (PartyOrganizationUtility_o *)(MoveCameraToPositionTask + 24),
              v192,
              v186,
              v187,
              v188,
              v189,
              v190,
              v191),
            !*(_QWORD *)v158)
        || (v358 = v137,
            v195 = *(float *)(*(_QWORD *)v158 + 32LL),
            v140 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v61, v193, v194),
            SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v140, v195, 0LL),
            !v140) )
      {
LABEL_126:
        sub_1BCAA3C(MoveCameraToPositionTask, v61);
      }
      v141 = (System_Delegate_o *)(v140 + 24);
      v198 = *(System_Delegate_o **)(v140 + 24);
      v199 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v61, v196, v197);
      SchedulerTaskBase_TaskCallback___ctor(
        v199,
        (Il2CppObject *)v59,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__1__,
        0LL);
      v200 = System_Delegate__Combine(v198, (System_Delegate_o *)v199, 0LL);
      v150 = (int64_t)v200;
      if ( v200 )
      {
        v207 = SchedulerTaskBase_TaskCallback_TypeInfo;
        if ( (SchedulerTaskBase_TaskCallback_c *)v200->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v141->klass = (System_Delegate_c *)v200;
        if ( (SchedulerTaskBase_TaskCallback_c *)v200->klass != v207 )
          goto LABEL_98;
      }
      else
      {
        v141->klass = 0LL;
      }
      sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 24), (int64_t)v200, v201, v202, v203, v204, v205, v206);
      v214 = v76->fields._items;
      v215 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
      ++v76->fields._version;
      if ( !v214 )
        goto LABEL_126;
      v216 = v76->fields._size;
      if ( (unsigned int)v216 >= v214->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v76,
          (Il2CppObject *)v140,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
      }
      else
      {
        v217 = &v214->obj.klass + v216;
        v76->fields._size = v216 + 1;
        v217[4] = (Il2CppClass *)v140;
        sub_1BCA784((PartyOrganizationUtility_o *)(v217 + 4), v140, v208, v209, v210, v211, v212, v213);
      }
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(
                                       (SubmarineScannerComponent_o *)Component_object,
                                       0LL);
      v140 = sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v219, v220, v221);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v140, SelectedPanelEffecFinishTime, 0LL);
      if ( !v140 )
        goto LABEL_126;
      v141 = (System_Delegate_o *)(v140 + 32);
      v224 = *(System_Delegate_o **)(v140 + 32);
      v225 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v61, v222, v223);
      SchedulerTaskBase_TaskCallback___ctor(
        v225,
        (Il2CppObject *)v59,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__2__,
        0LL);
      v226 = System_Delegate__Combine(v224, (System_Delegate_o *)v225, 0LL);
      v150 = (int64_t)v226;
      if ( v226 )
      {
        v233 = SchedulerTaskBase_TaskCallback_TypeInfo;
        v234 = &qword_4B10000;
        if ( (SchedulerTaskBase_TaskCallback_c *)v226->klass != SchedulerTaskBase_TaskCallback_TypeInfo )
          goto LABEL_98;
        v141->klass = (System_Delegate_c *)v226;
        if ( (SchedulerTaskBase_TaskCallback_c *)v226->klass != v233 )
          goto LABEL_98;
      }
      else
      {
        v141->klass = 0LL;
        v234 = &qword_4B10000;
      }
      sub_1BCA784((PartyOrganizationUtility_o *)(v140 + 32), (int64_t)v226, v227, v228, v229, v230, v231, v232);
      *(_BYTE *)(v140 + 16) = 1;
      JumpDuration = SubmarineScannerComponent__GetJumpDuration((SubmarineScannerComponent_o *)Component_object, 0LL);
      if ( !*((_BYTE *)v234 + 2499) )
      {
        sub_1BCA7E0(&System_Math_TypeInfo, v235, v236);
        *((_BYTE *)v234 + 2499) = 1;
      }
      x = value.fields.x;
      v239.n64_u64[0] = vsub_f32((float32x2_t)value, (float32x2_t)__PAIR64__(LODWORD(v359), LODWORD(v360))).n64_u64[0];
      if ( !System_Math_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v235);
        x = value.fields.x;
      }
      mapCamera = this->fields.mapCamera;
      position.fields.value.fields.y = 0.0;
      LODWORD(v366.fields.value.fields.y) = Method_System_Nullable_Vector2___ctor__;
      *(_QWORD *)&v366.fields.hasValue = &position;
      v241 = v80;
      *(_QWORD *)&position.fields.hasValue = 0LL;
      System_Nullable_Vector2____ctor(v366, *(UnityEngine_Vector2_o *)&x, v236);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, 1.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
      v245 = (MapCameraPerformance_o *)sub_1BCAA2C(MapCameraPerformance_TypeInfo, v242, v243, v244);
      v365 = size;
      v246 = (int64_t)v245;
      MapCameraPerformance___ctor(v245, mapCamera, JumpDuration, position, v365, 0, 0LL);
      v247 = *(UnityEngine_GameObject_o **)v107;
      v251 = (SchedulerTaskMovePerformance_o *)sub_1BCAA2C(SchedulerTaskMovePerformance_TypeInfo, v248, v249, v250);
      v370.fields.z = 0.0;
      v369.fields.y = v359;
      v369.fields.x = v360;
      v369.fields.z = v103;
      v370.fields.x = value.fields.x;
      v370.fields.y = v80;
      v252 = (int64_t)v251;
      SchedulerTaskMovePerformance___ctor(
        v251,
        v247,
        v369,
        v370,
        sqrtf((float)((float)(0.0 - v103) * (float)(0.0 - v103)) + vaddv_f32(vmul_f32(v239, v239))) / JumpDuration,
        0,
        0LL);
      MoveCameraToPositionTask = sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL);
      if ( !MoveCameraToPositionTask )
        goto LABEL_126;
      v259 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
      if ( v246 )
      {
        MoveCameraToPositionTask = sub_1BCA91C(v246, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( !v259->max_length )
        goto LABEL_127;
      v259->m_Items[0] = (SchedulerTaskBase_o *)v246;
      sub_1BCA784((PartyOrganizationUtility_o *)v259->m_Items, v246, v253, v254, v255, v256, v257, v258);
      if ( v252 )
      {
        MoveCameraToPositionTask = sub_1BCA91C(v252, v259->obj.klass->_1.element_class);
        if ( !MoveCameraToPositionTask )
          goto LABEL_128;
      }
      if ( v259->max_length <= 1 )
        goto LABEL_127;
      v259->m_Items[1] = (SchedulerTaskBase_o *)v252;
      sub_1BCA784((PartyOrganizationUtility_o *)&v259->m_Items[1], v252, v260, v261, v262, v263, v264, v265);
      this = (SubmarineMapManager_o *)sub_1BCAA2C(SchedulerTaskParallel_TypeInfo, v266, v267, v268);
      SchedulerTaskParallel___ctor((SchedulerTaskParallel_o *)this, v259, 0LL);
      AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(
                             (SubmarineScannerComponent_o *)Component_object,
                             0LL);
      AnimName = SubmarineScannerComponent__get_AnimName((SubmarineScannerComponent_o *)Component_object, 0LL);
      v107 = sub_1BCAA2C(SchedulerTaskSimpleAnimation_TypeInfo, v271, v272, v273);
      SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v107, AnimationComponent, AnimName, 0LL);
      if ( !v107 )
        goto LABEL_126;
      v141 = (System_Delegate_o *)(v107 + 32);
      v276 = *(System_Delegate_o **)(v107 + 32);
      v277 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v61, v274, v275);
      SchedulerTaskBase_TaskCallback___ctor(
        v277,
        (Il2CppObject *)v59,
        Method_SubmarineMapManager___c__DisplayClass93_0__CreateScanTask_b__3__,
        0LL);
      v278 = System_Delegate__Combine(v276, (System_Delegate_o *)v277, 0LL);
      v150 = (int64_t)v278;
      if ( !v278 )
        goto LABEL_99;
      v285 = SchedulerTaskBase_TaskCallback_TypeInfo;
      v286 = v358;
      if ( (SchedulerTaskBase_TaskCallback_c *)v278->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        v141->klass = (System_Delegate_c *)v278;
        if ( (SchedulerTaskBase_TaskCallback_c *)v278->klass == v285 )
        {
LABEL_100:
          sub_1BCA784((PartyOrganizationUtility_o *)v141, v150, v279, v280, v281, v282, v283, v284);
          MoveCameraToPositionTask = sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_126;
          v287 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_1BCA91C(v107, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v287 + 24) )
              goto LABEL_127;
            *(_QWORD *)(v287 + 32) = v107;
            sub_1BCA784((PartyOrganizationUtility_o *)(v287 + 32), v107, v288, v289, v290, v291, v292, v293);
            MoveCameraToPositionTask = sub_1BCA888(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_126;
            v294 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_1BCA91C(v286, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v294 + 24) )
                goto LABEL_127;
              *(_QWORD *)(v294 + 32) = v286;
              sub_1BCA784((PartyOrganizationUtility_o *)(v294 + 32), v286, v295, v296, v297, v298, v299, v300);
              if ( !this || (MoveCameraToPositionTask = sub_1BCA91C(this, *(_QWORD *)(*(_QWORD *)v294 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v294 + 24) <= 1u )
                  goto LABEL_127;
                *(_QWORD *)(v294 + 40) = this;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)(v294 + 40),
                  (int64_t)this,
                  v301,
                  v302,
                  v303,
                  v304,
                  v305,
                  v306);
                v310 = (SchedulerTaskOrthostichy_o *)sub_1BCAA2C(SchedulerTaskOrthostichy_TypeInfo, v307, v308, v309);
                SchedulerTaskOrthostichy___ctor(v310, (SchedulerTaskBase_array *)v294, 0LL);
                if ( !v310 || (MoveCameraToPositionTask = sub_1BCA91C(v310, *(_QWORD *)(*(_QWORD *)v287 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v287 + 24) > 1u )
                  {
                    *(_QWORD *)(v287 + 40) = v310;
                    sub_1BCA784(
                      (PartyOrganizationUtility_o *)(v287 + 40),
                      (int64_t)v310,
                      v311,
                      v312,
                      v313,
                      v314,
                      v315,
                      v316);
                    v320 = (SchedulerTaskParallel_o *)sub_1BCAA2C(SchedulerTaskParallel_TypeInfo, v317, v318, v319);
                    SchedulerTaskParallel___ctor(v320, (SchedulerTaskBase_array *)v287, 0LL);
                    if ( v320 )
                    {
                      v320->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(
                                               (SubmarineScannerComponent_o *)Component_object,
                                               0LL);
                      v325 = (SchedulerTaskWaitTime_o *)sub_1BCAA2C(SchedulerTaskWaitTime_TypeInfo, v322, v323, v324);
                      SchedulerTaskWaitTime___ctor(v325, TimeToStartOpenPanel, 0LL);
                      v332 = v76->fields._items;
                      v333 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                      ++v76->fields._version;
                      if ( v332 )
                      {
                        v334 = v76->fields._size;
                        if ( (unsigned int)v334 >= v332->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v76,
                            (Il2CppObject *)v140,
                            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v333[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v335 = &v332->obj.klass + v334;
                          v76->fields._size = v334 + 1;
                          v335[4] = (Il2CppClass *)v140;
                          sub_1BCA784(
                            (PartyOrganizationUtility_o *)(v335 + 4),
                            v140,
                            v326,
                            v327,
                            v328,
                            v329,
                            v330,
                            v331);
                        }
                        v342 = v76->fields._items;
                        v343 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                        ++v76->fields._version;
                        if ( v342 )
                        {
                          v344 = v76->fields._size;
                          if ( (unsigned int)v344 >= v342->max_length )
                          {
                            System_Collections_Generic_List_object___AddWithResize(
                              v76,
                              (Il2CppObject *)v320,
                              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v343[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v345 = &v342->obj.klass + v344;
                            v76->fields._size = v344 + 1;
                            v345[4] = (Il2CppClass *)v320;
                            sub_1BCA784(
                              (PartyOrganizationUtility_o *)(v345 + 4),
                              (int64_t)v320,
                              v336,
                              v337,
                              v338,
                              v339,
                              v340,
                              v341);
                          }
                          v352 = v76->fields._items;
                          v353 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
                          ++v76->fields._version;
                          if ( v352 )
                          {
                            v354 = v76->fields._size;
                            if ( (unsigned int)v354 >= v352->max_length )
                            {
                              System_Collections_Generic_List_object___AddWithResize(
                                v76,
                                (Il2CppObject *)v325,
                                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v353[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              v355 = &v352->obj.klass + v354;
                              v76->fields._size = v354 + 1;
                              v355[4] = (Il2CppClass *)v325;
                              sub_1BCA784(
                                (PartyOrganizationUtility_o *)(v355 + 4),
                                (int64_t)v325,
                                v346,
                                v347,
                                v348,
                                v349,
                                v350,
                                v351);
                            }
                            return (System_Collections_Generic_List_SchedulerTaskBase__o *)v76;
                          }
                        }
                      }
                    }
                    goto LABEL_126;
                  }
LABEL_127:
                  sub_1BCAA44(MoveCameraToPositionTask, v61);
                }
              }
            }
          }
LABEL_128:
          v357 = sub_1BCAA60();
          sub_1BCA908(v357, 0LL);
        }
      }
LABEL_98:
      sub_1BCACFC(v150);
LABEL_99:
      v141->klass = (System_Delegate_c *)v150;
      v286 = v358;
      goto LABEL_100;
    }
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v76;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_object__o *v27; // x19
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float32x2_t v32; // d8
  float z; // s9
  System_Collections_Generic_List_object__o *v34; // x21
  SchedulerTaskBase_o *PanelDataList_k__BackingField; // x0
  const MethodInfo *v36; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v38; // x0
  __int64 v39; // x1
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  struct SubmarineMapDataManager_o *v49; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Object_array *v55; // x0
  const MethodInfo *v56; // x2
  int32x2_t v57; // d1
  struct SubmarineMapDataManager_o *v58; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  Il2CppObject *v60; // x22
  unsigned __int64 v61; // d0 OVERLAPPED
  float v62; // s2
  int v63; // s1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  int64_t v73; // x1
  Il2CppClass **v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4B12E62 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v25, v26);
    byte_4B12E62 = 1;
  }
  memset(&v87, 0, sizeof(v87));
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v28, v29);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v32.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  v34 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_34;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    (System_Collections_Generic_List_object__o *)PanelDataList_k__BackingField,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v87 = v86;
  while ( 1 )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v87,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v38 )
      break;
    current = v87.fields._current;
    if ( !v87.fields._current )
      sub_1BCAA3C(v38, v39);
    if ( !LOBYTE(v87.fields._current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v87.fields._current,
                                          -1,
                                          0LL);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v49 = this->fields.submarineData;
        if ( !v49 )
          sub_1BCAA3C(IsPanelSatisfyCommonReleaseCond, v42);
        PositionCalculator_k__BackingField = (float32x2_t *)v49->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_1BCAA3C(IsPanelSatisfyCommonReleaseCond, v42);
        z = z + 0.0;
        v32.n64_u64[0] = vadd_f32(
                           v32,
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
        if ( !v34 )
          sub_1BCAA3C(IsPanelSatisfyCommonReleaseCond, v42);
        items = v34->fields._items;
        v52 = Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__;
        ++v34->fields._version;
        if ( !items )
          sub_1BCAA3C(IsPanelSatisfyCommonReleaseCond, v42);
        size = v34->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            current,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v34->fields._size = size + 1;
          v54[4] = (Il2CppClass *)current;
          sub_1BCA784((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)current, v43, v44, v45, v46, v47, v48);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v87,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v34 )
    goto LABEL_34;
  if ( v34->fields._size <= 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v27;
  v55 = System_Collections_Generic_List_object___ToArray(
          v34,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                    this,
                                    (SubmarineMapPanelData_array *)v55,
                                    v56);
  v58 = this->fields.submarineData;
  if ( !v58 )
    goto LABEL_34;
  Settings_k__BackingField = v58->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_34;
  v60 = (Il2CppObject *)PanelDataList_k__BackingField;
  v57.n64_f32[0] = (float)v34->fields._size;
  v61 = vdiv_f32(v32, vdup_lane_s32(v57, 0)).n64_u64[0];
  v62 = z / v57.n64_f32[0];
  v63 = HIDWORD(v61);
  PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                    this,
                                    *(UnityEngine_Vector3_o *)&v61,
                                    1.0,
                                    Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                    v36);
  if ( !v27 )
    goto LABEL_34;
  v70 = v27->fields._items;
  v71 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v27->fields._version;
  if ( !v70 )
    goto LABEL_34;
  v72 = v27->fields._size;
  v73 = (int64_t)PanelDataList_k__BackingField;
  if ( (unsigned int)v72 >= v70->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      (Il2CppObject *)PanelDataList_k__BackingField,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &v70->obj.klass + v72;
    v27->fields._size = v72 + 1;
    v74[4] = (Il2CppClass *)v73;
    sub_1BCA784((PartyOrganizationUtility_o *)(v74 + 4), v73, v64, v65, v66, v67, v68, v69);
  }
  v81 = v27->fields._items;
  v82 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v27->fields._version;
  if ( !v81 )
LABEL_34:
    sub_1BCAA3C(PanelDataList_k__BackingField, v36);
  v83 = v27->fields._size;
  if ( (unsigned int)v83 >= v81->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v27,
      v60,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &v81->obj.klass + v83;
    v27->fields._size = v83 + 1;
    v84[4] = (Il2CppClass *)v60;
    sub_1BCA784((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)v60, v75, v76, v77, v78, v79, v80);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v27;
}


void __fastcall SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct SubmarineScanConfirmDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *klass; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  PartyOrganizationUtility_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v27; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  __int64 v29; // x1
  UnityEngine_Object_o *v30; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7

  if ( (byte_4B12E4C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12E4C = 1;
  }
  p_scanConfirmDialog = &this->fields.scanConfirmDialog;
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(scanConfirmDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)*p_scanConfirmDialog;
    if ( !*p_scanConfirmDialog )
      goto LABEL_25;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.scanConfirmDialog, 0LL, v10, v11, v12, v13, v14, v15);
  }
  p_selectScannerDialog = &this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(selectScannerDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)*p_selectScannerDialog;
    if ( !*p_selectScannerDialog )
      goto LABEL_25;
    v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    UnityEngine_Object__Destroy_70154244(v19, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selectScannerDialog, 0LL, v20, v21, v22, v23, v24, v25);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (PartyOrganizationUtility_o *)&this->fields.newScannerDialog;
  v27 = (UnityEngine_Object_o *)newScannerDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      UnityEngine_Object__Destroy_70154244(v30, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_1BCA784(p_newScannerDialog, 0LL, v31, v32, v33, v34, v35, v36);
      return;
    }
LABEL_25:
    sub_1BCAA3C(klass, v6);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v5; // x1

  if ( (byte_4B12E2F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12E2F = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(panelContainer, 0LL);
  UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
  SubmarineMapManager__DestroyDialog(this, v5);
  EventMapManagerBase__DestroyMapObjects((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__DoPerformancesByVariedCond(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x21
  System_Collections_Generic_IEnumerable_T__o *HideEnemyOccupiedPanelTasks; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_List_object__o *v38; // x20
  const MethodInfo *v39; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v42; // w1
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  int64_t v46; // x22
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  SchedulerTaskBase_TaskCallback_o *v50; // x23
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_Object_array *items; // x8
  _QWORD *v64; // x9
  __int64 size; // x10
  Il2CppClass **v66; // x0

  if ( (byte_4B12E33 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, finishCallback, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&SchedulerTaskNone_TypeInfo, v12, v13);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__, v16, v17);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass34_0_TypeInfo, v18, v19);
    byte_4B12E33 = 1;
  }
  v20 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass34_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_18;
  *(_QWORD *)(v20 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  *(_QWORD *)(v20 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)finishCallback, v29, v30, v31, v32, v33, v34);
  v38 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                       v35,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_18;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_18;
  v42 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v42,
                                                                                 v39);
  if ( !v38 )
    goto LABEL_18;
  System_Collections_Generic_List_object___AddRange(
    v38,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v46 = sub_1BCAA2C(SchedulerTaskNone_TypeInfo, v43, v44, v45);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v46, 0LL);
  v50 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v47, v48, v49);
  SchedulerTaskBase_TaskCallback___ctor(
    v50,
    (Il2CppObject *)v20,
    Method_SubmarineMapManager___c__DisplayClass34_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v46 )
    goto LABEL_18;
  *(_QWORD *)(v46 + 32) = v50;
  sub_1BCA784((PartyOrganizationUtility_o *)(v46 + 32), (int64_t)v50, v51, v52, v53, v54, v55, v56);
  items = v38->fields._items;
  v64 = Method_System_Collections_Generic_List_SchedulerTaskBase__Add__;
  ++v38->fields._version;
  if ( !items )
    goto LABEL_18;
  size = v38->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v38,
      (Il2CppObject *)v46,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &items->obj.klass + size;
    v38->fields._size = size + 1;
    v66[4] = (Il2CppClass *)v46;
    sub_1BCA784((PartyOrganizationUtility_o *)(v66 + 4), v46, v57, v58, v59, v60, v61, v62);
  }
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler;
  if ( !HideEnemyOccupiedPanelTasks )
LABEL_18:
    sub_1BCAA3C(HideEnemyOccupiedPanelTasks, v22);
  TaskScheduler__AddTask_42008244(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v38,
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
    sub_1BCAA3C(assetManager, v6);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.submarineData, 0LL, v2, v3, v4, v5, v6, v7);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, 0LL);
}


SrcSpotBasePrefab_o *__fastcall SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_GameObject_array *HasChild; // x0
  __int64 v7; // x1
  Il2CppObject *v8; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  int32_t HomeSpotId_k__BackingField; // w22
  int max_length; // w8
  UnityEngine_GameObject_array *v13; // x19
  unsigned int v14; // w23
  __int64 v15; // x1
  Il2CppObject *Component_object; // x21

  if ( (byte_4B12E45 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12E45 = 1;
  }
  HasChild = (UnityEngine_GameObject_array *)GameObjectExtensions__HasChild(this->fields.rootSpotP, 0LL);
  v8 = 0LL;
  if ( ((unsigned __int8)HasChild & 1) != 0 )
  {
    submarineData = this->fields.submarineData;
    if ( !submarineData
      || (Settings_k__BackingField = submarineData->fields._Settings_k__BackingField) == 0LL
      || (HomeSpotId_k__BackingField = Settings_k__BackingField->fields._HomeSpotId_k__BackingField,
          (HasChild = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL)) == 0LL) )
    {
LABEL_27:
      sub_1BCAA3C(HasChild, v7);
    }
    max_length = HasChild->max_length;
    v13 = HasChild;
    if ( max_length >= 1 )
    {
      v14 = 0;
      v8 = 0LL;
      while ( 1 )
      {
        if ( v14 >= max_length )
          sub_1BCAA44(HasChild, v7);
        HasChild = (UnityEngine_GameObject_array *)v13->m_Items[v14];
        if ( !HasChild )
          goto LABEL_27;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)HasChild,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
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
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
          HasChild = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(
                                                       (UnityEngine_Object_o *)v8,
                                                       0LL,
                                                       0LL);
          if ( ((unsigned __int8)HasChild & 1) != 0 )
            goto LABEL_21;
          if ( !v8 )
            goto LABEL_27;
          if ( SLODWORD(Component_object[9].klass) < SLODWORD(v8[9].klass) )
LABEL_21:
            v8 = Component_object;
        }
        max_length = v13->max_length;
        if ( (int)++v14 >= max_length )
          return (SrcSpotBasePrefab_o *)v8;
      }
    }
    return 0LL;
  }
  return (SrcSpotBasePrefab_o *)v8;
}


bool __fastcall SubmarineMapManager__HasSelfQuestAfterAction(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineMapManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t QuestId_k__BackingField; // w1
  System_Collections_Generic_List_object__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v10; // x1

  v3 = this;
  if ( (byte_4B12E32 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, method, v2);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__,
                                      v4,
                                      v5);
    byte_4B12E32 = 1;
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
        this = (SubmarineMapManager_o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(v3, v10),
        !HideEnemyOccupiedPanelTasks) )
  {
    sub_1BCAA3C(this, method);
  }
  System_Collections_Generic_List_object___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12E52 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___,
      method,
      v2);
    byte_4B12E52 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_2FBD648 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void __fastcall SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PartyOrganizationUtility_o *p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v5; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  __int64 v7; // x1
  UnityEngine_Object_o *klass; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B12E56 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12E56 = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = (PartyOrganizationUtility_o *)&this->fields.scanRangeNotificator;
  v5 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_scanRangeNotificator->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    UnityEngine_Object__Destroy_70154244(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_1BCA784(p_scanRangeNotificator, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12E50 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___, method, v2);
    byte_4B12E50 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_2FBD648 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12E54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___, method, v2);
    byte_4B12E54 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_object_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_2FBD648 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  SubmarineMapDataManager_o *v15; // x22
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  TaskScheduler_o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct TaskScheduler_o *taskScheduler; // x20
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Action_bool__o *v36; // x21
  __int64 v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  Il2CppObject *v48; // x20
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7

  if ( (byte_4B12E29 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v4, v5);
    sub_1BCA7E0(&SubmarineMapDataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&TaskScheduler_TypeInfo, v8, v9);
    byte_4B12E29 = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v15 = (SubmarineMapDataManager_o *)sub_1BCAA2C(SubmarineMapDataManager_TypeInfo, v12, v13, v14);
  SubmarineMapDataManager___ctor(v15, mapInfo, warInfo, 0LL);
  this->fields.submarineData = v15;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.submarineData, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v25 = (TaskScheduler_o *)sub_1BCAA2C(TaskScheduler_TypeInfo, v22, v23, v24);
  TaskScheduler___ctor(v25, 0LL);
  this->fields.taskScheduler = v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.taskScheduler, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  taskScheduler = this->fields.taskScheduler;
  v36 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v33, v34, v35);
  System_Action_bool____ctor(
    v36,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
    0LL);
  if ( !taskScheduler )
    sub_1BCAA3C(v37, v38);
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = v36;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    (int64_t)v36,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v48 = (Il2CppObject *)sub_1BCAA2C(SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v45, v46, v47);
  System_Object___ctor(v48, 0LL);
  this->fields.playingScanVoiceData = (struct SubmarineMapManager_PlayingScanVoiceData_o *)v48;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.playingScanVoiceData,
    (int64_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
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
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Action_o *v30; // x19
  __int64 v31; // x1

  if ( (byte_4B12E2A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, finishCallback, method);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__, v8, v9);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass19_0_TypeInfo, v10, v11);
    byte_4B12E2A = 1;
  }
  v12 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass19_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)finishCallback, v21, v22, v23, v24, v25, v26);
  v30 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v27, v28, v29);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v31);
  AtlasManager__LoadUISkin(v30, 5, 1, 0LL);
}


void __fastcall SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  SubmarineMapManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  __int64 v33; // x3
  struct SubmarineMapAssetManager_o *v34; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  __int64 v43; // x2
  __int64 v44; // x3
  struct SubmarineMapAssetManager_o *v45; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_T__o *v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x2
  __int64 v55; // x3
  struct SubmarineMapAssetManager_o *v56; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_T__o *v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7

  v4 = this;
  if ( (byte_4B12E4D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ComponentPool_CommonEffectComponent__Preload__, method, v2);
    sub_1BCA7E0(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__, v5, v6);
    sub_1BCA7E0(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__, v7, v8);
    sub_1BCA7E0(&Method_ComponentPool_CommonEffectComponent___ctor__, v9, v10);
    sub_1BCA7E0(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__, v11, v12);
    sub_1BCA7E0(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__, v13, v14);
    sub_1BCA7E0(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v15, v16);
    sub_1BCA7E0(&ComponentPool_CommonEffectComponent__TypeInfo, v17, v18);
    sub_1BCA7E0(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo, v19, v20);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(
                                      &ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo,
                                      v21,
                                      v22);
    byte_4B12E4D = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v25 = (ComponentPool_T__o *)sub_1BCAA2C(ComponentPool_CommonEffectComponent__TypeInfo, method, v2, v3);
  ComponentPool_object____ctor(
    v25,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_318ECF8 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v4->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v25;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.effectScanedPanelObjPool,
    (int64_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this = (SubmarineMapManager_o *)v4->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_object___Preload(
    (ComponentPool_T__o *)this,
    9,
    (const MethodInfo_318EDBC *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v34 = v4->fields.assetManager;
  if ( !v34 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v34->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v36 = (ComponentPool_T__o *)sub_1BCAA2C(
                                ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo,
                                method,
                                v32,
                                v33);
  ComponentPool_object____ctor(
    v36,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_318ECF8 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v4->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v36;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.effectScanObstaclePanelObjPool,
    (int64_t)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = v4->fields.assetManager;
  if ( !v45 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v45->fields._EffectScannablePanelPrafab_k__BackingField;
  v47 = (ComponentPool_T__o *)sub_1BCAA2C(
                                ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo,
                                method,
                                v43,
                                v44);
  ComponentPool_object____ctor(
    v47,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_318ECF8 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v4->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v47;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.effectScannablePanelObjPool,
    (int64_t)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  this = (SubmarineMapManager_o *)v4->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_object___Preload(
          (ComponentPool_T__o *)this,
          50,
          (const MethodInfo_318EDBC *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v56 = v4->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_1BCAA3C(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v56->fields._EffectSelectedPanelPrefab_k__BackingField;
  v58 = (ComponentPool_T__o *)sub_1BCAA2C(
                                ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo,
                                method,
                                v54,
                                v55);
  ComponentPool_object____ctor(
    v58,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_318ECF8 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v4->fields.effectSelectedPanelObjPool = (struct ComponentPool_SubmarineEffectSelectedPanelComponent__o *)v58;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.effectSelectedPanelObjPool,
    (int64_t)v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
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
    sub_1BCAA3C(submarineData, finishCallback);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x21
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
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Action_o *v28; // x20
  const MethodInfo *v29; // x2

  if ( (byte_4B12E2D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, finishCallback, method);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__, v6, v7);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass25_0_TypeInfo, v8, v9);
    byte_4B12E2D = 1;
  }
  v10 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass25_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BCAA3C(v11, v12);
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = finishCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)finishCallback, v19, v20, v21, v22, v23, v24);
  v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v25, v26, v27);
  System_Action___ctor(
    v28,
    (Il2CppObject *)v10,
    Method_SubmarineMapManager___c__DisplayClass25_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v28, v29);
}


void __fastcall SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  struct MapControl_WarInfo_o *warInfo; // x8
  QuestTree_o *v13; // x20
  int32_t warId; // w21
  System_Action_o *v15; // x22
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_4B12E3B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonTemplate_QuestTree__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SubmarineMapManager__OnEndScan_b__42_0__, v6, v7);
    byte_4B12E3B = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (v13 = (QuestTree_o *)Instance,
        warId = warInfo->fields.warId,
        v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11),
        System_Action___ctor(v15, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__42_0__, 0LL),
        !v13) )
  {
    sub_1BCAA3C(Instance, v9);
  }
  v16 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v13, warId, v15, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4B12E2E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, v4, v5);
    byte_4B12E2E = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v9 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v6, v7, v8);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_0__, 0LL);
    ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._23_OnBeforeQuestAfterAction.method)(
      this,
      v9,
      this->klass->vtable._24_OnAfterQuestAfterAction.methodPtr);
  }
  else
  {
    SubmarineMapManager__HideScannableEffect(this, v6);
    SubmarineMapManager__ShowScannableEffect(this, v10);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x20
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x21
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  const MethodInfo *v33; // x1
  clsQuestCheck_o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  NetworkManager_ResultCallbackFunc_o *v38; // x22
  __int64 v39; // x1
  EventScanPanelMapRequest_o *v40; // x22
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_4B12E36 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, *(_QWORD *)&scanId, panelData);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__, v13, v14);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo, v15, v16);
    byte_4B12E36 = 1;
  }
  v17 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&scanId, panelData, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_13;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 32) = panelData;
  v26 = v17 + 32;
  *(_DWORD *)(v17 + 24) = scanId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)panelData, v27, v28, v29, v30, v31, v32);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v33);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !this->fields.submarineData )
    goto LABEL_13;
  v34 = (clsQuestCheck_o *)Instance;
  Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v34 )
    goto LABEL_13;
  clsQuestCheck__SaveEventQuestIdListPlayable(v34, (int32_t)Instance, 0LL);
  v38 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v35, v36, v37);
  NetworkManager_ResultCallbackFunc___ctor(
    v38,
    (Il2CppObject *)v17,
    Method_SubmarineMapManager___c__DisplayClass37_0__OnScanDecided_b__0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
  Instance = NetworkManager__getRequest_object_(
               v38,
               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v40 = (EventScanPanelMapRequest_o *)Instance,
        Instance = (Il2CppObject *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL),
        (mapInfo = this->fields.mapInfo) == 0LL)
    || !*(_QWORD *)v26
    || !v40 )
  {
LABEL_13:
    sub_1BCAA3C(Instance, v19);
  }
  EventScanPanelMapRequest__beginRequest(
    v40,
    (int32_t)Instance,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v26 + 24LL),
    *(_DWORD *)(v17 + 24),
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__OnScanPanelRequestFinished(
        SubmarineMapManager_o *this,
        System_String_o *result,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x3
  __int64 v31; // x1
  Il2CppObject *v32; // x19
  EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  __int64 v34; // x1
  int64_t v35; // x2
  __int64 v36; // x3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_String_o *value; // x8
  EventSaveData_o *v42; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v45; // x10
  __int64 v46; // x9
  TerminalPramsManager_c *v47; // x0
  EventSaveData_o *v48; // x20
  __int64 v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  TerminalPramsManager_c *v56; // x0
  PartyOrganizationUtility_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v58; // x0
  System_String_array *ValueByArray; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  int max_length; // w8
  System_String_o **v63; // x9
  System_String_o *v64; // x21
  System_String_o **v65; // x9
  System_String_o *v66; // x20
  void **v67; // x8
  System_String_o *v68; // x22
  TerminalPramsManager_c *v69; // x0
  struct EventSaveData_o *v70; // x23
  __int64 v71; // x1
  System_String_o *v72; // x24
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  EventSaveData_c *v79; // x8
  int64_t namespaze; // x19
  TerminalPramsManager_c *v81; // x0
  PartyOrganizationUtility_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v83; // x2
  System_String_c *v84; // x8
  int v85; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B12E37 & 1) == 0 )
  {
    sub_1BCA7E0(&EventSaveData_TypeInfo, result, *(_QWORD *)&scanId);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___, v9, v10);
    sub_1BCA7E0(&JsonManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v15, v16);
    sub_1BCA7E0(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_6725/*"False"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v27, v28);
    byte_4B12E37 = 1;
  }
  v85 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v29);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v30);
  v32 = (Il2CppObject *)System_String__Concat_62412480(
                          (System_String_o *)StringLiteral_15978/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16236/*"]"*/,
                          0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v31);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_object_(
                                                                      v32,
                                                                      (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_70;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v42 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
LABEL_71:
    sub_1BCAA44(BeforeEventSubmarineSaveData_k__BackingField, v34);
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_70;
  name = klass->_1.name;
  if ( name )
  {
    v45 = *((_QWORD *)name + 3);
    if ( v45 )
    {
      if ( !(_DWORD)v45 )
        goto LABEL_71;
      v46 = *((_QWORD *)name + 4);
      if ( v46 )
      {
        v85 = *(_QWORD *)(v46 + 32);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v34);
        if ( !byte_4B12EBB )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v34, v35);
          byte_4B12EBB = 1;
        }
        v47 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v34);
          v47 = TerminalPramsManager_TypeInfo;
        }
        if ( !v47->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v48 = (EventSaveData_o *)sub_1BCAA2C(EventSaveData_TypeInfo, v34, v35, v36);
          EventSaveData___ctor(v48, 0LL);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v49);
          if ( !byte_4B12EBC )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v49, v50);
            byte_4B12EBC = 1;
          }
          v56 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v49);
            v56 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (PartyOrganizationUtility_o *)&v56->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (PartyOrganizationUtility_c *)v48;
          sub_1BCA784(p_BeforeEventSubmarineSaveData_k__BackingField, (int64_t)v48, v50, v51, v52, v53, v54, v55);
          v47 = TerminalPramsManager_TypeInfo;
        }
        if ( !v47->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v47, v34);
        if ( !byte_4B12EBB )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v34, v35);
          byte_4B12EBB = 1;
        }
        v58 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v34);
          v58 = TerminalPramsManager_TypeInfo;
        }
        BeforeEventSubmarineSaveData_k__BackingField = v58->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( BeforeEventSubmarineSaveData_k__BackingField )
        {
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v63 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v63 = (System_String_o **)&StringLiteral_1209/*"0"*/;
            v64 = *v63;
            v65 = max_length <= 2 ? (System_String_o **)&StringLiteral_1209/*"0"*/ : &ValueByArray->m_Items[2];
            v66 = *v65;
            v67 = max_length <= 3 ? &StringLiteral_6725/*"False"*/ : (void **)&ValueByArray->m_Items[3];
          }
          else
          {
            v66 = (System_String_o *)StringLiteral_1209/*"0"*/;
            v67 = &StringLiteral_6725/*"False"*/;
            v64 = (System_String_o *)StringLiteral_1209/*"0"*/;
          }
          v68 = (System_String_o *)*v67;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v60);
          if ( !byte_4B12EBB )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v60, v61);
            byte_4B12EBB = 1;
          }
          v69 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v60);
            v69 = TerminalPramsManager_TypeInfo;
          }
          v70 = v69->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v72 = System_Int32__ToString((int32_t)&v85, 0LL);
          if ( !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo, v71);
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_37809356(
                                                                              v72,
                                                                              v64,
                                                                              v66,
                                                                              v68,
                                                                              0LL);
          if ( v70 )
          {
            v70->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v70->fields.value,
              (int64_t)BeforeEventSubmarineSaveData_k__BackingField,
              v73,
              v74,
              v75,
              v76,
              v77,
              v78);
            value = v42->fields.value;
            goto LABEL_56;
          }
        }
LABEL_70:
        sub_1BCAA3C(BeforeEventSubmarineSaveData_k__BackingField, v34);
      }
    }
  }
LABEL_56:
  if ( !(_DWORD)value )
    goto LABEL_71;
  v79 = v42[1].klass;
  if ( !v79 )
    goto LABEL_70;
  namespaze = (int64_t)v79->_1.namespaze;
  v81 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v34);
    v81 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (PartyOrganizationUtility_o *)&v81->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = (PartyOrganizationUtility_c *)namespaze;
  sub_1BCA784(p_mResultEventPanelRewardInfos, namespaze, v35, v36, v37, v38, v39, v40);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v34);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v34, v83);
    byte_4B10F83 = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v34);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v84 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v84 )
    goto LABEL_70;
  BeforeEventSubmarineSaveData_k__BackingField = *(EventSaveData_o **)&v84->_2.instance_size;
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
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
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v29; // x4
  SchedulerTaskBase_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  SchedulerTaskBase_TaskCallback_o *v34; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
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
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  __int64 v54; // x0

  if ( (byte_4B12E35 & 1) == 0 )
  {
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, *(_QWORD *)&scanId, panelData);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__, v9, v10);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo, v11, v12);
    byte_4B12E35 = 1;
  }
  v13 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass36_0_TypeInfo, *(_QWORD *)&scanId, panelData, method);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_12;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 32) = panelData;
  *(_DWORD *)(v13 + 24) = scanId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)panelData, v22, v23, v24, v25, v26, v27);
  klass = this->klass;
  if ( *(int *)(v13 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v13 + 40) = 0;
    v30 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v13 + 24),
            *(SubmarineMapPanelData_o **)(v13 + 32),
            (bool *)(v13 + 40),
            v29);
    v34 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v31, v32, v33);
    SchedulerTaskBase_TaskCallback___ctor(
      v34,
      (Il2CppObject *)v13,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__0__,
      0LL);
    if ( v30 )
    {
      v30->fields.EndCallback = v34;
      sub_1BCA784((PartyOrganizationUtility_o *)&v30->fields.EndCallback, (int64_t)v34, v35, v36, v37, v38, v39, v40);
      taskScheduler = this->fields.taskScheduler;
      v14 = sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v14 )
      {
        v42 = v14;
        v43 = sub_1BCA91C(v30, *(_QWORD *)(*(_QWORD *)v14 + 64LL));
        if ( !v43 )
        {
          v54 = sub_1BCAA60();
          sub_1BCA908(v54, 0LL);
        }
        if ( !*(_DWORD *)(v42 + 24) )
          sub_1BCAA44(v43, v44);
        *(_QWORD *)(v42 + 32) = v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v42 + 32), (int64_t)v30, v45, v46, v47, v48, v49, v50);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v42, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_1BCAA3C(v14, v15);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v51);
  SubmarineMapManager__ShowScannableEffect(this, v52);
  SubmarineMapManager__HideSelectedPanelEffect(this, v53);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x23
  __int64 v14; // x0
  __int64 v15; // x1
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
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_bool__o *v32; // x22
  const MethodInfo *v33; // x4

  if ( (byte_4B12E4B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, *(_QWORD *)&scanId, isShowDialogUpper);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__, v9, v10);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass68_0_TypeInfo, v11, v12);
    byte_4B12E4B = 1;
  }
  v13 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass68_0_TypeInfo, *(_QWORD *)&scanId, isShowDialogUpper, callback);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)callback, v22, v23, v24, v25, v26, v27);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v32 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v29, v30, v31);
  System_Action_bool____ctor(
    v32,
    (Il2CppObject *)v13,
    Method_SubmarineMapManager___c__DisplayClass68_0__OpenScanConfirmDialog_b__0__,
    0LL);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_1BCAA3C(v14, v15);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v32, v33);
}


void __fastcall SubmarineMapManager__OpenSelectScannerDialog(
        SubmarineMapManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  SubmarineMapDataManager_o *submarineData; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  int32_t EventId; // w22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Action_int__o *v34; // x23
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x21
  const MethodInfo *v39; // x4

  if ( (byte_4B12E49 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, callback, method);
    sub_1BCA7E0(&System_Action_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v8, v9);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__, v10, v11);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass66_0_TypeInfo, v12, v13);
    byte_4B12E49 = 1;
  }
  v14 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass66_0_TypeInfo, callback, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_7;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)callback, v23, v24, v25, v26, v27, v28);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (selectScannerDialog = this->fields.selectScannerDialog,
        EventId = SubmarineMapDataManager__get_EventId(submarineData, 0LL),
        v34 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v31, v32, v33),
        System_Action_int____ctor(
          v34,
          (Il2CppObject *)v14,
          Method_SubmarineMapManager___c__DisplayClass66_0__OpenSelectScannerDialog_b__0__,
          0LL),
        v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37),
        System_Action___ctor(v38, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL),
        !selectScannerDialog) )
  {
LABEL_7:
    sub_1BCAA3C(submarineData, v16);
  }
  SubmarineSelectScannerDialog__Open(selectScannerDialog, EventId, v34, v38, v39);
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
    sub_1BCA784(p_assetManager, 0LL, v5, v6, v7, v8, v9, v10);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
  EventMapManagerBase__ReleaseAssets((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ComponentPool_T__o *effectScanedPanelObjPool; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  ComponentPool_T__o *effectScannablePanelObjPool; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  ComponentPool_T__o *v22; // x0
  PartyOrganizationUtility_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B12E4E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__, method, v2);
    sub_1BCA7E0(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__, v4, v5);
    sub_1BCA7E0(&Method_ComponentPool_CommonEffectComponent__Finish__, v6, v7);
    byte_4B12E4E = 1;
  }
  effectScanedPanelObjPool = (ComponentPool_T__o *)this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScanedPanelObjPool,
      (const MethodInfo_318F598 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.effectScanedPanelObjPool, 0LL, v9, v10, v11, v12, v13, v14);
  }
  effectScannablePanelObjPool = (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_object___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_318F598 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.effectScannablePanelObjPool,
      0LL,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (PartyOrganizationUtility_o *)&this->fields.effectScanObstaclePanelObjPool;
  v22 = (ComponentPool_T__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_object___Finish(
      v22,
      (const MethodInfo_318F598 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_1BCA784(p_effectScanObstaclePanelObjPool, 0LL, v25, v26, v27, v28, v29, v30);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_2FBD45C *method)
{
  bool hasValue; // w19
  bool v8; // w20
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  int v16; // s0
  UnityEngine_Component_o *v19; // x21
  UnityEngine_Transform_o *v20; // x22
  __int64 v21; // x1
  const MethodInfo_36C2D44 *v22; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v26; // s0
  float v27; // s1
  float v28; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  const MethodInfo_36C2D44 *v30; // x2
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
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_HasValue__, pool, panelData);
    sub_1BCA7E0(&Method_System_Nullable_Vector3__get_Value__, v12, v13);
    if ( !method->rgctx_data )
      sub_1C1C718(method);
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
  *(UnityEngine_Vector3_o *)&v16 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                     (SubmarinePanelPositionCalculator_o *)effectContainer,
                                     panelData->fields._HIndex_k__BackingField,
                                     panelData->fields._VIndex_k__BackingField,
                                     0LL);
  if ( !pool )
    goto LABEL_21;
  effectContainer = (UnityEngine_GameObject_o *)ComponentPool_object___Rent_51966152(
                                                  pool,
                                                  transform,
                                                  *(UnityEngine_Vector3_o *)&v16,
                                                  (const MethodInfo_318F0C8 *)method->rgctx_data->_1_ComponentPool_T__Rent);
  if ( !effectContainer )
    goto LABEL_21;
  v19 = (UnityEngine_Component_o *)effectContainer;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)effectContainer,
                                                  0LL);
  if ( !effectContainer )
    goto LABEL_21;
  v20 = (UnityEngine_Transform_o *)effectContainer;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)effectContainer, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( v8 )
  {
    *(_QWORD *)&v39.fields.value.fields.y = Method_System_Nullable_Vector3__get_Value__;
    *(_QWORD *)&v39.fields.hasValue = &v38;
    *(UnityEngine_Vector3_o *)&v26 = System_Nullable_Vector3___get_Value(v39, v22);
    hasValue = v37.fields.hasValue;
  }
  else
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v21, v22);
      byte_4B109C1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v26 = static_fields->zeroVector.fields.x;
    v27 = static_fields->zeroVector.fields.y;
    v28 = static_fields->zeroVector.fields.z;
  }
  v42.fields.z = z + v28;
  v42.fields.y = y + v27;
  v42.fields.x = x + v26;
  UnityEngine_Transform__set_localPosition(v20, v42, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v19, 0LL);
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
    sub_1BCAA3C(effectContainer, pool);
  }
  if ( !byte_4B109C6 )
  {
    effectContainer = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, pool, v30);
    byte_4B109C6 = 1;
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
        const MethodInfo_2FBD648 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v7; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v9; // x21
  unsigned int v10; // w22

  if ( !method->rgctx_data )
    sub_1C1C718(method);
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
        sub_1BCAA44(Children, v7);
      Children = (UnityEngine_GameObject_array *)v9->m_Items[v10];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)Children,
                                                   (const MethodInfo_2F626D0 *)method->rgctx_data->_1_UnityEngine_GameObject_GetComponent_T_);
      if ( !pool )
        break;
      ComponentPool_object___Return(
        pool,
        &Children->obj,
        (const MethodInfo_318F1A0 *)method->rgctx_data->_3_ComponentPool_T__Return);
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_11:
    sub_1BCAA3C(Children, v7);
  }
}


void __fastcall SubmarineMapManager__RevealAvailableSpots(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  System_Collections_Generic_List_SchedulerTaskBase__o *RevealEachSpotsTasks; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v24; // x1
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  int64_t v28; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  _QWORD *v31; // x22
  System_Delegate_o *v32; // x23
  SchedulerTaskBase_TaskCallback_o *v33; // x24
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
  System_Collections_Generic_List_SchedulerTaskBase__o *v44; // x21
  __int64 v45; // x0
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  __int64 v53; // x0

  if ( (byte_4B12E3A & 1) == 0 )
  {
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, finishCallback, method);
    sub_1BCA7E0(&SchedulerTaskNone_TypeInfo, v6, v7);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__, v10, v11);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo, v12, v13);
    byte_4B12E3A = 1;
  }
  v14 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass41_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = finishCallback,
        sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)finishCallback, v17, v18, v19, v20, v21, v22),
        taskScheduler = this->fields.taskScheduler,
        RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v24),
        !taskScheduler)
    || (TaskScheduler__AddTask_42008244(taskScheduler, 0, RevealEachSpotsTasks, 0LL),
        v28 = sub_1BCAA2C(SchedulerTaskNone_TypeInfo, v25, v26, v27),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v28, 0LL),
        !v28) )
  {
LABEL_16:
    sub_1BCAA3C(RevealEachSpotsTasks, v16);
  }
  v31 = (_QWORD *)(v28 + 32);
  v32 = *(System_Delegate_o **)(v28 + 32);
  v33 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v16, v29, v30);
  SchedulerTaskBase_TaskCallback___ctor(
    v33,
    (Il2CppObject *)v14,
    Method_SubmarineMapManager___c__DisplayClass41_0__RevealAvailableSpots_b__0__,
    0LL);
  v34 = System_Delegate__Combine(v32, (System_Delegate_o *)v33, 0LL);
  v41 = (int64_t)v34;
  if ( v34 )
  {
    v42 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v34->klass == SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *v31 = v34;
      if ( (SchedulerTaskBase_TaskCallback_c *)v34->klass == v42 )
        goto LABEL_11;
    }
    sub_1BCACFC(v34);
  }
  *v31 = v41;
LABEL_11:
  sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 32), v41, v35, v36, v37, v38, v39, v40);
  v43 = this->fields.taskScheduler;
  RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_1BCA888(
                                                                                   SchedulerTaskBase___TypeInfo,
                                                                                   1LL);
  if ( !RevealEachSpotsTasks )
    goto LABEL_16;
  v44 = RevealEachSpotsTasks;
  v45 = sub_1BCA91C(v28, RevealEachSpotsTasks->klass->_1.element_class);
  if ( !v45 )
  {
    v53 = sub_1BCAA60();
    sub_1BCA908(v53, 0LL);
  }
  if ( !v44->fields._size )
    sub_1BCAA44(v45, v46);
  v44->fields._syncRoot = (Il2CppObject *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v44->fields._syncRoot, v28, v47, v48, v49, v50, v51, v52);
  if ( !v43 )
    goto LABEL_16;
  TaskScheduler__AddTask(v43, 0, (SchedulerTaskBase_array *)v44, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gridLine; // x20
  SubmarineMapDataManager_o *submarineData; // x0
  __int64 v8; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *GridTexture_k__BackingField; // x20
  const MethodInfo *v11; // x3
  struct SubmarineMapDataManager_o *v12; // x8
  struct SubmarineMapAssetManager_o *v13; // x9
  SubmarineMapDataManager_o *v14; // x20
  UIWidget_o *v15; // x21
  int32_t v16; // w0
  struct SubmarineMapDataManager_o *v17; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_4B12E42 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UITexture___, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    byte_4B12E42 = 1;
  }
  gridLine = (UnityEngine_Object_o *)this->fields.gridLine;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  submarineData = (SubmarineMapDataManager_o *)UnityEngine_Object__op_Equality(gridLine, 0LL, 0LL);
  if ( ((unsigned __int8)submarineData & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
    {
      GridTexture_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._GridTexture_k__BackingField;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Equality(GridTexture_k__BackingField, 0LL, 0LL) )
        return;
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, 0LL);
        v12 = this->fields.submarineData;
        if ( v12 )
        {
          v13 = this->fields.assetManager;
          if ( v13 )
          {
            submarineData = (SubmarineMapDataManager_o *)GridLineTextureUtil__CreateWholeGridTexture(
                                                           (System_Int32_array *)submarineData,
                                                           v12->fields._PositionCalculator_k__BackingField,
                                                           v13->fields._GridTexture_k__BackingField,
                                                           v11);
            if ( this->fields.gridLine )
            {
              v14 = submarineData;
              submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__GetComponent_object_(
                                                             this->fields.gridLine,
                                                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
              if ( v14 )
              {
                v15 = (UIWidget_o *)submarineData;
                submarineData = (SubmarineMapDataManager_o *)((__int64 (__fastcall *)(SubmarineMapDataManager_o *, const char *))v14->klass[1]._1.gc_desc)(
                                                               v14,
                                                               v14->klass[1]._1.name);
                if ( v15 )
                {
                  UIWidget__set_width(v15, (int32_t)submarineData, 0LL);
                  v16 = (*(__int64 (__fastcall **)(SubmarineMapDataManager_o *, void *))&v14->klass[1]._1.byval_arg.bits)(
                          v14,
                          v14->klass[1]._1.this_arg.data);
                  UIWidget__set_height(v15, v16, 0LL);
                  ((void (__fastcall *)(UIWidget_o *, SubmarineMapDataManager_o *, Il2CppMethodPointer))v15->klass->vtable._27_set_mainTexture.method)(
                    v15,
                    v14,
                    v15->klass->vtable._28_get_shader.methodPtr);
                  submarineData = (SubmarineMapDataManager_o *)this->fields.gridLine;
                  if ( submarineData )
                  {
                    submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)submarineData,
                                                                   0LL);
                    v17 = this->fields.submarineData;
                    if ( v17 )
                    {
                      Settings_k__BackingField = v17->fields._Settings_k__BackingField;
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
    sub_1BCAA3C(submarineData, v8);
  }
}


void __fastcall SubmarineMapManager__SetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
}


void __fastcall SubmarineMapManager__ShowScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SubmarineMapManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v16; // 0:x3.16
  System_Nullable_Vector3__o v17; // 0:x5.16

  v3 = this;
  if ( (byte_4B12E51 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v8, v9);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___,
                                      v10,
                                      v11);
    byte_4B12E51 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !v3->fields.isShowScanObstacleEffect )
  {
    submarineData = v3->fields.submarineData;
    v3->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1BCAA3C(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v13 )
        break;
      if ( !v15.fields._current )
        sub_1BCAA3C(v13, v14);
      if ( BYTE1(v15.fields._current[3].monitor) )
      {
        *(_QWORD *)&v16.fields.hasValue = 0LL;
        *(_QWORD *)&v16.fields.value.fields.y = 0LL;
        *(_QWORD *)&v17.fields.hasValue = 0LL;
        *(_QWORD *)&v17.fields.value.fields.y = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v3,
          (ComponentPool_T__o *)v3->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v15.fields._current,
          v16,
          v17,
          (const MethodInfo_2FBD45C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  void *Instance; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  __int64 v18; // x1
  Il2CppObject *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v20; // x1
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v23; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B12E55 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPanelScanMaster___, *(_QWORD *)&scanId, basePanelData);
    sub_1BCA7E0(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject____76924592, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B12E55 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               scanId,
               (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_18:
    sub_1BCAA3C(Instance, v16);
  ScanRangeNotificatorPrefab = (Il2CppObject *)SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                                 this->fields.assetManager,
                                                 *((_DWORD *)Instance + 14),
                                                 v17);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0LL, 0LL) )
  {
    SubmarineMapManager__HideScanRange(this, v20);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
      v23 = UnityEngine_Object__Instantiate_object__49903816(
              ScanRangeNotificatorPrefab,
              transform,
              (const MethodInfo_2F978C8 *)Method_UnityEngine_Object_Instantiate_GameObject____76924592);
      this->fields.scanRangeNotificator = (struct UnityEngine_GameObject_o *)v23;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_1BCA784((PartyOrganizationUtility_o *)p_scanRangeNotificator, (int64_t)v23, v25, v26, v27, v28, v29, v30);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float y; // s8
  float x; // s10
  float v31; // s9
  int v32; // w23
  float v33; // s11
  int i; // w24
  float v35; // s0
  float v36; // s1
  float v37; // s2
  float v38; // s3
  float v39; // s2
  float v40; // s0
  struct SubmarineMapDataManager_o *v41; // x8
  struct SubmarineSettingsManager_o *v42; // x8
  float v43; // s12
  float v44; // s13
  __int64 v45; // x2
  __int64 v46; // x3
  UnityEngine_Rect_array *v47; // x21
  System_Collections_Generic_List_Rect__o *v48; // x22
  __int64 v49; // x2
  int m_CancellationTokenSource; // w8
  SubmarineMapManager_o *v51; // x21
  unsigned int v52; // w24
  __int64 v53; // x28
  struct SubmarineMapDataManager_o *v54; // x8
  struct SubmarineSettingsManager_o *v55; // x8
  float32x2_t v56; // d2
  float32x2_t v57; // d0
  struct UnityEngine_Rect_array *items; // x9
  _QWORD *v59; // x8
  __int64 size; // x10
  unsigned __int64 v61; // d0
  float32x2_t *v62; // x9
  int v63; // s1
  unsigned __int32 v64; // s3
  Submarine2DUILocationInfo_o *v65; // x22
  UnityEngine_Rect_array *Rects; // x0
  __int64 v67; // x1
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v69; // x22
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  float m_XMin; // s8
  float m_YMin; // s9
  float m_Width; // s10
  float m_Height; // s11
  SubmarineScanDialogUpsideLocationInfo_o *v77; // x22
  UnityEngine_Rect_array *v78; // x0
  __int64 v79; // x1
  MapCamera_o *v80; // x23
  UnityEngine_Rect_array *v81; // x22
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  float v85; // s0
  float v86; // s1
  float v87; // s2
  float v88; // s3
  UnityEngine_Vector2_o v89; // kr00_8
  struct System_Threading_CancellationTokenSource_o *v90; // x8
  float v91; // s3
  __int64 v92; // x8
  struct MapControl_WarInfo_o **p_warInfo; // x9
  float v94; // t1
  float v95; // s0
  struct SubmarineMapDataManager_o *v96; // x8
  struct SubmarineSettingsManager_o *v97; // x8
  SubmarinScanDialogUpSideWeakLocationInfo_o *v99; // x22
  UnityEngine_Rect_array *v100; // x0
  __int64 v101; // x1
  MapCamera_o *v102; // x23
  UnityEngine_Rect_array *v103; // x22
  int32_t failedReason; // [xsp+3Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_4B12E58 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rect__Add__, *(_QWORD *)&scanId, panelData);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rect__ToArray__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Rect___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_Rect__TypeInfo, v13, v14);
    sub_1BCA7E0(&MapCameraViewAdjusterUtil_TypeInfo, v15, v16);
    sub_1BCA7E0(&UnityEngine_Rect___TypeInfo, v17, v18);
    sub_1BCA7E0(&float___TypeInfo, v19, v20);
    sub_1BCA7E0(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v21, v22);
    sub_1BCA7E0(&Submarine2DUILocationInfo_TypeInfo, v23, v24);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(&SubmarineScanDialogUpsideLocationInfo_TypeInfo, v25, v26);
    byte_4B12E58 = 1;
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
      v31 = 0.0;
      v32 = -2;
      v33 = 0.0;
      do
      {
        for ( i = -2; i != 3; ++i )
        {
          this = (SubmarineMapManager_o *)v8->fields.submarineData;
          if ( !this )
            goto LABEL_73;
          this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelByIndices(
                                            (SubmarineMapDataManager_o *)this,
                                            panelData->fields._HIndex_k__BackingField + v32,
                                            i + panelData->fields._VIndex_k__BackingField,
                                            0LL);
          if ( this )
          {
            v35 = *((float *)&this->fields.m_CancellationTokenSource + 1);
            v36 = *(float *)&this->fields.mapInfo;
            v37 = x + v33;
            v38 = y + v31;
            if ( x >= v35 )
              x = *((float *)&this->fields.m_CancellationTokenSource + 1);
            v39 = x + (float)(v37 - x);
            if ( v39 > v35 )
              v35 = v39;
            if ( y >= v36 )
              y = *(float *)&this->fields.mapInfo;
            v33 = v35 - x;
            v40 = y + (float)(v38 - y);
            if ( v40 <= v36 )
              v40 = *(float *)&this->fields.mapInfo;
            v31 = v40 - y;
          }
        }
        ++v32;
      }
      while ( v32 != 3 );
      v41 = v8->fields.submarineData;
      if ( v41 )
      {
        v42 = v41->fields._Settings_k__BackingField;
        if ( v42 )
        {
          v43 = v42->fields._PanelUnitSize_k__BackingField.fields.x;
          v44 = v42->fields._PanelUnitSize_k__BackingField.fields.y;
          this = (SubmarineMapManager_o *)sub_1BCA888(UnityEngine_Rect___TypeInfo, 1LL);
          if ( this )
          {
            v47 = (UnityEngine_Rect_array *)this;
            if ( !LODWORD(this->fields.m_CancellationTokenSource) )
              goto LABEL_74;
            *(float *)&this->fields.mapInfo = x - v43;
            *((float *)&this->fields.mapInfo + 1) = y - v44;
            *(float *)&this->fields.warInfo = (float)(v43
                                                    + (float)((float)(x - v43)
                                                            + (float)((float)(x + v33) - (float)(x - v43))))
                                            - (float)(x - v43);
            *((float *)&this->fields.warInfo + 1) = (float)(v44
                                                          + (float)((float)(y - v44)
                                                                  + (float)((float)(y + v31) - (float)(y - v44))))
                                                  - (float)(y - v44);
            goto LABEL_45;
          }
        }
      }
    }
LABEL_73:
    sub_1BCAA3C(this, *(_QWORD *)&scanId);
  }
  v48 = (System_Collections_Generic_List_Rect__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_List_Rect__TypeInfo,
                                                     *(_QWORD *)&scanId,
                                                     panelData,
                                                     isShowDialogUpper);
  System_Collections_Generic_List_Rect____ctor(
    v48,
    (const MethodInfo_35B2170 *)Method_System_Collections_Generic_List_Rect___ctor__);
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
  v51 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v52 = 0;
    while ( v52 < m_CancellationTokenSource )
    {
      v53 = *((_QWORD *)&v51->fields.mapInfo + (int)v52);
      if ( !byte_4B109C1 )
      {
        this = (SubmarineMapManager_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&scanId, v49);
        byte_4B109C1 = 1;
      }
      v54 = v8->fields.submarineData;
      if ( !v54 )
        goto LABEL_73;
      v55 = v54->fields._Settings_k__BackingField;
      if ( !v55 )
        goto LABEL_73;
      if ( !v53 )
        goto LABEL_73;
      if ( !v48 )
        goto LABEL_73;
      v56.n64_u64[0] = (unsigned __int64)v55->fields._PanelUnitSize_k__BackingField;
      v57.n64_u64[0] = *(unsigned __int64 *)(v53 + 28);
      items = v48->fields._items;
      v59 = Method_System_Collections_Generic_List_Rect__Add__;
      ++v48->fields._version;
      if ( !items )
        goto LABEL_73;
      size = v48->fields._size;
      v61 = vadd_f32(v57, vmul_f32(v56, (float32x2_t)0xBF000000BF000000LL)).n64_u64[0];
      if ( (unsigned int)size >= items->max_length )
      {
        v63 = HIDWORD(v61);
        v64 = v56.n64_u32[1];
        System_Collections_Generic_List_Rect___AddWithResize(
          v48,
          *(UnityEngine_Rect_o *)(&v56 - 1),
          *(const MethodInfo_35B29FC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
      }
      else
      {
        v62 = (float32x2_t *)(&items->obj + size);
        v48->fields._size = size + 1;
        v62[4].n64_u64[0] = v61;
        v62[5].n64_u64[0] = v56.n64_u64[0];
      }
      m_CancellationTokenSource = (int)v51->fields.m_CancellationTokenSource;
      if ( (int)++v52 >= m_CancellationTokenSource )
        goto LABEL_43;
    }
    goto LABEL_74;
  }
LABEL_43:
  if ( !v48 )
    goto LABEL_73;
  v47 = System_Collections_Generic_List_Rect___ToArray(
          v48,
          (const MethodInfo_35B4590 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_45:
  v65 = (Submarine2DUILocationInfo_o *)sub_1BCAA2C(Submarine2DUILocationInfo_TypeInfo, *(_QWORD *)&scanId, v45, v46);
  Submarine2DUILocationInfo___ctor(v65, 0LL);
  if ( !v65 )
    goto LABEL_73;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v65, 0LL);
  mapCamera = v8->fields.mapCamera;
  v69 = Rects;
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v67);
  v106 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(mapCamera, v47, v69, &failedReason, 0LL);
  *isShowDialogUpper = 0;
  m_XMin = v106.fields.m_XMin;
  m_YMin = v106.fields.m_YMin;
  m_Width = v106.fields.m_Width;
  m_Height = v106.fields.m_Height;
  if ( failedReason == 1 )
  {
    v77 = (SubmarineScanDialogUpsideLocationInfo_o *)sub_1BCAA2C(
                                                       SubmarineScanDialogUpsideLocationInfo_TypeInfo,
                                                       v70,
                                                       v71,
                                                       v72);
    SubmarineScanDialogUpsideLocationInfo___ctor(v77, 0LL);
    if ( !v77 )
      goto LABEL_73;
    v78 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v77, 0LL);
    v80 = v8->fields.mapCamera;
    v81 = v78;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v79);
    *(UnityEngine_Rect_o *)&v85 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v80,
                                    v47,
                                    v81,
                                    &failedReason,
                                    0LL);
    if ( failedReason != 1 )
    {
      if ( failedReason )
        goto LABEL_55;
      goto LABEL_54;
    }
    v99 = (SubmarinScanDialogUpSideWeakLocationInfo_o *)sub_1BCAA2C(
                                                          SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo,
                                                          v82,
                                                          v83,
                                                          v84);
    SubmarinScanDialogUpSideWeakLocationInfo___ctor(v99, 0LL);
    if ( !v99 )
      goto LABEL_73;
    v100 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v99, 0LL);
    v102 = v8->fields.mapCamera;
    v103 = v100;
    if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v101);
    *(UnityEngine_Rect_o *)&v85 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                    v102,
                                    v47,
                                    v103,
                                    &failedReason,
                                    0LL);
    if ( !failedReason )
    {
LABEL_54:
      m_XMin = v85;
      m_YMin = v86;
      m_Width = v87;
      m_Height = v88;
      *isShowDialogUpper = 1;
    }
  }
LABEL_55:
  v89 = FSWindowUtil__GetSize(0LL);
  this = (SubmarineMapManager_o *)sub_1BCA888(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_73;
  v90 = this->fields.m_CancellationTokenSource;
  if ( !(_DWORD)v90
    || (LODWORD(this->fields.mapInfo) = 1065353216, (_DWORD)v90 == 1)
    || (*((float *)&this->fields.mapInfo + 1) = m_Width / v89.fields.x, (unsigned int)v90 <= 2) )
  {
LABEL_74:
    sub_1BCAA44(this, *(_QWORD *)&scanId);
  }
  v91 = 1.0;
  *(float *)&this->fields.warInfo = m_Height / v89.fields.y;
  if ( (int)v90 >= 2 )
  {
    v92 = (unsigned int)v90 - 2LL;
    v91 = fmaxf(m_Width / v89.fields.x, 1.0);
    if ( v92 )
    {
      p_warInfo = &this->fields.warInfo;
      do
      {
        v94 = *(float *)p_warInfo;
        p_warInfo = (struct MapControl_WarInfo_o **)((char *)p_warInfo + 4);
        v95 = v94;
        if ( v94 > v91 )
          v91 = v95;
        --v92;
      }
      while ( v92 );
    }
  }
  v96 = v8->fields.submarineData;
  if ( !v96 )
    goto LABEL_73;
  v97 = v96->fields._Settings_k__BackingField;
  if ( !v97 )
    goto LABEL_73;
  v105.fields.y = m_YMin + (float)(m_Height * 0.5);
  v105.fields.x = m_XMin + (float)(m_Width * 0.5);
  v105.fields.z = 0.0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v8,
           v105,
           v91,
           v97->fields._ViewScanRangeCameraDuration_k__BackingField,
           *(const MethodInfo **)&scanId);
}


void __fastcall SubmarineMapManager__ShowScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SubmarineMapManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v16; // 0:x3.16
  System_Nullable_Vector3__o v17; // 0:x5.16

  v3 = this;
  if ( (byte_4B12E4F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v8, v9);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___,
                                      v10,
                                      v11);
    byte_4B12E4F = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( !v3->fields.isShowScannableEffect )
  {
    submarineData = v3->fields.submarineData;
    v3->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_1BCAA3C(this, method);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v13 )
        break;
      if ( !v15.fields._current )
        sub_1BCAA3C(v13, v14);
      if ( BYTE2(v15.fields._current[3].monitor) )
      {
        *(_QWORD *)&v16.fields.hasValue = 0LL;
        *(_QWORD *)&v16.fields.value.fields.y = 0LL;
        *(_QWORD *)&v17.fields.hasValue = 0LL;
        *(_QWORD *)&v17.fields.value.fields.y = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_object_(
          v3,
          (ComponentPool_T__o *)v3->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v15.fields._current,
          v16,
          v17,
          (const MethodInfo_2FBD45C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_4B12E53 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___,
      panelData,
      method);
    byte_4B12E53 = 1;
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
    (const MethodInfo_2FBD45C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__StartScanPerformance(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  MissionNotifyManager_o *Instance; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Action_o *v27; // x23
  TaskScheduler_o *taskScheduler; // x22
  const MethodInfo *v29; // x3
  TaskScheduler_o *v30; // x22
  SchedulerTaskBase_array *v31; // x23
  const MethodInfo *v32; // x3
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  int64_t v43; // x20
  __int64 v44; // x2
  __int64 v45; // x3
  _QWORD *v46; // x21
  System_Delegate_o *v47; // x22
  SchedulerTaskBase_TaskCallback_o *v48; // x23
  System_Delegate_o *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x8
  SchedulerTaskBase_TaskCallback_c *v57; // x1
  TaskScheduler_o *v58; // x19
  MissionNotifyManager_o *v59; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  __int64 v66; // x0

  if ( (byte_4B12E38 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&scanId, panelData);
    sub_1BCA7E0(&SchedulerTaskBase___TypeInfo, v7, v8);
    sub_1BCA7E0(&SchedulerTaskNone_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&Method_SubmarineMapManager__StartScanPerformance_b__39_0__, v15, v16);
    sub_1BCA7E0(&Method_SubmarineMapManager__StartScanPerformance_b__39_1__, v17, v18);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v19, v20);
    byte_4B12E38 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  MissionNotifyManager__StartPause(Instance, 0LL);
  v23 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v27 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v24, v25, v26);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_0__, 0LL);
  if ( !v23 )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider((CommonUI_o *)v23, v27, 0LL);
  taskScheduler = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v29);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_42008244(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)Instance,
    0LL);
  v30 = this->fields.taskScheduler;
  v31 = (SchedulerTaskBase_array *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  Instance = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v32);
  if ( !v31 )
    goto LABEL_22;
  v39 = (int64_t)Instance;
  if ( Instance )
  {
    Instance = (MissionNotifyManager_o *)sub_1BCA91C(Instance, v31->obj.klass->_1.element_class);
    if ( !Instance )
      goto LABEL_24;
  }
  if ( !v31->max_length )
    goto LABEL_23;
  v31->m_Items[0] = (SchedulerTaskBase_o *)v39;
  sub_1BCA784((PartyOrganizationUtility_o *)v31->m_Items, v39, v33, v34, v35, v36, v37, v38);
  if ( !v30
    || (TaskScheduler__AddTask(v30, 0, v31, 0LL),
        v43 = sub_1BCAA2C(SchedulerTaskNone_TypeInfo, v40, v41, v42),
        SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v43, 0LL),
        !v43) )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v22);
  }
  v46 = (_QWORD *)(v43 + 32);
  v47 = *(System_Delegate_o **)(v43 + 32);
  v48 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v22, v44, v45);
  SchedulerTaskBase_TaskCallback___ctor(
    v48,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__39_1__,
    0LL);
  v49 = System_Delegate__Combine(v47, (System_Delegate_o *)v48, 0LL);
  v56 = (int64_t)v49;
  if ( !v49 )
    goto LABEL_16;
  v57 = SchedulerTaskBase_TaskCallback_TypeInfo;
  if ( (SchedulerTaskBase_TaskCallback_c *)v49->klass != SchedulerTaskBase_TaskCallback_TypeInfo
    || (*v46 = v49, (SchedulerTaskBase_TaskCallback_c *)v49->klass != v57) )
  {
    sub_1BCACFC(v49);
LABEL_16:
    *v46 = v56;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)(v43 + 32), v56, v50, v51, v52, v53, v54, v55);
  v58 = this->fields.taskScheduler;
  Instance = (MissionNotifyManager_o *)sub_1BCA888(SchedulerTaskBase___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_22;
  v59 = Instance;
  Instance = (MissionNotifyManager_o *)sub_1BCA91C(v43, Instance->klass->_1.element_class);
  if ( !Instance )
  {
LABEL_24:
    v66 = sub_1BCAA60();
    sub_1BCA908(v66, 0LL);
  }
  if ( !LODWORD(v59->fields.mNoDispInfos) )
LABEL_23:
    sub_1BCAA44(Instance, v22);
  v59->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v43;
  sub_1BCA784((PartyOrganizationUtility_o *)&v59->fields.mMissionNotifyComps, v43, v60, v61, v62, v63, v64, v65);
  if ( !v58 )
    goto LABEL_22;
  TaskScheduler__AddTask(v58, 0, (SchedulerTaskBase_array *)v59, 0LL);
}


void __fastcall SubmarineMapManager__SubsequentialOpenPanelTaskChain(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  System_Collections_Generic_List_object__o *SubsequentialOpenPanelTasks; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Action_o **p_syncRoot; // x22
  const MethodInfo *v24; // x1
  int size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v26; // x20
  __int64 v27; // x2
  __int64 v28; // x3
  System_Delegate_o *syncRoot; // x23
  SchedulerTaskBase_TaskCallback_o *v30; // x24
  System_Delegate_o *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  SchedulerTaskBase_TaskCallback_c *v38; // x1

  if ( (byte_4B12E39 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__, finishCallback, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__, v6, v7);
    sub_1BCA7E0(&SchedulerTaskBase_TaskCallback_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__, v10, v11);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass40_0_TypeInfo, v12, v13);
    byte_4B12E39 = 1;
  }
  v14 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass40_0_TypeInfo, finishCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_15;
  *(_QWORD *)(v14 + 16) = finishCallback;
  p_syncRoot = (System_Action_o **)(v14 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)finishCallback, v17, v18, v19, v20, v21, v22);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
                                                                               this,
                                                                               v24);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  size = SubsequentialOpenPanelTasks->fields._size;
  v26 = (System_Collections_Generic_List_SchedulerTaskBase__o *)SubsequentialOpenPanelTasks;
  if ( size < 1 )
  {
LABEL_11:
    ActionExtensions__Call(*p_syncRoot, 0LL);
    return;
  }
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               SubsequentialOpenPanelTasks,
                                                                               size - 1,
                                                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_15;
  p_syncRoot = (System_Action_o **)&SubsequentialOpenPanelTasks->fields._syncRoot;
  syncRoot = (System_Delegate_o *)SubsequentialOpenPanelTasks->fields._syncRoot;
  v30 = (SchedulerTaskBase_TaskCallback_o *)sub_1BCAA2C(SchedulerTaskBase_TaskCallback_TypeInfo, v16, v27, v28);
  SchedulerTaskBase_TaskCallback___ctor(
    v30,
    (Il2CppObject *)v14,
    Method_SubmarineMapManager___c__DisplayClass40_0__SubsequentialOpenPanelTaskChain_b__0__,
    0LL);
  v31 = System_Delegate__Combine(syncRoot, (System_Delegate_o *)v30, 0LL);
  if ( v31 )
  {
    v38 = SchedulerTaskBase_TaskCallback_TypeInfo;
    if ( (SchedulerTaskBase_TaskCallback_c *)v31->klass != SchedulerTaskBase_TaskCallback_TypeInfo
      || (*p_syncRoot = (System_Action_o *)v31, (SchedulerTaskBase_TaskCallback_c *)v31->klass != v38) )
    {
      sub_1BCACFC(v31);
      goto LABEL_11;
    }
  }
  else
  {
    *p_syncRoot = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_syncRoot, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  SubsequentialOpenPanelTasks = (System_Collections_Generic_List_object__o *)this->fields.taskScheduler;
  if ( !SubsequentialOpenPanelTasks )
LABEL_15:
    sub_1BCAA3C(SubsequentialOpenPanelTasks, v16);
  TaskScheduler__AddTask_42008244((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v26, 0LL);
}


void __fastcall SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  SubmarineMapDataManager_o *submarineData; // x0
  struct MapControl_MapInfo_o *mapInfo; // x8
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  __int64 v16; // x1
  EventScanPanelMapRequest_o *v17; // x20
  struct MapControl_MapInfo_o *v18; // x8

  if ( (byte_4B12E30 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SubmarineMapManager__TryInitRequest_b__31_0__, v8, v9);
    byte_4B12E30 = 1;
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
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__31_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  submarineData = (SubmarineMapDataManager_o *)NetworkManager__getRequest_object_(
                                                 v15,
                                                 (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  if ( !this->fields.submarineData
    || (v17 = (EventScanPanelMapRequest_o *)submarineData,
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__get_EventId(
                                                       this->fields.submarineData,
                                                       0LL),
        (v18 = this->fields.mapInfo) == 0LL)
    || !v17 )
  {
LABEL_13:
    sub_1BCAA3C(submarineData, method);
  }
  EventScanPanelMapRequest__beginRequest(v17, (int32_t)submarineData, v18->fields.mapId, 0, 0, 0LL);
}


void __fastcall SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  int32_t v11; // w20
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  System_Action_o *v13; // x22
  const MethodInfo *v14; // x3

  if ( (byte_4B12E4A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v4, v5);
    byte_4B12E4A = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, 0LL);
  if ( NewReleasedScanId >= 1 )
  {
    v11 = NewReleasedScanId;
    newScannerDialog = this->fields.newScannerDialog;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v8, v9, v10);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v11, v13, v14);
      return;
    }
LABEL_8:
    sub_1BCAA3C(submarineData, method);
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
  __int64 v2; // x2
  SubmarineMapManager_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  v3 = this;
  if ( (byte_4B12E3C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v6, v7);
    this = (SubmarineMapManager_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__,
                                      v8,
                                      v9);
    byte_4B12E3C = 1;
  }
  memset(&v12, 0, sizeof(v12));
  submarineData = v3->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_1BCAA3C(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v12.fields._current, v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1BCAA3C(0LL, *(_QWORD *)&beforeClearQuestId);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x19
  ScrTerminalMap_o *terminalMap; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x2
  UnityEngine_GameObject_c *klass; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  TerminalPramsManager_c *v33; // x0
  TerminalPramsManager_c *v34; // x0
  System_String_array *ValueByArray; // x0
  __int64 v36; // x8
  UnityEngine_GameObject_c *v37; // x8
  TitleInfoControl_o *v38; // x20
  EventDetailEntity_o *v39; // x21
  System_Action_o *v40; // x22
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1

  if ( (byte_4B12E3D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__, v15, v16);
    sub_1BCA7E0(&SubmarineMapManager___c__DisplayClass48_0_TypeInfo, v17, v18);
    byte_4B12E3D = 1;
  }
  v19 = sub_1BCAA2C(SubmarineMapManager___c__DisplayClass48_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_47;
  *(_QWORD *)(v19 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 16), (int64_t)this, v22, v23, v24, v25, v26, v27);
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
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v21, v28);
    byte_4B10F83 = 1;
  }
  terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = terminalMap->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_47;
  terminalMap = *(ScrTerminalMap_o **)&klass->_2.instance_size;
  if ( !terminalMap )
    goto LABEL_47;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)terminalMap, 0LL);
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_47;
  terminalMap = (ScrTerminalMap_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)terminalMap,
                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.submarineData )
    goto LABEL_47;
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)terminalMap;
  terminalMap = (ScrTerminalMap_o *)SubmarineMapDataManager__get_EventId(this->fields.submarineData, 0LL);
  if ( !v30 )
    goto LABEL_47;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v30,
         (Il2CppObject **)(v19 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v19 + 32) = 0;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
    if ( !byte_4B12EBB )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v31);
      byte_4B12EBB = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
      v33 = TerminalPramsManager_TypeInfo;
    }
    if ( v33->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( !v33->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v33, v21);
      if ( !byte_4B12EBB )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v21, v31);
        byte_4B12EBB = 1;
      }
      v34 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v21);
        v34 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v34->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_47;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v36 = *(_QWORD *)&ValueByArray->max_length;
        if ( v36 )
        {
          if ( !(_DWORD)v36 )
            sub_1BCAA44(ValueByArray, v21);
          *(_DWORD *)(v19 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v21, v31);
      byte_4B10F83 = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v21);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v37 = terminalMap->fields.subRootGimmickP->klass;
    if ( v37 )
    {
      v38 = *(TitleInfoControl_o **)&v37->_2.instance_size;
      v39 = *(EventDetailEntity_o **)(v19 + 24);
      v40 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v21, v31, v32);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v19,
        Method_SubmarineMapManager___c__DisplayClass48_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( v38 )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(v38, v39, v40, 0LL);
        return;
      }
    }
LABEL_47:
    sub_1BCAA3C(terminalMap, v21);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v41);
  SubmarineMapManager__ShowScannableEffect(this, v42);
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
    sub_1BCAA3C(0LL, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, 0LL);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v4);
  SubmarineMapManager__HideSelectedPanelEffect(this, v5);
  SubmarineMapManager__UpdateTerminalInfo(this, v6);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__27_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B12E63 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, v5, v6);
    byte_4B12E63 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__27_1__, 0LL);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._24_OnAfterQuestAfterAction.method)(
    this,
    v7,
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B12E64 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B12E64 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  CommonUI__SetSkipAnimation((CommonUI_o *)Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B12E65 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineMapManager__StartScanPerformance_b__39_2__, v5, v6);
    byte_4B12E65 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v7, v8);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_4B12E66 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineMapManager__StartScanPerformance_b__39_3__, v5, v6);
    byte_4B12E66 = 1;
  }
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__39_3__, 0LL);
  SubmarineMapManager__RevealAvailableSpots(this, v7, v8);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__39_3(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4B12E67 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    byte_4B12E67 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  SubmarineMapManager__OnEndScan(this, v6);
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
    sub_1BCAA3C(0LL, method);
  return SubmarineMapDataManager__get_EventId(submarineData, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1BCAA3C(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  SubmarineMapManager__CoInitRequest_d__20_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  int32_t _1__state; // w8
  struct SubmarineMapManager_o *_4__this; // x20
  bool v12; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Func_bool__o *v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  UnityEngine_WaitUntil_o *v20; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  v3 = this;
  if ( (byte_4B12E72 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_SubmarineMapManager__CoInitRequest_b__20_0__, v6, v7);
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v8, v9);
    byte_4B12E72 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__20_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_1BCAA3C(this, method);
    }
    SubmarineMapDataManager__ConstructParams((SubmarineMapDataManager_o *)this, 0LL);
    ActionExtensions__Call(v3->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v3->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  SubmarineMapManager__TryInitRequest(_4__this, method);
  this = (SubmarineMapManager__CoInitRequest_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v12 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v16 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v13, v14, v15);
  System_Func_bool____ctor(v16, (Il2CppObject *)_4__this, Method_SubmarineMapManager__CoInitRequest_b__20_0__, 0LL);
  v20 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v17, v18, v19);
  UnityEngine_WaitUntil___ctor(v20, v16, 0LL);
  v3->fields.__2__current = (Il2CppObject *)v20;
  p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return v12;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_SubmarineMapManager__CoInitRequest_d__20_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct SubmarineMapManager_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x8
  UnityEngine_Texture2D_o *ResizedTexture2D; // x0
  UnityEngine_Texture2D_o **p_closedPanelTexture; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct SubmarineMapAssetManager_o *v18; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  const MethodInfo *v20; // x1
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x1
  __int64 v34; // x8
  int32_t v35; // w1
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1

  v3 = this;
  if ( (byte_4B12E73 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)sub_1BCA7E0(
                                                                  &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                                  v4,
                                                                  v5);
    byte_4B12E73 = 1;
  }
  if ( !v3->fields.__1__state )
  {
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
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
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields.closedPanelTexture,
            (int64_t)ResizedTexture2D,
            v12,
            v13,
            v14,
            v15,
            v16,
            v17);
          v18 = _4__this->fields.assetManager;
          if ( v18 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v18->fields._ClosedPanelTexture_k__BackingField;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0LL, 0LL) )
            {
              DarkTexture2D = ClosePanelTextureUtil__CreateDarkTexture2D(*p_closedPanelTexture, 0.4, 0LL);
              *p_closedPanelTexture = DarkTexture2D;
              sub_1BCA784(
                (PartyOrganizationUtility_o *)&_4__this->fields.closedPanelTexture,
                (int64_t)DarkTexture2D,
                v22,
                v23,
                v24,
                v25,
                v26,
                v27);
            }
            SubmarineMapManager__AdjustEachSpotsPositions(_4__this, v20);
            SubmarineMapManager__CreateContainers(_4__this, v28);
            SubmarineMapManager__CreatePanels(_4__this, v29);
            SubmarineMapManager__CreateNeverOpenSurrounds(_4__this, v30);
            SubmarineMapManager__SetGridLine(_4__this, v31);
            SubmarineMapManager__AdjustSilhouetteGimmicks(_4__this, v32);
            SubmarineMapManager__ConstructOnPartOfDialog(_4__this, v33);
            this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)_4__this->fields.submarineData;
            if ( this )
            {
              v34 = *(_QWORD *)&this[1].fields.__1__state;
              if ( v34 )
              {
                if ( *(_BYTE *)(v34 + 24) || *(_BYTE *)(v34 + 25) )
                  v35 = *(_DWORD *)(v34 + 16);
                else
                  v35 = -1;
                SubmarineMapDataManager__UpdateParams((SubmarineMapDataManager_o *)this, v35, 0LL);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, v36);
                SubmarineMapManager__HideScanObstacleEffect(_4__this, v37);
                SubmarineMapManager__ShowScanObstacleEffect(_4__this, v38);
                ActionExtensions__Call(v3->fields.finishCallback, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_30:
      sub_1BCAA3C(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__23_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__23_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12E68 & 1) == 0 )
  {
    sub_1BCA7E0(&SubmarineMapManager___c_TypeInfo, v1, v2);
    byte_4B12E68 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SubmarineMapManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SubmarineMapManager___c_TypeInfo->static_fields->__9 = (struct SubmarineMapManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SubmarineMapManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__97_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, x);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SubmarineMapManager_o *_4__this; // x0
  UnityEngine_MonoBehaviour_o *v7; // x20
  SubmarineMapAssetManager_o *klass; // x21
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  System_Action_o *_9__1; // x23
  int32_t v12; // w22
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_4B12E69 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__, v4, v5);
    byte_4B12E69 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  SubmarineMapManager__CreateAssetManagerIfNotExists(_4__this, method);
  v7 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v7 )
    goto LABEL_10;
  _4__this = (SubmarineMapManager_o *)v7[4].fields.m_CancellationTokenSource;
  if ( !_4__this )
    goto LABEL_10;
  klass = (SubmarineMapAssetManager_o *)v7[5].klass;
  _4__this = (SubmarineMapManager_o *)SubmarineMapDataManager__get_EventId((SubmarineMapDataManager_o *)_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v12 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v9, v10);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass19_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v13, v14, v15, v16, v17, v18);
  }
  if ( !klass )
LABEL_10:
    sub_1BCAA3C(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(klass, v12, _9__1, v10);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(v7, Assets, 0LL);
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
    sub_1BCAA3C(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(v7, inited, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct SubmarineMapManager_o *_4__this; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  __int64 v14; // x2
  __int64 v15; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B12E6A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v8, v9);
    byte_4B12E6A = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  Instance = (DataManager_o *)_4__this->fields.submarineData;
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)SubmarineMapDataManager__get_EventId((SubmarineMapDataManager_o *)Instance, 0LL);
  if ( !v13 )
    goto LABEL_19;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         v13,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
    if ( !byte_4B10F83 )
    {
      sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v11, v14);
      byte_4B10F83 = 1;
    }
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v11);
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    }
    v15 = **(_QWORD **)&Instance[1].fields._DispLog;
    if ( v15 )
    {
      Instance = *(DataManager_o **)(v15 + 240);
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
    sub_1BCAA3C(Instance, v11);
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SubmarineMapManager_o *_4__this; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x3
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  if ( (byte_4B12E6B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__, v4, v5);
    byte_4B12E6B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, method);
  _9__1 = this->fields.__9__1;
  v10 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, method, v7, v8);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass35_0__ClickPanel_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v11, v12, v13, v14, v15, v16);
  }
  if ( !v10 )
LABEL_8:
    sub_1BCAA3C(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v10, _9__1, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass35_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, *(_QWORD *)&scanId);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  SubmarineMapManager_o *_4__this; // x0
  const MethodInfo *v7; // x3
  __int64 v8; // x2
  __int64 v9; // x3
  const MethodInfo *v10; // x4
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v13; // x21
  _BOOL4 isShowDialogUpper; // w24
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B12E6C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__, v4, v5);
    byte_4B12E6C = 1;
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
  SubmarineMapManager__ShowScanRange(_4__this, this->fields.scanId, this->fields.panelData, v7);
  _9__1 = this->fields.__9__1;
  scanId = this->fields.scanId;
  v13 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, method, v8, v9);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v15, v16, v17, v18, v19, v20);
  }
  if ( !v13 )
LABEL_9:
    sub_1BCAA3C(_4__this, method);
  SubmarineMapManager__OpenScanConfirmDialog(v13, scanId, isShowDialogUpper, _9__1, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  SubmarineMapManager_o *_4__this; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  SubmarineMapManager_o *v10; // x20
  System_Action_int__o *_9__2; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B12E6D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, yes, method);
    sub_1BCA7E0(&Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__, v5, v6);
    byte_4B12E6D = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, (const MethodInfo *)yes);
  v10 = this->fields.__4__this;
  if ( yes )
  {
    if ( v10 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, v9);
      return;
    }
LABEL_11:
    sub_1BCAA3C(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, yes, v8, v9);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__OnScannerSelected_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v12, v13, v14, v15, v16, v17);
  }
  if ( !v10 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v10, _9__2, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass36_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, *(_QWORD *)&lscanId);
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
    sub_1BCAA3C(this, result);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  const MethodInfo *v7; // x1
  __int64 v8; // x2
  ConnectMark_c *klass; // x8
  __int64 v10; // x2
  ConnectMark_c *v11; // x8
  SubmarineMapManager_o *_4__this; // x19
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4B12E6E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v4, v5);
    byte_4B12E6E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetSkipAnimation(Instance, 0, 0LL);
  if ( !this->fields.__4__this )
    goto LABEL_22;
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v7, v8);
    byte_4B10F83 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
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
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, v7, v10);
    byte_4B10F83 = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v11 = Instance->fields.connectMark->klass;
  if ( !v11
    || (Instance = *(CommonUI_o **)&v11->_2.thread_static_fields_offset) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, v7),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(Instance, v7);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))_4__this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    _4__this,
    _4__this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(_4__this, v13);
  SubmarineMapManager__ShowScannableEffect(_4__this, v14);
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
    sub_1BCAA3C(this, x);
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

  if ( (byte_4B12E6F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_int___, *(_QWORD *)&scanId, method);
    byte_4B12E6F = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2E654E8 *)Method_ActionExtensions_Call_int___);
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

  if ( (byte_4B12E70 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, yes, method);
    byte_4B12E70 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
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
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_1BCAA3C(0LL, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCAA3C(0LL, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, method);
}


void __fastcall SubmarineMapManager___c__DisplayClass93_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass93_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_4B12E71 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B12E71 = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  UnityEngine_Object__Destroy_70154244(scanAnimObj, 0LL);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields._Chain_k__BackingField == this->fields.i;
}