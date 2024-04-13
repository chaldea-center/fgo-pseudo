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
  int mapInfo; // w8
  SubmarineMapManager_o *v7; // x22
  int v8; // w25
  int32_t v9; // w21
  __int64 v10; // x8
  int v11; // w8
  SubmarineMapManager_o *v12; // x20
  unsigned int v13; // w22
  int v14; // w19
  __int64 v15; // x0

  if ( (byte_42E7B68 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_B5D5C4(
                                      &Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___,
                                      (_DWORD)go,
                                      minDepth,
                                      method);
    byte_42E7B68 = 1;
  }
  if ( !go )
    goto LABEL_21;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                    go,
                                    (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
  if ( !this )
    goto LABEL_21;
  mapInfo = (int)this->fields.mapInfo;
  v7 = this;
  if ( mapInfo >= 1 )
  {
    v8 = 0;
    v9 = 0x7FFFFFFF;
    while ( v8 < (unsigned int)mapInfo )
    {
      v10 = *((_QWORD *)&v7->fields.warInfo + v8);
      if ( !v10 )
        goto LABEL_21;
      this = (SubmarineMapManager_o *)UnityEngine_Mathf__Min_41629336(*(_DWORD *)(v10 + 168), v9, 0LL);
      mapInfo = (int)v7->fields.mapInfo;
      ++v8;
      v9 = (int)this;
      if ( v8 >= mapInfo )
        goto LABEL_12;
    }
LABEL_20:
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
  }
  v9 = 0x7FFFFFFF;
LABEL_12:
  if ( v9 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                      go,
                                      (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
    if ( this )
    {
      v11 = (int)this->fields.mapInfo;
      v12 = this;
      if ( v11 >= 1 )
      {
        v13 = 0;
        v14 = minDepth - v9;
        while ( v13 < v11 )
        {
          this = (SubmarineMapManager_o *)*((_QWORD *)&v12->fields.warInfo + (int)v13);
          if ( !this )
            goto LABEL_21;
          UIWidget__set_depth((UIWidget_o *)this, v14 + *(_DWORD *)&this->fields.isEnableClickPanel, 0LL);
          v11 = (int)v12->fields.mapInfo;
          if ( (int)++v13 >= v11 )
            return;
        }
        goto LABEL_20;
      }
      return;
    }
LABEL_21:
    sub_B5D69C(this, go);
  }
}


void __fastcall SubmarineMapManager__AdjustEachSpotsPositions(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_array *Children; // x0
  __int64 v9; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v11; // x20
  unsigned int v12; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v14; // x2
  __int64 v15; // x0

  if ( (byte_42E7B65 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7B65 = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_16;
  max_length = Children->max_length;
  v11 = Children;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v15 = sub_B5D6C8(Children);
        sub_B5D668(v15, 0LL);
      }
      Children = (UnityEngine_GameObject_array *)v11->m_Items[v12];
      if ( !Children )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Children,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_srcLineSprite, v14);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_16:
    sub_B5D69C(Children, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v77; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v79; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v81; // x21
  unsigned int v82; // w19
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v84; // x21
  int v85; // w8
  UnityEngine_GameObject_o *v86; // x22
  unsigned int v87; // w19
  UnityEngine_Object_o *v88; // x23
  _DWORD *monitor; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v91; // x23
  __int64 v92; // x0
  __int64 v93; // x1
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **parameters; // x1
  SubmarineSilhouetteData_o **v101; // x22
  __int64 v102; // x1
  SubmarineSilhouetteData_o *v103; // x0
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v104; // x24
  __int64 v105; // x0
  __int64 v106; // x1
  UnityEngine_Object_o *v107; // x23
  _BOOL8 v108; // x0
  __int64 v109; // x1
  __int64 v110; // x1
  const MethodInfo *v111; // x2
  SubmarineMapDataManager_o *v112; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x24
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v114; // x22
  __int64 v115; // x0
  __int64 v116; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v118; // x1
  float x; // s8
  float y; // s9
  __int64 v121; // x0
  __int64 v122; // x1
  int v123; // s0
  Il2CppObject *current; // x22
  __int64 v128; // x0
  __int64 v129; // x1
  float xMin; // s0
  float v131; // s4
  float xMax; // s0
  float v133; // s4
  float yMin; // s0
  float v135; // s4
  float yMax; // s0
  float v137; // s4
  int v138; // w23
  __int64 v139; // x1
  int v140; // w10
  UnityEngine_Transform_o *v141; // x22
  UnityEngine_Vector2_o v142; // x0
  UnityEngine_Vector2_o v143; // x1
  UnityEngine_Vector2_o center; // kr00_8
  int v145; // s2
  int v146; // w23
  __int64 v147; // x0
  int v148; // [xsp+14h] [xbp-DCh]
  _BYTE v149[32]; // [xsp+18h] [xbp-D8h] BYREF
  int v150; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v151; // [xsp+40h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+58h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v153; // 0:s4.4,4:s5.4
  UnityEngine_Vector2_o v154; // 0:s6.4,4:s7.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v158; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v159; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v160; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v161; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v162; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v163; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v164; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7B67 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v29, v30, v31);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___, v32, v33, v34);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___68750072, v53, v54, v55);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v56, v57, v58);
    sub_B5D5C4(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo, v59, v60, v61);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&Method_System_Predicate_SrcSpotBasePrefab___ctor__, v65, v66, v67);
    sub_B5D5C4(&System_Predicate_SrcSpotBasePrefab__TypeInfo, v68, v69, v70);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__, v71, v72, v73);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass60_0_TypeInfo, v74, v75, v76);
    byte_42E7B67 = 1;
  }
  memset(&methoda, 0, 48);
  memset(&v151, 0, sizeof(v151));
  v150 = 0;
  v77 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v77,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  klass = (int)Children[1].klass;
  v81 = Children;
  if ( klass >= 1 )
  {
    v82 = 0;
    while ( v82 < klass )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v81[1].monitor + (int)v82);
      if ( !Children )
        goto LABEL_63;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Children,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v77 )
          goto LABEL_63;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v77,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
      }
      klass = (int)v81[1].klass;
      if ( (int)++v82 >= klass )
        goto LABEL_15;
    }
LABEL_64:
    v147 = sub_B5D6C8(Children);
    sub_B5D668(v147, 0LL);
  }
LABEL_15:
  v84 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v84,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  v85 = (int)Children[1].klass;
  v86 = Children;
  if ( v85 >= 1 )
  {
    v87 = 0;
    while ( v87 < v85 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v86[1].monitor + (int)v87);
      if ( !Children )
        goto LABEL_63;
      v88 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      Children,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v88, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v88 )
          goto LABEL_63;
        monitor = v88[4].monitor;
        if ( !monitor || !v84 )
          goto LABEL_63;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v84,
          monitor[5],
          (WarBoardAIRoute_RouteData_o *)v88,
          (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v85 = (int)v86[1].klass;
      if ( (int)++v87 >= v85 )
        goto LABEL_29;
    }
    goto LABEL_64;
  }
LABEL_29:
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (Children = (UnityEngine_GameObject_o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
LABEL_63:
    sub_B5D69C(Children, v79);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v149,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Children,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v148 = 0;
  methoda.parameters = *(const void **)&v149[16];
  *(_OWORD *)&methoda.klass = *(_OWORD *)v149;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v91 = sub_B5D694(SubmarineMapManager___c__DisplayClass60_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass60_0___ctor((SubmarineMapManager___c__DisplayClass60_0_o *)v91, 0LL);
    if ( !v91 )
      sub_B5D69C(v92, v93);
    parameters = (System_Int32_array **)methoda.parameters;
    *(_QWORD *)(v91 + 16) = methoda.parameters;
    v101 = (SubmarineSilhouetteData_o **)(v91 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v91 + 16), parameters, v94, v95, v96, v97, v98, v99);
    v103 = *(SubmarineSilhouetteData_o **)(v91 + 16);
    if ( !v103 )
      sub_B5D69C(0LL, v102);
    if ( SubmarineSilhouetteData__get_IsOnPanel(v103, 0LL) )
    {
      v104 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SrcSpotBasePrefab__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v104,
        (Il2CppObject *)v91,
        Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_SrcSpotBasePrefab___ctor__);
      if ( !v77 )
        sub_B5D69C(v105, v106);
      v107 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                       (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v77,
                                       (System_Predicate_T__o *)v104,
                                       (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v108 = UnityEngine_Object__op_Equality(v107, 0LL, 0LL);
      if ( !v108 )
      {
        if ( !*v101 )
          sub_B5D69C(v108, v109);
        if ( !v84 )
          sub_B5D69C(v108, v109);
        if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v84,
               (*v101)->fields._ObjectId_k__BackingField,
               (WarBoardEvalValueSquare_CalcEval_o **)&methoda.name,
               (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v112 = this->fields.submarineData;
          if ( !v112 )
            sub_B5D69C(0LL, v110);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v112,
                                                                                      *v101,
                                                                                      v111);
          v114 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v114,
            SilhouetteOccupiedPanels,
            (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___68750072);
          if ( !v107 )
            sub_B5D69C(v115, v116);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v107, 0LL);
          if ( !transform )
            sub_B5D69C(0LL, v118);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          *(UnityEngine_Vector3_o *)&v156.fields.m_XMin = UnityEngine_Vector3__get_zero(0LL);
          v156.fields.m_Width = v156.fields.m_XMin;
          v156.fields.m_Height = v156.fields.m_YMin;
          v156.fields.m_XMin = x;
          v156.fields.m_YMin = y;
          UnityEngine_Rect___ctor_35655016(v156, v153, v154, &methoda);
          if ( !v114 )
            sub_B5D69C(v121, v122);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v149,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v114,
            (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v151 = *(System_Collections_Generic_List_Enumerator_T__o *)v149;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v151,
                    (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
          {
            current = v151.fields.current;
            xMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v123, &methoda);
            if ( !current )
              sub_B5D69C(v128, v129);
            v157.fields.m_XMin = UnityEngine_Mathf__Min(xMin, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMin(v157, v131, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v158, &methoda);
            v159.fields.m_XMin = UnityEngine_Mathf__Max(xMax, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMax(v159, v133, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v160, &methoda);
            v161.fields.m_XMin = UnityEngine_Mathf__Min(yMin, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMin(v161, v135, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v162, &methoda);
            v163.fields.m_XMin = UnityEngine_Mathf__Max(yMax, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMax(v163, v137, &methoda);
          }
          *(_DWORD *)&v149[4 * v148 + 24] = 492;
          v138 = ++v150;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v151,
            (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          v140 = v138;
          if ( v138 && *(_DWORD *)&v149[4 * v138 + 20] == 492 )
          {
            v140 = v138 - 1;
            v150 = v138 - 1;
          }
          v148 = v140;
          if ( !methoda.name )
            sub_B5D69C(0LL, v139);
          v141 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)methoda.name, 0LL);
          center = UnityEngine_Rect__get_center(v164, &methoda);
          if ( !v141 )
            ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(v142, v143);
          v145 = 0;
          UnityEngine_Transform__set_localPosition(v141, *(UnityEngine_Vector3_o *)&center.fields.x, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v149[4 * v148 + 24] = 544;
  v146 = ++v150;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v146 && *(_DWORD *)&v149[4 * v146 + 20] == 544 )
    v150 = v146 - 1;
}


void __fastcall SubmarineMapManager__AdjustSpotCollider(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SubmarineMapManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo_234ED3C *v11; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v13; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v14; // 0:x0.12
  System_Nullable_Vector3__o v15; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E7B64 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_Vector2___ctor__, (_DWORD)spot, (_DWORD)method, v3);
    this = (SubmarineMapManager_o *)sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v6, v7, v8);
    byte_42E7B64 = 1;
  }
  submarineData = v5->fields.submarineData;
  if ( !submarineData )
    goto LABEL_7;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_7;
  PanelUnitSize_k__BackingField = Settings_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v14.fields.value = (struct UnityEngine_Vector2_o)&v13;
  *(_DWORD *)&v13.fields.has_value = 0;
  v13.fields.value = 0LL;
  *(_DWORD *)&v14.fields.has_value = Method_System_Nullable_Vector2___ctor__;
  System_Nullable_Vector2____ctor(v14, PanelUnitSize_k__BackingField, (const MethodInfo_234E954 *)method);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v15.fields.value.fields.x = &centerPosition;
  *(_QWORD *)&centerPosition.fields.value.fields.x = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.z = 0LL;
  *(_QWORD *)&v15.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v15, zero, v11);
  if ( !spot )
LABEL_7:
    sub_B5D69C(this, spot);
  SrcSpotBasePrefab__AdjustBtnColliderArea(spot, v13, centerPosition, 0LL);
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
                                                    (float)SHIDWORD(v9->fields.terminalMap),
                                                    (float)SLODWORD(v9->fields.mapCamera),
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
    sub_B5D69C(this, spot);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  clsQuestCheck_o *v32; // x20
  const MethodInfo *v33; // x1
  QuestReleaseMaster_o *eventId; // x0
  __int64 v35; // x1
  QuestReleaseMaster_o *v36; // x20
  CommonUI_o *v37; // x19
  int32_t list; // w20
  SubmarineMapManager___c_c *v39; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__50_0; // x22
  System_String_o *v42; // x21
  Il2CppObject *v43; // x23
  struct SubmarineMapManager___c_StaticFields *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  __int64 v51; // x0
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v54; // 0:x5.8

  if ( (byte_42E7B5F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__, v23, v24, v25);
    sub_B5D5C4(&SubmarineMapManager___c_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_6941/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v29, v30, v31);
    byte_42E7B5F = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v32 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = (QuestReleaseMaster_o *)SubmarineMapManager__get_eventId(this, v33);
  if ( !v32 )
    goto LABEL_27;
  eventId = (QuestReleaseMaster_o *)clsQuestCheck__GetNewPlayableEventQuestId(v32, (int32_t)eventId, 0LL);
  if ( !eventId )
    goto LABEL_27;
  v36 = eventId;
  if ( !eventId->fields._MasterName_k__BackingField )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  eventId = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !LODWORD(v36->fields._MasterName_k__BackingField) )
    goto LABEL_28;
  if ( !eventId )
    goto LABEL_27;
  if ( !QuestReleaseMaster__IsContainCondType(eventId, (int32_t)v36->fields.list, 143, 0LL) )
    return;
  eventId = (QuestReleaseMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LODWORD(v36->fields._MasterName_k__BackingField) )
  {
LABEL_28:
    v51 = sub_B5D6C8(eventId);
    sub_B5D668(v51, 0LL);
  }
  v37 = (CommonUI_o *)eventId;
  list = (int32_t)v36->fields.list;
  v39 = SubmarineMapManager___c_TypeInfo;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v39 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v39->static_fields;
  _9__50_0 = static_fields->__9__50_0;
  v42 = (System_String_o *)StringLiteral_6941/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v43 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(_9__50_0, v43, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__, 0LL);
    v44 = SubmarineMapManager___c_TypeInfo->static_fields;
    v44->__9__50_0 = _9__50_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v44->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  if ( !v37 )
LABEL_27:
    sub_B5D69C(eventId, v35);
  v54 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v37, list, v42, _9__50_0, 0, v54, 0LL);
}


void __fastcall SubmarineMapManager__ClickPanel(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x2
  SubmarineMapPanelData_o *v37; // x1
  _QWORD *v38; // x0
  System_Reflection_MethodBase_o *v39; // x0
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  __int64 v45; // x21
  System_Delegate_o *v46; // x23
  SchedulerTaskBase_TaskCallback_o *v47; // x24
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v56; // x20
  __int64 v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x0
  __int64 v65; // x0
  SubmarineMapPanelData_o *v66; // x0
  const MethodInfo *v67; // x1

  if ( (byte_42E7B55 & 1) == 0 )
  {
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, (_DWORD)panelData, (_DWORD)method, v3);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SubmarineMapManager_ClickPanel__, v9, v10, v11);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__, v15, v16, v17);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo, v18, v19, v20);
    byte_42E7B55 = 1;
  }
  v21 = sub_B5D694(SubmarineMapManager___c__DisplayClass36_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass36_0___ctor((SubmarineMapManager___c__DisplayClass36_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_25;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = panelData;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)panelData, v30, v31, v32, v33, v34, v35);
  v37 = *(SubmarineMapPanelData_o **)(v21 + 24);
  if ( !v37 || !this->fields.isEnableClickPanel )
    return;
  if ( !v37->fields._IsOpened_k__BackingField || !v37->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v37->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v37, v36);
    v40 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
      v40 = (_QWORD *)sub_B5D5CC(Method_SubmarineMapManager_ClickPanel__);
    v41 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v40, v40[3]);
    OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v45 = sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v45, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v45 )
        {
          v46 = *(System_Delegate_o **)(v45 + 32);
          v47 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
          SchedulerTaskBase_TaskCallback___ctor(
            v47,
            (Il2CppObject *)v21,
            Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__,
            0LL);
          v48 = (System_Int32_array **)System_Delegate__Combine(v46, (System_Delegate_o *)v47, 0LL);
          if ( v48 && *v48 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
          {
            v66 = (SubmarineMapPanelData_o *)sub_B5D990(v48);
            SubmarineMapPanelData__get_IsEnemyVisible(v66, v67);
            return;
          }
          *(_QWORD *)(v45 + 32) = v48;
          sub_B5D560((BattleServantConfConponent_o *)(v45 + 32), v48, v49, v50, v51, v52, v53, v54);
          taskScheduler = this->fields.taskScheduler;
          v22 = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v22 )
          {
            v56 = v22;
            v57 = sub_B5D684(v45, *(_QWORD *)(*(_QWORD *)v22 + 64LL));
            if ( !v57 )
            {
              v64 = sub_B5D6BC(0LL);
              sub_B5D668(v64, 0LL);
            }
            if ( !*(_DWORD *)(v56 + 24) )
            {
              v65 = sub_B5D6C8(v57);
              sub_B5D668(v65, 0LL);
            }
            *(_QWORD *)(v56 + 32) = v45;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v56 + 32),
              (System_Int32_array **)v45,
              v58,
              v59,
              v60,
              v61,
              v62,
              v63);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v56, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(v22, v23);
  }
  v38 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
    v38 = (_QWORD *)sub_B5D5CC(Method_SubmarineMapManager_ClickPanel__);
  v39 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v38, v38[3]);
  OverwriteAssetSoundName__PlaySystemSe(v39, 2, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E7B4C & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineMapManager__CoInitRequest_d__21_TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    byte_42E7B4C = 1;
  }
  v6 = sub_B5D694(SubmarineMapManager__CoInitRequest_d__21_TypeInfo);
  SubmarineMapManager__CoInitRequest_d__21___ctor((SubmarineMapManager__CoInitRequest_d__21_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E7B4D & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    byte_42E7B4D = 1;
  }
  v6 = sub_B5D694(SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo);
  SubmarineMapManager__CoOnAfterSpotCreated_d__24___ctor(
    (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 40),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *scanConfirmDialog; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v18; // x0
  __int64 v19; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ScanConfirmDialogPrefab_k__BackingField; // x21
  struct SubmarineScanConfirmDialog_o *Component_srcLineSprite; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v30; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *SelectScannerDialogPrefab_k__BackingField; // x21
  struct SubmarineSelectScannerDialog_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v40; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *NewScannerDialogPrefab_k__BackingField; // x21
  struct SubmarineNewScannerDialog_o *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_42E7B69 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___, v8, v9, v10);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E7B69 = 1;
  }
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(scanConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    assetManager = this->fields.assetManager;
    if ( !assetManager )
      goto LABEL_34;
    ScanConfirmDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)assetManager->fields._ScanConfirmDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            ScanConfirmDialogPrefab_k__BackingField,
            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v18 )
      goto LABEL_34;
    Component_srcLineSprite = (struct SubmarineScanConfirmDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v18,
                                                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = Component_srcLineSprite;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.scanConfirmDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    EventMapManagerBase__LocateDialogToUiRoot(
      (EventMapManagerBase_o *)this,
      (BaseDialog_o *)this->fields.scanConfirmDialog,
      0LL);
  }
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(selectScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v30 = this->fields.assetManager;
    if ( !v30 )
      goto LABEL_34;
    SelectScannerDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v30->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v18 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
            SelectScannerDialogPrefab_k__BackingField,
            (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v18 )
      goto LABEL_34;
    v32 = (struct SubmarineSelectScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)v18,
                                                     (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = v32;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.selectScannerDialog,
      (System_Int32_array **)v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    EventMapManagerBase__LocateDialogToUiRoot(
      (EventMapManagerBase_o *)this,
      (BaseDialog_o *)this->fields.selectScannerDialog,
      0LL);
  }
  newScannerDialog = (UnityEngine_Object_o *)this->fields.newScannerDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(newScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v18 & 1) != 0 )
  {
    v40 = this->fields.assetManager;
    if ( v40 )
    {
      NewScannerDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v40->fields._NewScannerDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v18 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
              NewScannerDialogPrefab_k__BackingField,
              (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v18 )
      {
        v42 = (struct SubmarineNewScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v18,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = v42;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.newScannerDialog,
          (System_Int32_array **)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_34:
    sub_B5D69C(v18, v19);
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v7; // x20
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1

  if ( (byte_42E7B52 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineMapAssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7B52 = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v7 = (SubmarineMapAssetManager_o *)sub_B5D694(SubmarineMapAssetManager_TypeInfo);
    SubmarineMapAssetManager___ctor(v7, v8);
    p_assetManager->klass = (BattleServantConfConponent_c *)v7;
    sub_B5D560(p_assetManager, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
    if ( !p_assetManager->klass )
      sub_B5D69C(0LL, v15);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v15);
  }
}


void __fastcall SubmarineMapManager__CreateContainers(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x9
  UILabel_o *PanelContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct SubmarineMapAssetManager_o *v19; // x8
  struct ScrTerminalMap_o *v20; // x9
  UILabel_o *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v22; // x0
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct SubmarineMapAssetManager_o *v30; // x8
  struct ScrTerminalMap_o *v31; // x9
  UILabel_o *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v33; // x0
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  v4 = this;
  if ( (byte_42E7B60 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, (_DWORD)method, v2, v3);
    this = (SubmarineMapManager_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7B60 = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_16;
  terminalMap = v4->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_16;
  this = (SubmarineMapManager_o *)terminalMap->fields.mapButtonGrid;
  if ( !this )
    goto LABEL_16;
  PanelContainerPrefab_k__BackingField = (UILabel_o *)assetManager->fields._PanelContainerPrefab_k__BackingField;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 PanelContainerPrefab_k__BackingField,
                                 transform,
                                 (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  v4->fields.panelContainer = (struct UnityEngine_GameObject_o *)v12;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.panelContainer, v12, v13, v14, v15, v16, v17, v18);
  v19 = v4->fields.assetManager;
  if ( !v19 )
    goto LABEL_16;
  v20 = v4->fields.terminalMap;
  if ( !v20 )
    goto LABEL_16;
  this = (SubmarineMapManager_o *)v20->fields.mapButtonGrid;
  if ( !this )
    goto LABEL_16;
  EffectContainerPrefab_k__BackingField = (UILabel_o *)v19->fields._EffectContainerPrefab_k__BackingField;
  v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v23 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 EffectContainerPrefab_k__BackingField,
                                 v22,
                                 (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  v4->fields.effectContainer = (struct UnityEngine_GameObject_o *)v23;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.effectContainer, v23, v24, v25, v26, v27, v28, v29);
  v30 = v4->fields.assetManager;
  if ( !v30
    || (v31 = v4->fields.terminalMap) == 0LL
    || (this = (SubmarineMapManager_o *)v31->fields.mapButtonGrid) == 0LL )
  {
LABEL_16:
    sub_B5D69C(this, method);
  }
  GridLinePrefab_k__BackingField = (UILabel_o *)v30->fields._GridLinePrefab_k__BackingField;
  v33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v34 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 GridLinePrefab_k__BackingField,
                                 v33,
                                 (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  v4->fields.gridLine = (struct UnityEngine_GameObject_o *)v34;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.gridLine, v34, v35, v36, v37, v38, v39, v40);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x19
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SilhouetteDataList_k__BackingField; // x0
  __int64 v71; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v73; // x23
  __int64 v74; // x0
  __int64 v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **current; // x1
  SubmarineSilhouetteData_o **v83; // x22
  __int64 v84; // x1
  SubmarineSilhouetteData_o *v85; // x0
  _BOOL8 HasClearCondQuestId; // x0
  __int64 v87; // x1
  const MethodInfo *v88; // x3
  __int64 v89; // x1
  const MethodInfo *v90; // x2
  SubmarineMapDataManager_o *v91; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v93; // x24
  __int64 v94; // x1
  SubmarineMapManager___c_c *v95; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__102_0; // x25
  Il2CppObject *v98; // x26
  struct SubmarineMapManager___c_StaticFields *v99; // x0
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v107; // x1
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v108; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v111; // x26
  __int64 v112; // x0
  __int64 v113; // x1
  __int64 v114; // x1
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  __int64 v117; // x1
  UnityEngine_Transform_o *v118; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v121; // x0
  __int64 v122; // x1
  __int64 v123; // x0
  const MethodInfo *v124; // x1
  int v125; // s0
  struct SubmarineMapDataManager_o *v128; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *MoveCameraToPositionTask; // x0
  SubmarineMapPanelData_array *v131; // x1
  const MethodInfo *v132; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *OpenPanelsAndRevealSpotsTask; // x0
  System_Collections_Generic_List_Enumerator_T__o v135; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_42E7B82 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__,
      beforeClearQuestId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___68750072, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v45, v46, v47);
    sub_B5D5C4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v48, v49, v50);
    sub_B5D5C4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v51, v52, v53);
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__, v57, v58, v59);
    sub_B5D5C4(
      &Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
      v60,
      v61,
      v62);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass102_0_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&SubmarineMapManager___c_TypeInfo, v66, v67, v68);
    byte_42E7B82 = 1;
  }
  memset(&v136, 0, sizeof(v136));
  v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v69,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_B5D69C(SilhouetteDataList_k__BackingField, v71);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v135,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v136 = v135;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v136,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v73 = sub_B5D694(SubmarineMapManager___c__DisplayClass102_0_TypeInfo);
    SubmarineMapManager___c__DisplayClass102_0___ctor((SubmarineMapManager___c__DisplayClass102_0_o *)v73, 0LL);
    if ( !v73 )
      sub_B5D69C(v74, v75);
    current = (System_Int32_array **)v136.fields.current;
    *(_QWORD *)(v73 + 16) = v136.fields.current;
    v83 = (SubmarineSilhouetteData_o **)(v73 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v73 + 16), current, v76, v77, v78, v79, v80, v81);
    v85 = *(SubmarineSilhouetteData_o **)(v73 + 16);
    if ( !v85 )
      sub_B5D69C(0LL, v84);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v85, beforeClearQuestId, 0LL);
    if ( HasClearCondQuestId )
    {
      if ( !*v83 )
        sub_B5D69C(HasClearCondQuestId, v87);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v83)->fields._ObjectQuestIds_k__BackingField, -1, 0, v88) )
      {
        v91 = this->fields.submarineData;
        if ( !v91 )
          sub_B5D69C(0LL, v89);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v91,
                                                                                    *v83,
                                                                                    v90);
        v93 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v93,
          SilhouetteOccupiedPanels,
          (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___68750072);
        v95 = SubmarineMapManager___c_TypeInfo;
        if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v95 = SubmarineMapManager___c_TypeInfo;
        }
        static_fields = v95->static_fields;
        _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__102_0;
        if ( !_9__102_0 )
        {
          if ( (BYTE3(v95->vtable._0_Equals.methodPtr) & 4) != 0 && !v95->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v95);
            static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          }
          v98 = (Il2CppObject *)static_fields->__9;
          _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SubmarineMapPanelData__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__102_0,
            v98,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_SubmarineMapPanelData___ctor__);
          v99 = SubmarineMapManager___c_TypeInfo->static_fields;
          v99->__9__102_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__102_0;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v99->__9__102_0,
            (System_Int32_array **)_9__102_0,
            v100,
            v101,
            v102,
            v103,
            v104,
            v105);
        }
        if ( !v93 )
          sub_B5D69C(v95, v94);
        All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v93,
                (System_Predicate_T__o *)_9__102_0,
                (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v108 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All;
        if ( !All )
          sub_B5D69C(0LL, v107);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_B5D69C(0LL, v107);
          SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v111 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_MapControl_SpotInfo__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v111,
            (Il2CppObject *)v73,
            Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
          if ( !SpotList )
            sub_B5D69C(v112, v113);
          if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
                 (System_Predicate_T__o *)v111,
                 (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_B5D69C(0LL, v114);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v83 )
              sub_B5D69C(transform, v117);
            v118 = transform;
            SpotId_k__BackingField = (*v83)->fields._SpotId_k__BackingField;
            if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            }
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v118 )
              sub_B5D69C(GobjName, GobjName);
            v121 = UnityEngine_Transform__Find(v118, GobjName, 0LL);
            if ( !v121 )
              sub_B5D69C(0LL, v122);
            *(UnityEngine_Vector3_o *)&v125 = UnityEngine_Transform__get_localPosition(v121, 0LL);
            v128 = this->fields.submarineData;
            if ( !v128 )
              sub_B5D69C(v123, v124);
            Settings_k__BackingField = v128->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_B5D69C(v123, v124);
            MoveCameraToPositionTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                                                                this,
                                                                                                *(UnityEngine_Vector3_o *)&v125,
                                                                                                1.0,
                                                                                                Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                                                                v124);
            if ( !v69 )
              sub_B5D69C(MoveCameraToPositionTask, MoveCameraToPositionTask);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v69,
              MoveCameraToPositionTask,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          }
          v131 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                  v108,
                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                                                                  this,
                                                                                                  v131,
                                                                                                  v132);
          if ( !v69 )
            sub_B5D69C(OpenPanelsAndRevealSpotsTask, OpenPanelsAndRevealSpotsTask);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v69,
            OpenPanelsAndRevealSpotsTask,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v136,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v69;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  SchedulerTaskNone_o *v5; // x19

  if ( (byte_42E7B7F & 1) == 0 )
  {
    sub_B5D5C4(&SchedulerTaskNone_TypeInfo, (_DWORD)panelData, (_DWORD)method, v4);
    byte_42E7B7F = 1;
  }
  v5 = (SchedulerTaskNone_o *)sub_B5D694(SchedulerTaskNone_TypeInfo);
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
  const MethodInfo_234E954 *v5; // x2
  __int64 v6; // x3
  float y; // s10
  float x; // s11
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  MapCamera_o *mapCamera; // x19
  MapCameraPerformance_o *v19; // x0
  SchedulerTaskBase_o *v20; // x20
  System_Nullable_float__o v22; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_Vector2__o v23; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_float__o v24; // 0:x0.8
  System_Nullable_float__o v25; // 0:x4.8
  System_Nullable_Vector2__o v26; // 0:x0.12
  UnityEngine_Vector2_o v27; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_42E7B78 & 1) == 0 )
  {
    sub_B5D5C4(&MapCameraPerformance_TypeInfo, (_DWORD)method, (_DWORD)v5, v6);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Nullable_Vector2___ctor__, v15, v16, v17);
    byte_42E7B78 = 1;
  }
  mapCamera = this->fields.mapCamera;
  v26.fields.value = (struct UnityEngine_Vector2_o)&v23;
  v27.fields.x = x;
  v27.fields.y = y;
  *(_DWORD *)&v26.fields.has_value = Method_System_Nullable_Vector2___ctor__;
  *(_DWORD *)&v23.fields.has_value = 0;
  v23.fields.value = 0LL;
  System_Nullable_Vector2____ctor(v26, v27, v5);
  v24 = (System_Nullable_float__o)&v22;
  v22 = 0LL;
  System_Nullable_float____ctor(v24, size, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  v19 = (MapCameraPerformance_o *)sub_B5D694(MapCameraPerformance_TypeInfo);
  v25 = v22;
  v20 = (SchedulerTaskBase_o *)v19;
  MapCameraPerformance___ctor(v19, mapCamera, second, v23, v25, 15, 0LL);
  return v20;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__CreateNeverOpenSurrounds(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct MapControl_MapInfo_o *mapInfo; // x24
  SubmarineMapManager_o *v20; // x20
  unsigned int v21; // w25
  struct SubmarineMapAssetManager_o *v22; // x8
  ObjectDomain_o *v23; // x21
  UILabel_o *v24; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v26; // x22
  UnityEngine_Transform_o *v27; // x23
  int v28; // s0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  SubmarineMapPanelComponent_o *v37; // x22
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2
  __int64 v41; // x0
  struct SubmarineMapDataManager_o *v42; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v44; // x20
  int32_t v45; // w21
  int32_t v46; // w22
  int v47; // w28
  struct SubmarineMapDataManager_o *v48; // x8
  unsigned __int64 v49; // d0 OVERLAPPED
  int v50; // s1
  int v51; // s2
  struct SubmarineMapAssetManager_o *v52; // x8
  ObjectDomain_o *v53; // x23
  UILabel_o *v54; // x24
  UnityEngine_Transform_o *v55; // x25
  UnityEngine_GameObject_o *v56; // x24
  UnityEngine_Transform_o *v57; // x25
  int v58; // s0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  SubmarineMapPanelComponent_o *v67; // x24
  const MethodInfo *v68; // x2
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x2

  v4 = this;
  if ( (byte_42E7B62 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    this = (SubmarineMapManager_o *)sub_B5D5C4(&PanelUniqueIDUtil_TypeInfo, v11, v12, v13);
    byte_42E7B62 = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_59;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0LL, 0LL) )
  {
    panelContainer = (UnityEngine_Object_o *)v4->fields.panelContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)v4->fields.closedPanelTexture;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        submarineData = v4->fields.submarineData;
        if ( !submarineData )
          goto LABEL_59;
        this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
                                          submarineData->fields._PositionCalculator_k__BackingField,
                                          v4->fields.closedPanelTexture,
                                          0LL);
        if ( !this )
          goto LABEL_59;
        mapInfo = this->fields.mapInfo;
        v20 = this;
        if ( (int)mapInfo >= 1 )
        {
          v21 = 0;
          while ( 1 )
          {
            v22 = v4->fields.assetManager;
            if ( !v22 )
              break;
            this = (SubmarineMapManager_o *)v4->fields.panelContainer;
            if ( !this )
              break;
            v23 = (ObjectDomain_o *)*((_QWORD *)&v20->fields.warInfo + (int)v21);
            v24 = (UILabel_o *)v22->fields._PanelPrefab_k__BackingField;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              v24,
                                              transform,
                                              (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
            if ( !this )
              break;
            v26 = (UnityEngine_GameObject_o *)this;
            this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( !v23 )
              break;
            v27 = (UnityEngine_Transform_o *)this;
            *(UnityEngine_Vector3_o *)&v28 = ObjectDomain__get_center(v23, 0LL);
            if ( !v27 )
              break;
            UnityEngine_Transform__set_localPosition(v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
            this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v26,
                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
            if ( !this )
              break;
            v37 = (SubmarineMapPanelComponent_o *)this;
            this->fields.mapCamera = 0LL;
            sub_B5D560((BattleServantConfConponent_o *)&this->fields.mapCamera, 0LL, v31, v32, v33, v34, v35, v36);
            SubmarineMapPanelComponent__SetSize(v37, v23, v38);
            SubmarineMapPanelComponent__SetClosedPanelTexture(v37, v23, v4->fields.closedPanelTexture, v39);
            SubmarineMapPanelComponent__SetClosedPanelVisible(v37, 1, v40);
            if ( (int)++v21 >= (int)mapInfo )
              goto LABEL_32;
            if ( v21 >= LODWORD(v20->fields.mapInfo) )
            {
              v41 = sub_B5D6C8(this);
              sub_B5D668(v41, 0LL);
            }
          }
LABEL_59:
          sub_B5D69C(this, method);
        }
LABEL_32:
        this = (SubmarineMapManager_o *)v4->fields.submarineData;
        if ( !this )
          goto LABEL_59;
        this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                          (SubmarineMapDataManager_o *)this,
                                          method);
        v42 = v4->fields.submarineData;
        if ( !v42 )
          goto LABEL_59;
        PositionCalculator_k__BackingField = v42->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_59;
        v44 = this;
        v45 = 0;
        while ( v45 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
        {
          v46 = 0;
          v47 = 1;
          while ( v46 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
          {
            if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
            }
            this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v45, v46, (System_Int32_array *)v44, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v48 = v4->fields.submarineData;
              if ( !v48 )
                goto LABEL_59;
              this = (SubmarineMapManager_o *)v48->fields._PositionCalculator_k__BackingField;
              if ( !this )
                goto LABEL_59;
              v49 = vadd_f32(
                      (float32x2_t)this->fields.warInfo,
                      vmul_f32(
                        vmul_f32(
                          *(float32x2_t *)&this->fields.m_CachedPtr,
                          vcvt_f32_s32(vsub_s32((int32x2_t)__PAIR64__(v47, (2 * v45) | 1u), (int32x2_t)this->fields.mapInfo))),
                        (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
              v50 = HIDWORD(v49);
              v51 = 0;
              this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                                *(UnityEngine_Vector3_o *)&v49,
                                                (SubmarinePanelPositionCalculator_o *)this,
                                                0LL);
              v52 = v4->fields.assetManager;
              if ( !v52 )
                goto LABEL_59;
              v53 = (ObjectDomain_o *)this;
              this = (SubmarineMapManager_o *)v4->fields.panelContainer;
              if ( !this )
                goto LABEL_59;
              v54 = (UILabel_o *)v52->fields._PanelPrefab_k__BackingField;
              v55 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                v54,
                                                v55,
                                                (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
              if ( !this )
                goto LABEL_59;
              v56 = (UnityEngine_GameObject_o *)this;
              this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
              if ( !v53 )
                goto LABEL_59;
              v57 = (UnityEngine_Transform_o *)this;
              *(UnityEngine_Vector3_o *)&v58 = ObjectDomain__get_center(v53, 0LL);
              if ( !v57 )
                goto LABEL_59;
              UnityEngine_Transform__set_localPosition(v57, *(UnityEngine_Vector3_o *)&v58, 0LL);
              this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v56,
                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              if ( !this )
                goto LABEL_59;
              v67 = (SubmarineMapPanelComponent_o *)this;
              this->fields.mapCamera = 0LL;
              sub_B5D560((BattleServantConfConponent_o *)&this->fields.mapCamera, 0LL, v61, v62, v63, v64, v65, v66);
              SubmarineMapPanelComponent__SetSize(v67, v53, v68);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v67, v53, v4->fields.closedPanelTexture, v69);
              SubmarineMapPanelComponent__SetClosedPanelVisible(v67, 1, v70);
            }
            v42 = v4->fields.submarineData;
            if ( v42 )
            {
              PositionCalculator_k__BackingField = v42->fields._PositionCalculator_k__BackingField;
              ++v46;
              v47 += 2;
              if ( PositionCalculator_k__BackingField )
                continue;
            }
            goto LABEL_59;
          }
          PositionCalculator_k__BackingField = v42->fields._PositionCalculator_k__BackingField;
          ++v45;
          if ( !PositionCalculator_k__BackingField )
            goto LABEL_59;
        }
      }
    }
  }
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  UnityEngine_GameObject_o *effectContainer; // x0
  const MethodInfo_234ED3C *v42; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v44; // x22
  SchedulerTaskCommonEffect_o *v45; // x0
  SchedulerTaskCommonEffect_o *v46; // x21
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v48; // x24
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  SchedulerTaskBase_array *v56; // x22
  SchedulerTaskWaitTime_o *v57; // x23
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  SchedulerTaskOrthostichy_o *v70; // x21
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v73; // s8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x22
  SchedulerTaskWaitTime_o *v75; // x23
  const MethodInfo *v76; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  SchedulerTaskOrthostichy_o *v78; // x19
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  UnityEngine_GameObject_o *v85; // x20
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  SchedulerTaskParallel_o *v92; // x19
  __int64 v94; // x0
  __int64 v95; // x0
  SubmarineMapManager_o *v96; // x0
  SubmarineMapPanelData_array *v97; // x1
  const MethodInfo *v98; // x2
  System_Nullable_Vector3__o v99; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v100; // 0:x0.16
  System_Nullable_Vector3__o v101; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7B7C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__,
      (_DWORD)panelData,
      (_DWORD)method,
      v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v17, v18, v19);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&SchedulerTaskCommonEffect_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SchedulerTaskOrthostichy_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_SubmarineMapPanelData_OpenPanel__, v35, v36, v37);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v38, v39, v40);
    byte_42E7B7C = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_25;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_25;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  v44 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v100.fields.value.fields.x = &v99;
  *(_QWORD *)&v99.fields.value.fields.x = 0LL;
  *(_QWORD *)&v99.fields.value.fields.z = 0LL;
  *(_QWORD *)&v100.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v100, LocalPosition_k__BackingField, v42);
  v45 = (SchedulerTaskCommonEffect_o *)sub_B5D694(SchedulerTaskCommonEffect_TypeInfo);
  *(_QWORD *)&v101.fields.value.fields.x = 0LL;
  *(_QWORD *)&v101.fields.value.fields.z = 0LL;
  v46 = v45;
  SchedulerTaskCommonEffect___ctor_17515968(
    v45,
    v44,
    effectScanedPanelObjPool,
    v99,
    v101,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v46 )
    goto LABEL_25;
  StartCallback = (System_Delegate_o *)v46->fields.StartCallback;
  v48 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(v48, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v49 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v48, 0LL);
  if ( !v49 || *v49 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    v46->fields.StartCallback = (struct SchedulerTaskBase_TaskCallback_o *)v49;
    sub_B5D560((BattleServantConfConponent_o *)&v46->fields.StartCallback, v49, v50, v51, v52, v53, v54, v55);
    v56 = (SchedulerTaskBase_array *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL);
    v57 = (SchedulerTaskWaitTime_o *)sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
    SchedulerTaskWaitTime___ctor(v57, waitTime, 0LL);
    if ( v56 )
    {
      if ( v57 )
      {
        effectContainer = (UnityEngine_GameObject_o *)sub_B5D684(v57, v56->obj.klass->_1.element_class);
        if ( !effectContainer )
          goto LABEL_27;
      }
      if ( !v56->max_length )
        goto LABEL_26;
      v56->m_Items[0] = (SchedulerTaskBase_o *)v57;
      sub_B5D560((BattleServantConfConponent_o *)v56->m_Items, (System_Int32_array **)v57, v58, v59, v60, v61, v62, v63);
      effectContainer = (UnityEngine_GameObject_o *)sub_B5D684(v46, v56->obj.klass->_1.element_class);
      if ( !effectContainer )
        goto LABEL_27;
      if ( v56->max_length <= 1 )
        goto LABEL_26;
      v56->m_Items[1] = (SchedulerTaskBase_o *)v46;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v56->m_Items[1],
        (System_Int32_array **)v46,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
      v70 = (SchedulerTaskOrthostichy_o *)sub_B5D694(SchedulerTaskOrthostichy_TypeInfo);
      SchedulerTaskOrthostichy___ctor(v70, v56, 0LL);
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
        if ( Settings_k__BackingField )
        {
          v73 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
          v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v74,
            (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
          v75 = (SchedulerTaskWaitTime_o *)sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
          SchedulerTaskWaitTime___ctor(v75, v73, 0LL);
          if ( v74 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v74,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v75,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
            RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                                      this,
                                                                                      panelData,
                                                                                      v76);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v74,
              RevealSpotOnPanelTasks,
              (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
            v78 = (SchedulerTaskOrthostichy_o *)sub_B5D694(SchedulerTaskOrthostichy_TypeInfo);
            SchedulerTaskOrthostichy___ctor_17518008(
              v78,
              (System_Collections_Generic_List_SchedulerTaskBase__o *)v74,
              0LL);
            effectContainer = (UnityEngine_GameObject_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL);
            if ( effectContainer )
            {
              v85 = effectContainer;
              if ( !v70
                || (effectContainer = (UnityEngine_GameObject_o *)sub_B5D684(
                                                                    v70,
                                                                    effectContainer->klass->_1.element_class)) != 0LL )
              {
                if ( !LODWORD(v85[1].klass) )
                  goto LABEL_26;
                v85[1].monitor = v70;
                sub_B5D560(
                  (BattleServantConfConponent_o *)&v85[1].monitor,
                  (System_Int32_array **)v70,
                  v79,
                  v80,
                  v81,
                  v82,
                  v83,
                  v84);
                if ( !v78
                  || (effectContainer = (UnityEngine_GameObject_o *)sub_B5D684(v78, v85->klass->_1.element_class)) != 0LL )
                {
                  if ( LODWORD(v85[1].klass) > 1 )
                  {
                    *(_QWORD *)&v85[1].fields.m_CachedPtr = v78;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&v85[1].fields,
                      (System_Int32_array **)v78,
                      v86,
                      v87,
                      v88,
                      v89,
                      v90,
                      v91);
                    v92 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v92, (SchedulerTaskBase_array *)v85, 0LL);
                    return (SchedulerTaskBase_o *)v92;
                  }
LABEL_26:
                  v94 = sub_B5D6C8(effectContainer);
                  sub_B5D668(v94, 0LL);
                }
              }
LABEL_27:
              v95 = sub_B5D6BC(effectContainer);
              sub_B5D668(v95, 0LL);
            }
          }
        }
      }
    }
LABEL_25:
    sub_B5D69C(effectContainer, panelData);
  }
  v96 = (SubmarineMapManager_o *)sub_B5D990(v49);
  return SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(v96, v97, v98);
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_array *panelDataArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *OpenPanelAndRevealSpotTask; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  unsigned __int64 v20; // x22
  SchedulerTaskParallel_o *v21; // x19
  __int64 v23; // x0

  if ( (byte_42E7B7D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SchedulerTaskBase__Add__,
      (_DWORD)panelDataArray,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v12, v13, v14);
    byte_42E7B7D = 1;
  }
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_11;
  v19 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v19 )
      {
        v23 = sub_B5D6C8(OpenPanelAndRevealSpotTask);
        sub_B5D668(v23, 0LL);
      }
      OpenPanelAndRevealSpotTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                                                            this,
                                                                                            panelDataArray->m_Items[v20],
                                                                                            0.0,
                                                                                            v18);
      if ( !v15 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v15,
        OpenPanelAndRevealSpotTask,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      LODWORD(v19) = panelDataArray->max_length;
      if ( (__int64)++v20 >= (int)v19 )
        goto LABEL_9;
    }
LABEL_11:
    sub_B5D69C(OpenPanelAndRevealSpotTask, v17);
  }
LABEL_9:
  v21 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_17518364(v21, (System_Collections_Generic_List_SchedulerTaskBase__o *)v15, 0LL);
  return (SchedulerTaskBase_o *)v21;
}


void __fastcall SubmarineMapManager__CreatePanels(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v37; // x0
  __int64 v38; // x1
  struct SubmarineMapAssetManager_o *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  Il2CppObject *current; // x20
  UILabel_o *v42; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v44; // x0
  __int64 v45; // x1
  UnityEngine_GameObject_o *v46; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v48; // x1
  struct SubmarineMapDataManager_o *v49; // x8
  srcLineSprite_o *v50; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v52; // s8
  float v53; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  __int64 v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  ObjectDomain_o *v62; // x23
  const MethodInfo *v63; // x2
  const MethodInfo *v64; // x3
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v71; // x21
  const MethodInfo *v72; // x2
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v74; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E7B61 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_SubmarineMapPanelData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_SubmarineMapPanelData__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v14, v15, v16);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v20, v21, v22);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v23, v24, v25);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v26, v27, v28);
    this = (SubmarineMapManager_o *)sub_B5D5C4(&Method_SubmarineMapManager_ClickPanel__, v29, v30, v31);
    byte_42E7B61 = 1;
  }
  memset(&v74, 0, sizeof(v74));
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_40;
  PanelPrefab_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._PanelPrefab_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(PanelPrefab_k__BackingField, 0LL, 0LL) )
  {
    panelContainer = (UnityEngine_Object_o *)v4->fields.panelContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)v4->fields.closedPanelTexture;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        submarineData = v4->fields.submarineData;
        if ( submarineData )
        {
          this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField;
          if ( this )
          {
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              &v73,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
              (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v74 = v73;
            while ( 1 )
            {
              v37 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v74,
                      (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v37 )
                break;
              v39 = v4->fields.assetManager;
              if ( !v39 )
                sub_B5D69C(v37, v38);
              v40 = v4->fields.panelContainer;
              if ( !v40 )
                sub_B5D69C(0LL, v38);
              current = v74.fields.current;
              v42 = (UILabel_o *)v39->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v40, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v44 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  v42,
                                                  transform,
                                                  (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
              v46 = v44;
              if ( !v44 )
                sub_B5D69C(0LL, v45);
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v44,
                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v49 = v4->fields.submarineData;
              if ( !v49 )
                sub_B5D69C(Component_srcLineSprite, v48);
              if ( !current )
                sub_B5D69C(Component_srcLineSprite, v48);
              v50 = Component_srcLineSprite;
              PositionCalculator_k__BackingField = v49->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_B5D69C(0LL, v48);
              v52 = PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.x
                                  * (float)(((2 * LODWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField))
                          * 0.5);
              v53 = PositionCalculator_k__BackingField->fields._OffsetY_k__BackingField
                  + (float)((float)(PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField.fields.y
                                  * (float)(((2 * HIDWORD(current[1].klass)) | 1)
                                          - PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField))
                          * 0.5);
              v75.fields.z = 0.0;
              v75.fields.x = v52;
              v75.fields.y = v53;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v75,
                                    PositionCalculator_k__BackingField,
                                    0LL);
              if ( !v50 )
                sub_B5D69C(ClosedPanelDomain, v55);
              v62 = ClosedPanelDomain;
              v50->fields.mcLineSprite = 0LL;
              sub_B5D560((BattleServantConfConponent_o *)&v50->fields.mcLineSprite, 0LL, v56, v57, v58, v59, v60, v61);
              v76.fields.z = 0.0;
              v76.fields.x = v52;
              v76.fields.y = v53;
              GameObjectExtensions__SetLocalPosition(v46, v76, 0LL);
              SubmarineMapPanelComponent__SetSize((SubmarineMapPanelComponent_o *)v50, v62, v63);
              SubmarineMapPanelComponent__SetClosedPanelTexture(
                (SubmarineMapPanelComponent_o *)v50,
                v62,
                v4->fields.closedPanelTexture,
                v64);
              current[3].klass = (Il2CppClass *)v50;
              sub_B5D560(
                (BattleServantConfConponent_o *)&current[3],
                (System_Int32_array **)v50,
                v65,
                v66,
                v67,
                v68,
                v69,
                v70);
              v71 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_SubmarineMapPanelData__TypeInfo);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v71,
                (Il2CppObject *)v4,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                (const MethodInfo_258B320 *)Method_System_Action_SubmarineMapPanelData___ctor__);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v71,
                v72);
            }
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v74,
              (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_40:
        sub_B5D69C(this, method);
      }
    }
  }
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealEachSpotsTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  void *Children; // x0
  __int64 v19; // x1
  int v20; // w8
  void *v21; // x21
  unsigned int v22; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v24; // x2
  __int64 v26; // x0

  if ( (byte_42E7B80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E7B80 = 1;
  }
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_16;
  v20 = *((_DWORD *)Children + 6);
  v21 = Children;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v20 )
      {
        v26 = sub_B5D6C8(Children);
        sub_B5D668(v26, 0LL);
      }
      Children = (void *)*((_QWORD *)v21 + (int)v22 + 4);
      if ( !Children )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Children,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (void *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_srcLineSprite, v24);
        if ( !v17 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v17,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v17;
    }
LABEL_16:
    sub_B5D69C(Children, v19);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v17;
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotOnPanelTasks(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  __int64 v39; // x22
  MapControl_MapInfo_o *mapInfo; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x20
  SchedulerTaskNone_o *v50; // x23
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v52; // x24
  __int64 v53; // x8
  UnityEngine_Transform_o *v54; // x21
  int32_t v55; // w22
  UnityEngine_Object_o *v56; // x21
  WebViewObject_o *Component_WebViewObject; // x1
  const MethodInfo *v59; // x2

  if ( (byte_42E7B7B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___, (_DWORD)panelData, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&SchedulerTaskNone_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__, v33, v34, v35);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass95_0_TypeInfo, v36, v37, v38);
    byte_42E7B7B = 1;
  }
  v39 = sub_B5D694(SubmarineMapManager___c__DisplayClass95_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass95_0___ctor((SubmarineMapManager___c__DisplayClass95_0_o *)v39, 0LL);
  if ( !v39 )
    goto LABEL_23;
  *(_QWORD *)(v39 + 16) = panelData;
  v48 = v39 + 16;
  sub_B5D560((BattleServantConfConponent_o *)(v39 + 16), (System_Int32_array **)panelData, v42, v43, v44, v45, v46, v47);
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v50 = (SchedulerTaskNone_o *)sub_B5D694(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor(v50, 0LL);
  if ( !v49 )
    goto LABEL_23;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v49,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( !*(_QWORD *)v48 || *(int *)(*(_QWORD *)v48 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v49;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_23;
  SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v52 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_MapControl_SpotInfo__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v52,
    (Il2CppObject *)v39,
    Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__,
    (const MethodInfo_2B9320C *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
  if ( !SpotList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
          (System_Predicate_T__o *)v52,
          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v49;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_23;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v53 = *(_QWORD *)v48;
  if ( !*(_QWORD *)v48 )
    goto LABEL_23;
  v54 = (UnityEngine_Transform_o *)mapInfo;
  v55 = *(_DWORD *)(v53 + 40);
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v55, 0LL);
  if ( !v54 )
    goto LABEL_23;
  v56 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v54, (System_String_o *)mapInfo, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v56, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v49;
  if ( !v56 )
LABEL_23:
    sub_B5D69C(mapInfo, v41);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v56,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_WebViewObject, v59);
}


System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateRevealSpotTasks(
        SubmarineMapManager_o *this,
        SrcSpotBasePrefab_o *spot,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  __int64 v26; // x1
  SpotEntity_o *Mine; // x22
  const MethodInfo *v28; // x2
  __int64 v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_42E7B81 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, (_DWORD)spot, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SubmarineLightenSpotPerformance_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&SubmarineRevealSpotPerformance_TypeInfo, v21, v22, v23);
    byte_42E7B81 = 1;
  }
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_19;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_19;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v24;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_19;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v24;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v28);
  v29 = sub_B5D694(SubmarineRevealSpotPerformance_TypeInfo);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v29, 0LL);
  *(_QWORD *)(v29 + 48) = spot;
  sub_B5D560((BattleServantConfConponent_o *)(v29 + 48), (System_Int32_array **)spot, v30, v31, v32, v33, v34, v35);
  if ( !v24 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v24,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
LABEL_19:
    sub_B5D69C(mMapCtrl_SpotInfo, v26);
  if ( QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
  {
    v36 = sub_B5D694(SubmarineLightenSpotPerformance_TypeInfo);
    SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v36, 0LL);
    *(_QWORD *)(v36 + 48) = spot;
    sub_B5D560((BattleServantConfConponent_o *)(v36 + 48), (System_Int32_array **)spot, v37, v38, v39, v40, v41, v42);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v24,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v36,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v24;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateScanOpenPanelTask(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x20
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  __int64 v63; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  float ScanOpenPanelInterval; // s8
  const MethodInfo *v66; // x3
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v67; // x21
  SubmarineMapManager___c_c *v68; // x8
  struct SubmarineMapManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__98_0; // x22
  Il2CppObject *v71; // x23
  struct SubmarineMapManager___c_StaticFields *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Collections_Generic_List_T__o *All; // x0
  SubmarineMapManager___c_c *v80; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x21
  struct SubmarineMapManager___c_StaticFields *v82; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__98_1; // x22
  Il2CppObject *v84; // x23
  struct SubmarineMapManager___c_StaticFields *v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  int32_t v92; // w23
  SubmarineMapManager___c__DisplayClass98_0_o *v93; // x22
  int v94; // w27
  int v95; // w25
  float v96; // s9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v97; // x23
  System_Collections_Generic_List_T__o *v98; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v99; // x0
  _BOOL8 v100; // x0
  __int64 v101; // x1
  const MethodInfo *v102; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v104; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v106; // x2
  float v107; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v109; // x1
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v111; // w8
  int v112; // w8
  SchedulerTaskParallel_o *v113; // x19
  _BYTE v115[28]; // [xsp+0h] [xbp-A0h] BYREF
  int v116; // [xsp+1Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v117; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_42E7B7E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___, scanId, (_DWORD)panelData, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Func_SubmarineScanEvent__int___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Func_SubmarineScanEvent__int__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&Method_System_Predicate_SubmarineScanEvent___ctor__, v37, v38, v39);
    sub_B5D5C4(&System_Predicate_SubmarineScanEvent__TypeInfo, v40, v41, v42);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__, v46, v47, v48);
    sub_B5D5C4(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__, v49, v50, v51);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__, v52, v53, v54);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass98_0_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&SubmarineMapManager___c_TypeInfo, v58, v59, v60);
    byte_42E7B7E = 1;
  }
  memset(&v117, 0, sizeof(v117));
  v116 = 0;
  v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v61,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_47;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_47;
  ScanOpenPanelInterval = SubmarineSettingsManager__GetScanOpenPanelInterval(Settings_k__BackingField, scanId, 0LL);
  Settings_k__BackingField = (SubmarineSettingsManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                                             scanId,
                                                             panelData,
                                                             this->fields.submarineData,
                                                             v66);
  v67 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)Settings_k__BackingField;
  v68 = SubmarineMapManager___c_TypeInfo;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v68 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v68->static_fields;
  _9__98_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v71 = (Il2CppObject *)static_fields->__9;
    _9__98_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SubmarineScanEvent__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__98_0,
      v71,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_SubmarineScanEvent___ctor__);
    v72 = SubmarineMapManager___c_TypeInfo->static_fields;
    v72->__9__98_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__98_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v72->__9__98_0,
      (System_Int32_array **)_9__98_0,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
  }
  if ( !v67 )
    goto LABEL_47;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          v67,
          (System_Predicate_T__o *)_9__98_0,
          (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v80 = SubmarineMapManager___c_TypeInfo;
  v81 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v80 = SubmarineMapManager___c_TypeInfo;
  }
  v82 = v80->static_fields;
  _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v82->__9__98_1;
  if ( !_9__98_1 )
  {
    if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      v82 = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v84 = (Il2CppObject *)v82->__9;
    _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_SubmarineScanEvent__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__98_1,
      v84,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_SubmarineScanEvent__int___ctor__);
    v85 = SubmarineMapManager___c_TypeInfo->static_fields;
    v85->__9__98_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__98_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v85->__9__98_1,
      (System_Int32_array **)_9__98_1,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
  }
  v92 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
          v81,
          (System_Func_TSource__int__o *)_9__98_1,
          (const MethodInfo_1CAE860 *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v93 = (SubmarineMapManager___c__DisplayClass98_0_o *)sub_B5D694(SubmarineMapManager___c__DisplayClass98_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass98_0___ctor(v93, 0LL);
  if ( !v93 )
    goto LABEL_47;
  v94 = v92 + 1;
  v93->fields.i = 0;
  if ( v92 + 1 >= 1 )
  {
    v95 = 0;
    v96 = 0.0;
    while ( 1 )
    {
      v97 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SubmarineScanEvent__TypeInfo);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v97,
        (Il2CppObject *)v93,
        Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__,
        (const MethodInfo_2B9320C *)Method_System_Predicate_SubmarineScanEvent___ctor__);
      if ( !v81 )
        break;
      v98 = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v81,
              (System_Predicate_T__o *)v97,
              (const MethodInfo_3057948 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v99 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v99,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v98 )
        break;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v115,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v98,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v117 = *(System_Collections_Generic_List_Enumerator_T__o *)v115;
      while ( 1 )
      {
        v100 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                 &v117,
                 (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v100 )
          break;
        current = v117.fields.current;
        if ( !v117.fields.current )
          sub_B5D69C(v100, v101);
        v104 = this->fields.submarineData;
        if ( !v104 )
          sub_B5D69C(0LL, v101);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v104,
                           (int32_t)v117.fields.current[1].klass,
                           HIDWORD(v117.fields.current[1].klass),
                           v102);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v107,
                                v106);
            v109 = (EventMissionProgressRequest_Argument_ProgressData_o *)HitObstractTask;
            if ( !v61 )
              sub_B5D69C(HitObstractTask, HitObstractTask);
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v96,
                                           v106);
            v109 = (EventMissionProgressRequest_Argument_ProgressData_o *)OpenPanelAndRevealSpotTask;
            if ( !v61 )
              sub_B5D69C(OpenPanelAndRevealSpotTask, OpenPanelAndRevealSpotTask);
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v61,
            v109,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
      *(_DWORD *)&v115[4 * v95 + 24] = 274;
      v95 = ++v116;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v117,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      if ( v95 )
      {
        v111 = v95 - 1;
        if ( *(_DWORD *)&v115[4 * v95 + 20] == 274 )
        {
          --v95;
          v116 = v111;
        }
      }
      v96 = ScanOpenPanelInterval + v96;
      v112 = v93->fields.i + 1;
      v93->fields.i = v112;
      if ( v112 >= v94 )
        goto LABEL_46;
    }
LABEL_47:
    sub_B5D69C(Settings_k__BackingField, v63);
  }
LABEL_46:
  v113 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
  SchedulerTaskParallel___ctor_17518364(v113, (System_Collections_Generic_List_SchedulerTaskBase__o *)v61, 0LL);
  return (SchedulerTaskBase_o *)v113;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateScanTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        int32_t scanId,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  __int64 v85; // x20
  __int64 MoveCameraToPositionTask; // x0
  const MethodInfo *v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v96; // d11
  float32x2_t v97; // d9
  int32x2_t v98; // d10
  float32x2_t v99; // d8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v100; // x19
  struct SubmarineMapDataManager_o *v101; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v103; // d0 OVERLAPPED
  float v104; // s8
  int v105; // s2
  int v106; // s1
  const MethodInfo *v107; // x2
  UnityEngine_Object_o *ScanAnimObjectPrefab; // x22
  const MethodInfo *v109; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v111; // s2
  float v112; // s0
  float v113; // s1
  float v114; // s9
  UnityEngine_Transform_o *transform; // x23
  System_Int32_array **v116; // x0
  UnityEngine_GameObject_o **v117; // x24
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  UIWidget_o *Component_UIWidget; // x0
  unsigned __int64 v125; // d1 OVERLAPPED
  SubmarineScannerComponent_o *v126; // x22
  void (__fastcall *v127)(); // d0
  float magnitude; // s0
  struct SubmarineMapDataManager_o *v129; // x8
  struct SubmarineSettingsManager_o *v130; // x8
  float v131; // s0
  float v132; // s1
  float v133; // s2
  const MethodInfo *v134; // x1
  float JumpStartTime; // s10
  SchedulerTaskWaitTime_o *v136; // x25
  BattleServantConfConponent_o *p_StartCallback; // x25
  System_Delegate_o *StartCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v139; // x27
  System_Int32_array **v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  System_Int32_array **v147; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v149; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v150; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  System_Int32_array **v153; // x0
  __int64 v154; // x25
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  __int64 v161; // x8
  System_String_o *v162; // x26
  SchedulerTaskWaitLoadAsset_o *v163; // x27
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Int32_array **v170; // x1
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Int32_array **v177; // x1
  float v178; // s10
  __int64 v179; // x25
  System_Delegate_o *v180; // x27
  SchedulerTaskBase_TaskCallback_o *v181; // x28
  System_Int32_array **v182; // x0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  const MethodInfo *v189; // x1
  float SelectedPanelEffecFinishTime; // s10
  __int64 v191; // x25
  System_Delegate_o *v192; // x27
  SchedulerTaskBase_TaskCallback_o *v193; // x28
  System_Int32_array **v194; // x0
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  const MethodInfo *v201; // x1
  float JumpDuration; // s10
  void (__fastcall *v203)(); // d0 OVERLAPPED
  float v204; // s1
  float v205; // s0
  MapCamera_o *mapCamera; // x21
  float v207; // s11
  const MethodInfo_234E954 *v208; // x2
  MapCameraPerformance_o *v209; // x0
  System_Int32_array **v210; // x26
  UnityEngine_GameObject_o *v211; // x24
  SchedulerTaskMovePerformance_o *v212; // x0
  System_Int32_array **v213; // x21
  System_String_array **v214; // x2
  System_String_array **v215; // x3
  System_Boolean_array **v216; // x4
  System_Int32_array **v217; // x5
  System_Int32_array *v218; // x6
  System_Int32_array *v219; // x7
  SchedulerTaskBase_array *v220; // x24
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  SchedulerTaskParallel_o *v227; // x21
  const MethodInfo *v228; // x1
  int v229; // w1
  int v230; // w2
  __int64 v231; // x3
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8
  System_String_o *v235; // x27
  __int64 v236; // x24
  System_Delegate_o *v237; // x27
  SchedulerTaskBase_TaskCallback_o *v238; // x28
  System_Int32_array **v239; // x0
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  __int64 v246; // x20
  System_String_array **v247; // x2
  System_String_array **v248; // x3
  System_Boolean_array **v249; // x4
  System_Int32_array **v250; // x5
  System_Int32_array *v251; // x6
  System_Int32_array *v252; // x7
  __int64 v253; // x24
  System_String_array **v254; // x2
  System_String_array **v255; // x3
  System_Boolean_array **v256; // x4
  System_Int32_array **v257; // x5
  System_Int32_array *v258; // x6
  System_Int32_array *v259; // x7
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  SchedulerTaskOrthostichy_o *v266; // x21
  System_String_array **v267; // x2
  System_String_array **v268; // x3
  System_Boolean_array **v269; // x4
  System_Int32_array **v270; // x5
  System_Int32_array *v271; // x6
  System_Int32_array *v272; // x7
  SchedulerTaskParallel_o *v273; // x21
  float TimeToStartOpenPanel; // s8
  SchedulerTaskWaitTime_o *v275; // x20
  __int64 v277; // x0
  __int64 v278; // x0
  SubmarineMapManager_o *v279; // x0
  int32_t v280; // w1
  SubmarineMapPanelData_o *v281; // x2
  const MethodInfo *v282; // x3
  System_Int32_array **v283; // [xsp+8h] [xbp-E8h]
  float v284; // [xsp+20h] [xbp-D0h]
  float v285; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_float__o v287; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_Vector2__o v288; // [xsp+58h] [xbp-98h] BYREF
  MethodInfo methoda; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o v290; // 0:x0.8
  System_Nullable_float__o v291; // 0:x4.8
  System_Nullable_Vector2__o v292; // 0:x0.12
  UnityEngine_Vector2_o v293; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v294; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v295; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v296; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_42E7B7A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, (_DWORD)panelData, scanId, method);
    sub_B5D5C4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___, v10, v11, v12);
    sub_B5D5C4(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&MapCameraPerformance_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Nullable_Vector2___ctor__, v31, v32, v33);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v34, v35, v36);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v40, v41, v42);
    sub_B5D5C4(&SchedulerTaskMovePerformance_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&SchedulerTaskOrthostichy_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&SchedulerTaskParallel_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&SchedulerTaskSimpleAnimation_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&SchedulerTaskWaitLoadAsset_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&SchedulerTaskWaitTime_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v61, v62, v63);
    sub_B5D5C4(&SoundManager_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__, v70, v71, v72);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__, v73, v74, v75);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__, v76, v77, v78);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__, v79, v80, v81);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo, v82, v83, v84);
    byte_42E7B7A = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v85 = sub_B5D694(SubmarineMapManager___c__DisplayClass94_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass94_0___ctor((SubmarineMapManager___c__DisplayClass94_0_o *)v85, 0LL);
  if ( !v85 )
    goto LABEL_88;
  *(_QWORD *)(v85 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v85 + 32), (System_Int32_array **)this, v88, v89, v90, v91, v92, v93);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_88;
  if ( !panelData )
    goto LABEL_88;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_88;
  v96.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v97.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v98.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v99.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v100,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v101 = this->fields.submarineData;
  if ( !v101 )
    goto LABEL_88;
  Settings_k__BackingField = v101->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_88;
  v103 = vadd_f32(
           v99,
           vmul_f32(
             vmul_f32(v97, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v96, 1uLL).n64_u64[0] | 0x100000001LL), v98))),
             (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v104 = *((float *)&v103 + 1);
  v105 = 0;
  v106 = HIDWORD(v103);
  value = (UnityEngine_Vector2_o)v103;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v103,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v87);
  if ( !v100 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v100,
    (EventMissionProgressRequest_Argument_ProgressData_o *)MoveCameraToPositionTask,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v100;
  if ( !this->fields.assetManager )
    goto LABEL_88;
  ScanAnimObjectPrefab = (UnityEngine_Object_o *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                                   this->fields.assetManager,
                                                   *(_DWORD *)(MoveCameraToPositionTask + 56),
                                                   v107);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(ScanAnimObjectPrefab, 0LL, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v100;
  HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v109);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MoveCameraToPositionTask = UnityEngine_Object__op_Equality(HomeSpot, 0LL, 0LL);
  if ( (MoveCameraToPositionTask & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v100;
  if ( !HomeSpot )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0LL);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  *(UnityEngine_Vector3_o *)(&v111 - 2) = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                            0LL);
  MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
  v285 = v112;
  v284 = v113;
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  v114 = v111;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v116 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                  (UILabel_o *)ScanAnimObjectPrefab,
                                  transform,
                                  (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
  *(_QWORD *)(v85 + 16) = v116;
  v117 = (UnityEngine_GameObject_o **)(v85 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v85 + 16), v116, v118, v119, v120, v121, v122, v123);
  v294.fields.y = v284;
  v294.fields.x = v285;
  v294.fields.z = v114;
  GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v85 + 16), v294, 0LL);
  MoveCameraToPositionTask = *(_QWORD *)(v85 + 16);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         *v117,
                         (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
  v125 = __PAIR64__(LODWORD(v284), LODWORD(v285));
  v126 = (SubmarineScannerComponent_o *)Component_UIWidget;
  *(float *)&methoda.invoker_method = v114;
  v127 = (void (__fastcall *)())vsub_f32((float32x2_t)__PAIR64__(LODWORD(v284), LODWORD(v285)), (float32x2_t)value).n64_u64[0];
  methoda.methodPointer = v127;
  magnitude = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)((char *)&v125 - 4), &methoda);
  if ( !v126 )
    goto LABEL_88;
  SubmarineScannerComponent__PrepareAnimation(v126, magnitude, v87);
  if ( !v126->fields.state )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v100;
  v100 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v100,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v129 = this->fields.submarineData;
  if ( !v129 )
    goto LABEL_88;
  v130 = v129->fields._Settings_k__BackingField;
  v132 = v284;
  v131 = v285;
  if ( !v130 )
    goto LABEL_88;
  v133 = v114;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v131,
                                        1.0,
                                        v130->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v87);
  if ( !v100 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v100,
    (EventMissionProgressRequest_Argument_ProgressData_o *)MoveCameraToPositionTask,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(v126, v134);
  v136 = (SchedulerTaskWaitTime_o *)sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
  SchedulerTaskWaitTime___ctor(v136, JumpStartTime, 0LL);
  if ( !v136 )
    goto LABEL_88;
  v283 = (System_Int32_array **)v136;
  StartCallback = (System_Delegate_o *)v136->fields.StartCallback;
  p_StartCallback = (BattleServantConfConponent_o *)&v136->fields.StartCallback;
  v139 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v139,
    (Il2CppObject *)v85,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__,
    0LL);
  v140 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v139, 0LL);
  v147 = v140;
  if ( !v140 || *v140 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    p_StartCallback->klass = (BattleServantConfConponent_c *)v140;
    sub_B5D560(p_StartCallback, v140, v141, v142, v143, v144, v145, v146);
    playingScanVoiceData = this->fields.playingScanVoiceData;
    if ( !playingScanVoiceData )
      goto LABEL_88;
    MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
    if ( (MoveCameraToPositionTask & 1) == 0 )
    {
      v149 = this->fields.playingScanVoiceData;
      if ( !v149 )
        goto LABEL_88;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(v149->fields.assetName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v150 = this->fields.playingScanVoiceData;
        if ( !v150 )
          goto LABEL_88;
        assetName = v150->fields.assetName;
        vcName = v150->fields.vcName;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
      }
    }
    v153 = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                    *(UnityEngine_GameObject_o **)(v85 + 16),
                                    (const MethodInfo_1E5984C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    v154 = v85 + 24;
    *(_QWORD *)(v85 + 24) = v153;
    sub_B5D560((BattleServantConfConponent_o *)(v85 + 24), v153, v155, v156, v157, v158, v159, v160);
    v161 = *(_QWORD *)(v85 + 24);
    if ( !v161 )
      goto LABEL_88;
    v162 = *(System_String_o **)(v161 + 48);
    v163 = (SchedulerTaskWaitLoadAsset_o *)sub_B5D694(SchedulerTaskWaitLoadAsset_TypeInfo);
    SchedulerTaskWaitLoadAsset___ctor(v163, v162, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v100,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v163,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    if ( !*(_QWORD *)v154 )
      goto LABEL_88;
    MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
    if ( !MoveCameraToPositionTask )
      goto LABEL_88;
    v170 = *(System_Int32_array ***)(*(_QWORD *)v154 + 48LL);
    *(_QWORD *)(MoveCameraToPositionTask + 16) = v170;
    sub_B5D560(
      (BattleServantConfConponent_o *)(MoveCameraToPositionTask + 16),
      v170,
      v164,
      v165,
      v166,
      v167,
      v168,
      v169);
    if ( !*(_QWORD *)v154
      || (MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData) == 0
      || (v177 = *(System_Int32_array ***)(*(_QWORD *)v154 + 40LL),
          *(_QWORD *)(MoveCameraToPositionTask + 24) = v177,
          sub_B5D560(
            (BattleServantConfConponent_o *)(MoveCameraToPositionTask + 24),
            v177,
            v171,
            v172,
            v173,
            v174,
            v175,
            v176),
          !*(_QWORD *)v154)
      || (v178 = *(float *)(*(_QWORD *)v154 + 24LL),
          v179 = sub_B5D694(SchedulerTaskWaitTime_TypeInfo),
          SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v179, v178, 0LL),
          !v179) )
    {
LABEL_88:
      sub_B5D69C(MoveCameraToPositionTask, v87);
    }
    v180 = *(System_Delegate_o **)(v179 + 24);
    v181 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v181,
      (Il2CppObject *)v85,
      Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__,
      0LL);
    v182 = (System_Int32_array **)System_Delegate__Combine(v180, (System_Delegate_o *)v181, 0LL);
    v147 = v182;
    if ( !v182 || *v182 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v179 + 24) = v182;
      sub_B5D560((BattleServantConfConponent_o *)(v179 + 24), v182, v183, v184, v185, v186, v187, v188);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v100,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v179,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(v126, v189);
      v191 = sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v191, SelectedPanelEffecFinishTime, 0LL);
      if ( !v191 )
        goto LABEL_88;
      v192 = *(System_Delegate_o **)(v191 + 32);
      v193 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
      SchedulerTaskBase_TaskCallback___ctor(
        v193,
        (Il2CppObject *)v85,
        Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__,
        0LL);
      v194 = (System_Int32_array **)System_Delegate__Combine(v192, (System_Delegate_o *)v193, 0LL);
      v147 = v194;
      if ( !v194 || *v194 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        *(_QWORD *)(v191 + 32) = v194;
        sub_B5D560((BattleServantConfConponent_o *)(v191 + 32), v194, v195, v196, v197, v198, v199, v200);
        *(_BYTE *)(v191 + 16) = 1;
        JumpDuration = SubmarineScannerComponent__GetJumpDuration(v126, v201);
        v203 = (void (__fastcall *)())vsub_f32(
                                        (float32x2_t)value,
                                        (float32x2_t)__PAIR64__(LODWORD(v284), LODWORD(v285))).n64_u64[0];
        v204 = 0.0 - v114;
        methoda.methodPointer = v203;
        *(float *)&methoda.invoker_method = 0.0 - v114;
        v205 = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)&v203, &methoda);
        mapCamera = this->fields.mapCamera;
        v207 = v205 / JumpDuration;
        v293.fields.x = value.fields.x;
        v292.fields.value = (struct UnityEngine_Vector2_o)&v288;
        *(_DWORD *)&v292.fields.has_value = Method_System_Nullable_Vector2___ctor__;
        v293.fields.y = v104;
        *(_DWORD *)&v288.fields.has_value = 0;
        v288.fields.value = 0LL;
        System_Nullable_Vector2____ctor(v292, v293, v208);
        v290 = (System_Nullable_float__o)&v287;
        v287 = 0LL;
        System_Nullable_float____ctor(v290, 1.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
        v209 = (MapCameraPerformance_o *)sub_B5D694(MapCameraPerformance_TypeInfo);
        v291 = v287;
        v210 = (System_Int32_array **)v209;
        MapCameraPerformance___ctor(v209, mapCamera, JumpDuration, v288, v291, 0, 0LL);
        v211 = *v117;
        v212 = (SchedulerTaskMovePerformance_o *)sub_B5D694(SchedulerTaskMovePerformance_TypeInfo);
        v295.fields.y = v284;
        v295.fields.x = v285;
        v296.fields.x = value.fields.x;
        v296.fields.z = 0.0;
        v295.fields.z = v114;
        v296.fields.y = v104;
        v213 = (System_Int32_array **)v212;
        SchedulerTaskMovePerformance___ctor(v212, v211, v295, v296, v207, 0, 0LL);
        MoveCameraToPositionTask = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL);
        if ( !MoveCameraToPositionTask )
          goto LABEL_88;
        v220 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
        if ( v210 )
        {
          MoveCameraToPositionTask = sub_B5D684(v210, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( !MoveCameraToPositionTask )
            goto LABEL_90;
        }
        if ( !v220->max_length )
          goto LABEL_89;
        v220->m_Items[0] = (SchedulerTaskBase_o *)v210;
        sub_B5D560((BattleServantConfConponent_o *)v220->m_Items, v210, v214, v215, v216, v217, v218, v219);
        if ( v213 )
        {
          MoveCameraToPositionTask = sub_B5D684(v213, v220->obj.klass->_1.element_class);
          if ( !MoveCameraToPositionTask )
            goto LABEL_90;
        }
        if ( v220->max_length <= 1 )
          goto LABEL_89;
        v220->m_Items[1] = (SchedulerTaskBase_o *)v213;
        sub_B5D560((BattleServantConfConponent_o *)&v220->m_Items[1], v213, v221, v222, v223, v224, v225, v226);
        v227 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
        SchedulerTaskParallel___ctor(v227, v220, 0LL);
        AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(v126, v228);
        if ( (byte_42E7BB6 & 1) == 0 )
        {
          sub_B5D5C4(&StringLiteral_1/*""*/, v229, v230, v231);
          byte_42E7BB6 = 1;
        }
        state = v126->fields.state;
        if ( state )
          p_name = &state->fields.name;
        else
          p_name = (System_String_o **)&StringLiteral_1/*""*/;
        v235 = *p_name;
        v236 = sub_B5D694(SchedulerTaskSimpleAnimation_TypeInfo);
        SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v236, AnimationComponent, v235, 0LL);
        if ( !v236 )
          goto LABEL_88;
        v237 = *(System_Delegate_o **)(v236 + 32);
        v238 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
        SchedulerTaskBase_TaskCallback___ctor(
          v238,
          (Il2CppObject *)v85,
          Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__,
          0LL);
        v239 = (System_Int32_array **)System_Delegate__Combine(v237, (System_Delegate_o *)v238, 0LL);
        v147 = v239;
        if ( !v239 || *v239 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
        {
          *(_QWORD *)(v236 + 32) = v239;
          sub_B5D560((BattleServantConfConponent_o *)(v236 + 32), v239, v240, v241, v242, v243, v244, v245);
          MoveCameraToPositionTask = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_88;
          v246 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_B5D684(v236, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v246 + 24) )
              goto LABEL_89;
            *(_QWORD *)(v246 + 32) = v236;
            sub_B5D560(
              (BattleServantConfConponent_o *)(v246 + 32),
              (System_Int32_array **)v236,
              v247,
              v248,
              v249,
              v250,
              v251,
              v252);
            MoveCameraToPositionTask = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_88;
            v253 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_B5D684(v283, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v253 + 24) )
                goto LABEL_89;
              *(_QWORD *)(v253 + 32) = v283;
              sub_B5D560((BattleServantConfConponent_o *)(v253 + 32), v283, v254, v255, v256, v257, v258, v259);
              if ( !v227 || (MoveCameraToPositionTask = sub_B5D684(v227, *(_QWORD *)(*(_QWORD *)v253 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v253 + 24) <= 1u )
                  goto LABEL_89;
                *(_QWORD *)(v253 + 40) = v227;
                sub_B5D560(
                  (BattleServantConfConponent_o *)(v253 + 40),
                  (System_Int32_array **)v227,
                  v260,
                  v261,
                  v262,
                  v263,
                  v264,
                  v265);
                v266 = (SchedulerTaskOrthostichy_o *)sub_B5D694(SchedulerTaskOrthostichy_TypeInfo);
                SchedulerTaskOrthostichy___ctor(v266, (SchedulerTaskBase_array *)v253, 0LL);
                if ( !v266 || (MoveCameraToPositionTask = sub_B5D684(v266, *(_QWORD *)(*(_QWORD *)v246 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v246 + 24) > 1u )
                  {
                    *(_QWORD *)(v246 + 40) = v266;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)(v246 + 40),
                      (System_Int32_array **)v266,
                      v267,
                      v268,
                      v269,
                      v270,
                      v271,
                      v272);
                    v273 = (SchedulerTaskParallel_o *)sub_B5D694(SchedulerTaskParallel_TypeInfo);
                    SchedulerTaskParallel___ctor(v273, (SchedulerTaskBase_array *)v246, 0LL);
                    if ( v273 )
                    {
                      v273->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(v126, v87);
                      v275 = (SchedulerTaskWaitTime_o *)sub_B5D694(SchedulerTaskWaitTime_TypeInfo);
                      SchedulerTaskWaitTime___ctor(v275, TimeToStartOpenPanel, 0LL);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v100,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v191,
                        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v100,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v273,
                        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v100,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v275,
                        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      return (System_Collections_Generic_List_SchedulerTaskBase__o *)v100;
                    }
                    goto LABEL_88;
                  }
LABEL_89:
                  v277 = sub_B5D6C8(MoveCameraToPositionTask);
                  sub_B5D668(v277, 0LL);
                }
              }
            }
          }
LABEL_90:
          v278 = sub_B5D6BC(MoveCameraToPositionTask);
          sub_B5D668(v278, 0LL);
        }
      }
    }
  }
  v279 = (SubmarineMapManager_o *)sub_B5D990(v147);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)SubmarineMapManager__CreateScanOpenPanelTask(
                                                                   v279,
                                                                   v280,
                                                                   v281,
                                                                   v282);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SchedulerTaskBase__o *__fastcall SubmarineMapManager__CreateSubsequentialOpenPanelTasks(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  float z; // s8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x21
  SchedulerTaskBase_o *PanelDataList_k__BackingField; // x0
  const MethodInfo *v42; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int128 v44; // q1
  _BOOL8 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  __int64 v50; // x1
  struct SubmarineMapDataManager_o *v51; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  __int128 v53; // q1
  SubmarineMapPanelData_array *v54; // x0
  const MethodInfo *v55; // x2
  struct SubmarineMapDataManager_o *v56; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  signed int size; // w9
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x22
  unsigned __int64 v60; // d0 OVERLAPPED
  float v61; // s2
  int v62; // s1
  float y; // [xsp+0h] [xbp-B0h]
  __int128 v65; // [xsp+10h] [xbp-A0h]
  float32x2_t v66[3]; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E7B83 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v35, v36, v37);
    byte_42E7B83 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v65 = *(_QWORD *)&zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_22;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v67,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PanelDataList_k__BackingField,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v44 = v65;
  *((float *)&v44 + 1) = y;
  *(_OWORD *)v66[0].n64_u64 = v44;
  v68 = v67;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v45 )
      break;
    current = v68.fields.current;
    if ( !v68.fields.current )
      sub_B5D69C(v45, v46);
    if ( !LOBYTE(v68.fields.current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v68.fields.current,
                                          -1,
                                          v47);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v51 = this->fields.submarineData;
        if ( !v51 )
          sub_B5D69C(IsPanelSatisfyCommonReleaseCond, v50);
        PositionCalculator_k__BackingField = (float32x2_t *)v51->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_B5D69C(IsPanelSatisfyCommonReleaseCond, v50);
        z = z + 0.0;
        *((float32x2_t *)&v53 + 1) = v66[1];
        *(float32x2_t *)&v53 = vadd_f32(
                                 v66[0],
                                 vadd_f32(
                                   PositionCalculator_k__BackingField[4],
                                   vmul_f32(
                                     vmul_f32(
                                       PositionCalculator_k__BackingField[2],
                                       vcvt_f32_s32(
                                         vsub_s32(
                                           (int32x2_t)(vshl_n_s32((int32x2_t)current[1].klass, 1uLL).n64_u64[0] | 0x100000001LL),
                                           PositionCalculator_k__BackingField[3]))),
                                     (float32x2_t)0x3F0000003F000000LL)));
        *(_OWORD *)v66[0].n64_u64 = v53;
        if ( !v40 )
          sub_B5D69C(IsPanelSatisfyCommonReleaseCond, v50);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v40,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v40 )
    goto LABEL_22;
  if ( v40->fields._size >= 1 )
  {
    v54 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(this, v54, v55);
    v56 = this->fields.submarineData;
    if ( v56 )
    {
      Settings_k__BackingField = v56->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        size = v40->fields._size;
        v59 = (EventMissionProgressRequest_Argument_ProgressData_o *)PanelDataList_k__BackingField;
        v60 = vdiv_f32(v66[0], vcvt_f32_s32(vdup_n_s32(size))).n64_u64[0];
        v61 = z / (float)size;
        v62 = HIDWORD(v60);
        PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                          this,
                                          *(UnityEngine_Vector3_o *)&v60,
                                          1.0,
                                          Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                          v42);
        if ( v38 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v38,
            (EventMissionProgressRequest_Argument_ProgressData_o *)PanelDataList_k__BackingField,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v38,
            v59,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          return (System_Collections_Generic_List_SchedulerTaskBase__o *)v38;
        }
      }
    }
LABEL_22:
    sub_B5D69C(PanelDataList_k__BackingField, v42);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v38;
}


void __fastcall SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct SubmarineScanConfirmDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleServantConfConponent_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v26; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E7B6D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7B6D = 1;
  }
  p_scanConfirmDialog = &this->fields.scanConfirmDialog;
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scanConfirmDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)*p_scanConfirmDialog;
    if ( !*p_scanConfirmDialog )
      goto LABEL_31;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.scanConfirmDialog, 0LL, v10, v11, v12, v13, v14, v15);
  }
  p_selectScannerDialog = &this->fields.selectScannerDialog;
  selectScannerDialog = (UnityEngine_Object_o *)this->fields.selectScannerDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(selectScannerDialog, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)*p_selectScannerDialog;
    if ( !*p_selectScannerDialog )
      goto LABEL_31;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v18, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.selectScannerDialog, 0LL, v19, v20, v21, v22, v23, v24);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (BattleServantConfConponent_o *)&this->fields.newScannerDialog;
  v26 = (UnityEngine_Object_o *)newScannerDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v28 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v28, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_B5D560(p_newScannerDialog, 0LL, v29, v30, v31, v32, v33, v34);
      return;
    }
LABEL_31:
    sub_B5D69C(klass, v7);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v6; // x1

  if ( (byte_42E7B50 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7B50 = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(panelContainer, 0LL);
  UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
  SubmarineMapManager__DestroyDialog(this, v6);
  EventMapManagerBase__DestroyMapObjects((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__DoPerformancesByVariedCond(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x21
  System_Collections_Generic_IEnumerable_T__o *HideEnemyOccupiedPanelTasks; // x0
  __int64 v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x20
  const MethodInfo *v43; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v46; // w1
  __int64 v47; // x22
  SchedulerTaskBase_TaskCallback_o *v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  if ( (byte_42E7B54 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__,
      (_DWORD)finishCallback,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&SchedulerTaskNone_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__, v21, v22, v23);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo, v24, v25, v26);
    byte_42E7B54 = 1;
  }
  v27 = sub_B5D694(SubmarineMapManager___c__DisplayClass35_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass35_0___ctor((SubmarineMapManager___c__DisplayClass35_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_14;
  *(_QWORD *)(v27 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v27 + 24) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v27 + 24),
    (System_Int32_array **)finishCallback,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_14;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_14;
  v46 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v46,
                                                                                 v43);
  if ( !v42 )
    goto LABEL_14;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v42,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v47 = sub_B5D694(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v47, 0LL);
  v48 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v48,
    (Il2CppObject *)v27,
    Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v47
    || (*(_QWORD *)(v47 + 32) = v48,
        sub_B5D560((BattleServantConfConponent_o *)(v47 + 32), (System_Int32_array **)v48, v49, v50, v51, v52, v53, v54),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v42,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__),
        (HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler) == 0LL) )
  {
LABEL_14:
    sub_B5D69C(HideEnemyOccupiedPanelTasks, v29);
  }
  TaskScheduler__AddTask_19922944(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v42,
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
    sub_B5D69C(assetManager, v6);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v7);
}


void __fastcall SubmarineMapManager__Finish(SubmarineMapManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.submarineData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.submarineData, 0LL, v2, v3, v4, v5, v6, v7);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, 0LL);
}


SrcSpotBasePrefab_o *__fastcall SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_GameObject_array *HasChild; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  int32_t HomeSpotId_k__BackingField; // w22
  int max_length; // w8
  UnityEngine_GameObject_array *v15; // x19
  unsigned int v16; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v19; // x0

  if ( (byte_42E7B66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7B66 = 1;
  }
  HasChild = (UnityEngine_GameObject_array *)GameObjectExtensions__HasChild(this->fields.rootSpotP, 0LL);
  v10 = 0LL;
  if ( ((unsigned __int8)HasChild & 1) != 0 )
  {
    submarineData = this->fields.submarineData;
    if ( !submarineData
      || (Settings_k__BackingField = submarineData->fields._Settings_k__BackingField) == 0LL
      || (HomeSpotId_k__BackingField = Settings_k__BackingField->fields._HomeSpotId_k__BackingField,
          (HasChild = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL)) == 0LL) )
    {
LABEL_29:
      sub_B5D69C(HasChild, v9);
    }
    max_length = HasChild->max_length;
    v15 = HasChild;
    if ( max_length >= 1 )
    {
      v16 = 0;
      v10 = 0LL;
      while ( 1 )
      {
        if ( v16 >= max_length )
        {
          v19 = sub_B5D6C8(HasChild);
          sub_B5D668(v19, 0LL);
        }
        HasChild = (UnityEngine_GameObject_array *)v15->m_Items[v16];
        if ( !HasChild )
          goto LABEL_29;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)HasChild,
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        HasChild = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
        if ( ((unsigned __int8)HasChild & 1) == 0 )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_29;
          if ( HomeSpotId_k__BackingField == Component_srcLineSprite[5].fields.m_CachedPtr )
            return (SrcSpotBasePrefab_o *)Component_srcLineSprite;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          HasChild = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
          if ( ((unsigned __int8)HasChild & 1) != 0 )
            goto LABEL_23;
          if ( !v10 )
            goto LABEL_29;
          if ( Component_srcLineSprite[5].fields.m_CachedPtr < v10[5].fields.m_CachedPtr )
LABEL_23:
            v10 = Component_srcLineSprite;
        }
        max_length = v15->max_length;
        if ( (int)++v16 >= max_length )
          return (SrcSpotBasePrefab_o *)v10;
      }
    }
    return 0LL;
  }
  return (SrcSpotBasePrefab_o *)v10;
}


bool __fastcall SubmarineMapManager__HasSelfQuestAfterAction(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  SubmarineMapManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t QuestId_k__BackingField; // w1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v12; // x1

  v4 = this;
  if ( (byte_42E7B53 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, (_DWORD)method, (_DWORD)v2, v3);
    this = (SubmarineMapManager_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__,
                                      v5,
                                      v6,
                                      v7);
    byte_42E7B53 = 1;
  }
  submarineData = v4->fields.submarineData;
  if ( !submarineData
    || (BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField) == 0LL
    || (!BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     && !BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? (QuestId_k__BackingField = -1)
      : (QuestId_k__BackingField = BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField),
        HideEnemyOccupiedPanelTasks = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(v4, QuestId_k__BackingField, v2),
        this = (SubmarineMapManager_o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(v4, v12),
        !HideEnemyOccupiedPanelTasks) )
  {
    sub_B5D69C(this, method);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7B73 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7B73 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_1E6E264 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void __fastcall SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v6; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7B77 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7B77 = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = (BattleServantConfConponent_o *)&this->fields.scanRangeNotificator;
  v6 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_scanRangeNotificator->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_B5D560(p_scanRangeNotificator, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7B71 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7B71 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_1E6E264 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7B75 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___,
      (_DWORD)method,
      v2,
      v3);
    byte_42E7B75 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_1E6E264 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  SubmarineMapDataManager_o *v19; // x22
  const MethodInfo *v20; // x3
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  TaskScheduler_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct TaskScheduler_o *taskScheduler; // x20
  System_Action_bool__o *v35; // x0
  __int64 v36; // x1
  System_Int32_array **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  SubmarineMapManager_PlayingScanVoiceData_o *v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_42E7B4A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&SubmarineMapDataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TaskScheduler_TypeInfo, v14, v15, v16);
    byte_42E7B4A = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v19 = (SubmarineMapDataManager_o *)sub_B5D694(SubmarineMapDataManager_TypeInfo);
  SubmarineMapDataManager___ctor(v19, mapInfo, warInfo, v20);
  this->fields.submarineData = v19;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.submarineData,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (TaskScheduler_o *)sub_B5D694(TaskScheduler_TypeInfo);
  TaskScheduler___ctor(v27, 0LL);
  this->fields.taskScheduler = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  taskScheduler = this->fields.taskScheduler;
  v35 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  if ( !this
    || (v37 = (System_Int32_array **)v35,
        System_Action_bool____ctor(
          v35,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
          (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__),
        !taskScheduler) )
  {
    sub_B5D69C(v35, v36);
  }
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = (struct System_Action_bool__o *)v37;
  sub_B5D560(
    (BattleServantConfConponent_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_B5D694(SubmarineMapManager_PlayingScanVoiceData_TypeInfo);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v44, 0LL);
  this->fields.playingScanVoiceData = v44;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.playingScanVoiceData,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o *v30; // x19

  if ( (byte_42E7B4B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__, v9, v10, v11);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass20_0_TypeInfo, v12, v13, v14);
    byte_42E7B4B = 1;
  }
  v15 = sub_B5D694(SubmarineMapManager___c__DisplayClass20_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass20_0___ctor((SubmarineMapManager___c__DisplayClass20_0_o *)v15, 0LL);
  if ( !v15 )
    sub_B5D69C(v16, v17);
  *(_QWORD *)(v15 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v15 + 16), (System_Int32_array **)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)finishCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v15,
    Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v30, 5, 1, 0LL);
}


void __fastcall SubmarineMapManager__LoadPoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_GameObject_o *EffectScannedPanelPrefab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct SubmarineMapAssetManager_o *v41; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct SubmarineMapAssetManager_o *v50; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct SubmarineMapAssetManager_o *v59; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7

  v4 = this;
  if ( (byte_42E7B6E & 1) == 0 )
  {
    sub_B5D5C4(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ComponentPool_CommonEffectComponent__Preload__, v5, v6, v7);
    sub_B5D5C4(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__, v11, v12, v13);
    sub_B5D5C4(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_ComponentPool_CommonEffectComponent___ctor__, v17, v18, v19);
    sub_B5D5C4(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&ComponentPool_CommonEffectComponent__TypeInfo, v26, v27, v28);
    this = (SubmarineMapManager_o *)sub_B5D5C4(
                                      &ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo,
                                      v29,
                                      v30,
                                      v31);
    byte_42E7B6E = 1;
  }
  assetManager = v4->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v34 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B5D694(ComponentPool_CommonEffectComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v34,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_24A5FAC *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v4->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.effectScanedPanelObjPool,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this = (SubmarineMapManager_o *)v4->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
    (ComponentPool_SubmarineEffectScannablePanelComponent__o *)this,
    9,
    (const MethodInfo_24A6094 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v41 = v4->fields.assetManager;
  if ( !v41 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v41->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v43 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B5D694(ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v43,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_24A5FAC *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v4->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v43;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.effectScanObstaclePanelObjPool,
    (System_Int32_array **)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = v4->fields.assetManager;
  if ( !v50 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v50->fields._EffectScannablePanelPrafab_k__BackingField;
  v52 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B5D694(ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v52,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_24A5FAC *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v4->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v52;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.effectScannablePanelObjPool,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this = (SubmarineMapManager_o *)v4->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
          (ComponentPool_SubmarineEffectScannablePanelComponent__o *)this,
          50,
          (const MethodInfo_24A6094 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v59 = v4->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(this, method);
  }
  EffectSelectedPanelPrefab_k__BackingField = v59->fields._EffectSelectedPanelPrefab_k__BackingField;
  v61 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B5D694(ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v61,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_24A5FAC *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v4->fields.effectSelectedPanelObjPool = v61;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields.effectSelectedPanelObjPool,
    (System_Int32_array **)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
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
    sub_B5D69C(submarineData, finishCallback);
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall SubmarineMapManager__OnBeforeQuestAfterAction(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x20
  const MethodInfo *v28; // x2

  if ( (byte_42E7B4E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__, v6, v7, v8);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass26_0_TypeInfo, v9, v10, v11);
    byte_42E7B4E = 1;
  }
  v12 = sub_B5D694(SubmarineMapManager___c__DisplayClass26_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass26_0___ctor((SubmarineMapManager___c__DisplayClass26_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B5D69C(v13, v14);
  *(_QWORD *)(v12 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v27, v28);
}


void __fastcall SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  clsQuestCheck_o *v14; // x0
  __int64 v15; // x1
  struct MapControl_WarInfo_o *warInfo; // x8
  int32_t warId; // w21
  QuestTree_o *v18; // x20
  System_Action_o *v19; // x22
  System_Collections_IEnumerator_o *v20; // x1

  if ( (byte_42E7B5C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SubmarineMapManager__OnEndScan_b__43_0__, v11, v12, v13);
    byte_42E7B5C = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v14 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (warId = warInfo->fields.warId,
        v18 = (QuestTree_o *)v14,
        v19 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo),
        System_Action___ctor(v19, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__43_0__, 0LL),
        !v18) )
  {
    sub_B5D69C(v14, v15);
  }
  v20 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v18, warId, v19, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v20, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20
  const MethodInfo *v10; // x1

  if ( (byte_42E7B4F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__, v5, v6, v7);
    byte_42E7B4F = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__, 0LL);
    ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._23_OnBeforeQuestAfterAction.method)(
      this,
      v9,
      this->klass->vtable._24_OnAfterQuestAfterAction.methodPtr);
  }
  else
  {
    SubmarineMapManager__HideScannableEffect(this, v8);
    SubmarineMapManager__ShowScannableEffect(this, v10);
  }
}


void __fastcall SubmarineMapManager__OnScanDecided(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x20
  __int64 eventId; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  const MethodInfo *v41; // x1
  clsQuestCheck_o *v42; // x22
  const MethodInfo *v43; // x1
  NetworkManager_ResultCallbackFunc_o *v44; // x22
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x22
  const MethodInfo *v46; // x1
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_42E7B57 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, scanId, (_DWORD)panelData, method);
    sub_B5D5C4(&NetworkManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__, v19, v20, v21);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass38_0_TypeInfo, v22, v23, v24);
    byte_42E7B57 = 1;
  }
  v25 = sub_B5D694(SubmarineMapManager___c__DisplayClass38_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass38_0___ctor((SubmarineMapManager___c__DisplayClass38_0_o *)v25, 0LL);
  if ( !v25 )
    goto LABEL_15;
  *(_QWORD *)(v25 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 32) = panelData;
  v34 = v25 + 32;
  *(_DWORD *)(v25 + 24) = scanId;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 32), (System_Int32_array **)panelData, v35, v36, v37, v38, v39, v40);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v41);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v42 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v43);
  if ( !v42 )
    goto LABEL_15;
  clsQuestCheck__SaveEventQuestIdListPlayable(v42, eventId, 0LL);
  v44 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v44,
    (Il2CppObject *)v25,
    Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v44,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v46);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*(_QWORD *)v34 || !Request_WarBoardWallAttackRequest )
LABEL_15:
    sub_B5D69C(eventId, v27);
  EventScanPanelMapRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    eventId,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v34 + 24LL),
    *(_DWORD *)(v25 + 24),
    0LL);
}


void __fastcall SubmarineMapManager__OnScanPanelRequestFinished(
        SubmarineMapManager_o *this,
        System_String_o *result,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x3
  Il2CppObject *v41; // x19
  EventSaveData_o *BeforeEventSubmarineSaveData_k__BackingField; // x0
  __int64 v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  struct System_String_o *value; // x8
  EventSaveData_o *v51; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v54; // x10
  __int64 v55; // x9
  TerminalPramsManager_c *v56; // x0
  EventSaveData_o *v57; // x20
  int v58; // w1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  TerminalPramsManager_c *v65; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v67; // x0
  System_String_array *ValueByArray; // x0
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int max_length; // w8
  System_String_o **v73; // x9
  System_String_o *v74; // x21
  System_String_o **v75; // x9
  System_String_o *v76; // x20
  __int64 *v77; // x8
  System_String_o *v78; // x22
  TerminalPramsManager_c *v79; // x0
  struct EventSaveData_o *v80; // x23
  System_String_o *v81; // x24
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  EventSaveData_c *v88; // x8
  System_Int32_array **namespaze; // x19
  TerminalPramsManager_c *v90; // x0
  BattleServantConfConponent_o *p_mResultEventPanelRewardInfos; // x0
  int v92; // w2
  __int64 v93; // x3
  System_String_c *v94; // x8
  __int64 v95; // x0
  int v96; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42E7B58 & 1) == 0 )
  {
    sub_B5D5C4(&EventSaveData_TypeInfo, (_DWORD)result, scanId, panelData);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___, v9, v10, v11);
    sub_B5D5C4(&JsonManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_6663/*"False"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_973/*"0"*/, v36, v37, v38);
    byte_42E7B58 = 1;
  }
  v96 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v39);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v40);
  v41 = (Il2CppObject *)System_String__Concat_44580072(
                          (System_String_o *)StringLiteral_15824/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_16061/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                      v41,
                                                                      (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_83;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v51 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
  {
LABEL_84:
    v95 = sub_B5D6C8(BeforeEventSubmarineSaveData_k__BackingField);
    sub_B5D668(v95, 0LL);
  }
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_83;
  name = klass->_1.name;
  if ( name )
  {
    v54 = *((_QWORD *)name + 3);
    if ( v54 )
    {
      if ( !(_DWORD)v54 )
        goto LABEL_84;
      v55 = *((_QWORD *)name + 4);
      if ( v55 )
      {
        v96 = *(_QWORD *)(v55 + 32);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E5CDC )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v43, (_DWORD)v44, v45);
          byte_42E5CDC = 1;
        }
        v56 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v56 = TerminalPramsManager_TypeInfo;
        }
        if ( !v56->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v57 = (EventSaveData_o *)sub_B5D694(EventSaveData_TypeInfo);
          EventSaveData___ctor(v57, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42E5CB9 )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v58, (_DWORD)v59, v60);
            byte_42E5CB9 = 1;
          }
          v65 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v65 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v65->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (BattleServantConfConponent_c *)v57;
          sub_B5D560(
            p_BeforeEventSubmarineSaveData_k__BackingField,
            (System_Int32_array **)v57,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          v56 = TerminalPramsManager_TypeInfo;
        }
        if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v56);
        if ( !byte_42E5CDC )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v43, (_DWORD)v44, v45);
          byte_42E5CDC = 1;
        }
        v67 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v67 = TerminalPramsManager_TypeInfo;
        }
        BeforeEventSubmarineSaveData_k__BackingField = v67->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
        if ( BeforeEventSubmarineSaveData_k__BackingField )
        {
          ValueByArray = EventSaveData__GetValueByArray(BeforeEventSubmarineSaveData_k__BackingField, 0x2Cu, 0LL);
          if ( ValueByArray )
          {
            max_length = ValueByArray->max_length;
            v73 = &ValueByArray->m_Items[1];
            if ( max_length <= 1 )
              v73 = (System_String_o **)&StringLiteral_973/*"0"*/;
            v74 = *v73;
            v75 = max_length <= 2 ? (System_String_o **)&StringLiteral_973/*"0"*/ : &ValueByArray->m_Items[2];
            v76 = *v75;
            v77 = max_length <= 3 ? &StringLiteral_6663/*"False"*/ : (__int64 *)&ValueByArray->m_Items[3];
          }
          else
          {
            v76 = (System_String_o *)StringLiteral_973/*"0"*/;
            v77 = &StringLiteral_6663/*"False"*/;
            v74 = (System_String_o *)StringLiteral_973/*"0"*/;
          }
          v78 = (System_String_o *)*v77;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42E5CDC )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v69, v70, v71);
            byte_42E5CDC = 1;
          }
          v79 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v79 = TerminalPramsManager_TypeInfo;
          }
          v80 = v79->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v81 = System_Int32__ToString((int32_t)&v96, 0LL);
          if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          }
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_21895852(
                                                                              v81,
                                                                              v74,
                                                                              v76,
                                                                              v78,
                                                                              0LL);
          if ( v80 )
          {
            v80->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v80->fields.value,
              (System_Int32_array **)BeforeEventSubmarineSaveData_k__BackingField,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87);
            value = v51->fields.value;
            goto LABEL_66;
          }
        }
LABEL_83:
        sub_B5D69C(BeforeEventSubmarineSaveData_k__BackingField, v43);
      }
    }
  }
LABEL_66:
  if ( !(_DWORD)value )
    goto LABEL_84;
  v88 = v51[1].klass;
  if ( !v88 )
    goto LABEL_83;
  namespaze = (System_Int32_array **)v88->_1.namespaze;
  v90 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v90 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (BattleServantConfConponent_o *)&v90->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = (BattleServantConfConponent_c *)namespaze;
  sub_B5D560(p_mResultEventPanelRewardInfos, namespaze, v44, v45, v46, v47, v48, v49);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v43, v92, v93);
    byte_42E4B1E = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v94 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v94 )
    goto LABEL_83;
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)v94->_2.genericContainerHandle;
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_83;
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  __int64 v16; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v32; // x4
  SchedulerTaskBase_o *v33; // x21
  SchedulerTaskBase_TaskCallback_o *v34; // x22
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v42; // x20
  __int64 v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  const MethodInfo *v52; // x1
  __int64 v53; // x0
  __int64 v54; // x0

  if ( (byte_42E7B56 & 1) == 0 )
  {
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, scanId, (_DWORD)panelData, method);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__, v10, v11, v12);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo, v13, v14, v15);
    byte_42E7B56 = 1;
  }
  v16 = sub_B5D694(SubmarineMapManager___c__DisplayClass37_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass37_0___ctor((SubmarineMapManager___c__DisplayClass37_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_12;
  *(_QWORD *)(v16 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
  *(_QWORD *)(v16 + 32) = panelData;
  *(_DWORD *)(v16 + 24) = scanId;
  sub_B5D560((BattleServantConfConponent_o *)(v16 + 32), (System_Int32_array **)panelData, v25, v26, v27, v28, v29, v30);
  klass = this->klass;
  if ( *(int *)(v16 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v16 + 40) = 0;
    v33 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v16 + 24),
            *(SubmarineMapPanelData_o **)(v16 + 32),
            (bool *)(v16 + 40),
            v32);
    v34 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v34,
      (Il2CppObject *)v16,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__,
      0LL);
    if ( v33 )
    {
      v33->fields.EndCallback = v34;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v33->fields.EndCallback,
        (System_Int32_array **)v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      taskScheduler = this->fields.taskScheduler;
      v17 = sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v17 )
      {
        v42 = v17;
        v43 = sub_B5D684(v33, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
        if ( !v43 )
        {
          v53 = sub_B5D6BC(0LL);
          sub_B5D668(v53, 0LL);
        }
        if ( !*(_DWORD *)(v42 + 24) )
        {
          v54 = sub_B5D6C8(v43);
          sub_B5D668(v54, 0LL);
        }
        *(_QWORD *)(v42 + 32) = v33;
        sub_B5D560((BattleServantConfConponent_o *)(v42 + 32), (System_Int32_array **)v33, v44, v45, v46, v47, v48, v49);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v42, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B5D69C(v17, v18);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v50);
  SubmarineMapManager__ShowScannableEffect(this, v51);
  SubmarineMapManager__HideSelectedPanelEffect(this, v52);
}


void __fastcall SubmarineMapManager__OpenScanConfirmDialog(
        SubmarineMapManager_o *this,
        int32_t scanId,
        bool isShowDialogUpper,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  int v9; // w1
  char v10; // w2
  __int64 v11; // x3
  int v12; // w1
  char v13; // w2
  __int64 v14; // x3
  int v15; // w1
  char v16; // w2
  __int64 v17; // x3
  __int64 v18; // x23
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  System_Action_bool__o *v34; // x22
  const MethodInfo *v35; // x4

  if ( (byte_42E7B6C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, scanId, isShowDialogUpper, callback);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__, v12, v13, v14);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass69_0_TypeInfo, v15, v16, v17);
    byte_42E7B6C = 1;
  }
  v18 = sub_B5D694(SubmarineMapManager___c__DisplayClass69_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass69_0___ctor((SubmarineMapManager___c__DisplayClass69_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_6;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)callback, v27, v28, v29, v30, v31, v32);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v34 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(
    v34,
    (Il2CppObject *)v18,
    Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__,
    (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_B5D69C(v19, v20);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v34, v35);
}


void __fastcall SubmarineMapManager__OpenSelectScannerDialog(
        SubmarineMapManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v37; // x1
  int32_t eventId; // w22
  System_Action_int__o *v39; // x23
  System_Action_o *v40; // x21
  const MethodInfo *v41; // x4

  if ( (byte_42E7B6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_Action_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v12, v13, v14);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__, v15, v16, v17);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass67_0_TypeInfo, v18, v19, v20);
    byte_42E7B6A = 1;
  }
  v21 = sub_B5D694(SubmarineMapManager___c__DisplayClass67_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass67_0___ctor((SubmarineMapManager___c__DisplayClass67_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_6;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 24) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 24), (System_Int32_array **)callback, v30, v31, v32, v33, v34, v35);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v37);
  v39 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v39,
    (Il2CppObject *)v21,
    Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  v40 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
  if ( !selectScannerDialog )
LABEL_6:
    sub_B5D69C(v22, v23);
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v39, v40, v41);
}


void __fastcall SubmarineMapManager__ReleaseAssets(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapAssetManager_o *assetManager; // x0
  BattleServantConfConponent_o *p_assetManager; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  assetManager = this->fields.assetManager;
  if ( assetManager )
  {
    SubmarineMapAssetManager__Finish(assetManager, method);
    p_assetManager->klass = 0LL;
    sub_B5D560(p_assetManager, 0LL, v5, v6, v7, v8, v9, v10);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
  EventMapManagerBase__ReleaseAssets((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  ComponentPool_SubmarineEffectScannablePanelComponent__o *effectScannablePanelObjPool; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  ComponentPool_SubmarineEffectScannablePanelComponent__o *v25; // x0
  BattleServantConfConponent_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42E7B6F & 1) == 0 )
  {
    sub_B5D5C4(&Method_ComponentPool_CommonEffectComponent__Finish__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__, v5, v6, v7);
    sub_B5D5C4(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__, v8, v9, v10);
    byte_42E7B6F = 1;
  }
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanedPanelObjPool,
      (const MethodInfo_24A6A6C *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.effectScanedPanelObjPool,
      0LL,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  effectScannablePanelObjPool = this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_24A6A6C *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.effectScannablePanelObjPool,
      0LL,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (BattleServantConfConponent_o *)&this->fields.effectScanObstaclePanelObjPool;
  v25 = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      v25,
      (const MethodInfo_24A6A6C *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_B5D560(p_effectScanObstaclePanelObjPool, 0LL, v28, v29, v30, v31, v32, v33);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_1E6E0C0 *method)
{
  unsigned __int64 v7; // x19
  __int64 v8; // x20
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  float v17; // s0
  float v18; // s1
  float v19; // s2
  UnityEngine_Component_o *v20; // x21
  UnityEngine_Transform_o *v21; // x22
  const MethodInfo_234ED58 *v22; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v26; // s0
  float v27; // s1
  float v28; // s2
  unsigned __int64 v29; // x19
  UnityEngine_Transform_o *v30; // x0
  const MethodInfo_234ED58 *v31; // x2
  bool v32; // zf
  UnityEngine_Transform_o *v33; // x19
  int v34; // s0
  System_Nullable_Vector3__o v37; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v38; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v39; // 0:x0.16
  System_Nullable_Vector3__o v40; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  v7 = *(_QWORD *)&scale.fields.value.fields.z;
  v8 = *(_QWORD *)&offset.fields.value.fields.z;
  v38 = offset;
  v37 = scale;
  if ( (byte_42EC254 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Nullable_Vector3__get_HasValue__,
      (_DWORD)pool,
      (_DWORD)panelData,
      *(_QWORD *)&offset.fields.value.fields.x);
    sub_B5D5C4(&Method_System_Nullable_Vector3__get_Value__, v12, v13, v14);
    byte_42EC254 = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_16;
  transform = UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  effectContainer = (UnityEngine_GameObject_o *)SubmarineMapManager__get_positionCalculator(this, 0LL);
  if ( !panelData )
    goto LABEL_16;
  if ( !effectContainer )
    goto LABEL_16;
  *(UnityEngine_Vector3_o *)&v17 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                     (SubmarinePanelPositionCalculator_o *)effectContainer,
                                     panelData->fields._HIndex_k__BackingField,
                                     panelData->fields._VIndex_k__BackingField,
                                     0LL);
  if ( !pool )
    goto LABEL_16;
  effectContainer = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_Transform_o *, float, float, float))method->rgctx_data->_0_ComponentPool_T__Rent->methodPointer)(
                                                  pool,
                                                  transform,
                                                  v17,
                                                  v18,
                                                  v19);
  if ( !effectContainer )
    goto LABEL_16;
  v20 = (UnityEngine_Component_o *)effectContainer;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)effectContainer,
                                                  0LL);
  if ( !effectContainer )
    goto LABEL_16;
  v21 = (UnityEngine_Transform_o *)effectContainer;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)effectContainer, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( (v8 & 0xFF00000000LL) != 0 )
  {
    *(_QWORD *)&v39.fields.value.fields.x = &v38;
    *(_QWORD *)&v39.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v26 = System_Nullable_Vector3___get_Value(v39, v22);
    LOBYTE(v29) = v37.fields.has_value;
  }
  else
  {
    v29 = HIDWORD(v7);
    *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL);
  }
  v42.fields.x = x + v26;
  v42.fields.y = y + v27;
  v42.fields.z = z + v28;
  UnityEngine_Transform__set_localPosition(v21, v42, 0LL);
  v30 = UnityEngine_Component__get_transform(v20, 0LL);
  v32 = (unsigned __int8)v29 == 0;
  v33 = v30;
  if ( v32 )
  {
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_one(0LL);
    if ( v33 )
      goto LABEL_14;
LABEL_16:
    sub_B5D69C(effectContainer, pool);
  }
  *(_QWORD *)&v40.fields.value.fields.x = &v37;
  *(_QWORD *)&v40.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
  *(UnityEngine_Vector3_o *)&v34 = System_Nullable_Vector3___get_Value(v40, v31);
  if ( !v33 )
    goto LABEL_16;
LABEL_14:
  UnityEngine_Transform__set_localScale(v33, *(UnityEngine_Vector3_o *)&v34, 0LL);
}


void __fastcall SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  this->fields.isTimeScaleAccelerate = 0;
}


void __fastcall SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_1E6E264 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  __int64 v6; // x1
  int max_length; // w8
  UnityEngine_GameObject_array *v8; // x21
  unsigned int v9; // w22
  __int64 v10; // x0

  Children = GameObjectExtensions__GetChildren(this->fields.effectContainer, 0, 0LL);
  if ( !Children )
    goto LABEL_9;
  max_length = Children->max_length;
  v8 = Children;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v10 = sub_B5D6C8(Children);
        sub_B5D668(v10, 0LL);
      }
      Children = (UnityEngine_GameObject_array *)v8->m_Items[v9];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)((__int64 (*)(void))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)();
      if ( !pool )
        break;
      Children = (UnityEngine_GameObject_array *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_GameObject_array *))method->rgctx_data->_1_ComponentPool_T__Return->methodPointer)(
                                                   pool,
                                                   Children);
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_9:
    sub_B5D69C(Children, v6);
  }
}


void __fastcall SubmarineMapManager__RevealAvailableSpots(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  System_Collections_Generic_List_SchedulerTaskBase__o *RevealEachSpotsTasks; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v28; // x1
  __int64 v29; // x20
  System_Delegate_o *v30; // x23
  SchedulerTaskBase_TaskCallback_o *v31; // x24
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  TaskScheduler_o *v39; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v40; // x21
  __int64 v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x0
  SubmarineMapManager_o *v50; // x0
  const MethodInfo *v51; // x1

  if ( (byte_42E7B5B & 1) == 0 )
  {
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, (_DWORD)finishCallback, (_DWORD)method, v3);
    sub_B5D5C4(&SchedulerTaskNone_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__, v12, v13, v14);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass42_0_TypeInfo, v15, v16, v17);
    byte_42E7B5B = 1;
  }
  v18 = sub_B5D694(SubmarineMapManager___c__DisplayClass42_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass42_0___ctor((SubmarineMapManager___c__DisplayClass42_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 16) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  taskScheduler = this->fields.taskScheduler;
  RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v28);
  if ( !taskScheduler )
    goto LABEL_13;
  TaskScheduler__AddTask_19922944(taskScheduler, 0, RevealEachSpotsTasks, 0LL);
  v29 = sub_B5D694(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v29, 0LL);
  if ( !v29 )
    goto LABEL_13;
  v30 = *(System_Delegate_o **)(v29 + 32);
  v31 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v31,
    (Il2CppObject *)v18,
    Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__,
    0LL);
  v32 = (System_Int32_array **)System_Delegate__Combine(v30, (System_Delegate_o *)v31, 0LL);
  if ( !v32 || *v32 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v29 + 32) = v32;
    sub_B5D560((BattleServantConfConponent_o *)(v29 + 32), v32, v33, v34, v35, v36, v37, v38);
    v39 = this->fields.taskScheduler;
    RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_B5D5DC(
                                                                                     SchedulerTaskBase___TypeInfo,
                                                                                     1LL);
    if ( RevealEachSpotsTasks )
    {
      v40 = RevealEachSpotsTasks;
      v41 = sub_B5D684(v29, RevealEachSpotsTasks->klass->_1.element_class);
      if ( !v41 )
      {
        v48 = sub_B5D6BC(0LL);
        sub_B5D668(v48, 0LL);
      }
      if ( !v40->fields._size )
      {
        v49 = sub_B5D6C8(v41);
        sub_B5D668(v49, 0LL);
      }
      v40->fields._syncRoot = (Il2CppObject *)v29;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v40->fields._syncRoot,
        (System_Int32_array **)v29,
        v42,
        v43,
        v44,
        v45,
        v46,
        v47);
      if ( v39 )
      {
        TaskScheduler__AddTask(v39, 0, (SchedulerTaskBase_array *)v40, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B5D69C(RevealEachSpotsTasks, v20);
  }
  v50 = (SubmarineMapManager_o *)sub_B5D990(v32);
  SubmarineMapManager__CreateRevealEachSpotsTasks(v50, v51);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *gridLine; // x20
  SubmarineMapDataManager_o *submarineData; // x0
  const MethodInfo *v10; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *GridTexture_k__BackingField; // x20
  struct SubmarineMapDataManager_o *v13; // x8
  struct SubmarineMapAssetManager_o *v14; // x9
  SubmarineMapDataManager_o *v15; // x20
  UIWidget_o *v16; // x21
  int32_t v17; // w0
  struct SubmarineMapDataManager_o *v18; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_42E7B63 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7B63 = 1;
  }
  gridLine = (UnityEngine_Object_o *)this->fields.gridLine;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  submarineData = (SubmarineMapDataManager_o *)UnityEngine_Object__op_Equality(gridLine, 0LL, 0LL);
  if ( ((unsigned __int8)submarineData & 1) == 0 )
  {
    assetManager = this->fields.assetManager;
    if ( assetManager )
    {
      GridTexture_k__BackingField = (UnityEngine_Object_o *)assetManager->fields._GridTexture_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Equality(GridTexture_k__BackingField, 0LL, 0LL) )
        return;
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, v10);
        v13 = this->fields.submarineData;
        if ( v13 )
        {
          v14 = this->fields.assetManager;
          if ( v14 )
          {
            submarineData = (SubmarineMapDataManager_o *)GridLineTextureUtil__CreateWholeGridTexture(
                                                           (System_Int32_array *)submarineData,
                                                           v13->fields._PositionCalculator_k__BackingField,
                                                           v14->fields._GridTexture_k__BackingField,
                                                           0LL);
            if ( this->fields.gridLine )
            {
              v15 = submarineData;
              submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             this->fields.gridLine,
                                                             (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
              if ( v15 )
              {
                v16 = (UIWidget_o *)submarineData;
                submarineData = (SubmarineMapDataManager_o *)((__int64 (__fastcall *)(SubmarineMapDataManager_o *, const char *))v15->klass[1]._1.gc_desc)(
                                                               v15,
                                                               v15->klass[1]._1.name);
                if ( v16 )
                {
                  UIWidget__set_width(v16, (int32_t)submarineData, 0LL);
                  v17 = (*(__int64 (__fastcall **)(SubmarineMapDataManager_o *, void *))&v15->klass[1]._1.byval_arg.bits)(
                          v15,
                          v15->klass[1]._1.this_arg.data);
                  UIWidget__set_height(v16, v17, 0LL);
                  ((void (__fastcall *)(UIWidget_o *, SubmarineMapDataManager_o *, Il2CppMethodPointer))v16->klass->vtable._27_set_mainTexture.method)(
                    v16,
                    v15,
                    v16->klass->vtable._28_get_shader.methodPtr);
                  submarineData = (SubmarineMapDataManager_o *)this->fields.gridLine;
                  if ( submarineData )
                  {
                    submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__get_transform(
                                                                   (UnityEngine_GameObject_o *)submarineData,
                                                                   0LL);
                    v18 = this->fields.submarineData;
                    if ( v18 )
                    {
                      Settings_k__BackingField = v18->fields._Settings_k__BackingField;
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
    sub_B5D69C(submarineData, v10);
  }
}


void __fastcall SubmarineMapManager__SetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
  this->fields.isTimeScaleAccelerate = 1;
}


void __fastcall SubmarineMapManager__ShowScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v21; // 0:x3.16
  System_Nullable_Vector3__o v22; // 0:x5.16

  v4 = this;
  if ( (byte_42E7B72 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v11, v12, v13);
    this = (SubmarineMapManager_o *)sub_B5D5C4(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___,
                                      v14,
                                      v15,
                                      v16);
    byte_42E7B72 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !v4->fields.isShowScanObstacleEffect )
  {
    submarineData = v4->fields.submarineData;
    v4->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_B5D69C(this, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v18 )
        break;
      if ( !v20.fields.current )
        sub_B5D69C(v18, v19);
      if ( BYTE1(v20.fields.current[3].monitor) )
      {
        *(_QWORD *)&v21.fields.value.fields.x = 0LL;
        *(_QWORD *)&v21.fields.value.fields.z = 0LL;
        *(_QWORD *)&v22.fields.value.fields.x = 0LL;
        *(_QWORD *)&v22.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          v4,
          (ComponentPool_T__o *)v4->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v20.fields.current,
          v21,
          v22,
          (const MethodInfo_1E6E0C0 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowScanRange(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *basePanelData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  void *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  UnityEngine_GameObject_o *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v23; // x1
  UnityEngine_Transform_o *transform; // x22
  struct UnityEngine_GameObject_o *v25; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E7B76 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, scanId, (_DWORD)basePanelData, method);
    sub_B5D5C4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E7B76 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               scanId,
               (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_20:
    sub_B5D69C(Instance, v20);
  ScanRangeNotificatorPrefab = SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                 this->fields.assetManager,
                                 *((_DWORD *)Instance + 14),
                                 v21);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0LL, 0LL) )
  {
    SubmarineMapManager__HideScanRange(this, v23);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v25 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                 (UILabel_o *)ScanRangeNotificatorPrefab,
                                                 transform,
                                                 (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      this->fields.scanRangeNotificator = v25;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_B5D560(
        (BattleServantConfConponent_o *)p_scanRangeNotificator,
        (System_Int32_array **)v25,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
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
    goto LABEL_20;
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
  int v5; // s4
  int v7; // s6
  SubmarineMapManager_o *v12; // x19
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo *v42; // x3
  int v43; // w23
  int v44; // w24
  SubmarineMapPanelData_o *PanelByIndices; // x0
  int v46; // s0
  SubmarineMapPanelData_o *v50; // x22
  float xMin; // s0
  float v52; // s4
  float xMax; // s0
  float v54; // s4
  float yMin; // s0
  float v56; // s4
  float yMax; // s0
  float v58; // s4
  float v60; // s0
  int v61; // s2
  float v63; // s4
  struct SubmarineMapDataManager_o *v64; // x8
  struct SubmarineSettingsManager_o *v65; // x8
  float x; // s1
  float v67; // s0
  float v68; // s0
  int v69; // s2
  float v71; // s4
  struct SubmarineMapDataManager_o *v72; // x8
  struct SubmarineSettingsManager_o *v73; // x8
  float v74; // s1
  float v75; // s0
  float v76; // s0
  int v77; // s2
  float v79; // s4
  struct SubmarineMapDataManager_o *v80; // x8
  struct SubmarineSettingsManager_o *v81; // x8
  float y; // s1
  float v83; // s0
  float v84; // s0
  int v85; // s2
  float v87; // s4
  struct SubmarineMapDataManager_o *v88; // x8
  struct SubmarineSettingsManager_o *v89; // x8
  float v90; // s1
  float v91; // s0
  UnityEngine_Rect_array *v92; // x21
  System_Collections_Generic_List_Rect__o *v93; // x22
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x2
  int mapInfo; // w8
  SubmarineMapManager_o *v97; // x21
  unsigned int v98; // w23
  __int64 v99; // x25
  int v100; // s0
  int v102; // s4
  int v104; // s6
  struct SubmarineMapDataManager_o *v106; // x8
  struct SubmarineSettingsManager_o *v107; // x8
  float v108; // s2
  float v109; // s3
  int v110; // s2
  int v112; // s4
  int v114; // s0
  int v115; // s1
  Submarine2DUILocationInfo_o *v116; // x22
  const MethodInfo *v117; // x1
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v120; // x22
  Submarine2DUILocationInfo_o *v121; // x22
  const MethodInfo *v122; // x1
  UnityEngine_Rect_array *v123; // x0
  MapCamera_o *v124; // x23
  UnityEngine_Rect_array *v125; // x22
  unsigned int v126; // s0
  unsigned int v127; // s1
  unsigned int v128; // s2
  unsigned int v129; // s3
  UnityEngine_Vector2_o Size; // kr00_8
  int v131; // s0
  System_Single_array *v135; // x20
  float width; // s0
  int v137; // s1
  float v140; // s0
  float height; // s0
  float m_XMin; // s8
  UnityEngine_Vector2_o center; // kr08_8
  struct SubmarineMapDataManager_o *v144; // x8
  struct SubmarineSettingsManager_o *v145; // x8
  int v146; // s2
  Submarine2DUILocationInfo_o *v148; // x22
  const MethodInfo *v149; // x1
  UnityEngine_Rect_array *v150; // x0
  MapCamera_o *v151; // x23
  UnityEngine_Rect_array *v152; // x22
  __int64 v153; // x0
  UnityEngine_Rect_o v154; // [xsp+0h] [xbp-80h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Rect_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v157; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v158; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v159; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v160; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v161; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v162; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v163; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v164; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v165; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v166; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v167; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = this;
  if ( (byte_42E7B79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rect__Add__, scanId, (_DWORD)panelData, isShowDialogUpper);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rect__ToArray__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Rect___ctor__, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_List_Rect__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&MapCameraViewAdjusterUtil_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&UnityEngine_Rect___TypeInfo, v25, v26, v27);
    sub_B5D5C4(&float___TypeInfo, v28, v29, v30);
    sub_B5D5C4(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Submarine2DUILocationInfo_TypeInfo, v34, v35, v36);
    this = (SubmarineMapManager_o *)sub_B5D5C4(&SubmarineScanDialogUpsideLocationInfo_TypeInfo, v37, v38, v39);
    byte_42E7B79 = 1;
  }
  HIDWORD(methoda.genericContainerHandle) = 0;
  memset(&methoda, 0, 32);
  *(_QWORD *)&v154.fields.m_XMin = 0LL;
  *(_QWORD *)&v154.fields.m_Width = 0LL;
  submarineData = v12->fields.submarineData;
  if ( !submarineData )
    goto LABEL_62;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_62;
  if ( Settings_k__BackingField->fields._RegardScanRangeAsSimpleSquare_k__BackingField )
  {
    if ( panelData )
    {
      v156.fields.m_XMin = panelData->fields._LocalPosition_k__BackingField.fields.x;
      v156.fields.m_YMin = panelData->fields._LocalPosition_k__BackingField.fields.y;
      v156.fields.m_Width = 0.0;
      v156.fields.m_Height = 0.0;
      UnityEngine_Rect___ctor_35655016(v156, *(UnityEngine_Vector2_o *)&v5, *(UnityEngine_Vector2_o *)&v7, &methoda);
      v43 = -2;
      do
      {
        v44 = -3;
        do
        {
          this = (SubmarineMapManager_o *)v12->fields.submarineData;
          if ( !this )
            goto LABEL_62;
          PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                             (SubmarineMapDataManager_o *)this,
                             panelData->fields._HIndex_k__BackingField + v43,
                             v44 + panelData->fields._VIndex_k__BackingField + 1,
                             v42);
          if ( PanelByIndices )
          {
            v50 = PanelByIndices;
            xMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v46, &methoda);
            v157.fields.m_XMin = UnityEngine_Mathf__Min(xMin, v50->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMin(v157, v52, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v158, &methoda);
            v159.fields.m_XMin = UnityEngine_Mathf__Max(xMax, v50->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMax(v159, v54, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v160, &methoda);
            v161.fields.m_XMin = UnityEngine_Mathf__Min(yMin, v50->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMin(v161, v56, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v162, &methoda);
            v163.fields.m_XMin = UnityEngine_Mathf__Max(yMax, v50->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMax(v163, v58, &methoda);
          }
          ++v44;
        }
        while ( v44 < 2 );
      }
      while ( v43++ <= 1 );
      v60 = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v46, &methoda);
      v64 = v12->fields.submarineData;
      if ( v64 )
      {
        v65 = v64->fields._Settings_k__BackingField;
        if ( v65 )
        {
          x = v65->fields._PanelUnitSize_k__BackingField.fields.x;
          v67 = v60 - x;
          UnityEngine_Rect__set_xMin(*(UnityEngine_Rect_o *)(&v61 - 2), v63, &methoda);
          v68 = UnityEngine_Rect__get_xMax(v164, &methoda);
          v72 = v12->fields.submarineData;
          if ( v72 )
          {
            v73 = v72->fields._Settings_k__BackingField;
            if ( v73 )
            {
              v74 = v73->fields._PanelUnitSize_k__BackingField.fields.x;
              v75 = v68 + v74;
              UnityEngine_Rect__set_xMax(*(UnityEngine_Rect_o *)(&v69 - 2), v71, &methoda);
              v76 = UnityEngine_Rect__get_yMin(v165, &methoda);
              v80 = v12->fields.submarineData;
              if ( v80 )
              {
                v81 = v80->fields._Settings_k__BackingField;
                if ( v81 )
                {
                  y = v81->fields._PanelUnitSize_k__BackingField.fields.y;
                  v83 = v76 - y;
                  UnityEngine_Rect__set_yMin(*(UnityEngine_Rect_o *)(&v77 - 2), v79, &methoda);
                  v84 = UnityEngine_Rect__get_yMax(v166, &methoda);
                  v88 = v12->fields.submarineData;
                  if ( v88 )
                  {
                    v89 = v88->fields._Settings_k__BackingField;
                    if ( v89 )
                    {
                      v90 = v89->fields._PanelUnitSize_k__BackingField.fields.y;
                      v91 = v84 + v90;
                      UnityEngine_Rect__set_yMax(*(UnityEngine_Rect_o *)(&v85 - 2), v87, &methoda);
                      this = (SubmarineMapManager_o *)sub_B5D5DC(UnityEngine_Rect___TypeInfo, 1LL);
                      if ( this )
                      {
                        v92 = (UnityEngine_Rect_array *)this;
                        if ( !LODWORD(this->fields.mapInfo) )
                          goto LABEL_63;
                        *(_OWORD *)&this->fields.warInfo = *(_OWORD *)&methoda.methodPointer;
                        goto LABEL_37;
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
LABEL_62:
    sub_B5D69C(this, *(_QWORD *)&scanId);
  }
  v93 = (System_Collections_Generic_List_Rect__o *)sub_B5D694(System_Collections_Generic_List_Rect__TypeInfo);
  System_Collections_Generic_List_Rect____ctor(
    v93,
    (const MethodInfo_2FF8F28 *)Method_System_Collections_Generic_List_Rect___ctor__);
  this = (SubmarineMapManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                    scanId,
                                    panelData,
                                    v12->fields.submarineData,
                                    v94);
  if ( !v12->fields.submarineData )
    goto LABEL_62;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelsByScanEvents(
                                    v12->fields.submarineData,
                                    (System_Collections_Generic_List_SubmarineScanEvent__o *)this,
                                    v95);
  if ( !this )
    goto LABEL_62;
  mapInfo = (int)this->fields.mapInfo;
  v97 = this;
  if ( mapInfo >= 1 )
  {
    v98 = 0;
    while ( v98 < mapInfo )
    {
      v99 = *((_QWORD *)&v97->fields.warInfo + (int)v98);
      *(UnityEngine_Vector3_o *)&v100 = UnityEngine_Vector3__get_zero(0LL);
      v106 = v12->fields.submarineData;
      if ( !v106 )
        goto LABEL_62;
      v107 = v106->fields._Settings_k__BackingField;
      if ( !v107 )
        goto LABEL_62;
      v108 = v107->fields._PanelUnitSize_k__BackingField.fields.x;
      v109 = v107->fields._PanelUnitSize_k__BackingField.fields.y;
      UnityEngine_Rect___ctor_35655016(
        *(UnityEngine_Rect_o *)&v100,
        *(UnityEngine_Vector2_o *)&v102,
        *(UnityEngine_Vector2_o *)&v104,
        (const MethodInfo *)&v154);
      if ( !v99 )
        goto LABEL_62;
      v114 = *(_DWORD *)(v99 + 28);
      v115 = *(_DWORD *)(v99 + 32);
      UnityEngine_Rect__set_center(
        *(UnityEngine_Rect_o *)(&v110 - 2),
        *(UnityEngine_Vector2_o *)&v112,
        (const MethodInfo *)&v154);
      if ( !v93 )
        goto LABEL_62;
      System_Collections_Generic_List_Rect___Add(
        v93,
        v154,
        (const MethodInfo_2FF9CBC *)Method_System_Collections_Generic_List_Rect__Add__);
      mapInfo = (int)v97->fields.mapInfo;
      if ( (int)++v98 >= mapInfo )
        goto LABEL_35;
    }
    goto LABEL_63;
  }
LABEL_35:
  if ( !v93 )
    goto LABEL_62;
  v92 = System_Collections_Generic_List_Rect___ToArray(
          v93,
          (const MethodInfo_2FFBF24 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_37:
  v116 = (Submarine2DUILocationInfo_o *)sub_B5D694(Submarine2DUILocationInfo_TypeInfo);
  Submarine2DUILocationInfo___ctor(v116, v117);
  if ( !v116 )
    goto LABEL_62;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v116, 0LL);
  mapCamera = v12->fields.mapCamera;
  v120 = Rects;
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(UnityEngine_Rect_o *)&methoda.name = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                           mapCamera,
                                           v92,
                                           v120,
                                           (int32_t *)&methoda.genericContainerHandle + 1,
                                           0LL);
  *isShowDialogUpper = 0;
  if ( HIDWORD(methoda.genericContainerHandle) == 1 )
  {
    v121 = (Submarine2DUILocationInfo_o *)sub_B5D694(SubmarineScanDialogUpsideLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v121, v122);
    if ( !v121 )
      goto LABEL_62;
    v123 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v121, 0LL);
    v124 = v12->fields.mapCamera;
    v125 = v123;
    if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    }
    *(UnityEngine_Rect_o *)&v126 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                     v124,
                                     v92,
                                     v125,
                                     (int32_t *)&methoda.genericContainerHandle + 1,
                                     0LL);
    if ( HIDWORD(methoda.genericContainerHandle) != 1 )
    {
      if ( HIDWORD(methoda.genericContainerHandle) )
        goto LABEL_49;
      goto LABEL_48;
    }
    v148 = (Submarine2DUILocationInfo_o *)sub_B5D694(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo);
    Submarine2DUILocationInfo___ctor(v148, v149);
    if ( !v148 )
      goto LABEL_62;
    v150 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v148, 0LL);
    v151 = v12->fields.mapCamera;
    v152 = v150;
    if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    }
    *(UnityEngine_Rect_o *)&v126 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                     v151,
                                     v92,
                                     v152,
                                     (int32_t *)&methoda.genericContainerHandle + 1,
                                     0LL);
    if ( !HIDWORD(methoda.genericContainerHandle) )
    {
LABEL_48:
      methoda.name = (const char *)__PAIR64__(v127, v126);
      methoda.klass = (Il2CppClass *)__PAIR64__(v129, v128);
      *isShowDialogUpper = 1;
    }
  }
LABEL_49:
  Size = FSWindowUtil__GetSize(0LL);
  this = (SubmarineMapManager_o *)sub_B5D5DC(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_62;
  v135 = (System_Single_array *)this;
  if ( !LODWORD(this->fields.mapInfo)
    || (LODWORD(this->fields.warInfo) = 1065353216,
        width = UnityEngine_Rect__get_width(*(UnityEngine_Rect_o *)&v131, (const MethodInfo *)&methoda.name),
        v135->max_length <= 1)
    || (v140 = width / Size.fields.x,
        v135->m_Items[2] = v140,
        height = UnityEngine_Rect__get_height(*(UnityEngine_Rect_o *)(&v137 - 1), (const MethodInfo *)&methoda.name),
        v135->max_length <= 2) )
  {
LABEL_63:
    v153 = sub_B5D6C8(this);
    sub_B5D668(v153, 0LL);
  }
  v135->m_Items[3] = height / Size.fields.y;
  v167.fields.m_XMin = UnityEngine_Mathf__Max_41629348(v135, 0LL);
  m_XMin = v167.fields.m_XMin;
  center = UnityEngine_Rect__get_center(v167, (const MethodInfo *)&methoda.name);
  v144 = v12->fields.submarineData;
  if ( !v144 )
    goto LABEL_62;
  v145 = v144->fields._Settings_k__BackingField;
  if ( !v145 )
    goto LABEL_62;
  v146 = 0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v12,
           *(UnityEngine_Vector3_o *)&center.fields.x,
           m_XMin,
           v145->fields._ViewScanRangeCameraDuration_k__BackingField,
           *(const MethodInfo **)&scanId);
}


void __fastcall SubmarineMapManager__ShowScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v21; // 0:x3.16
  System_Nullable_Vector3__o v22; // 0:x5.16

  v4 = this;
  if ( (byte_42E7B70 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v11, v12, v13);
    this = (SubmarineMapManager_o *)sub_B5D5C4(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___,
                                      v14,
                                      v15,
                                      v16);
    byte_42E7B70 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( !v4->fields.isShowScannableEffect )
  {
    submarineData = v4->fields.submarineData;
    v4->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_B5D69C(this, method);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v18 )
        break;
      if ( !v20.fields.current )
        sub_B5D69C(v18, v19);
      if ( BYTE2(v20.fields.current[3].monitor) )
      {
        *(_QWORD *)&v21.fields.value.fields.x = 0LL;
        *(_QWORD *)&v21.fields.value.fields.z = 0LL;
        *(_QWORD *)&v22.fields.value.fields.x = 0LL;
        *(_QWORD *)&v22.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          v4,
          (ComponentPool_T__o *)v4->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v20.fields.current,
          v21,
          v22,
          (const MethodInfo_1E6E0C0 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Nullable_Vector3__o v6; // 0:x3.16
  System_Nullable_Vector3__o v7; // 0:x5.16

  if ( (byte_42E7B74 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___,
      (_DWORD)panelData,
      (_DWORD)method,
      v3);
    byte_42E7B74 = 1;
  }
  *(_QWORD *)&v6.fields.value.fields.x = 0LL;
  *(_QWORD *)&v6.fields.value.fields.z = 0LL;
  *(_QWORD *)&v7.fields.value.fields.x = 0LL;
  *(_QWORD *)&v7.fields.value.fields.z = 0LL;
  SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    panelData,
    v6,
    v7,
    (const MethodInfo_1E6E0C0 *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__StartScanPerformance(
        SubmarineMapManager_o *this,
        int32_t scanId,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  MissionNotifyManager_o *ScanTask; // x0
  __int64 v32; // x1
  CommonUI_o *Instance; // x22
  System_Action_o *v34; // x23
  TaskScheduler_o *taskScheduler; // x22
  const MethodInfo *v36; // x3
  TaskScheduler_o *v37; // x22
  SchedulerTaskBase_array *v38; // x23
  const MethodInfo *v39; // x3
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x20
  __int64 v47; // x20
  System_Delegate_o *v48; // x22
  SchedulerTaskBase_TaskCallback_o *v49; // x23
  System_Int32_array **v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  TaskScheduler_o *v57; // x19
  MissionNotifyManager_o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x0
  __int64 v66; // x0
  SubmarineMapManager_o *v67; // x0
  const MethodInfo *v68; // x1

  if ( (byte_42E7B59 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, scanId, (_DWORD)panelData, method);
    sub_B5D5C4(&SchedulerTaskBase___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&SchedulerTaskNone_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&Method_SubmarineMapManager__StartScanPerformance_b__40_0__, v22, v23, v24);
    sub_B5D5C4(&Method_SubmarineMapManager__StartScanPerformance_b__40_1__, v25, v26, v27);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v28, v29, v30);
    byte_42E7B59 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  ScanTask = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !ScanTask )
    goto LABEL_22;
  MissionNotifyManager__StartPause(ScanTask, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_0__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider(Instance, v34, 0LL);
  taskScheduler = this->fields.taskScheduler;
  ScanTask = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v36);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_19922944(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)ScanTask,
    0LL);
  v37 = this->fields.taskScheduler;
  v38 = (SchedulerTaskBase_array *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
  ScanTask = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v39);
  if ( !v38 )
    goto LABEL_22;
  v46 = (System_Int32_array **)ScanTask;
  if ( ScanTask )
  {
    ScanTask = (MissionNotifyManager_o *)sub_B5D684(ScanTask, v38->obj.klass->_1.element_class);
    if ( !ScanTask )
      goto LABEL_24;
  }
  if ( !v38->max_length )
    goto LABEL_23;
  v38->m_Items[0] = (SchedulerTaskBase_o *)v46;
  sub_B5D560((BattleServantConfConponent_o *)v38->m_Items, v46, v40, v41, v42, v43, v44, v45);
  if ( !v37 )
    goto LABEL_22;
  TaskScheduler__AddTask(v37, 0, v38, 0LL);
  v47 = sub_B5D694(SchedulerTaskNone_TypeInfo);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v47, 0LL);
  if ( !v47 )
    goto LABEL_22;
  v48 = *(System_Delegate_o **)(v47 + 32);
  v49 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
  SchedulerTaskBase_TaskCallback___ctor(
    v49,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__40_1__,
    0LL);
  v50 = (System_Int32_array **)System_Delegate__Combine(v48, (System_Delegate_o *)v49, 0LL);
  if ( !v50 || *v50 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v47 + 32) = v50;
    sub_B5D560((BattleServantConfConponent_o *)(v47 + 32), v50, v51, v52, v53, v54, v55, v56);
    v57 = this->fields.taskScheduler;
    ScanTask = (MissionNotifyManager_o *)sub_B5D5DC(SchedulerTaskBase___TypeInfo, 1LL);
    if ( !ScanTask )
      goto LABEL_22;
    v58 = ScanTask;
    ScanTask = (MissionNotifyManager_o *)sub_B5D684(v47, ScanTask->klass->_1.element_class);
    if ( ScanTask )
    {
      if ( LODWORD(v58->fields.mNoDispInfos) )
      {
        v58->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v47;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v58->fields.mMissionNotifyComps,
          (System_Int32_array **)v47,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        if ( v57 )
        {
          TaskScheduler__AddTask(v57, 0, (SchedulerTaskBase_array *)v58, 0LL);
          return;
        }
LABEL_22:
        sub_B5D69C(ScanTask, v32);
      }
LABEL_23:
      v65 = sub_B5D6C8(ScanTask);
      sub_B5D668(v65, 0LL);
    }
LABEL_24:
    v66 = sub_B5D6BC(ScanTask);
    sub_B5D668(v66, 0LL);
  }
  v67 = (SubmarineMapManager_o *)sub_B5D990(v50);
  SubmarineMapManager__OnEndScan(v67, v68);
}


void __fastcall SubmarineMapManager__SubsequentialOpenPanelTaskChain(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x21
  System_Collections_Generic_List_SchedulerTaskBase__o *SubsequentialOpenPanelTasks; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  int32_t size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v29; // x20
  bool v30; // vf
  int v31; // w8
  SchedulerTaskBase_o *v32; // x22
  BattleServantConfConponent_o *p_EndCallback; // x22
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v35; // x24
  System_Int32_array **v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  SubmarineMapManager_o *v43; // x0
  System_Action_o *v44; // x1
  const MethodInfo *v45; // x2

  if ( (byte_42E7B5A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__,
      (_DWORD)finishCallback,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__, v6, v7, v8);
    sub_B5D5C4(&SchedulerTaskBase_TaskCallback_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__, v12, v13, v14);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo, v15, v16, v17);
    byte_42E7B5A = 1;
  }
  v18 = sub_B5D694(SubmarineMapManager___c__DisplayClass41_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass41_0___ctor((SubmarineMapManager___c__DisplayClass41_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_QWORD *)(v18 + 16) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 16),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  SubsequentialOpenPanelTasks = SubmarineMapManager__CreateSubsequentialOpenPanelTasks(this, v27);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_12;
  size = SubsequentialOpenPanelTasks->fields._size;
  v29 = SubsequentialOpenPanelTasks;
  v30 = __OFSUB__(size, 1);
  v31 = size - 1;
  if ( v31 < 0 != v30 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v18 + 16), 0LL);
  }
  else
  {
    v32 = SubsequentialOpenPanelTasks->fields._items->m_Items[v31];
    if ( !v32 )
      goto LABEL_12;
    EndCallback = (System_Delegate_o *)v32->fields.EndCallback;
    p_EndCallback = (BattleServantConfConponent_o *)&v32->fields.EndCallback;
    v35 = (SchedulerTaskBase_TaskCallback_o *)sub_B5D694(SchedulerTaskBase_TaskCallback_TypeInfo);
    SchedulerTaskBase_TaskCallback___ctor(
      v35,
      (Il2CppObject *)v18,
      Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__,
      0LL);
    v36 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v35, 0LL);
    if ( !v36 || *v36 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      p_EndCallback->klass = (BattleServantConfConponent_c *)v36;
      sub_B5D560(p_EndCallback, v36, v37, v38, v39, v40, v41, v42);
      SubsequentialOpenPanelTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)this->fields.taskScheduler;
      if ( SubsequentialOpenPanelTasks )
      {
        TaskScheduler__AddTask_19922944((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v29, 0LL);
        return;
      }
LABEL_12:
      sub_B5D69C(SubsequentialOpenPanelTasks, v20);
    }
    v43 = (SubmarineMapManager_o *)sub_B5D990(v36);
    SubmarineMapManager__RevealAvailableSpots(v43, v44, v45);
  }
}


void __fastcall SubmarineMapManager__TryInitRequest(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 eventId; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  struct MapControl_MapInfo_o *mapInfo; // x8
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v20; // x1
  struct MapControl_MapInfo_o *v21; // x8

  if ( (byte_42E7B51 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SubmarineMapManager__TryInitRequest_b__32_0__, v11, v12, v13);
    byte_42E7B51 = 1;
  }
  this->fields.initRequestFinished = 0;
  eventId = SubmarineMapManager__get_eventId(this, method);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_12;
  if ( SubmarineMapDataManager__HasUserMapData(eventId, mapInfo->fields.mapId, v16) )
  {
    this->fields.initRequestFinished = 1;
    return;
  }
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__32_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v18,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v20);
  v21 = this->fields.mapInfo;
  if ( !v21 || !Request_WarBoardWallAttackRequest )
LABEL_12:
    sub_B5D69C(eventId, v15);
  EventScanPanelMapRequest__beginRequest(Request_WarBoardWallAttackRequest, eventId, v21->fields.mapId, 0, 0, 0LL);
}


void __fastcall SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  int32_t v11; // w20
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x3

  if ( (byte_42E7B6B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v5, v6, v7);
    byte_42E7B6B = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    newScannerDialog = this->fields.newScannerDialog;
    v11 = NewReleasedScanId;
    v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v11, v12, v13);
      return;
    }
LABEL_8:
    sub_B5D69C(submarineData, method);
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
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapManager_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct SubmarineMapDataManager_o *submarineData; // x8
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42E7B5D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v8, v9, v10);
    this = (SubmarineMapManager_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__,
                                      v11,
                                      v12,
                                      v13);
    byte_42E7B5D = 1;
  }
  memset(&v16, 0, sizeof(v16));
  submarineData = v4->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_B5D69C(this, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v16.fields.current )
      sub_B5D69C(0LL, v15);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v16.fields.current, v15);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v16,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B5D69C(0LL, beforeClearQuestId);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 v26; // x19
  ScrTerminalMap_o *terminalMap; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int v35; // w2
  __int64 v36; // x3
  UnityEngine_GameObject_c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v39; // x1
  int v40; // w2
  __int64 v41; // x3
  TerminalPramsManager_c *v42; // x0
  TerminalPramsManager_c *v43; // x0
  System_String_array *ValueByArray; // x0
  __int64 v45; // x8
  UnityEngine_GameObject_c *v46; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  EventDetailEntity_o *v48; // x21
  System_Action_o *v49; // x22
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x1
  __int64 v52; // x0

  if ( (byte_42E7B5E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__, v20, v21, v22);
    sub_B5D5C4(&SubmarineMapManager___c__DisplayClass49_0_TypeInfo, v23, v24, v25);
    byte_42E7B5E = 1;
  }
  v26 = sub_B5D694(SubmarineMapManager___c__DisplayClass49_0_TypeInfo);
  SubmarineMapManager___c__DisplayClass49_0___ctor((SubmarineMapManager___c__DisplayClass49_0_o *)v26, 0LL);
  if ( !v26 )
    goto LABEL_54;
  *(_QWORD *)(v26 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v26 + 16), (System_Int32_array **)this, v29, v30, v31, v32, v33, v34);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_54;
  ScrTerminalMap__UpdateMapButtonBadge(terminalMap, 0LL);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_54;
  ScrTerminalMap__UpdateCaldeaFolderBoardList(terminalMap, 0LL);
  terminalMap = this->fields.terminalMap;
  if ( !terminalMap )
    goto LABEL_54;
  ScrTerminalMap__UpdateAreaBoardList(terminalMap, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v28, v35, v36);
    byte_42E4B1E = 1;
  }
  terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = terminalMap->fields.pfbLineP->klass;
  if ( !klass )
    goto LABEL_54;
  terminalMap = (ScrTerminalMap_o *)klass->_2.genericContainerHandle;
  if ( !terminalMap )
    goto LABEL_54;
  TitleInfoControl__UpdateEventItemInfo((TitleInfoControl_o *)terminalMap, 0LL);
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)terminalMap,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  terminalMap = (ScrTerminalMap_o *)SubmarineMapManager__get_eventId(this, v39);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         (WarEntity_o **)(v26 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v26 + 32) = 0;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CDC )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v28, v40, v41);
      byte_42E5CDC = 1;
    }
    v42 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v42 = TerminalPramsManager_TypeInfo;
    }
    if ( v42->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v42);
      if ( !byte_42E5CDC )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v28, v40, v41);
        byte_42E5CDC = 1;
      }
      v43 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v43 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v43->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_54;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v45 = *(_QWORD *)&ValueByArray->max_length;
        if ( v45 )
        {
          if ( !(_DWORD)v45 )
          {
            v52 = sub_B5D6C8(ValueByArray);
            sub_B5D668(v52, 0LL);
          }
          *(_DWORD *)(v26 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v28, v40, v41);
      byte_42E4B1E = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v46 = terminalMap->fields.pfbLineP->klass;
    if ( v46 )
    {
      genericContainerHandle = (TitleInfoControl_o *)v46->_2.genericContainerHandle;
      v48 = *(EventDetailEntity_o **)(v26 + 24);
      v49 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v49,
        (Il2CppObject *)v26,
        Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( genericContainerHandle )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(genericContainerHandle, v48, v49, 0LL);
        return;
      }
    }
LABEL_54:
    sub_B5D69C(terminalMap, v28);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v50);
  SubmarineMapManager__ShowScannableEffect(this, v51);
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


bool __fastcall SubmarineMapManager___CoInitRequest_b__21_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  return this->fields.initRequestFinished;
}


void __fastcall SubmarineMapManager___OnEndScan_b__43_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SubmarineMapDataManager_o *submarineData; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B5D69C(0LL, method);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__28_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42E7B84 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__, v5, v6, v7);
    byte_42E7B84 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__, 0LL);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._24_OnAfterQuestAfterAction.method)(
    this,
    v8,
    this->klass->vtable._25_OnEveryActionEnd.methodPtr);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__28_1(SubmarineMapManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  SubmarineMapManager__HideScannableEffect(this, method);
  SubmarineMapManager__ShowScannableEffect(this, v3);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_0(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7B85 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7B85 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v6);
  CommonUI__SetSkipAnimation(Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
  this->fields.isTimeScaleAccelerate = 1;
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E7B86 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SubmarineMapManager__StartScanPerformance_b__40_2__, v5, v6, v7);
    byte_42E7B86 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v8, v9);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42E7B87 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SubmarineMapManager__StartScanPerformance_b__40_3__, v5, v6, v7);
    byte_42E7B87 = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_3__, 0LL);
  SubmarineMapManager__RevealAvailableSpots(this, v8, v9);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_3(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1

  if ( (byte_42E7B88 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E7B88 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  MissionNotifyManager__EndPause(v8, 0LL);
  SubmarineMapManager__OnEndScan(this, v10);
}


void __fastcall SubmarineMapManager___TryInitRequest_b__32_0(
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
    sub_B5D69C(this, method);
  return MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B5D69C(this, method);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B5D69C(this, method);
  return submarineData->fields._Settings_k__BackingField;
}


void __fastcall SubmarineMapManager_PlayingScanVoiceData___ctor(
        SubmarineMapManager_PlayingScanVoiceData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager__CoInitRequest_d__21___ctor(
        SubmarineMapManager__CoInitRequest_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SubmarineMapManager__CoInitRequest_d__21__MoveNext(
        SubmarineMapManager__CoInitRequest_d__21_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapManager__CoInitRequest_d__21_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  struct SubmarineMapManager_o *_4__this; // x20
  bool v19; // w21
  System_Func_bool__o *v20; // x22
  UnityEngine_WaitUntil_o *v21; // x20
  Il2CppObject **p__2__current; // x19

  v4 = this;
  if ( (byte_42E645E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SubmarineMapManager__CoInitRequest_b__21_0__, v11, v12, v13);
    this = (SubmarineMapManager__CoInitRequest_d__21_o *)sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v14, v15, v16);
    byte_42E645E = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__21_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__21_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_B5D69C(this, method);
    }
    SubmarineMapDataManager__ConstructParams((SubmarineMapDataManager_o *)this, 0LL);
    ActionExtensions__Call(v4->fields.finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_14;
  SubmarineMapManager__TryInitRequest(_4__this, 0LL);
  this = (SubmarineMapManager__CoInitRequest_d__21_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v19 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v20 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)_4__this,
    Method_SubmarineMapManager__CoInitRequest_b__21_0__,
    (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
  v21 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v21, v20, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v21;
  p__2__current = &v4->fields.__2__current;
  sub_B5D560(p__2__current);
  *((_DWORD *)p__2__current - 2) = 1;
  return v19;
}


Il2CppObject *__fastcall SubmarineMapManager__CoInitRequest_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineMapManager__CoInitRequest_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SubmarineMapManager__CoInitRequest_d__21__System_Collections_IEnumerator_Reset(
        SubmarineMapManager__CoInitRequest_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_SubmarineMapManager__CoInitRequest_d__21_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall SubmarineMapManager__CoInitRequest_d__21__System_Collections_IEnumerator_get_Current(
        SubmarineMapManager__CoInitRequest_d__21_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SubmarineMapManager__CoInitRequest_d__21__System_IDisposable_Dispose(
        SubmarineMapManager__CoInitRequest_d__21_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__24___ctor(
        SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__24__MoveNext(
        SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct SubmarineMapManager_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x8
  struct SubmarineMapAssetManager_o *v12; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  struct SubmarineMapDataManager_o *submarineData; // x8
  int32_t v15; // w0

  v4 = this;
  if ( (byte_42E645F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)sub_B5D5C4(
                                                                  &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                                  v5,
                                                                  v6,
                                                                  v7);
    byte_42E645F = 1;
  }
  if ( !v4->fields.__1__state )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_26;
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)SubmarineMapManager__get_eventId(_4__this, 0LL);
    mapInfo = _4__this->fields.mapInfo;
    if ( !mapInfo )
      goto LABEL_26;
    if ( SubmarineMapDataManager__HasUserMapData((int32_t)this, mapInfo->fields.mapId, 0LL) )
    {
      this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)_4__this->fields.taskScheduler;
      if ( this )
      {
        TaskScheduler__Activate((TaskScheduler_o *)this, 0LL);
        assetManager = _4__this->fields.assetManager;
        if ( assetManager )
        {
          this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)assetManager->fields._ClosedPanelTexture_k__BackingField;
          terminalMap = _4__this->fields.terminalMap;
          if ( this )
          {
            if ( !terminalMap )
              goto LABEL_26;
          }
          else
          {
            if ( !terminalMap )
              goto LABEL_26;
            this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)terminalMap->fields.mapModelManager;
          }
          _4__this->fields.closedPanelTexture = ClosePanelTextureUtil__CreateResizedTexture2D(
                                                  (UnityEngine_Texture2D_o *)this,
                                                  terminalMap->fields._currentMapImageH_k__BackingField,
                                                  LODWORD(terminalMap->fields.mapImageOffsetX),
                                                  0LL);
          sub_B5D560(&_4__this->fields.closedPanelTexture);
          v12 = _4__this->fields.assetManager;
          if ( v12 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v12->fields._ClosedPanelTexture_k__BackingField;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0LL, 0LL) )
            {
              _4__this->fields.closedPanelTexture = ClosePanelTextureUtil__CreateDarkTexture2D(
                                                      _4__this->fields.closedPanelTexture,
                                                      0.4,
                                                      0LL);
              sub_B5D560(&_4__this->fields.closedPanelTexture);
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
              this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)submarineData->fields._BeforeQuestInfo_k__BackingField;
              if ( this )
              {
                v15 = SubmarineQuestSaveInfo__get_BeforeClearQuestId((SubmarineQuestSaveInfo_o *)this, 0LL);
                SubmarineMapManager__UpdateParams(_4__this, v15, 0LL);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, 0LL);
                SubmarineMapManager__UpdateScannObstacleEffects(_4__this, 0LL);
                ActionExtensions__Call(v4->fields.finishCallback, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_26:
      sub_B5D69C(this, method);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_26;
    AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 34, 1, 0LL, 0, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__24__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn SubmarineMapManager__CoOnAfterSpotCreated_d__24__System_Collections_IEnumerator_Reset(
        SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__24_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__24__System_Collections_IEnumerator_get_Current(
        SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall SubmarineMapManager__CoOnAfterSpotCreated_d__24__System_IDisposable_Dispose(
        SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall SubmarineMapManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E6454 & 1) == 0 )
  {
    sub_B5D5C4(&SubmarineMapManager___c_TypeInfo, v1, v2, v3);
    byte_42E6454 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(SubmarineMapManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineMapManager___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall SubmarineMapManager___c___ctor(SubmarineMapManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c___CheckNewPlayableEventQuest_b__50_0(
        SubmarineMapManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall SubmarineMapManager___c___CreateHideEnemyOccupiedPanelTasks_b__102_0(
        SubmarineMapManager___c_o *this,
        SubmarineMapPanelData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._Chain_k__BackingField;
}


void __fastcall SubmarineMapManager___c__DisplayClass102_0___ctor(
        SubmarineMapManager___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapManager___c__DisplayClass102_0___CreateHideEnemyOccupiedPanelTasks_b__1(
        SubmarineMapManager___c__DisplayClass102_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  struct SubmarineSilhouetteData_o *silhouetteData; // x8

  if ( !x || (silhouetteData = this->fields.silhouetteData) == 0LL )
    sub_B5D69C(this, x);
  return x->fields.spotId == silhouetteData->fields._SpotId_k__BackingField;
}


void __fastcall SubmarineMapManager___c__DisplayClass20_0___ctor(
        SubmarineMapManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass20_0___LoadAssets_b__0(
        SubmarineMapManager___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SubmarineMapManager_o *_4__this; // x0
  UnityEngine_MonoBehaviour_o *v9; // x20
  SubmarineMapAssetManager_o *monitor; // x21
  System_Action_o *_9__1; // x23
  int32_t v12; // w22
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_42E6455 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__, v5, v6, v7);
    byte_42E6455 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  SubmarineMapManager__CreateAssetManagerIfNotExists(_4__this, 0LL);
  v9 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v9 )
    goto LABEL_9;
  monitor = (SubmarineMapAssetManager_o *)v9[6].monitor;
  _4__this = (SubmarineMapManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v12 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !monitor )
LABEL_9:
    sub_B5D69C(_4__this, method);
  Assets = SubmarineMapAssetManager__CoLoadAssets(monitor, v12, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088(v9, Assets, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass20_0___LoadAssets_b__1(
        SubmarineMapManager___c__DisplayClass20_0_o *this,
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
    sub_B5D69C(_4__this, method);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088(v6, inited, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass26_0___ctor(
        SubmarineMapManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass26_0___OnBeforeQuestAfterAction_b__0(
        SubmarineMapManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x20
  int v17; // w2
  __int64 v18; // x3
  System_Collections_Generic_List_string__c *klass; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E6456 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v11, v12, v13);
    byte_42E6456 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.__4__this )
    goto LABEL_19;
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  if ( !v16 )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v16,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v15, v17, v18);
      byte_42E4B1E = 1;
    }
    Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Instance = (DataManager_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = Instance[1].fields.saveNameList->klass;
    if ( klass )
    {
      Instance = (DataManager_o *)klass->_2.genericContainerHandle;
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
    sub_B5D69C(Instance, v15);
  }
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___ctor(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass35_0___DoPerformancesByVariedCond_b__0(
        SubmarineMapManager___c__DisplayClass35_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(_4__this, this->fields.finishCallback, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___ctor(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___ClickPanel_b__0(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SubmarineMapManager_o *_4__this; // x0
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v13; // x20

  if ( (byte_42E6457 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__, v8, v9, v10);
    byte_42E6457 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v13 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v13 )
LABEL_8:
    sub_B5D69C(_4__this, method);
  SubmarineMapManager__OpenSelectScannerDialog(v13, _9__1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, scanId);
  SubmarineMapManager__OnScannerSelected(_4__this, scanId, this->fields.panelData, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass37_0___ctor(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScannerSelected_b__0(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  SubmarineMapManager_o *_4__this; // x0
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v14; // x21
  _BOOL4 isShowDialogUpper; // w24

  if ( (byte_42E6458 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__, v8, v9, v10);
    byte_42E6458 = 1;
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
  v14 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__,
      (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B5D560(&this->fields.__9__1);
  }
  if ( !v14 )
LABEL_9:
    sub_B5D69C(_4__this, method);
  SubmarineMapManager__OpenScanConfirmDialog(v14, scanId, isShowDialogUpper, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScannerSelected_b__1(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  SubmarineMapManager_o *_4__this; // x0
  SubmarineMapManager_o *v13; // x20
  System_Action_int__o *_9__2; // x22

  if ( (byte_42E6459 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, yes, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__, v9, v10, v11);
    byte_42E6459 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, 0LL);
  v13 = this->fields.__4__this;
  if ( yes )
  {
    if ( v13 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(_4__this, yes);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B5D560(&this->fields.__9__2);
  }
  if ( !v13 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v13, _9__2, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, lscanId);
  SubmarineMapManager__OnScannerSelected(_4__this, lscanId, this->fields.panelData, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass38_0___ctor(
        SubmarineMapManager___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass38_0___OnScanDecided_b__0(
        SubmarineMapManager___c__DisplayClass38_0_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, result);
  SubmarineMapManager__OnScanPanelRequestFinished(_4__this, result, this->fields.scanId, this->fields.panelData, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass41_0___ctor(
        SubmarineMapManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass41_0___SubsequentialOpenPanelTaskChain_b__0(
        SubmarineMapManager___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass42_0___ctor(
        SubmarineMapManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass42_0___RevealAvailableSpots_b__0(
        SubmarineMapManager___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass49_0___ctor(
        SubmarineMapManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass49_0___UpdateTerminalInfo_b__0(
        SubmarineMapManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  int v10; // w2
  __int64 v11; // x3
  ErrorDialog_c *klass; // x8
  int v13; // w2
  __int64 v14; // x3
  ErrorDialog_c *v15; // x8

  if ( (byte_42E645A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v5, v6, v7);
    byte_42E645A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__SetSkipAnimation(Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.__4__this;
  if ( !Instance )
    goto LABEL_25;
  SubmarineMapManager__ResetTimeAcceleration((SubmarineMapManager_o *)Instance, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v9, v10, v11);
    byte_42E4B1E = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = Instance->fields.errorDialog->klass;
  if ( !klass )
    goto LABEL_25;
  Instance = (CommonUI_o *)klass->_2.genericContainerHandle;
  if ( !Instance )
    goto LABEL_25;
  TitleInfoControl__CheckEventPointReward(
    (TitleInfoControl_o *)Instance,
    this->fields.eventDetailEntity,
    0LL,
    this->fields.beforePoint,
    0LL);
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v9, v13, v14);
    byte_42E4B1E = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v15 = Instance->fields.errorDialog->klass;
  if ( !v15
    || (Instance = *(CommonUI_o **)&v15->_2.static_fields_size) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(Instance, v9);
  }
  SubmarineMapManager__UserControllable((SubmarineMapManager_o *)Instance, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass60_0___ctor(
        SubmarineMapManager___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapManager___c__DisplayClass60_0___AdjustSilhouetteGimmicks_b__0(
        SubmarineMapManager___c__DisplayClass60_0_o *this,
        SrcSpotBasePrefab_o *x,
        const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct SubmarineSilhouetteData_o *silhouetteData; // x9

  if ( !x
    || (mMapCtrl_SpotInfo = x->fields.mMapCtrl_SpotInfo) == 0LL
    || (silhouetteData = this->fields.silhouetteData) == 0LL )
  {
    sub_B5D69C(this, x);
  }
  return mMapCtrl_SpotInfo->fields.spotId == silhouetteData->fields._SpotId_k__BackingField;
}


void __fastcall SubmarineMapManager___c__DisplayClass67_0___ctor(
        SubmarineMapManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass67_0___OpenSelectScannerDialog_b__0(
        SubmarineMapManager___c__DisplayClass67_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SubmarineMapManager_o *_4__this; // x0

  if ( (byte_42E645B & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_int___, scanId, (_DWORD)method, v3);
    byte_42E645B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, *(_QWORD *)&scanId);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2CECD28 *)Method_ActionExtensions_Call_int___);
}


void __fastcall SubmarineMapManager___c__DisplayClass69_0___ctor(
        SubmarineMapManager___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass69_0___OpenScanConfirmDialog_b__0(
        SubmarineMapManager___c__DisplayClass69_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SubmarineMapManager_o *_4__this; // x0

  if ( (byte_42E645C & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, yes, (_DWORD)method, v3);
    byte_42E645C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, yes);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___ctor(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__0(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *scanAnimObj; // x0

  scanAnimObj = this->fields.scanAnimObj;
  if ( !scanAnimObj )
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_B5D69C(0LL, method);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_42E645D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E645D = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(scanAnimObj, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass95_0___ctor(
        SubmarineMapManager___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapManager___c__DisplayClass95_0___CreateRevealSpotOnPanelTasks_b__0(
        SubmarineMapManager___c__DisplayClass95_0_o *this,
        MapControl_SpotInfo_o *x,
        const MethodInfo *method)
{
  struct SubmarineMapPanelData_o *panelData; // x8

  if ( !x || (panelData = this->fields.panelData) == 0LL )
    sub_B5D69C(this, x);
  return x->fields.spotId == panelData->fields._SpotId_k__BackingField;
}


void __fastcall SubmarineMapManager___c__DisplayClass98_0___ctor(
        SubmarineMapManager___c__DisplayClass98_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SubmarineMapManager___c__DisplayClass98_0___CreateScanOpenPanelTask_b__2(
        SubmarineMapManager___c__DisplayClass98_0_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._Chain_k__BackingField == this->fields.i;
}