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

  if ( (byte_4213625 & 1) == 0 )
  {
    this = (SubmarineMapManager_o *)sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___, go);
    byte_4213625 = 1;
  }
  if ( !go )
    goto LABEL_21;
  this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                    go,
                                    (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
      this = (SubmarineMapManager_o *)UnityEngine_Mathf__Min_40819044(*(_DWORD *)(v10 + 168), v9, 0LL);
      mapInfo = (int)v7->fields.mapInfo;
      ++v8;
      v9 = (int)this;
      if ( v8 >= mapInfo )
        goto LABEL_12;
    }
LABEL_20:
    v15 = sub_B0D9A8(this);
    sub_B0D948(v15, 0LL);
  }
  v9 = 0x7FFFFFFF;
LABEL_12:
  if ( v9 != 0x7FFFFFFF )
  {
    this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__28717028(
                                      go,
                                      (const MethodInfo_1B62FE4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIWidget___);
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
    sub_B0D97C(this);
  }
}


void __fastcall SubmarineMapManager__AdjustEachSpotsPositions(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_array *Children; // x0
  int max_length; // w8
  UnityEngine_GameObject_array *v6; // x20
  unsigned int v7; // w22
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  const MethodInfo *v9; // x2
  __int64 v10; // x0

  if ( (byte_4213622 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4213622 = 1;
  }
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_16;
  max_length = Children->max_length;
  v6 = Children;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v10 = sub_B0D9A8(Children);
        sub_B0D948(v10, 0LL);
      }
      Children = (UnityEngine_GameObject_array *)v6->m_Items[v7];
      if ( !Children )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Children,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
        SubmarineMapManager__AdjustSpotPosition(this, (SrcSpotBasePrefab_o *)Component_srcLineSprite, v9);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_16:
    sub_B0D97C(Children);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__AdjustSilhouetteGimmicks(SubmarineMapManager_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  UnityEngine_GameObject_o *Children; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  int klass; // w8
  UnityEngine_GameObject_o *v33; // x21
  unsigned int v34; // w19
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v36; // x21
  int v37; // w8
  UnityEngine_GameObject_o *v38; // x22
  unsigned int v39; // w19
  UnityEngine_Object_o *v40; // x23
  _DWORD *monitor; // x8
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x23
  __int64 v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **parameters; // x1
  SubmarineSilhouetteData_o **v54; // x22
  SubmarineSilhouetteData_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v58; // x24
  __int64 v59; // x0
  UnityEngine_Object_o *v60; // x23
  _BOOL8 v61; // x0
  const MethodInfo *v62; // x2
  SubmarineMapDataManager_o *v63; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x24
  __int64 v65; // x1
  __int64 v66; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v67; // x22
  __int64 v68; // x0
  UnityEngine_Transform_o *transform; // x0
  float x; // s8
  float y; // s9
  __int64 v72; // x0
  int v73; // s0
  Il2CppObject *current; // x22
  __int64 v78; // x0
  float xMin; // s0
  float v80; // s4
  float xMax; // s0
  float v82; // s4
  float yMin; // s0
  float v84; // s4
  float yMax; // s0
  float v86; // s4
  int v87; // w23
  int v88; // w10
  UnityEngine_Transform_o *v89; // x22
  UnityEngine_Vector2_o v90; // x0
  UnityEngine_Vector2_o center; // kr00_8
  int v92; // s2
  int v93; // w23
  __int64 v94; // x0
  int v95; // [xsp+14h] [xbp-DCh]
  _BYTE v96[32]; // [xsp+18h] [xbp-D8h] BYREF
  int v97; // [xsp+38h] [xbp-B8h]
  System_Collections_Generic_List_Enumerator_T__o v98; // [xsp+40h] [xbp-B0h] BYREF
  MethodInfo methoda; // [xsp+58h] [xbp-98h] BYREF
  UnityEngine_Vector2_o v100; // 0:s4.4,4:s5.4
  UnityEngine_Vector2_o v101; // 0:s6.4,4:s7.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Rect_o v103; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v104; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v106; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v107; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v108; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v109; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v110; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v111; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4213624 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v12);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___67894776, v20);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v21);
    sub_B0D8A4(&System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo, v22);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v23);
    sub_B0D8A4(&Method_System_Predicate_SrcSpotBasePrefab___ctor__, v24);
    sub_B0D8A4(&System_Predicate_SrcSpotBasePrefab__TypeInfo, v25);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__, v26);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass60_0_TypeInfo, v27);
    byte_4213624 = 1;
  }
  memset(&methoda, 0, 48);
  memset(&v98, 0, sizeof(v98));
  v97 = 0;
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SrcSpotBasePrefab__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  klass = (int)Children[1].klass;
  v33 = Children;
  if ( klass >= 1 )
  {
    v34 = 0;
    while ( v34 < klass )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v33[1].monitor + (int)v34);
      if ( !Children )
        goto LABEL_63;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          Children,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) != 0 )
      {
        if ( !v28 )
          goto LABEL_63;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Add__);
      }
      klass = (int)v33[1].klass;
      if ( (int)++v34 >= klass )
        goto LABEL_15;
    }
LABEL_64:
    v94 = sub_B0D9A8(Children);
    sub_B0D948(v94, 0LL);
  }
LABEL_15:
  v36 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__MapGimmickComponent__TypeInfo,
                                                                                                   v30,
                                                                                                   v31);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v36,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent___ctor__);
  Children = (UnityEngine_GameObject_o *)GameObjectExtensions__GetChildren(this->fields.rootGimmickP, 0, 0LL);
  if ( !Children )
    goto LABEL_63;
  v37 = (int)Children[1].klass;
  v38 = Children;
  if ( v37 >= 1 )
  {
    v39 = 0;
    while ( v39 < v37 )
    {
      Children = (UnityEngine_GameObject_o *)*((_QWORD *)&v38[1].monitor + (int)v39);
      if ( !Children )
        goto LABEL_63;
      v40 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      Children,
                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_MapGimmickComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        if ( !v40 )
          goto LABEL_63;
        monitor = v40[4].monitor;
        if ( !monitor || !v36 )
          goto LABEL_63;
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v36,
          monitor[5],
          (WarBoardAIRoute_RouteData_o *)v40,
          (const MethodInfo_2E90400 *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__set_Item__);
      }
      v37 = (int)v38[1].klass;
      if ( (int)++v39 >= v37 )
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
    sub_B0D97C(Children);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v96,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Children,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v95 = 0;
  methoda.parameters = *(const void **)&v96[16];
  *(_OWORD *)&methoda.klass = *(_OWORD *)v96;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v45 = sub_B0D974(SubmarineMapManager___c__DisplayClass60_0_TypeInfo, v43, v44);
    SubmarineMapManager___c__DisplayClass60_0___ctor((SubmarineMapManager___c__DisplayClass60_0_o *)v45, 0LL);
    if ( !v45 )
      sub_B0D97C(v46);
    parameters = (System_Int32_array **)methoda.parameters;
    *(_QWORD *)(v45 + 16) = methoda.parameters;
    v54 = (SubmarineSilhouetteData_o **)(v45 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v45 + 16), parameters, v47, v48, v49, v50, v51, v52);
    v55 = *(SubmarineSilhouetteData_o **)(v45 + 16);
    if ( !v55 )
      sub_B0D97C(0LL);
    if ( SubmarineSilhouetteData__get_IsOnPanel(v55, 0LL) )
    {
      v58 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_SrcSpotBasePrefab__TypeInfo,
                                                                       v56,
                                                                       v57);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v58,
        (Il2CppObject *)v45,
        Method_SubmarineMapManager___c__DisplayClass60_0__AdjustSilhouetteGimmicks_b__0__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_SrcSpotBasePrefab___ctor__);
      if ( !v28 )
        sub_B0D97C(v59);
      v60 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                      (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)v28,
                                      (System_Predicate_T__o *)v58,
                                      (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_SrcSpotBasePrefab__Find__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v61 = UnityEngine_Object__op_Equality(v60, 0LL, 0LL);
      if ( !v61 )
      {
        if ( !*v54 )
          sub_B0D97C(v61);
        if ( !v36 )
          sub_B0D97C(v61);
        if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v36,
               (*v54)->fields._ObjectId_k__BackingField,
               (WarBoardEvalValueSquare_CalcEval_o **)&methoda.name,
               (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__MapGimmickComponent__TryGetValue__) )
        {
          v63 = this->fields.submarineData;
          if ( !v63 )
            sub_B0D97C(0LL);
          SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                      v63,
                                                                                      *v54,
                                                                                      v62);
          v67 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                  v65,
                                                                                  v66);
          System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
            v67,
            SilhouetteOccupiedPanels,
            (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___67894776);
          if ( !v60 )
            sub_B0D97C(v68);
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v60, 0LL);
          if ( !transform )
            sub_B0D97C(0LL);
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          x = localPosition.fields.x;
          y = localPosition.fields.y;
          *(UnityEngine_Vector3_o *)&v103.fields.m_XMin = UnityEngine_Vector3__get_zero(0LL);
          v103.fields.m_Width = v103.fields.m_XMin;
          v103.fields.m_Height = v103.fields.m_YMin;
          v103.fields.m_XMin = x;
          v103.fields.m_YMin = y;
          UnityEngine_Rect___ctor_34970056(v103, v100, v101, &methoda);
          if ( !v67 )
            sub_B0D97C(v72);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v96,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v67,
            (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
          v98 = *(System_Collections_Generic_List_Enumerator_T__o *)v96;
          while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v98,
                    (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
          {
            current = v98.fields.current;
            xMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v73, &methoda);
            if ( !current )
              sub_B0D97C(v78);
            v104.fields.m_XMin = UnityEngine_Mathf__Min(xMin, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMin(v104, v80, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v105, &methoda);
            v106.fields.m_XMin = UnityEngine_Mathf__Max(xMax, *((float *)&current[1].monitor + 1), 0LL);
            UnityEngine_Rect__set_xMax(v106, v82, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v107, &methoda);
            v108.fields.m_XMin = UnityEngine_Mathf__Min(yMin, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMin(v108, v84, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v109, &methoda);
            v110.fields.m_XMin = UnityEngine_Mathf__Max(yMax, *(float *)&current[2].klass, 0LL);
            UnityEngine_Rect__set_yMax(v110, v86, &methoda);
          }
          *(_DWORD *)&v96[4 * v95 + 24] = 492;
          v87 = ++v97;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v98,
            (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
          v88 = v87;
          if ( v87 && *(_DWORD *)&v96[4 * v87 + 20] == 492 )
          {
            v88 = v87 - 1;
            v97 = v87 - 1;
          }
          v95 = v88;
          if ( !methoda.name )
            sub_B0D97C(0LL);
          v89 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)methoda.name, 0LL);
          center = UnityEngine_Rect__get_center(v111, &methoda);
          if ( !v89 )
            ((void (__fastcall __noreturn *)(_QWORD))sub_B0D97C)(v90);
          v92 = 0;
          UnityEngine_Transform__set_localPosition(v89, *(UnityEngine_Vector3_o *)&center.fields.x, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v96[4 * v95 + 24] = 544;
  v93 = ++v97;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  if ( v93 && *(_DWORD *)&v96[4 * v93 + 20] == 544 )
    v97 = v93 - 1;
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
  const MethodInfo_299B944 *v8; // x2
  System_Nullable_Vector3__o centerPosition; // [xsp+0h] [xbp-40h] BYREF
  System_Nullable_Vector2__o v10; // [xsp+10h] [xbp-30h] BYREF
  System_Nullable_Vector2__o v11; // 0:x0.12
  System_Nullable_Vector3__o v12; // 0:x0.16
  UnityEngine_Vector2_o PanelUnitSize_k__BackingField; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4213621 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_Vector2___ctor__, spot);
    this = (SubmarineMapManager_o *)sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v5);
    byte_4213621 = 1;
  }
  submarineData = v4->fields.submarineData;
  if ( !submarineData )
    goto LABEL_7;
  Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_7;
  PanelUnitSize_k__BackingField = Settings_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v11.fields.value = (struct UnityEngine_Vector2_o)&v10;
  *(_DWORD *)&v10.fields.has_value = 0;
  v10.fields.value = 0LL;
  *(_DWORD *)&v11.fields.has_value = Method_System_Nullable_Vector2___ctor__;
  System_Nullable_Vector2____ctor(v11, PanelUnitSize_k__BackingField, (const MethodInfo_299B55C *)method);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v12.fields.value.fields.x = &centerPosition;
  *(_QWORD *)&centerPosition.fields.value.fields.x = 0LL;
  *(_QWORD *)&centerPosition.fields.value.fields.z = 0LL;
  *(_QWORD *)&v12.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v12, zero, v8);
  if ( !spot )
LABEL_7:
    sub_B0D97C(this);
  SrcSpotBasePrefab__AdjustBtnColliderArea(spot, v10, centerPosition, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v11; // x1
  clsQuestCheck_o *v12; // x20
  const MethodInfo *v13; // x1
  QuestReleaseMaster_o *eventId; // x0
  QuestReleaseMaster_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  CommonUI_o *v18; // x19
  int32_t list; // w20
  SubmarineMapManager___c_c *v20; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Action_o *_9__50_0; // x22
  System_String_o *v23; // x21
  Il2CppObject *v24; // x23
  struct SubmarineMapManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v32; // x0
  System_Nullable_float__o messagePosY; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o p_messagePosY; // 0:x0.8
  System_Nullable_float__o v35; // 0:x5.8

  if ( (byte_421361C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestReleaseMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v8);
    sub_B0D8A4(&Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__, v9);
    sub_B0D8A4(&SubmarineMapManager___c_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_6878/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/, v11);
    byte_421361C = 1;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v12 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = (QuestReleaseMaster_o *)SubmarineMapManager__get_eventId(this, v13);
  if ( !v12 )
    goto LABEL_27;
  eventId = (QuestReleaseMaster_o *)clsQuestCheck__GetNewPlayableEventQuestId(v12, (int32_t)eventId, 0LL);
  if ( !eventId )
    goto LABEL_27;
  v15 = eventId;
  if ( !eventId->fields._MasterName_k__BackingField )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  eventId = (QuestReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestReleaseMaster___);
  if ( !LODWORD(v15->fields._MasterName_k__BackingField) )
    goto LABEL_28;
  if ( !eventId )
    goto LABEL_27;
  if ( !QuestReleaseMaster__IsContainCondType(eventId, (int32_t)v15->fields.list, 143, 0LL) )
    return;
  eventId = (QuestReleaseMaster_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LODWORD(v15->fields._MasterName_k__BackingField) )
  {
LABEL_28:
    v32 = sub_B0D9A8(eventId);
    sub_B0D948(v32, 0LL);
  }
  v18 = (CommonUI_o *)eventId;
  list = (int32_t)v15->fields.list;
  v20 = SubmarineMapManager___c_TypeInfo;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v20 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__50_0 = static_fields->__9__50_0;
  v23 = (System_String_o *)StringLiteral_6878/*"GET_EVENT_POINT_AFTER_DIALOG_MESSAGE_PANEL_MAP"*/;
  if ( !_9__50_0 )
  {
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__50_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v16, v17);
    System_Action___ctor(_9__50_0, v24, Method_SubmarineMapManager___c__CheckNewPlayableEventQuest_b__50_0__, 0LL);
    v25 = SubmarineMapManager___c_TypeInfo->static_fields;
    v25->__9__50_0 = _9__50_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v25->__9__50_0,
      (System_Int32_array **)_9__50_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  p_messagePosY = (System_Nullable_float__o)&messagePosY;
  messagePosY = 0LL;
  System_Nullable_float____ctor(p_messagePosY, 30.0, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
  if ( !v18 )
LABEL_27:
    sub_B0D97C(eventId);
  v35 = messagePosY;
  CommonUI__OpenQuestNewPlayableDialog(v18, list, v23, _9__50_0, 0, v35, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  SubmarineMapPanelData_o *v25; // x1
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  _QWORD *v28; // x0
  System_Reflection_MethodBase_o *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float PanelSelectDelaySecond_k__BackingField; // s8
  __int64 v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  System_Delegate_o *v38; // x23
  SchedulerTaskBase_TaskCallback_o *v39; // x24
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v48; // x20
  __int64 v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x0
  __int64 v57; // x0
  SubmarineMapPanelData_o *v58; // x0
  const MethodInfo *v59; // x1

  if ( (byte_4213612 & 1) == 0 )
  {
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, panelData);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v5);
    sub_B0D8A4(&Method_SubmarineMapManager_ClickPanel__, v6);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__, v8);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass36_0_TypeInfo, v9);
    byte_4213612 = 1;
  }
  v10 = sub_B0D974(SubmarineMapManager___c__DisplayClass36_0_TypeInfo, panelData, method);
  SubmarineMapManager___c__DisplayClass36_0___ctor((SubmarineMapManager___c__DisplayClass36_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_25;
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 24) = panelData;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)panelData, v18, v19, v20, v21, v22, v23);
  v25 = *(SubmarineMapPanelData_o **)(v10 + 24);
  if ( !v25 || !this->fields.isEnableClickPanel )
    return;
  if ( !v25->fields._IsOpened_k__BackingField || !v25->fields._HasEnemyParts_k__BackingField )
  {
    if ( !v25->fields._IsScannable_k__BackingField )
      return;
    SubmarineMapManager__ShowSelectedPanelEffect(this, v25, v24);
    v28 = Method_SubmarineMapManager_ClickPanel__;
    if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
      v28 = (_QWORD *)sub_B0D8AC(Method_SubmarineMapManager_ClickPanel__);
    v29 = (System_Reflection_MethodBase_o *)sub_B0D888(v28, v28[3]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 0, 0LL);
    submarineData = this->fields.submarineData;
    if ( submarineData )
    {
      Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        PanelSelectDelaySecond_k__BackingField = Settings_k__BackingField->fields._PanelSelectDelaySecond_k__BackingField;
        v35 = sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v30, v31);
        SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v35, PanelSelectDelaySecond_k__BackingField, 0LL);
        if ( v35 )
        {
          v38 = *(System_Delegate_o **)(v35 + 32);
          v39 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v36, v37);
          SchedulerTaskBase_TaskCallback___ctor(
            v39,
            (Il2CppObject *)v10,
            Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__0__,
            0LL);
          v40 = (System_Int32_array **)System_Delegate__Combine(v38, (System_Delegate_o *)v39, 0LL);
          if ( v40 && *v40 != (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
          {
            v58 = (SubmarineMapPanelData_o *)sub_B0DC70(v40);
            SubmarineMapPanelData__get_IsEnemyVisible(v58, v59);
            return;
          }
          *(_QWORD *)(v35 + 32) = v40;
          sub_B0D840((BattleServantConfConponent_o *)(v35 + 32), v40, v41, v42, v43, v44, v45, v46);
          taskScheduler = this->fields.taskScheduler;
          v11 = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
          if ( v11 )
          {
            v48 = v11;
            v49 = sub_B0D964(v35, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
            if ( !v49 )
            {
              v56 = sub_B0D99C();
              sub_B0D948(v56, 0LL);
            }
            if ( !*(_DWORD *)(v48 + 24) )
            {
              v57 = sub_B0D9A8(v49);
              sub_B0D948(v57, 0LL);
            }
            *(_QWORD *)(v48 + 32) = v35;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v48 + 32),
              (System_Int32_array **)v35,
              v50,
              v51,
              v52,
              v53,
              v54,
              v55);
            if ( taskScheduler )
            {
              TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v48, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_25:
    sub_B0D97C(v11);
  }
  v26 = Method_SubmarineMapManager_ClickPanel__;
  if ( (*((_BYTE *)Method_SubmarineMapManager_ClickPanel__ + 75) & 2) != 0 )
    v26 = (_QWORD *)sub_B0D8AC(Method_SubmarineMapManager_ClickPanel__);
  v27 = (System_Reflection_MethodBase_o *)sub_B0D888(v26, v26[3]);
  OverwriteAssetSoundName__PlaySystemSe(v27, 2, 0LL);
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoInitRequest(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4213609 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineMapManager__CoInitRequest_d__21_TypeInfo, finishCallback);
    byte_4213609 = 1;
  }
  v5 = sub_B0D974(SubmarineMapManager__CoInitRequest_d__21_TypeInfo, finishCallback, method);
  SubmarineMapManager__CoInitRequest_d__21___ctor((SubmarineMapManager__CoInitRequest_d__21_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)finishCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall SubmarineMapManager__CoOnAfterSpotCreated(
        SubmarineMapManager_o *this,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_421360A & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo, finishCallback);
    byte_421360A = 1;
  }
  v5 = sub_B0D974(SubmarineMapManager__CoOnAfterSpotCreated_d__24_TypeInfo, finishCallback, method);
  SubmarineMapManager__CoOnAfterSpotCreated_d__24___ctor(
    (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v5 + 40),
    (System_Int32_array **)finishCallback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall SubmarineMapManager__ConstructOnPartOfDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *scanConfirmDialog; // x21
  UnityEngine_UI_Dropdown_DropdownItem_o *v8; // x0
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ScanConfirmDialogPrefab_k__BackingField; // x21
  struct SubmarineScanConfirmDialog_o *Component_srcLineSprite; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UnityEngine_Object_o *selectScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v19; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *SelectScannerDialogPrefab_k__BackingField; // x21
  struct SubmarineSelectScannerDialog_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Object_o *newScannerDialog; // x21
  struct SubmarineMapAssetManager_o *v29; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *NewScannerDialogPrefab_k__BackingField; // x21
  struct SubmarineNewScannerDialog_o *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_4213626 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___, v4);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4213626 = 1;
  }
  scanConfirmDialog = (UnityEngine_Object_o *)this->fields.scanConfirmDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(scanConfirmDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
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
    v8 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           ScanConfirmDialogPrefab_k__BackingField,
           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_34;
    Component_srcLineSprite = (struct SubmarineScanConfirmDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                       (UnityEngine_GameObject_o *)v8,
                                                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineScanConfirmDialog___);
    this->fields.scanConfirmDialog = Component_srcLineSprite;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.scanConfirmDialog,
      (System_Int32_array **)Component_srcLineSprite,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
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
  v8 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(selectScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v19 = this->fields.assetManager;
    if ( !v19 )
      goto LABEL_34;
    SelectScannerDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v19->fields._SelectScannerDialogPrefab_k__BackingField;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
           SelectScannerDialogPrefab_k__BackingField,
           (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !v8 )
      goto LABEL_34;
    v21 = (struct SubmarineSelectScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     (UnityEngine_GameObject_o *)v8,
                                                     (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineSelectScannerDialog___);
    this->fields.selectScannerDialog = v21;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.selectScannerDialog,
      (System_Int32_array **)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
  v8 = (UnityEngine_UI_Dropdown_DropdownItem_o *)UnityEngine_Object__op_Equality(newScannerDialog, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) != 0 )
  {
    v29 = this->fields.assetManager;
    if ( v29 )
    {
      NewScannerDialogPrefab_k__BackingField = (UnityEngine_UI_Dropdown_DropdownItem_o *)v29->fields._NewScannerDialogPrefab_k__BackingField;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
             NewScannerDialogPrefab_k__BackingField,
             (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( v8 )
      {
        v31 = (struct SubmarineNewScannerDialog_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)v8,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineNewScannerDialog___);
        this->fields.newScannerDialog = v31;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.newScannerDialog,
          (System_Int32_array **)v31,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        EventMapManagerBase__LocateDialogToUiRoot(
          (EventMapManagerBase_o *)this,
          (BaseDialog_o *)this->fields.newScannerDialog,
          0LL);
        return;
      }
    }
LABEL_34:
    sub_B0D97C(v8);
  }
}


void __fastcall SubmarineMapManager__CreateAssetManagerIfNotExists(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleServantConfConponent_o *p_assetManager; // x19
  struct SubmarineMapAssetManager_o *assetManager; // t1
  SubmarineMapAssetManager_o *v6; // x20
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x1

  if ( (byte_421360F & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineMapAssetManager_TypeInfo, method);
    byte_421360F = 1;
  }
  assetManager = this->fields.assetManager;
  p_assetManager = (BattleServantConfConponent_o *)&this->fields.assetManager;
  if ( !assetManager )
  {
    v6 = (SubmarineMapAssetManager_o *)sub_B0D974(SubmarineMapAssetManager_TypeInfo, method, v2);
    SubmarineMapAssetManager___ctor(v6, v7);
    p_assetManager->klass = (BattleServantConfConponent_c *)v6;
    sub_B0D840(p_assetManager, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
    if ( !p_assetManager->klass )
      sub_B0D97C(0LL);
    SubmarineMapAssetManager__Initialize((SubmarineMapAssetManager_o *)p_assetManager->klass, v14);
  }
}


void __fastcall SubmarineMapManager__CreateContainers(SubmarineMapManager_o *this, const MethodInfo *method)
{
  SubmarineMapManager_o *v2; // x19
  __int64 v3; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x9
  UILabel_o *PanelContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *transform; // x21
  System_Int32_array **v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct SubmarineMapAssetManager_o *v15; // x8
  struct ScrTerminalMap_o *v16; // x9
  UILabel_o *EffectContainerPrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v18; // x0
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct SubmarineMapAssetManager_o *v26; // x8
  struct ScrTerminalMap_o *v27; // x9
  UILabel_o *GridLinePrefab_k__BackingField; // x20
  UnityEngine_Transform_o *v29; // x0
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  v2 = this;
  if ( (byte_421361D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, method);
    this = (SubmarineMapManager_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_421361D = 1;
  }
  assetManager = v2->fields.assetManager;
  if ( !assetManager )
    goto LABEL_16;
  terminalMap = v2->fields.terminalMap;
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
  v8 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                PanelContainerPrefab_k__BackingField,
                                transform,
                                (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  v2->fields.panelContainer = (struct UnityEngine_GameObject_o *)v8;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.panelContainer, v8, v9, v10, v11, v12, v13, v14);
  v15 = v2->fields.assetManager;
  if ( !v15 )
    goto LABEL_16;
  v16 = v2->fields.terminalMap;
  if ( !v16 )
    goto LABEL_16;
  this = (SubmarineMapManager_o *)v16->fields.mapButtonGrid;
  if ( !this )
    goto LABEL_16;
  EffectContainerPrefab_k__BackingField = (UILabel_o *)v15->fields._EffectContainerPrefab_k__BackingField;
  v18 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v19 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 EffectContainerPrefab_k__BackingField,
                                 v18,
                                 (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  v2->fields.effectContainer = (struct UnityEngine_GameObject_o *)v19;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.effectContainer, v19, v20, v21, v22, v23, v24, v25);
  v26 = v2->fields.assetManager;
  if ( !v26
    || (v27 = v2->fields.terminalMap) == 0LL
    || (this = (SubmarineMapManager_o *)v27->fields.mapButtonGrid) == 0LL )
  {
LABEL_16:
    sub_B0D97C(this);
  }
  GridLinePrefab_k__BackingField = (UILabel_o *)v26->fields._GridLinePrefab_k__BackingField;
  v29 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  v30 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 GridLinePrefab_k__BackingField,
                                 v29,
                                 (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  v2->fields.gridLine = (struct UnityEngine_GameObject_o *)v30;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.gridLine, v30, v31, v32, v33, v34, v35, v36);
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
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *SilhouetteDataList_k__BackingField; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x23
  __int64 v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **current; // x1
  SubmarineSilhouetteData_o **v40; // x22
  SubmarineSilhouetteData_o *v41; // x0
  _BOOL8 HasClearCondQuestId; // x0
  const MethodInfo *v43; // x3
  const MethodInfo *v44; // x2
  SubmarineMapDataManager_o *v45; // x0
  System_Collections_Generic_IEnumerable_T__o *SilhouetteOccupiedPanels; // x25
  __int64 v47; // x1
  __int64 v48; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v49; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  SubmarineMapManager___c_c *v52; // x0
  struct SubmarineMapManager___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__102_0; // x25
  Il2CppObject *v55; // x26
  struct SubmarineMapManager___c_StaticFields *v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Collections_Generic_List_T__o *All; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v64; // x24
  MapControl_MapInfo_o *mapInfo; // x0
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x25
  __int64 v67; // x1
  __int64 v68; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v69; // x26
  __int64 v70; // x0
  UnityEngine_GameObject_o *rootSpotP; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v73; // x23
  int32_t SpotId_k__BackingField; // w22
  System_String_o *GobjName; // x0
  UnityEngine_Transform_o *v76; // x0
  __int64 v77; // x0
  const MethodInfo *v78; // x1
  int v79; // s0
  struct SubmarineMapDataManager_o *v82; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  EventMissionProgressRequest_Argument_ProgressData_o *MoveCameraToPositionTask; // x0
  SubmarineMapPanelData_array *v85; // x1
  const MethodInfo *v86; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *OpenPanelsAndRevealSpotsTask; // x0
  System_Collections_Generic_List_Enumerator_T__o v89; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_421363F & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__,
      *(_QWORD *)&beforeClearQuestId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___67894776, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v17);
    sub_B0D8A4(&Method_System_Predicate_SubmarineMapPanelData___ctor__, v18);
    sub_B0D8A4(&System_Predicate_SubmarineMapPanelData__TypeInfo, v19);
    sub_B0D8A4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v20);
    sub_B0D8A4(&SrcSpotBasePrefab_TypeInfo, v21);
    sub_B0D8A4(&Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__, v22);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__, v23);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass102_0_TypeInfo, v24);
    sub_B0D8A4(&SubmarineMapManager___c_TypeInfo, v25);
    byte_421363F = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  *(_QWORD *)&beforeClearQuestId,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData
    || (SilhouetteDataList_k__BackingField = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)submarineData->fields._SilhouetteDataList_k__BackingField) == 0LL )
  {
    sub_B0D97C(SilhouetteDataList_k__BackingField);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v89,
    SilhouetteDataList_k__BackingField,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineSilhouetteData__GetEnumerator__);
  v90 = v89;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v90,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__MoveNext__) )
  {
    v31 = sub_B0D974(SubmarineMapManager___c__DisplayClass102_0_TypeInfo, v29, v30);
    SubmarineMapManager___c__DisplayClass102_0___ctor((SubmarineMapManager___c__DisplayClass102_0_o *)v31, 0LL);
    if ( !v31 )
      sub_B0D97C(v32);
    current = (System_Int32_array **)v90.fields.current;
    *(_QWORD *)(v31 + 16) = v90.fields.current;
    v40 = (SubmarineSilhouetteData_o **)(v31 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v31 + 16), current, v33, v34, v35, v36, v37, v38);
    v41 = *(SubmarineSilhouetteData_o **)(v31 + 16);
    if ( !v41 )
      sub_B0D97C(0LL);
    HasClearCondQuestId = SubmarineSilhouetteData__HasClearCondQuestId(v41, beforeClearQuestId, 0LL);
    if ( HasClearCondQuestId )
    {
      if ( !*v40 )
        sub_B0D97C(HasClearCondQuestId);
      if ( SubmarineMapDataManager__IsClearEachQuests((*v40)->fields._ObjectQuestIds_k__BackingField, -1, 0, v43) )
      {
        v45 = this->fields.submarineData;
        if ( !v45 )
          sub_B0D97C(0LL);
        SilhouetteOccupiedPanels = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapDataManager__GetSilhouetteOccupiedPanels(
                                                                                    v45,
                                                                                    *v40,
                                                                                    v44);
        v49 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                                System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                v47,
                                                                                v48);
        System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
          v49,
          SilhouetteOccupiedPanels,
          (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor___67894776);
        v52 = SubmarineMapManager___c_TypeInfo;
        if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
          v52 = SubmarineMapManager___c_TypeInfo;
        }
        static_fields = v52->static_fields;
        _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__102_0;
        if ( !_9__102_0 )
        {
          if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v52);
            static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
          }
          v55 = (Il2CppObject *)static_fields->__9;
          _9__102_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                                 System_Predicate_SubmarineMapPanelData__TypeInfo,
                                                                                 v50,
                                                                                 v51);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            _9__102_0,
            v55,
            Method_SubmarineMapManager___c__CreateHideEnemyOccupiedPanelTasks_b__102_0__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_SubmarineMapPanelData___ctor__);
          v56 = SubmarineMapManager___c_TypeInfo->static_fields;
          v56->__9__102_0 = (struct System_Predicate_SubmarineMapPanelData__o *)_9__102_0;
          sub_B0D840(
            (BattleServantConfConponent_o *)&v56->__9__102_0,
            (System_Int32_array **)_9__102_0,
            v57,
            v58,
            v59,
            v60,
            v61,
            v62);
        }
        if ( !v49 )
          sub_B0D97C(v52);
        All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
                (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v49,
                (System_Predicate_T__o *)_9__102_0,
                (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__FindAll__);
        v64 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)All;
        if ( !All )
          sub_B0D97C(0LL);
        if ( All->fields._size >= 1 )
        {
          mapInfo = this->fields.mapInfo;
          if ( !mapInfo )
            sub_B0D97C(0LL);
          SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
          v69 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                           v67,
                                                                           v68);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v69,
            (Il2CppObject *)v31,
            Method_SubmarineMapManager___c__DisplayClass102_0__CreateHideEnemyOccupiedPanelTasks_b__1__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
          if ( !SpotList )
            sub_B0D97C(v70);
          if ( System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                 (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
                 (System_Predicate_T__o *)v69,
                 (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
          {
            rootSpotP = this->fields.rootSpotP;
            if ( !rootSpotP )
              sub_B0D97C(0LL);
            transform = UnityEngine_GameObject__get_transform(rootSpotP, 0LL);
            if ( !*v40 )
              sub_B0D97C(transform);
            v73 = transform;
            SpotId_k__BackingField = (*v40)->fields._SpotId_k__BackingField;
            if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
            }
            GobjName = SrcSpotBasePrefab__GetGobjName(SpotId_k__BackingField, 0LL);
            if ( !v73 )
              sub_B0D97C(GobjName);
            v76 = UnityEngine_Transform__Find(v73, GobjName, 0LL);
            if ( !v76 )
              sub_B0D97C(0LL);
            *(UnityEngine_Vector3_o *)&v79 = UnityEngine_Transform__get_localPosition(v76, 0LL);
            v82 = this->fields.submarineData;
            if ( !v82 )
              sub_B0D97C(v77);
            Settings_k__BackingField = v82->fields._Settings_k__BackingField;
            if ( !Settings_k__BackingField )
              sub_B0D97C(v77);
            MoveCameraToPositionTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                                                                                this,
                                                                                                *(UnityEngine_Vector3_o *)&v79,
                                                                                                1.0,
                                                                                                Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                                                                                v78);
            if ( !v26 )
              sub_B0D97C(MoveCameraToPositionTask);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v26,
              MoveCameraToPositionTask,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          }
          v85 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                 v64,
                                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
          OpenPanelsAndRevealSpotsTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
                                                                                                  this,
                                                                                                  v85,
                                                                                                  v86);
          if ( !v26 )
            sub_B0D97C(OpenPanelsAndRevealSpotsTask);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v26,
            OpenPanelsAndRevealSpotsTask,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v90,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineSilhouetteData__Dispose__);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v26;
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateHitObstractTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        float waitTime,
        const MethodInfo *method)
{
  SchedulerTaskNone_o *v4; // x19

  if ( (byte_421363C & 1) == 0 )
  {
    sub_B0D8A4(&SchedulerTaskNone_TypeInfo, panelData);
    byte_421363C = 1;
  }
  v4 = (SchedulerTaskNone_o *)sub_B0D974(SchedulerTaskNone_TypeInfo, panelData, method);
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
  const MethodInfo_299B55C *v5; // x2
  float y; // s10
  float x; // s11
  __int64 v11; // x1
  __int64 v12; // x1
  MapCamera_o *mapCamera; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  MapCameraPerformance_o *v16; // x0
  SchedulerTaskBase_o *v17; // x20
  System_Nullable_float__o v19; // [xsp+8h] [xbp-48h] BYREF
  System_Nullable_Vector2__o v20; // [xsp+10h] [xbp-40h] BYREF
  System_Nullable_float__o v21; // 0:x0.8
  System_Nullable_float__o v22; // 0:x4.8
  System_Nullable_Vector2__o v23; // 0:x0.12
  UnityEngine_Vector2_o v24; // 0:s0.4,4:s1.4

  y = destPos.fields.y;
  x = destPos.fields.x;
  if ( (byte_4213635 & 1) == 0 )
  {
    sub_B0D8A4(&MapCameraPerformance_TypeInfo, method);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v11);
    sub_B0D8A4(&Method_System_Nullable_Vector2___ctor__, v12);
    byte_4213635 = 1;
  }
  mapCamera = this->fields.mapCamera;
  v23.fields.value = (struct UnityEngine_Vector2_o)&v20;
  v24.fields.x = x;
  v24.fields.y = y;
  *(_DWORD *)&v23.fields.has_value = Method_System_Nullable_Vector2___ctor__;
  *(_DWORD *)&v20.fields.has_value = 0;
  v20.fields.value = 0LL;
  System_Nullable_Vector2____ctor(v23, v24, v5);
  v21 = (System_Nullable_float__o)&v19;
  v19 = 0LL;
  System_Nullable_float____ctor(v21, size, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
  v16 = (MapCameraPerformance_o *)sub_B0D974(MapCameraPerformance_TypeInfo, v14, v15);
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
  struct SubmarineMapDataManager_o *submarineData; // x8
  const MethodInfo *v11; // x1
  struct MapControl_MapInfo_o *mapInfo; // x24
  SubmarineMapManager_o *v13; // x20
  unsigned int v14; // w25
  struct SubmarineMapAssetManager_o *v15; // x8
  ObjectDomain_o *v16; // x21
  UILabel_o *v17; // x22
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v19; // x22
  UnityEngine_Transform_o *v20; // x23
  int v21; // s0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  SubmarineMapPanelComponent_o *v30; // x22
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  struct SubmarineMapDataManager_o *v35; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x9
  SubmarineMapManager_o *v37; // x20
  int32_t v38; // w21
  int32_t v39; // w22
  int v40; // w28
  struct SubmarineMapDataManager_o *v41; // x8
  unsigned __int64 v42; // d0 OVERLAPPED
  int v43; // s1
  int v44; // s2
  struct SubmarineMapAssetManager_o *v45; // x8
  ObjectDomain_o *v46; // x23
  UILabel_o *v47; // x24
  UnityEngine_Transform_o *v48; // x25
  UnityEngine_GameObject_o *v49; // x24
  UnityEngine_Transform_o *v50; // x25
  int v51; // s0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  SubmarineMapPanelComponent_o *v60; // x24
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x2

  v2 = this;
  if ( (byte_421361F & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, method);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    this = (SubmarineMapManager_o *)sub_B0D8A4(&PanelUniqueIDUtil_TypeInfo, v5);
    byte_421361F = 1;
  }
  assetManager = v2->fields.assetManager;
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
    panelContainer = (UnityEngine_Object_o *)v2->fields.panelContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)v2->fields.closedPanelTexture;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        submarineData = v2->fields.submarineData;
        if ( !submarineData )
          goto LABEL_59;
        this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateNeverOpenSurroundsDomains(
                                          submarineData->fields._PositionCalculator_k__BackingField,
                                          v2->fields.closedPanelTexture,
                                          0LL);
        if ( !this )
          goto LABEL_59;
        mapInfo = this->fields.mapInfo;
        v13 = this;
        if ( (int)mapInfo >= 1 )
        {
          v14 = 0;
          while ( 1 )
          {
            v15 = v2->fields.assetManager;
            if ( !v15 )
              break;
            this = (SubmarineMapManager_o *)v2->fields.panelContainer;
            if ( !this )
              break;
            v16 = (ObjectDomain_o *)*((_QWORD *)&v13->fields.warInfo + (int)v14);
            v17 = (UILabel_o *)v15->fields._PanelPrefab_k__BackingField;
            transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                              v17,
                                              transform,
                                              (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
            if ( !this )
              break;
            v19 = (UnityEngine_GameObject_o *)this;
            this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( !v16 )
              break;
            v20 = (UnityEngine_Transform_o *)this;
            *(UnityEngine_Vector3_o *)&v21 = ObjectDomain__get_center(v16, 0LL);
            if ( !v20 )
              break;
            UnityEngine_Transform__set_localPosition(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
            this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              v19,
                                              (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
            if ( !this )
              break;
            v30 = (SubmarineMapPanelComponent_o *)this;
            this->fields.mapCamera = 0LL;
            sub_B0D840((BattleServantConfConponent_o *)&this->fields.mapCamera, 0LL, v24, v25, v26, v27, v28, v29);
            SubmarineMapPanelComponent__SetSize(v30, v16, v31);
            SubmarineMapPanelComponent__SetClosedPanelTexture(v30, v16, v2->fields.closedPanelTexture, v32);
            SubmarineMapPanelComponent__SetClosedPanelVisible(v30, 1, v33);
            if ( (int)++v14 >= (int)mapInfo )
              goto LABEL_32;
            if ( v14 >= LODWORD(v13->fields.mapInfo) )
            {
              v34 = sub_B0D9A8(this);
              sub_B0D948(v34, 0LL);
            }
          }
LABEL_59:
          sub_B0D97C(this);
        }
LABEL_32:
        this = (SubmarineMapManager_o *)v2->fields.submarineData;
        if ( !this )
          goto LABEL_59;
        this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(
                                          (SubmarineMapDataManager_o *)this,
                                          v11);
        v35 = v2->fields.submarineData;
        if ( !v35 )
          goto LABEL_59;
        PositionCalculator_k__BackingField = v35->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          goto LABEL_59;
        v37 = this;
        v38 = 0;
        while ( v38 < PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField )
        {
          v39 = 0;
          v40 = 1;
          while ( v39 < PositionCalculator_k__BackingField->fields._VerticalPanelNum_k__BackingField )
          {
            if ( (BYTE3(PanelUniqueIDUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !PanelUniqueIDUtil_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(PanelUniqueIDUtil_TypeInfo);
            }
            this = (SubmarineMapManager_o *)PanelUniqueIDUtil__HasID(v38, v39, (System_Int32_array *)v37, 0LL);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              v41 = v2->fields.submarineData;
              if ( !v41 )
                goto LABEL_59;
              this = (SubmarineMapManager_o *)v41->fields._PositionCalculator_k__BackingField;
              if ( !this )
                goto LABEL_59;
              v42 = vadd_f32(
                      (float32x2_t)this->fields.warInfo,
                      vmul_f32(
                        vmul_f32(
                          *(float32x2_t *)&this->fields.m_CachedPtr,
                          vcvt_f32_s32(vsub_s32((int32x2_t)__PAIR64__(v40, (2 * v38) | 1u), (int32x2_t)this->fields.mapInfo))),
                        (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
              v43 = HIDWORD(v42);
              v44 = 0;
              this = (SubmarineMapManager_o *)ClosePanelTextureUtil__CreateClosedPanelDomain(
                                                *(UnityEngine_Vector3_o *)&v42,
                                                (SubmarinePanelPositionCalculator_o *)this,
                                                0LL);
              v45 = v2->fields.assetManager;
              if ( !v45 )
                goto LABEL_59;
              v46 = (ObjectDomain_o *)this;
              this = (SubmarineMapManager_o *)v2->fields.panelContainer;
              if ( !this )
                goto LABEL_59;
              v47 = (UILabel_o *)v45->fields._PanelPrefab_k__BackingField;
              v48 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              this = (SubmarineMapManager_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                v47,
                                                v48,
                                                (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
              if ( !this )
                goto LABEL_59;
              v49 = (UnityEngine_GameObject_o *)this;
              this = (SubmarineMapManager_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)this,
                                                0LL);
              if ( !v46 )
                goto LABEL_59;
              v50 = (UnityEngine_Transform_o *)this;
              *(UnityEngine_Vector3_o *)&v51 = ObjectDomain__get_center(v46, 0LL);
              if ( !v50 )
                goto LABEL_59;
              UnityEngine_Transform__set_localPosition(v50, *(UnityEngine_Vector3_o *)&v51, 0LL);
              this = (SubmarineMapManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                v49,
                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              if ( !this )
                goto LABEL_59;
              v60 = (SubmarineMapPanelComponent_o *)this;
              this->fields.mapCamera = 0LL;
              sub_B0D840((BattleServantConfConponent_o *)&this->fields.mapCamera, 0LL, v54, v55, v56, v57, v58, v59);
              SubmarineMapPanelComponent__SetSize(v60, v46, v61);
              SubmarineMapPanelComponent__SetClosedPanelTexture(v60, v46, v2->fields.closedPanelTexture, v62);
              SubmarineMapPanelComponent__SetClosedPanelVisible(v60, 1, v63);
            }
            v35 = v2->fields.submarineData;
            if ( v35 )
            {
              PositionCalculator_k__BackingField = v35->fields._PositionCalculator_k__BackingField;
              ++v39;
              v40 += 2;
              if ( PositionCalculator_k__BackingField )
                continue;
            }
            goto LABEL_59;
          }
          PositionCalculator_k__BackingField = v35->fields._PositionCalculator_k__BackingField;
          ++v38;
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
  const MethodInfo_299B944 *v19; // x2
  ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x23
  UnityEngine_Transform_o *v21; // x22
  __int64 v22; // x1
  __int64 v23; // x2
  SchedulerTaskCommonEffect_o *v24; // x0
  SchedulerTaskCommonEffect_o *v25; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  System_Delegate_o *StartCallback; // x23
  SchedulerTaskBase_TaskCallback_o *v29; // x24
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  SchedulerTaskBase_array *v37; // x22
  __int64 v38; // x1
  __int64 v39; // x2
  SchedulerTaskWaitTime_o *v40; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  SchedulerTaskOrthostichy_o *v55; // x21
  __int64 v56; // x1
  __int64 v57; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  float v60; // s8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v61; // x22
  __int64 v62; // x1
  __int64 v63; // x2
  SchedulerTaskWaitTime_o *v64; // x23
  const MethodInfo *v65; // x2
  System_Collections_Generic_IEnumerable_T__o *RevealSpotOnPanelTasks; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  SchedulerTaskOrthostichy_o *v69; // x19
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UnityEngine_GameObject_o *v76; // x20
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x1
  __int64 v84; // x2
  SchedulerTaskParallel_o *v85; // x19
  __int64 v87; // x0
  __int64 v88; // x0
  SubmarineMapManager_o *v89; // x0
  SubmarineMapPanelData_array *v90; // x1
  const MethodInfo *v91; // x2
  System_Nullable_Vector3__o v92; // [xsp+20h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v93; // 0:x0.16
  System_Nullable_Vector3__o v94; // 0:x5.16
  UnityEngine_Vector3_o LocalPosition_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4213639 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, panelData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v10);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v11);
    sub_B0D8A4(&SchedulerTaskCommonEffect_TypeInfo, v12);
    sub_B0D8A4(&SchedulerTaskOrthostichy_TypeInfo, v13);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v14);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v15);
    sub_B0D8A4(&Method_SubmarineMapPanelData_OpenPanel__, v16);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v17);
    byte_4213639 = 1;
  }
  effectContainer = this->fields.effectContainer;
  if ( !effectContainer )
    goto LABEL_25;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(effectContainer, 0LL);
  if ( !panelData )
    goto LABEL_25;
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  LocalPosition_k__BackingField = panelData->fields._LocalPosition_k__BackingField;
  v21 = (UnityEngine_Transform_o *)effectContainer;
  *(_QWORD *)&v93.fields.value.fields.x = &v92;
  *(_QWORD *)&v92.fields.value.fields.x = 0LL;
  *(_QWORD *)&v92.fields.value.fields.z = 0LL;
  *(_QWORD *)&v93.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
  System_Nullable_Vector3____ctor(v93, LocalPosition_k__BackingField, v19);
  v24 = (SchedulerTaskCommonEffect_o *)sub_B0D974(SchedulerTaskCommonEffect_TypeInfo, v22, v23);
  *(_QWORD *)&v94.fields.value.fields.x = 0LL;
  *(_QWORD *)&v94.fields.value.fields.z = 0LL;
  v25 = v24;
  SchedulerTaskCommonEffect___ctor_16658540(
    v24,
    v21,
    effectScanedPanelObjPool,
    v92,
    v94,
    (System_Nullable_Vector3__o)0,
    1,
    0LL);
  if ( !v25 )
    goto LABEL_25;
  StartCallback = (System_Delegate_o *)v25->fields.StartCallback;
  v29 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v26, v27);
  SchedulerTaskBase_TaskCallback___ctor(v29, (Il2CppObject *)panelData, Method_SubmarineMapPanelData_OpenPanel__, 0LL);
  v30 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v29, 0LL);
  if ( !v30 || *v30 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    v25->fields.StartCallback = (struct SchedulerTaskBase_TaskCallback_o *)v30;
    sub_B0D840((BattleServantConfConponent_o *)&v25->fields.StartCallback, v30, v31, v32, v33, v34, v35, v36);
    v37 = (SchedulerTaskBase_array *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL);
    v40 = (SchedulerTaskWaitTime_o *)sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v38, v39);
    SchedulerTaskWaitTime___ctor(v40, waitTime, 0LL);
    if ( v37 )
    {
      if ( v40 )
      {
        effectContainer = (UnityEngine_GameObject_o *)sub_B0D964(v40, v37->obj.klass->_1.element_class);
        if ( !effectContainer )
          goto LABEL_27;
      }
      if ( !v37->max_length )
        goto LABEL_26;
      v37->m_Items[0] = (SchedulerTaskBase_o *)v40;
      sub_B0D840((BattleServantConfConponent_o *)v37->m_Items, (System_Int32_array **)v40, v41, v42, v43, v44, v45, v46);
      effectContainer = (UnityEngine_GameObject_o *)sub_B0D964(v25, v37->obj.klass->_1.element_class);
      if ( !effectContainer )
        goto LABEL_27;
      if ( v37->max_length <= 1 )
        goto LABEL_26;
      v37->m_Items[1] = (SchedulerTaskBase_o *)v25;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v37->m_Items[1],
        (System_Int32_array **)v25,
        v47,
        v48,
        v49,
        v50,
        v51,
        v52);
      v55 = (SchedulerTaskOrthostichy_o *)sub_B0D974(SchedulerTaskOrthostichy_TypeInfo, v53, v54);
      SchedulerTaskOrthostichy___ctor(v55, v37, 0LL);
      submarineData = this->fields.submarineData;
      if ( submarineData )
      {
        Settings_k__BackingField = submarineData->fields._Settings_k__BackingField;
        if ( Settings_k__BackingField )
        {
          v60 = Settings_k__BackingField->fields._SecondOfOpenPanelToRevealSpot_k__BackingField + waitTime;
          v61 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v56, v57);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
            v61,
            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
          v64 = (SchedulerTaskWaitTime_o *)sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v62, v63);
          SchedulerTaskWaitTime___ctor(v64, v60, 0LL);
          if ( v61 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v61,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v64,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
            RevealSpotOnPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateRevealSpotOnPanelTasks(
                                                                                      this,
                                                                                      panelData,
                                                                                      v65);
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v61,
              RevealSpotOnPanelTasks,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
            v69 = (SchedulerTaskOrthostichy_o *)sub_B0D974(SchedulerTaskOrthostichy_TypeInfo, v67, v68);
            SchedulerTaskOrthostichy___ctor_16660580(
              v69,
              (System_Collections_Generic_List_SchedulerTaskBase__o *)v61,
              0LL);
            effectContainer = (UnityEngine_GameObject_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL);
            if ( effectContainer )
            {
              v76 = effectContainer;
              if ( !v55
                || (effectContainer = (UnityEngine_GameObject_o *)sub_B0D964(
                                                                    v55,
                                                                    effectContainer->klass->_1.element_class)) != 0LL )
              {
                if ( !LODWORD(v76[1].klass) )
                  goto LABEL_26;
                v76[1].monitor = v55;
                sub_B0D840(
                  (BattleServantConfConponent_o *)&v76[1].monitor,
                  (System_Int32_array **)v55,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74,
                  v75);
                if ( !v69
                  || (effectContainer = (UnityEngine_GameObject_o *)sub_B0D964(v69, v76->klass->_1.element_class)) != 0LL )
                {
                  if ( LODWORD(v76[1].klass) > 1 )
                  {
                    *(_QWORD *)&v76[1].fields.m_CachedPtr = v69;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&v76[1].fields,
                      (System_Int32_array **)v69,
                      v77,
                      v78,
                      v79,
                      v80,
                      v81,
                      v82);
                    v85 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskParallel_TypeInfo, v83, v84);
                    SchedulerTaskParallel___ctor(v85, (SchedulerTaskBase_array *)v76, 0LL);
                    return (SchedulerTaskBase_o *)v85;
                  }
LABEL_26:
                  v87 = sub_B0D9A8(effectContainer);
                  sub_B0D948(v87, 0LL);
                }
              }
LABEL_27:
              v88 = sub_B0D99C();
              sub_B0D948(v88, 0LL);
            }
          }
        }
      }
    }
LABEL_25:
    sub_B0D97C(effectContainer);
  }
  v89 = (SubmarineMapManager_o *)sub_B0DC70(v30);
  return SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(v89, v90, v91);
}


SchedulerTaskBase_o *__fastcall SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_array *panelDataArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *OpenPanelAndRevealSpotTask; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x22
  SchedulerTaskParallel_o *v14; // x19
  __int64 v16; // x0

  if ( (byte_421363A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, panelDataArray);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v7);
    byte_421363A = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                 panelDataArray,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !panelDataArray )
    goto LABEL_11;
  v12 = *(_QWORD *)&panelDataArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v12 )
      {
        v16 = sub_B0D9A8(OpenPanelAndRevealSpotTask);
        sub_B0D948(v16, 0LL);
      }
      OpenPanelAndRevealSpotTask = (EventMissionProgressRequest_Argument_ProgressData_o *)SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                                                                            this,
                                                                                            panelDataArray->m_Items[v13],
                                                                                            0.0,
                                                                                            v11);
      if ( !v8 )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        OpenPanelAndRevealSpotTask,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      LODWORD(v12) = panelDataArray->max_length;
      if ( (__int64)++v13 >= (int)v12 )
        goto LABEL_9;
    }
LABEL_11:
    sub_B0D97C(OpenPanelAndRevealSpotTask);
  }
LABEL_9:
  v14 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskParallel_TypeInfo, v10, v11);
  SchedulerTaskParallel___ctor_16660936(v14, (System_Collections_Generic_List_SchedulerTaskBase__o *)v8, 0LL);
  return (SchedulerTaskBase_o *)v14;
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
  __int64 v11; // x1
  struct SubmarineMapAssetManager_o *assetManager; // x8
  UnityEngine_Object_o *PanelPrefab_k__BackingField; // x20
  UnityEngine_Object_o *panelContainer; // x20
  UnityEngine_Object_o *closedPanelTexture; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  _BOOL8 v17; // x0
  struct SubmarineMapAssetManager_o *v18; // x8
  UnityEngine_GameObject_o *v19; // x0
  Il2CppObject *current; // x20
  UILabel_o *v21; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v23; // x0
  UnityEngine_GameObject_o *v24; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  struct SubmarineMapDataManager_o *v26; // x8
  srcLineSprite_o *v27; // x21
  SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x0
  float v29; // s8
  float v30; // s9
  ObjectDomain_o *ClosedPanelDomain; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  ObjectDomain_o *v38; // x23
  const MethodInfo *v39; // x2
  const MethodInfo *v40; // x3
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v49; // x21
  const MethodInfo *v50; // x2
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_421361E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_SubmarineMapPanelData___ctor__, method);
    sub_B0D8A4(&System_Action_SubmarineMapPanelData__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v6);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    this = (SubmarineMapManager_o *)sub_B0D8A4(&Method_SubmarineMapManager_ClickPanel__, v11);
    byte_421361E = 1;
  }
  memset(&v52, 0, sizeof(v52));
  assetManager = v2->fields.assetManager;
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
    panelContainer = (UnityEngine_Object_o *)v2->fields.panelContainer;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(panelContainer, 0LL, 0LL) )
    {
      closedPanelTexture = (UnityEngine_Object_o *)v2->fields.closedPanelTexture;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (SubmarineMapManager_o *)UnityEngine_Object__op_Equality(closedPanelTexture, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        submarineData = v2->fields.submarineData;
        if ( submarineData )
        {
          this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField;
          if ( this )
          {
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              &v51,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
            v52 = v51;
            while ( 1 )
            {
              v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v52,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
              if ( !v17 )
                break;
              v18 = v2->fields.assetManager;
              if ( !v18 )
                sub_B0D97C(v17);
              v19 = v2->fields.panelContainer;
              if ( !v19 )
                sub_B0D97C(0LL);
              current = v52.fields.current;
              v21 = (UILabel_o *)v18->fields._PanelPrefab_k__BackingField;
              transform = UnityEngine_GameObject__get_transform(v19, 0LL);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              v23 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                  v21,
                                                  transform,
                                                  (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
              v24 = v23;
              if ( !v23 )
                sub_B0D97C(0LL);
              Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                          v23,
                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SubmarineMapPanelComponent___);
              v26 = v2->fields.submarineData;
              if ( !v26 )
                sub_B0D97C(Component_srcLineSprite);
              if ( !current )
                sub_B0D97C(Component_srcLineSprite);
              v27 = Component_srcLineSprite;
              PositionCalculator_k__BackingField = v26->fields._PositionCalculator_k__BackingField;
              if ( !PositionCalculator_k__BackingField )
                sub_B0D97C(0LL);
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
              v53.fields.z = 0.0;
              v53.fields.x = v29;
              v53.fields.y = v30;
              ClosedPanelDomain = ClosePanelTextureUtil__CreateClosedPanelDomain(
                                    v53,
                                    PositionCalculator_k__BackingField,
                                    0LL);
              if ( !v27 )
                sub_B0D97C(ClosedPanelDomain);
              v38 = ClosedPanelDomain;
              v27->fields.mcLineSprite = 0LL;
              sub_B0D840((BattleServantConfConponent_o *)&v27->fields.mcLineSprite, 0LL, v32, v33, v34, v35, v36, v37);
              v54.fields.z = 0.0;
              v54.fields.x = v29;
              v54.fields.y = v30;
              GameObjectExtensions__SetLocalPosition(v24, v54, 0LL);
              SubmarineMapPanelComponent__SetSize((SubmarineMapPanelComponent_o *)v27, v38, v39);
              SubmarineMapPanelComponent__SetClosedPanelTexture(
                (SubmarineMapPanelComponent_o *)v27,
                v38,
                v2->fields.closedPanelTexture,
                v40);
              current[3].klass = (Il2CppClass *)v27;
              sub_B0D840(
                (BattleServantConfConponent_o *)&current[3],
                (System_Int32_array **)v27,
                v41,
                v42,
                v43,
                v44,
                v45,
                v46);
              v49 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                           System_Action_SubmarineMapPanelData__TypeInfo,
                                                                                           v47,
                                                                                           v48);
              System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                v49,
                (Il2CppObject *)v2,
                (intptr_t)Method_SubmarineMapManager_ClickPanel__,
                (const MethodInfo_246EA3C *)Method_System_Action_SubmarineMapPanelData___ctor__);
              SubmarineMapPanelData__SetPanelClickAction(
                (SubmarineMapPanelData_o *)current,
                (System_Action_SubmarineMapPanelData__o *)v49,
                v50);
            }
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v52,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
            return;
          }
        }
LABEL_40:
        sub_B0D97C(this);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  void *Children; // x0
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  const MethodInfo *v14; // x2
  __int64 v16; // x0

  if ( (byte_421363D & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_421363D = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  Children = GameObjectExtensions__GetChildren(this->fields.rootSpotP, 0, 0LL);
  if ( !Children )
    goto LABEL_16;
  v10 = *((_DWORD *)Children + 6);
  v11 = Children;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
      {
        v16 = sub_B0D9A8(Children);
        sub_B0D948(v16, 0LL);
      }
      Children = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !Children )
        break;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)Children,
                                                          (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Children = (void *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)Children & 1) == 0 )
      {
        Children = SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_srcLineSprite, v14);
        if ( !v8 )
          break;
        System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v8,
          (System_Collections_Generic_IEnumerable_T__o *)Children,
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
      }
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        return (System_Collections_Generic_List_SchedulerTaskBase__o *)v8;
    }
LABEL_16:
    sub_B0D97C(Children);
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
  __int64 v15; // x1
  __int64 v16; // x22
  MapControl_MapInfo_o *mapInfo; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  SchedulerTaskNone_o *v30; // x23
  System_Collections_Generic_List_MapControl_SpotInfo__o *SpotList; // x23
  __int64 v32; // x1
  __int64 v33; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v34; // x24
  __int64 v35; // x8
  UnityEngine_Transform_o *v36; // x21
  int32_t v37; // w22
  UnityEngine_Object_o *v38; // x21
  WebViewObject_o *Component_WebViewObject; // x1
  const MethodInfo *v41; // x2

  if ( (byte_4213638 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___, panelData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Predicate_MapControl_SpotInfo___ctor__, v10);
    sub_B0D8A4(&System_Predicate_MapControl_SpotInfo__TypeInfo, v11);
    sub_B0D8A4(&SchedulerTaskNone_TypeInfo, v12);
    sub_B0D8A4(&SrcSpotBasePrefab_TypeInfo, v13);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__, v14);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass95_0_TypeInfo, v15);
    byte_4213638 = 1;
  }
  v16 = sub_B0D974(SubmarineMapManager___c__DisplayClass95_0_TypeInfo, panelData, method);
  SubmarineMapManager___c__DisplayClass95_0___ctor((SubmarineMapManager___c__DisplayClass95_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_23;
  *(_QWORD *)(v16 + 16) = panelData;
  v24 = v16 + 16;
  sub_B0D840((BattleServantConfConponent_o *)(v16 + 16), (System_Int32_array **)panelData, v18, v19, v20, v21, v22, v23);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v30 = (SchedulerTaskNone_o *)sub_B0D974(SchedulerTaskNone_TypeInfo, v28, v29);
  SchedulerTaskNone___ctor(v30, 0LL);
  if ( !v27 )
    goto LABEL_23;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v27,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( !*(_QWORD *)v24 || *(int *)(*(_QWORD *)v24 + 40LL) < 1 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v27;
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_23;
  SpotList = MapControl_MapInfo__GetSpotList(mapInfo, 0LL);
  v34 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_MapControl_SpotInfo__TypeInfo,
                                                                   v32,
                                                                   v33);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v34,
    (Il2CppObject *)v16,
    Method_SubmarineMapManager___c__DisplayClass95_0__CreateRevealSpotOnPanelTasks_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_MapControl_SpotInfo___ctor__);
  if ( !SpotList )
    goto LABEL_23;
  if ( !System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)SpotList,
          (System_Predicate_T__o *)v34,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_MapControl_SpotInfo__Find__) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v27;
  mapInfo = (MapControl_MapInfo_o *)this->fields.rootSpotP;
  if ( !mapInfo )
    goto LABEL_23;
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)mapInfo, 0LL);
  v35 = *(_QWORD *)v24;
  if ( !*(_QWORD *)v24 )
    goto LABEL_23;
  v36 = (UnityEngine_Transform_o *)mapInfo;
  v37 = *(_DWORD *)(v35 + 40);
  if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
  }
  mapInfo = (MapControl_MapInfo_o *)SrcSpotBasePrefab__GetGobjName(v37, 0LL);
  if ( !v36 )
    goto LABEL_23;
  v38 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v36, (System_String_o *)mapInfo, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  mapInfo = (MapControl_MapInfo_o *)UnityEngine_Object__op_Equality(v38, 0LL, 0LL);
  if ( ((unsigned __int8)mapInfo & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v27;
  if ( !v38 )
LABEL_23:
    sub_B0D97C(mapInfo);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)v38,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_SrcSpotBasePrefab___);
  return SubmarineMapManager__CreateRevealSpotTasks(this, (SrcSpotBasePrefab_o *)Component_WebViewObject, v41);
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
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x0
  SpotEntity_o *Mine; // x22
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_421363E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, spot);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v7);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v8);
    sub_B0D8A4(&SubmarineLightenSpotPerformance_TypeInfo, v9);
    sub_B0D8A4(&SubmarineRevealSpotPerformance_TypeInfo, v10);
    byte_421363E = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  spot,
                                                                                                  method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  if ( !spot )
    goto LABEL_19;
  mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo;
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_19;
  if ( mMapCtrl_SpotInfo->fields.dispType )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
  Mine = MapControl_SpotInfo__GetMine(mMapCtrl_SpotInfo, 0LL);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
    goto LABEL_19;
  if ( !QuestTree__IsSpotSatisfyingDisplayCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
  SubmarineMapManager__AdjustSpotPosition(this, spot, v14);
  v17 = sub_B0D974(SubmarineRevealSpotPerformance_TypeInfo, v15, v16);
  SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v17, 0LL);
  *(_QWORD *)(v17 + 48) = spot;
  sub_B0D840((BattleServantConfConponent_o *)(v17 + 48), (System_Int32_array **)spot, v18, v19, v20, v21, v22, v23);
  if ( !v11 )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v11,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  mMapCtrl_SpotInfo = (MapControl_SpotInfo_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !mMapCtrl_SpotInfo )
LABEL_19:
    sub_B0D97C(mMapCtrl_SpotInfo);
  if ( QuestTree__IsSpotSatisfyingActiveCond((QuestTree_o *)mMapCtrl_SpotInfo, Mine, 0LL) )
  {
    v26 = sub_B0D974(SubmarineLightenSpotPerformance_TypeInfo, v24, v25);
    SchedulerTaskBase___ctor((SchedulerTaskBase_o *)v26, 0LL);
    *(_QWORD *)(v26 + 48) = spot;
    sub_B0D840((BattleServantConfConponent_o *)(v26 + 48), (System_Int32_array **)spot, v27, v28, v29, v30, v31, v32);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v11;
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
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x20
  SubmarineSettingsManager_o *Settings_k__BackingField; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  float ScanOpenPanelInterval; // s8
  const MethodInfo *v29; // x3
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *v32; // x21
  SubmarineMapManager___c_c *v33; // x8
  struct SubmarineMapManager___c_StaticFields *static_fields; // x9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__98_0; // x22
  Il2CppObject *v36; // x23
  struct SubmarineMapManager___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  SubmarineMapManager___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x21
  struct SubmarineMapManager___c_StaticFields *v49; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__98_1; // x22
  Il2CppObject *v51; // x23
  struct SubmarineMapManager___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  int32_t v59; // w23
  __int64 v60; // x1
  __int64 v61; // x2
  SubmarineMapManager___c__DisplayClass98_0_o *v62; // x22
  __int64 v63; // x1
  __int64 v64; // x2
  int v65; // w27
  int v66; // w25
  float v67; // s9
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v68; // x23
  System_Collections_Generic_List_T__o *v69; // x23
  __int64 v70; // x1
  __int64 v71; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v72; // x0
  _BOOL8 v73; // x0
  const MethodInfo *v74; // x3
  Il2CppObject *current; // x23
  SubmarineMapDataManager_o *v76; // x0
  SubmarineMapPanelData_o *PanelByIndices; // x0
  const MethodInfo *v78; // x2
  float v79; // s0
  SchedulerTaskBase_o *HitObstractTask; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v81; // x1
  SchedulerTaskBase_o *OpenPanelAndRevealSpotTask; // x0
  int v83; // w8
  int v84; // w8
  SchedulerTaskParallel_o *v85; // x19
  _BYTE v87[28]; // [xsp+0h] [xbp-A0h] BYREF
  int v88; // [xsp+1Ch] [xbp-84h]
  System_Collections_Generic_List_Enumerator_T__o v89; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_421363B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Max_SubmarineScanEvent___, *(_QWORD *)&scanId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__get_Current__, v9);
    sub_B0D8A4(&Method_System_Func_SubmarineScanEvent__int___ctor__, v10);
    sub_B0D8A4(&System_Func_SubmarineScanEvent__int__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v15);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v16);
    sub_B0D8A4(&Method_System_Predicate_SubmarineScanEvent___ctor__, v17);
    sub_B0D8A4(&System_Predicate_SubmarineScanEvent__TypeInfo, v18);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v19);
    sub_B0D8A4(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__, v20);
    sub_B0D8A4(&Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__, v21);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__, v22);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass98_0_TypeInfo, v23);
    sub_B0D8A4(&SubmarineMapManager___c_TypeInfo, v24);
    byte_421363B = 1;
  }
  memset(&v89, 0, sizeof(v89));
  v88 = 0;
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  *(_QWORD *)&scanId,
                                                                                                  panelData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
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
                                                             v29);
  v32 = (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)Settings_k__BackingField;
  v33 = SubmarineMapManager___c_TypeInfo;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v33 = SubmarineMapManager___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__98_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__98_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_SubmarineScanEvent__TypeInfo,
                                                                          v30,
                                                                          v31);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__98_0,
      v36,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_SubmarineScanEvent___ctor__);
    v37 = SubmarineMapManager___c_TypeInfo->static_fields;
    v37->__9__98_0 = (struct System_Predicate_SubmarineScanEvent__o *)_9__98_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v37->__9__98_0,
      (System_Int32_array **)_9__98_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  if ( !v32 )
    goto LABEL_47;
  All = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
          v32,
          (System_Predicate_T__o *)_9__98_0,
          (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
  v47 = SubmarineMapManager___c_TypeInfo;
  v48 = (System_Collections_Generic_IEnumerable_TSource__o *)All;
  if ( (BYTE3(SubmarineMapManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SubmarineMapManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SubmarineMapManager___c_TypeInfo);
    v47 = SubmarineMapManager___c_TypeInfo;
  }
  v49 = v47->static_fields;
  _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v49->__9__98_1;
  if ( !_9__98_1 )
  {
    if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v47);
      v49 = SubmarineMapManager___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)v49->__9;
    _9__98_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_SubmarineScanEvent__int__TypeInfo,
                                                                                 v45,
                                                                                 v46);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__98_1,
      v51,
      Method_SubmarineMapManager___c__CreateScanOpenPanelTask_b__98_1__,
      (const MethodInfo_2619564 *)Method_System_Func_SubmarineScanEvent__int___ctor__);
    v52 = SubmarineMapManager___c_TypeInfo->static_fields;
    v52->__9__98_1 = (struct System_Func_SubmarineScanEvent__int__o *)_9__98_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v52->__9__98_1,
      (System_Int32_array **)_9__98_1,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  v59 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
          v48,
          (System_Func_TSource__int__o *)_9__98_1,
          (const MethodInfo_1B4DF7C *)Method_System_Linq_Enumerable_Max_SubmarineScanEvent___);
  v62 = (SubmarineMapManager___c__DisplayClass98_0_o *)sub_B0D974(
                                                         SubmarineMapManager___c__DisplayClass98_0_TypeInfo,
                                                         v60,
                                                         v61);
  SubmarineMapManager___c__DisplayClass98_0___ctor(v62, 0LL);
  if ( !v62 )
    goto LABEL_47;
  v65 = v59 + 1;
  v62->fields.i = 0;
  if ( v59 + 1 >= 1 )
  {
    v66 = 0;
    v67 = 0.0;
    while ( 1 )
    {
      v68 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                       System_Predicate_SubmarineScanEvent__TypeInfo,
                                                                       v63,
                                                                       v64);
      System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
        v68,
        (Il2CppObject *)v62,
        Method_SubmarineMapManager___c__DisplayClass98_0__CreateScanOpenPanelTask_b__2__,
        (const MethodInfo_2AF7E30 *)Method_System_Predicate_SubmarineScanEvent___ctor__);
      if ( !v48 )
        break;
      v69 = System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___FindAll(
              (System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v48,
              (System_Predicate_T__o *)v68,
              (const MethodInfo_2FC6070 *)Method_System_Collections_Generic_List_SubmarineScanEvent__FindAll__);
      v72 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v70, v71);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v72,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
      if ( !v69 )
        break;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v87,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v69,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineScanEvent__GetEnumerator__);
      v89 = *(System_Collections_Generic_List_Enumerator_T__o *)v87;
      while ( 1 )
      {
        v73 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v89,
                (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__MoveNext__);
        if ( !v73 )
          break;
        current = v89.fields.current;
        if ( !v89.fields.current )
          sub_B0D97C(v73);
        v76 = this->fields.submarineData;
        if ( !v76 )
          sub_B0D97C(0LL);
        PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                           v76,
                           (int32_t)v89.fields.current[1].klass,
                           HIDWORD(v89.fields.current[1].klass),
                           v74);
        if ( PanelByIndices )
        {
          if ( BYTE5(current[2].klass) )
          {
            HitObstractTask = SubmarineMapManager__CreateHitObstractTask(
                                (SubmarineMapManager_o *)PanelByIndices,
                                PanelByIndices,
                                v79,
                                v78);
            v81 = (EventMissionProgressRequest_Argument_ProgressData_o *)HitObstractTask;
            if ( !v25 )
              sub_B0D97C(HitObstractTask);
          }
          else
          {
            OpenPanelAndRevealSpotTask = SubmarineMapManager__CreateOpenPanelAndRevealSpotTask(
                                           this,
                                           PanelByIndices,
                                           v67,
                                           v78);
            v81 = (EventMissionProgressRequest_Argument_ProgressData_o *)OpenPanelAndRevealSpotTask;
            if ( !v25 )
              sub_B0D97C(OpenPanelAndRevealSpotTask);
          }
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v25,
            v81,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
        }
      }
      *(_DWORD *)&v87[4 * v66 + 24] = 274;
      v66 = ++v88;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v89,
        (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineScanEvent__Dispose__);
      if ( v66 )
      {
        v83 = v66 - 1;
        if ( *(_DWORD *)&v87[4 * v66 + 20] == 274 )
        {
          --v66;
          v88 = v83;
        }
      }
      v67 = ScanOpenPanelInterval + v67;
      v84 = v62->fields.i + 1;
      v62->fields.i = v84;
      if ( v84 >= v65 )
        goto LABEL_46;
    }
LABEL_47:
    sub_B0D97C(Settings_k__BackingField);
  }
LABEL_46:
  v85 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskParallel_TypeInfo, v63, v64);
  SchedulerTaskParallel___ctor_16660936(v85, (System_Collections_Generic_List_SchedulerTaskBase__o *)v25, 0LL);
  return (SchedulerTaskBase_o *)v85;
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
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarinePanelPositionCalculator_o *PositionCalculator_k__BackingField; // x8
  int32x2_t v45; // d11
  float32x2_t v46; // d9
  int32x2_t v47; // d10
  float32x2_t v48; // d8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v49; // x19
  const MethodInfo *v50; // x1
  struct SubmarineMapDataManager_o *v51; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  unsigned __int64 v53; // d0 OVERLAPPED
  float v54; // s8
  int v55; // s2
  int v56; // s1
  const MethodInfo *v57; // x2
  UnityEngine_Object_o *ScanAnimObjectPrefab; // x22
  const MethodInfo *v59; // x1
  UnityEngine_Object_o *HomeSpot; // x23
  float v61; // s2
  float v62; // s0
  float v63; // s1
  float v64; // s9
  UnityEngine_Transform_o *transform; // x23
  System_Int32_array **v66; // x0
  UnityEngine_GameObject_o **v67; // x24
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UIWidget_o *Component_UIWidget; // x0
  unsigned __int64 v75; // d1 OVERLAPPED
  SubmarineScannerComponent_o *v76; // x22
  void (__fastcall *v77)(); // d0
  const MethodInfo *v78; // x1
  float magnitude; // s0
  __int64 v80; // x1
  __int64 v81; // x2
  const MethodInfo *v82; // x1
  struct SubmarineMapDataManager_o *v83; // x8
  struct SubmarineSettingsManager_o *v84; // x8
  float v85; // s0
  float v86; // s1
  float v87; // s2
  const MethodInfo *v88; // x1
  float JumpStartTime; // s10
  __int64 v90; // x1
  __int64 v91; // x2
  SchedulerTaskWaitTime_o *v92; // x25
  __int64 v93; // x1
  __int64 v94; // x2
  BattleServantConfConponent_o *p_StartCallback; // x25
  System_Delegate_o *StartCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v97; // x27
  System_Int32_array **v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *playingScanVoiceData; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v107; // x8
  struct SubmarineMapManager_PlayingScanVoiceData_o *v108; // x8
  System_String_o *assetName; // x25
  System_String_o *vcName; // x26
  System_Int32_array **v111; // x0
  __int64 v112; // x25
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  __int64 v119; // x1
  __int64 v120; // x2
  __int64 v121; // x8
  System_String_o *v122; // x26
  SchedulerTaskWaitLoadAsset_o *v123; // x27
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x1
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x1
  __int64 v138; // x1
  __int64 v139; // x2
  float v140; // s10
  __int64 v141; // x25
  __int64 v142; // x1
  __int64 v143; // x2
  System_Delegate_o *v144; // x27
  SchedulerTaskBase_TaskCallback_o *v145; // x28
  System_Int32_array **v146; // x0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  const MethodInfo *v153; // x1
  float SelectedPanelEffecFinishTime; // s10
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x25
  __int64 v158; // x1
  __int64 v159; // x2
  System_Delegate_o *v160; // x27
  SchedulerTaskBase_TaskCallback_o *v161; // x28
  System_Int32_array **v162; // x0
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  const MethodInfo *v169; // x1
  float JumpDuration; // s10
  void (__fastcall *v171)(); // d0 OVERLAPPED
  float v172; // s1
  float v173; // s0
  MapCamera_o *mapCamera; // x21
  float v175; // s11
  const MethodInfo_299B55C *v176; // x2
  __int64 v177; // x1
  __int64 v178; // x2
  MapCameraPerformance_o *v179; // x0
  System_Int32_array **v180; // x26
  UnityEngine_GameObject_o *v181; // x24
  __int64 v182; // x1
  __int64 v183; // x2
  SchedulerTaskMovePerformance_o *v184; // x0
  System_Int32_array **v185; // x21
  System_String_array **v186; // x2
  System_String_array **v187; // x3
  System_Boolean_array **v188; // x4
  System_Int32_array **v189; // x5
  System_Int32_array *v190; // x6
  System_Int32_array *v191; // x7
  SchedulerTaskBase_array *v192; // x24
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  __int64 v199; // x1
  __int64 v200; // x2
  SchedulerTaskParallel_o *v201; // x21
  const MethodInfo *v202; // x1
  __int64 v203; // x1
  __int64 v204; // x2
  SimpleAnimation_o *AnimationComponent; // x26
  struct SimpleAnimation_EditorState_o *state; // x8
  System_String_o **p_name; // x8
  System_String_o *v208; // x27
  __int64 v209; // x24
  __int64 v210; // x1
  __int64 v211; // x2
  System_Delegate_o *v212; // x27
  SchedulerTaskBase_TaskCallback_o *v213; // x28
  System_Int32_array **v214; // x0
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  __int64 v221; // x20
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  __int64 v228; // x24
  System_String_array **v229; // x2
  System_String_array **v230; // x3
  System_Boolean_array **v231; // x4
  System_Int32_array **v232; // x5
  System_Int32_array *v233; // x6
  System_Int32_array *v234; // x7
  System_String_array **v235; // x2
  System_String_array **v236; // x3
  System_Boolean_array **v237; // x4
  System_Int32_array **v238; // x5
  System_Int32_array *v239; // x6
  System_Int32_array *v240; // x7
  __int64 v241; // x1
  __int64 v242; // x2
  SchedulerTaskOrthostichy_o *v243; // x21
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  __int64 v250; // x1
  __int64 v251; // x2
  SchedulerTaskParallel_o *v252; // x21
  const MethodInfo *v253; // x1
  float TimeToStartOpenPanel; // s8
  __int64 v255; // x1
  __int64 v256; // x2
  SchedulerTaskWaitTime_o *v257; // x20
  __int64 v259; // x0
  __int64 v260; // x0
  SubmarineMapManager_o *v261; // x0
  int32_t v262; // w1
  SubmarineMapPanelData_o *v263; // x2
  const MethodInfo *v264; // x3
  System_Int32_array **v265; // [xsp+8h] [xbp-E8h]
  float v266; // [xsp+20h] [xbp-D0h]
  float v267; // [xsp+30h] [xbp-C0h]
  UnityEngine_Vector2_o value; // [xsp+40h] [xbp-B0h]
  System_Nullable_float__o v269; // [xsp+50h] [xbp-A0h] BYREF
  System_Nullable_Vector2__o v270; // [xsp+58h] [xbp-98h] BYREF
  MethodInfo methoda; // [xsp+68h] [xbp-88h] BYREF
  System_Nullable_float__o v272; // 0:x0.8
  System_Nullable_float__o v273; // 0:x4.8
  System_Nullable_Vector2__o v274; // 0:x0.12
  UnityEngine_Vector2_o v275; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v276; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v277; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v278; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4213637 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, panelData);
    sub_B0D8A4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___, v8);
    sub_B0D8A4(&Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v12);
    sub_B0D8A4(&MapCameraPerformance_TypeInfo, v13);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v14);
    sub_B0D8A4(&Method_System_Nullable_Vector2___ctor__, v15);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v16);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v17);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v18);
    sub_B0D8A4(&SchedulerTaskMovePerformance_TypeInfo, v19);
    sub_B0D8A4(&SchedulerTaskOrthostichy_TypeInfo, v20);
    sub_B0D8A4(&SchedulerTaskParallel_TypeInfo, v21);
    sub_B0D8A4(&SchedulerTaskSimpleAnimation_TypeInfo, v22);
    sub_B0D8A4(&SchedulerTaskWaitLoadAsset_TypeInfo, v23);
    sub_B0D8A4(&SchedulerTaskWaitTime_TypeInfo, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B0D8A4(&SoundManager_TypeInfo, v26);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v27);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__, v28);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__, v29);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__, v30);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__, v31);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass94_0_TypeInfo, v32);
    byte_4213637 = 1;
  }
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  v33 = sub_B0D974(SubmarineMapManager___c__DisplayClass94_0_TypeInfo, panelData, *(_QWORD *)&scanId);
  SubmarineMapManager___c__DisplayClass94_0___ctor((SubmarineMapManager___c__DisplayClass94_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_88;
  *(_QWORD *)(v33 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v33 + 32), (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_88;
  if ( !panelData )
    goto LABEL_88;
  PositionCalculator_k__BackingField = submarineData->fields._PositionCalculator_k__BackingField;
  if ( !PositionCalculator_k__BackingField )
    goto LABEL_88;
  v45.n64_u64[0] = *(unsigned __int64 *)&panelData->fields._HIndex_k__BackingField;
  v46.n64_u64[0] = (unsigned __int64)PositionCalculator_k__BackingField->fields._PanelUnitSize_k__BackingField;
  v47.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._HorizontalPanelNum_k__BackingField;
  v48.n64_u64[0] = *(unsigned __int64 *)&PositionCalculator_k__BackingField->fields._OffsetX_k__BackingField;
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v41,
                                                                                                  v42);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v51 = this->fields.submarineData;
  if ( !v51 )
    goto LABEL_88;
  Settings_k__BackingField = v51->fields._Settings_k__BackingField;
  if ( !Settings_k__BackingField )
    goto LABEL_88;
  v53 = vadd_f32(
          v48,
          vmul_f32(
            vmul_f32(v46, vcvt_f32_s32(vsub_s32((int32x2_t)(vshl_n_s32(v45, 1uLL).n64_u64[0] | 0x100000001LL), v47))),
            (float32x2_t)0x3F0000003F000000LL)).n64_u64[0];
  v54 = *((float *)&v53 + 1);
  v55 = 0;
  v56 = HIDWORD(v53);
  value = (UnityEngine_Vector2_o)v53;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v53,
                                        1.0,
                                        Settings_k__BackingField->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v50);
  if ( !v49 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v49,
    (EventMissionProgressRequest_Argument_ProgressData_o *)MoveCameraToPositionTask,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  MoveCameraToPositionTask = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)MoveCameraToPositionTask,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        (DataMasterBase_WarMaster__WarEntity__int__o *)MoveCameraToPositionTask,
                                        scanId,
                                        (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !MoveCameraToPositionTask )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v49;
  if ( !this->fields.assetManager )
    goto LABEL_88;
  ScanAnimObjectPrefab = (UnityEngine_Object_o *)SubmarineMapAssetManager__GetScanAnimObjectPrefab(
                                                   this->fields.assetManager,
                                                   *(_DWORD *)(MoveCameraToPositionTask + 56),
                                                   v57);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(ScanAnimObjectPrefab, 0LL, 0LL) )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v49;
  HomeSpot = (UnityEngine_Object_o *)SubmarineMapManager__GetHomeSpot(this, v59);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MoveCameraToPositionTask = UnityEngine_Object__op_Equality(HomeSpot, 0LL, 0LL);
  if ( (MoveCameraToPositionTask & 1) != 0 )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v49;
  if ( !HomeSpot )
    goto LABEL_88;
  MoveCameraToPositionTask = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)HomeSpot, 0LL);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  *(UnityEngine_Vector3_o *)(&v61 - 2) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)MoveCameraToPositionTask,
                                           0LL);
  MoveCameraToPositionTask = (__int64)this->fields.effectContainer;
  v267 = v62;
  v266 = v63;
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  v64 = v61;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v66 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                 (UILabel_o *)ScanAnimObjectPrefab,
                                 transform,
                                 (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
  *(_QWORD *)(v33 + 16) = v66;
  v67 = (UnityEngine_GameObject_o **)(v33 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v33 + 16), v66, v68, v69, v70, v71, v72, v73);
  v276.fields.y = v266;
  v276.fields.x = v267;
  v276.fields.z = v64;
  GameObjectExtensions__SetLocalPosition(*(UnityEngine_GameObject_o **)(v33 + 16), v276, 0LL);
  MoveCameraToPositionTask = *(_QWORD *)(v33 + 16);
  if ( !MoveCameraToPositionTask )
    goto LABEL_88;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MoveCameraToPositionTask, 0, 0LL);
  Component_UIWidget = GameObjectExtensions__SafeGetComponent_UIWidget_(
                         *v67,
                         (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScannerComponent___);
  v75 = __PAIR64__(LODWORD(v266), LODWORD(v267));
  v76 = (SubmarineScannerComponent_o *)Component_UIWidget;
  *(float *)&methoda.invoker_method = v64;
  v77 = (void (__fastcall *)())vsub_f32((float32x2_t)__PAIR64__(LODWORD(v266), LODWORD(v267)), (float32x2_t)value).n64_u64[0];
  methoda.methodPointer = v77;
  magnitude = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)((char *)&v75 - 4), &methoda);
  if ( !v76 )
    goto LABEL_88;
  SubmarineScannerComponent__PrepareAnimation(v76, magnitude, v78);
  if ( !v76->fields.state )
    return (System_Collections_Generic_List_SchedulerTaskBase__o *)v49;
  v49 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v80,
                                                                                                  v81);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v49,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  v83 = this->fields.submarineData;
  if ( !v83 )
    goto LABEL_88;
  v84 = v83->fields._Settings_k__BackingField;
  v86 = v266;
  v85 = v267;
  if ( !v84 )
    goto LABEL_88;
  v87 = v64;
  MoveCameraToPositionTask = (__int64)SubmarineMapManager__CreateMoveCameraToPositionTask(
                                        this,
                                        *(UnityEngine_Vector3_o *)&v85,
                                        1.0,
                                        v84->fields._ScanRangeToHomeSpotCameraDuration_k__BackingField,
                                        v82);
  if ( !v49 )
    goto LABEL_88;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v49,
    (EventMissionProgressRequest_Argument_ProgressData_o *)MoveCameraToPositionTask,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
  JumpStartTime = SubmarineScannerComponent__GetJumpStartTime(v76, v88);
  v92 = (SchedulerTaskWaitTime_o *)sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v90, v91);
  SchedulerTaskWaitTime___ctor(v92, JumpStartTime, 0LL);
  if ( !v92 )
    goto LABEL_88;
  v265 = (System_Int32_array **)v92;
  StartCallback = (System_Delegate_o *)v92->fields.StartCallback;
  p_StartCallback = (BattleServantConfConponent_o *)&v92->fields.StartCallback;
  v97 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v93, v94);
  SchedulerTaskBase_TaskCallback___ctor(
    v97,
    (Il2CppObject *)v33,
    Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__0__,
    0LL);
  v98 = (System_Int32_array **)System_Delegate__Combine(StartCallback, (System_Delegate_o *)v97, 0LL);
  v105 = v98;
  if ( !v98 || *v98 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    p_StartCallback->klass = (BattleServantConfConponent_c *)v98;
    sub_B0D840(p_StartCallback, v98, v99, v100, v101, v102, v103, v104);
    playingScanVoiceData = this->fields.playingScanVoiceData;
    if ( !playingScanVoiceData )
      goto LABEL_88;
    MoveCameraToPositionTask = System_String__IsNullOrEmpty(playingScanVoiceData->fields.vcName, 0LL);
    if ( (MoveCameraToPositionTask & 1) == 0 )
    {
      v107 = this->fields.playingScanVoiceData;
      if ( !v107 )
        goto LABEL_88;
      MoveCameraToPositionTask = System_String__IsNullOrEmpty(v107->fields.assetName, 0LL);
      if ( (MoveCameraToPositionTask & 1) == 0 )
      {
        v108 = this->fields.playingScanVoiceData;
        if ( !v108 )
          goto LABEL_88;
        assetName = v108->fields.assetName;
        vcName = v108->fields.vcName;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__stopVoice(assetName, vcName, 0.0, 0LL);
      }
    }
    v111 = (System_Int32_array **)GameObjectExtensions__SafeGetComponent_UIWidget_(
                                    *(UnityEngine_GameObject_o **)(v33 + 16),
                                    (const MethodInfo_1B6392C *)Method_GameObjectExtensions_SafeGetComponent_SubmarineScanVoiceComponent___);
    v112 = v33 + 24;
    *(_QWORD *)(v33 + 24) = v111;
    sub_B0D840((BattleServantConfConponent_o *)(v33 + 24), v111, v113, v114, v115, v116, v117, v118);
    v121 = *(_QWORD *)(v33 + 24);
    if ( !v121 )
      goto LABEL_88;
    v122 = *(System_String_o **)(v121 + 48);
    v123 = (SchedulerTaskWaitLoadAsset_o *)sub_B0D974(SchedulerTaskWaitLoadAsset_TypeInfo, v119, v120);
    SchedulerTaskWaitLoadAsset___ctor(v123, v122, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v49,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v123,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
    if ( !*(_QWORD *)v112 )
      goto LABEL_88;
    MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData;
    if ( !MoveCameraToPositionTask )
      goto LABEL_88;
    v130 = *(System_Int32_array ***)(*(_QWORD *)v112 + 48LL);
    *(_QWORD *)(MoveCameraToPositionTask + 16) = v130;
    sub_B0D840(
      (BattleServantConfConponent_o *)(MoveCameraToPositionTask + 16),
      v130,
      v124,
      v125,
      v126,
      v127,
      v128,
      v129);
    if ( !*(_QWORD *)v112
      || (MoveCameraToPositionTask = (__int64)this->fields.playingScanVoiceData) == 0
      || (v137 = *(System_Int32_array ***)(*(_QWORD *)v112 + 40LL),
          *(_QWORD *)(MoveCameraToPositionTask + 24) = v137,
          sub_B0D840(
            (BattleServantConfConponent_o *)(MoveCameraToPositionTask + 24),
            v137,
            v131,
            v132,
            v133,
            v134,
            v135,
            v136),
          !*(_QWORD *)v112)
      || (v140 = *(float *)(*(_QWORD *)v112 + 24LL),
          v141 = sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v138, v139),
          SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v141, v140, 0LL),
          !v141) )
    {
LABEL_88:
      sub_B0D97C(MoveCameraToPositionTask);
    }
    v144 = *(System_Delegate_o **)(v141 + 24);
    v145 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v142, v143);
    SchedulerTaskBase_TaskCallback___ctor(
      v145,
      (Il2CppObject *)v33,
      Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__1__,
      0LL);
    v146 = (System_Int32_array **)System_Delegate__Combine(v144, (System_Delegate_o *)v145, 0LL);
    v105 = v146;
    if ( !v146 || *v146 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v141 + 24) = v146;
      sub_B0D840((BattleServantConfConponent_o *)(v141 + 24), v146, v147, v148, v149, v150, v151, v152);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v49,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v141,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
      SelectedPanelEffecFinishTime = SubmarineScannerComponent__GetSelectedPanelEffecFinishTime(v76, v153);
      v157 = sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v155, v156);
      SchedulerTaskWaitTime___ctor((SchedulerTaskWaitTime_o *)v157, SelectedPanelEffecFinishTime, 0LL);
      if ( !v157 )
        goto LABEL_88;
      v160 = *(System_Delegate_o **)(v157 + 32);
      v161 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v158, v159);
      SchedulerTaskBase_TaskCallback___ctor(
        v161,
        (Il2CppObject *)v33,
        Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__2__,
        0LL);
      v162 = (System_Int32_array **)System_Delegate__Combine(v160, (System_Delegate_o *)v161, 0LL);
      v105 = v162;
      if ( !v162 || *v162 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
      {
        *(_QWORD *)(v157 + 32) = v162;
        sub_B0D840((BattleServantConfConponent_o *)(v157 + 32), v162, v163, v164, v165, v166, v167, v168);
        *(_BYTE *)(v157 + 16) = 1;
        JumpDuration = SubmarineScannerComponent__GetJumpDuration(v76, v169);
        v171 = (void (__fastcall *)())vsub_f32(
                                        (float32x2_t)value,
                                        (float32x2_t)__PAIR64__(LODWORD(v266), LODWORD(v267))).n64_u64[0];
        v172 = 0.0 - v64;
        methoda.methodPointer = v171;
        *(float *)&methoda.invoker_method = 0.0 - v64;
        v173 = UnityEngine_Vector3__get_magnitude(*(UnityEngine_Vector3_o *)&v171, &methoda);
        mapCamera = this->fields.mapCamera;
        v175 = v173 / JumpDuration;
        v275.fields.x = value.fields.x;
        v274.fields.value = (struct UnityEngine_Vector2_o)&v270;
        *(_DWORD *)&v274.fields.has_value = Method_System_Nullable_Vector2___ctor__;
        v275.fields.y = v54;
        *(_DWORD *)&v270.fields.has_value = 0;
        v270.fields.value = 0LL;
        System_Nullable_Vector2____ctor(v274, v275, v176);
        v272 = (System_Nullable_float__o)&v269;
        v269 = 0LL;
        System_Nullable_float____ctor(v272, 1.0, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
        v179 = (MapCameraPerformance_o *)sub_B0D974(MapCameraPerformance_TypeInfo, v177, v178);
        v273 = v269;
        v180 = (System_Int32_array **)v179;
        MapCameraPerformance___ctor(v179, mapCamera, JumpDuration, v270, v273, 0, 0LL);
        v181 = *v67;
        v184 = (SchedulerTaskMovePerformance_o *)sub_B0D974(SchedulerTaskMovePerformance_TypeInfo, v182, v183);
        v277.fields.y = v266;
        v277.fields.x = v267;
        v278.fields.x = value.fields.x;
        v278.fields.z = 0.0;
        v277.fields.z = v64;
        v278.fields.y = v54;
        v185 = (System_Int32_array **)v184;
        SchedulerTaskMovePerformance___ctor(v184, v181, v277, v278, v175, 0, 0LL);
        MoveCameraToPositionTask = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL);
        if ( !MoveCameraToPositionTask )
          goto LABEL_88;
        v192 = (SchedulerTaskBase_array *)MoveCameraToPositionTask;
        if ( v180 )
        {
          MoveCameraToPositionTask = sub_B0D964(v180, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( !MoveCameraToPositionTask )
            goto LABEL_90;
        }
        if ( !v192->max_length )
          goto LABEL_89;
        v192->m_Items[0] = (SchedulerTaskBase_o *)v180;
        sub_B0D840((BattleServantConfConponent_o *)v192->m_Items, v180, v186, v187, v188, v189, v190, v191);
        if ( v185 )
        {
          MoveCameraToPositionTask = sub_B0D964(v185, v192->obj.klass->_1.element_class);
          if ( !MoveCameraToPositionTask )
            goto LABEL_90;
        }
        if ( v192->max_length <= 1 )
          goto LABEL_89;
        v192->m_Items[1] = (SchedulerTaskBase_o *)v185;
        sub_B0D840((BattleServantConfConponent_o *)&v192->m_Items[1], v185, v193, v194, v195, v196, v197, v198);
        v201 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskParallel_TypeInfo, v199, v200);
        SchedulerTaskParallel___ctor(v201, v192, 0LL);
        AnimationComponent = SubmarineScannerComponent__get_AnimationComponent(v76, v202);
        if ( (byte_4213673 & 1) == 0 )
        {
          sub_B0D8A4(&StringLiteral_1/*""*/, v203);
          byte_4213673 = 1;
        }
        state = v76->fields.state;
        if ( state )
          p_name = &state->fields.name;
        else
          p_name = (System_String_o **)&StringLiteral_1/*""*/;
        v208 = *p_name;
        v209 = sub_B0D974(SchedulerTaskSimpleAnimation_TypeInfo, v203, v204);
        SchedulerTaskSimpleAnimation___ctor((SchedulerTaskSimpleAnimation_o *)v209, AnimationComponent, v208, 0LL);
        if ( !v209 )
          goto LABEL_88;
        v212 = *(System_Delegate_o **)(v209 + 32);
        v213 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v210, v211);
        SchedulerTaskBase_TaskCallback___ctor(
          v213,
          (Il2CppObject *)v33,
          Method_SubmarineMapManager___c__DisplayClass94_0__CreateScanTask_b__3__,
          0LL);
        v214 = (System_Int32_array **)System_Delegate__Combine(v212, (System_Delegate_o *)v213, 0LL);
        v105 = v214;
        if ( !v214 || *v214 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
        {
          *(_QWORD *)(v209 + 32) = v214;
          sub_B0D840((BattleServantConfConponent_o *)(v209 + 32), v214, v215, v216, v217, v218, v219, v220);
          MoveCameraToPositionTask = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL);
          if ( !MoveCameraToPositionTask )
            goto LABEL_88;
          v221 = MoveCameraToPositionTask;
          MoveCameraToPositionTask = sub_B0D964(v209, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
          if ( MoveCameraToPositionTask )
          {
            if ( !*(_DWORD *)(v221 + 24) )
              goto LABEL_89;
            *(_QWORD *)(v221 + 32) = v209;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v221 + 32),
              (System_Int32_array **)v209,
              v222,
              v223,
              v224,
              v225,
              v226,
              v227);
            MoveCameraToPositionTask = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 2LL);
            if ( !MoveCameraToPositionTask )
              goto LABEL_88;
            v228 = MoveCameraToPositionTask;
            MoveCameraToPositionTask = sub_B0D964(v265, *(_QWORD *)(*(_QWORD *)MoveCameraToPositionTask + 64LL));
            if ( MoveCameraToPositionTask )
            {
              if ( !*(_DWORD *)(v228 + 24) )
                goto LABEL_89;
              *(_QWORD *)(v228 + 32) = v265;
              sub_B0D840((BattleServantConfConponent_o *)(v228 + 32), v265, v229, v230, v231, v232, v233, v234);
              if ( !v201 || (MoveCameraToPositionTask = sub_B0D964(v201, *(_QWORD *)(*(_QWORD *)v228 + 64LL))) != 0 )
              {
                if ( *(_DWORD *)(v228 + 24) <= 1u )
                  goto LABEL_89;
                *(_QWORD *)(v228 + 40) = v201;
                sub_B0D840(
                  (BattleServantConfConponent_o *)(v228 + 40),
                  (System_Int32_array **)v201,
                  v235,
                  v236,
                  v237,
                  v238,
                  v239,
                  v240);
                v243 = (SchedulerTaskOrthostichy_o *)sub_B0D974(SchedulerTaskOrthostichy_TypeInfo, v241, v242);
                SchedulerTaskOrthostichy___ctor(v243, (SchedulerTaskBase_array *)v228, 0LL);
                if ( !v243 || (MoveCameraToPositionTask = sub_B0D964(v243, *(_QWORD *)(*(_QWORD *)v221 + 64LL))) != 0 )
                {
                  if ( *(_DWORD *)(v221 + 24) > 1u )
                  {
                    *(_QWORD *)(v221 + 40) = v243;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)(v221 + 40),
                      (System_Int32_array **)v243,
                      v244,
                      v245,
                      v246,
                      v247,
                      v248,
                      v249);
                    v252 = (SchedulerTaskParallel_o *)sub_B0D974(SchedulerTaskParallel_TypeInfo, v250, v251);
                    SchedulerTaskParallel___ctor(v252, (SchedulerTaskBase_array *)v221, 0LL);
                    if ( v252 )
                    {
                      v252->fields.NonBlocking = 1;
                      TimeToStartOpenPanel = SubmarineScannerComponent__GetTimeToStartOpenPanel(v76, v253);
                      v257 = (SchedulerTaskWaitTime_o *)sub_B0D974(SchedulerTaskWaitTime_TypeInfo, v255, v256);
                      SchedulerTaskWaitTime___ctor(v257, TimeToStartOpenPanel, 0LL);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v49,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v157,
                        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v49,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v252,
                        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                        v49,
                        (EventMissionProgressRequest_Argument_ProgressData_o *)v257,
                        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
                      return (System_Collections_Generic_List_SchedulerTaskBase__o *)v49;
                    }
                    goto LABEL_88;
                  }
LABEL_89:
                  v259 = sub_B0D9A8(MoveCameraToPositionTask);
                  sub_B0D948(v259, 0LL);
                }
              }
            }
          }
LABEL_90:
          v260 = sub_B0D99C();
          sub_B0D948(v260, 0LL);
        }
      }
    }
  }
  v261 = (SubmarineMapManager_o *)sub_B0DC70(v105);
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)SubmarineMapManager__CreateScanOpenPanelTask(
                                                                   v261,
                                                                   v262,
                                                                   v263,
                                                                   v264);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  float z; // s8
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v19; // x21
  SchedulerTaskBase_o *PanelDataList_k__BackingField; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  __int128 v22; // q1
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x2
  Il2CppObject *current; // x22
  _BOOL8 IsPanelSatisfyCommonReleaseCond; // x0
  struct SubmarineMapDataManager_o *v27; // x8
  float32x2_t *PositionCalculator_k__BackingField; // x8
  __int128 v29; // q1
  SubmarineMapPanelData_array *v30; // x0
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  struct SubmarineMapDataManager_o *v33; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  signed int size; // w9
  EventMissionProgressRequest_Argument_ProgressData_o *v36; // x22
  unsigned __int64 v37; // d0 OVERLAPPED
  float v38; // s2
  int v39; // s1
  float y; // [xsp+0h] [xbp-B0h]
  __int128 v42; // [xsp+10h] [xbp-A0h]
  float32x2_t v43[3]; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v45; // [xsp+40h] [xbp-70h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4213640 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__get_Count__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo, v13);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v14);
    byte_4213640 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  zero = UnityEngine_Vector3__get_zero(0LL);
  *(_QWORD *)&v42 = *(_QWORD *)&zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  v19 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SubmarineMapPanelData__TypeInfo,
                                                                                                  v17,
                                                                                                  v18);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v19,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SubmarineMapPanelData___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_22;
  PanelDataList_k__BackingField = (SchedulerTaskBase_o *)submarineData->fields._PanelDataList_k__BackingField;
  if ( !PanelDataList_k__BackingField )
    goto LABEL_22;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)PanelDataList_k__BackingField,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  v22 = v42;
  *((float *)&v22 + 1) = y;
  *(_OWORD *)v43[0].n64_u64 = v22;
  v45 = v44;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v45,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
    if ( !v23 )
      break;
    current = v45.fields.current;
    if ( !v45.fields.current )
      sub_B0D97C(v23);
    if ( !LOBYTE(v45.fields.current[3].monitor) )
    {
      IsPanelSatisfyCommonReleaseCond = SubmarineMapDataManager__IsPanelSatisfyCommonReleaseCond(
                                          (SubmarineMapPanelData_o *)v45.fields.current,
                                          -1,
                                          v24);
      if ( IsPanelSatisfyCommonReleaseCond )
      {
        v27 = this->fields.submarineData;
        if ( !v27 )
          sub_B0D97C(IsPanelSatisfyCommonReleaseCond);
        PositionCalculator_k__BackingField = (float32x2_t *)v27->fields._PositionCalculator_k__BackingField;
        if ( !PositionCalculator_k__BackingField )
          sub_B0D97C(IsPanelSatisfyCommonReleaseCond);
        z = z + 0.0;
        *((float32x2_t *)&v29 + 1) = v43[1];
        *(float32x2_t *)&v29 = vadd_f32(
                                 v43[0],
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
        *(_OWORD *)v43[0].n64_u64 = v29;
        if ( !v19 )
          sub_B0D97C(IsPanelSatisfyCommonReleaseCond);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v19,
          (EventMissionProgressRequest_Argument_ProgressData_o *)current,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v45,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  if ( !v19 )
    goto LABEL_22;
  if ( v19->fields._size >= 1 )
  {
    v30 = (SubmarineMapPanelData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v19,
                                           (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__ToArray__);
    PanelDataList_k__BackingField = SubmarineMapManager__CreateOpenPanelsAndRevealSpotsTask(this, v30, v31);
    v33 = this->fields.submarineData;
    if ( v33 )
    {
      Settings_k__BackingField = v33->fields._Settings_k__BackingField;
      if ( Settings_k__BackingField )
      {
        size = v19->fields._size;
        v36 = (EventMissionProgressRequest_Argument_ProgressData_o *)PanelDataList_k__BackingField;
        v37 = vdiv_f32(v43[0], vcvt_f32_s32(vdup_n_s32(size))).n64_u64[0];
        v38 = z / (float)size;
        v39 = HIDWORD(v37);
        PanelDataList_k__BackingField = SubmarineMapManager__CreateMoveCameraToPositionTask(
                                          this,
                                          *(UnityEngine_Vector3_o *)&v37,
                                          1.0,
                                          Settings_k__BackingField->fields._OpenPanelCameraDuration_k__BackingField,
                                          v32);
        if ( v15 )
        {
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            (EventMissionProgressRequest_Argument_ProgressData_o *)PanelDataList_k__BackingField,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v15,
            v36,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__);
          return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
        }
      }
    }
LABEL_22:
    sub_B0D97C(PanelDataList_k__BackingField);
  }
  return (System_Collections_Generic_List_SchedulerTaskBase__o *)v15;
}


void __fastcall SubmarineMapManager__DestroyDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  struct SubmarineScanConfirmDialog_o **p_scanConfirmDialog; // x20
  UnityEngine_Object_o *scanConfirmDialog; // x21
  UnityEngine_Component_o *klass; // x0
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct SubmarineSelectScannerDialog_o **p_selectScannerDialog; // x20
  UnityEngine_Object_o *selectScannerDialog; // x21
  UnityEngine_Object_o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_o *p_newScannerDialog; // x19
  UnityEngine_Object_o *v23; // x20
  struct SubmarineNewScannerDialog_o *newScannerDialog; // t1
  UnityEngine_Object_o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_421362A & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421362A = 1;
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_scanConfirmDialog = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.scanConfirmDialog, 0LL, v7, v8, v9, v10, v11, v12);
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
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v15, 0LL);
    *p_selectScannerDialog = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.selectScannerDialog, 0LL, v16, v17, v18, v19, v20, v21);
  }
  newScannerDialog = this->fields.newScannerDialog;
  p_newScannerDialog = (BattleServantConfConponent_o *)&this->fields.newScannerDialog;
  v23 = (UnityEngine_Object_o *)newScannerDialog;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    klass = (UnityEngine_Component_o *)p_newScannerDialog->klass;
    if ( p_newScannerDialog->klass )
    {
      v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(klass, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34935276(v25, 0LL);
      p_newScannerDialog->klass = 0LL;
      sub_B0D840(p_newScannerDialog, 0LL, v26, v27, v28, v29, v30, v31);
      return;
    }
LABEL_31:
    sub_B0D97C(klass);
  }
}


void __fastcall SubmarineMapManager__DestroyMapObjects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *panelContainer; // x20
  const MethodInfo *v4; // x1

  if ( (byte_421360D & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421360D = 1;
  }
  panelContainer = (UnityEngine_Object_o *)this->fields.panelContainer;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(panelContainer, 0LL);
  UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)this->fields.gridLine, 0LL);
  UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)this->fields.effectContainer, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x20
  const MethodInfo *v29; // x2
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t v32; // w1
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  SchedulerTaskBase_TaskCallback_o *v38; // x23
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_4213611 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, finishCallback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_List_SchedulerTaskBase__TypeInfo, v7);
    sub_B0D8A4(&SchedulerTaskNone_TypeInfo, v8);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v9);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__, v10);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass35_0_TypeInfo, v11);
    byte_4213611 = 1;
  }
  v12 = sub_B0D974(SubmarineMapManager___c__DisplayClass35_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass35_0___ctor((SubmarineMapManager___c__DisplayClass35_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)finishCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_SchedulerTaskBase__TypeInfo,
                                                                                                  v26,
                                                                                                  v27);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SchedulerTaskBase___ctor__);
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_14;
  BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField;
  if ( !BeforeQuestInfo_k__BackingField )
    goto LABEL_14;
  v32 = BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     || BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField
      : -1;
  HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(
                                                                                 this,
                                                                                 v32,
                                                                                 v29);
  if ( !v28 )
    goto LABEL_14;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v28,
    HideEnemyOccupiedPanelTasks,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  v35 = sub_B0D974(SchedulerTaskNone_TypeInfo, v33, v34);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v35, 0LL);
  v38 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v36, v37);
  SchedulerTaskBase_TaskCallback___ctor(
    v38,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass35_0__DoPerformancesByVariedCond_b__0__,
    0LL);
  if ( !v35
    || (*(_QWORD *)(v35 + 32) = v38,
        sub_B0D840((BattleServantConfConponent_o *)(v35 + 32), (System_Int32_array **)v38, v39, v40, v41, v42, v43, v44),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v28,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SchedulerTaskBase__Add__),
        (HideEnemyOccupiedPanelTasks = (System_Collections_Generic_IEnumerable_T__o *)this->fields.taskScheduler) == 0LL) )
  {
LABEL_14:
    sub_B0D97C(HideEnemyOccupiedPanelTasks);
  }
  TaskScheduler__AddTask_19037728(
    (TaskScheduler_o *)HideEnemyOccupiedPanelTasks,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)v28,
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
    sub_B0D97C(assetManager);
  SubmarineMapAssetManager__LoadMapObject(assetManager, assetData, mapInfo->fields.mapId, v6);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.submarineData, 0LL, v2, v3, v4, v5, v6, v7);
  EventMapManagerBase__Finish((EventMapManagerBase_o *)this, 0LL);
}


SrcSpotBasePrefab_o *__fastcall SubmarineMapManager__GetHomeSpot(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_array *HasChild; // x0
  UnityEngine_Object_o *v5; // x20
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  int32_t HomeSpotId_k__BackingField; // w22
  int max_length; // w8
  UnityEngine_GameObject_array *v10; // x19
  unsigned int v11; // w23
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  __int64 v14; // x0

  if ( (byte_4213623 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4213623 = 1;
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
LABEL_29:
      sub_B0D97C(HasChild);
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
        {
          v14 = sub_B0D9A8(HasChild);
          sub_B0D948(v14, 0LL);
        }
        HasChild = (UnityEngine_GameObject_array *)v10->m_Items[v11];
        if ( !HasChild )
          goto LABEL_29;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)HasChild,
                                                            (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SrcSpotBasePrefab___);
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
          HasChild = (UnityEngine_GameObject_array *)UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
          if ( ((unsigned __int8)HasChild & 1) != 0 )
            goto LABEL_23;
          if ( !v5 )
            goto LABEL_29;
          if ( Component_srcLineSprite[5].fields.m_CachedPtr < v5[5].fields.m_CachedPtr )
LABEL_23:
            v5 = Component_srcLineSprite;
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
  __int64 v4; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineQuestSaveInfo_o *BeforeQuestInfo_k__BackingField; // x8
  int32_t QuestId_k__BackingField; // w1
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *HideEnemyOccupiedPanelTasks; // x20
  const MethodInfo *v9; // x1

  v3 = this;
  if ( (byte_4213610 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__, method);
    this = (SubmarineMapManager_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__,
                                      v4);
    byte_4213610 = 1;
  }
  submarineData = v3->fields.submarineData;
  if ( !submarineData
    || (BeforeQuestInfo_k__BackingField = submarineData->fields._BeforeQuestInfo_k__BackingField) == 0LL
    || (!BeforeQuestInfo_k__BackingField->fields._IsQuestClear_k__BackingField
     && !BeforeQuestInfo_k__BackingField->fields._IsQuestPhaseClear_k__BackingField
      ? (QuestId_k__BackingField = -1)
      : (QuestId_k__BackingField = BeforeQuestInfo_k__BackingField->fields._QuestId_k__BackingField),
        HideEnemyOccupiedPanelTasks = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)SubmarineMapManager__CreateHideEnemyOccupiedPanelTasks(v3, QuestId_k__BackingField, v2),
        this = (SubmarineMapManager_o *)SubmarineMapManager__CreateSubsequentialOpenPanelTasks(v3, v9),
        !HideEnemyOccupiedPanelTasks) )
  {
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    HideEnemyOccupiedPanelTasks,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_SchedulerTaskBase__AddRange__);
  return HideEnemyOccupiedPanelTasks->fields._size > 0;
}


void __fastcall SubmarineMapManager__HideScanObstacleEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4213630 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___, method);
    byte_4213630 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScanObstaclePanelObjPool,
    (const MethodInfo_2052910 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScanObstaclePanelComponent___);
  this->fields.isShowScanObstacleEffect = 0;
}


void __fastcall SubmarineMapManager__HideScanRange(SubmarineMapManager_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_scanRangeNotificator; // x19
  UnityEngine_Object_o *v4; // x20
  struct UnityEngine_GameObject_o *scanRangeNotificator; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4213634 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4213634 = 1;
  }
  scanRangeNotificator = this->fields.scanRangeNotificator;
  p_scanRangeNotificator = (BattleServantConfConponent_o *)&this->fields.scanRangeNotificator;
  v4 = (UnityEngine_Object_o *)scanRangeNotificator;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_scanRangeNotificator->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(klass, 0LL);
    p_scanRangeNotificator->klass = 0LL;
    sub_B0D840(p_scanRangeNotificator, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall SubmarineMapManager__HideScannableEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_421362E & 1) == 0 )
  {
    sub_B0D8A4(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___, method);
    byte_421362E = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectScannablePanelObjPool,
    (const MethodInfo_2052910 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectScannablePanelComponent___);
  this->fields.isShowScannableEffect = 0;
}


void __fastcall SubmarineMapManager__HideSelectedPanelEffect(SubmarineMapManager_o *this, const MethodInfo *method)
{
  if ( (byte_4213632 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___, method);
    byte_4213632 = 1;
  }
  SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    (const MethodInfo_2052910 *)Method_SubmarineMapManager_ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent___);
}


void __fastcall SubmarineMapManager__Initialize(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MapControl_MapInfo_o *mapInfo; // x20
  MapControl_WarInfo_o *warInfo; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  SubmarineMapDataManager_o *v11; // x22
  const MethodInfo *v12; // x3
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  TaskScheduler_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct TaskScheduler_o *taskScheduler; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  System_Action_bool__o *v31; // x0
  System_Int32_array **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  SubmarineMapManager_PlayingScanVoiceData_o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_4213607 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&SubmarineMapManager_PlayingScanVoiceData_TypeInfo, v4);
    sub_B0D8A4(&SubmarineMapDataManager_TypeInfo, v5);
    sub_B0D8A4(&TaskScheduler_TypeInfo, v6);
    byte_4213607 = 1;
  }
  EventMapManagerBase__Initialize((EventMapManagerBase_o *)this, 0LL);
  mapInfo = this->fields.mapInfo;
  warInfo = this->fields.warInfo;
  v11 = (SubmarineMapDataManager_o *)sub_B0D974(SubmarineMapDataManager_TypeInfo, v9, v10);
  SubmarineMapDataManager___ctor(v11, mapInfo, warInfo, v12);
  this->fields.submarineData = v11;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.submarineData,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = (TaskScheduler_o *)sub_B0D974(TaskScheduler_TypeInfo, v19, v20);
  TaskScheduler___ctor(v21, 0LL);
  this->fields.taskScheduler = v21;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.taskScheduler,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  taskScheduler = this->fields.taskScheduler;
  v31 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v29, v30);
  if ( !this
    || (v32 = (System_Int32_array **)v31,
        System_Action_bool____ctor(
          v31,
          (Il2CppObject *)this,
          (intptr_t)this->klass->vtable._31_SetCameraWorkBlock.methodPtr,
          (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__),
        !taskScheduler) )
  {
    sub_B0D97C(v31);
  }
  taskScheduler->fields._AllTouchBlockMethod_k__BackingField = (struct System_Action_bool__o *)v32;
  sub_B0D840(
    (BattleServantConfConponent_o *)&taskScheduler->fields._AllTouchBlockMethod_k__BackingField,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v41 = (SubmarineMapManager_PlayingScanVoiceData_o *)sub_B0D974(
                                                        SubmarineMapManager_PlayingScanVoiceData_TypeInfo,
                                                        v39,
                                                        v40);
  SubmarineMapManager_PlayingScanVoiceData___ctor(v41, 0LL);
  this->fields.playingScanVoiceData = v41;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playingScanVoiceData,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *v24; // x19

  if ( (byte_4213608 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, finishCallback);
    sub_B0D8A4(&AtlasManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__, v6);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass20_0_TypeInfo, v7);
    byte_4213608 = 1;
  }
  v8 = sub_B0D974(SubmarineMapManager___c__DisplayClass20_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass20_0___ctor((SubmarineMapManager___c__DisplayClass20_0_o *)v8, 0LL);
  if ( !v8 )
    sub_B0D97C(v9);
  *(_QWORD *)(v8 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v8 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v8 + 24) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v8 + 24),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v24 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v22, v23);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v8,
    Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadUISkin(v24, 5, 1, 0LL);
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
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  struct SubmarineMapAssetManager_o *v24; // x8
  UnityEngine_GameObject_o *EffectScanObstaclePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v26; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  struct SubmarineMapAssetManager_o *v35; // x8
  UnityEngine_GameObject_o *EffectScannablePanelPrafab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  struct SubmarineMapAssetManager_o *v46; // x8
  UnityEngine_GameObject_o *EffectSelectedPanelPrefab_k__BackingField; // x20
  ComponentPool_SubmarineEffectSelectedPanelComponent__o *v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7

  v3 = this;
  if ( (byte_421362B & 1) == 0 )
  {
    sub_B0D8A4(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__, method);
    sub_B0D8A4(&Method_ComponentPool_CommonEffectComponent__Preload__, v4);
    sub_B0D8A4(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__, v5);
    sub_B0D8A4(&Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__, v6);
    sub_B0D8A4(&Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__, v7);
    sub_B0D8A4(&Method_ComponentPool_CommonEffectComponent___ctor__, v8);
    sub_B0D8A4(&ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo, v9);
    sub_B0D8A4(&ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo, v10);
    sub_B0D8A4(&ComponentPool_CommonEffectComponent__TypeInfo, v11);
    this = (SubmarineMapManager_o *)sub_B0D8A4(&ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo, v12);
    byte_421362B = 1;
  }
  assetManager = v3->fields.assetManager;
  if ( !assetManager )
    goto LABEL_10;
  EffectScannedPanelPrefab_k__BackingField = assetManager->fields._EffectScannedPanelPrefab_k__BackingField;
  v15 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B0D974(
                                                                    ComponentPool_CommonEffectComponent__TypeInfo,
                                                                    method,
                                                                    v2);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v15,
    EffectScannedPanelPrefab_k__BackingField,
    20,
    (const MethodInfo_241DC40 *)Method_ComponentPool_CommonEffectComponent___ctor__);
  v3->fields.effectScanedPanelObjPool = (struct ComponentPool_CommonEffectComponent__o *)v15;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v3->fields.effectScanedPanelObjPool,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this = (SubmarineMapManager_o *)v3->fields.effectScanedPanelObjPool;
  if ( !this )
    goto LABEL_10;
  ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
    (ComponentPool_SubmarineEffectScannablePanelComponent__o *)this,
    9,
    (const MethodInfo_241DD28 *)Method_ComponentPool_CommonEffectComponent__Preload__);
  v24 = v3->fields.assetManager;
  if ( !v24 )
    goto LABEL_10;
  EffectScanObstaclePanelPrafab_k__BackingField = v24->fields._EffectScanObstaclePanelPrafab_k__BackingField;
  v26 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B0D974(
                                                                    ComponentPool_SubmarineEffectScanObstaclePanelComponent__TypeInfo,
                                                                    v22,
                                                                    v23);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v26,
    EffectScanObstaclePanelPrafab_k__BackingField,
    20,
    (const MethodInfo_241DC40 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent___ctor__);
  v3->fields.effectScanObstaclePanelObjPool = (struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *)v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v3->fields.effectScanObstaclePanelObjPool,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v35 = v3->fields.assetManager;
  if ( !v35 )
    goto LABEL_10;
  EffectScannablePanelPrafab_k__BackingField = v35->fields._EffectScannablePanelPrafab_k__BackingField;
  v37 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B0D974(
                                                                    ComponentPool_SubmarineEffectScannablePanelComponent__TypeInfo,
                                                                    v33,
                                                                    v34);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v37,
    EffectScannablePanelPrafab_k__BackingField,
    200,
    (const MethodInfo_241DC40 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent___ctor__);
  v3->fields.effectScannablePanelObjPool = (struct ComponentPool_SubmarineEffectScannablePanelComponent__o *)v37;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v3->fields.effectScannablePanelObjPool,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this = (SubmarineMapManager_o *)v3->fields.effectScannablePanelObjPool;
  if ( !this
    || (ComponentPool_SubmarineEffectScannablePanelComponent___Preload(
          (ComponentPool_SubmarineEffectScannablePanelComponent__o *)this,
          50,
          (const MethodInfo_241DD28 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Preload__),
        (v46 = v3->fields.assetManager) == 0LL) )
  {
LABEL_10:
    sub_B0D97C(this);
  }
  EffectSelectedPanelPrefab_k__BackingField = v46->fields._EffectSelectedPanelPrefab_k__BackingField;
  v48 = (ComponentPool_SubmarineEffectSelectedPanelComponent__o *)sub_B0D974(
                                                                    ComponentPool_SubmarineEffectSelectedPanelComponent__TypeInfo,
                                                                    v44,
                                                                    v45);
  ComponentPool_SubmarineEffectSelectedPanelComponent____ctor(
    v48,
    EffectSelectedPanelPrefab_k__BackingField,
    1,
    (const MethodInfo_241DC40 *)Method_ComponentPool_SubmarineEffectSelectedPanelComponent___ctor__);
  v3->fields.effectSelectedPanelObjPool = v48;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v3->fields.effectSelectedPanelObjPool,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
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
    sub_B0D97C(submarineData);
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
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  __int64 v21; // x1
  __int64 v22; // x2
  System_Action_o *v23; // x20
  const MethodInfo *v24; // x2

  if ( (byte_421360B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, finishCallback);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__, v5);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass26_0_TypeInfo, v6);
    byte_421360B = 1;
  }
  v7 = sub_B0D974(SubmarineMapManager___c__DisplayClass26_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass26_0___ctor((SubmarineMapManager___c__DisplayClass26_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v23 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v21, v22);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_SubmarineMapManager___c__DisplayClass26_0__OnBeforeQuestAfterAction_b__0__,
    0LL);
  SubmarineMapManager__DoPerformancesByVariedCond(this, v23, v24);
}


void __fastcall SubmarineMapManager__OnEndScan(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  clsQuestCheck_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct MapControl_WarInfo_o *warInfo; // x8
  int32_t warId; // w21
  QuestTree_o *v11; // x20
  System_Action_o *v12; // x22
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4213619 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v3);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v4);
    sub_B0D8A4(&Method_SubmarineMapManager__OnEndScan_b__43_0__, v5);
    byte_4213619 = 1;
  }
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v6 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  warInfo = this->fields.warInfo;
  if ( !warInfo
    || (warId = warInfo->fields.warId,
        v11 = (QuestTree_o *)v6,
        v12 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_SubmarineMapManager__OnEndScan_b__43_0__, 0LL),
        !v11) )
  {
    sub_B0D97C(v6);
  }
  v13 = QuestTree__mfBaseTreeUpdateWithOpenCheck(v11, warId, v12, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
}


void __fastcall SubmarineMapManager__OnEveryActionEnd(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x1

  if ( (byte_421360C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__, v3);
    byte_421360C = 1;
  }
  if ( SubmarineMapManager__HasSelfQuestAfterAction(this, method) )
  {
    v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v4, v5);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_0__, 0LL);
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
  __int64 v12; // x1
  __int64 v13; // x20
  __int64 eventId; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  clsQuestCheck_o *v29; // x22
  const MethodInfo *v30; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  NetworkManager_ResultCallbackFunc_o *v33; // x22
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x22
  const MethodInfo *v35; // x1
  struct MapControl_MapInfo_o *mapInfo; // x8

  if ( (byte_4213614 & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, *(_QWORD *)&scanId);
    sub_B0D8A4(&NetworkManager_TypeInfo, v7);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v10);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__, v11);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass38_0_TypeInfo, v12);
    byte_4213614 = 1;
  }
  v13 = sub_B0D974(SubmarineMapManager___c__DisplayClass38_0_TypeInfo, *(_QWORD *)&scanId, panelData);
  SubmarineMapManager___c__DisplayClass38_0___ctor((SubmarineMapManager___c__DisplayClass38_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_15;
  *(_QWORD *)(v13 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v13 + 32) = panelData;
  v21 = v13 + 32;
  *(_DWORD *)(v13 + 24) = scanId;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 32), (System_Int32_array **)panelData, v22, v23, v24, v25, v26, v27);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._30_SetAllTouchBlock.method)(
    this,
    1LL,
    this->klass->vtable._31_SetCameraWorkBlock.methodPtr);
  SubmarineMapManager__HideScannableEffect(this, v28);
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v29 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  eventId = SubmarineMapManager__get_eventId(this, v30);
  if ( !v29 )
    goto LABEL_15;
  clsQuestCheck__SaveEventQuestIdListPlayable(v29, eventId, 0LL);
  v33 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v31, v32);
  NetworkManager_ResultCallbackFunc___ctor(
    v33,
    (Il2CppObject *)v13,
    Method_SubmarineMapManager___c__DisplayClass38_0__OnScanDecided_b__0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v33,
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v35);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo || !*(_QWORD *)v21 || !Request_WarBoardWallAttackRequest )
LABEL_15:
    sub_B0D97C(eventId);
  EventScanPanelMapRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    eventId,
    mapInfo->fields.mapId,
    *(_DWORD *)(*(_QWORD *)v21 + 24LL),
    *(_DWORD *)(v13 + 24),
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
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_String_o *value; // x8
  EventSaveData_o *v31; // x19
  EventSaveData_c *klass; // x9
  const char *name; // x9
  __int64 v34; // x10
  __int64 v35; // x9
  TerminalPramsManager_c *v36; // x0
  EventSaveData_o *v37; // x20
  __int64 v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  TerminalPramsManager_c *v45; // x0
  BattleServantConfConponent_o *p_BeforeEventSubmarineSaveData_k__BackingField; // x0
  TerminalPramsManager_c *v47; // x0
  System_String_array *ValueByArray; // x0
  __int64 v49; // x1
  int max_length; // w8
  System_String_o **v51; // x9
  System_String_o *v52; // x21
  System_String_o **v53; // x9
  System_String_o *v54; // x20
  __int64 *v55; // x8
  System_String_o *v56; // x22
  TerminalPramsManager_c *v57; // x0
  struct EventSaveData_o *v58; // x23
  System_String_o *v59; // x24
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  EventSaveData_c *v66; // x8
  System_Int32_array **namespaze; // x19
  TerminalPramsManager_c *v68; // x0
  BattleServantConfConponent_o *p_mResultEventPanelRewardInfos; // x0
  __int64 v70; // x1
  System_String_c *v71; // x8
  __int64 v72; // x0
  int v73; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4213615 & 1) == 0 )
  {
    sub_B0D8A4(&EventSaveData_TypeInfo, result);
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___, v9);
    sub_B0D8A4(&JsonManager_TypeInfo, v10);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v12);
    sub_B0D8A4(&TitleInfoEventSubmarineStatusComponent_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v14);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v15);
    sub_B0D8A4(&StringLiteral_6601/*"False"*/, v16);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v17);
    sub_B0D8A4(&StringLiteral_960/*"0"*/, v18);
    byte_4213615 = 1;
  }
  v73 = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
  {
    SubmarineMapManager__OnEndScan(this, v19);
    return;
  }
  SubmarineMapManager__StartScanPerformance(this, scanId, panelData, v20);
  v21 = (Il2CppObject *)System_String__Concat_43852188(
                          (System_String_o *)StringLiteral_15681/*"["*/,
                          result,
                          (System_String_o *)StringLiteral_15917/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                                      v21,
                                                                      (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_EventScanPanelMapRequest_ResultData___);
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_83;
  value = BeforeEventSubmarineSaveData_k__BackingField->fields.value;
  v31 = BeforeEventSubmarineSaveData_k__BackingField;
  if ( !value )
    return;
  if ( !(_DWORD)value )
  {
LABEL_84:
    v72 = sub_B0D9A8(BeforeEventSubmarineSaveData_k__BackingField);
    sub_B0D948(v72, 0LL);
  }
  klass = BeforeEventSubmarineSaveData_k__BackingField[1].klass;
  if ( !klass )
    goto LABEL_83;
  name = klass->_1.name;
  if ( name )
  {
    v34 = *((_QWORD *)name + 3);
    if ( v34 )
    {
      if ( !(_DWORD)v34 )
        goto LABEL_84;
      v35 = *((_QWORD *)name + 4);
      if ( v35 )
      {
        v73 = *(_QWORD *)(v35 + 32);
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4211ADB )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v23);
          byte_4211ADB = 1;
        }
        v36 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v36 = TerminalPramsManager_TypeInfo;
        }
        if ( !v36->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
        {
          v37 = (EventSaveData_o *)sub_B0D974(EventSaveData_TypeInfo, v23, v24);
          EventSaveData___ctor(v37, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4211AB7 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v38);
            byte_4211AB7 = 1;
          }
          v45 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v45 = TerminalPramsManager_TypeInfo;
          }
          p_BeforeEventSubmarineSaveData_k__BackingField = (BattleServantConfConponent_o *)&v45->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          p_BeforeEventSubmarineSaveData_k__BackingField->klass = (BattleServantConfConponent_c *)v37;
          sub_B0D840(
            p_BeforeEventSubmarineSaveData_k__BackingField,
            (System_Int32_array **)v37,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44);
          v36 = TerminalPramsManager_TypeInfo;
        }
        if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v36);
        if ( !byte_4211ADB )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v23);
          byte_4211ADB = 1;
        }
        v47 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
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
              v51 = (System_String_o **)&StringLiteral_960/*"0"*/;
            v52 = *v51;
            v53 = max_length <= 2 ? (System_String_o **)&StringLiteral_960/*"0"*/ : &ValueByArray->m_Items[2];
            v54 = *v53;
            v55 = max_length <= 3 ? &StringLiteral_6601/*"False"*/ : (__int64 *)&ValueByArray->m_Items[3];
          }
          else
          {
            v54 = (System_String_o *)StringLiteral_960/*"0"*/;
            v55 = &StringLiteral_6601/*"False"*/;
            v52 = (System_String_o *)StringLiteral_960/*"0"*/;
          }
          v56 = (System_String_o *)*v55;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4211ADB )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v49);
            byte_4211ADB = 1;
          }
          v57 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v57 = TerminalPramsManager_TypeInfo;
          }
          v58 = v57->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
          v59 = System_Int32__ToString((int32_t)&v73, 0LL);
          if ( (BYTE3(TitleInfoEventSubmarineStatusComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TitleInfoEventSubmarineStatusComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TitleInfoEventSubmarineStatusComponent_TypeInfo);
          }
          BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TitleInfoEventSubmarineStatusComponent__CreateSaveData_21651280(
                                                                              v59,
                                                                              v52,
                                                                              v54,
                                                                              v56,
                                                                              0LL);
          if ( v58 )
          {
            v58->fields.value = (struct System_String_o *)BeforeEventSubmarineSaveData_k__BackingField;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v58->fields.value,
              (System_Int32_array **)BeforeEventSubmarineSaveData_k__BackingField,
              v60,
              v61,
              v62,
              v63,
              v64,
              v65);
            value = v31->fields.value;
            goto LABEL_66;
          }
        }
LABEL_83:
        sub_B0D97C(BeforeEventSubmarineSaveData_k__BackingField);
      }
    }
  }
LABEL_66:
  if ( !(_DWORD)value )
    goto LABEL_84;
  v66 = v31[1].klass;
  if ( !v66 )
    goto LABEL_83;
  namespaze = (System_Int32_array **)v66->_1.namespaze;
  v68 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v68 = TerminalPramsManager_TypeInfo;
  }
  p_mResultEventPanelRewardInfos = (BattleServantConfConponent_o *)&v68->static_fields->mResultEventPanelRewardInfos;
  p_mResultEventPanelRewardInfos->klass = (BattleServantConfConponent_c *)namespaze;
  sub_B0D840(p_mResultEventPanelRewardInfos, namespaze, v24, v25, v26, v27, v28, v29);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v70);
    byte_421083D = 1;
  }
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)TerminalSceneComponent_TypeInfo;
  }
  v71 = BeforeEventSubmarineSaveData_k__BackingField[5].fields.value->klass;
  if ( !v71 )
    goto LABEL_83;
  BeforeEventSubmarineSaveData_k__BackingField = (EventSaveData_o *)v71->_2.genericContainerHandle;
  if ( !BeforeEventSubmarineSaveData_k__BackingField )
    goto LABEL_83;
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  SubmarineMapManager_c *klass; // x8
  const MethodInfo *v25; // x4
  SchedulerTaskBase_o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  SchedulerTaskBase_TaskCallback_o *v29; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  TaskScheduler_o *taskScheduler; // x19
  __int64 v37; // x20
  __int64 v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x1
  const MethodInfo *v46; // x1
  const MethodInfo *v47; // x1
  __int64 v48; // x0
  __int64 v49; // x0

  if ( (byte_4213613 & 1) == 0 )
  {
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, *(_QWORD *)&scanId);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v7);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__, v8);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass37_0_TypeInfo, v9);
    byte_4213613 = 1;
  }
  v10 = sub_B0D974(SubmarineMapManager___c__DisplayClass37_0_TypeInfo, *(_QWORD *)&scanId, panelData);
  SubmarineMapManager___c__DisplayClass37_0___ctor((SubmarineMapManager___c__DisplayClass37_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 32) = panelData;
  *(_DWORD *)(v10 + 24) = scanId;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)panelData, v18, v19, v20, v21, v22, v23);
  klass = this->klass;
  if ( *(int *)(v10 + 24) > 0 )
  {
    ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))klass->vtable._30_SetAllTouchBlock.method)(
      this,
      1LL,
      klass->vtable._31_SetCameraWorkBlock.methodPtr);
    *(_BYTE *)(v10 + 40) = 0;
    v26 = SubmarineMapManager__ShowScanRangeTask(
            this,
            *(_DWORD *)(v10 + 24),
            *(SubmarineMapPanelData_o **)(v10 + 32),
            (bool *)(v10 + 40),
            v25);
    v29 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v27, v28);
    SchedulerTaskBase_TaskCallback___ctor(
      v29,
      (Il2CppObject *)v10,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__0__,
      0LL);
    if ( v26 )
    {
      v26->fields.EndCallback = v29;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v26->fields.EndCallback,
        (System_Int32_array **)v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      taskScheduler = this->fields.taskScheduler;
      v11 = sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
      if ( v11 )
      {
        v37 = v11;
        v38 = sub_B0D964(v26, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
        if ( !v38 )
        {
          v48 = sub_B0D99C();
          sub_B0D948(v48, 0LL);
        }
        if ( !*(_DWORD *)(v37 + 24) )
        {
          v49 = sub_B0D9A8(v38);
          sub_B0D948(v49, 0LL);
        }
        *(_QWORD *)(v37 + 32) = v26;
        sub_B0D840((BattleServantConfConponent_o *)(v37 + 32), (System_Int32_array **)v26, v39, v40, v41, v42, v43, v44);
        if ( taskScheduler )
        {
          TaskScheduler__AddTask(taskScheduler, 0, (SchedulerTaskBase_array *)v37, 0LL);
          return;
        }
      }
    }
LABEL_12:
    sub_B0D97C(v11);
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
  __int64 v11; // x1
  __int64 v12; // x23
  __int64 v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  SubmarineScanConfirmDialog_o *scanConfirmDialog; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_bool__o *v29; // x22
  const MethodInfo *v30; // x4

  if ( (byte_4213629 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, *(_QWORD *)&scanId);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v9);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__, v10);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass69_0_TypeInfo, v11);
    byte_4213629 = 1;
  }
  v12 = sub_B0D974(SubmarineMapManager___c__DisplayClass69_0_TypeInfo, *(_QWORD *)&scanId, isShowDialogUpper);
  SubmarineMapManager___c__DisplayClass69_0___ctor((SubmarineMapManager___c__DisplayClass69_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_6;
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)callback, v20, v21, v22, v23, v24, v25);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  scanConfirmDialog = this->fields.scanConfirmDialog;
  v29 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v27, v28);
  System_Action_bool____ctor(
    v29,
    (Il2CppObject *)v12,
    Method_SubmarineMapManager___c__DisplayClass69_0__OpenScanConfirmDialog_b__0__,
    (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
  if ( !scanConfirmDialog )
LABEL_6:
    sub_B0D97C(v13);
  SubmarineScanConfirmDialog__Open(scanConfirmDialog, scanId, isShowDialogUpper, v29, v30);
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
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  SubmarineSelectScannerDialog_o *selectScannerDialog; // x20
  const MethodInfo *v25; // x1
  int32_t eventId; // w22
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_int__o *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  System_Action_o *v32; // x21
  const MethodInfo *v33; // x4

  if ( (byte_4213627 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, callback);
    sub_B0D8A4(&System_Action_int__TypeInfo, v5);
    sub_B0D8A4(&System_Action_TypeInfo, v6);
    sub_B0D8A4(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v7);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__, v8);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass67_0_TypeInfo, v9);
    byte_4213627 = 1;
  }
  v10 = sub_B0D974(SubmarineMapManager___c__DisplayClass67_0_TypeInfo, callback, method);
  SubmarineMapManager___c__DisplayClass67_0___ctor((SubmarineMapManager___c__DisplayClass67_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_6;
  *(_QWORD *)(v10 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v10 + 24) = callback;
  sub_B0D840((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)callback, v18, v19, v20, v21, v22, v23);
  ((void (__fastcall *)(SubmarineMapManager_o *, __int64, Il2CppMethodPointer))this->klass->vtable._31_SetCameraWorkBlock.method)(
    this,
    1LL,
    this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  selectScannerDialog = this->fields.selectScannerDialog;
  eventId = SubmarineMapManager__get_eventId(this, v25);
  v29 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v27, v28);
  System_Action_int____ctor(
    v29,
    (Il2CppObject *)v10,
    Method_SubmarineMapManager___c__DisplayClass67_0__OpenSelectScannerDialog_b__0__,
    (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
  v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v30, v31);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
  if ( !selectScannerDialog )
LABEL_6:
    sub_B0D97C(v11);
  SubmarineSelectScannerDialog__Open(selectScannerDialog, eventId, v29, v32, v33);
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
    sub_B0D840(p_assetManager, 0LL, v5, v6, v7, v8, v9, v10);
  }
  SubmarineMapManager__ReleasePoolEffects(this, method);
  EventMapManagerBase__ReleaseAssets((EventMapManagerBase_o *)this, 0LL);
}


void __fastcall SubmarineMapManager__ReleasePoolEffects(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct ComponentPool_CommonEffectComponent__o *effectScanedPanelObjPool; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  ComponentPool_SubmarineEffectScannablePanelComponent__o *effectScannablePanelObjPool; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  ComponentPool_SubmarineEffectScannablePanelComponent__o *v19; // x0
  BattleServantConfConponent_o *p_effectScanObstaclePanelObjPool; // x19
  struct ComponentPool_SubmarineEffectScanObstaclePanelComponent__o *effectScanObstaclePanelObjPool; // t1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_421362C & 1) == 0 )
  {
    sub_B0D8A4(&Method_ComponentPool_CommonEffectComponent__Finish__, method);
    sub_B0D8A4(&Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__, v3);
    sub_B0D8A4(&Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__, v4);
    byte_421362C = 1;
  }
  effectScanedPanelObjPool = this->fields.effectScanedPanelObjPool;
  if ( effectScanedPanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanedPanelObjPool,
      (const MethodInfo_241E700 *)Method_ComponentPool_CommonEffectComponent__Finish__);
    this->fields.effectScanedPanelObjPool = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.effectScanedPanelObjPool, 0LL, v6, v7, v8, v9, v10, v11);
  }
  effectScannablePanelObjPool = this->fields.effectScannablePanelObjPool;
  if ( effectScannablePanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      effectScannablePanelObjPool,
      (const MethodInfo_241E700 *)Method_ComponentPool_SubmarineEffectScannablePanelComponent__Finish__);
    this->fields.effectScannablePanelObjPool = 0LL;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.effectScannablePanelObjPool,
      0LL,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  effectScanObstaclePanelObjPool = this->fields.effectScanObstaclePanelObjPool;
  p_effectScanObstaclePanelObjPool = (BattleServantConfConponent_o *)&this->fields.effectScanObstaclePanelObjPool;
  v19 = (ComponentPool_SubmarineEffectScannablePanelComponent__o *)effectScanObstaclePanelObjPool;
  if ( effectScanObstaclePanelObjPool )
  {
    ComponentPool_SubmarineEffectScannablePanelComponent___Finish(
      v19,
      (const MethodInfo_241E700 *)Method_ComponentPool_SubmarineEffectScanObstaclePanelComponent__Finish__);
    p_effectScanObstaclePanelObjPool->klass = 0LL;
    sub_B0D840(p_effectScanObstaclePanelObjPool, 0LL, v22, v23, v24, v25, v26, v27);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        SubmarineMapPanelData_o *panelData,
        System_Nullable_Vector3__o offset,
        System_Nullable_Vector3__o scale,
        const MethodInfo_205276C *method)
{
  unsigned __int64 v7; // x19
  __int64 v8; // x20
  __int64 v12; // x1
  UnityEngine_GameObject_o *effectContainer; // x0
  UnityEngine_Transform_o *transform; // x24
  float v15; // s0
  float v16; // s1
  float v17; // s2
  UnityEngine_Component_o *v18; // x21
  UnityEngine_Transform_o *v19; // x22
  const MethodInfo_299B960 *v20; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v24; // s0
  float v25; // s1
  float v26; // s2
  unsigned __int64 v27; // x19
  UnityEngine_Transform_o *v28; // x0
  const MethodInfo_299B960 *v29; // x2
  bool v30; // zf
  UnityEngine_Transform_o *v31; // x19
  int v32; // s0
  System_Nullable_Vector3__o v35; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v36; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_Vector3__o v37; // 0:x0.16
  System_Nullable_Vector3__o v38; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  v7 = *(_QWORD *)&scale.fields.value.fields.z;
  v8 = *(_QWORD *)&offset.fields.value.fields.z;
  v36 = offset;
  v35 = scale;
  if ( (byte_4219F5E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_Vector3__get_HasValue__, pool);
    sub_B0D8A4(&Method_System_Nullable_Vector3__get_Value__, v12);
    byte_4219F5E = 1;
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
  *(UnityEngine_Vector3_o *)&v15 = SubmarinePanelPositionCalculator__GetPositionByIndices(
                                     (SubmarinePanelPositionCalculator_o *)effectContainer,
                                     panelData->fields._HIndex_k__BackingField,
                                     panelData->fields._VIndex_k__BackingField,
                                     0LL);
  if ( !pool )
    goto LABEL_16;
  effectContainer = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_Transform_o *, float, float, float))method->rgctx_data->_0_ComponentPool_T__Rent->methodPointer)(
                                                  pool,
                                                  transform,
                                                  v15,
                                                  v16,
                                                  v17);
  if ( !effectContainer )
    goto LABEL_16;
  v18 = (UnityEngine_Component_o *)effectContainer;
  effectContainer = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)effectContainer,
                                                  0LL);
  if ( !effectContainer )
    goto LABEL_16;
  v19 = (UnityEngine_Transform_o *)effectContainer;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)effectContainer, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  if ( (v8 & 0xFF00000000LL) != 0 )
  {
    *(_QWORD *)&v37.fields.value.fields.x = &v36;
    *(_QWORD *)&v37.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
    *(UnityEngine_Vector3_o *)&v24 = System_Nullable_Vector3___get_Value(v37, v20);
    LOBYTE(v27) = v35.fields.has_value;
  }
  else
  {
    v27 = HIDWORD(v7);
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
  }
  v40.fields.x = x + v24;
  v40.fields.y = y + v25;
  v40.fields.z = z + v26;
  UnityEngine_Transform__set_localPosition(v19, v40, 0LL);
  v28 = UnityEngine_Component__get_transform(v18, 0LL);
  v30 = (unsigned __int8)v27 == 0;
  v31 = v28;
  if ( v30 )
  {
    *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_one(0LL);
    if ( v31 )
      goto LABEL_14;
LABEL_16:
    sub_B0D97C(effectContainer);
  }
  *(_QWORD *)&v38.fields.value.fields.x = &v35;
  *(_QWORD *)&v38.fields.value.fields.z = Method_System_Nullable_Vector3__get_Value__;
  *(UnityEngine_Vector3_o *)&v32 = System_Nullable_Vector3___get_Value(v38, v29);
  if ( !v31 )
    goto LABEL_16;
LABEL_14:
  UnityEngine_Transform__set_localScale(v31, *(UnityEngine_Vector3_o *)&v32, 0LL);
}


void __fastcall SubmarineMapManager__ResetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  this->fields.isTimeScaleAccelerate = 0;
}


void __fastcall SubmarineMapManager__ReturnEffectsToPool_SubmarineEffectSelectedPanelComponent_(
        SubmarineMapManager_o *this,
        ComponentPool_T__o *pool,
        const MethodInfo_2052910 *method)
{
  UnityEngine_GameObject_array *Children; // x0
  int max_length; // w8
  UnityEngine_GameObject_array *v7; // x21
  unsigned int v8; // w22
  __int64 v9; // x0

  Children = GameObjectExtensions__GetChildren(this->fields.effectContainer, 0, 0LL);
  if ( !Children )
    goto LABEL_9;
  max_length = Children->max_length;
  v7 = Children;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v9 = sub_B0D9A8(Children);
        sub_B0D948(v9, 0LL);
      }
      Children = (UnityEngine_GameObject_array *)v7->m_Items[v8];
      if ( !Children )
        break;
      Children = (UnityEngine_GameObject_array *)((__int64 (*)(void))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)();
      if ( !pool )
        break;
      Children = (UnityEngine_GameObject_array *)((__int64 (__fastcall *)(ComponentPool_T__o *, UnityEngine_GameObject_array *))method->rgctx_data->_1_ComponentPool_T__Return->methodPointer)(
                                                   pool,
                                                   Children);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_9:
    sub_B0D97C(Children);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  TaskScheduler_o *taskScheduler; // x20
  const MethodInfo *v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Delegate_o *v24; // x23
  SchedulerTaskBase_TaskCallback_o *v25; // x24
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  TaskScheduler_o *v33; // x19
  System_Collections_Generic_List_SchedulerTaskBase__o *v34; // x21
  __int64 v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0
  __int64 v43; // x0
  SubmarineMapManager_o *v44; // x0
  const MethodInfo *v45; // x1

  if ( (byte_4213618 & 1) == 0 )
  {
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, finishCallback);
    sub_B0D8A4(&SchedulerTaskNone_TypeInfo, v5);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__, v7);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass42_0_TypeInfo, v8);
    byte_4213618 = 1;
  }
  v9 = sub_B0D974(SubmarineMapManager___c__DisplayClass42_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass42_0___ctor((SubmarineMapManager___c__DisplayClass42_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)finishCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  taskScheduler = this->fields.taskScheduler;
  RevealEachSpotsTasks = SubmarineMapManager__CreateRevealEachSpotsTasks(this, v18);
  if ( !taskScheduler )
    goto LABEL_13;
  TaskScheduler__AddTask_19037728(taskScheduler, 0, RevealEachSpotsTasks, 0LL);
  v21 = sub_B0D974(SchedulerTaskNone_TypeInfo, v19, v20);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_13;
  v24 = *(System_Delegate_o **)(v21 + 32);
  v25 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v22, v23);
  SchedulerTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_SubmarineMapManager___c__DisplayClass42_0__RevealAvailableSpots_b__0__,
    0LL);
  v26 = (System_Int32_array **)System_Delegate__Combine(v24, (System_Delegate_o *)v25, 0LL);
  if ( !v26 || *v26 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v21 + 32) = v26;
    sub_B0D840((BattleServantConfConponent_o *)(v21 + 32), v26, v27, v28, v29, v30, v31, v32);
    v33 = this->fields.taskScheduler;
    RevealEachSpotsTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)sub_B0D8BC(
                                                                                     SchedulerTaskBase___TypeInfo,
                                                                                     1LL);
    if ( RevealEachSpotsTasks )
    {
      v34 = RevealEachSpotsTasks;
      v35 = sub_B0D964(v21, RevealEachSpotsTasks->klass->_1.element_class);
      if ( !v35 )
      {
        v42 = sub_B0D99C();
        sub_B0D948(v42, 0LL);
      }
      if ( !v34->fields._size )
      {
        v43 = sub_B0D9A8(v35);
        sub_B0D948(v43, 0LL);
      }
      v34->fields._syncRoot = (Il2CppObject *)v21;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v34->fields._syncRoot,
        (System_Int32_array **)v21,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
      if ( v33 )
      {
        TaskScheduler__AddTask(v33, 0, (SchedulerTaskBase_array *)v34, 0LL);
        return;
      }
    }
LABEL_13:
    sub_B0D97C(RevealEachSpotsTasks);
  }
  v44 = (SubmarineMapManager_o *)sub_B0DC70(v26);
  SubmarineMapManager__CreateRevealEachSpotsTasks(v44, v45);
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
  struct SubmarineMapDataManager_o *v9; // x8
  struct SubmarineMapAssetManager_o *v10; // x9
  SubmarineMapDataManager_o *v11; // x20
  UIWidget_o *v12; // x21
  int32_t v13; // w0
  struct SubmarineMapDataManager_o *v14; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8

  if ( (byte_4213620 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_UITexture___, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_4213620 = 1;
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
        submarineData = (SubmarineMapDataManager_o *)SubmarineMapDataManager__GetEmptyPanelUniqueIds(submarineData, v8);
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
                                                           0LL);
            if ( this->fields.gridLine )
            {
              v11 = submarineData;
              submarineData = (SubmarineMapDataManager_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                             this->fields.gridLine,
                                                             (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_UITexture___);
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
    sub_B0D97C(submarineData);
  }
}


void __fastcall SubmarineMapManager__SetTimeAcceleration(SubmarineMapManager_o *this, const MethodInfo *method)
{
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
  this->fields.isTimeScaleAccelerate = 1;
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
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v10; // 0:x3.16
  System_Nullable_Vector3__o v11; // 0:x5.16

  v2 = this;
  if ( (byte_421362F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_B0D8A4(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___,
                                      v6);
    byte_421362F = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !v2->fields.isShowScanObstacleEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScanObstacleEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_B0D97C(this);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v9,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v9.fields.current )
        sub_B0D97C(v8);
      if ( BYTE1(v9.fields.current[3].monitor) )
      {
        *(_QWORD *)&v10.fields.value.fields.x = 0LL;
        *(_QWORD *)&v10.fields.value.fields.z = 0LL;
        *(_QWORD *)&v11.fields.value.fields.x = 0LL;
        *(_QWORD *)&v11.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScanObstaclePanelObjPool,
          (SubmarineMapPanelData_o *)v9.fields.current,
          v10,
          v11,
          (const MethodInfo_205276C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScanObstaclePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
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
  UnityEngine_GameObject_o *ScanRangeNotificatorPrefab; // x21
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *transform; // x22
  struct UnityEngine_GameObject_o *v16; // x0
  struct UnityEngine_GameObject_o **p_scanRangeNotificator; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4213633 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventPanelScanMaster___, *(_QWORD *)&scanId);
    sub_B0D8A4(&Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, v8);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4213633 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventPanelScanMaster___);
  if ( !Instance )
    goto LABEL_20;
  Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
               (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
               scanId,
               (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventPanelScanMaster__EventPanelScanEntity__int__GetEntity__);
  if ( !Instance )
    return;
  if ( !this->fields.assetManager )
LABEL_20:
    sub_B0D97C(Instance);
  ScanRangeNotificatorPrefab = SubmarineMapAssetManager__GetScanRangeNotificatorPrefab(
                                 this->fields.assetManager,
                                 *((_DWORD *)Instance + 14),
                                 v12);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)ScanRangeNotificatorPrefab, 0LL, 0LL) )
  {
    SubmarineMapManager__HideScanRange(this, v14);
    Instance = this->fields.effectContainer;
    if ( Instance )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v16 = (struct UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                                 (UILabel_o *)ScanRangeNotificatorPrefab,
                                                 transform,
                                                 (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
      this->fields.scanRangeNotificator = v16;
      p_scanRangeNotificator = &this->fields.scanRangeNotificator;
      sub_B0D840(
        (BattleServantConfConponent_o *)p_scanRangeNotificator,
        (System_Int32_array **)v16,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct SubmarineMapDataManager_o *submarineData; // x8
  struct SubmarineSettingsManager_o *Settings_k__BackingField; // x8
  const MethodInfo *v24; // x3
  int v25; // w23
  int v26; // w24
  SubmarineMapPanelData_o *PanelByIndices; // x0
  int v28; // s0
  SubmarineMapPanelData_o *v32; // x22
  float xMin; // s0
  float v34; // s4
  float xMax; // s0
  float v36; // s4
  float yMin; // s0
  float v38; // s4
  float yMax; // s0
  float v40; // s4
  float v42; // s0
  int v43; // s2
  float v45; // s4
  struct SubmarineMapDataManager_o *v46; // x8
  struct SubmarineSettingsManager_o *v47; // x8
  float x; // s1
  float v49; // s0
  float v50; // s0
  int v51; // s2
  float v53; // s4
  struct SubmarineMapDataManager_o *v54; // x8
  struct SubmarineSettingsManager_o *v55; // x8
  float v56; // s1
  float v57; // s0
  float v58; // s0
  int v59; // s2
  float v61; // s4
  struct SubmarineMapDataManager_o *v62; // x8
  struct SubmarineSettingsManager_o *v63; // x8
  float y; // s1
  float v65; // s0
  float v66; // s0
  int v67; // s2
  float v69; // s4
  struct SubmarineMapDataManager_o *v70; // x8
  struct SubmarineSettingsManager_o *v71; // x8
  float v72; // s1
  float v73; // s0
  __int64 v74; // x1
  __int64 v75; // x2
  UnityEngine_Rect_array *v76; // x21
  System_Collections_Generic_List_Rect__o *v77; // x22
  const MethodInfo *v78; // x3
  const MethodInfo *v79; // x2
  int mapInfo; // w8
  SubmarineMapManager_o *v81; // x21
  unsigned int v82; // w23
  __int64 v83; // x25
  int v84; // s0
  int v86; // s4
  int v88; // s6
  struct SubmarineMapDataManager_o *v90; // x8
  struct SubmarineSettingsManager_o *v91; // x8
  float v92; // s2
  float v93; // s3
  int v94; // s2
  int v96; // s4
  int v98; // s0
  int v99; // s1
  Submarine2DUILocationInfo_o *v100; // x22
  const MethodInfo *v101; // x1
  UnityEngine_Rect_array *Rects; // x0
  MapCamera_o *mapCamera; // x23
  UnityEngine_Rect_array *v104; // x22
  __int64 v105; // x1
  __int64 v106; // x2
  Submarine2DUILocationInfo_o *v107; // x22
  const MethodInfo *v108; // x1
  UnityEngine_Rect_array *v109; // x0
  MapCamera_o *v110; // x23
  UnityEngine_Rect_array *v111; // x22
  __int64 v112; // x1
  __int64 v113; // x2
  unsigned int v114; // s0
  unsigned int v115; // s1
  unsigned int v116; // s2
  unsigned int v117; // s3
  UnityEngine_Vector2_o Size; // kr00_8
  int v119; // s0
  System_Single_array *v123; // x20
  float width; // s0
  int v125; // s1
  float v128; // s0
  float height; // s0
  float m_XMin; // s8
  const MethodInfo *v131; // x1
  UnityEngine_Vector2_o center; // kr08_8
  struct SubmarineMapDataManager_o *v133; // x8
  struct SubmarineSettingsManager_o *v134; // x8
  int v135; // s2
  Submarine2DUILocationInfo_o *v137; // x22
  const MethodInfo *v138; // x1
  UnityEngine_Rect_array *v139; // x0
  MapCamera_o *v140; // x23
  UnityEngine_Rect_array *v141; // x22
  __int64 v142; // x0
  UnityEngine_Rect_o v143; // [xsp+0h] [xbp-80h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Rect_o v145; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v146; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v147; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v148; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v149; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v150; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v151; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v153; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v154; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v155; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v156; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = this;
  if ( (byte_4213636 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Rect__Add__, *(_QWORD *)&scanId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Rect__ToArray__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Rect___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_Rect__TypeInfo, v15);
    sub_B0D8A4(&MapCameraViewAdjusterUtil_TypeInfo, v16);
    sub_B0D8A4(&UnityEngine_Rect___TypeInfo, v17);
    sub_B0D8A4(&float___TypeInfo, v18);
    sub_B0D8A4(&SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v19);
    sub_B0D8A4(&Submarine2DUILocationInfo_TypeInfo, v20);
    this = (SubmarineMapManager_o *)sub_B0D8A4(&SubmarineScanDialogUpsideLocationInfo_TypeInfo, v21);
    byte_4213636 = 1;
  }
  HIDWORD(methoda.genericContainerHandle) = 0;
  memset(&methoda, 0, 32);
  *(_QWORD *)&v143.fields.m_XMin = 0LL;
  *(_QWORD *)&v143.fields.m_Width = 0LL;
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
      v145.fields.m_XMin = panelData->fields._LocalPosition_k__BackingField.fields.x;
      v145.fields.m_YMin = panelData->fields._LocalPosition_k__BackingField.fields.y;
      v145.fields.m_Width = 0.0;
      v145.fields.m_Height = 0.0;
      UnityEngine_Rect___ctor_34970056(v145, *(UnityEngine_Vector2_o *)&v5, *(UnityEngine_Vector2_o *)&v7, &methoda);
      v25 = -2;
      do
      {
        v26 = -3;
        do
        {
          this = (SubmarineMapManager_o *)v12->fields.submarineData;
          if ( !this )
            goto LABEL_62;
          PanelByIndices = SubmarineMapDataManager__GetPanelByIndices(
                             (SubmarineMapDataManager_o *)this,
                             panelData->fields._HIndex_k__BackingField + v25,
                             v26 + panelData->fields._VIndex_k__BackingField + 1,
                             v24);
          if ( PanelByIndices )
          {
            v32 = PanelByIndices;
            xMin = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v28, &methoda);
            v146.fields.m_XMin = UnityEngine_Mathf__Min(xMin, v32->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMin(v146, v34, &methoda);
            xMax = UnityEngine_Rect__get_xMax(v147, &methoda);
            v148.fields.m_XMin = UnityEngine_Mathf__Max(xMax, v32->fields._LocalPosition_k__BackingField.fields.x, 0LL);
            UnityEngine_Rect__set_xMax(v148, v36, &methoda);
            yMin = UnityEngine_Rect__get_yMin(v149, &methoda);
            v150.fields.m_XMin = UnityEngine_Mathf__Min(yMin, v32->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMin(v150, v38, &methoda);
            yMax = UnityEngine_Rect__get_yMax(v151, &methoda);
            v152.fields.m_XMin = UnityEngine_Mathf__Max(yMax, v32->fields._LocalPosition_k__BackingField.fields.y, 0LL);
            UnityEngine_Rect__set_yMax(v152, v40, &methoda);
          }
          ++v26;
        }
        while ( v26 < 2 );
      }
      while ( v25++ <= 1 );
      v42 = UnityEngine_Rect__get_xMin(*(UnityEngine_Rect_o *)&v28, &methoda);
      v46 = v12->fields.submarineData;
      if ( v46 )
      {
        v47 = v46->fields._Settings_k__BackingField;
        if ( v47 )
        {
          x = v47->fields._PanelUnitSize_k__BackingField.fields.x;
          v49 = v42 - x;
          UnityEngine_Rect__set_xMin(*(UnityEngine_Rect_o *)(&v43 - 2), v45, &methoda);
          v50 = UnityEngine_Rect__get_xMax(v153, &methoda);
          v54 = v12->fields.submarineData;
          if ( v54 )
          {
            v55 = v54->fields._Settings_k__BackingField;
            if ( v55 )
            {
              v56 = v55->fields._PanelUnitSize_k__BackingField.fields.x;
              v57 = v50 + v56;
              UnityEngine_Rect__set_xMax(*(UnityEngine_Rect_o *)(&v51 - 2), v53, &methoda);
              v58 = UnityEngine_Rect__get_yMin(v154, &methoda);
              v62 = v12->fields.submarineData;
              if ( v62 )
              {
                v63 = v62->fields._Settings_k__BackingField;
                if ( v63 )
                {
                  y = v63->fields._PanelUnitSize_k__BackingField.fields.y;
                  v65 = v58 - y;
                  UnityEngine_Rect__set_yMin(*(UnityEngine_Rect_o *)(&v59 - 2), v61, &methoda);
                  v66 = UnityEngine_Rect__get_yMax(v155, &methoda);
                  v70 = v12->fields.submarineData;
                  if ( v70 )
                  {
                    v71 = v70->fields._Settings_k__BackingField;
                    if ( v71 )
                    {
                      v72 = v71->fields._PanelUnitSize_k__BackingField.fields.y;
                      v73 = v66 + v72;
                      UnityEngine_Rect__set_yMax(*(UnityEngine_Rect_o *)(&v67 - 2), v69, &methoda);
                      this = (SubmarineMapManager_o *)sub_B0D8BC(UnityEngine_Rect___TypeInfo, 1LL);
                      if ( this )
                      {
                        v76 = (UnityEngine_Rect_array *)this;
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
    sub_B0D97C(this);
  }
  v77 = (System_Collections_Generic_List_Rect__o *)sub_B0D974(
                                                     System_Collections_Generic_List_Rect__TypeInfo,
                                                     *(_QWORD *)&scanId,
                                                     panelData);
  System_Collections_Generic_List_Rect____ctor(
    v77,
    (const MethodInfo_2F1CC98 *)Method_System_Collections_Generic_List_Rect___ctor__);
  this = (SubmarineMapManager_o *)SubmarineDataHelperScan__CreateScanEvents(
                                    scanId,
                                    panelData,
                                    v12->fields.submarineData,
                                    v78);
  if ( !v12->fields.submarineData )
    goto LABEL_62;
  this = (SubmarineMapManager_o *)SubmarineMapDataManager__GetPanelsByScanEvents(
                                    v12->fields.submarineData,
                                    (System_Collections_Generic_List_SubmarineScanEvent__o *)this,
                                    v79);
  if ( !this )
    goto LABEL_62;
  mapInfo = (int)this->fields.mapInfo;
  v81 = this;
  if ( mapInfo >= 1 )
  {
    v82 = 0;
    while ( v82 < mapInfo )
    {
      v83 = *((_QWORD *)&v81->fields.warInfo + (int)v82);
      *(UnityEngine_Vector3_o *)&v84 = UnityEngine_Vector3__get_zero(0LL);
      v90 = v12->fields.submarineData;
      if ( !v90 )
        goto LABEL_62;
      v91 = v90->fields._Settings_k__BackingField;
      if ( !v91 )
        goto LABEL_62;
      v92 = v91->fields._PanelUnitSize_k__BackingField.fields.x;
      v93 = v91->fields._PanelUnitSize_k__BackingField.fields.y;
      UnityEngine_Rect___ctor_34970056(
        *(UnityEngine_Rect_o *)&v84,
        *(UnityEngine_Vector2_o *)&v86,
        *(UnityEngine_Vector2_o *)&v88,
        (const MethodInfo *)&v143);
      if ( !v83 )
        goto LABEL_62;
      v98 = *(_DWORD *)(v83 + 28);
      v99 = *(_DWORD *)(v83 + 32);
      UnityEngine_Rect__set_center(
        *(UnityEngine_Rect_o *)(&v94 - 2),
        *(UnityEngine_Vector2_o *)&v96,
        (const MethodInfo *)&v143);
      if ( !v77 )
        goto LABEL_62;
      System_Collections_Generic_List_Rect___Add(
        v77,
        v143,
        (const MethodInfo_2F1DA2C *)Method_System_Collections_Generic_List_Rect__Add__);
      mapInfo = (int)v81->fields.mapInfo;
      if ( (int)++v82 >= mapInfo )
        goto LABEL_35;
    }
    goto LABEL_63;
  }
LABEL_35:
  if ( !v77 )
    goto LABEL_62;
  v76 = System_Collections_Generic_List_Rect___ToArray(
          v77,
          (const MethodInfo_2F1FC94 *)Method_System_Collections_Generic_List_Rect__ToArray__);
LABEL_37:
  v100 = (Submarine2DUILocationInfo_o *)sub_B0D974(Submarine2DUILocationInfo_TypeInfo, v74, v75);
  Submarine2DUILocationInfo___ctor(v100, v101);
  if ( !v100 )
    goto LABEL_62;
  Rects = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v100, 0LL);
  mapCamera = v12->fields.mapCamera;
  v104 = Rects;
  if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  }
  *(UnityEngine_Rect_o *)&methoda.name = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                           mapCamera,
                                           v76,
                                           v104,
                                           (int32_t *)&methoda.genericContainerHandle + 1,
                                           0LL);
  *isShowDialogUpper = 0;
  if ( HIDWORD(methoda.genericContainerHandle) == 1 )
  {
    v107 = (Submarine2DUILocationInfo_o *)sub_B0D974(SubmarineScanDialogUpsideLocationInfo_TypeInfo, v105, v106);
    Submarine2DUILocationInfo___ctor(v107, v108);
    if ( !v107 )
      goto LABEL_62;
    v109 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v107, 0LL);
    v110 = v12->fields.mapCamera;
    v111 = v109;
    if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    }
    *(UnityEngine_Rect_o *)&v114 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                     v110,
                                     v76,
                                     v111,
                                     (int32_t *)&methoda.genericContainerHandle + 1,
                                     0LL);
    if ( HIDWORD(methoda.genericContainerHandle) != 1 )
    {
      if ( HIDWORD(methoda.genericContainerHandle) )
        goto LABEL_49;
      goto LABEL_48;
    }
    v137 = (Submarine2DUILocationInfo_o *)sub_B0D974(SubmarinScanDialogUpSideWeakLocationInfo_TypeInfo, v112, v113);
    Submarine2DUILocationInfo___ctor(v137, v138);
    if ( !v137 )
      goto LABEL_62;
    v139 = Base2DUILocationInfo__GetRects((Base2DUILocationInfo_o *)v137, 0LL);
    v140 = v12->fields.mapCamera;
    v141 = v139;
    if ( (BYTE3(MapCameraViewAdjusterUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
    }
    *(UnityEngine_Rect_o *)&v114 = MapCameraViewAdjusterUtil__CalculateEachRectIntersectAvoidedCameraRect(
                                     v140,
                                     v76,
                                     v141,
                                     (int32_t *)&methoda.genericContainerHandle + 1,
                                     0LL);
    if ( !HIDWORD(methoda.genericContainerHandle) )
    {
LABEL_48:
      methoda.name = (const char *)__PAIR64__(v115, v114);
      methoda.klass = (Il2CppClass *)__PAIR64__(v117, v116);
      *isShowDialogUpper = 1;
    }
  }
LABEL_49:
  Size = FSWindowUtil__GetSize(0LL);
  this = (SubmarineMapManager_o *)sub_B0D8BC(float___TypeInfo, 3LL);
  if ( !this )
    goto LABEL_62;
  v123 = (System_Single_array *)this;
  if ( !LODWORD(this->fields.mapInfo)
    || (LODWORD(this->fields.warInfo) = 1065353216,
        width = UnityEngine_Rect__get_width(*(UnityEngine_Rect_o *)&v119, (const MethodInfo *)&methoda.name),
        v123->max_length <= 1)
    || (v128 = width / Size.fields.x,
        v123->m_Items[2] = v128,
        height = UnityEngine_Rect__get_height(*(UnityEngine_Rect_o *)(&v125 - 1), (const MethodInfo *)&methoda.name),
        v123->max_length <= 2) )
  {
LABEL_63:
    v142 = sub_B0D9A8(this);
    sub_B0D948(v142, 0LL);
  }
  v123->m_Items[3] = height / Size.fields.y;
  v156.fields.m_XMin = UnityEngine_Mathf__Max_40819056(v123, 0LL);
  m_XMin = v156.fields.m_XMin;
  center = UnityEngine_Rect__get_center(v156, (const MethodInfo *)&methoda.name);
  v133 = v12->fields.submarineData;
  if ( !v133 )
    goto LABEL_62;
  v134 = v133->fields._Settings_k__BackingField;
  if ( !v134 )
    goto LABEL_62;
  v135 = 0;
  return SubmarineMapManager__CreateMoveCameraToPositionTask(
           v12,
           *(UnityEngine_Vector3_o *)&center.fields.x,
           m_XMin,
           v134->fields._ViewScanRangeCameraDuration_k__BackingField,
           v131);
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
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_Vector3__o v10; // 0:x3.16
  System_Nullable_Vector3__o v11; // 0:x5.16

  v2 = this;
  if ( (byte_421362D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__, v5);
    this = (SubmarineMapManager_o *)sub_B0D8A4(
                                      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___,
                                      v6);
    byte_421362D = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !v2->fields.isShowScannableEffect )
  {
    submarineData = v2->fields.submarineData;
    v2->fields.isShowScannableEffect = 1;
    if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
      sub_B0D97C(this);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v9,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__);
      if ( !v8 )
        break;
      if ( !v9.fields.current )
        sub_B0D97C(v8);
      if ( BYTE2(v9.fields.current[3].monitor) )
      {
        *(_QWORD *)&v10.fields.value.fields.x = 0LL;
        *(_QWORD *)&v10.fields.value.fields.z = 0LL;
        *(_QWORD *)&v11.fields.value.fields.x = 0LL;
        *(_QWORD *)&v11.fields.value.fields.z = 0LL;
        SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
          v2,
          (ComponentPool_T__o *)v2->fields.effectScannablePanelObjPool,
          (SubmarineMapPanelData_o *)v9.fields.current,
          v10,
          v11,
          (const MethodInfo_205276C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectScannablePanelComponent___);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
  }
}


void __fastcall SubmarineMapManager__ShowSelectedPanelEffect(
        SubmarineMapManager_o *this,
        SubmarineMapPanelData_o *panelData,
        const MethodInfo *method)
{
  System_Nullable_Vector3__o v5; // 0:x3.16
  System_Nullable_Vector3__o v6; // 0:x5.16

  if ( (byte_4213631 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___,
      panelData);
    byte_4213631 = 1;
  }
  *(_QWORD *)&v5.fields.value.fields.x = 0LL;
  *(_QWORD *)&v5.fields.value.fields.z = 0LL;
  *(_QWORD *)&v6.fields.value.fields.x = 0LL;
  *(_QWORD *)&v6.fields.value.fields.z = 0LL;
  SubmarineMapManager__RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent_(
    this,
    (ComponentPool_T__o *)this->fields.effectSelectedPanelObjPool,
    panelData,
    v5,
    v6,
    (const MethodInfo_205276C *)Method_SubmarineMapManager_RentAndPutEffectAbovePanel_SubmarineEffectSelectedPanelComponent___);
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
  __int64 v14; // x1
  MissionNotifyManager_o *ScanTask; // x0
  CommonUI_o *Instance; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x23
  TaskScheduler_o *taskScheduler; // x22
  const MethodInfo *v21; // x3
  TaskScheduler_o *v22; // x22
  SchedulerTaskBase_array *v23; // x23
  const MethodInfo *v24; // x3
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x20
  __int64 v35; // x1
  __int64 v36; // x2
  System_Delegate_o *v37; // x22
  SchedulerTaskBase_TaskCallback_o *v38; // x23
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  TaskScheduler_o *v46; // x19
  MissionNotifyManager_o *v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0
  __int64 v55; // x0
  SubmarineMapManager_o *v56; // x0
  const MethodInfo *v57; // x1

  if ( (byte_4213616 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&scanId);
    sub_B0D8A4(&SchedulerTaskBase___TypeInfo, v7);
    sub_B0D8A4(&SchedulerTaskNone_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v10);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v11);
    sub_B0D8A4(&Method_SubmarineMapManager__StartScanPerformance_b__40_0__, v12);
    sub_B0D8A4(&Method_SubmarineMapManager__StartScanPerformance_b__40_1__, v13);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v14);
    byte_4213616 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  ScanTask = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !ScanTask )
    goto LABEL_22;
  MissionNotifyManager__StartPause(ScanTask, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_0__, 0LL);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetTouchActionFadeMaskCollider(Instance, v19, 0LL);
  taskScheduler = this->fields.taskScheduler;
  ScanTask = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanTask(this, panelData, scanId, v21);
  if ( !taskScheduler )
    goto LABEL_22;
  TaskScheduler__AddTask_19037728(
    taskScheduler,
    0,
    (System_Collections_Generic_List_SchedulerTaskBase__o *)ScanTask,
    0LL);
  v22 = this->fields.taskScheduler;
  v23 = (SchedulerTaskBase_array *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
  ScanTask = (MissionNotifyManager_o *)SubmarineMapManager__CreateScanOpenPanelTask(this, scanId, panelData, v24);
  if ( !v23 )
    goto LABEL_22;
  v31 = (System_Int32_array **)ScanTask;
  if ( ScanTask )
  {
    ScanTask = (MissionNotifyManager_o *)sub_B0D964(ScanTask, v23->obj.klass->_1.element_class);
    if ( !ScanTask )
      goto LABEL_24;
  }
  if ( !v23->max_length )
    goto LABEL_23;
  v23->m_Items[0] = (SchedulerTaskBase_o *)v31;
  sub_B0D840((BattleServantConfConponent_o *)v23->m_Items, v31, v25, v26, v27, v28, v29, v30);
  if ( !v22 )
    goto LABEL_22;
  TaskScheduler__AddTask(v22, 0, v23, 0LL);
  v34 = sub_B0D974(SchedulerTaskNone_TypeInfo, v32, v33);
  SchedulerTaskNone___ctor((SchedulerTaskNone_o *)v34, 0LL);
  if ( !v34 )
    goto LABEL_22;
  v37 = *(System_Delegate_o **)(v34 + 32);
  v38 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v35, v36);
  SchedulerTaskBase_TaskCallback___ctor(
    v38,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__StartScanPerformance_b__40_1__,
    0LL);
  v39 = (System_Int32_array **)System_Delegate__Combine(v37, (System_Delegate_o *)v38, 0LL);
  if ( !v39 || *v39 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
  {
    *(_QWORD *)(v34 + 32) = v39;
    sub_B0D840((BattleServantConfConponent_o *)(v34 + 32), v39, v40, v41, v42, v43, v44, v45);
    v46 = this->fields.taskScheduler;
    ScanTask = (MissionNotifyManager_o *)sub_B0D8BC(SchedulerTaskBase___TypeInfo, 1LL);
    if ( !ScanTask )
      goto LABEL_22;
    v47 = ScanTask;
    ScanTask = (MissionNotifyManager_o *)sub_B0D964(v34, ScanTask->klass->_1.element_class);
    if ( ScanTask )
    {
      if ( LODWORD(v47->fields.mNoDispInfos) )
      {
        v47->fields.mMissionNotifyComps = (struct System_Collections_Generic_List_MissionNotifyComponent__o *)v34;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v47->fields.mMissionNotifyComps,
          (System_Int32_array **)v34,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53);
        if ( v46 )
        {
          TaskScheduler__AddTask(v46, 0, (SchedulerTaskBase_array *)v47, 0LL);
          return;
        }
LABEL_22:
        sub_B0D97C(ScanTask);
      }
LABEL_23:
      v54 = sub_B0D9A8(ScanTask);
      sub_B0D948(v54, 0LL);
    }
LABEL_24:
    v55 = sub_B0D99C();
    sub_B0D948(v55, 0LL);
  }
  v56 = (SubmarineMapManager_o *)sub_B0DC70(v39);
  SubmarineMapManager__OnEndScan(v56, v57);
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
  System_Collections_Generic_List_SchedulerTaskBase__o *SubsequentialOpenPanelTasks; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t size; // w8
  System_Collections_Generic_List_SchedulerTaskBase__o *v21; // x20
  bool v22; // vf
  int v23; // w8
  SchedulerTaskBase_o *v24; // x22
  BattleServantConfConponent_o *p_EndCallback; // x22
  System_Delegate_o *EndCallback; // t1
  SchedulerTaskBase_TaskCallback_o *v27; // x24
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  SubmarineMapManager_o *v35; // x0
  System_Action_o *v36; // x1
  const MethodInfo *v37; // x2

  if ( (byte_4213617 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Count__, finishCallback);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SchedulerTaskBase__get_Item__, v5);
    sub_B0D8A4(&SchedulerTaskBase_TaskCallback_TypeInfo, v6);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__, v7);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass41_0_TypeInfo, v8);
    byte_4213617 = 1;
  }
  v9 = sub_B0D974(SubmarineMapManager___c__DisplayClass41_0_TypeInfo, finishCallback, method);
  SubmarineMapManager___c__DisplayClass41_0___ctor((SubmarineMapManager___c__DisplayClass41_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_12;
  *(_QWORD *)(v9 + 16) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)finishCallback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SubsequentialOpenPanelTasks = SubmarineMapManager__CreateSubsequentialOpenPanelTasks(this, v17);
  if ( !SubsequentialOpenPanelTasks )
    goto LABEL_12;
  size = SubsequentialOpenPanelTasks->fields._size;
  v21 = SubsequentialOpenPanelTasks;
  v22 = __OFSUB__(size, 1);
  v23 = size - 1;
  if ( v23 < 0 != v22 )
  {
    ActionExtensions__Call(*(System_Action_o **)(v9 + 16), 0LL);
  }
  else
  {
    v24 = SubsequentialOpenPanelTasks->fields._items->m_Items[v23];
    if ( !v24 )
      goto LABEL_12;
    EndCallback = (System_Delegate_o *)v24->fields.EndCallback;
    p_EndCallback = (BattleServantConfConponent_o *)&v24->fields.EndCallback;
    v27 = (SchedulerTaskBase_TaskCallback_o *)sub_B0D974(SchedulerTaskBase_TaskCallback_TypeInfo, v18, v19);
    SchedulerTaskBase_TaskCallback___ctor(
      v27,
      (Il2CppObject *)v9,
      Method_SubmarineMapManager___c__DisplayClass41_0__SubsequentialOpenPanelTaskChain_b__0__,
      0LL);
    v28 = (System_Int32_array **)System_Delegate__Combine(EndCallback, (System_Delegate_o *)v27, 0LL);
    if ( !v28 || *v28 == (System_Int32_array *)SchedulerTaskBase_TaskCallback_TypeInfo )
    {
      p_EndCallback->klass = (BattleServantConfConponent_c *)v28;
      sub_B0D840(p_EndCallback, v28, v29, v30, v31, v32, v33, v34);
      SubsequentialOpenPanelTasks = (System_Collections_Generic_List_SchedulerTaskBase__o *)this->fields.taskScheduler;
      if ( SubsequentialOpenPanelTasks )
      {
        TaskScheduler__AddTask_19037728((TaskScheduler_o *)SubsequentialOpenPanelTasks, 0, v21, 0LL);
        return;
      }
LABEL_12:
      sub_B0D97C(SubsequentialOpenPanelTasks);
    }
    v35 = (SubmarineMapManager_o *)sub_B0DC70(v28);
    SubmarineMapManager__RevealAvailableSpots(v35, v36, v37);
  }
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
  EventScanPanelMapRequest_o *Request_WarBoardWallAttackRequest; // x20
  const MethodInfo *v13; // x1
  struct MapControl_MapInfo_o *v14; // x8

  if ( (byte_421360E & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_EventScanPanelMapRequest___, method);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&Method_SubmarineMapManager__TryInitRequest_b__32_0__, v5);
    byte_421360E = 1;
  }
  this->fields.initRequestFinished = 0;
  eventId = SubmarineMapManager__get_eventId(this, method);
  mapInfo = this->fields.mapInfo;
  if ( !mapInfo )
    goto LABEL_12;
  if ( SubmarineMapDataManager__HasUserMapData(eventId, mapInfo->fields.mapId, v7) )
  {
    this->fields.initRequestFinished = 1;
    return;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_SubmarineMapManager__TryInitRequest_b__32_0__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (EventScanPanelMapRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v11,
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_EventScanPanelMapRequest___);
  eventId = SubmarineMapManager__get_eventId(this, v13);
  v14 = this->fields.mapInfo;
  if ( !v14 || !Request_WarBoardWallAttackRequest )
LABEL_12:
    sub_B0D97C(eventId);
  EventScanPanelMapRequest__beginRequest(Request_WarBoardWallAttackRequest, eventId, v14->fields.mapId, 0, 0, 0LL);
}


void __fastcall SubmarineMapManager__TryOpenNewScannerDialog(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  SubmarineMapDataManager_o *submarineData; // x0
  int32_t NewReleasedScanId; // w0
  __int64 v6; // x1
  __int64 v7; // x2
  SubmarineNewScannerDialog_o *newScannerDialog; // x21
  int32_t v9; // w20
  System_Action_o *v10; // x22
  const MethodInfo *v11; // x3

  if ( (byte_4213628 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SubmarineMapManager_TryOpenNewScannerDialog__, v3);
    byte_4213628 = 1;
  }
  submarineData = this->fields.submarineData;
  if ( !submarineData )
    goto LABEL_8;
  NewReleasedScanId = SubmarineMapDataManager__GetNewReleasedScanId(submarineData, method);
  if ( NewReleasedScanId >= 1 )
  {
    newScannerDialog = this->fields.newScannerDialog;
    v9 = NewReleasedScanId;
    v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_SubmarineMapManager_TryOpenNewScannerDialog__, 0LL);
    if ( newScannerDialog )
    {
      SubmarineNewScannerDialog__Open(newScannerDialog, v9, v10, v11);
      return;
    }
LABEL_8:
    sub_B0D97C(submarineData);
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
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_421361A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__get_Current__, v4);
    this = (SubmarineMapManager_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__,
                                      v5);
    byte_421361A = 1;
  }
  memset(&v8, 0, sizeof(v8));
  submarineData = v2->fields.submarineData;
  if ( !submarineData || (this = (SubmarineMapManager_o *)submarineData->fields._PanelDataList_k__BackingField) == 0LL )
    sub_B0D97C(this);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SubmarineMapPanelData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B0D97C(0LL);
    SubmarineMapPanelData__UpdatePanelDisplay((SubmarineMapPanelData_o *)v8.fields.current, v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SubmarineMapPanelData__Dispose__);
}


void __fastcall SubmarineMapManager__UpdateParams(
        SubmarineMapManager_o *this,
        int32_t beforeClearQuestId,
        const MethodInfo *method)
{
  SubmarineMapDataManager_o *submarineData; // x0

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B0D97C(0LL);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  UnityEngine_GameObject_c *klass; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  const MethodInfo *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  TerminalPramsManager_c *v25; // x0
  TerminalPramsManager_c *v26; // x0
  System_String_array *ValueByArray; // x0
  __int64 v28; // x8
  UnityEngine_GameObject_c *v29; // x8
  TitleInfoControl_o *genericContainerHandle; // x20
  EventDetailEntity_o *v31; // x21
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x1
  const MethodInfo *v34; // x1
  __int64 v35; // x0

  if ( (byte_421361B & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v8);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__, v9);
    sub_B0D8A4(&SubmarineMapManager___c__DisplayClass49_0_TypeInfo, v10);
    byte_421361B = 1;
  }
  v11 = sub_B0D974(SubmarineMapManager___c__DisplayClass49_0_TypeInfo, method, v2);
  SubmarineMapManager___c__DisplayClass49_0___ctor((SubmarineMapManager___c__DisplayClass49_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_54;
  *(_QWORD *)(v11 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v19);
    byte_421083D = 1;
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
  terminalMap = (ScrTerminalMap_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !terminalMap )
    goto LABEL_54;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)terminalMap,
                                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  terminalMap = (ScrTerminalMap_o *)SubmarineMapManager__get_eventId(this, v22);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_54;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         (WarEntity_o **)(v11 + 24),
         (int32_t)terminalMap,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    *(_DWORD *)(v11 + 32) = 0;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4211ADB )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v23);
      byte_4211ADB = 1;
    }
    v25 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v25 = TerminalPramsManager_TypeInfo;
    }
    if ( v25->static_fields->_BeforeEventSubmarineSaveData_k__BackingField )
    {
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v25);
      if ( !byte_4211ADB )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v23);
        byte_4211ADB = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v26 = TerminalPramsManager_TypeInfo;
      }
      terminalMap = (ScrTerminalMap_o *)v26->static_fields->_BeforeEventSubmarineSaveData_k__BackingField;
      if ( !terminalMap )
        goto LABEL_54;
      ValueByArray = EventSaveData__GetValueByArray((EventSaveData_o *)terminalMap, 0x2Cu, 0LL);
      if ( ValueByArray )
      {
        v28 = *(_QWORD *)&ValueByArray->max_length;
        if ( v28 )
        {
          if ( !(_DWORD)v28 )
          {
            v35 = sub_B0D9A8(ValueByArray);
            sub_B0D948(v35, 0LL);
          }
          *(_DWORD *)(v11 + 32) = System_Int32__Parse(ValueByArray->m_Items[0], 0LL);
        }
      }
    }
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v23);
      byte_421083D = 1;
    }
    terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalMap = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
    }
    v29 = terminalMap->fields.pfbLineP->klass;
    if ( v29 )
    {
      genericContainerHandle = (TitleInfoControl_o *)v29->_2.genericContainerHandle;
      v31 = *(EventDetailEntity_o **)(v11 + 24);
      v32 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v23, v24);
      System_Action___ctor(
        v32,
        (Il2CppObject *)v11,
        Method_SubmarineMapManager___c__DisplayClass49_0__UpdateTerminalInfo_b__0__,
        0LL);
      if ( genericContainerHandle )
      {
        TitleInfoControl__CheckEventSubmarineStatusAnim(genericContainerHandle, v31, v32, 0LL);
        return;
      }
    }
LABEL_54:
    sub_B0D97C(terminalMap);
  }
  ((void (__fastcall *)(SubmarineMapManager_o *, void *))this->klass->vtable._32_AllTouchBlockForceFalse.method)(
    this,
    this->klass[1]._1.image);
  SubmarineMapManager__HideScannableEffect(this, v33);
  SubmarineMapManager__ShowScannableEffect(this, v34);
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
    sub_B0D97C(0LL);
  SubmarineMapDataManager__UpdateParams(submarineData, -1, v2);
  SubmarineMapManager__UpdateClosedPanelDisplay(this, v5);
  SubmarineMapManager__HideSelectedPanelEffect(this, v6);
  SubmarineMapManager__UpdateTerminalInfo(this, v7);
}


void __fastcall SubmarineMapManager___OnEveryActionEnd_b__28_0(SubmarineMapManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20

  if ( (byte_4213641 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__, v4);
    byte_4213641 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineMapManager__OnEveryActionEnd_b__28_1__, 0LL);
  ((void (__fastcall *)(SubmarineMapManager_o *, System_Action_o *, Il2CppMethodPointer))this->klass->vtable._24_OnAfterQuestAfterAction.method)(
    this,
    v5,
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
  CommonUI_o *Instance; // x0

  if ( (byte_4213642 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4213642 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__SetSkipAnimation(Instance, 1, 0LL);
  UnityEngine_Time__set_timeScale(this->fields.ACCELERATION_TIME_SCALE, 0LL);
  this->fields.isTimeScaleAccelerate = 1;
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_1(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4213643 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SubmarineMapManager__StartScanPerformance_b__40_2__, v4);
    byte_4213643 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_2__, 0LL);
  SubmarineMapManager__SubsequentialOpenPanelTaskChain(this, v5, v6);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_2(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4213644 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SubmarineMapManager__StartScanPerformance_b__40_3__, v4);
    byte_4213644 = 1;
  }
  v5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_SubmarineMapManager__StartScanPerformance_b__40_3__, 0LL);
  SubmarineMapManager__RevealAvailableSpots(this, v5, v6);
}


void __fastcall SubmarineMapManager___StartScanPerformance_b__40_3(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4213645 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_4213645 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B0D97C(0LL);
  MissionNotifyManager__EndPause(v4, 0LL);
  SubmarineMapManager__OnEndScan(this, v5);
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
    sub_B0D97C(this);
  return MapControl_WarInfo__GetEventId((MapControl_WarInfo_o *)this, 0LL);
}


SubmarinePanelPositionCalculator_o *__fastcall SubmarineMapManager__get_positionCalculator(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B0D97C(this);
  return submarineData->fields._PositionCalculator_k__BackingField;
}


SubmarineSettingsManager_o *__fastcall SubmarineMapManager__get_settings(
        SubmarineMapManager_o *this,
        const MethodInfo *method)
{
  struct SubmarineMapDataManager_o *submarineData; // x8

  submarineData = this->fields.submarineData;
  if ( !submarineData )
    sub_B0D97C(this);
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
  SubmarineMapManager__CoInitRequest_d__21_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct SubmarineMapManager_o *_4__this; // x20
  bool v9; // w21
  __int64 v10; // x1
  __int64 v11; // x2
  System_Func_bool__o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_WaitUntil_o *v15; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_421173D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_bool___ctor__, method);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B0D8A4(&Method_SubmarineMapManager__CoInitRequest_b__21_0__, v5);
    this = (SubmarineMapManager__CoInitRequest_d__21_o *)sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v6);
    byte_421173D = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    this = (SubmarineMapManager__CoInitRequest_d__21_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !this
      || (CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL), !_4__this)
      || (this = (SubmarineMapManager__CoInitRequest_d__21_o *)_4__this->fields.submarineData) == 0LL )
    {
LABEL_14:
      sub_B0D97C(this);
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
  this = (SubmarineMapManager__CoInitRequest_d__21_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
    goto LABEL_14;
  v9 = 1;
  CommonUI__SetConnect((CommonUI_o *)this, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v10, v11);
  System_Func_bool____ctor(
    v12,
    (Il2CppObject *)_4__this,
    Method_SubmarineMapManager__CoInitRequest_b__21_0__,
    (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
  v15 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v13, v14);
  UnityEngine_WaitUntil___ctor(v15, v12, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = &v2->fields.__2__current;
  sub_B0D840(p__2__current, v15);
  *((_DWORD *)p__2__current - 2) = 1;
  return v9;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_SubmarineMapManager__CoInitRequest_d__21_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *v2; // x19
  __int64 v3; // x1
  struct SubmarineMapManager_o *_4__this; // x20
  struct MapControl_MapInfo_o *mapInfo; // x8
  struct SubmarineMapAssetManager_o *assetManager; // x8
  struct ScrTerminalMap_o *terminalMap; // x8
  UnityEngine_Texture2D_o *ResizedTexture2D; // x0
  UnityEngine_Texture2D_o **p_closedPanelTexture; // x21
  struct SubmarineMapAssetManager_o *v10; // x8
  UnityEngine_Object_o *ClosedPanelTexture_k__BackingField; // x22
  UnityEngine_Texture2D_o *DarkTexture2D; // x0
  struct SubmarineMapDataManager_o *submarineData; // x8
  int32_t v14; // w0

  v2 = this;
  if ( (byte_421173E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)sub_B0D8A4(
                                                                  &Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__,
                                                                  v3);
    byte_421173E = 1;
  }
  if ( !v2->fields.__1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
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
          ResizedTexture2D = ClosePanelTextureUtil__CreateResizedTexture2D(
                               (UnityEngine_Texture2D_o *)this,
                               terminalMap->fields._currentMapImageH_k__BackingField,
                               LODWORD(terminalMap->fields.mapImageOffsetX),
                               0LL);
          _4__this->fields.closedPanelTexture = ResizedTexture2D;
          p_closedPanelTexture = &_4__this->fields.closedPanelTexture;
          sub_B0D840(&_4__this->fields.closedPanelTexture, ResizedTexture2D);
          v10 = _4__this->fields.assetManager;
          if ( v10 )
          {
            ClosedPanelTexture_k__BackingField = (UnityEngine_Object_o *)v10->fields._ClosedPanelTexture_k__BackingField;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(ClosedPanelTexture_k__BackingField, 0LL, 0LL) )
            {
              DarkTexture2D = ClosePanelTextureUtil__CreateDarkTexture2D(*p_closedPanelTexture, 0.4, 0LL);
              *p_closedPanelTexture = DarkTexture2D;
              sub_B0D840(&_4__this->fields.closedPanelTexture, DarkTexture2D);
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
                v14 = SubmarineQuestSaveInfo__get_BeforeClearQuestId((SubmarineQuestSaveInfo_o *)this, 0LL);
                SubmarineMapManager__UpdateParams(_4__this, v14, 0LL);
                SubmarineMapManager__UpdateClosedPanelDisplay(_4__this, 0LL);
                SubmarineMapManager__UpdateScannObstacleEffects(_4__this, 0LL);
                ActionExtensions__Call(v2->fields.finishCallback, 0LL);
                return 0;
              }
            }
          }
        }
      }
LABEL_26:
      sub_B0D97C(this);
    }
    this = (SubmarineMapManager__CoOnAfterSpotCreated_d__24_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_SubmarineMapManager__CoOnAfterSpotCreated_d__24_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct SubmarineMapManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211733 & 1) == 0 )
  {
    sub_B0D8A4(&SubmarineMapManager___c_TypeInfo, v1);
    byte_4211733 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(SubmarineMapManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = SubmarineMapManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct SubmarineMapManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return !x->fields._IsOpened_k__BackingField;
}


bool __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_0(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields._IsHitObstacle_k__BackingField || x->fields._IsOpened_k__BackingField;
}


int32_t __fastcall SubmarineMapManager___c___CreateScanOpenPanelTask_b__98_1(
        SubmarineMapManager___c_o *this,
        SubmarineScanEvent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v3; // x1
  SubmarineMapManager_o *_4__this; // x0
  UnityEngine_MonoBehaviour_o *v5; // x20
  SubmarineMapAssetManager_o *monitor; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *_9__1; // x23
  int32_t v10; // w22
  System_Collections_IEnumerator_o *Assets; // x1

  if ( (byte_4211734 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__, v3);
    byte_4211734 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  SubmarineMapManager__CreateAssetManagerIfNotExists(_4__this, 0LL);
  v5 = (UnityEngine_MonoBehaviour_o *)this->fields.__4__this;
  if ( !v5 )
    goto LABEL_9;
  monitor = (SubmarineMapAssetManager_o *)v5[6].monitor;
  _4__this = (SubmarineMapManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v10 = (int)_4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass20_0__LoadAssets_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !monitor )
LABEL_9:
    sub_B0D97C(_4__this);
  Assets = SubmarineMapAssetManager__CoLoadAssets(monitor, v10, _9__1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(v5, Assets, 0LL);
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
    sub_B0D97C(_4__this);
  }
  inited = SubmarineMapManager__CoInitRequest(this->fields.__4__this, this->fields.finishCallback, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128(v6, inited, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x20
  __int64 v8; // x1
  System_Collections_Generic_List_string__c *klass; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4211735 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
    byte_4211735 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !this->fields.__4__this )
    goto LABEL_19;
  v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  Instance = (DataManager_o *)SubmarineMapManager__get_eventId(this->fields.__4__this, 0LL);
  if ( !v7 )
    goto LABEL_19;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         v7,
         &entity,
         (int32_t)Instance,
         (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
  {
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v8);
      byte_421083D = 1;
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
    sub_B0D97C(Instance);
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
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  SubmarineMapManager_o *_4__this; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_int__o *_9__1; // x22
  SubmarineMapManager_o *v9; // x20

  if ( (byte_4211736 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v3);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__, v4);
    byte_4211736 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  SubmarineMapManager__HideScannableEffect(_4__this, 0LL);
  _9__1 = this->fields.__9__1;
  v9 = this->fields.__4__this;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v6, v7);
    System_Action_int____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass36_0__ClickPanel_b__1__,
      (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v9 )
LABEL_8:
    sub_B0D97C(_4__this);
  SubmarineMapManager__OpenSelectScannerDialog(v9, _9__1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass36_0___ClickPanel_b__1(
        SubmarineMapManager___c__DisplayClass36_0_o *this,
        int32_t scanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  SubmarineMapManager_o *_4__this; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_bool__o *_9__1; // x22
  int32_t scanId; // w20
  SubmarineMapManager_o *v10; // x21
  _BOOL4 isShowDialogUpper; // w24

  if ( (byte_4211737 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__, v4);
    byte_4211737 = 1;
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
  v10 = this->fields.__4__this;
  isShowDialogUpper = this->fields.isShowDialogUpper;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v6, v7);
    System_Action_bool____ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__1__,
      (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B0D840(&this->fields.__9__1, _9__1);
  }
  if ( !v10 )
LABEL_9:
    sub_B0D97C(_4__this);
  SubmarineMapManager__OpenScanConfirmDialog(v10, scanId, isShowDialogUpper, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScannerSelected_b__1(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        bool yes,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  SubmarineMapManager_o *_4__this; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  SubmarineMapManager_o *v10; // x20
  System_Action_int__o *_9__2; // x22

  if ( (byte_4211738 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, yes);
    sub_B0D8A4(&System_Action_int__TypeInfo, v5);
    sub_B0D8A4(&Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__, v6);
    byte_4211738 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  SubmarineMapManager__HideScanRange(_4__this, 0LL);
  v10 = this->fields.__4__this;
  if ( yes )
  {
    if ( v10 )
    {
      SubmarineMapManager__OnScanDecided(this->fields.__4__this, this->fields.scanId, this->fields.panelData, 0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(_4__this);
  }
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v8, v9);
    System_Action_int____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_SubmarineMapManager___c__DisplayClass37_0__OnScannerSelected_b__2__,
      (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  if ( !v10 )
    goto LABEL_11;
  SubmarineMapManager__OpenSelectScannerDialog(v10, _9__2, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass37_0___OnScannerSelected_b__2(
        SubmarineMapManager___c__DisplayClass37_0_o *this,
        int32_t lscanId,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1
  ErrorDialog_c *klass; // x8
  __int64 v7; // x1
  ErrorDialog_c *v8; // x8

  if ( (byte_4211739 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v3);
    byte_4211739 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v5);
    byte_421083D = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v7);
    byte_421083D = 1;
  }
  Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Instance = (CommonUI_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = Instance->fields.errorDialog->klass;
  if ( !v8
    || (Instance = *(CommonUI_o **)&v8->_2.static_fields_size) == 0LL
    || (ScrTerminalMap__UpdateAllSpotGameObject((ScrTerminalMap_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL)
    || (SubmarineMapManager__CheckNewPlayableEventQuest((SubmarineMapManager_o *)Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_25:
    sub_B0D97C(Instance);
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
    sub_B0D97C(this);
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
  struct SubmarineMapManager_o *_4__this; // x0

  if ( (byte_421173A & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_int___, *(_QWORD *)&scanId);
    byte_421173A = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_int_(
    (System_Action_T__o *)this->fields.callback,
    scanId,
    (const MethodInfo_2D96680 *)Method_ActionExtensions_Call_int___);
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
  struct SubmarineMapManager_o *_4__this; // x0

  if ( (byte_421173B & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, yes);
    byte_421173B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct SubmarineMapManager_o *, _QWORD, Il2CppMethodPointer))_4__this->klass->vtable._31_SetCameraWorkBlock.method)(
    _4__this,
    0LL,
    _4__this->klass->vtable._32_AllTouchBlockForceFalse.methodPtr);
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.callback,
    yes,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(scanAnimObj, 1, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__1(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineScanVoiceComponent_o *svtScanVoice; // x0

  svtScanVoice = this->fields.svtScanVoice;
  if ( !svtScanVoice )
    sub_B0D97C(0LL);
  SubmarineScanVoiceComponent__PlayScanVoice(svtScanVoice, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__2(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  SubmarineMapManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  SubmarineMapManager__HideSelectedPanelEffect(_4__this, 0LL);
}


void __fastcall SubmarineMapManager___c__DisplayClass94_0___CreateScanTask_b__3(
        SubmarineMapManager___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scanAnimObj; // x19

  if ( (byte_421173C & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421173C = 1;
  }
  scanAnimObj = (UnityEngine_Object_o *)this->fields.scanAnimObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(scanAnimObj, 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields._Chain_k__BackingField == this->fields.i;
}